/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/basic-structured-annotations/gen-cpp2/MyServiceAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace test::fixtures::basic-structured-annotations {
typedef apache::thrift::ThriftPresult<false> MyService_first_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::string, ::test::fixtures::basic-structured-annotations::annotated_inline_string*>> MyService_first_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::integral, ::std::int64_t*>> MyService_second_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, bool*>> MyService_second_presult;
} // namespace test::fixtures::basic-structured-annotations
template <typename Protocol_>
apache::thrift::SerializedRequest apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::fbthrift_serialize_first(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack) {
  ::test::fixtures::basic-structured-annotations::MyService_first_pargs args;
  const auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  const auto writer = [&](Protocol_* p) { args.write(p); };
  return apache::thrift::preprocessSendT<Protocol_>(
      prot,
      rpcOptions,
      contextStack,
      header,
      "first",
      writer,
      sizer,
      channel_->getChecksumSamplingRate());
}

template <typename RpcOptions>
void apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::fbthrift_send_first(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback) {

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "first",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "test.dev/fixtures/basic-structured-annotations/MyService");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(std::move(request), std::forward<RpcOptions>(rpcOptions), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata));
}

template <typename Protocol_>
apache::thrift::SerializedRequest apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::fbthrift_serialize_second(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack, ::std::int64_t p_count) {
  ::test::fixtures::basic-structured-annotations::MyService_second_pargs args;
  args.get<0>().value = &p_count;
  const auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  const auto writer = [&](Protocol_* p) { args.write(p); };
  return apache::thrift::preprocessSendT<Protocol_>(
      prot,
      rpcOptions,
      contextStack,
      header,
      "second",
      writer,
      sizer,
      channel_->getChecksumSamplingRate());
}

template <typename RpcOptions>
void apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::fbthrift_send_second(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback) {

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "second",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "test.dev/fixtures/basic-structured-annotations/MyService");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(std::move(request), std::forward<RpcOptions>(rpcOptions), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata));
}



void apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::first(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  first(rpcOptions, std::move(callback));
}

void apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::first(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto [ctx, header] = firstCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  fbthrift_serialize_and_send_first(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback));
}

void apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::fbthrift_serialize_and_send_first(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions) {
  apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& writer) {
    apache::thrift::SerializedRequest request = fbthrift_serialize_first(&writer, rpcOptions, *header, contextStack);
    if (stealRpcOptions) {
      fbthrift_send_first(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback));
    } else {
      fbthrift_send_first(std::move(request), rpcOptions, std::move(header), std::move(callback));
    }
  });
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::firstCtx(apache::thrift::RpcOptions* rpcOptions) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(channel_->getProtocolId());
  if (rpcOptions) {
    header->setHeaders(rpcOptions->releaseWriteHeaders());
  }

  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers_,
      interceptors_,
      getServiceName(),
      "MyService.first",
      *header);

  return {std::move(ctx), std::move(header)};
}

void apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::sync_first(::test::fixtures::basic-structured-annotations::annotated_inline_string& _return) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_first(rpcOptions, _return);
}

void apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::sync_first(apache::thrift::RpcOptions& rpcOptions, ::test::fixtures::basic-structured-annotations::annotated_inline_string& _return) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = firstCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
#if FOLLY_HAS_COROUTINES
  const bool shouldProcessClientInterceptors = ctxAndHeader.first && ctxAndHeader.first->shouldProcessClientInterceptors();
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnRequest());
  }
#endif
  callback.waitUntilDone(
    evb,
    [&] {
      fbthrift_serialize_and_send_first(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback));
    });
#if FOLLY_HAS_COROUTINES
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnResponse());
  }
#endif
  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctxAndHeader.first));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      recv_first(_return, returnState);
  });
}


folly::Future<::test::fixtures::basic-structured-annotations::annotated_inline_string> apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::future_first() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_first(rpcOptions);
}

folly::SemiFuture<::test::fixtures::basic-structured-annotations::annotated_inline_string> apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::semifuture_first() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_first(rpcOptions);
}

folly::Future<::test::fixtures::basic-structured-annotations::annotated_inline_string> apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::future_first(apache::thrift::RpcOptions& rpcOptions) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<::test::fixtures::basic-structured-annotations::annotated_inline_string>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<::test::fixtures::basic-structured-annotations::annotated_inline_string>>(std::move(promise), recv_wrapped_first, channel_);
  first(rpcOptions, std::move(callback));
  return std::move(future).thenValue(CallbackHelper::extractResult);
}

folly::SemiFuture<::test::fixtures::basic-structured-annotations::annotated_inline_string> apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::semifuture_first(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_first, channel_);
  auto callback = std::move(callbackAndFuture.first);
  first(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<::test::fixtures::basic-structured-annotations::annotated_inline_string, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::header_future_first(apache::thrift::RpcOptions& rpcOptions) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<std::pair<::test::fixtures::basic-structured-annotations::annotated_inline_string, std::unique_ptr<apache::thrift::transport::THeader>>>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<::test::fixtures::basic-structured-annotations::annotated_inline_string>>(std::move(promise), recv_wrapped_first, channel_);
  first(rpcOptions, std::move(callback));
  return std::move(future).thenValue(CallbackHelper::extractResult);
}

