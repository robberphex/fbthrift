#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import typing as _typing

import enum

import folly.iobuf as _fbthrift_iobuf
import test.fixtures.python_capi.module.thrift_abstract_types
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions

import apache.thrift.type.id.thrift_types as _fbthrift__apache__thrift__type__id__thrift_types

import apache.thrift.type.schema.thrift_types as _fbthrift__apache__thrift__type__schema__thrift_types

import test.fixtures.python_capi.serialized_dep.thrift_types as _fbthrift__test__fixtures__python_capi__serialized_dep__thrift_types

import test.fixtures.python_capi.thrift_dep.thrift_types as _fbthrift__test__fixtures__python_capi__thrift_dep__thrift_types

class _fbthrift_compatible_with_MyEnum:
    pass


class MyEnum(_fbthrift_python_types.Enum, int, test.fixtures.python_capi.module.thrift_abstract_types.MyEnum, _fbthrift_compatible_with_MyEnum):
    MyValue1: MyEnum = ...
    MyValue2: MyEnum = ...
    def _to_python(self) -> MyEnum: ...
    def _to_py3(self) -> "test.fixtures.python_capi.module.types.MyEnum": ...  # type: ignore
    def _to_py_deprecated(self) -> int: ...

class _fbthrift_compatible_with_AnnoyingEnum:
    pass


class AnnoyingEnum(_fbthrift_python_types.Enum, int, test.fixtures.python_capi.module.thrift_abstract_types.AnnoyingEnum, _fbthrift_compatible_with_AnnoyingEnum):
    FOO: AnnoyingEnum = ...
    BAR: AnnoyingEnum = ...
    def _to_python(self) -> AnnoyingEnum: ...
    def _to_py3(self) -> "test.fixtures.python_capi.module.types.AnnoyingEnum": ...  # type: ignore
    def _to_py_deprecated(self) -> int: ...


class _fbthrift_compatible_with_MyStruct:
    pass


class MyStruct(_fbthrift_python_types.Struct, _fbthrift_compatible_with_MyStruct, test.fixtures.python_capi.module.thrift_abstract_types.MyStruct):
    inty: _typing.Final[int] = ...
    stringy: _typing.Final[str] = ...
    myItemy: _typing.Final[MyDataItem] = ...
    myEnumy: _typing.Final[MyEnum] = ...
    booly: _typing.Final[bool] = ...
    floatListy: _typing.Final[_typing.Sequence[float]] = ...
    strMappy: _typing.Final[_typing.Mapping[bytes, str]] = ...
    intSetty: _typing.Final[_typing.AbstractSet[int]] = ...
    def __init__(
        self, *,
        inty: _typing.Optional[int]=...,
        stringy: _typing.Optional[str]=...,
        myItemy: _typing.Optional[_fbthrift_compatible_with_MyDataItem]=...,
        myEnumy: _typing.Optional[_fbthrift_compatible_with_MyEnum]=...,
        booly: _typing.Optional[bool]=...,
        floatListy: _typing.Optional[_typing.Sequence[float]]=...,
        strMappy: _typing.Optional[_typing.Mapping[bytes, str]]=...,
        intSetty: _typing.Optional[_typing.AbstractSet[int]]=...
    ) -> None: ...

    def __call__(
        self, *,
        inty: _typing.Optional[int]=...,
        stringy: _typing.Optional[str]=...,
        myItemy: _typing.Optional[_fbthrift_compatible_with_MyDataItem]=...,
        myEnumy: _typing.Optional[_fbthrift_compatible_with_MyEnum]=...,
        booly: _typing.Optional[bool]=...,
        floatListy: _typing.Optional[_typing.Sequence[float]]=...,
        strMappy: _typing.Optional[_typing.Mapping[bytes, str]]=...,
        intSetty: _typing.Optional[_typing.AbstractSet[int]]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str, MyDataItem, MyEnum, bool, _typing.Sequence[float], _typing.Mapping[bytes, str], _typing.AbstractSet[int]]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "test.fixtures.python_capi.module.thrift_mutable_types.MyStruct": ...  # type: ignore
    def _to_py3(self) -> "test.fixtures.python_capi.module.types.MyStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyStruct": ...  # type: ignore


class _fbthrift_compatible_with_MyDataItem:
    pass


