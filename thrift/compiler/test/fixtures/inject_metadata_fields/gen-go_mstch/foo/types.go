// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package foo // [[[ program thrift source path ]]]

import (
  "fmt"

  thrift0 "thrift/annotation/thrift"
  "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)

var _ = thrift0.GoUnusedProtection__

// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = thrift.ZERO


type Fields struct {
    InjectedField string `thrift:"injected_field,100" json:"injected_field" db:"injected_field"`
    InjectedStructuredAnnotationField *string `thrift:"injected_structured_annotation_field,101,optional" json:"injected_structured_annotation_field,omitempty" db:"injected_structured_annotation_field"`
    InjectedUnstructuredAnnotationField *string `thrift:"injected_unstructured_annotation_field,102,optional" json:"injected_unstructured_annotation_field,omitempty" db:"injected_unstructured_annotation_field"`
}
// Compile time interface enforcer
var _ thrift.Struct = &Fields{}

func NewFields() *Fields {
    return (&Fields{})
}
func (x *Fields) GetInjectedField() string {
    return x.InjectedField
}

func (x *Fields) GetInjectedStructuredAnnotationField() *string {
    return x.InjectedStructuredAnnotationField
}

func (x *Fields) GetInjectedUnstructuredAnnotationField() *string {
    return x.InjectedUnstructuredAnnotationField
}

func (x *Fields) SetInjectedField(value string) *Fields {
    x.InjectedField = value
    return x
}

func (x *Fields) SetInjectedStructuredAnnotationField(value string) *Fields {
    x.InjectedStructuredAnnotationField = &value
    return x
}

func (x *Fields) SetInjectedUnstructuredAnnotationField(value string) *Fields {
    x.InjectedUnstructuredAnnotationField = &value
    return x
}


func (x *Fields) IsSetInjectedStructuredAnnotationField() bool {
    return x.InjectedStructuredAnnotationField != nil
}

func (x *Fields) IsSetInjectedUnstructuredAnnotationField() bool {
    return x.InjectedUnstructuredAnnotationField != nil
}

func (x *Fields) writeField100(p thrift.Protocol) error {  // InjectedField
    if err := p.WriteFieldBegin("injected_field", thrift.STRING, 100); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetInjectedField()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Fields) writeField101(p thrift.Protocol) error {  // InjectedStructuredAnnotationField
    if !x.IsSetInjectedStructuredAnnotationField() {
        return nil
    }

    if err := p.WriteFieldBegin("injected_structured_annotation_field", thrift.STRING, 101); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := *x.GetInjectedStructuredAnnotationField()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Fields) writeField102(p thrift.Protocol) error {  // InjectedUnstructuredAnnotationField
    if !x.IsSetInjectedUnstructuredAnnotationField() {
        return nil
    }

    if err := p.WriteFieldBegin("injected_unstructured_annotation_field", thrift.STRING, 102); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := *x.GetInjectedUnstructuredAnnotationField()
    if err := p.WriteString(item); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Fields) readField100(p thrift.Protocol) error {  // InjectedField
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetInjectedField(result)
    return nil
}

func (x *Fields) readField101(p thrift.Protocol) error {  // InjectedStructuredAnnotationField
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetInjectedStructuredAnnotationField(result)
    return nil
}

func (x *Fields) readField102(p thrift.Protocol) error {  // InjectedUnstructuredAnnotationField
    result, err := p.ReadString()
if err != nil {
    return err
}

    x.SetInjectedUnstructuredAnnotationField(result)
    return nil
}


// Deprecated: Use Fields.Set* methods instead or set the fields directly.
type FieldsBuilder struct {
    obj *Fields
}

func NewFieldsBuilder() *FieldsBuilder {
    return &FieldsBuilder{
        obj: NewFields(),
    }
}

func (x *FieldsBuilder) InjectedField(value string) *FieldsBuilder {
    x.obj.InjectedField = value
    return x
}

func (x *FieldsBuilder) InjectedStructuredAnnotationField(value *string) *FieldsBuilder {
    x.obj.InjectedStructuredAnnotationField = value
    return x
}

func (x *FieldsBuilder) InjectedUnstructuredAnnotationField(value *string) *FieldsBuilder {
    x.obj.InjectedUnstructuredAnnotationField = value
    return x
}

func (x *FieldsBuilder) Emit() *Fields {
    var objCopy Fields = *x.obj
    return &objCopy
}

func (x *Fields) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Fields"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField100(p); err != nil {
        return err
    }

    if err := x.writeField101(p); err != nil {
        return err
    }

    if err := x.writeField102(p); err != nil {
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

func (x *Fields) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        case 100:  // injected_field
            if err := x.readField100(p); err != nil {
                return err
            }
        case 101:  // injected_structured_annotation_field
            if err := x.readField101(p); err != nil {
                return err
            }
        case 102:  // injected_unstructured_annotation_field
            if err := x.readField102(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
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
