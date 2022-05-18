/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.includes;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.service.*;
import com.facebook.thrift.client.*;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.util.*;
import reactor.core.publisher.Mono;

@SwiftGenerated
@com.facebook.swift.service.ThriftService("MyService")
public interface MyService extends java.io.Closeable, com.facebook.thrift.util.BlockingService {
    static com.facebook.thrift.server.RpcServerHandlerBuilder<MyService> serverHandlerBuilder(MyService _serverImpl) {
        return new com.facebook.thrift.server.RpcServerHandlerBuilder<MyService>(_serverImpl) {
            @Override
            public com.facebook.thrift.server.RpcServerHandler build() {
                return new MyServiceRpcServerHandler(impl, eventHandlers);
            }
        };
    }

    static com.facebook.thrift.client.ClientBuilder<MyService> clientBuilder() {
        return new ClientBuilder<MyService>() {
            @Override
            public MyService build(Mono<RpcClient> rpcClientMono) {
                MyService.Reactive _delegate =
                    new MyServiceReactiveClient(protocolId, rpcClientMono, headers, persistentHeaders);
                return new MyServiceReactiveBlockingWrapper(_delegate);
            }
        };
    }

    @com.facebook.swift.service.ThriftService("MyService")
    public interface Async extends java.io.Closeable, com.facebook.thrift.util.AsyncService {
        static com.facebook.thrift.server.RpcServerHandlerBuilder<MyService.Async> serverHandlerBuilder(MyService.Async _serverImpl) {
            return new com.facebook.thrift.server.RpcServerHandlerBuilder<MyService.Async>(_serverImpl) {
                @Override
                public com.facebook.thrift.server.RpcServerHandler build() {
                    return new MyServiceRpcServerHandler(impl, eventHandlers);
                }
            };
        }

        static com.facebook.thrift.client.ClientBuilder<MyService.Async> clientBuilder() {
            return new ClientBuilder<MyService.Async>() {
                @Override
                public MyService.Async build(Mono<RpcClient> rpcClientMono) {
                    MyService.Reactive _delegate =
                        new MyServiceReactiveClient(protocolId, rpcClientMono, headers, persistentHeaders);
                    return new MyServiceReactiveAsyncWrapper(_delegate);
                }
            };
        }

        @java.lang.Override void close();

        @ThriftMethod(value = "query")
        ListenableFuture<Void> query(
            @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
            @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i);

        default ListenableFuture<Void> query(
            @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
            @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default ListenableFuture<ResponseWrapper<Void>> queryWrapper(
            @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
            @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        @ThriftMethod(value = "has_arg_docs")
        ListenableFuture<Void> hasArgDocs(
            @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
            @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i);

        default ListenableFuture<Void> hasArgDocs(
            @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
            @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default ListenableFuture<ResponseWrapper<Void>> hasArgDocsWrapper(
            @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
            @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }
    }
    @java.lang.Override void close();

    @ThriftMethod(value = "query")
    void query(
        @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
        @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i) throws org.apache.thrift.TException;

    default void query(
        @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
        @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    default ResponseWrapper<Void> queryWrapper(
        @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
        @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    @ThriftMethod(value = "has_arg_docs")
    void hasArgDocs(
        @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
        @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i) throws org.apache.thrift.TException;

    default void hasArgDocs(
        @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
        @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    default ResponseWrapper<Void> hasArgDocsWrapper(
        @com.facebook.swift.codec.ThriftField(value=1, name="s", requiredness=Requiredness.NONE) final test.fixtures.includes.MyStruct s,
        @com.facebook.swift.codec.ThriftField(value=2, name="i", requiredness=Requiredness.NONE) final test.fixtures.includes.includes.Included i,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    @com.facebook.swift.service.ThriftService("MyService")
    interface Reactive extends reactor.core.Disposable, com.facebook.thrift.util.ReactiveService {
        static com.facebook.thrift.server.RpcServerHandlerBuilder<MyService.Reactive> serverHandlerBuilder(MyService.Reactive _serverImpl) {
            return new com.facebook.thrift.server.RpcServerHandlerBuilder<MyService.Reactive>(_serverImpl) {
                @Override
                public com.facebook.thrift.server.RpcServerHandler build() {
                    return new MyServiceRpcServerHandler(impl, eventHandlers);
                }
            };
        }

        static com.facebook.thrift.client.ClientBuilder<MyService.Reactive> clientBuilder() {
            return new ClientBuilder<MyService.Reactive>() {
                @Override
                public MyService.Reactive build(Mono<RpcClient> rpcClientMono) {
                    return new MyServiceReactiveClient(protocolId, rpcClientMono, headers, persistentHeaders);
                }
            };
        }

        @ThriftMethod(value = "query")
        reactor.core.publisher.Mono<Void> query(final test.fixtures.includes.MyStruct s, final test.fixtures.includes.includes.Included i);

        default reactor.core.publisher.Mono<Void> query(final test.fixtures.includes.MyStruct s, final test.fixtures.includes.includes.Included i, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default reactor.core.publisher.Mono<ResponseWrapper<Void>> queryWrapper(final test.fixtures.includes.MyStruct s, final test.fixtures.includes.includes.Included i, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        @ThriftMethod(value = "has_arg_docs")
        reactor.core.publisher.Mono<Void> hasArgDocs(final test.fixtures.includes.MyStruct s, final test.fixtures.includes.includes.Included i);

        default reactor.core.publisher.Mono<Void> hasArgDocs(final test.fixtures.includes.MyStruct s, final test.fixtures.includes.includes.Included i, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default reactor.core.publisher.Mono<ResponseWrapper<Void>> hasArgDocsWrapper(final test.fixtures.includes.MyStruct s, final test.fixtures.includes.includes.Included i, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

    }
}
