/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basic_swift_bean;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.service.*;
import com.facebook.thrift.client.*;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.util.*;
import reactor.core.publisher.Mono;

@SwiftGenerated
@com.facebook.swift.service.ThriftService("LegacyService")
public interface LegacyService extends java.io.Closeable, com.facebook.thrift.util.BlockingService {
    static com.facebook.thrift.server.RpcServerHandlerBuilder<LegacyService> serverHandlerBuilder(LegacyService _serverImpl) {
        return new com.facebook.thrift.server.RpcServerHandlerBuilder<LegacyService>(_serverImpl) {
            @Override
            public com.facebook.thrift.server.RpcServerHandler build() {
                return new LegacyServiceRpcServerHandler(impl, eventHandlers);
            }
        };
    }

    static com.facebook.thrift.client.ClientBuilder<LegacyService> clientBuilder() {
        return new ClientBuilder<LegacyService>() {
            @Override
            public LegacyService build(Mono<RpcClient> rpcClientMono) {
                LegacyService.Reactive _delegate =
                    new LegacyServiceReactiveClient(protocolId, rpcClientMono, headers, persistentHeaders);
                return new LegacyServiceReactiveBlockingWrapper(_delegate);
            }
        };
    }

    @com.facebook.swift.service.ThriftService("LegacyService")
    public interface Async extends java.io.Closeable, com.facebook.thrift.util.AsyncService {
        static com.facebook.thrift.server.RpcServerHandlerBuilder<LegacyService.Async> serverHandlerBuilder(LegacyService.Async _serverImpl) {
            return new com.facebook.thrift.server.RpcServerHandlerBuilder<LegacyService.Async>(_serverImpl) {
                @Override
                public com.facebook.thrift.server.RpcServerHandler build() {
                    return new LegacyServiceRpcServerHandler(impl, eventHandlers);
                }
            };
        }

        static com.facebook.thrift.client.ClientBuilder<LegacyService.Async> clientBuilder() {
            return new ClientBuilder<LegacyService.Async>() {
                @Override
                public LegacyService.Async build(Mono<RpcClient> rpcClientMono) {
                    LegacyService.Reactive _delegate =
                        new LegacyServiceReactiveClient(protocolId, rpcClientMono, headers, persistentHeaders);
                    return new LegacyServiceReactiveAsyncWrapper(_delegate);
                }
            };
        }

        @java.lang.Override void close();

        @ThriftMethod(value = "getPoints")
        ListenableFuture<Map<String, List<Integer>>> getPoints(
            @com.facebook.swift.codec.ThriftField(value=1, name="key", requiredness=Requiredness.NONE) final Set<String> key,
            @com.facebook.swift.codec.ThriftField(value=-1, isLegacyId=true, name="legacyStuff", requiredness=Requiredness.NONE) final long legacyStuff);

        default ListenableFuture<Map<String, List<Integer>>> getPoints(
            @com.facebook.swift.codec.ThriftField(value=1, name="key", requiredness=Requiredness.NONE) final Set<String> key,
            @com.facebook.swift.codec.ThriftField(value=-1, isLegacyId=true, name="legacyStuff", requiredness=Requiredness.NONE) final long legacyStuff,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default ListenableFuture<ResponseWrapper<Map<String, List<Integer>>>> getPointsWrapper(
            @com.facebook.swift.codec.ThriftField(value=1, name="key", requiredness=Requiredness.NONE) final Set<String> key,
            @com.facebook.swift.codec.ThriftField(value=-1, isLegacyId=true, name="legacyStuff", requiredness=Requiredness.NONE) final long legacyStuff,
            RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }
    }
    @java.lang.Override void close();

    @ThriftMethod(value = "getPoints")
    Map<String, List<Integer>> getPoints(
        @com.facebook.swift.codec.ThriftField(value=1, name="key", requiredness=Requiredness.NONE) final Set<String> key,
        @com.facebook.swift.codec.ThriftField(value=-1, isLegacyId=true, name="legacyStuff", requiredness=Requiredness.NONE) final long legacyStuff) throws org.apache.thrift.TException;

    default Map<String, List<Integer>> getPoints(
        @com.facebook.swift.codec.ThriftField(value=1, name="key", requiredness=Requiredness.NONE) final Set<String> key,
        @com.facebook.swift.codec.ThriftField(value=-1, isLegacyId=true, name="legacyStuff", requiredness=Requiredness.NONE) final long legacyStuff,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    default ResponseWrapper<Map<String, List<Integer>>> getPointsWrapper(
        @com.facebook.swift.codec.ThriftField(value=1, name="key", requiredness=Requiredness.NONE) final Set<String> key,
        @com.facebook.swift.codec.ThriftField(value=-1, isLegacyId=true, name="legacyStuff", requiredness=Requiredness.NONE) final long legacyStuff,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
        throw new UnsupportedOperationException();
    }

    @com.facebook.swift.service.ThriftService("LegacyService")
    interface Reactive extends reactor.core.Disposable, com.facebook.thrift.util.ReactiveService {
        static com.facebook.thrift.server.RpcServerHandlerBuilder<LegacyService.Reactive> serverHandlerBuilder(LegacyService.Reactive _serverImpl) {
            return new com.facebook.thrift.server.RpcServerHandlerBuilder<LegacyService.Reactive>(_serverImpl) {
                @Override
                public com.facebook.thrift.server.RpcServerHandler build() {
                    return new LegacyServiceRpcServerHandler(impl, eventHandlers);
                }
            };
        }

        static com.facebook.thrift.client.ClientBuilder<LegacyService.Reactive> clientBuilder() {
            return new ClientBuilder<LegacyService.Reactive>() {
                @Override
                public LegacyService.Reactive build(Mono<RpcClient> rpcClientMono) {
                    return new LegacyServiceReactiveClient(protocolId, rpcClientMono, headers, persistentHeaders);
                }
            };
        }

        @ThriftMethod(value = "getPoints")
        reactor.core.publisher.Mono<Map<String, List<Integer>>> getPoints(final Set<String> key, final long legacyStuff);

        default reactor.core.publisher.Mono<Map<String, List<Integer>>> getPoints(final Set<String> key, final long legacyStuff, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

        default reactor.core.publisher.Mono<ResponseWrapper<Map<String, List<Integer>>>> getPointsWrapper(final Set<String> key, final long legacyStuff, RpcOptions rpcOptions) {
            throw new UnsupportedOperationException();
        }

    }
}
