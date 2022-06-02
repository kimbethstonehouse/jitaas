// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: jitaas.proto
#ifndef GRPC_jitaas_2eproto__INCLUDED
#define GRPC_jitaas_2eproto__INCLUDED

#include "jitaas.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

class Jacaranda final {
 public:
  static constexpr char const* service_full_name() {
    return "Jacaranda";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status compile(::grpc::ClientContext* context, const ::RequestCompilationMessage& request, ::Binary* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Binary>> Asynccompile(::grpc::ClientContext* context, const ::RequestCompilationMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Binary>>(AsynccompileRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Binary>> PrepareAsynccompile(::grpc::ClientContext* context, const ::RequestCompilationMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Binary>>(PrepareAsynccompileRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void compile(::grpc::ClientContext* context, const ::RequestCompilationMessage* request, ::Binary* response, std::function<void(::grpc::Status)>) = 0;
      virtual void compile(::grpc::ClientContext* context, const ::RequestCompilationMessage* request, ::Binary* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Binary>* AsynccompileRaw(::grpc::ClientContext* context, const ::RequestCompilationMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Binary>* PrepareAsynccompileRaw(::grpc::ClientContext* context, const ::RequestCompilationMessage& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status compile(::grpc::ClientContext* context, const ::RequestCompilationMessage& request, ::Binary* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Binary>> Asynccompile(::grpc::ClientContext* context, const ::RequestCompilationMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Binary>>(AsynccompileRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Binary>> PrepareAsynccompile(::grpc::ClientContext* context, const ::RequestCompilationMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Binary>>(PrepareAsynccompileRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void compile(::grpc::ClientContext* context, const ::RequestCompilationMessage* request, ::Binary* response, std::function<void(::grpc::Status)>) override;
      void compile(::grpc::ClientContext* context, const ::RequestCompilationMessage* request, ::Binary* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::Binary>* AsynccompileRaw(::grpc::ClientContext* context, const ::RequestCompilationMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::Binary>* PrepareAsynccompileRaw(::grpc::ClientContext* context, const ::RequestCompilationMessage& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_compile_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status compile(::grpc::ServerContext* context, const ::RequestCompilationMessage* request, ::Binary* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_compile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_compile() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_compile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status compile(::grpc::ServerContext* /*context*/, const ::RequestCompilationMessage* /*request*/, ::Binary* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestcompile(::grpc::ServerContext* context, ::RequestCompilationMessage* request, ::grpc::ServerAsyncResponseWriter< ::Binary>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_compile<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_compile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_compile() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::RequestCompilationMessage, ::Binary>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::RequestCompilationMessage* request, ::Binary* response) { return this->compile(context, request, response); }));}
    void SetMessageAllocatorFor_compile(
        ::grpc::MessageAllocator< ::RequestCompilationMessage, ::Binary>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::RequestCompilationMessage, ::Binary>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_compile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status compile(::grpc::ServerContext* /*context*/, const ::RequestCompilationMessage* /*request*/, ::Binary* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* compile(
      ::grpc::CallbackServerContext* /*context*/, const ::RequestCompilationMessage* /*request*/, ::Binary* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_compile<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_compile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_compile() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_compile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status compile(::grpc::ServerContext* /*context*/, const ::RequestCompilationMessage* /*request*/, ::Binary* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_compile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_compile() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_compile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status compile(::grpc::ServerContext* /*context*/, const ::RequestCompilationMessage* /*request*/, ::Binary* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestcompile(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_compile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_compile() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->compile(context, request, response); }));
    }
    ~WithRawCallbackMethod_compile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status compile(::grpc::ServerContext* /*context*/, const ::RequestCompilationMessage* /*request*/, ::Binary* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* compile(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_compile : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_compile() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::RequestCompilationMessage, ::Binary>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::RequestCompilationMessage, ::Binary>* streamer) {
                       return this->Streamedcompile(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_compile() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status compile(::grpc::ServerContext* /*context*/, const ::RequestCompilationMessage* /*request*/, ::Binary* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status Streamedcompile(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::RequestCompilationMessage,::Binary>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_compile<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_compile<Service > StreamedService;
};


#endif  // GRPC_jitaas_2eproto__INCLUDED