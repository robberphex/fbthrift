#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/inject_metadata_fields/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cython.operator cimport dereference as deref
from libcpp.utility cimport move as cmove
from thrift.py3.types cimport (
    assign_unique_ptr,
    assign_shared_ptr,
    assign_shared_const_ptr,
    bytes_to_string,
    make_unique,
)
cimport thrift.py3.types
from thrift.py3.types cimport (
    reset_field as __reset_field,
    StructFieldsSetter as __StructFieldsSetter
)

from thrift.py3.types cimport const_pointer_cast, BadEnum as _fbthrift_BadEnum


@__cython.auto_pickle(False)
cdef class __Fields_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __Fields_FieldsSetter _fbthrift_create(_module_types.cFields* struct_cpp_obj):
        cdef __Fields_FieldsSetter __fbthrift_inst = __Fields_FieldsSetter.__new__(__Fields_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"injected_field")] = __Fields_FieldsSetter._set_field_0
        return __fbthrift_inst

    cdef void set_field(__Fields_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __Fields_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field injected_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cFields](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'injected_field is not a { str !r}.')
        deref(self._struct_cpp_obj).injected_field_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))


@__cython.auto_pickle(False)
cdef class __FieldsInjectedToEmptyStruct_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __FieldsInjectedToEmptyStruct_FieldsSetter _fbthrift_create(_module_types.cFieldsInjectedToEmptyStruct* struct_cpp_obj):
        cdef __FieldsInjectedToEmptyStruct_FieldsSetter __fbthrift_inst = __FieldsInjectedToEmptyStruct_FieldsSetter.__new__(__FieldsInjectedToEmptyStruct_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"injected_field")] = __FieldsInjectedToEmptyStruct_FieldsSetter._set_field_0
        return __fbthrift_inst

    cdef void set_field(__FieldsInjectedToEmptyStruct_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __FieldsInjectedToEmptyStruct_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field injected_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cFieldsInjectedToEmptyStruct](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'injected_field is not a { str !r}.')
        deref(self._struct_cpp_obj).injected_field_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))


@__cython.auto_pickle(False)
cdef class __FieldsInjectedToStruct_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __FieldsInjectedToStruct_FieldsSetter _fbthrift_create(_module_types.cFieldsInjectedToStruct* struct_cpp_obj):
        cdef __FieldsInjectedToStruct_FieldsSetter __fbthrift_inst = __FieldsInjectedToStruct_FieldsSetter.__new__(__FieldsInjectedToStruct_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"string_field")] = __FieldsInjectedToStruct_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"injected_field")] = __FieldsInjectedToStruct_FieldsSetter._set_field_1
        return __fbthrift_inst

    cdef void set_field(__FieldsInjectedToStruct_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __FieldsInjectedToStruct_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field string_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cFieldsInjectedToStruct](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'string_field is not a { str !r}.')
        deref(self._struct_cpp_obj).string_field_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field injected_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cFieldsInjectedToStruct](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'injected_field is not a { str !r}.')
        deref(self._struct_cpp_obj).injected_field_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))


@__cython.auto_pickle(False)
cdef class __FieldsInjectedWithIncludedStruct_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __FieldsInjectedWithIncludedStruct_FieldsSetter _fbthrift_create(_module_types.cFieldsInjectedWithIncludedStruct* struct_cpp_obj):
        cdef __FieldsInjectedWithIncludedStruct_FieldsSetter __fbthrift_inst = __FieldsInjectedWithIncludedStruct_FieldsSetter.__new__(__FieldsInjectedWithIncludedStruct_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"string_field")] = __FieldsInjectedWithIncludedStruct_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"injected_field")] = __FieldsInjectedWithIncludedStruct_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"injected_structured_annotation_field")] = __FieldsInjectedWithIncludedStruct_FieldsSetter._set_field_2
        __fbthrift_inst._setters[__cstring_view(<const char*>"injected_unstructured_annotation_field")] = __FieldsInjectedWithIncludedStruct_FieldsSetter._set_field_3
        return __fbthrift_inst

    cdef void set_field(__FieldsInjectedWithIncludedStruct_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __FieldsInjectedWithIncludedStruct_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field string_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cFieldsInjectedWithIncludedStruct](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'string_field is not a { str !r}.')
        deref(self._struct_cpp_obj).string_field_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field injected_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cFieldsInjectedWithIncludedStruct](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'injected_field is not a { str !r}.')
        deref(self._struct_cpp_obj).injected_field_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field injected_structured_annotation_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cFieldsInjectedWithIncludedStruct](deref(self._struct_cpp_obj), 2)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'injected_structured_annotation_field is not a { str !r}.')
        deref(self._struct_cpp_obj).injected_structured_annotation_field_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

    cdef void _set_field_3(self, _fbthrift_value) except *:
        # for field injected_unstructured_annotation_field
        if _fbthrift_value is None:
            __reset_field[_module_types.cFieldsInjectedWithIncludedStruct](deref(self._struct_cpp_obj), 3)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'injected_unstructured_annotation_field is not a { str !r}.')
        deref(self._struct_cpp_obj).injected_unstructured_annotation_field_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

