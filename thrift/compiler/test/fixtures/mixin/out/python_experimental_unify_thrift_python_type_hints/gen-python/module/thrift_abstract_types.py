
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


class Mixin1(_abc.ABC):
    @property
    @_abc.abstractmethod
    def field1(self) -> str: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str]]]: ...
#    @_abc.abstractmethod
#    def _to_mutable_python(self) -> "module.thrift_mutable_types.Mixin1": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.Mixin1": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.Mixin1": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.Mixin1": ...  # type: ignore

class Mixin2(_abc.ABC):
    @property
    @_abc.abstractmethod
    def m1(self) -> Mixin1: ...
    @property
    @_abc.abstractmethod
    def field2(self) -> _typing.Optional[str]: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[Mixin1, str]]]: ...
#    @_abc.abstractmethod
#    def _to_mutable_python(self) -> "module.thrift_mutable_types.Mixin2": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.Mixin2": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.Mixin2": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.Mixin2": ...  # type: ignore

class Mixin3Base(_abc.ABC):
    @property
    @_abc.abstractmethod
    def field3(self) -> str: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str]]]: ...
#    @_abc.abstractmethod
#    def _to_mutable_python(self) -> "module.thrift_mutable_types.Mixin3Base": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.Mixin3Base": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.Mixin3Base": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.Mixin3Base": ...  # type: ignore

class Foo(_abc.ABC):
    @property
    @_abc.abstractmethod
    def field4(self) -> str: ...
    @property
    @_abc.abstractmethod
    def m2(self) -> Mixin2: ...
    @property
    @_abc.abstractmethod
    def m3(self) -> Mixin3Base: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, Mixin2, Mixin3Base]]]: ...
#    @_abc.abstractmethod
#    def _to_mutable_python(self) -> "module.thrift_mutable_types.Foo": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.Foo": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.Foo": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.Foo": ...  # type: ignore

Mixin3 = Mixin3Base
