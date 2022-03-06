/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::some::ns::EnumB>::size;
folly::Range<::some::ns::EnumB const*> const TEnumTraits<::some::ns::EnumB>::values = folly::range(TEnumDataStorage<::some::ns::EnumB>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::some::ns::EnumB>::names = folly::range(TEnumDataStorage<::some::ns::EnumB>::names);

char const* TEnumTraits<::some::ns::EnumB>::findName(type value) {
  using factory = detail::TEnumMapFactory<type>;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::some::ns::EnumB>::findValue(char const* name, type* out) {
  using factory = detail::TEnumMapFactory<type>;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace some { namespace ns {
#ifndef ANDROID
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _EnumB_EnumMapFactory::ValuesToNamesMapType _EnumB_VALUES_TO_NAMES = _EnumB_EnumMapFactory::makeValuesToNamesMap();
const _EnumB_EnumMapFactory::NamesToValuesMapType _EnumB_NAMES_TO_VALUES = _EnumB_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING
#endif
}} // some::ns

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::some::ns::ModuleA>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::some::ns::ModuleA>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace some { namespace ns {

ModuleA::ModuleA(const ModuleA&) = default;
ModuleA& ModuleA::operator=(const ModuleA&) = default;
ModuleA::ModuleA() :
      __fbthrift_field_i32Field() {
}


ModuleA::~ModuleA() {}

ModuleA::ModuleA(ModuleA&& other) noexcept  :
    __fbthrift_field_i32Field(std::move(other.__fbthrift_field_i32Field)),
    __fbthrift_field_strField(std::move(other.__fbthrift_field_strField)),
    __fbthrift_field_listField(std::move(other.__fbthrift_field_listField)),
    __fbthrift_field_mapField(std::move(other.__fbthrift_field_mapField)),
    __fbthrift_field_inclAField(std::move(other.__fbthrift_field_inclAField)),
    __fbthrift_field_inclBField(std::move(other.__fbthrift_field_inclBField)),
    __isset(other.__isset) {
}

ModuleA& ModuleA::operator=(FOLLY_MAYBE_UNUSED ModuleA&& other) noexcept {
    this->__fbthrift_field_i32Field = std::move(other.__fbthrift_field_i32Field);
    this->__fbthrift_field_strField = std::move(other.__fbthrift_field_strField);
    this->__fbthrift_field_listField = std::move(other.__fbthrift_field_listField);
    this->__fbthrift_field_mapField = std::move(other.__fbthrift_field_mapField);
    this->__fbthrift_field_inclAField = std::move(other.__fbthrift_field_inclAField);
    this->__fbthrift_field_inclBField = std::move(other.__fbthrift_field_inclBField);
    __isset = other.__isset;
    return *this;
}


ModuleA::ModuleA(apache::thrift::FragileConstructor, ::std::int32_t i32Field__arg, ::std::string strField__arg, ::std::vector<::std::int16_t> listField__arg, ::std::map<::std::string, ::std::int32_t> mapField__arg, ::some::ns::IncludedA inclAField__arg, ::some::ns::IncludedB inclBField__arg) :
    __fbthrift_field_i32Field(std::move(i32Field__arg)),
    __fbthrift_field_strField(std::move(strField__arg)),
    __fbthrift_field_listField(std::move(listField__arg)),
    __fbthrift_field_mapField(std::move(mapField__arg)),
    __fbthrift_field_inclAField(std::move(inclAField__arg)),
    __fbthrift_field_inclBField(std::move(inclBField__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
  __isset.set(folly::index_constant<4>(), true);
  __isset.set(folly::index_constant<5>(), true);
}


void ModuleA::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_i32Field = ::std::int32_t();
  this->__fbthrift_field_strField = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_listField.clear();
  this->__fbthrift_field_mapField.clear();
    apache::thrift::clear(this->__fbthrift_field_inclAField);
    apache::thrift::clear(this->__fbthrift_field_inclBField);
  __isset = {};
}

bool ModuleA::__fbthrift_is_empty() const {
  return false;
}

bool ModuleA::operator==(const ModuleA& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.i32Field_ref() == rhs.i32Field_ref())) {
    return false;
  }
  if (!(lhs.strField_ref() == rhs.strField_ref())) {
    return false;
  }
  if (!(lhs.listField_ref() == rhs.listField_ref())) {
    return false;
  }
  if (!(lhs.mapField_ref() == rhs.mapField_ref())) {
    return false;
  }
  if (!(lhs.inclAField_ref() == rhs.inclAField_ref())) {
    return false;
  }
  if (!(lhs.inclBField_ref() == rhs.inclBField_ref())) {
    return false;
  }
  return true;
}

bool ModuleA::operator<(const ModuleA& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.i32Field_ref() == rhs.i32Field_ref())) {
    return lhs.i32Field_ref() < rhs.i32Field_ref();
  }
  if (!(lhs.strField_ref() == rhs.strField_ref())) {
    return lhs.strField_ref() < rhs.strField_ref();
  }
  if (!(lhs.listField_ref() == rhs.listField_ref())) {
    return lhs.listField_ref() < rhs.listField_ref();
  }
  if (!(lhs.mapField_ref() == rhs.mapField_ref())) {
    return lhs.mapField_ref() < rhs.mapField_ref();
  }
  if (!(lhs.inclAField_ref() == rhs.inclAField_ref())) {
    return lhs.inclAField_ref() < rhs.inclAField_ref();
  }
  if (!(lhs.inclBField_ref() == rhs.inclBField_ref())) {
    return lhs.inclBField_ref() < rhs.inclBField_ref();
  }
  return false;
}

const ::std::vector<::std::int16_t>& ModuleA::get_listField() const& {
  return __fbthrift_field_listField;
}

::std::vector<::std::int16_t> ModuleA::get_listField() && {
  return std::move(__fbthrift_field_listField);
}

const ::std::map<::std::string, ::std::int32_t>& ModuleA::get_mapField() const& {
  return __fbthrift_field_mapField;
}

::std::map<::std::string, ::std::int32_t> ModuleA::get_mapField() && {
  return std::move(__fbthrift_field_mapField);
}

const ::some::ns::IncludedA& ModuleA::get_inclAField() const& {
  return __fbthrift_field_inclAField;
}

::some::ns::IncludedA ModuleA::get_inclAField() && {
  return std::move(__fbthrift_field_inclAField);
}

const ::some::ns::IncludedB& ModuleA::get_inclBField() const& {
  return __fbthrift_field_inclBField;
}

::some::ns::IncludedB ModuleA::get_inclBField() && {
  return std::move(__fbthrift_field_inclBField);
}


void swap(ModuleA& a, ModuleA& b) {
  using ::std::swap;
  swap(a.i32Field_ref().value(), b.i32Field_ref().value());
  swap(a.strField_ref().value(), b.strField_ref().value());
  swap(a.listField_ref().value(), b.listField_ref().value());
  swap(a.mapField_ref().value(), b.mapField_ref().value());
  swap(a.inclAField_ref().value(), b.inclAField_ref().value());
  swap(a.inclBField_ref().value(), b.inclBField_ref().value());
  swap(a.__isset, b.__isset);
}

template void ModuleA::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ModuleA::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ModuleA::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ModuleA::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void ModuleA::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t ModuleA::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ModuleA::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ModuleA::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        ModuleA,
        ::apache::thrift::type_class::structure,
        ::some::ns::IncludedA>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        ModuleA,
        ::apache::thrift::type_class::structure,
        ::some::ns::IncludedB>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        ModuleA,
        ::apache::thrift::type_class::structure,
        ::some::ns::IncludedA>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        ModuleA,
        ::apache::thrift::type_class::structure,
        ::some::ns::IncludedB>,
    "inconsistent use of nimble option");

}} // some::ns

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::some::ns::ModuleB>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::some::ns::ModuleB>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace some { namespace ns {


ModuleB::ModuleB(apache::thrift::FragileConstructor, ::std::int32_t i32Field__arg, ::some::ns::EnumB inclEnumB__arg) :
    __fbthrift_field_i32Field(std::move(i32Field__arg)),
    __fbthrift_field_inclEnumB(std::move(inclEnumB__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
}


void ModuleB::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_i32Field = ::std::int32_t();
  this->__fbthrift_field_inclEnumB = ::some::ns::EnumB();
  __isset = {};
}

bool ModuleB::__fbthrift_is_empty() const {
  return false;
}

bool ModuleB::operator==(const ModuleB& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.i32Field_ref() == rhs.i32Field_ref())) {
    return false;
  }
  if (!(lhs.inclEnumB_ref() == rhs.inclEnumB_ref())) {
    return false;
  }
  return true;
}

bool ModuleB::operator<(const ModuleB& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.i32Field_ref() == rhs.i32Field_ref())) {
    return lhs.i32Field_ref() < rhs.i32Field_ref();
  }
  if (!(lhs.inclEnumB_ref() == rhs.inclEnumB_ref())) {
    return lhs.inclEnumB_ref() < rhs.inclEnumB_ref();
  }
  return false;
}


void swap(ModuleB& a, ModuleB& b) {
  using ::std::swap;
  swap(a.i32Field_ref().value(), b.i32Field_ref().value());
  swap(a.inclEnumB_ref().value(), b.inclEnumB_ref().value());
  swap(a.__isset, b.__isset);
}

template void ModuleB::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ModuleB::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ModuleB::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ModuleB::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void ModuleB::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t ModuleB::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ModuleB::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ModuleB::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



}} // some::ns

namespace some { namespace ns { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}}} // some::ns
