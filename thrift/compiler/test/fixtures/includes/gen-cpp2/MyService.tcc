/**
 * Autogenerated by Thrift for src/service.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/MyService.h"

#include <thrift/lib/cpp2/gen/service_tcc.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::structure, ::cpp2::MyStruct*>, apache::thrift::FieldData<2, ::apache::thrift::type_class::structure, ::cpp2::Included*>> MyService_query_pargs;
typedef apache::thrift::ThriftPresult<true> MyService_query_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::structure, ::cpp2::MyStruct*>, apache::thrift::FieldData<2, ::apache::thrift::type_class::structure, ::cpp2::Included*>> MyService_has_arg_docs_pargs;
typedef apache::thrift::ThriftPresult<true> MyService_has_arg_docs_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::setUpAndProcess_query(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &MyServiceAsyncProcessor::process_query<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::executeRequest_query(apache::thrift::ServerRequest&& serverRequest) {
  auto scope = iface_->getRequestExecutionScope(serverRequest.requestContext(), apache::thrift::concurrency::NORMAL);
  serverRequest.requestContext()->setRequestExecutionScope(std::move(scope));
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  MyService_query_pargs args;
  auto uarg_s = std::make_unique<::cpp2::MyStruct>();
  args.get<0>().value = uarg_s.get();
  auto uarg_i = std::make_unique<::cpp2::Included>();
  args.get<1>().value = uarg_i.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.query", serverRequest.requestContext()));
  try {
    deserializeRequest<ProtocolIn_>(args, "query", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , nullptr
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "query");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::requestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::concurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_query<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_query<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification.first, requestPileNotification.second
    , concurrencyControllerNotification.first, concurrencyControllerNotification.second
    
    );
  iface_->async_tm_query(std::move(callback), std::move(uarg_s), std::move(uarg_i));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::process_query(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb);
    return;
  }
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  MyService_query_pargs args;
  auto uarg_s = std::make_unique<::cpp2::MyStruct>();
  args.get<0>().value = uarg_s.get();
  auto uarg_i = std::make_unique<::cpp2::Included>();
  args.get<1>().value = uarg_i.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.query", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew, std::move(req), ctx, eb, "query");
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(std::move(req), std::move(ctxStack), return_query<ProtocolIn_,ProtocolOut_>, throw_wrapped_query<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  iface_->async_tm_query(std::move(callback), std::move(uarg_s), std::move(uarg_i));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse MyServiceAsyncProcessor::return_query(apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  MyService_query_presult result;
  return serializeResponse(&prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceAsyncProcessor::throw_wrapped_query(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "query");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::setUpAndProcess_has_arg_docs(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &MyServiceAsyncProcessor::process_has_arg_docs<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::executeRequest_has_arg_docs(apache::thrift::ServerRequest&& serverRequest) {
  auto scope = iface_->getRequestExecutionScope(serverRequest.requestContext(), apache::thrift::concurrency::NORMAL);
  serverRequest.requestContext()->setRequestExecutionScope(std::move(scope));
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  MyService_has_arg_docs_pargs args;
  auto uarg_s = std::make_unique<::cpp2::MyStruct>();
  args.get<0>().value = uarg_s.get();
  auto uarg_i = std::make_unique<::cpp2::Included>();
  args.get<1>().value = uarg_i.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.has_arg_docs", serverRequest.requestContext()));
  try {
    deserializeRequest<ProtocolIn_>(args, "has_arg_docs", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , nullptr
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "has_arg_docs");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::requestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::concurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_has_arg_docs<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_has_arg_docs<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification.first, requestPileNotification.second
    , concurrencyControllerNotification.first, concurrencyControllerNotification.second
    
    );
  iface_->async_tm_has_arg_docs(std::move(callback), std::move(uarg_s), std::move(uarg_i));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyServiceAsyncProcessor::process_has_arg_docs(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!req->getShouldStartProcessing()) {
    apache::thrift::HandlerCallbackBase::releaseRequest(std::move(req), eb);
    return;
  }
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  MyService_has_arg_docs_pargs args;
  auto uarg_s = std::make_unique<::cpp2::MyStruct>();
  args.get<0>().value = uarg_s.get();
  auto uarg_i = std::make_unique<::cpp2::Included>();
  args.get<1>().value = uarg_i.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyService.has_arg_docs", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    folly::exception_wrapper ew(std::current_exception(), ex);
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew, std::move(req), ctx, eb, "has_arg_docs");
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(std::move(req), std::move(ctxStack), return_has_arg_docs<ProtocolIn_,ProtocolOut_>, throw_wrapped_has_arg_docs<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  iface_->async_tm_has_arg_docs(std::move(callback), std::move(uarg_s), std::move(uarg_i));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse MyServiceAsyncProcessor::return_has_arg_docs(apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  MyService_has_arg_docs_presult result;
  return serializeResponse(&prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void MyServiceAsyncProcessor::throw_wrapped_has_arg_docs(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "has_arg_docs");
    return;
  }
}


} // cpp2
