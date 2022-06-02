// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: jitaas.proto

#include "jitaas.pb.h"
#include "jitaas.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>

static const char* Jacaranda_method_names[] = {
  "/Jacaranda/compile",
};

std::unique_ptr< Jacaranda::Stub> Jacaranda::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Jacaranda::Stub> stub(new Jacaranda::Stub(channel, options));
  return stub;
}

Jacaranda::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_compile_(Jacaranda_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Jacaranda::Stub::compile(::grpc::ClientContext* context, const ::RequestCompilationMessage& request, ::Binary* response) {
  return ::grpc::internal::BlockingUnaryCall< ::RequestCompilationMessage, ::Binary, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_compile_, context, request, response);
}

void Jacaranda::Stub::async::compile(::grpc::ClientContext* context, const ::RequestCompilationMessage* request, ::Binary* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::RequestCompilationMessage, ::Binary, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_compile_, context, request, response, std::move(f));
}

void Jacaranda::Stub::async::compile(::grpc::ClientContext* context, const ::RequestCompilationMessage* request, ::Binary* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_compile_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Binary>* Jacaranda::Stub::PrepareAsynccompileRaw(::grpc::ClientContext* context, const ::RequestCompilationMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Binary, ::RequestCompilationMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_compile_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Binary>* Jacaranda::Stub::AsynccompileRaw(::grpc::ClientContext* context, const ::RequestCompilationMessage& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsynccompileRaw(context, request, cq);
  result->StartCall();
  return result;
}

Jacaranda::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Jacaranda_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Jacaranda::Service, ::RequestCompilationMessage, ::Binary, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Jacaranda::Service* service,
             ::grpc::ServerContext* ctx,
             const ::RequestCompilationMessage* req,
             ::Binary* resp) {
               return service->compile(ctx, req, resp);
             }, this)));
}

Jacaranda::Service::~Service() {
}

::grpc::Status Jacaranda::Service::compile(::grpc::ServerContext* context, const ::RequestCompilationMessage* request, ::Binary* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

