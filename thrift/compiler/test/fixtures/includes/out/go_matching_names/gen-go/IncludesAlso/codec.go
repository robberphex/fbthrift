// Autogenerated by Thrift for IncludesAlso.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package IncludesAlso


import (
    "reflect"
    "sync"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO
var _ = reflect.Ptr

// Premade codec specs
var (
    premadeCodecTypeSpec_IncludesAlso_Also *thrift.TypeSpec = nil
)

// Premade codec specs initializer
var premadeCodecSpecsInitOnce = sync.OnceFunc(func() {
    premadeCodecTypeSpec_IncludesAlso_Also = &thrift.TypeSpec{
        FullName: "IncludesAlso.Also",
        CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "IncludesAlso.Also",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewAlso() },
},

    }
})

// Premade struct specs
var (
    premadeStructSpec_Also *thrift.StructSpec = nil
)

// Premade struct specs initializer
var premadeStructSpecsInitOnce = sync.OnceFunc(func() {
    premadeStructSpec_Also = &thrift.StructSpec{
    Name:                 "Also",
    ScopedName:           "IncludesAlso.Also",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
    },
    FieldSpecIDToIndex:   map[int16]int{
    },
    FieldSpecNameToIndex: map[string]int{
    },
}
})

var premadeCodecSpecsMapOnce = sync.OnceValue(
    func() map[string]*thrift.TypeSpec {
        // Relies on premade codec specs initialization
        premadeCodecSpecsInitOnce()

        fbthriftTypeSpecsMap := make(map[string]*thrift.TypeSpec)
        fbthriftTypeSpecsMap[premadeCodecTypeSpec_IncludesAlso_Also.FullName] = premadeCodecTypeSpec_IncludesAlso_Also
        return fbthriftTypeSpecsMap
    },
)

func init() {
    premadeCodecSpecsInitOnce()
    premadeStructSpecsInitOnce()
}

// GetMetadataThriftType (INTERNAL USE ONLY).
// Returns metadata TypeSpec for a given full type name.
func GetCodecTypeSpec(fullName string) *thrift.TypeSpec {
    return premadeCodecSpecsMapOnce()[fullName]
}