// Autogenerated by Thrift for module.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module

import (
    "fmt"
    "reflect"

    includes "includes"
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

var _ = includes.GoUnusedProtection__
// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = reflect.Ptr
var _ = thrift.ZERO

type MyStruct struct {
    MyIncludedField *includes.Included `thrift:"MyIncludedField,1" json:"MyIncludedField" db:"MyIncludedField"`
    MyOtherIncludedField *includes.Included `thrift:"MyOtherIncludedField,2" json:"MyOtherIncludedField" db:"MyOtherIncludedField"`
    MyIncludedInt includes.IncludedInt64 `thrift:"MyIncludedInt,3" json:"MyIncludedInt" db:"MyIncludedInt"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*MyStruct)(nil)

func NewMyStruct() *MyStruct {
    return (&MyStruct{}).setDefaults()
}

func (x *MyStruct) GetMyIncludedField() *includes.Included {
    if !x.IsSetMyIncludedField() {
        return nil
    }
    return x.MyIncludedField
}

func (x *MyStruct) GetMyOtherIncludedField() *includes.Included {
    if !x.IsSetMyOtherIncludedField() {
        return nil
    }
    return x.MyOtherIncludedField
}

func (x *MyStruct) GetMyIncludedInt() includes.IncludedInt64 {
    return x.MyIncludedInt
}

func (x *MyStruct) SetMyIncludedFieldNonCompat(value *includes.Included) *MyStruct {
    x.MyIncludedField = value
    return x
}

func (x *MyStruct) SetMyIncludedField(value *includes.Included) *MyStruct {
    x.MyIncludedField = value
    return x
}

func (x *MyStruct) SetMyOtherIncludedFieldNonCompat(value *includes.Included) *MyStruct {
    x.MyOtherIncludedField = value
    return x
}

func (x *MyStruct) SetMyOtherIncludedField(value *includes.Included) *MyStruct {
    x.MyOtherIncludedField = value
    return x
}

func (x *MyStruct) SetMyIncludedIntNonCompat(value includes.IncludedInt64) *MyStruct {
    x.MyIncludedInt = value
    return x
}

func (x *MyStruct) SetMyIncludedInt(value includes.IncludedInt64) *MyStruct {
    x.MyIncludedInt = value
    return x
}

func (x *MyStruct) IsSetMyIncludedField() bool {
    return x != nil && x.MyIncludedField != nil
}

func (x *MyStruct) IsSetMyOtherIncludedField() bool {
    return x != nil && x.MyOtherIncludedField != nil
}

func (x *MyStruct) writeField1(p thrift.Encoder) error {  // MyIncludedField
    if !x.IsSetMyIncludedField() {
        return nil
    }

    if err := p.WriteFieldBegin("MyIncludedField", thrift.STRUCT, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.MyIncludedField
    if err := item.Write(p); err != nil {
        return err
    }

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField2(p thrift.Encoder) error {  // MyOtherIncludedField
    if !x.IsSetMyOtherIncludedField() {
        return nil
    }

    if err := p.WriteFieldBegin("MyOtherIncludedField", thrift.STRUCT, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.MyOtherIncludedField
    if err := item.Write(p); err != nil {
        return err
    }

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField3(p thrift.Encoder) error {  // MyIncludedInt
    if err := p.WriteFieldBegin("MyIncludedInt", thrift.I64, 3); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.MyIncludedInt
    err := includes.WriteIncludedInt64(item, p)
    if err != nil {
        return err
    }

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) readField1(p thrift.Decoder) error {  // MyIncludedField
    result := includes.NewIncluded()
    err := result.Read(p)
    if err != nil {
        return err
    }

    x.MyIncludedField = result
    return nil
}

func (x *MyStruct) readField2(p thrift.Decoder) error {  // MyOtherIncludedField
    result := includes.NewIncluded()
    err := result.Read(p)
    if err != nil {
        return err
    }

    x.MyOtherIncludedField = result
    return nil
}

func (x *MyStruct) readField3(p thrift.Decoder) error {  // MyIncludedInt
    result, err := includes.ReadIncludedInt64(p)
    if err != nil {
        return err
    }

    x.MyIncludedInt = result
    return nil
}

// Deprecated: Use NewMyStruct().GetMyIncludedField() instead.
func (x *MyStruct) DefaultGetMyIncludedField() *includes.Included {
    if !x.IsSetMyIncludedField() {
        return includes.NewIncluded()
    }
    return x.MyIncludedField
}

// Deprecated: Use NewMyStruct().GetMyOtherIncludedField() instead.
func (x *MyStruct) DefaultGetMyOtherIncludedField() *includes.Included {
    if !x.IsSetMyOtherIncludedField() {
        return includes.NewIncluded()
    }
    return x.MyOtherIncludedField
}



func (x *MyStruct) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("MyStruct"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }
    if err := x.writeField2(p); err != nil {
        return err
    }
    if err := x.writeField3(p); err != nil {
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

func (x *MyStruct) Read(p thrift.Decoder) error {
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
        case ((id == 1 && wireType == thrift.STRUCT) || (id == thrift.NO_FIELD_ID && fieldName == "MyIncludedField")):  // MyIncludedField
            fieldReadErr = x.readField1(p)
        case ((id == 2 && wireType == thrift.STRUCT) || (id == thrift.NO_FIELD_ID && fieldName == "MyOtherIncludedField")):  // MyOtherIncludedField
            fieldReadErr = x.readField2(p)
        case ((id == 3 && wireType == thrift.I64) || (id == thrift.NO_FIELD_ID && fieldName == "MyIncludedInt")):  // MyIncludedInt
            fieldReadErr = x.readField3(p)
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

func (x *MyStruct) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *MyStruct) setDefaults() *MyStruct {
    return x.
        SetMyIncludedFieldNonCompat(
              includes.ExampleIncluded,
          ).
        SetMyOtherIncludedFieldNonCompat(includes.NewIncluded()).
        SetMyIncludedIntNonCompat(42)
}



// RegisterTypes registers types found in this file that have a thrift_uri with the passed in registry.
func RegisterTypes(registry interface {
  RegisterType(name string, initializer func() any)
}) {

}
