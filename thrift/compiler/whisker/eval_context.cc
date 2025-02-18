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

#include <thrift/compiler/whisker/eval_context.h>

#include <algorithm>
#include <functional>
#include <iterator>
#include <map>

#include <fmt/core.h>

namespace w = whisker::make;

namespace whisker {

namespace {

const object* find_property(const object& o, std::string_view identifier) {
  using result = const object*;
  return o.visit(
      [](null) -> result { return nullptr; },
      [](i64) -> result { return nullptr; },
      [](f64) -> result { return nullptr; },
      [](const string&) -> result { return nullptr; },
      [](boolean) -> result { return nullptr; },
      [](const array&) -> result { return nullptr; },
      [identifier](const native_object::ptr& o) -> result {
        return o->lookup_property(identifier);
      },
      [identifier](const map& m) -> result {
        if (auto it = m.find(identifier); it != m.end()) {
          return &it->second;
        }
        return nullptr;
      });
}

/**
 * A class representing the bag of properties at the global scope (even before
 * the root scope).
 *
 * This could be a w::map but for debugging purposes, a native_object with a
 * custom print_to function is beneficial.
 */
class global_scope_object : public native_object {
 public:
  explicit global_scope_object(map properties)
      : properties_(std::move(properties)) {}

  const object* lookup_property(std::string_view identifier) const override {
    if (auto property = properties_.find(identifier);
        property != properties_.end()) {
      return &property->second;
    }
    return nullptr;
  }

  void print_to(tree_printer::scope scope, const object_print_options& options)
      const override {
    scope.println("<global scope> (size={})", properties_.size());
    for (const auto& [key, value] : properties_) {
      auto element_scope = scope.open_transparent_property();
      element_scope.println("'{}'", key);
      whisker::print_to(value, element_scope.open_node(), options);
    }
  }

 private:
  map properties_;
};

} // namespace

const object* eval_context::lexical_scope::lookup_property(
    std::string_view identifier) {
  if (auto local = locals_.find(identifier); local != locals_.end()) {
    return &local->second;
  }
  return find_property(this_ref_, identifier);
}

eval_context::eval_context(const object& root_scope, map globals)
    : global_scope_(
          w::make_native_object<global_scope_object>(std::move(globals))),
      stack_({lexical_scope(global_scope_), lexical_scope(root_scope)}) {}

eval_context::~eval_context() noexcept = default;

std::size_t eval_context::stack_depth() const {
  // The global scope is always on the stack but should not count towards the
  // depth (it's at depth 0).
  return stack_.size() - 1;
}

void eval_context::push_scope(const object& object) {
  stack_.emplace_back(object);
}

void eval_context::pop_scope() {
  // The root scope cannot be popped.
  assert(stack_depth() > 1);
  stack_.pop_back();
}

const object& eval_context::global_scope() const {
  return global_scope_;
}

expected<std::monostate, eval_name_already_bound_error>
eval_context::bind_local(std::string name, object value) {
  assert(!stack_.empty());
  if (auto [_, inserted] =
          stack_.back().locals().insert(std::pair{name, std::move(value)});
      !inserted) {
    return unexpected(eval_name_already_bound_error(std::move(name)));
  }
  return {};
}

expected<
    std::reference_wrapper<const object>,
    std::variant<eval_scope_lookup_error, eval_property_lookup_error>>
eval_context::lookup_object(const std::vector<std::string>& path) {
  assert(!stack_.empty());

  if (path.empty()) {
    // Lookup is {{.}}
    return stack_.back().this_ref();
  }

  auto current = std::invoke([&]() -> const object* {
    const auto& id = path.front();
    // Crawl up through the scope stack since names can be shadowed.
    for (auto scope = stack_.rbegin(); scope != stack_.rend(); ++scope) {
      if (auto result = scope->lookup_property(id)) {
        return result;
      }
    }
    return nullptr;
  });

  if (current == nullptr) {
    std::vector<object> searched_scopes;
    searched_scopes.reserve(stack_.size());
    // Searching happened in reverse order.
    std::transform(
        stack_.rbegin(),
        stack_.rend(),
        std::back_inserter(searched_scopes),
        [](const auto& scope) { return scope.this_ref(); });
    return unexpected(
        eval_scope_lookup_error(path.front(), std::move(searched_scopes)));
  }

  for (auto component = std::next(path.begin()); component != path.end();
       ++component) {
    const object* next = find_property(*current, *component);
    if (next == nullptr) {
      return unexpected(eval_property_lookup_error(
          *current, /* missing_from */
          std::vector<std::string>(path.begin(), component), /* success_path */
          *component /* missing_name */));
    }
    current = next;
  }

  assert(current != nullptr);
  return *current;
}

} // namespace whisker
