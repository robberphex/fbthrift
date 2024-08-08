/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/interactions/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/interactions/gen-cpp2/module_metadata.h"

// some of these functions can be so large that the compiler gives up optimizing
// them - and issues a warning which may be treated as an error!
//
// these functions are so rarely called that it is probably okay for them not to
// be optimized in practice
FOLLY_CLANG_DISABLE_WARNING("-Wignored-optimization-argument")

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);


const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::CustomException>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.CustomException", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_CustomException = res.first->second;
  module_CustomException.name() = "module.CustomException";
  module_CustomException.is_union() = false;
  static const auto* const
  module_CustomException_fields = new std::array<EncodedThriftField, 1>{ {
    { 1, "message", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{ }},  }};
  for (const auto& f : *module_CustomException_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_CustomException.fields()->push_back(std::move(field));
  }
  return res.first->second;
}

void ExceptionMetadata<::cpp2::CustomException>::gen(ThriftMetadata& metadata) {
  auto res = metadata.exceptions()->emplace("module.CustomException", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& module_CustomException = res.first->second;
  module_CustomException.name() = "module.CustomException";
  static const auto* const
  module_CustomException_fields = new std::array<EncodedThriftField, 1>{ {
    { 1, "message", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{ }},  }};
  for (const auto& f : *module_CustomException_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    module_CustomException.fields()->push_back(std::move(field));
  }
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_foo([[maybe_unused]] ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "foo";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_interact([[maybe_unused]] ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "interact";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_interact_arg_1;
  module_MyService_interact_arg_1.id() = 1;
  module_MyService_interact_arg_1.name() = "arg";
  module_MyService_interact_arg_1.is_optional() = false;
  auto module_MyService_interact_arg_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE);
  module_MyService_interact_arg_1_type->writeAndGenType(*module_MyService_interact_arg_1.type(), metadata);
  func.arguments()->push_back(std::move(module_MyService_interact_arg_1));
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_interactFast([[maybe_unused]] ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "interactFast";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_serialize([[maybe_unused]] ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "serialize";
  auto func_ret_type = std::make_unique<Stream>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE));
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}

void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen(::apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  const ::apache::thrift::metadata::ThriftServiceContextRef* self = genRecurse(*response.metadata(), *response.services());
  DCHECK(self != nullptr);
  // TODO(praihan): Remove ThriftServiceContext from response. But in the meantime, we need to fill the field with the result of looking up in ThriftMetadata.
  ::apache::thrift::metadata::ThriftServiceContext context;
  context.module() = *self->module();
  context.service_info() = response.metadata()->services()->at(*self->service_name());
  response.context() = std::move(context);
}

const ThriftServiceContextRef* ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::genRecurse([[maybe_unused]] ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services) {
  ::apache::thrift::metadata::ThriftService module_MyService;
  module_MyService.name() = "module.MyService";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_foo,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_interact,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_interactFast,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_serialize,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_MyService);
  }
  // We need to keep the index around because a reference or iterator could be invalidated.
  auto selfIndex = services.size();
  services.emplace_back();
  ThriftServiceContextRef& context = services[selfIndex];
  metadata.services()->emplace("module.MyService", std::move(module_MyService));
  context.service_name() = "module.MyService";
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name() = "module";
  context.module() = std::move(module);
  return &context;
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::Factories>>::gen_foo([[maybe_unused]] ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "foo";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::Factories>>::gen_interact([[maybe_unused]] ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "interact";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  ::apache::thrift::metadata::ThriftField module_Factories_interact_arg_1;
  module_Factories_interact_arg_1.id() = 1;
  module_Factories_interact_arg_1.name() = "arg";
  module_Factories_interact_arg_1.is_optional() = false;
  auto module_Factories_interact_arg_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE);
  module_Factories_interact_arg_1_type->writeAndGenType(*module_Factories_interact_arg_1.type(), metadata);
  func.arguments()->push_back(std::move(module_Factories_interact_arg_1));
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::Factories>>::gen_interactFast([[maybe_unused]] ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "interactFast";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::Factories>>::gen_serialize([[maybe_unused]] ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "serialize";
  auto func_ret_type = std::make_unique<Stream>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE));
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}

void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::Factories>>::gen(::apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  const ::apache::thrift::metadata::ThriftServiceContextRef* self = genRecurse(*response.metadata(), *response.services());
  DCHECK(self != nullptr);
  // TODO(praihan): Remove ThriftServiceContext from response. But in the meantime, we need to fill the field with the result of looking up in ThriftMetadata.
  ::apache::thrift::metadata::ThriftServiceContext context;
  context.module() = *self->module();
  context.service_info() = response.metadata()->services()->at(*self->service_name());
  response.context() = std::move(context);
}

const ThriftServiceContextRef* ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::Factories>>::genRecurse([[maybe_unused]] ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services) {
  ::apache::thrift::metadata::ThriftService module_Factories;
  module_Factories.name() = "module.Factories";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::Factories>>::gen_foo,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::Factories>>::gen_interact,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::Factories>>::gen_interactFast,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::Factories>>::gen_serialize,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_Factories);
  }
  // We need to keep the index around because a reference or iterator could be invalidated.
  auto selfIndex = services.size();
  services.emplace_back();
  ThriftServiceContextRef& context = services[selfIndex];
  metadata.services()->emplace("module.Factories", std::move(module_Factories));
  context.service_name() = "module.Factories";
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name() = "module";
  context.module() = std::move(module);
  return &context;
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::Perform>>::gen_foo([[maybe_unused]] ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "foo";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}

