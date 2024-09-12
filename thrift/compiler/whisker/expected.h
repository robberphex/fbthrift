/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <cassert>
#include <exception>
#include <optional>
#include <type_traits>
#include <utility>
#include <variant>

namespace whisker {

// This macro greatly simplifies the SFINAE tricks required by expected<T, E>.
#define WHISKER_EXPECTED_REQUIRES(...) std::enable_if_t<__VA_ARGS__>* = nullptr

/**
 * A type that mimics std::expected<T, E>:
 *   https://en.cppreference.com/w/cpp/utility/expected
 *
 * This class implements a subset of the std::expected API. In other words,
 * std::expected is a drop-in replacement for whisker::expected, but not the
 * other way around. This is a trade-off between code complexity and usability,
 * with the expectation that this can be replaced with std::expected with C++23.
 *
 * The following features stand out as missing from whisker::expected<T, E>:
 *   - whisker::expected is not constexpr-compatible.
 *   - whisker::expected does not support void value types (use std::monostate).
 *   - whisker::expected does not have the triviality guarantees of
 *     std::expected. whisker::expected<T, E> is never trivially constructible.
 *   - whisker::expected does not have the same noexcept guarantees as
 *     std::expected.
 *   - whisker::expected does not perform implicit conversions when constructing
 *     or assigning from convertible types. std::expected<T1, E> can be
 *     converted to std::expected<T2, E> if T1 is convertible to T2.
 *     whisker::expected does not support such conversions.
 *   - whisker::expected does not support std::initializer_list constructors.
 *   - whisker::expected does not support value_or / error_or.
 *   - whisker::expected does not support monadic operations:
 *     - and_then
 *     - transform
 *     - or_else
 *     - transform_error
 */
template <typename T, typename E>
class expected;

/**
 * A type that mimics std::unexpected<E>:
 *   https://en.cppreference.com/w/cpp/utility/expected/unexpected
 */
template <typename E>
class unexpected;

/**
 * A type that mimics std::unexpect_t:
 *   https://en.cppreference.com/w/cpp/utility/expected/unexpect_t
 */
struct unexpect_t {
  explicit unexpect_t() = default;
};
constexpr inline unexpect_t unexpect{};

/**
 * A type that mimics std::bad_expected_access:
 *   https://en.cppreference.com/w/cpp/utility/expected/bad_expected_access
 */
template <typename E>
class bad_expected_access;

template <>
class bad_expected_access<void> : public std::exception {
 public:
  const char* what() const noexcept override { return "bad expected access"; }
};

template <typename E>
class bad_expected_access : public bad_expected_access<void> {
 public:
  explicit bad_expected_access(E error) : error_(std::move(error)) {}

  const E& error() const& noexcept { return error_; }
  E& error() & noexcept { return error_; }
  E&& error() && noexcept { return std::move(error_); }

 private:
  E error_;
};

namespace detail {
// std::remove_cvref_t was added in C++20
template <typename T>
using remove_cvref_t = std::remove_cv_t<std::remove_reference_t<T>>;
} // namespace detail

template <typename E>
class unexpected {
 public:
  unexpected(const unexpected&) = default;
  unexpected(unexpected&&) = default;

  template <
      typename G = E,
      WHISKER_EXPECTED_REQUIRES(
          (!std::is_same_v<detail::remove_cvref_t<G>, unexpected> &&
           !std::is_same_v<detail::remove_cvref_t<G>, std::in_place_t>)),
      WHISKER_EXPECTED_REQUIRES(std::is_constructible_v<E, G>)>
  explicit unexpected(G&& e) : error_(std::forward<G>(e)) {}

  template <
      typename... Args,
      WHISKER_EXPECTED_REQUIRES(std::is_constructible_v<E, Args...>)>
  explicit unexpected(std::in_place_t, Args&&... args)
      : error_(std::forward<Args>(args)...) {}

  unexpected& operator=(const unexpected&) = default;
  unexpected& operator=(unexpected&&) = default;