folly::SemiFuture<std::pair<::test::fixtures::basic-structured-annotations::annotated_inline_string, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::header_semifuture_first(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_first, channel_);
  auto callback = std::move(callbackAndFuture.first);
  first(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

void apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::first(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  first(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::recv_wrapped_first(::test::fixtures::basic-structured-annotations::annotated_inline_string& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::test::fixtures::basic-structured-annotations::MyService_first_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::recv_first(::test::fixtures::basic-structured-annotations::annotated_inline_string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_first(_return, state);
  if (ew) {
    ew.throw_exception();
  }
}

void apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::recv_instance_first(::test::fixtures::basic-structured-annotations::annotated_inline_string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_first(_return, state);
}

folly::exception_wrapper apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::recv_instance_wrapped_first(::test::fixtures::basic-structured-annotations::annotated_inline_string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_first(_return, state);
}

void apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::second(std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int64_t p_count) {
  ::apache::thrift::RpcOptions rpcOptions;
  second(rpcOptions, std::move(callback), p_count);
}

void apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::second(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int64_t p_count) {
  auto [ctx, header] = secondCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  fbthrift_serialize_and_send_second(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback), p_count);
}

void apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::fbthrift_serialize_and_send_second(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int64_t p_count, bool stealRpcOptions) {
  apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& writer) {
    apache::thrift::SerializedRequest request = fbthrift_serialize_second(&writer, rpcOptions, *header, contextStack, p_count);
    if (stealRpcOptions) {
      fbthrift_send_second(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback));
    } else {
      fbthrift_send_second(std::move(request), rpcOptions, std::move(header), std::move(callback));
    }
  });
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::secondCtx(apache::thrift::RpcOptions* rpcOptions) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(channel_->getProtocolId());
  if (rpcOptions) {
    header->setHeaders(rpcOptions->releaseWriteHeaders());
  }

  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers_,
      interceptors_,
      getServiceName(),
      "MyService.second",
      *header);

  return {std::move(ctx), std::move(header)};
}

bool apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::sync_second(::std::int64_t p_count) {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_second(rpcOptions, p_count);
}

bool apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::sync_second(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_count) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = secondCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
#if FOLLY_HAS_COROUTINES
  const bool shouldProcessClientInterceptors = ctxAndHeader.first && ctxAndHeader.first->shouldProcessClientInterceptors();
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnRequest());
  }
#endif
  callback.waitUntilDone(
    evb,
    [&] {
      fbthrift_serialize_and_send_second(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback), p_count);
    });
#if FOLLY_HAS_COROUTINES
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnResponse());
  }
#endif
  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctxAndHeader.first));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      return recv_second(returnState);
  });
}


folly::Future<bool> apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::future_second(::std::int64_t p_count) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_second(rpcOptions, p_count);
}

folly::SemiFuture<bool> apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::semifuture_second(::std::int64_t p_count) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_second(rpcOptions, p_count);
}

folly::Future<bool> apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::future_second(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_count) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<bool>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<bool>>(std::move(promise), recv_wrapped_second, channel_);
  second(rpcOptions, std::move(callback), p_count);
  return std::move(future).thenValue(CallbackHelper::extractResult);
}

folly::SemiFuture<bool> apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::semifuture_second(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_count) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_second, channel_);
  auto callback = std::move(callbackAndFuture.first);
  second(rpcOptions, std::move(callback), p_count);
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::header_future_second(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_count) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<bool>>(std::move(promise), recv_wrapped_second, channel_);
  second(rpcOptions, std::move(callback), p_count);
  return std::move(future).thenValue(CallbackHelper::extractResult);
}

folly::SemiFuture<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::header_semifuture_second(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_count) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_second, channel_);
  auto callback = std::move(callbackAndFuture.first);
  second(rpcOptions, std::move(callback), p_count);
  return std::move(callbackAndFuture.second);
}

void apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::second(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, ::std::int64_t p_count) {
  second(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_count);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::recv_wrapped_second(bool& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::test::fixtures::basic-structured-annotations::MyService_second_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

bool apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::recv_second(::apache::thrift::ClientReceiveState& state) {
  bool _return;
  auto ew = recv_wrapped_second(_return, state);
  if (ew) {
    ew.throw_exception();
  }
  return _return;
}

bool apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::recv_instance_second(::apache::thrift::ClientReceiveState& state) {
  return recv_second(state);
}

folly::exception_wrapper apache::thrift::Client<::test::fixtures::basic-structured-annotations::MyService>::recv_instance_wrapped_second(bool& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_second(_return, state);
}


