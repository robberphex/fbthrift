/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/BadServiceAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> GoodService_bar_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, ::std::int32_t*>> GoodService_bar_presult;
} // namespace cpp2
template <typename Protocol_, typename RpcOptions>
void apache::thrift::Client<::cpp2::GoodService>::barT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback) {

  ::cpp2::GoodService_bar_pargs args;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "bar",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "BadService");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::forward<RpcOptions>(rpcOptions), std::move(callback), contextStack, std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata), writer, sizer);
}



apache::thrift::Client<::cpp2::GoodService>::BadInteraction apache::thrift::Client<::cpp2::GoodService>::createBadInteraction() {
  return BadInteraction(channel_, "BadInteraction");
}
void apache::thrift::Client<::cpp2::GoodService>::bar(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  bar(rpcOptions, std::move(callback));
}

void apache::thrift::Client<::cpp2::GoodService>::bar(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto [ctx, header] = barCtx(&rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto* contextStack = ctx.get();
  if (callback) {
    callbackContext.ctx = std::move(ctx);
  }
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  barImpl(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback));
}

void apache::thrift::Client<::cpp2::GoodService>::barImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      if (stealRpcOptions) {
        barT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback));
      } else {
        barT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback));
      }
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      if (stealRpcOptions) {
        barT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback));
      } else {
        barT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback));
      }
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::cpp2::GoodService>::barCtx(apache::thrift::RpcOptions* rpcOptions) {
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
      "BadService.bar",
      *header);

  return {std::move(ctx), std::move(header)};
}

::std::int32_t apache::thrift::Client<::cpp2::GoodService>::sync_bar() {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_bar(rpcOptions);
}

::std::int32_t apache::thrift::Client<::cpp2::GoodService>::sync_bar(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = barCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  callback.waitUntilDone(
    evb,
    [&] {
      barImpl(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback));
    });

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
      return recv_bar(returnState);
  });
}


folly::Future<::std::int32_t> apache::thrift::Client<::cpp2::GoodService>::future_bar() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_bar(rpcOptions);
}

folly::SemiFuture<::std::int32_t> apache::thrift::Client<::cpp2::GoodService>::semifuture_bar() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_bar(rpcOptions);
}

folly::Future<::std::int32_t> apache::thrift::Client<::cpp2::GoodService>::future_bar(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<::std::int32_t> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<::std::int32_t>>(std::move(promise), recv_wrapped_bar, channel_);
  bar(rpcOptions, std::move(callback));
  return future;
}

folly::SemiFuture<::std::int32_t> apache::thrift::Client<::cpp2::GoodService>::semifuture_bar(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_bar, channel_);
  auto callback = std::move(callbackAndFuture.first);
  bar(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<::std::int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::cpp2::GoodService>::header_future_bar(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<::std::int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<::std::int32_t>>(std::move(promise), recv_wrapped_bar, channel_);
  bar(rpcOptions, std::move(callback));
  return future;
}

folly::SemiFuture<std::pair<::std::int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::cpp2::GoodService>::header_semifuture_bar(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_bar, channel_);
  auto callback = std::move(callbackAndFuture.first);
  bar(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}

void apache::thrift::Client<::cpp2::GoodService>::bar(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  bar(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::cpp2::GoodService>::recv_wrapped_bar(::std::int32_t& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::cpp2::GoodService_bar_presult;
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

::std::int32_t apache::thrift::Client<::cpp2::GoodService>::recv_bar(::apache::thrift::ClientReceiveState& state) {
  ::std::int32_t _return;
  auto ew = recv_wrapped_bar(_return, state);
  if (ew) {
    ew.throw_exception();
  }
  return _return;
}

::std::int32_t apache::thrift::Client<::cpp2::GoodService>::recv_instance_bar(::apache::thrift::ClientReceiveState& state) {
  return recv_bar(state);
}

folly::exception_wrapper apache::thrift::Client<::cpp2::GoodService>::recv_instance_wrapped_bar(::std::int32_t& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_bar(_return, state);
}



namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> GoodService_BadInteraction_foo_pargs;
typedef apache::thrift::ThriftPresult<true> GoodService_BadInteraction_foo_presult;
} // namespace cpp2
template <typename Protocol_, typename RpcOptions>
void apache::thrift::Client<::cpp2::GoodService>::BadInteraction::fooT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback) {
  apache::thrift::RpcOptions rpcOpts(std::forward<RpcOptions>(rpcOptions));
  setInteraction(rpcOpts);

  ::cpp2::GoodService_BadInteraction_foo_pargs args;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "BadInteraction.foo",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "BadService",
                ::apache::thrift::InteractionMethodPosition::Member,
                "BadInteraction");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::move(rpcOpts), std::move(callback), contextStack, std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata), writer, sizer);
}



void apache::thrift::Client<::cpp2::GoodService>::BadInteraction::foo(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto [ctx, header] = fooCtx(&rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto* contextStack = ctx.get();
  if (callback) {
    callbackContext.ctx = std::move(ctx);
  }
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  fooImpl(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback));
}

void apache::thrift::Client<::cpp2::GoodService>::BadInteraction::fooImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      if (stealRpcOptions) {
        fooT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback));
      } else {
        fooT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback));
      }
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      if (stealRpcOptions) {
        fooT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback));
      } else {
        fooT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback));
      }
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::cpp2::GoodService>::BadInteraction::fooCtx(apache::thrift::RpcOptions* rpcOptions) {
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
      "BadService.BadInteraction.foo",
      *header);

  return {std::move(ctx), std::move(header)};
}
void apache::thrift::Client<::cpp2::GoodService>::BadInteraction::sync_foo() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_foo(rpcOptions);
}

void apache::thrift::Client<::cpp2::GoodService>::BadInteraction::sync_foo(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = fooCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  callback.waitUntilDone(
    evb,
    [&] {
      fooImpl(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback));
    });

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
      recv_foo(returnState);
  });
}


folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::GoodService>::BadInteraction::semifuture_foo() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_foo(rpcOptions);
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::GoodService>::BadInteraction::semifuture_foo(apache::thrift::RpcOptions& rpcOptions) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_foo, channel_);
  auto callback = std::move(callbackAndFuture.first);
  foo(rpcOptions, std::move(callback));
  return std::move(callbackAndFuture.second);
}


#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::cpp2::GoodService>::BadInteraction::recv_wrapped_foo(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::cpp2::GoodService_BadInteraction_foo_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}
void apache::thrift::Client<::cpp2::GoodService>::BadInteraction::recv_foo(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_foo(state);
  if (ew) {
    ew.throw_exception();
  }
}

