/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/doctext/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/C.h"

#include <thrift/lib/cpp2/gen/service_tcc.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> C_f_pargs;
typedef apache::thrift::ThriftPresult<true> C_f_presult;
typedef apache::thrift::ThriftPresult<false> C_numbers_pargs;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<true>,
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, ::cpp2::number*>>
    > C_numbers_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::integral, ::std::int32_t*>, apache::thrift::FieldData<2, ::apache::thrift::type_class::string, ::std::string*>, apache::thrift::FieldData<3, ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set<::std::int32_t>*>> C_thing_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::string, ::std::string*>, apache::thrift::FieldData<1, ::apache::thrift::type_class::structure, ::cpp2::Bang>> C_thing_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void CAsyncProcessor::setUpAndProcess_f(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &CAsyncProcessor::executeRequest_f<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void CAsyncProcessor::executeRequest_f(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::C_f_pargs args;
  auto ctxStack = apache::thrift::ContextStack::create(
    this->getEventHandlersSharedPtr(),
    this->getServiceName(),
    "C.f",
    serverRequest.requestContext());
  try {
    deserializeRequest<ProtocolIn_>(args, "f", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    folly::exception_wrapper ew(std::current_exception());
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "f");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_f<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_f<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_tm_f(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse CAsyncProcessor::return_f(apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  ::cpp2::C_f_presult result;
  return serializeResponse("f", &prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void CAsyncProcessor::throw_wrapped_f(apache::thrift::ResponseChannelRequest::UniquePtr req,[[maybe_unused]] int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "f");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void CAsyncProcessor::setUpAndProcess_numbers(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, &CAsyncProcessor::executeRequest_numbers<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void CAsyncProcessor::executeRequest_numbers(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::C_numbers_pargs args;
  auto ctxStack = apache::thrift::ContextStack::create(
    this->getEventHandlersSharedPtr(),
    this->getServiceName(),
    "C.numbers",
    serverRequest.requestContext());
  try {
    deserializeRequest<ProtocolIn_>(args, "numbers", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    folly::exception_wrapper ew(std::current_exception());
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "numbers");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<::apache::thrift::ServerStream<::cpp2::number>>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_numbers<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_numbers<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_tm_numbers(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::ResponseAndServerStreamFactory CAsyncProcessor::return_numbers(apache::thrift::ContextStack* ctx, folly::Executor::KeepAlive<> executor, ::apache::thrift::ServerStream<::cpp2::number>&& _return) {
  ProtocolOut_ prot;
  ::cpp2::C_numbers_presult::FieldsType result;
  using StreamPResultType = ::cpp2::C_numbers_presult::StreamPResultType;
  auto& returnStream = _return;

      using ExMapType = apache::thrift::detail::ap::EmptyExMapType;
  auto encodedStream = apache::thrift::detail::ap::encode_server_stream<ProtocolOut_, StreamPResultType, ExMapType>(std::move(returnStream), std::move(executor));
  return {serializeResponse("numbers", &prot, ctx, result), std::move(encodedStream)};
}

template <class ProtocolIn_, class ProtocolOut_>
void CAsyncProcessor::throw_wrapped_numbers(apache::thrift::ResponseChannelRequest::UniquePtr req,[[maybe_unused]] int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "numbers");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void CAsyncProcessor::setUpAndProcess_thing(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, [[maybe_unused]] apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &CAsyncProcessor::executeRequest_thing<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void CAsyncProcessor::executeRequest_thing(apache::thrift::ServerRequest&& serverRequest) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  ::cpp2::C_thing_pargs args;
  ::std::int32_t uarg_a{0};
  args.get<0>().value = &uarg_a;
  auto uarg_b = std::make_unique<::std::string>();
  args.get<1>().value = uarg_b.get();
  auto uarg_c = std::make_unique<::std::set<::std::int32_t>>();
  args.get<2>().value = uarg_c.get();
  auto ctxStack = apache::thrift::ContextStack::create(
    this->getEventHandlersSharedPtr(),
    this->getServiceName(),
    "C.thing",
    serverRequest.requestContext());
  try {
    deserializeRequest<ProtocolIn_>(args, "thing", apache::thrift::detail::ServerRequestHelper::compressedRequest(std::move(serverRequest)).uncompress(), ctxStack.get());
  }
  catch (...) {
    folly::exception_wrapper ew(std::current_exception());
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ew
        , apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
        , serverRequest.requestContext()
        , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
        , "thing");
    return;
  }
  auto requestPileNotification = apache::thrift::detail::ServerRequestHelper::moveRequestPileNotification(serverRequest);
  auto concurrencyControllerNotification = apache::thrift::detail::ServerRequestHelper::moveConcurrencyControllerNotification(serverRequest);
  auto callback = std::make_unique<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>>(
    apache::thrift::detail::ServerRequestHelper::request(std::move(serverRequest))
    , std::move(ctxStack)
    , return_thing<ProtocolIn_,ProtocolOut_>
    , throw_wrapped_thing<ProtocolIn_, ProtocolOut_>
    , serverRequest.requestContext()->getProtoSeqId()
    , apache::thrift::detail::ServerRequestHelper::eventBase(serverRequest)
    , apache::thrift::detail::ServerRequestHelper::executor(serverRequest)
    , serverRequest.requestContext()
    , requestPileNotification
    , concurrencyControllerNotification, std::move(serverRequest.requestData())
    );
  iface_->async_tm_thing(std::move(callback), args.get<0>().ref(), std::move(uarg_b), std::move(uarg_c));
}

template <class ProtocolIn_, class ProtocolOut_>
apache::thrift::SerializedResponse CAsyncProcessor::return_thing(apache::thrift::ContextStack* ctx, ::std::string const& _return) {
  ProtocolOut_ prot;
  ::cpp2::C_thing_presult result;
  result.get<0>().value = const_cast<::std::string*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("thing", &prot, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void CAsyncProcessor::throw_wrapped_thing(apache::thrift::ResponseChannelRequest::UniquePtr req,[[maybe_unused]] int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ::cpp2::C_thing_presult result;
  if (ew.with_exception([&]( ::cpp2::Bang& e) {
    if (ctx) {
      ctx->userExceptionWrapped(true, ew);
    }
    ::apache::thrift::util::appendExceptionToHeader(ew, *reqCtx);
    ::apache::thrift::util::appendErrorClassificationToHeader< ::cpp2::Bang>(ew, *reqCtx);
    result.get<1>().ref() = e;
    result.setIsSet(1, true);
  }
  )) {} else
  {
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "thing");
    return;
  }
  ProtocolOut_ prot;
  auto response = serializeResponse("thing", &prot, ctx, result);
  auto payload = std::move(response).extractPayload(
      req->includeEnvelope(), prot.protocolType(), protoSeqId, apache::thrift::MessageType::T_REPLY, "thing");
  payload.transform(reqCtx->getHeader()->getWriteTransforms());
  return req->sendReply(std::move(payload));
}


} // cpp2
