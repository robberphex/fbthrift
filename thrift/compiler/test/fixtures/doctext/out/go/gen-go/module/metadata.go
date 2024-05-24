// Autogenerated by Thrift for thrift/compiler/test/fixtures/doctext/src/module.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module

import (
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

// mapsCopy is a copy of maps.Copy from Go 1.21
// TODO: remove mapsCopy once we can safely upgrade to Go 1.21 without requiring any rollback.
func mapsCopy[M1 ~map[K]V, M2 ~map[K]V, K comparable, V any](dst M1, src M2) {
	for k, v := range src {
		dst[k] = v
	}
}

// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO
// TODO: uncomment when can safely upgrade to Go 1.21 without requiring any rollback.
// var _ = maps.Copy[map[int]int, map[int]int]
var _ = metadata.GoUnusedProtection__

// Premade Thrift types
var (
    premadeThriftType_i32 = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_I32_TYPE.Ptr(),
            )
    premadeThriftType_string = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_STRING_TYPE.Ptr(),
            )
    premadeThriftType_void = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_VOID_TYPE.Ptr(),
            )
    premadeThriftType_set_i32 = metadata.NewThriftType().SetTSet(
        metadata.NewThriftSetType().
            SetValueType(premadeThriftType_i32),
            )
    premadeThriftType_module_Bang = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module.Bang"),
            )
)

var structMetadatas = []*metadata.ThriftStruct{
    metadata.NewThriftStruct().
    SetName("module.A").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("useless_field").
    SetIsOptional(false).
    SetType(premadeThriftType_i32),
        },
    ),
    metadata.NewThriftStruct().
    SetName("module.U").
    SetIsUnion(true).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("i").
    SetIsOptional(false).
    SetType(premadeThriftType_i32),
            metadata.NewThriftField().
    SetId(2).
    SetName("s").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ),
}

var exceptionMetadatas = []*metadata.ThriftException{
    metadata.NewThriftException().
    SetName("module.Bang").
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("message").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ),
}

var enumMetadatas = []*metadata.ThriftEnum{
    metadata.NewThriftEnum().
    SetName("module.B").
    SetElements(
        map[int32]string{
            0: "HELLO",
        },
    ),
}

var serviceMetadatas = []*metadata.ThriftService{
    metadata.NewThriftService().
    SetName("module.C").
    SetFunctions(
        []*metadata.ThriftFunction{
            metadata.NewThriftFunction().
    SetName("f").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_void),
            metadata.NewThriftFunction().
    SetName("thing").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_string).
    SetArguments(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("a").
    SetIsOptional(false).
    SetType(premadeThriftType_i32),
            metadata.NewThriftField().
    SetId(2).
    SetName("b").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(3).
    SetName("c").
    SetIsOptional(false).
    SetType(premadeThriftType_set_i32),
        },
    ).
    SetExceptions(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("bang").
    SetIsOptional(true).
    SetType(premadeThriftType_module_Bang),
        },
    ),
        },
    ),
}

// GetThriftMetadata returns complete Thrift metadata for current and imported packages.
func GetThriftMetadata() *metadata.ThriftMetadata {
    allEnums := GetEnumsMetadata()
    allStructs := GetStructsMetadata()
    allExceptions := GetExceptionsMetadata()
    allServices := GetServicesMetadata()

    return metadata.NewThriftMetadata().
        SetEnums(allEnums).
        SetStructs(allStructs).
        SetExceptions(allExceptions).
        SetServices(allServices)
}

// GetEnumsMetadata returns Thrift metadata for enums in the current and recursively included packages.
func GetEnumsMetadata() map[string]*metadata.ThriftEnum {
    allEnumsMap := make(map[string]*metadata.ThriftEnum)

    // Add enum metadatas from the current program...
    for _, enumMetadata := range enumMetadatas {
        allEnumsMap[enumMetadata.GetName()] = enumMetadata
    }

    // ...now add enum metadatas from recursively included programs.

    return allEnumsMap
}

// GetStructsMetadata returns Thrift metadata for structs in the current and recursively included packages.
func GetStructsMetadata() map[string]*metadata.ThriftStruct {
    allStructsMap := make(map[string]*metadata.ThriftStruct)

    // Add struct metadatas from the current program...
    for _, structMetadata := range structMetadatas {
        allStructsMap[structMetadata.GetName()] = structMetadata
    }

    // ...now add struct metadatas from recursively included programs.

    return allStructsMap
}

// GetExceptionsMetadata returns Thrift metadata for exceptions in the current and recursively included packages.
func GetExceptionsMetadata() map[string]*metadata.ThriftException {
    allExceptionsMap := make(map[string]*metadata.ThriftException)

    // Add exception metadatas from the current program...
    for _, exceptionMetadata := range exceptionMetadatas {
        allExceptionsMap[exceptionMetadata.GetName()] = exceptionMetadata
    }

    // ...now add exception metadatas from recursively included programs.

    return allExceptionsMap
}

// GetServicesMetadata returns Thrift metadata for services in the current and recursively included packages.
func GetServicesMetadata() map[string]*metadata.ThriftService {
    allServicesMap := make(map[string]*metadata.ThriftService)

    // Add service metadatas from the current program...
    for _, serviceMetadata := range serviceMetadatas {
        allServicesMap[serviceMetadata.GetName()] = serviceMetadata
    }

    // ...now add service metadatas from recursively included programs.

    return allServicesMap
}

// GetThriftMetadataForService returns Thrift metadata for the given service.
func GetThriftMetadataForService(scopedServiceName string) *metadata.ThriftMetadata {
    thriftMetadata := GetThriftMetadata()

    allServicesMap := thriftMetadata.GetServices()
    relevantServicesMap := make(map[string]*metadata.ThriftService)

    serviceMetadata := allServicesMap[scopedServiceName]
    // Visit and record all recursive parents of the target service.
    for serviceMetadata != nil {
        relevantServicesMap[serviceMetadata.GetName()] = serviceMetadata
        if serviceMetadata.IsSetParent() {
            serviceMetadata = allServicesMap[serviceMetadata.GetParent()]
        } else {
            serviceMetadata = nil
        }
    }

    thriftMetadata.SetServices(relevantServicesMap)

    return thriftMetadata
}
