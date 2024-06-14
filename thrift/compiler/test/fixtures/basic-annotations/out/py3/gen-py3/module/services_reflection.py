#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from thrift.py3.reflection import (
  ArgumentSpec as __ArgumentSpec,
  InterfaceSpec as __InterfaceSpec,
  MethodSpec as __MethodSpec,
  NumberType as __NumberType,
)

import folly.iobuf as _fbthrift_iobuf


import module.types as _module_types


def get_reflection__MyService(for_clients: bool):
    spec: __InterfaceSpec = __InterfaceSpec(
        name="MyService",
        methods=None,
        annotations={
        },
    )
    spec.add_method(
        __MethodSpec.__new__(
            __MethodSpec,
            name="ping",
            arguments=(
            ),
            result=None,
            result_kind=__NumberType.NOT_A_NUMBER,
            exceptions=(
                _module_types.MyException,
            ),
            annotations={
            },
        )
    )
    spec.add_method(
        __MethodSpec.__new__(
            __MethodSpec,
            name="getRandomData",
            arguments=(
            ),
            result=str,
            result_kind=__NumberType.NOT_A_NUMBER,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    spec.add_method(
        __MethodSpec.__new__(
            __MethodSpec,
            name="hasDataById",
            arguments=(
                __ArgumentSpec.__new__(
                    __ArgumentSpec,
                    name="id",
                    type=int,
                    kind=__NumberType.I64,
                    annotations={
                    },
                ),
            ),
            result=bool,
            result_kind=__NumberType.NOT_A_NUMBER,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    spec.add_method(
        __MethodSpec.__new__(
            __MethodSpec,
            name="getDataById",
            arguments=(
                __ArgumentSpec.__new__(
                    __ArgumentSpec,
                    name="id",
                    type=int,
                    kind=__NumberType.I64,
                    annotations={
                    },
                ),
            ),
            result=str,
            result_kind=__NumberType.NOT_A_NUMBER,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    spec.add_method(
        __MethodSpec.__new__(
            __MethodSpec,
            name="putDataById",
            arguments=(
                __ArgumentSpec.__new__(
                    __ArgumentSpec,
                    name="id",
                    type=int,
                    kind=__NumberType.I64,
                    annotations={
                    },
                ),
                __ArgumentSpec.__new__(
                    __ArgumentSpec,
                    name="data",
                    type=str,
                    kind=__NumberType.NOT_A_NUMBER,
                    annotations={
                    },
                ),
            ),
            result=None,
            result_kind=__NumberType.NOT_A_NUMBER,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    spec.add_method(
        __MethodSpec.__new__(
            __MethodSpec,
            name="lobDataById",
            arguments=(
                __ArgumentSpec.__new__(
                    __ArgumentSpec,
                    name="id",
                    type=int,
                    kind=__NumberType.I64,
                    annotations={
                    },
                ),
                __ArgumentSpec.__new__(
                    __ArgumentSpec,
                    name="data",
                    type=str,
                    kind=__NumberType.NOT_A_NUMBER,
                    annotations={
                        """cpp.name""": """dataStr""",                    },
                ),
            ),
            result=None,
            result_kind=__NumberType.NOT_A_NUMBER,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    spec.add_method(
        __MethodSpec.__new__(
            __MethodSpec,
            name="doNothing",
            arguments=(
            ),
            result=None,
            result_kind=__NumberType.NOT_A_NUMBER,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    return spec


def get_reflection__MyServicePrioParent(for_clients: bool):
    spec: __InterfaceSpec = __InterfaceSpec(
        name="MyServicePrioParent",
        methods=None,
        annotations={
        },
    )
    spec.add_method(
        __MethodSpec.__new__(
            __MethodSpec,
            name="ping",
            arguments=(
            ),
            result=None,
            result_kind=__NumberType.NOT_A_NUMBER,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    spec.add_method(
        __MethodSpec.__new__(
            __MethodSpec,
            name="pong",
            arguments=(
            ),
            result=None,
            result_kind=__NumberType.NOT_A_NUMBER,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    return spec


def get_reflection__MyServicePrioChild(for_clients: bool):
    spec: __InterfaceSpec = __InterfaceSpec(
        name="MyServicePrioChild",
        methods=None,
        annotations={
        },
    )
    spec.add_method(
        __MethodSpec.__new__(
            __MethodSpec,
            name="pang",
            arguments=(
            ),
            result=None,
            result_kind=__NumberType.NOT_A_NUMBER,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    return spec


def get_reflection__BadService(for_clients: bool):
    spec: __InterfaceSpec = __InterfaceSpec(
        name="BadService",
        methods=None,
        annotations={
        },
    )
    spec.add_method(
        __MethodSpec.__new__(
            __MethodSpec,
            name="bar",
            arguments=(
            ),
            result=int,
            result_kind=__NumberType.I32,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    return spec


def get_reflection__FooBarBazService(for_clients: bool):
    spec: __InterfaceSpec = __InterfaceSpec(
        name="FooBarBazService",
        methods=None,
        annotations={
        },
    )
    spec.add_method(
        __MethodSpec.__new__(
            __MethodSpec,
            name="foo",
            arguments=(
            ),
            result=None,
            result_kind=__NumberType.NOT_A_NUMBER,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    spec.add_method(
        __MethodSpec.__new__(
            __MethodSpec,
            name="bar",
            arguments=(
            ),
            result=None,
            result_kind=__NumberType.NOT_A_NUMBER,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    spec.add_method(
        __MethodSpec.__new__(
            __MethodSpec,
            name="baz",
            arguments=(
            ),
            result=None,
            result_kind=__NumberType.NOT_A_NUMBER,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    return spec