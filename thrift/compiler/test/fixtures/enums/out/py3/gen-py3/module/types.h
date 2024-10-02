/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/enums/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include <thrift/lib/py3/enums.h>
#include "thrift/compiler/test/fixtures/enums/gen-cpp2/module_data.h"
#include "thrift/compiler/test/fixtures/enums/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/enums/gen-cpp2/module_metadata.h"
namespace thrift {
namespace py3 {



template<>
inline void reset_field<::test::fixtures::enums::SomeStruct>(
    ::test::fixtures::enums::SomeStruct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.reasonable_ref().copy_from(default_inst<::test::fixtures::enums::SomeStruct>().reasonable_ref());
      return;
    case 1:
      obj.fine_ref().copy_from(default_inst<::test::fixtures::enums::SomeStruct>().fine_ref());
      return;
    case 2:
      obj.questionable_ref().copy_from(default_inst<::test::fixtures::enums::SomeStruct>().questionable_ref());
      return;
    case 3:
      obj.tags_ref().copy_from(default_inst<::test::fixtures::enums::SomeStruct>().tags_ref());
      return;
  }
}

template<>
inline void reset_field<::test::fixtures::enums::MyStruct>(
    ::test::fixtures::enums::MyStruct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.me2_3_ref().copy_from(default_inst<::test::fixtures::enums::MyStruct>().me2_3_ref());
      return;
    case 1:
      obj.me3_n3_ref().copy_from(default_inst<::test::fixtures::enums::MyStruct>().me3_n3_ref());
      return;
    case 2:
      obj.me1_t1_ref().copy_from(default_inst<::test::fixtures::enums::MyStruct>().me1_t1_ref());
      return;
    case 3:
      obj.me1_t2_ref().copy_from(default_inst<::test::fixtures::enums::MyStruct>().me1_t2_ref());
      return;
  }
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::enums::SomeStruct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::enums::MyStruct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift
