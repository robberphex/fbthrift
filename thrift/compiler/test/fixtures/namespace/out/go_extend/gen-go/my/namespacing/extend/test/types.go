// Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace/src/extend.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package test

import (
    "fmt"
    "reflect"

    test0 "my/namespacing/test"
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

var _ = test0.GoUnusedProtection__
// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = reflect.Ptr
var _ = thrift.ZERO


// Service req/resp structs (below)
type reqExtendTestServiceCheck struct {
    Struct1 *test0.HsFoo `thrift:"struct1,1" json:"struct1" db:"struct1"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*reqExtendTestServiceCheck)(nil)

// Deprecated: ExtendTestServiceCheckArgsDeprecated is deprecated, since it is supposed to be internal.
type ExtendTestServiceCheckArgsDeprecated = reqExtendTestServiceCheck

func newReqExtendTestServiceCheck() *reqExtendTestServiceCheck {
    return (&reqExtendTestServiceCheck{}).setDefaults()
}

func (x *reqExtendTestServiceCheck) GetStruct1() *test0.HsFoo {
    if !x.IsSetStruct1() {
        return nil
    }
    return x.Struct1
}

func (x *reqExtendTestServiceCheck) SetStruct1NonCompat(value *test0.HsFoo) *reqExtendTestServiceCheck {
    x.Struct1 = value
    return x
}

func (x *reqExtendTestServiceCheck) SetStruct1(value *test0.HsFoo) *reqExtendTestServiceCheck {
    x.Struct1 = value
    return x
}

func (x *reqExtendTestServiceCheck) IsSetStruct1() bool {
    return x != nil && x.Struct1 != nil
}

func (x *reqExtendTestServiceCheck) writeField1(p thrift.Encoder) error {  // Struct1
    if !x.IsSetStruct1() {
        return nil
    }

    if err := p.WriteFieldBegin("struct1", thrift.STRUCT, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Struct1
    if err := item.Write(p); err != nil {
        return err
    }

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *reqExtendTestServiceCheck) readField1(p thrift.Decoder) error {  // Struct1
    result := test0.NewHsFoo()
    err := result.Read(p)
    if err != nil {
        return err
    }

    x.Struct1 = result
    return nil
}

// Deprecated: Use newReqExtendTestServiceCheck().GetStruct1() instead.
func (x *reqExtendTestServiceCheck) DefaultGetStruct1() *test0.HsFoo {
    if !x.IsSetStruct1() {
        return test0.NewHsFoo()
    }
    return x.Struct1
}



func (x *reqExtendTestServiceCheck) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("reqExtendTestServiceCheck"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *reqExtendTestServiceCheck) Read(p thrift.Decoder) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        fieldName, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d ('%s') read error: ", x, id, fieldName), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        var fieldReadErr error
        switch {
        case ((id == 1 && wireType == thrift.STRUCT) || (id == thrift.NO_FIELD_ID && fieldName == "struct1")):  // struct1
            fieldReadErr = x.readField1(p)
        default:
            fieldReadErr = p.Skip(wireType)
        }

        if fieldReadErr != nil {
            return fieldReadErr
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *reqExtendTestServiceCheck) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *reqExtendTestServiceCheck) setDefaults() *reqExtendTestServiceCheck {
    return x.
        SetStruct1NonCompat(test0.NewHsFoo())
}

type respExtendTestServiceCheck struct {
    Success *bool `thrift:"success,0,optional" json:"success,omitempty" db:"success"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*respExtendTestServiceCheck)(nil)
var _ thrift.WritableResult = (*respExtendTestServiceCheck)(nil)

// Deprecated: ExtendTestServiceCheckResultDeprecated is deprecated, since it is supposed to be internal.
type ExtendTestServiceCheckResultDeprecated = respExtendTestServiceCheck

func newRespExtendTestServiceCheck() *respExtendTestServiceCheck {
    return (&respExtendTestServiceCheck{}).setDefaults()
}

func (x *respExtendTestServiceCheck) GetSuccess() bool {
    if !x.IsSetSuccess() {
        return false
    }
    return *x.Success
}

func (x *respExtendTestServiceCheck) SetSuccessNonCompat(value bool) *respExtendTestServiceCheck {
    x.Success = &value
    return x
}

func (x *respExtendTestServiceCheck) SetSuccess(value *bool) *respExtendTestServiceCheck {
    x.Success = value
    return x
}

func (x *respExtendTestServiceCheck) IsSetSuccess() bool {
    return x != nil && x.Success != nil
}

func (x *respExtendTestServiceCheck) writeField0(p thrift.Encoder) error {  // Success
    if !x.IsSetSuccess() {
        return nil
    }

    if err := p.WriteFieldBegin("success", thrift.BOOL, 0); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := *x.Success
    if err := p.WriteBool(item); err != nil {
        return err
    }

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *respExtendTestServiceCheck) readField0(p thrift.Decoder) error {  // Success
    result, err := p.ReadBool()
    if err != nil {
        return err
    }

    x.Success = &result
    return nil
}




func (x *respExtendTestServiceCheck) Exception() thrift.WritableException {
    return nil
}

func (x *respExtendTestServiceCheck) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("respExtendTestServiceCheck"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField0(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *respExtendTestServiceCheck) Read(p thrift.Decoder) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        fieldName, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d ('%s') read error: ", x, id, fieldName), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        var fieldReadErr error
        switch {
        case ((id == 0 && wireType == thrift.BOOL) || (id == thrift.NO_FIELD_ID && fieldName == "success")):  // success
            fieldReadErr = x.readField0(p)
        default:
            fieldReadErr = p.Skip(wireType)
        }

        if fieldReadErr != nil {
            return fieldReadErr
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *respExtendTestServiceCheck) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *respExtendTestServiceCheck) setDefaults() *respExtendTestServiceCheck {
    return x
}


