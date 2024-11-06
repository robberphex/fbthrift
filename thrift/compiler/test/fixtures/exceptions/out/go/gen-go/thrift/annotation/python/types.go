// Autogenerated by Thrift for thrift/annotation/python.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package python

import (
    "fmt"
    "reflect"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = reflect.Ptr
var _ = thrift.ZERO

type Py3Hidden struct {
}
// Compile time interface enforcer
var _ thrift.Struct = (*Py3Hidden)(nil)

func NewPy3Hidden() *Py3Hidden {
    return (&Py3Hidden{}).setDefaults()
}



func (x *Py3Hidden) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("Py3Hidden"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }


    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Py3Hidden) Read(p thrift.Decoder) error {
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

func (x *Py3Hidden) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *Py3Hidden) setDefaults() *Py3Hidden {
    return x
}

type PyDeprecatedHidden struct {
    Reason string `thrift:"reason,1" json:"reason" db:"reason"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*PyDeprecatedHidden)(nil)

func NewPyDeprecatedHidden() *PyDeprecatedHidden {
    return (&PyDeprecatedHidden{}).setDefaults()
}

func (x *PyDeprecatedHidden) GetReason() string {
    return x.Reason
}

func (x *PyDeprecatedHidden) SetReasonNonCompat(value string) *PyDeprecatedHidden {
    x.Reason = value
    return x
}

func (x *PyDeprecatedHidden) SetReason(value string) *PyDeprecatedHidden {
    x.Reason = value
    return x
}

func (x *PyDeprecatedHidden) writeField1(p thrift.Encoder) error {  // Reason
    if err := p.WriteFieldBegin("reason", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Reason
    if err := p.WriteString(item); err != nil {
        return err
    }

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *PyDeprecatedHidden) readField1(p thrift.Decoder) error {  // Reason
    result, err := p.ReadString()
    if err != nil {
        return err
    }

    x.Reason = result
    return nil
}



func (x *PyDeprecatedHidden) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("PyDeprecatedHidden"); err != nil {
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

func (x *PyDeprecatedHidden) Read(p thrift.Decoder) error {
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
        case ((id == 1 && wireType == thrift.STRING) || (id == thrift.NO_FIELD_ID && fieldName == "reason")):  // reason
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

func (x *PyDeprecatedHidden) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *PyDeprecatedHidden) setDefaults() *PyDeprecatedHidden {
    return x.
        SetReasonNonCompat("")
}

type Flags struct {
}
// Compile time interface enforcer
var _ thrift.Struct = (*Flags)(nil)

func NewFlags() *Flags {
    return (&Flags{}).setDefaults()
}



func (x *Flags) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("Flags"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }


    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Flags) Read(p thrift.Decoder) error {
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

func (x *Flags) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *Flags) setDefaults() *Flags {
    return x
}

type Name struct {
    Name string `thrift:"name,1" json:"name" db:"name"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*Name)(nil)

func NewName() *Name {
    return (&Name{}).setDefaults()
}

func (x *Name) GetName() string {
    return x.Name
}

func (x *Name) SetNameNonCompat(value string) *Name {
    x.Name = value
    return x
}

func (x *Name) SetName(value string) *Name {
    x.Name = value
    return x
}

