#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_py3lite_types
import thrift.python.exceptions as _fbthrift_py3lite_exceptions


import py3lite_module_root.my.namespacing.test.hsmodule.lite_types

# This unfortunately has to be down here to prevent circular imports
import py3lite_module_root.my.namespacing.extend.test.extend.lite_metadata



_fbthrift_all_structs = [
]


class _fbthrift_ExtendTestService_check_args(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            True,  # isUnqualified
            "struct1",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(py3lite_module_root.my.namespacing.test.hsmodule.lite_types.HsFoo),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

class _fbthrift_ExtendTestService_check_result(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            0,  # id
            False,  # isUnqualified
            "success",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )


_fbthrift_py3lite_types.fill_specs(
    _fbthrift_ExtendTestService_check_args,
    _fbthrift_ExtendTestService_check_result,
)
