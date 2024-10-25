
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


class ComplexUnion(_abc.ABC):
    @property
    @_abc.abstractmethod
    def intValue(self) -> int: ...
    @property
    @_abc.abstractmethod
    def intListValue(self) -> _typing.Sequence[int]: ...
    @property
    @_abc.abstractmethod
    def stringListValue(self) -> _typing.Sequence[str]: ...
    @property
    @_abc.abstractmethod
    def stringValue(self) -> str: ...
    @property
    @_abc.abstractmethod
    def typedefValue(self) -> _typing.Mapping[int, str]: ...
    @property
    @_abc.abstractmethod
    def stringRef(self) -> str: ...
#    @_abc.abstractmethod
#    def _to_mutable_python(self) -> "module.thrift_mutable_types.ComplexUnion": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.ComplexUnion": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.ComplexUnion": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.ComplexUnion": ...  # type: ignore

class ListUnion(_abc.ABC):
    @property
    @_abc.abstractmethod
    def intListValue(self) -> _typing.Sequence[int]: ...
    @property
    @_abc.abstractmethod
    def stringListValue(self) -> _typing.Sequence[str]: ...
#    @_abc.abstractmethod
#    def _to_mutable_python(self) -> "module.thrift_mutable_types.ListUnion": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.ListUnion": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.ListUnion": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.ListUnion": ...  # type: ignore

class DataUnion(_abc.ABC):
    @property
    @_abc.abstractmethod
    def binaryData(self) -> bytes: ...
    @property
    @_abc.abstractmethod
    def stringData(self) -> str: ...
#    @_abc.abstractmethod
#    def _to_mutable_python(self) -> "module.thrift_mutable_types.DataUnion": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.DataUnion": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.DataUnion": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.DataUnion": ...  # type: ignore

class Val(_abc.ABC):
    @property
    @_abc.abstractmethod
    def strVal(self) -> str: ...
    @property
    @_abc.abstractmethod
    def intVal(self) -> int: ...
    @property
    @_abc.abstractmethod
    def typedefValue(self) -> _typing.Mapping[int, str]: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, int, _typing.Mapping[int, str]]]]: ...
#    @_abc.abstractmethod
#    def _to_mutable_python(self) -> "module.thrift_mutable_types.Val": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.Val": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.Val": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.Val": ...  # type: ignore

class ValUnion(_abc.ABC):
    @property
    @_abc.abstractmethod
    def v1(self) -> Val: ...
    @property
    @_abc.abstractmethod
    def v2(self) -> Val: ...
#    @_abc.abstractmethod
#    def _to_mutable_python(self) -> "module.thrift_mutable_types.ValUnion": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.ValUnion": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.ValUnion": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.ValUnion": ...  # type: ignore

class VirtualComplexUnion(_abc.ABC):
    @property
    @_abc.abstractmethod
    def thingOne(self) -> str: ...
    @property
    @_abc.abstractmethod
    def thingTwo(self) -> str: ...
#    @_abc.abstractmethod
#    def _to_mutable_python(self) -> "module.thrift_mutable_types.VirtualComplexUnion": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.VirtualComplexUnion": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.VirtualComplexUnion": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.VirtualComplexUnion": ...  # type: ignore

class NonCopyableStruct(_abc.ABC):
    @property
    @_abc.abstractmethod
    def num(self) -> int: ...
#    @_abc.abstractmethod
#    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int]]]: ...
#    @_abc.abstractmethod
#    def _to_mutable_python(self) -> "module.thrift_mutable_types.NonCopyableStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.NonCopyableStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.NonCopyableStruct": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.NonCopyableStruct": ...  # type: ignore

class NonCopyableUnion(_abc.ABC):
    @property
    @_abc.abstractmethod
    def s(self) -> NonCopyableStruct: ...
#    @_abc.abstractmethod
#    def _to_mutable_python(self) -> "module.thrift_mutable_types.NonCopyableUnion": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_python(self) -> "module.thrift_types.NonCopyableUnion": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py3(self) -> "module.types.NonCopyableUnion": ...  # type: ignore
#    @_abc.abstractmethod
#    def _to_py_deprecated(self) -> "module.ttypes.NonCopyableUnion": ...  # type: ignore

containerTypedef = _typing.Mapping[int, str]
