/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyServicePrioParentAsyncClient.h"
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {
class MyServicePrioParent;
class MyServicePrioParentAsyncProcessor;

class MyServicePrioParentServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};
} // cpp2

namespace apache::thrift {
template <>
class ServiceHandler<::cpp2::MyServicePrioParent> : public apache::thrift::ServerInterface {
 public:
  std::string_view getGeneratedName() const override { return "MyServicePrioParent"; }

  typedef ::cpp2::MyServicePrioParentAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;
 private:
  std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> getServiceRequestInfoMap() const;
 public:

  virtual void sync_ping();
  [[deprecated("Use sync_ping instead")]] virtual void ping();
  virtual folly::Future<folly::Unit> future_ping();
  virtual folly::SemiFuture<folly::Unit> semifuture_ping();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_ping();
  virtual folly::coro::Task<void> co_ping(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_ping(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback);
  virtual void sync_pong();
  [[deprecated("Use sync_pong instead")]] virtual void pong();
  virtual folly::Future<folly::Unit> future_pong();
  virtual folly::SemiFuture<folly::Unit> semifuture_pong();
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_pong();
  virtual folly::coro::Task<void> co_pong(apache::thrift::RequestParams params);
#endif
  virtual void async_tm_pong(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback);
 private:
  static ::cpp2::MyServicePrioParentServiceInfoHolder __fbthrift_serviceInfoHolder;
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_ping{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_pong{apache::thrift::detail::si::InvocationType::AsyncTm};
};

} // namespace apache::thrift

namespace cpp2 {
using MyServicePrioParentSvIf [[deprecated("Use apache::thrift::ServiceHandler<MyServicePrioParent> instead")]] = ::apache::thrift::ServiceHandler<MyServicePrioParent>;
} // cpp2
namespace cpp2 {
class MyServicePrioParentSvNull : public ::apache::thrift::ServiceHandler<MyServicePrioParent> {
 public:
  void ping() override;
  void pong() override;
};

class MyServicePrioParentAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessorBase {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  ::apache::thrift::ServiceHandler<::cpp2::MyServicePrioParent>* iface_;
 public:
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  void executeRequest(apache::thrift::ServerRequest&& serverRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessorBase::ProcessFuncs<MyServicePrioParentAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessorBase::ProcessMap<ProcessFuncs>;
  static const MyServicePrioParentAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const MyServicePrioParentAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_ping(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_ping(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_ping(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_ping(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_pong(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_pong(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_pong(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_pong(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  MyServicePrioParentAsyncProcessor(::apache::thrift::ServiceHandler<::cpp2::MyServicePrioParent>* iface) :
      iface_(iface) {}
  ~MyServicePrioParentAsyncProcessor() override {}
};

} // cpp2