void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::Perform>>::gen(::apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  const ::apache::thrift::metadata::ThriftServiceContextRef* self = genRecurse(*response.metadata(), *response.services());
  DCHECK(self != nullptr);
  // TODO(praihan): Remove ThriftServiceContext from response. But in the meantime, we need to fill the field with the result of looking up in ThriftMetadata.
  ::apache::thrift::metadata::ThriftServiceContext context;
  context.module() = *self->module();
  context.service_info() = response.metadata()->services()->at(*self->service_name());
  response.context() = std::move(context);
}

const ThriftServiceContextRef* ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::Perform>>::genRecurse([[maybe_unused]] ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services) {
  ::apache::thrift::metadata::ThriftService module_Perform;
  module_Perform.name() = "module.Perform";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::Perform>>::gen_foo,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_Perform);
  }
  // We need to keep the index around because a reference or iterator could be invalidated.
  auto selfIndex = services.size();
  services.emplace_back();
  ThriftServiceContextRef& context = services[selfIndex];
  metadata.services()->emplace("module.Perform", std::move(module_Perform));
  context.service_name() = "module.Perform";
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name() = "module";
  context.module() = std::move(module);
  return &context;
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::InteractWithShared>>::gen_do_some_similar_things([[maybe_unused]] ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "do_some_similar_things";
  auto func_ret_type = std::make_unique<Struct<::thrift::shared_interactions::DoSomethingResult>>("shared.DoSomethingResult");
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}

void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::InteractWithShared>>::gen(::apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  const ::apache::thrift::metadata::ThriftServiceContextRef* self = genRecurse(*response.metadata(), *response.services());
  DCHECK(self != nullptr);
  // TODO(praihan): Remove ThriftServiceContext from response. But in the meantime, we need to fill the field with the result of looking up in ThriftMetadata.
  ::apache::thrift::metadata::ThriftServiceContext context;
  context.module() = *self->module();
  context.service_info() = response.metadata()->services()->at(*self->service_name());
  response.context() = std::move(context);
}

const ThriftServiceContextRef* ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::InteractWithShared>>::genRecurse([[maybe_unused]] ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services) {
  ::apache::thrift::metadata::ThriftService module_InteractWithShared;
  module_InteractWithShared.name() = "module.InteractWithShared";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::InteractWithShared>>::gen_do_some_similar_things,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_InteractWithShared);
  }
  // We need to keep the index around because a reference or iterator could be invalidated.
  auto selfIndex = services.size();
  services.emplace_back();
  ThriftServiceContextRef& context = services[selfIndex];
  metadata.services()->emplace("module.InteractWithShared", std::move(module_InteractWithShared));
  context.service_name() = "module.InteractWithShared";
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name() = "module";
  context.module() = std::move(module);
  return &context;
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
