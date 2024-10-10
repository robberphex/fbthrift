#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/sink/src/module.thrift
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


class InitialResponse(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        content: bool
        pass

    content: Final[str] = ...

    def __init__(
        self, *,
        content: _typing.Optional[str]=None
    ) -> None: ...

    def __call__(
        self, *,
        content: _typing.Union[str, None]=None
    ) -> InitialResponse: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['InitialResponse'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'InitialResponse') -> bool: ...
    def __gt__(self, other: 'InitialResponse') -> bool: ...
    def __le__(self, other: 'InitialResponse') -> bool: ...
    def __ge__(self, other: 'InitialResponse') -> bool: ...

    def _to_python(self) -> "module.thrift_types.InitialResponse": ...   # type: ignore
    def _to_py3(self) -> InitialResponse: ...
    def _to_py_deprecated(self) -> "module.ttypes.InitialResponse": ...   # type: ignore

class FinalResponse(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        content: bool
        pass

    content: Final[str] = ...

    def __init__(
        self, *,
        content: _typing.Optional[str]=None
    ) -> None: ...

    def __call__(
        self, *,
        content: _typing.Union[str, None]=None
    ) -> FinalResponse: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['FinalResponse'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'FinalResponse') -> bool: ...
    def __gt__(self, other: 'FinalResponse') -> bool: ...
    def __le__(self, other: 'FinalResponse') -> bool: ...
    def __ge__(self, other: 'FinalResponse') -> bool: ...

    def _to_python(self) -> "module.thrift_types.FinalResponse": ...   # type: ignore
    def _to_py3(self) -> FinalResponse: ...
    def _to_py_deprecated(self) -> "module.ttypes.FinalResponse": ...   # type: ignore

class SinkPayload(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        content: bool
        pass

    content: Final[str] = ...

    def __init__(
        self, *,
        content: _typing.Optional[str]=None
    ) -> None: ...

    def __call__(
        self, *,
        content: _typing.Union[str, None]=None
    ) -> SinkPayload: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['SinkPayload'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'SinkPayload') -> bool: ...
    def __gt__(self, other: 'SinkPayload') -> bool: ...
    def __le__(self, other: 'SinkPayload') -> bool: ...
    def __ge__(self, other: 'SinkPayload') -> bool: ...

    def _to_python(self) -> "module.thrift_types.SinkPayload": ...   # type: ignore
    def _to_py3(self) -> SinkPayload: ...
    def _to_py_deprecated(self) -> "module.ttypes.SinkPayload": ...   # type: ignore

class CompatibleWithKeywordSink(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        sink: bool
        pass

    sink: Final[str] = ...

    def __init__(
        self, *,
        sink: _typing.Optional[str]=None
    ) -> None: ...

    def __call__(
        self, *,
        sink: _typing.Union[str, None]=None
    ) -> CompatibleWithKeywordSink: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['CompatibleWithKeywordSink'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'CompatibleWithKeywordSink') -> bool: ...
    def __gt__(self, other: 'CompatibleWithKeywordSink') -> bool: ...
    def __le__(self, other: 'CompatibleWithKeywordSink') -> bool: ...
    def __ge__(self, other: 'CompatibleWithKeywordSink') -> bool: ...

    def _to_python(self) -> "module.thrift_types.CompatibleWithKeywordSink": ...   # type: ignore
    def _to_py3(self) -> CompatibleWithKeywordSink: ...
    def _to_py_deprecated(self) -> "module.ttypes.CompatibleWithKeywordSink": ...   # type: ignore

class InitialException(thrift.py3.exceptions.GeneratedError, _typing.Hashable):
    class __fbthrift_IsSet:
        reason: bool
        pass

    reason: Final[str] = ...

    def __init__(
        self, *,
        reason: _typing.Optional[str]=None
    ) -> None: ...

    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'InitialException') -> bool: ...
    def __gt__(self, other: 'InitialException') -> bool: ...
    def __le__(self, other: 'InitialException') -> bool: ...
    def __ge__(self, other: 'InitialException') -> bool: ...

    def _to_python(self) -> "module.thrift_types.InitialException": ...   # type: ignore
    def _to_py3(self) -> InitialException: ...
    def _to_py_deprecated(self) -> "module.ttypes.InitialException": ...   # type: ignore

class SinkException1(thrift.py3.exceptions.GeneratedError, _typing.Hashable):
    class __fbthrift_IsSet:
        reason: bool
        pass

    reason: Final[str] = ...

    def __init__(
        self, *,
        reason: _typing.Optional[str]=None
    ) -> None: ...

    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'SinkException1') -> bool: ...
    def __gt__(self, other: 'SinkException1') -> bool: ...
    def __le__(self, other: 'SinkException1') -> bool: ...
    def __ge__(self, other: 'SinkException1') -> bool: ...

    def _to_python(self) -> "module.thrift_types.SinkException1": ...   # type: ignore
    def _to_py3(self) -> SinkException1: ...
    def _to_py_deprecated(self) -> "module.ttypes.SinkException1": ...   # type: ignore

class SinkException2(thrift.py3.exceptions.GeneratedError, _typing.Hashable):
    class __fbthrift_IsSet:
        reason: bool
        pass

    reason: Final[int] = ...

    def __init__(
        self, *,
        reason: _typing.Optional[int]=None
    ) -> None: ...

    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'SinkException2') -> bool: ...
    def __gt__(self, other: 'SinkException2') -> bool: ...
    def __le__(self, other: 'SinkException2') -> bool: ...
    def __ge__(self, other: 'SinkException2') -> bool: ...

    def _to_python(self) -> "module.thrift_types.SinkException2": ...   # type: ignore
    def _to_py3(self) -> SinkException2: ...
    def _to_py_deprecated(self) -> "module.ttypes.SinkException2": ...   # type: ignore