func (x *Name) writeField1(p thrift.Encoder) error {  // Name
    if err := p.WriteFieldBegin("name", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Name
    if err := p.WriteString(item); err != nil {
        return err
    }

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Name) readField1(p thrift.Decoder) error {  // Name
    result, err := p.ReadString()
    if err != nil {
        return err
    }

    x.Name = result
    return nil
}



func (x *Name) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("Name"); err != nil {
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

func (x *Name) Read(p thrift.Decoder) error {
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
        case ((id == 1 && wireType == thrift.STRING) || (id == thrift.NO_FIELD_ID && fieldName == "name")):  // name
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

func (x *Name) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *Name) setDefaults() *Name {
    return x.
        SetNameNonCompat("")
}

type Adapter struct {
    Name string `thrift:"name,1" json:"name" db:"name"`
    TypeHint string `thrift:"typeHint,2" json:"typeHint" db:"typeHint"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*Adapter)(nil)

func NewAdapter() *Adapter {
    return (&Adapter{}).setDefaults()
}

func (x *Adapter) GetName() string {
    return x.Name
}

func (x *Adapter) GetTypeHint() string {
    return x.TypeHint
}

func (x *Adapter) SetNameNonCompat(value string) *Adapter {
    x.Name = value
    return x
}

func (x *Adapter) SetName(value string) *Adapter {
    x.Name = value
    return x
}

func (x *Adapter) SetTypeHintNonCompat(value string) *Adapter {
    x.TypeHint = value
    return x
}

func (x *Adapter) SetTypeHint(value string) *Adapter {
    x.TypeHint = value
    return x
}

func (x *Adapter) writeField1(p thrift.Encoder) error {  // Name
    if err := p.WriteFieldBegin("name", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Name
    if err := p.WriteString(item); err != nil {
        return err
    }

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Adapter) writeField2(p thrift.Encoder) error {  // TypeHint
    if err := p.WriteFieldBegin("typeHint", thrift.STRING, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.TypeHint
    if err := p.WriteString(item); err != nil {
        return err
    }

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Adapter) readField1(p thrift.Decoder) error {  // Name
    result, err := p.ReadString()
    if err != nil {
        return err
    }

    x.Name = result
    return nil
}

func (x *Adapter) readField2(p thrift.Decoder) error {  // TypeHint
    result, err := p.ReadString()
    if err != nil {
        return err
    }

    x.TypeHint = result
    return nil
}



func (x *Adapter) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("Adapter"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }
    if err := x.writeField2(p); err != nil {
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

func (x *Adapter) Read(p thrift.Decoder) error {
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
        case ((id == 1 && wireType == thrift.STRING) || (id == thrift.NO_FIELD_ID && fieldName == "name")):  // name
            fieldReadErr = x.readField1(p)
        case ((id == 2 && wireType == thrift.STRING) || (id == thrift.NO_FIELD_ID && fieldName == "typeHint")):  // typeHint
            fieldReadErr = x.readField2(p)
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

func (x *Adapter) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *Adapter) setDefaults() *Adapter {
    return x.
        SetNameNonCompat("").
        SetTypeHintNonCompat("")
}

type UseCAPI struct {
    Serialize bool `thrift:"serialize,1" json:"serialize" db:"serialize"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*UseCAPI)(nil)

func NewUseCAPI() *UseCAPI {
    return (&UseCAPI{}).setDefaults()
}

func (x *UseCAPI) GetSerialize() bool {
    return x.Serialize
}

func (x *UseCAPI) SetSerializeNonCompat(value bool) *UseCAPI {
    x.Serialize = value
    return x
}

func (x *UseCAPI) SetSerialize(value bool) *UseCAPI {
    x.Serialize = value
    return x
}

func (x *UseCAPI) writeField1(p thrift.Encoder) error {  // Serialize
    if err := p.WriteFieldBegin("serialize", thrift.BOOL, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.Serialize
    if err := p.WriteBool(item); err != nil {
        return err
    }

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *UseCAPI) readField1(p thrift.Decoder) error {  // Serialize
    result, err := p.ReadBool()
    if err != nil {
        return err
    }

    x.Serialize = result
    return nil
}



func (x *UseCAPI) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("UseCAPI"); err != nil {
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

func (x *UseCAPI) Read(p thrift.Decoder) error {
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
        case ((id == 1 && wireType == thrift.BOOL) || (id == thrift.NO_FIELD_ID && fieldName == "serialize")):  // serialize
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

func (x *UseCAPI) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *UseCAPI) setDefaults() *UseCAPI {
    return x.
        SetSerializeNonCompat(false)
}



// RegisterTypes registers types found in this file that have a thrift_uri with the passed in registry.
func RegisterTypes(registry interface {
  RegisterType(name string, initializer func() any)
}) {
    registry.RegisterType("facebook.com/thrift/annotation/python/Py3Hidden", func() any { return NewPy3Hidden() })
    registry.RegisterType("facebook.com/thrift/annotation/python/PyDeprecatedHidden", func() any { return NewPyDeprecatedHidden() })
    registry.RegisterType("facebook.com/thrift/annotation/python/Flags", func() any { return NewFlags() })
    registry.RegisterType("facebook.com/thrift/annotation/python/Name", func() any { return NewName() })
    registry.RegisterType("facebook.com/thrift/annotation/python/Adapter", func() any { return NewAdapter() })
    registry.RegisterType("facebook.com/thrift/annotation/python/UseCAPI", func() any { return NewUseCAPI() })

}
