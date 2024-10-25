
# EXPERIMENTAL - DO NOT USE !!!
# See `experimental_unify_thrift_python_type_hints` documentation in thrift compiler

#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import abc as _abc
import typing as _typing

import folly.iobuf as _fbthrift_iobuf

class Metasyntactic:
    pass

class MyEnum1:
    pass

class MyEnum2:
    pass

class MyEnum3:
    pass

class MyEnum4:
    pass

class MyBitmaskEnum1:
    pass

class MyBitmaskEnum2:
    pass


class SomeStruct(_abc.ABC):
    @property
    @_abc.abstractmethod
    def reasonable(self) -> Metasyntactic: ...
    @property
    @_abc.abstractmethod
    def fine(self) -> Metasyntactic: ...
    @property
    @_abc.abstractmethod
    def questionable(self) -> Metasyntactic: ...
    @property
    @_abc.abstractmethod
    def tags(self) -> _typing.AbstractSet[int]: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[Metasyntactic, Metasyntactic, Metasyntactic, _typing.AbstractSet[int]]]]: ...
#    @_abc.abstractmethod
#    def _to_mutable_python(self) -> "test.fixtures.enums.module.thrift_mutable_types.SomeStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_python(self) -> "test.fixtures.enums.module.thrift_types.SomeStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "test.fixtures.enums.module.types.SomeStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.SomeStruct": ...  # type: ignore

class MyStruct(_abc.ABC):
    @property
    @_abc.abstractmethod
    def me2_3(self) -> MyEnum2: ...
    @property
    @_abc.abstractmethod
    def me3_n3(self) -> MyEnum3: ...
    @property
    @_abc.abstractmethod
    def me1_t1(self) -> MyEnum1: ...
    @property
    @_abc.abstractmethod
    def me1_t2(self) -> MyEnum1: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[MyEnum2, MyEnum3, MyEnum1, MyEnum1]]]: ...
#    @_abc.abstractmethod
#    def _to_mutable_python(self) -> "test.fixtures.enums.module.thrift_mutable_types.MyStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_python(self) -> "test.fixtures.enums.module.thrift_types.MyStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "test.fixtures.enums.module.types.MyStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.MyStruct": ...  # type: ignore
