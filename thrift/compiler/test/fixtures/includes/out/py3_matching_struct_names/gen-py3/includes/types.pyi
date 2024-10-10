#
# Autogenerated by Thrift for includes.thrift
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
import transitive.types as _transitive_types


class Included(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        MyIntField: bool
        MyTransitiveField: bool
        pass

    MyIntField: Final[int] = ...
    MyTransitiveField: Final[_transitive_types.Foo] = ...

    def __init__(
        self, *,
        MyIntField: _typing.Optional[int]=None,
        MyTransitiveField: _typing.Optional[_transitive_types.Foo]=None
    ) -> None: ...

    def __call__(
        self, *,
        MyIntField: _typing.Union[int, None]=None,
        MyTransitiveField: _typing.Union[_transitive_types.Foo, None]=None
    ) -> Included: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['Included'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'Included') -> bool: ...
    def __gt__(self, other: 'Included') -> bool: ...
    def __le__(self, other: 'Included') -> bool: ...
    def __ge__(self, other: 'Included') -> bool: ...

    def _to_python(self) -> "includes.thrift_types.Included": ...   # type: ignore
    def _to_py3(self) -> Included: ...
    def _to_py_deprecated(self) -> "includes.ttypes.Included": ...   # type: ignore

ExampleIncluded: Included = ...
IncludedConstant: int = ...
IncludedInt64 = int
TransitiveFoo = _transitive_types.Foo
