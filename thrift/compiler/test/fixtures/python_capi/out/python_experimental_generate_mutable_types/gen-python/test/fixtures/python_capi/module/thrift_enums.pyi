#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import thrift.python.types as _fbthrift_python_types

class _fbthrift_compatible_with_MyEnum:
    pass


class MyEnum(_fbthrift_python_types.Enum, int, _fbthrift_compatible_with_MyEnum):
    MyValue1: MyEnum = ...
    MyValue2: MyEnum = ...
    def _to_python(self) -> MyEnum: ...
    def _to_py3(self) -> "test.fixtures.python_capi.module.types.MyEnum": ...  # type: ignore
    def _to_py_deprecated(self) -> int: ...

class _fbthrift_compatible_with_AnnoyingEnum:
    pass


class AnnoyingEnum(_fbthrift_python_types.Enum, int, _fbthrift_compatible_with_AnnoyingEnum):
    FOO: AnnoyingEnum = ...
    BAR: AnnoyingEnum = ...
    def _to_python(self) -> AnnoyingEnum: ...
    def _to_py3(self) -> "test.fixtures.python_capi.module.types.AnnoyingEnum": ...  # type: ignore
    def _to_py_deprecated(self) -> int: ...