  const E& error() const& noexcept { return error_; }
  E& error() & noexcept { return error_; }
  E&& error() && noexcept { return std::move(error_); }

  void swap(unexpected& other) {
    using std::swap;
    swap(error_, other.error_);
  }

  template <typename G>
  friend bool operator==(const unexpected& lhs, const unexpected<G>& rhs) {
    return lhs.error_ == rhs.error_;
  }

 private:
  E error_;
};

template <typename E>
unexpected(E) -> unexpected<E>;

template <typename T, typename E>
class expected {
  static_assert(!std::is_reference_v<T>);
  static_assert(!std::is_same_v<T, std::remove_cv_t<std::in_place_t>>);
  static_assert(!std::is_same_v<T, std::remove_cv_t<unexpect_t>>);
  static_assert(!std::is_same_v<T, std::remove_cv_t<unexpected<E>>>);
  static_assert(!std::is_void_v<T>, "Use std::monostate instead.");
  static_assert(std::is_nothrow_move_constructible_v<T>);
  static_assert(std::is_nothrow_move_assignable_v<T>);

  static_assert(!std::is_reference_v<E>);
  static_assert(!std::is_void_v<E>);
  static_assert(std::is_nothrow_move_constructible_v<E>);
  static_assert(std::is_nothrow_move_assignable_v<E>);

  template <typename U>
  static constexpr inline bool is_forward_constructible_from =
      std::is_constructible_v<T, U> &&
      !std::is_same_v<detail::remove_cvref_t<U>, std::in_place_t> &&
      !std::is_same_v<detail::remove_cvref_t<U>, unexpect_t> &&
      !std::is_same_v<detail::remove_cvref_t<U>, expected> &&
      !std::is_same_v<detail::remove_cvref_t<U>, unexpected<E>>;

  template <typename U>
  static constexpr inline bool is_forward_assignable_from =
      std::is_constructible_v<T, U> && std::is_assignable_v<T&, U> &&
      !std::is_same_v<detail::remove_cvref_t<U>, expected> &&
      !std::is_same_v<detail::remove_cvref_t<U>, unexpected<E>>;

 public:
  using value_type = T;
  using error_type = E;
  using unexpected_type = unexpected<E>;

  template <
      typename U = T,
      WHISKER_EXPECTED_REQUIRES(std::is_default_constructible_v<U>)>
  expected() : storage_() {}

  expected(const expected& other) = default;
  expected(expected&& other) noexcept = default;

  template <
      typename U,
      WHISKER_EXPECTED_REQUIRES(std::is_convertible_v<U, T>),
      WHISKER_EXPECTED_REQUIRES(is_forward_constructible_from<U>)>
  /* implicit */ expected(U&& value)
      : storage_(std::in_place_type<T>, std::forward<U>(value)) {}

  template <
      typename U = T,
      WHISKER_EXPECTED_REQUIRES(!std::is_convertible_v<U, T>),
      WHISKER_EXPECTED_REQUIRES(is_forward_constructible_from<U>)>
  explicit expected(U&& value)
      : storage_(std::in_place_type<T>, std::forward<U>(value)) {}

  /* implicit */ expected(const unexpected<E>& error)
      : storage_(std::in_place_type<unexpected<E>>, error) {}

  /* implicit */ expected(unexpected<E>&& error)
      : storage_(std::in_place_type<unexpected<E>>, std::move(error)) {}

  template <
      typename... Args,
      WHISKER_EXPECTED_REQUIRES(std::is_constructible_v<T, Args...>)>
  explicit expected(std::in_place_t, Args&&... args)
      : storage_(std::in_place_type<T>, std::forward<Args>(args)...) {}

  template <
      typename... Args,
      WHISKER_EXPECTED_REQUIRES(std::is_constructible_v<E, Args...>)>
  explicit expected(unexpect_t, Args&&... args)
      : storage_(
            std::in_place_type<unexpected<E>>,
            std::in_place,
            std::forward<Args>(args)...) {}

  expected& operator=(const expected& other) = default;
  expected& operator=(expected&& other) noexcept = default;

