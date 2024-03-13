/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/adapter/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/ServiceAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace facebook { namespace thrift { namespace test {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::string, ::facebook::thrift::test::StringWithAdapter_7208*, ::apache::thrift::type::adapted<::my::Adapter1, ::apache::thrift::type::string_t>>, apache::thrift::FieldData<2, ::apache::thrift::type_class::string, ::std::string*>, apache::thrift::FieldData<3, ::apache::thrift::type_class::structure, ::facebook::thrift::test::Foo*>> Service_func_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, ::facebook::thrift::test::MyI32_4873*, ::apache::thrift::type::adapted<::my::Adapter1, ::apache::thrift::type::i32_t>>> Service_func_presult;
}}} // facebook::thrift::test
template <typename Protocol_, typename RpcOptions>
void apache::thrift::Client<::facebook::thrift::test::Service>::funcT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {

  ::facebook::thrift::test::Service_func_pargs args;
  args.get<0>().value = const_cast<::facebook::thrift::test::StringWithAdapter_7208*>(&p_arg1);
  args.get<1>().value = const_cast<::std::string*>(&p_arg2);
  args.get<2>().value = const_cast<::facebook::thrift::test::Foo*>(&p_arg3);
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "func",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "facebook.com/thrift/test/Service");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::forward<RpcOptions>(rpcOptions), std::move(callback), contextStack, std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata), writer, sizer);
}



void apache::thrift::Client<::facebook::thrift::test::Service>::func(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  ::apache::thrift::RpcOptions rpcOptions;
  func(rpcOptions, std::move(callback), p_arg1, p_arg2, p_arg3);
}

void apache::thrift::Client<::facebook::thrift::test::Service>::func(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  auto [ctx, header] = funcCtx(&rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto* contextStack = ctx.get();
  if (callback) {
    callbackContext.ctx = std::move(ctx);
  }
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  funcImpl(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback), p_arg1, p_arg2, p_arg3);
}

void apache::thrift::Client<::facebook::thrift::test::Service>::funcImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3, bool stealRpcOptions) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      if (stealRpcOptions) {
        funcT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback), p_arg1, p_arg2, p_arg3);
      } else {
        funcT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback), p_arg1, p_arg2, p_arg3);
      }
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      if (stealRpcOptions) {
        funcT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback), p_arg1, p_arg2, p_arg3);
      } else {
        funcT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback), p_arg1, p_arg2, p_arg3);
      }
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::facebook::thrift::test::Service>::funcCtx(apache::thrift::RpcOptions* rpcOptions) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(channel_->getProtocolId());
  if (rpcOptions) {
    header->setHeaders(rpcOptions->releaseWriteHeaders());
  }

  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers_,
      getServiceName(),
      "Service.func",
      *header);

  return {std::move(ctx), std::move(header)};
}

::facebook::thrift::test::MyI32_4873 apache::thrift::Client<::facebook::thrift::test::Service>::sync_func(const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_func(rpcOptions, p_arg1, p_arg2, p_arg3);
}

::facebook::thrift::test::MyI32_4873 apache::thrift::Client<::facebook::thrift::test::Service>::sync_func(apache::thrift::RpcOptions& rpcOptions, const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = funcCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  callback.waitUntilDone(
    evb,
    [&] {
      funcImpl(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback), p_arg1, p_arg2, p_arg3);
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
      return recv_func(returnState);
  });
}


folly::Future<::facebook::thrift::test::MyI32_4873> apache::thrift::Client<::facebook::thrift::test::Service>::future_func(const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_func(rpcOptions, p_arg1, p_arg2, p_arg3);
}

folly::SemiFuture<::facebook::thrift::test::MyI32_4873> apache::thrift::Client<::facebook::thrift::test::Service>::semifuture_func(const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_func(rpcOptions, p_arg1, p_arg2, p_arg3);
}

folly::Future<::facebook::thrift::test::MyI32_4873> apache::thrift::Client<::facebook::thrift::test::Service>::future_func(apache::thrift::RpcOptions& rpcOptions, const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  folly::Promise<::facebook::thrift::test::MyI32_4873> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<::facebook::thrift::test::MyI32_4873>>(std::move(promise), recv_wrapped_func, channel_);
  func(rpcOptions, std::move(callback), p_arg1, p_arg2, p_arg3);
  return future;
}

folly::SemiFuture<::facebook::thrift::test::MyI32_4873> apache::thrift::Client<::facebook::thrift::test::Service>::semifuture_func(apache::thrift::RpcOptions& rpcOptions, const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_func, channel_);
  auto callback = std::move(callbackAndFuture.first);
  func(rpcOptions, std::move(callback), p_arg1, p_arg2, p_arg3);
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<::facebook::thrift::test::MyI32_4873, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::facebook::thrift::test::Service>::header_future_func(apache::thrift::RpcOptions& rpcOptions, const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  folly::Promise<std::pair<::facebook::thrift::test::MyI32_4873, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<::facebook::thrift::test::MyI32_4873>>(std::move(promise), recv_wrapped_func, channel_);
  func(rpcOptions, std::move(callback), p_arg1, p_arg2, p_arg3);
  return future;
}

folly::SemiFuture<std::pair<::facebook::thrift::test::MyI32_4873, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::facebook::thrift::test::Service>::header_semifuture_func(apache::thrift::RpcOptions& rpcOptions, const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_func, channel_);
  auto callback = std::move(callbackAndFuture.first);
  func(rpcOptions, std::move(callback), p_arg1, p_arg2, p_arg3);
  return std::move(callbackAndFuture.second);
}

void apache::thrift::Client<::facebook::thrift::test::Service>::func(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::facebook::thrift::test::StringWithAdapter_7208& p_arg1, const ::std::string& p_arg2, const ::facebook::thrift::test::Foo& p_arg3) {
  func(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_arg1, p_arg2, p_arg3);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::facebook::thrift::test::Service>::recv_wrapped_func(::facebook::thrift::test::MyI32_4873& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::facebook::thrift::test::Service_func_presult;
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

::facebook::thrift::test::MyI32_4873 apache::thrift::Client<::facebook::thrift::test::Service>::recv_func(::apache::thrift::ClientReceiveState& state) {
  ::facebook::thrift::test::MyI32_4873 _return;
  auto ew = recv_wrapped_func(_return, state);
  if (ew) {
    ew.throw_exception();
  }
  return _return;
}

::facebook::thrift::test::MyI32_4873 apache::thrift::Client<::facebook::thrift::test::Service>::recv_instance_func(::apache::thrift::ClientReceiveState& state) {
  return recv_func(state);
}

folly::exception_wrapper apache::thrift::Client<::facebook::thrift::test::Service>::recv_instance_wrapped_func(::facebook::thrift::test::MyI32_4873& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_func(_return, state);
}

