#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import thrift.python.types as _fbthrift_python_types
import test.fixtures.python_capi.module.thrift_metadata

class MyEnum(_fbthrift_python_types.Enum, int):
    MyValue1 = 0
    MyValue2 = 1
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyEnum"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/python_capi/MyEnum"

    @staticmethod
    def __get_metadata__():
        return test.fixtures.python_capi.module.thrift_metadata.gen_metadata_enum_MyEnum()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.python_capi.module.types")
        return py3_types.MyEnum(self.value)

    def _to_py_deprecated(self):
        return self.value

class AnnoyingEnum(_fbthrift_python_types.Enum, int):
    FOO = 1
    BAR = 2
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.AnnoyingEnum"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/python_capi/AnnoyingEnum"

    @staticmethod
    def __get_metadata__():
        return test.fixtures.python_capi.module.thrift_metadata.gen_metadata_enum_AnnoyingEnum()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.python_capi.module.types")
        return py3_types.AnnoyingEnum(self.value)

    def _to_py_deprecated(self):
        return self.value