/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package thrift

import (
	"context"
	"fmt"
	"net"
	"testing"

	rsocket "github.com/rsocket/rsocket-go"
	"github.com/rsocket/rsocket-go/core/transport"
	"github.com/rsocket/rsocket-go/payload"
	"github.com/rsocket/rsocket-go/rx/mono"
)

// rocketBouncer bounces back any message received from the client.
func rocketBouncer(_ context.Context, setup payload.SetupPayload, sendingSocket rsocket.CloseableRSocket) (rsocket.RSocket, error) {
	return rsocket.NewAbstractSocket(
		rsocket.RequestResponse(func(msg payload.Payload) mono.Mono {
			reqMetadataBytes, ok := msg.Metadata()
			if !ok {
				return mono.Error(fmt.Errorf("expected metadata"))
			}
			reqMetadata := &RequestRpcMetadata{}
			if err := deserializeCompact(reqMetadataBytes, reqMetadata); err != nil {
				return mono.Error(err)
			}
			if reqMetadata.GetProtocol() != ProtocolId_COMPACT {
				return mono.Error(fmt.Errorf("currently only supporting COMPACT protocol and not %v", reqMetadata.GetProtocol()))
			}
			compressed := reqMetadata.Compression != nil && *reqMetadata.Compression == CompressionAlgorithm_ZSTD
			if compressed {
				return mono.Error(fmt.Errorf("currently only supporting uncompressed COMPACT protocol"))
			}
			reqMessage := &MyTestStruct{}
			if err := deserializeCompact(msg.Data(), reqMessage); err != nil {
				return mono.Error(err)
			}
			respMetadata := NewResponseRpcMetadata()
			respMetadataBytes, err := serializeCompact(respMetadata)
			if err != nil {
				return mono.Error(err)
			}
			respDataBytes, err := serializeCompact(reqMessage)
			if err != nil {
				return mono.Error(err)
			}
			response := payload.New(respDataBytes, respMetadataBytes)
			return mono.Just(response)
		}),
	), nil
}

func rocketServe(ctx context.Context, listener net.Listener) error {
	transporter := func(context.Context) (transport.ServerTransport, error) {
		return transport.NewTCPServerTransport(func(context.Context) (net.Listener, error) {
			return listener, nil
		}), nil
	}
	r := rsocket.Receive().Acceptor(rocketBouncer).Transport(transporter)
	return r.Serve(ctx)
}

// This tests the rocket client against a rsocket server that is not integrated into the thrift library.
func TestRocketClientAgainstRSocketServer(t *testing.T) {
	ctx, cancel := context.WithCancel(context.Background())
	defer cancel()
	errChan := make(chan error)
	defer close(errChan)
	listener, err := net.Listen("tcp", ":0")
	if err != nil {
		t.Fatalf("failed to listen: %v", err)
	}
	go func() {
		errChan <- rocketServe(ctx, listener)
	}()
	addr := listener.Addr()
	conn, err := net.Dial(addr.Network(), addr.String())
	if err != nil {
		t.Fatalf("failed to dial: %v", err)
	}
	proto, err := NewRocketProtocol(conn)
	if err != nil {
		t.Fatalf("could not create client protocol: %s", err)
	}
	client := NewSerialChannel(proto)
	req := &MyTestStruct{
		St: "hello",
	}
	resp := &MyTestStruct{}
	if err := client.Call(context.Background(), "test", req, resp); err != nil {
		t.Fatalf("could not send message: %s", err)
	}
	if resp.St != "hello" {
		t.Fatalf("expected response to be %s, got %s", "hello", resp.St)
	}
	cancel()
	<-errChan
}