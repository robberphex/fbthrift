/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/service-schema/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/service-schema/gen-cpp2/module_types.h"
#include "thrift/lib/thrift/gen-cpp2/schema_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {
class PrimitivesService;
} // namespace cpp2
namespace apache::thrift {

template <>
class Client<::cpp2::PrimitivesService> : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "PrimitivesService";
  }


  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "init"} */
  virtual void init(std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int64_t p_param0, ::std::int64_t p_param1);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "init"} */
  virtual void init(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int64_t p_param0, ::std::int64_t p_param1);
 protected:
  void fbthrift_serialize_and_send_init(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int64_t p_param0, ::std::int64_t p_param1, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "init"} */
  virtual ::std::int64_t sync_init(::std::int64_t p_param0, ::std::int64_t p_param1);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "init"} */
  virtual ::std::int64_t sync_init(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_param0, ::std::int64_t p_param1);

  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "init"} */
  virtual folly::Future<::std::int64_t> future_init(::std::int64_t p_param0, ::std::int64_t p_param1);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "init"} */
  virtual folly::SemiFuture<::std::int64_t> semifuture_init(::std::int64_t p_param0, ::std::int64_t p_param1);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "init"} */
  virtual folly::Future<::std::int64_t> future_init(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_param0, ::std::int64_t p_param1);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "init"} */
  virtual folly::SemiFuture<::std::int64_t> semifuture_init(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_param0, ::std::int64_t p_param1);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "init"} */
  virtual folly::Future<std::pair<::std::int64_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_init(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_param0, ::std::int64_t p_param1);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "init"} */
  virtual folly::SemiFuture<std::pair<::std::int64_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_init(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_param0, ::std::int64_t p_param1);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "init"} */
  template <int = 0>
  folly::coro::Task<::std::int64_t> co_init(::std::int64_t p_param0, ::std::int64_t p_param1) {
    return co_init<false>(nullptr, p_param0, p_param1);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "init"} */
  template <int = 0>
  folly::coro::Task<::std::int64_t> co_init(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_param0, ::std::int64_t p_param1) {
    return co_init<true>(&rpcOptions, p_param0, p_param1);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "init"} */
  folly::coro::Task<::std::int64_t> co_init(::std::int64_t p_param0, ::std::int64_t p_param1) {
    co_return co_await folly::coro::detachOnCancel(semifuture_init(p_param0, p_param1));
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "init"} */
  folly::coro::Task<::std::int64_t> co_init(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_param0, ::std::int64_t p_param1) {
    co_return co_await folly::coro::detachOnCancel(semifuture_init(rpcOptions, p_param0, p_param1));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::std::int64_t> co_init(apache::thrift::RpcOptions* rpcOptions, ::std::int64_t p_param0, ::std::int64_t p_param1) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = initCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    const bool shouldProcessClientInterceptors = ctx && ctx->shouldProcessClientInterceptors();
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnRequest();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_init(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_param0, p_param1);
    } else {
      fbthrift_serialize_and_send_init(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_param0, p_param1);
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
    ::std::int64_t _return;
    if (auto ew = recv_wrapped_init(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "init"} */
  virtual void init(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, ::std::int64_t p_param0, ::std::int64_t p_param1);


  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "init"} */
  static folly::exception_wrapper recv_wrapped_init(::std::int64_t& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "init"} */
  static ::std::int64_t recv_init(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "init"} */
  virtual ::std::int64_t recv_instance_init(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "init"} */
  virtual folly::exception_wrapper recv_instance_wrapped_init(::std::int64_t& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  apache::thrift::SerializedRequest fbthrift_serialize_init(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack, ::std::int64_t p_param0, ::std::int64_t p_param1);
  template <typename RpcOptions>
  void fbthrift_send_init(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> initCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "method_that_throws"} */
  virtual void method_that_throws(std::unique_ptr<apache::thrift::RequestCallback> callback);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "method_that_throws"} */
  virtual void method_that_throws(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void fbthrift_serialize_and_send_method_that_throws(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "method_that_throws"} */
  virtual ::cpp2::Result sync_method_that_throws();
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "method_that_throws"} */
  virtual ::cpp2::Result sync_method_that_throws(apache::thrift::RpcOptions& rpcOptions);

  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "method_that_throws"} */
  virtual folly::Future<::cpp2::Result> future_method_that_throws();
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "method_that_throws"} */
  virtual folly::SemiFuture<::cpp2::Result> semifuture_method_that_throws();
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "method_that_throws"} */
  virtual folly::Future<::cpp2::Result> future_method_that_throws(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "method_that_throws"} */
  virtual folly::SemiFuture<::cpp2::Result> semifuture_method_that_throws(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "method_that_throws"} */
  virtual folly::Future<std::pair<::cpp2::Result, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_method_that_throws(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "method_that_throws"} */
  virtual folly::SemiFuture<std::pair<::cpp2::Result, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_method_that_throws(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "method_that_throws"} */
  template <int = 0>
  folly::coro::Task<::cpp2::Result> co_method_that_throws() {
    return co_method_that_throws<false>(nullptr);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "method_that_throws"} */
  template <int = 0>
  folly::coro::Task<::cpp2::Result> co_method_that_throws(apache::thrift::RpcOptions& rpcOptions) {
    return co_method_that_throws<true>(&rpcOptions);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "method_that_throws"} */
  folly::coro::Task<::cpp2::Result> co_method_that_throws() {
    co_return co_await folly::coro::detachOnCancel(semifuture_method_that_throws());
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "method_that_throws"} */
  folly::coro::Task<::cpp2::Result> co_method_that_throws(apache::thrift::RpcOptions& rpcOptions) {
    co_return co_await folly::coro::detachOnCancel(semifuture_method_that_throws(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::cpp2::Result> co_method_that_throws(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = method_that_throwsCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    const bool shouldProcessClientInterceptors = ctx && ctx->shouldProcessClientInterceptors();
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnRequest();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_method_that_throws(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      fbthrift_serialize_and_send_method_that_throws(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
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
    ::cpp2::Result _return;
    if (auto ew = recv_wrapped_method_that_throws(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "method_that_throws"} */
  virtual void method_that_throws(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "method_that_throws"} */
  static folly::exception_wrapper recv_wrapped_method_that_throws(::cpp2::Result& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "method_that_throws"} */
  static ::cpp2::Result recv_method_that_throws(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "method_that_throws"} */
  virtual ::cpp2::Result recv_instance_method_that_throws(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "method_that_throws"} */
  virtual folly::exception_wrapper recv_instance_wrapped_method_that_throws(::cpp2::Result& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  apache::thrift::SerializedRequest fbthrift_serialize_method_that_throws(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack);
  template <typename RpcOptions>
  void fbthrift_send_method_that_throws(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> method_that_throwsCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "return_void_method"} */
  virtual void return_void_method(std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int64_t p_id);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "return_void_method"} */
  virtual void return_void_method(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int64_t p_id);
 protected:
  void fbthrift_serialize_and_send_return_void_method(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int64_t p_id, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "return_void_method"} */
  virtual void sync_return_void_method(::std::int64_t p_id);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "return_void_method"} */
  virtual void sync_return_void_method(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_id);

  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "return_void_method"} */
  virtual folly::Future<folly::Unit> future_return_void_method(::std::int64_t p_id);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "return_void_method"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_return_void_method(::std::int64_t p_id);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "return_void_method"} */
  virtual folly::Future<folly::Unit> future_return_void_method(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_id);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "return_void_method"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_return_void_method(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_id);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "return_void_method"} */
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_return_void_method(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_id);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "return_void_method"} */
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_return_void_method(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_id);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "return_void_method"} */
  template <int = 0>
  folly::coro::Task<void> co_return_void_method(::std::int64_t p_id) {
    return co_return_void_method<false>(nullptr, p_id);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "return_void_method"} */
  template <int = 0>
  folly::coro::Task<void> co_return_void_method(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_id) {
    return co_return_void_method<true>(&rpcOptions, p_id);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "return_void_method"} */
  folly::coro::Task<void> co_return_void_method(::std::int64_t p_id) {
    co_await folly::coro::detachOnCancel(semifuture_return_void_method(p_id));
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "return_void_method"} */
  folly::coro::Task<void> co_return_void_method(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_id) {
    co_await folly::coro::detachOnCancel(semifuture_return_void_method(rpcOptions, p_id));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_return_void_method(apache::thrift::RpcOptions* rpcOptions, ::std::int64_t p_id) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = return_void_methodCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    const bool shouldProcessClientInterceptors = ctx && ctx->shouldProcessClientInterceptors();
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnRequest();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_return_void_method(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_id);
    } else {
      fbthrift_serialize_and_send_return_void_method(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_id);
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
    if (auto ew = recv_wrapped_return_void_method(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "return_void_method"} */
  virtual void return_void_method(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, ::std::int64_t p_id);


  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "return_void_method"} */
  static folly::exception_wrapper recv_wrapped_return_void_method(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "return_void_method"} */
  static void recv_return_void_method(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "return_void_method"} */
  virtual void recv_instance_return_void_method(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/service-schema/src/module.thrift", "service": "PrimitivesService", "function": "return_void_method"} */
  virtual folly::exception_wrapper recv_instance_wrapped_return_void_method(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  apache::thrift::SerializedRequest fbthrift_serialize_return_void_method(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack, ::std::int64_t p_id);
  template <typename RpcOptions>
  void fbthrift_send_return_void_method(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> return_void_methodCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};

} // namespace apache::thrift

namespace cpp2 {
using PrimitivesServiceAsyncClient [[deprecated("Use apache::thrift::Client<PrimitivesService> instead")]] = ::apache::thrift::Client<PrimitivesService>;
} // namespace cpp2
