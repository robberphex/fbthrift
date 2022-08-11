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
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions

import facebook.thrift.annotation.thrift.thrift_types


class Metasyntactic(_fbthrift_python_types.Enum, enum.Enum):
    FOO: Metasyntactic = ...
    BAR: Metasyntactic = ...
    BAZ: Metasyntactic = ...
    BAX: Metasyntactic = ...
    Unspecified: Metasyntactic = ...


class MyEnum1(_fbthrift_python_types.Enum, enum.Enum):
    ME1_1: MyEnum1 = ...
    ME1_2: MyEnum1 = ...
    ME1_3: MyEnum1 = ...
    ME1_5: MyEnum1 = ...
    ME1_6: MyEnum1 = ...
    ME1_0: MyEnum1 = ...


class MyEnum2(_fbthrift_python_types.Enum, enum.Enum):
    ME2_0: MyEnum2 = ...
    ME2_1: MyEnum2 = ...
    ME2_2: MyEnum2 = ...


class MyEnum3(_fbthrift_python_types.Enum, enum.Enum):
    ME3_0: MyEnum3 = ...
    ME3_1: MyEnum3 = ...
    ME3_N2: MyEnum3 = ...
    ME3_N1: MyEnum3 = ...
    ME3_9: MyEnum3 = ...
    ME3_10: MyEnum3 = ...


class MyEnum4(_fbthrift_python_types.Enum, enum.Enum):
    ME4_A: MyEnum4 = ...
    ME4_B: MyEnum4 = ...
    ME4_C: MyEnum4 = ...
    ME4_D: MyEnum4 = ...
    Unspecified: MyEnum4 = ...


class MyBitmaskEnum1(_fbthrift_python_types.Enum, enum.Enum):
    ONE: MyBitmaskEnum1 = ...
    TWO: MyBitmaskEnum1 = ...
    FOUR: MyBitmaskEnum1 = ...
    Unspecified: MyBitmaskEnum1 = ...


class MyBitmaskEnum2(_fbthrift_python_types.Enum, enum.Enum):
    ONE: MyBitmaskEnum2 = ...
    TWO: MyBitmaskEnum2 = ...
    FOUR: MyBitmaskEnum2 = ...
    Unspecified: MyBitmaskEnum2 = ...


class SomeStruct(_fbthrift_python_types.Struct):
    reasonable: _typing.Final[Metasyntactic] = ...
    fine: _typing.Final[Metasyntactic] = ...
    questionable: _typing.Final[Metasyntactic] = ...
    tags: _typing.Final[_typing.AbstractSet[int]] = ...
    def __init__(
        self, *,
        reasonable: _typing.Optional[Metasyntactic]=...,
        fine: _typing.Optional[Metasyntactic]=...,
        questionable: _typing.Optional[Metasyntactic]=...,
        tags: _typing.Optional[_typing.AbstractSet[int]]=...
    ) -> None: ...

    def __call__(
        self, *,
        reasonable: _typing.Optional[Metasyntactic]=...,
        fine: _typing.Optional[Metasyntactic]=...,
        questionable: _typing.Optional[Metasyntactic]=...,
        tags: _typing.Optional[_typing.AbstractSet[int]]=...
    ) -> SomeStruct: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[Metasyntactic, Metasyntactic, Metasyntactic, _typing.AbstractSet[int]]]]: ...
    def _to_python(self) -> SomeStruct: ...
    def _to_py3(self) -> "test.fixtures.enums.module.types.SomeStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.SomeStruct": ...  # type: ignore


class MyStruct(_fbthrift_python_types.Struct):
    me2_3: _typing.Final[MyEnum2] = ...
    me3_n3: _typing.Final[MyEnum3] = ...
    me1_t1: _typing.Final[MyEnum1] = ...
    me1_t2: _typing.Final[MyEnum1] = ...
    def __init__(
        self, *,
        me2_3: _typing.Optional[MyEnum2]=...,
        me3_n3: _typing.Optional[MyEnum3]=...,
        me1_t1: _typing.Optional[MyEnum1]=...,
        me1_t2: _typing.Optional[MyEnum1]=...
    ) -> None: ...

    def __call__(
        self, *,
        me2_3: _typing.Optional[MyEnum2]=...,
        me3_n3: _typing.Optional[MyEnum3]=...,
        me1_t1: _typing.Optional[MyEnum1]=...,
        me1_t2: _typing.Optional[MyEnum1]=...
    ) -> MyStruct: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[MyEnum2, MyEnum3, MyEnum1, MyEnum1]]]: ...
    def _to_python(self) -> MyStruct: ...
    def _to_py3(self) -> "test.fixtures.enums.module.types.MyStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyStruct": ...  # type: ignore
