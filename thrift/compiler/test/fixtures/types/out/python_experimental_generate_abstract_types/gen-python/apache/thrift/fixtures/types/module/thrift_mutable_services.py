#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

from abc import ABCMeta
import typing as _typing

import folly.iobuf as _fbthrift_iobuf

import apache.thrift.metadata.thrift_types as _fbthrift_metadata
from thrift.python.mutable_serializer import serialize_iobuf, deserialize, Protocol
from thrift.python.server import ServiceInterface, RpcKind, PythonUserException

import apache.thrift.fixtures.types.module.thrift_mutable_types as _fbthrift__apache__thrift__fixtures__types__module__thrift_mutable_types
import apache.thrift.fixtures.types.module.thrift_metadata
import apache.thrift.fixtures.types.included.thrift_mutable_types as _fbthrift__apache__thrift__fixtures__types__included__thrift_mutable_types

class SomeServiceInterface(
    ServiceInterface,
    metaclass=ABCMeta
):

    @staticmethod
    def service_name() -> bytes:
        return b"SomeService"

    def getFunctionTable(self) -> _typing.Mapping[bytes, _typing.Callable[..., object]]:
        functionTable = {
            b"bounce_map": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_bounce_map),
            b"binary_keyed_map": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_binary_keyed_map),
        }
        return {**super().getFunctionTable(), **functionTable}

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.SomeService"

    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return apache.thrift.fixtures.types.module.thrift_metadata.gen_metadata_service_SomeService()

    @staticmethod
    def __get_metadata_service_response__() -> _fbthrift_metadata.ThriftServiceMetadataResponse:
        return apache.thrift.fixtures.types.module.thrift_metadata._fbthrift_metadata_service_response_SomeService()



    async def bounce_map(
            self,
            m: _fbthrift_python_mutable_containers.MutableMap[int, str]
        ) -> _fbthrift_python_mutable_containers.MutableMap[int, str]:
        raise NotImplementedError("async def bounce_map is not implemented")

    async def _fbthrift__handler_bounce_map(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(_fbthrift__apache__thrift__fixtures__types__module__thrift_mutable_types._fbthrift_SomeService_bounce_map_args, args, protocol)
        value = await self.bounce_map(args_struct.m,)
        return_struct = _fbthrift__apache__thrift__fixtures__types__module__thrift_mutable_types._fbthrift_SomeService_bounce_map_result(success=value)
        return serialize_iobuf(return_struct, protocol)


    async def binary_keyed_map(
            self,
            r: _fbthrift_python_mutable_containers.MutableList[int]
        ) -> _fbthrift_python_mutable_containers.MutableMap[bytes, int]:
        raise NotImplementedError("async def binary_keyed_map is not implemented")

    async def _fbthrift__handler_binary_keyed_map(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(_fbthrift__apache__thrift__fixtures__types__module__thrift_mutable_types._fbthrift_SomeService_binary_keyed_map_args, args, protocol)
        value = await self.binary_keyed_map(args_struct.r,)
        return_struct = _fbthrift__apache__thrift__fixtures__types__module__thrift_mutable_types._fbthrift_SomeService_binary_keyed_map_result(success=value)
        return serialize_iobuf(return_struct, protocol)
