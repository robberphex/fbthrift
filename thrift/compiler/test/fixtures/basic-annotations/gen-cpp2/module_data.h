/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_types.h"

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::cpp2::YourEnum> {
  using type = ::cpp2::YourEnum;
  static constexpr const std::size_t size = 3;
  static constexpr std::array<type, size> values = {{
      type::MyValue1,
      type::MyValue2,
      type::REALM,
  }};
  static constexpr std::array<folly::StringPiece, size> names = {{
      "MyValue1",
      "MyValue2",
      "DOMAIN",
  }};
};

template <> struct TEnumDataStorage<::cpp2::detail::YourUnion::Type> {
  using type = ::cpp2::detail::YourUnion::Type;
  static constexpr const std::size_t size = 0;
  static constexpr std::array<type, size> values = {{
  }};
  static constexpr std::array<folly::StringPiece, size> names = {{
  }};
};

template <> struct TStructDataStorage<::cpp2::MyStructNestedAnnotation> {
  static constexpr const std::size_t fields_size = 1;
  static const folly::StringPiece name;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::cpp2::detail::YourUnion> {
  static constexpr const std::size_t fields_size = 0;
  static const folly::StringPiece name;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::cpp2::detail::YourException> {
  static constexpr const std::size_t fields_size = 0;
  static const folly::StringPiece name;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::cpp2::detail::YourStruct> {
  static constexpr const std::size_t fields_size = 9;
  static const folly::StringPiece name;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::cpp2::SecretStruct> {
  static constexpr const std::size_t fields_size = 2;
  static const folly::StringPiece name;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<folly::StringPiece, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

}} // apache::thrift
