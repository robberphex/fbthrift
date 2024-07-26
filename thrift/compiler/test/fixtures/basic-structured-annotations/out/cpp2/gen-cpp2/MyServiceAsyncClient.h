/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/basic-structured-annotations/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/basic-structured-annotations/gen-cpp2/included_types.h"
#include "thrift/compiler/test/fixtures/basic-structured-annotations/gen-cpp2/namespaced_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace test::fixtures::basic-structured-annotations {
class MyService;
} // namespace test::fixtures::basic-structured-annotations
namespace apache::thrift {

template <>
class Client<::test::fixtures::basic-structured-annotations::MyService> : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "MyService";
  }

  static const char* __fbthrift_thrift_uri() {
    return "test.dev/fixtures/basic-structured-annotations/MyService";
  }


  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "first"} */
  virtual void first(std::unique_ptr<apache::thrift::RequestCallback> callback);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "first"} */
  virtual void first(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void fbthrift_serialize_and_send_first(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "first"} */
  virtual void sync_first(::test::fixtures::basic-structured-annotations::annotated_inline_string& _return);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "first"} */
  virtual void sync_first(apache::thrift::RpcOptions& rpcOptions, ::test::fixtures::basic-structured-annotations::annotated_inline_string& _return);

  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "first"} */
  virtual folly::Future<::test::fixtures::basic-structured-annotations::annotated_inline_string> future_first();
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "first"} */
  virtual folly::SemiFuture<::test::fixtures::basic-structured-annotations::annotated_inline_string> semifuture_first();
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "first"} */
  virtual folly::Future<::test::fixtures::basic-structured-annotations::annotated_inline_string> future_first(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "first"} */
  virtual folly::SemiFuture<::test::fixtures::basic-structured-annotations::annotated_inline_string> semifuture_first(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "first"} */
  virtual folly::Future<std::pair<::test::fixtures::basic-structured-annotations::annotated_inline_string, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_first(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "first"} */
  virtual folly::SemiFuture<std::pair<::test::fixtures::basic-structured-annotations::annotated_inline_string, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_first(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "first"} */
  template <int = 0>
  folly::coro::Task<::test::fixtures::basic-structured-annotations::annotated_inline_string> co_first() {
    return co_first<false>(nullptr);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "first"} */
  template <int = 0>
  folly::coro::Task<::test::fixtures::basic-structured-annotations::annotated_inline_string> co_first(apache::thrift::RpcOptions& rpcOptions) {
    return co_first<true>(&rpcOptions);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "first"} */
  folly::coro::Task<::test::fixtures::basic-structured-annotations::annotated_inline_string> co_first() {
    co_return co_await folly::coro::detachOnCancel(semifuture_first());
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "first"} */
  folly::coro::Task<::test::fixtures::basic-structured-annotations::annotated_inline_string> co_first(apache::thrift::RpcOptions& rpcOptions) {
    co_return co_await folly::coro::detachOnCancel(semifuture_first(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::test::fixtures::basic-structured-annotations::annotated_inline_string> co_first(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = firstCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    const bool shouldProcessClientInterceptors = ctx && ctx->shouldProcessClientInterceptors();
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnRequest();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_first(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      fbthrift_serialize_and_send_first(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnResponse();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    ::test::fixtures::basic-structured-annotations::annotated_inline_string _return;
    if (auto ew = recv_wrapped_first(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "first"} */
  virtual void first(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "first"} */
  static folly::exception_wrapper recv_wrapped_first(::test::fixtures::basic-structured-annotations::annotated_inline_string& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "first"} */
  static void recv_first(::test::fixtures::basic-structured-annotations::annotated_inline_string& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "first"} */
  virtual void recv_instance_first(::test::fixtures::basic-structured-annotations::annotated_inline_string& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "first"} */
  virtual folly::exception_wrapper recv_instance_wrapped_first(::test::fixtures::basic-structured-annotations::annotated_inline_string& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  apache::thrift::SerializedRequest fbthrift_serialize_first(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack);
  template <typename RpcOptions>
  void fbthrift_send_first(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> firstCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "second"} */
  virtual void second(std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int64_t p_count);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "second"} */
  virtual void second(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int64_t p_count);
 protected:
  void fbthrift_serialize_and_send_second(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int64_t p_count, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "second"} */
  virtual bool sync_second(::std::int64_t p_count);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "second"} */
  virtual bool sync_second(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_count);

  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "second"} */
  virtual folly::Future<bool> future_second(::std::int64_t p_count);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "second"} */
  virtual folly::SemiFuture<bool> semifuture_second(::std::int64_t p_count);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "second"} */
  virtual folly::Future<bool> future_second(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_count);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "second"} */
  virtual folly::SemiFuture<bool> semifuture_second(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_count);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "second"} */
  virtual folly::Future<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_second(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_count);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "second"} */
  virtual folly::SemiFuture<std::pair<bool, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_second(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_count);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "second"} */
  template <int = 0>
  folly::coro::Task<bool> co_second(::std::int64_t p_count) {
    return co_second<false>(nullptr, p_count);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "second"} */
  template <int = 0>
  folly::coro::Task<bool> co_second(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_count) {
    return co_second<true>(&rpcOptions, p_count);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "second"} */
  folly::coro::Task<bool> co_second(::std::int64_t p_count) {
    co_return co_await folly::coro::detachOnCancel(semifuture_second(p_count));
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "second"} */
  folly::coro::Task<bool> co_second(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_count) {
    co_return co_await folly::coro::detachOnCancel(semifuture_second(rpcOptions, p_count));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<bool> co_second(apache::thrift::RpcOptions* rpcOptions, ::std::int64_t p_count) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = secondCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    const bool shouldProcessClientInterceptors = ctx && ctx->shouldProcessClientInterceptors();
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnRequest();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_second(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_count);
    } else {
      fbthrift_serialize_and_send_second(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_count);
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnResponse();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    bool _return;
    if (auto ew = recv_wrapped_second(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "second"} */
  virtual void second(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, ::std::int64_t p_count);


  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "second"} */
  static folly::exception_wrapper recv_wrapped_second(bool& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "second"} */
  static bool recv_second(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "second"} */
  virtual bool recv_instance_second(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-structured-annotations/src/module.thrift", "service": "MyService", "function": "second"} */
  virtual folly::exception_wrapper recv_instance_wrapped_second(bool& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  apache::thrift::SerializedRequest fbthrift_serialize_second(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack, ::std::int64_t p_count);
  template <typename RpcOptions>
  void fbthrift_send_second(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> secondCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};

} // namespace apache::thrift

namespace test::fixtures::basic-structured-annotations {
using MyServiceAsyncClient [[deprecated("Use apache::thrift::Client<MyService> instead")]] = ::apache::thrift::Client<MyService>;
} // namespace test::fixtures::basic-structured-annotations