class MyDataItem(_fbthrift_python_types.Struct, _fbthrift_compatible_with_MyDataItem, test.fixtures.python_capi.module.thrift_abstract_types.MyDataItem):
    s: _typing.Final[str] = ...
    def __init__(
        self, *,
        s: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        s: _typing.Optional[str]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "test.fixtures.python_capi.module.thrift_mutable_types.MyDataItem": ...  # type: ignore
    def _to_py3(self) -> "test.fixtures.python_capi.module.types.MyDataItem": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyDataItem": ...  # type: ignore


class _fbthrift_compatible_with_TransitiveDoubler:
    pass


class TransitiveDoubler(_fbthrift_python_types.Struct, _fbthrift_compatible_with_TransitiveDoubler, test.fixtures.python_capi.module.thrift_abstract_types.TransitiveDoubler):
    def __init__(
        self,
    ) -> None: ...

    def __call__(
        self,
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "test.fixtures.python_capi.module.thrift_mutable_types.TransitiveDoubler": ...  # type: ignore
    def _to_py3(self) -> "test.fixtures.python_capi.module.types.TransitiveDoubler": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.TransitiveDoubler": ...  # type: ignore


class _fbthrift_compatible_with_DoubledPair:
    pass


class DoubledPair(_fbthrift_python_types.Struct, _fbthrift_compatible_with_DoubledPair, test.fixtures.python_capi.module.thrift_abstract_types.DoubledPair):
    s: _typing.Final[str] = ...
    x: _typing.Final[int] = ...
    def __init__(
        self, *,
        s: _typing.Optional[str]=...,
        x: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        s: _typing.Optional[str]=...,
        x: _typing.Optional[int]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, int]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "test.fixtures.python_capi.module.thrift_mutable_types.DoubledPair": ...  # type: ignore
    def _to_py3(self) -> "test.fixtures.python_capi.module.types.DoubledPair": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.DoubledPair": ...  # type: ignore


class _fbthrift_compatible_with_StringPair:
    pass


class StringPair(_fbthrift_python_types.Struct, _fbthrift_compatible_with_StringPair, test.fixtures.python_capi.module.thrift_abstract_types.StringPair):
    normal: _typing.Final[str] = ...
    doubled: _typing.Final[str] = ...
    def __init__(
        self, *,
        normal: _typing.Optional[str]=...,
        doubled: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        normal: _typing.Optional[str]=...,
        doubled: _typing.Optional[str]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, str]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "test.fixtures.python_capi.module.thrift_mutable_types.StringPair": ...  # type: ignore
    def _to_py3(self) -> "test.fixtures.python_capi.module.types.StringPair": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.StringPair": ...  # type: ignore


class _fbthrift_compatible_with_EmptyStruct:
    pass


class EmptyStruct(_fbthrift_python_types.Struct, _fbthrift_compatible_with_EmptyStruct, test.fixtures.python_capi.module.thrift_abstract_types.EmptyStruct):
    def __init__(
        self,
    ) -> None: ...

    def __call__(
        self,
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "test.fixtures.python_capi.module.thrift_mutable_types.EmptyStruct": ...  # type: ignore
    def _to_py3(self) -> "test.fixtures.python_capi.module.types.EmptyStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.EmptyStruct": ...  # type: ignore


class _fbthrift_compatible_with_PrimitiveStruct:
    pass


class PrimitiveStruct(_fbthrift_python_types.Struct, _fbthrift_compatible_with_PrimitiveStruct, test.fixtures.python_capi.module.thrift_abstract_types.PrimitiveStruct):
    booly: _typing.Final[bool] = ...
    charry: _typing.Final[int] = ...
    shorty: _typing.Final[int] = ...
    inty: _typing.Final[int] = ...
    longy: _typing.Final[int] = ...
    floaty: _typing.Final[_typing.Optional[float]] = ...
    dubby: _typing.Final[_typing.Optional[float]] = ...
    stringy: _typing.Final[_typing.Optional[str]] = ...
    bytey: _typing.Final[_typing.Optional[bytes]] = ...
    buffy: _typing.Final[_fbthrift_iobuf.IOBuf] = ...
    pointbuffy: _typing.Final[_fbthrift_iobuf.IOBuf] = ...
    patched_struct: _typing.Final[MyStruct] = ...
    empty_struct: _typing.Final[EmptyStruct] = ...
    fbstring: _typing.Final[bytes] = ...
    managed_string_view: _typing.Final[str] = ...
    some_error: _typing.Final[_fbthrift__test__fixtures__python_capi__thrift_dep__thrift_types.SomeError] = ...
    def __init__(
        self, *,
        booly: _typing.Optional[bool]=...,
        charry: _typing.Optional[int]=...,
        shorty: _typing.Optional[int]=...,
        inty: _typing.Optional[int]=...,
        longy: _typing.Optional[int]=...,
        floaty: _typing.Optional[float]=...,
        dubby: _typing.Optional[float]=...,
        stringy: _typing.Optional[str]=...,
        bytey: _typing.Optional[bytes]=...,
        buffy: _typing.Optional[_fbthrift_iobuf.IOBuf]=...,
        pointbuffy: _typing.Optional[_fbthrift_iobuf.IOBuf]=...,
        patched_struct: _typing.Optional[_fbthrift_compatible_with_MyStruct]=...,
        empty_struct: _typing.Optional[_fbthrift_compatible_with_EmptyStruct]=...,
        fbstring: _typing.Optional[bytes]=...,
        managed_string_view: _typing.Optional[str]=...,
        some_error: _typing.Optional[_fbthrift__test__fixtures__python_capi__thrift_dep__thrift_types._fbthrift_compatible_with_SomeError]=...
    ) -> None: ...

    def __call__(
        self, *,
        booly: _typing.Optional[bool]=...,
        charry: _typing.Optional[int]=...,
        shorty: _typing.Optional[int]=...,
        inty: _typing.Optional[int]=...,
        longy: _typing.Optional[int]=...,
        floaty: _typing.Optional[float]=...,
        dubby: _typing.Optional[float]=...,
        stringy: _typing.Optional[str]=...,
        bytey: _typing.Optional[bytes]=...,
        buffy: _typing.Optional[_fbthrift_iobuf.IOBuf]=...,
        pointbuffy: _typing.Optional[_fbthrift_iobuf.IOBuf]=...,
        patched_struct: _typing.Optional[_fbthrift_compatible_with_MyStruct]=...,
        empty_struct: _typing.Optional[_fbthrift_compatible_with_EmptyStruct]=...,
        fbstring: _typing.Optional[bytes]=...,
        managed_string_view: _typing.Optional[str]=...,
        some_error: _typing.Optional[_fbthrift__test__fixtures__python_capi__thrift_dep__thrift_types._fbthrift_compatible_with_SomeError]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, int, int, int, int, float, float, str, bytes, _fbthrift_iobuf.IOBuf, _fbthrift_iobuf.IOBuf, MyStruct, EmptyStruct, bytes, str, _fbthrift__test__fixtures__python_capi__thrift_dep__thrift_types.SomeError]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "test.fixtures.python_capi.module.thrift_mutable_types.PrimitiveStruct": ...  # type: ignore
    def _to_py3(self) -> "test.fixtures.python_capi.module.types.PrimitiveStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.PrimitiveStruct": ...  # type: ignore


class _fbthrift_compatible_with_AdaptedFields:
    pass


class AdaptedFields(_fbthrift_python_types.Struct, _fbthrift_compatible_with_AdaptedFields, test.fixtures.python_capi.module.thrift_abstract_types.AdaptedFields):
    adapted_int: _typing.Final[int] = ...
    list_adapted_int: _typing.Final[_typing.Sequence[int]] = ...
    set_adapted_int: _typing.Final[_typing.AbstractSet[int]] = ...
    inline_adapted_int: _typing.Final[int] = ...
    def __init__(
        self, *,
        adapted_int: _typing.Optional[int]=...,
        list_adapted_int: _typing.Optional[_typing.Sequence[int]]=...,
        set_adapted_int: _typing.Optional[_typing.AbstractSet[int]]=...,
        inline_adapted_int: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        adapted_int: _typing.Optional[int]=...,
        list_adapted_int: _typing.Optional[_typing.Sequence[int]]=...,
        set_adapted_int: _typing.Optional[_typing.AbstractSet[int]]=...,
        inline_adapted_int: _typing.Optional[int]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, _typing.Sequence[int], _typing.AbstractSet[int], int]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "test.fixtures.python_capi.module.thrift_mutable_types.AdaptedFields": ...  # type: ignore
    def _to_py3(self) -> "test.fixtures.python_capi.module.types.AdaptedFields": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.AdaptedFields": ...  # type: ignore


class _fbthrift_compatible_with_ListStruct:
    pass


class ListStruct(_fbthrift_python_types.Struct, _fbthrift_compatible_with_ListStruct, test.fixtures.python_capi.module.thrift_abstract_types.ListStruct):
    boolz: _typing.Final[_typing.Sequence[bool]] = ...
    intz: _typing.Final[_typing.Optional[_typing.Sequence[int]]] = ...
    stringz: _typing.Final[_typing.Optional[_typing.Sequence[str]]] = ...
    encoded: _typing.Final[_typing.Sequence[bytes]] = ...
    uidz: _typing.Final[_typing.Sequence[int]] = ...
    matrix: _typing.Final[_typing.Sequence[_typing.Sequence[float]]] = ...
    ucharz: _typing.Final[_typing.Sequence[_typing.Sequence[int]]] = ...
    voxels: _typing.Final[_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]] = ...
    buf_ptrs: _typing.Final[_typing.Sequence[_fbthrift_iobuf.IOBuf]] = ...
    def __init__(
        self, *,
        boolz: _typing.Optional[_typing.Sequence[bool]]=...,
        intz: _typing.Optional[_typing.Sequence[int]]=...,
        stringz: _typing.Optional[_typing.Sequence[str]]=...,
        encoded: _typing.Optional[_typing.Sequence[bytes]]=...,
        uidz: _typing.Optional[_typing.Sequence[int]]=...,
        matrix: _typing.Optional[_typing.Sequence[_typing.Sequence[float]]]=...,
        ucharz: _typing.Optional[_typing.Sequence[_typing.Sequence[int]]]=...,
        voxels: _typing.Optional[_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]]=...,
        buf_ptrs: _typing.Optional[_typing.Sequence[_fbthrift_iobuf.IOBuf]]=...
    ) -> None: ...

    def __call__(
        self, *,
        boolz: _typing.Optional[_typing.Sequence[bool]]=...,
        intz: _typing.Optional[_typing.Sequence[int]]=...,
        stringz: _typing.Optional[_typing.Sequence[str]]=...,
        encoded: _typing.Optional[_typing.Sequence[bytes]]=...,
        uidz: _typing.Optional[_typing.Sequence[int]]=...,
        matrix: _typing.Optional[_typing.Sequence[_typing.Sequence[float]]]=...,
        ucharz: _typing.Optional[_typing.Sequence[_typing.Sequence[int]]]=...,
        voxels: _typing.Optional[_typing.Sequence[_typing.Sequence[_typing.Sequence[int]]]]=...,
        buf_ptrs: _typing.Optional[_typing.Sequence[_fbthrift_iobuf.IOBuf]]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.Sequence[bool], _typing.Sequence[int], _typing.Sequence[str], _typing.Sequence[bytes], _typing.Sequence[int], _typing.Sequence[_typing.Sequence[float]], _typing.Sequence[_typing.Sequence[int]], _typing.Sequence[_typing.Sequence[_typing.Sequence[int]]], _typing.Sequence[_fbthrift_iobuf.IOBuf]]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "test.fixtures.python_capi.module.thrift_mutable_types.ListStruct": ...  # type: ignore
    def _to_py3(self) -> "test.fixtures.python_capi.module.types.ListStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.ListStruct": ...  # type: ignore


class _fbthrift_compatible_with_SetStruct:
    pass


class SetStruct(_fbthrift_python_types.Struct, _fbthrift_compatible_with_SetStruct, test.fixtures.python_capi.module.thrift_abstract_types.SetStruct):
    enumz: _typing.Final[_typing.AbstractSet[MyEnum]] = ...
    intz: _typing.Final[_typing.Optional[_typing.AbstractSet[int]]] = ...
    binnaz: _typing.Final[_typing.Optional[_typing.AbstractSet[bytes]]] = ...
    encoded: _typing.Final[_typing.AbstractSet[bytes]] = ...
    uidz: _typing.Final[_typing.AbstractSet[int]] = ...
    charz: _typing.Final[_typing.AbstractSet[int]] = ...
    setz: _typing.Final[_typing.Sequence[_typing.AbstractSet[int]]] = ...
    def __init__(
        self, *,
        enumz: _typing.Optional[_typing.AbstractSet[_fbthrift_compatible_with_MyEnum]]=...,
        intz: _typing.Optional[_typing.AbstractSet[int]]=...,
        binnaz: _typing.Optional[_typing.AbstractSet[bytes]]=...,
        encoded: _typing.Optional[_typing.AbstractSet[bytes]]=...,
        uidz: _typing.Optional[_typing.AbstractSet[int]]=...,
        charz: _typing.Optional[_typing.AbstractSet[int]]=...,
        setz: _typing.Optional[_typing.Sequence[_typing.AbstractSet[int]]]=...
    ) -> None: ...

    def __call__(
        self, *,
        enumz: _typing.Optional[_typing.AbstractSet[_fbthrift_compatible_with_MyEnum]]=...,
        intz: _typing.Optional[_typing.AbstractSet[int]]=...,
        binnaz: _typing.Optional[_typing.AbstractSet[bytes]]=...,
        encoded: _typing.Optional[_typing.AbstractSet[bytes]]=...,
        uidz: _typing.Optional[_typing.AbstractSet[int]]=...,
        charz: _typing.Optional[_typing.AbstractSet[int]]=...,
        setz: _typing.Optional[_typing.Sequence[_typing.AbstractSet[int]]]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.AbstractSet[MyEnum], _typing.AbstractSet[int], _typing.AbstractSet[bytes], _typing.AbstractSet[bytes], _typing.AbstractSet[int], _typing.AbstractSet[int], _typing.Sequence[_typing.AbstractSet[int]]]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "test.fixtures.python_capi.module.thrift_mutable_types.SetStruct": ...  # type: ignore
    def _to_py3(self) -> "test.fixtures.python_capi.module.types.SetStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.SetStruct": ...  # type: ignore


class _fbthrift_compatible_with_MapStruct:
    pass


class MapStruct(_fbthrift_python_types.Struct, _fbthrift_compatible_with_MapStruct, test.fixtures.python_capi.module.thrift_abstract_types.MapStruct):
    enumz: _typing.Final[_typing.Mapping[MyEnum, str]] = ...
    intz: _typing.Final[_typing.Optional[_typing.Mapping[int, str]]] = ...
    binnaz: _typing.Final[_typing.Optional[_typing.Mapping[bytes, PrimitiveStruct]]] = ...
    encoded: _typing.Final[_typing.Mapping[str, float]] = ...
    flotz: _typing.Final[_typing.Mapping[int, float]] = ...
    map_list: _typing.Final[_typing.Sequence[_typing.Mapping[int, int]]] = ...
    list_map: _typing.Final[_typing.Mapping[int, _typing.Sequence[int]]] = ...
    fast_list_map: _typing.Final[_typing.Mapping[int, _typing.Sequence[float]]] = ...
    buf_map: _typing.Final[_typing.Mapping[bytes, _fbthrift_iobuf.IOBuf]] = ...
    unsigned_list_map: _typing.Final[_typing.Mapping[int, _typing.Sequence[int]]] = ...
    def __init__(
        self, *,
        enumz: _typing.Optional[_typing.Mapping[MyEnum, str]]=...,
        intz: _typing.Optional[_typing.Mapping[int, str]]=...,
        binnaz: _typing.Optional[_typing.Mapping[bytes, _fbthrift_compatible_with_PrimitiveStruct]]=...,
        encoded: _typing.Optional[_typing.Mapping[str, float]]=...,
        flotz: _typing.Optional[_typing.Mapping[int, float]]=...,
        map_list: _typing.Optional[_typing.Sequence[_typing.Mapping[int, int]]]=...,
        list_map: _typing.Optional[_typing.Mapping[int, _typing.Sequence[int]]]=...,
        fast_list_map: _typing.Optional[_typing.Mapping[int, _typing.Sequence[float]]]=...,
        buf_map: _typing.Optional[_typing.Mapping[bytes, _fbthrift_iobuf.IOBuf]]=...,
        unsigned_list_map: _typing.Optional[_typing.Mapping[int, _typing.Sequence[int]]]=...
    ) -> None: ...

    def __call__(
        self, *,
        enumz: _typing.Optional[_typing.Mapping[MyEnum, str]]=...,
        intz: _typing.Optional[_typing.Mapping[int, str]]=...,
        binnaz: _typing.Optional[_typing.Mapping[bytes, _fbthrift_compatible_with_PrimitiveStruct]]=...,
        encoded: _typing.Optional[_typing.Mapping[str, float]]=...,
        flotz: _typing.Optional[_typing.Mapping[int, float]]=...,
        map_list: _typing.Optional[_typing.Sequence[_typing.Mapping[int, int]]]=...,
        list_map: _typing.Optional[_typing.Mapping[int, _typing.Sequence[int]]]=...,
        fast_list_map: _typing.Optional[_typing.Mapping[int, _typing.Sequence[float]]]=...,
        buf_map: _typing.Optional[_typing.Mapping[bytes, _fbthrift_iobuf.IOBuf]]=...,
        unsigned_list_map: _typing.Optional[_typing.Mapping[int, _typing.Sequence[int]]]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_typing.Mapping[MyEnum, str], _typing.Mapping[int, str], _typing.Mapping[bytes, PrimitiveStruct], _typing.Mapping[str, float], _typing.Mapping[int, float], _typing.Sequence[_typing.Mapping[int, int]], _typing.Mapping[int, _typing.Sequence[int]], _typing.Mapping[int, _typing.Sequence[float]], _typing.Mapping[bytes, _fbthrift_iobuf.IOBuf], _typing.Mapping[int, _typing.Sequence[int]]]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "test.fixtures.python_capi.module.thrift_mutable_types.MapStruct": ...  # type: ignore
    def _to_py3(self) -> "test.fixtures.python_capi.module.types.MapStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MapStruct": ...  # type: ignore


class _fbthrift_compatible_with_ComposeStruct:
    pass


class ComposeStruct(_fbthrift_python_types.Struct, _fbthrift_compatible_with_ComposeStruct, test.fixtures.python_capi.module.thrift_abstract_types.ComposeStruct):
    enum_: _typing.Final[MyEnum] = ...
    renamed_: _typing.Final[AnnoyingEnum] = ...
    primitive: _typing.Final[PrimitiveStruct] = ...
    aliased: _typing.Final[ListStruct] = ...
    xenum: _typing.Final[_fbthrift__test__fixtures__python_capi__thrift_dep__thrift_types.DepEnum] = ...
    xstruct: _typing.Final[_fbthrift__test__fixtures__python_capi__thrift_dep__thrift_types.DepStruct] = ...
    friends: _typing.Final[_typing.Sequence[_fbthrift__test__fixtures__python_capi__thrift_dep__thrift_types.DepStruct]] = ...
    serial_struct: _typing.Final[_fbthrift__test__fixtures__python_capi__serialized_dep__thrift_types.SerializedStruct] = ...
    serial_union: _typing.Final[_fbthrift__test__fixtures__python_capi__serialized_dep__thrift_types.SerializedUnion] = ...
    serial_error: _typing.Final[_fbthrift__test__fixtures__python_capi__serialized_dep__thrift_types.SerializedError] = ...
    def __init__(
        self, *,
        enum_: _typing.Optional[_fbthrift_compatible_with_MyEnum]=...,
        renamed_: _typing.Optional[_fbthrift_compatible_with_AnnoyingEnum]=...,
        primitive: _typing.Optional[_fbthrift_compatible_with_PrimitiveStruct]=...,
        aliased: _typing.Optional[_fbthrift_compatible_with_ListStruct]=...,
        xenum: _typing.Optional[_fbthrift__test__fixtures__python_capi__thrift_dep__thrift_types._fbthrift_compatible_with_DepEnum]=...,
        xstruct: _typing.Optional[_fbthrift__test__fixtures__python_capi__thrift_dep__thrift_types._fbthrift_compatible_with_DepStruct]=...,
        friends: _typing.Optional[_typing.Sequence[_fbthrift__test__fixtures__python_capi__thrift_dep__thrift_types._fbthrift_compatible_with_DepStruct]]=...,
        serial_struct: _typing.Optional[_fbthrift__test__fixtures__python_capi__serialized_dep__thrift_types._fbthrift_compatible_with_SerializedStruct]=...,
        serial_union: _typing.Optional[_fbthrift__test__fixtures__python_capi__serialized_dep__thrift_types._fbthrift_compatible_with_SerializedUnion]=...,
        serial_error: _typing.Optional[_fbthrift__test__fixtures__python_capi__serialized_dep__thrift_types._fbthrift_compatible_with_SerializedError]=...
    ) -> None: ...

    def __call__(
        self, *,
        enum_: _typing.Optional[_fbthrift_compatible_with_MyEnum]=...,
        renamed_: _typing.Optional[_fbthrift_compatible_with_AnnoyingEnum]=...,
        primitive: _typing.Optional[_fbthrift_compatible_with_PrimitiveStruct]=...,
        aliased: _typing.Optional[_fbthrift_compatible_with_ListStruct]=...,
        xenum: _typing.Optional[_fbthrift__test__fixtures__python_capi__thrift_dep__thrift_types._fbthrift_compatible_with_DepEnum]=...,
        xstruct: _typing.Optional[_fbthrift__test__fixtures__python_capi__thrift_dep__thrift_types._fbthrift_compatible_with_DepStruct]=...,
        friends: _typing.Optional[_typing.Sequence[_fbthrift__test__fixtures__python_capi__thrift_dep__thrift_types._fbthrift_compatible_with_DepStruct]]=...,
        serial_struct: _typing.Optional[_fbthrift__test__fixtures__python_capi__serialized_dep__thrift_types._fbthrift_compatible_with_SerializedStruct]=...,
        serial_union: _typing.Optional[_fbthrift__test__fixtures__python_capi__serialized_dep__thrift_types._fbthrift_compatible_with_SerializedUnion]=...,
        serial_error: _typing.Optional[_fbthrift__test__fixtures__python_capi__serialized_dep__thrift_types._fbthrift_compatible_with_SerializedError]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[MyEnum, AnnoyingEnum, PrimitiveStruct, ListStruct, _fbthrift__test__fixtures__python_capi__thrift_dep__thrift_types.DepEnum, _fbthrift__test__fixtures__python_capi__thrift_dep__thrift_types.DepStruct, _typing.Sequence[_fbthrift__test__fixtures__python_capi__thrift_dep__thrift_types.DepStruct], _fbthrift__test__fixtures__python_capi__serialized_dep__thrift_types.SerializedStruct, _fbthrift__test__fixtures__python_capi__serialized_dep__thrift_types.SerializedUnion, _fbthrift__test__fixtures__python_capi__serialized_dep__thrift_types.SerializedError]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "test.fixtures.python_capi.module.thrift_mutable_types.ComposeStruct": ...  # type: ignore
    def _to_py3(self) -> "test.fixtures.python_capi.module.types.ComposeStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.ComposeStruct": ...  # type: ignore


class _fbthrift_compatible_with_Onion:
    pass


class Onion(_fbthrift_python_types.Union, _fbthrift_compatible_with_Onion, test.fixtures.python_capi.module.thrift_abstract_types.Onion):
    myEnum: _typing.Final[MyEnum] = ...
    myStruct: _typing.Final[PrimitiveStruct] = ...
    myString: _typing.Final[str] = ...
    intSet: _typing.Final[_typing.AbstractSet[int]] = ...
    doubleList: _typing.Final[_typing.Sequence[float]] = ...
    strMap: _typing.Final[_typing.Mapping[bytes, str]] = ...
    adapted_int: _typing.Final[int] = ...
    def __init__(
        self, *,
        myEnum: _typing.Optional[_fbthrift_compatible_with_MyEnum]=...,
        myStruct: _typing.Optional[_fbthrift_compatible_with_PrimitiveStruct]=...,
        myString: _typing.Optional[str]=...,
        intSet: _typing.Optional[_typing.AbstractSet[int]]=...,
        doubleList: _typing.Optional[_typing.Sequence[float]]=...,
        strMap: _typing.Optional[_typing.Mapping[bytes, str]]=...,
        adapted_int: _typing.Optional[int]=...
    ) -> None: ...


    Type = FbThriftUnionFieldEnum

    @classmethod
    def fromValue(cls, value: _typing.Union[None, MyEnum, PrimitiveStruct, str, _typing.AbstractSet[int], _typing.Sequence[float], _typing.Mapping[bytes, str], int]) -> Onion: ...
    value: _typing.Final[_typing.Union[None, MyEnum, PrimitiveStruct, str, _typing.AbstractSet[int], _typing.Sequence[float], _typing.Mapping[bytes, str], int]]
    type: _typing.Final[Type]
    def get_type(self) -> Type:...
    def _to_python(self) -> _typing.Self: ...
    def _to_mutable_python(self) -> "test.fixtures.python_capi.module.thrift_mutable_types.Onion": ...  # type: ignore
    def _to_py3(self) -> "test.fixtures.python_capi.module.types.Onion": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.Onion": ...  # type: ignore

uint64 = int
ui64 = int
signed_byte = int
IOBuf = _fbthrift_iobuf.IOBuf
IOBufPtr = _fbthrift_iobuf.IOBuf
ListAlias = ListStruct
