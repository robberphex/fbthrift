
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
import includes.thrift_abstract_types


class MyStruct(_abc.ABC):
    @property
    @_abc.abstractmethod
    def MyIncludedField(self) -> includes.thrift_abstract_types.Included: ...
    @property
    @_abc.abstractmethod
    def MyOtherIncludedField(self) -> includes.thrift_abstract_types.Included: ...
    @property
    @_abc.abstractmethod
    def MyIncludedInt(self) -> int: ...
#    @_abc.abstractmethod
#    def __call__(
#        self, *,
#        MyIncludedField: _typing.Optional[includes.thrift_abstract_types.Included]=...,
#        MyOtherIncludedField: _typing.Optional[includes.thrift_abstract_types.Included]=...,
#        MyIncludedInt: _typing.Optional[int]=...
#    ) -> _typing.Self: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[includes.thrift_abstract_types.Included, includes.thrift_abstract_types.Included, int]]]: ...
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.MyStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.MyStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.MyStruct": ...  # type: ignore