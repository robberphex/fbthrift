/**
 * Autogenerated by Thrift for src/includes.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/includes_types.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/includes_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/includes_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Included>::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) noexcept {
  using TType = apache::thrift::protocol::TType;
  constexpr size_t _size = 2;
  static constexpr folly::StringPiece _names[] = {
    "MyIntField",
    "MyTransitiveField",
  };
  static constexpr int16_t _ids[] = {
    1,
    2,
  };
  static constexpr TType _types[] = {
    TType::T_I64,
    TType::T_STRUCT,
  };
  static constexpr st::translate_field_name_table
      table{_size, _names, _ids, _types};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Included::Included(apache::thrift::FragileConstructor, int64_t MyIntField__arg,  ::cpp2::Foo MyTransitiveField__arg) :
    MyIntField(std::move(MyIntField__arg)),
    MyTransitiveField(std::move(MyTransitiveField__arg)) {
  __isset.MyIntField = true;
  __isset.MyTransitiveField = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void Included::__clear() {
  // clear all fields
  MyIntField = 0LL;
  MyTransitiveField.__clear();
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool Included::operator==(const Included& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.MyIntField == rhs.MyIntField)) {
    return false;
  }
  if (!(lhs.MyTransitiveField == rhs.MyTransitiveField)) {
    return false;
  }
  return true;
}

bool Included::operator<(const Included& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.MyIntField == rhs.MyIntField)) {
    return lhs.MyIntField < rhs.MyIntField;
  }
  if (!(lhs.MyTransitiveField == rhs.MyTransitiveField)) {
    return lhs.MyTransitiveField < rhs.MyTransitiveField;
  }
  return false;
}

const  ::cpp2::Foo& Included::get_MyTransitiveField() const& {
  return MyTransitiveField;
}

 ::cpp2::Foo Included::get_MyTransitiveField() && {
  return std::move(MyTransitiveField);
}


void swap(Included& a, Included& b) {
  using ::std::swap;
  swap(a.MyIntField_ref().value(), b.MyIntField_ref().value());
  swap(a.MyTransitiveField_ref().value(), b.MyTransitiveField_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void Included::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Included::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Included::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Included::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Included::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Included::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Included::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Included::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Included,
        ::apache::thrift::type_class::structure,
         ::cpp2::Foo>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        Included,
        ::apache::thrift::type_class::structure,
         ::cpp2::Foo>,
    "inconsistent use of nimble option");

} // cpp2