  template <
      typename U = T,
      WHISKER_EXPECTED_REQUIRES(is_forward_assignable_from<U>)>
  expected& operator=(U&& value) {
    storage_.template emplace<T>(std::forward<U>(value));
    return *this;
  }

  expected& operator=(const unexpected<E>& error) {
    storage_.template emplace<unexpected<E>>(error);
    return *this;
  }

  expected& operator=(unexpected<E>&& error) {
    storage_.template emplace<unexpected<E>>(std::move(error));
    return *this;
  }

  bool has_value() const noexcept {
    return std::holds_alternative<T>(storage_);
  }
  explicit operator bool() const noexcept { return has_value(); }

  const T* operator->() const noexcept {
    assert(has_value());
    return std::get_if<T>(&storage_);
  }
  T* operator->() noexcept {
    assert(has_value());
    return std::get_if<T>(&storage_);
  }
  const T& operator*() const& noexcept {
    assert(has_value());
    return *std::get_if<T>(&storage_);
  }
  T& operator*() & noexcept {
    assert(has_value());
    return *std::get_if<T>(&storage_);
  }
  T&& operator*() && noexcept {
    assert(has_value());
    return std::move(*std::get_if<T>(&storage_));
  }

  const T& value() const& {
    static_assert(std::is_copy_constructible_v<E>);
    if (!has_value()) {
      throw bad_expected_access(std::as_const(error()));
    }
    return **this;
  }
  T& value() & {
    static_assert(std::is_copy_constructible_v<E>);
    if (!has_value()) {
      throw bad_expected_access(std::as_const(error()));
    }
    return **this;
  }
  T&& value() && {
    static_assert(std::is_move_constructible_v<E>);
    if (!has_value()) {
      throw bad_expected_access(std::move(*this).error());
    }
    return *(std::move(*this));
  }

  const E& error() const& noexcept {
    assert(!has_value());
    return std::get_if<unexpected<E>>(&storage_)->error();
  }
  E& error() & noexcept {
    assert(!has_value());
    return std::get_if<unexpected<E>>(&storage_)->error();
  }
  E&& error() && noexcept {
    assert(!has_value());
    return std::move(*std::get_if<unexpected<E>>(&storage_)).error();
  }

  template <
      typename... Args,
      WHISKER_EXPECTED_REQUIRES(std::is_nothrow_constructible_v<T, Args...>)>
  T& emplace(Args&&... args) noexcept {
    return storage_.template emplace<T>(std::forward<Args>(args)...);
  }

  void swap(expected& other) {
    using std::swap;
    swap(storage_, other.storage_);
  }

  friend void swap(expected& lhs, expected& rhs) { lhs.swap(rhs); }

  template <
      typename U,
      typename G,
      WHISKER_EXPECTED_REQUIRES(!std::is_void_v<U>)>
  friend bool operator==(const expected<T, E>& lhs, const expected<U, G>& rhs) {
    return lhs.storage_ == rhs.storage_;
  }
  template <typename U>
  friend bool operator==(const expected<T, E>& lhs, U&& rhs) {
    return lhs.has_value() && *lhs == std::forward<U>(rhs);
  }
  friend bool operator==(const expected<T, E>& lhs, const unexpected<E>& rhs) {
    return !lhs.has_value() && lhs.error() == rhs.error();
  }

  // Before C++20, operator!= is not synthesized from operator==.
  template <
      typename U,
      typename G,
      WHISKER_EXPECTED_REQUIRES(!std::is_void_v<U>)>
  friend bool operator!=(const expected<T, E>& lhs, const expected<U, G>& rhs) {
    return !(lhs == rhs);
  }
  template <typename U>
  friend bool operator!=(const expected<T, E>& lhs, U&& rhs) {
    return !(lhs == std::forward<U>(rhs));
  }
  friend bool operator!=(const expected<T, E>& lhs, const unexpected<E>& rhs) {
    return !(lhs == rhs);
  }

 private:
  std::variant<T, unexpected<E>> storage_;
};

#undef WHISKER_EXPECTED_REQUIRES

} // namespace whisker