#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/transitive-deps/src/a.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import enum as _python_std_enum
import folly.iobuf as _fbthrift_iobuf
import thrift.py3.types
import thrift.py3.exceptions
import typing as _typing
from typing_extensions import Final

import sys
import itertools
import b.types as _b_types
import c.types as _c_types


class A(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        b: bool
        other: bool
        pass

    b: Final[_typing.Sequence[_typing.Sequence[_c_types.C]]] = ...
    other: Final[_typing.Sequence[_c_types.C]] = ...

    def __init__(
        self, *,
        b: _typing.Optional[_typing.Sequence[_typing.Sequence[_c_types.C]]]=None,
        other: _typing.Optional[_typing.Sequence[_c_types.C]]=None
    ) -> None: ...

    def __call__(
        self, *,
        b: _typing.Union[_typing.Sequence[_typing.Sequence[_c_types.C]], None]=None,
        other: _typing.Union[_typing.Sequence[_c_types.C], None]=None
    ) -> A: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['A'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'A') -> bool: ...
    def __gt__(self, other: 'A') -> bool: ...
    def __le__(self, other: 'A') -> bool: ...
    def __ge__(self, other: 'A') -> bool: ...

    def _to_python(self) -> "a.thrift_types.A": ...   # type: ignore
    def _to_py3(self) -> A: ...
    def _to_py_deprecated(self) -> "a.ttypes.A": ...   # type: ignore

_List__c_CT = _typing.TypeVar('_List__c_CT', bound=_typing.Sequence[_c_types.C])


class List__c_C(_typing.Sequence[_c_types.C], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Sequence[_c_types.C]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Sequence[_c_types.C]: ...
    @_typing.overload
    def __getitem__(self, i: int) -> _c_types.C: ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence[_c_types.C]: ...
    def __add__(self, other: _typing.Sequence[_c_types.C]) -> 'List__c_C': ...
    def __radd__(self, other: _List__c_CT) -> _List__c_CT: ...
    def __reversed__(self) -> _typing.Iterator[_c_types.C]: ...
    def __iter__(self) -> _typing.Iterator[_c_types.C]: ...


_List__List__c_CT = _typing.TypeVar('_List__List__c_CT', bound=_typing.Sequence[_typing.Sequence[_c_types.C]])


class List__List__c_C(_typing.Sequence[_typing.Sequence[_c_types.C]], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.Sequence[_typing.Sequence[_c_types.C]]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.Sequence[_typing.Sequence[_c_types.C]]: ...
    @_typing.overload
    def __getitem__(self, i: int) -> _typing.Sequence[_c_types.C]: ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence[_typing.Sequence[_c_types.C]]: ...
    def __add__(self, other: _typing.Sequence[_typing.Sequence[_c_types.C]]) -> 'List__List__c_C': ...
    def __radd__(self, other: _List__List__c_CT) -> _List__List__c_CT: ...
    def __reversed__(self) -> _typing.Iterator[_typing.Sequence[_c_types.C]]: ...
    def __iter__(self) -> _typing.Iterator[_typing.Sequence[_c_types.C]]: ...


