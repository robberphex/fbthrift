/**
 * Autogenerated by Thrift for module0.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include <thrift/lib/py3/enums.h>
#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module0_data.h"
#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module0_types.h"
#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module0_metadata.h"
namespace thrift {
namespace py3 {



template<>
inline void reset_field<::module0::Struct>(
    ::module0::Struct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.first_ref().copy_from(default_inst<::module0::Struct>().first_ref());
      return;
    case 1:
      obj.second_ref().copy_from(default_inst<::module0::Struct>().second_ref());
      return;
  }
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::module0::Struct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift
