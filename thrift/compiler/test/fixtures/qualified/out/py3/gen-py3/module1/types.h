/**
 * Autogenerated by Thrift for module1.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include <thrift/lib/py3/enums.h>
#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module1_data.h"
#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module1_types.h"
#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module1_metadata.h"
namespace thrift {
namespace py3 {



template<>
inline void reset_field<::module1::Struct>(
    ::module1::Struct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.first_ref().copy_from(default_inst<::module1::Struct>().first_ref());
      return;
    case 1:
      obj.second_ref().copy_from(default_inst<::module1::Struct>().second_ref());
      return;
  }
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::module1::Struct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift
