#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/list/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.object cimport PyTypeObject
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr
from libcpp.optional cimport optional as __optional
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from libcpp.utility cimport move as cmove
from cpython cimport bool as pbool
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
from thrift.py3.types import _IsSet as _fbthrift_IsSet
from thrift.py3.types cimport make_unique
cimport thrift.py3.types
cimport thrift.py3.exceptions
cimport thrift.python.exceptions
from thrift.python.types import EnumMeta as __EnumMeta
from thrift.python.std_libcpp cimport sv_to_str as __sv_to_str, string_view as __cstring_view
from thrift.python.types cimport(
    BadEnum as __BadEnum,
)
from thrift.py3.types cimport (
    cSetOp as __cSetOp,
    richcmp as __richcmp,
    set_op as __set_op,
    setcmp as __setcmp,
    init_unicode_from_cpp as __init_unicode_from_cpp,
    set_iter as __set_iter,
    map_iter as __map_iter,
    map_contains as __map_contains,
    map_getitem as __map_getitem,
    reference_shared_ptr as __reference_shared_ptr,
    get_field_name_by_index as __get_field_name_by_index,
    reset_field as __reset_field,
    translate_cpp_enum_to_python,
    const_pointer_cast,
    make_const_shared,
    constant_shared_ptr,
)
cimport thrift.py3.serializer as serializer
from thrift.python.protocol cimport Protocol as __Protocol
import folly.iobuf as _fbthrift_iobuf
from folly.optional cimport cOptional
from folly.memory cimport to_shared_ptr as __to_shared_ptr
from folly.range cimport Range as __cRange

import sys
from collections.abc import Sequence, Set, Mapping, Iterable
import weakref as __weakref
import builtins as _builtins
import importlib


from module.containers_FBTHRIFT_ONLY_DO_NOT_USE import (
    List__string,
)


cdef object get_types_reflection():
    import importlib
    return importlib.import_module(
        "module.types_reflection"
    )


cdef vector[string] List__string__make_instance(object items) except *:
    cdef vector[string] c_inst
    if items is not None:
        if isinstance(items, str):
            raise TypeError("If you really want to pass a string into a _typing.Sequence[str] field, explicitly convert it first.")
        for item in items:
            if not isinstance(item, str):
                raise TypeError(f"{item!r} is not of type str")
            c_inst.push_back(item.encode('UTF-8'))
    return cmove(c_inst)

cdef object List__string__from_cpp(const vector[string]& c_vec) except *:
    cdef list py_list = []
    cdef int idx = 0
    for idx in range(c_vec.size()):
        py_list.append(__init_unicode_from_cpp(c_vec[idx]))
    return List__string(py_list, thrift.py3.types._fbthrift_list_private_ctor)

@__cython.auto_pickle(False)
@__cython.final
cdef class Map__i64_List__string(thrift.py3.types.Map):
    def __init__(self, items=None):
        if isinstance(items, Map__i64_List__string):
            self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = (<Map__i64_List__string> items)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
        else:
            self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = Map__i64_List__string__make_instance(items)

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cmap[cint64_t,vector[string]]] c_items):
        __fbthrift_inst = <Map__i64_List__string>Map__i64_List__string.__new__(Map__i64_List__string)
        __fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = cmove(c_items)
        return __fbthrift_inst

    def __copy__(Map__i64_List__string self):
        cdef shared_ptr[cmap[cint64_t,vector[string]]] cpp_obj = make_shared[cmap[cint64_t,vector[string]]](
            deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE)
        )
        return Map__i64_List__string._create_FBTHRIFT_ONLY_DO_NOT_USE(cmove(cpp_obj))

    def __len__(self):
        return deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).size()

    cdef _check_key_type(self, key):
        if not self or key is None:
            return
        if isinstance(key, int):
            return key

    def __getitem__(self, key):
        err = KeyError(f'{key}')
        key = self._check_key_type(key)
        if key is None:
            raise err
        cdef cint64_t ckey = key
        if not __map_contains(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE, ckey):
            raise err
        cdef vector[string] citem
        __map_getitem(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE, ckey, citem)
        return List__string__from_cpp(citem)

    def __iter__(self):
        if not self:
            return
        cdef __map_iter[cmap[cint64_t,vector[string]]] itr = __map_iter[cmap[cint64_t,vector[string]]](self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE)
        cdef cint64_t citem = 0
        for i in range(deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).size()):
            itr.genNextKey(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE, citem)
            yield citem

    def __contains__(self, key):
        key = self._check_key_type(key)
        if key is None:
            return False
        cdef cint64_t ckey = key
        return __map_contains(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE, ckey)

    def values(self):
        if not self:
            return
        cdef __map_iter[cmap[cint64_t,vector[string]]] itr = __map_iter[cmap[cint64_t,vector[string]]](self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE)
        cdef vector[string] citem
        for i in range(deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).size()):
            itr.genNextValue(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE, citem)
            yield List__string__from_cpp(citem)

    def items(self):
        if not self:
            return
        cdef __map_iter[cmap[cint64_t,vector[string]]] itr = __map_iter[cmap[cint64_t,vector[string]]](self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE)
        cdef cint64_t ckey = 0
        cdef vector[string] citem
        for i in range(deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).size()):
            itr.genNextItem(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE, ckey, citem)
            yield (ckey, List__string__from_cpp(citem))

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__Map__i64_List__string()

Mapping.register(Map__i64_List__string)

cdef shared_ptr[cmap[cint64_t,vector[string]]] Map__i64_List__string__make_instance(object items) except *:
    cdef shared_ptr[cmap[cint64_t,vector[string]]] c_inst = make_shared[cmap[cint64_t,vector[string]]]()
    if items is not None:
        for key, item in items.items():
            if not isinstance(key, int):
                raise TypeError(f"{key!r} is not of type int")
            key = <cint64_t> key
            if item is None:
                raise TypeError("None is not of type _typing.Sequence[str]")
            if not isinstance(item, List__string):
                item = List__string(item)

            deref(c_inst)[key] = List__string__make_instance(item)
    return cmove(c_inst)



TEST_MAP = Map__i64_List__string._create_FBTHRIFT_ONLY_DO_NOT_USE(constant_shared_ptr(cTEST_MAP()))
