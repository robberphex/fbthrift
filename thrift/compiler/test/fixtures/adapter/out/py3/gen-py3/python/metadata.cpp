/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/adapter/gen-py3/python/metadata.h"

namespace facebook {
namespace thrift {
namespace annotation {
namespace python {
::apache::thrift::metadata::ThriftMetadata python_getThriftModuleMetadata() {
  ::apache::thrift::metadata::ThriftServiceMetadataResponse response;
  ::apache::thrift::metadata::ThriftMetadata& metadata = *response.metadata_ref();
  ::apache::thrift::detail::md::StructMetadata<Py3Hidden>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Flags>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Name>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Adapter>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<UseCAPI>::gen(metadata);
  return metadata;
}
} // namespace facebook
} // namespace thrift
} // namespace annotation
} // namespace python