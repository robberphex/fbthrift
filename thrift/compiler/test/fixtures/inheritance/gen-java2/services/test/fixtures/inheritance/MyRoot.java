/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.inheritance;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.service.*;
import com.facebook.thrift.client.*;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.util.*;
import reactor.core.publisher.Mono;

@SwiftGenerated
@com.facebook.swift.service.ThriftService("MyRoot")
public interface MyRoot extends java.io.Closeable, com.facebook.thrift.util.BlockingService {
    static com.facebook.thrift.server.RpcServerHandlerBuilder<MyRoot> serverHandlerBuilder(MyRoot _serverImpl) {
        return new com.facebook.thrift.server.RpcServerHandlerBuilder<MyRoot>(_serverImpl) {
            @Override
            public com.facebook.thrift.server.RpcServerHandler build() {
                return new MyRootRpcServerHandler(impl, eventHandlers);
            }
        };
    }

    static com.facebook.thrift.client.ClientBuilder<MyRoot> clientBuilder() {
        return new ClientBuilder<MyRoot>() {
            @Override
            public MyRoot build(Mono<RpcClient> rpcClientMono) {
                MyRoot.Reactive _delegate =
                    new MyRootReactiveClient(protocolId, rpcClientMono, headers, persistentHeaders);
                return new MyRootReactiveBlockingWrapper(_delegate);
            }
        };
    }

    @com.facebook.swift.service.ThriftService("MyRoot")
    public interface Async extends java.io.Closeable, com.facebook.thrift.util.AsyncService {
        static com.facebook.thrift.server.RpcServerHandlerBuilder<MyRoot.Async> serverHandlerBuilder(MyRoot.Async _serverImpl) {
            return new com.facebook.thrift.server.RpcServerHandlerBuilder<MyRoot.Async>(_serverImpl) {
                @Override
                public com.facebook.thrift.server.RpcServerHandler build() {
                    return new MyRootRpcServerHandler(impl, eventHandlers);
                }
            };
        }

        static com.facebook.thrift.client.ClientBuilder<MyRoot.Async> clientBuilder() {
            return new ClientBuilder<MyRoot.Async>() {
                @Override
                public MyRoot.Async build(Mono<RpcClient> rpcClientMono) {
                    MyRoot.Reactive _delegate =
                        new MyRootReactiveClient(protocolId, rpcClientMono, headers, persistentHeaders);
                    return new MyRootReactiveAsyncWrapper(_delegate);
                }
            };
        }

        @java.lang.Override void close();

        @ThriftMethod(value = "do_root")
        ListenableFuture<Void> doRoot();

        default ListenableFuture<Void> doRoot(
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default ListenableFuture<ResponseWrapper<Void>> doRootWrapper(
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }
    }
    @java.lang.Override void close();

    @ThriftMethod(value = "do_root")
    void doRoot() throws org.apache.thrift.TException;

    default void doRoot(
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    default ResponseWrapper<Void> doRootWrapper(
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    @com.facebook.swift.service.ThriftService("MyRoot")
    interface Reactive extends reactor.core.Disposable, com.facebook.thrift.util.ReactiveService {
        static com.facebook.thrift.server.RpcServerHandlerBuilder<MyRoot.Reactive> serverHandlerBuilder(MyRoot.Reactive _serverImpl) {
            return new com.facebook.thrift.server.RpcServerHandlerBuilder<MyRoot.Reactive>(_serverImpl) {
                @Override
                public com.facebook.thrift.server.RpcServerHandler build() {
                    return new MyRootRpcServerHandler(impl, eventHandlers);
                }
            };
        }

        static com.facebook.thrift.client.ClientBuilder<MyRoot.Reactive> clientBuilder() {
            return new ClientBuilder<MyRoot.Reactive>() {
                @Override
                public MyRoot.Reactive build(Mono<RpcClient> rpcClientMono) {
                    return new MyRootReactiveClient(protocolId, rpcClientMono, headers, persistentHeaders);
                }
            };
        }

        @ThriftMethod(value = "do_root")
        reactor.core.publisher.Mono<Void> doRoot();

        default reactor.core.publisher.Mono<Void> doRoot(RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default reactor.core.publisher.Mono<ResponseWrapper<Void>> doRootWrapper(RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

    }
}
