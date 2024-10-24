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
	"fmt"
	"net"
)

// NewSimpleServer creates a new server that only supports Header Transport.
func NewSimpleServer(processor Processor, listener net.Listener, transportType TransportID, options ...ServerOption) Server {
	serverOptions := newServerOptions(options...)
	processor = WrapInterceptor(serverOptions.interceptor, processor)
	switch transportType {
	case TransportIDHeader:
		return newHeaderServer(processor, listener, serverOptions)
	case TransportIDRocket:
		return newRocketServer(processor, listener, serverOptions)
	case TransportIDUpgradeToRocket:
		return newUpgradeToRocketServer(processor, listener, serverOptions)
	default:
		panic(fmt.Sprintf("SimpleServer does not support: %v", transportType))
	}
}
