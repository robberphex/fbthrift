// Autogenerated by Thrift for includes.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package includes

import (
    "fmt"
    "reflect"

    transitive "transitive"
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

var _ = transitive.GoUnusedProtection__
// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = reflect.Ptr
var _ = thrift.ZERO


type IncludedInt64 = int64

func NewIncludedInt64() IncludedInt64 {
    return 0
}

func WriteIncludedInt64(item IncludedInt64, p thrift.Encoder) error {
    if err := p.WriteI64(item); err != nil {
        return err
    }
    return nil
}

func ReadIncludedInt64(p thrift.Decoder) (IncludedInt64, error) {
    var decodeResult IncludedInt64
    decodeErr := func() error {
        result, err := p.ReadI64()
        if err != nil {
            return err
        }
        decodeResult = result
        return nil
    }()
    return decodeResult, decodeErr
}

type TransitiveFoo = transitive.Foo

func NewTransitiveFoo() *TransitiveFoo {
    return transitive.NewFoo()
}

func WriteTransitiveFoo(item *TransitiveFoo, p thrift.Encoder) error {
    if err := item.Write(p); err != nil {
        return err
    }
    return nil
}

func ReadTransitiveFoo(p thrift.Decoder) (*TransitiveFoo, error) {
    var decodeResult *TransitiveFoo
    decodeErr := func() error {
        result := transitive.NewFoo()
        err := result.Read(p)
        if err != nil {
            return err
        }
        decodeResult = result
        return nil
    }()
    return decodeResult, decodeErr
}
type Included struct {
    MyIntField int64 `thrift:"MyIntField,1" json:"MyIntField" db:"MyIntField"`
    MyTransitiveField *transitive.Foo `thrift:"MyTransitiveField,2" json:"MyTransitiveField" db:"MyTransitiveField"`
}
// Compile time interface enforcer
var _ thrift.Struct = (*Included)(nil)

func NewIncluded() *Included {
    return (&Included{}).setDefaults()
}

func (x *Included) GetMyIntField() int64 {
    return x.MyIntField
}

func (x *Included) GetMyTransitiveField() *transitive.Foo {
    if !x.IsSetMyTransitiveField() {
        return nil
    }
    return x.MyTransitiveField
}

func (x *Included) SetMyIntFieldNonCompat(value int64) *Included {
    x.MyIntField = value
    return x
}

func (x *Included) SetMyIntField(value int64) *Included {
    x.MyIntField = value
    return x
}

func (x *Included) SetMyTransitiveFieldNonCompat(value *transitive.Foo) *Included {
    x.MyTransitiveField = value
    return x
}

func (x *Included) SetMyTransitiveField(value *transitive.Foo) *Included {
    x.MyTransitiveField = value
    return x
}

func (x *Included) IsSetMyTransitiveField() bool {
    return x != nil && x.MyTransitiveField != nil
}

func (x *Included) writeField1(p thrift.Encoder) error {  // MyIntField
    if err := p.WriteFieldBegin("MyIntField", thrift.I64, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.MyIntField
    if err := p.WriteI64(item); err != nil {
        return err
    }

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Included) writeField2(p thrift.Encoder) error {  // MyTransitiveField
    if !x.IsSetMyTransitiveField() {
        return nil
    }

    if err := p.WriteFieldBegin("MyTransitiveField", thrift.STRUCT, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.MyTransitiveField
    if err := item.Write(p); err != nil {
        return err
    }

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *Included) readField1(p thrift.Decoder) error {  // MyIntField
    result, err := p.ReadI64()
    if err != nil {
        return err
    }

    x.MyIntField = result
    return nil
}

func (x *Included) readField2(p thrift.Decoder) error {  // MyTransitiveField
    result := transitive.NewFoo()
    err := result.Read(p)
    if err != nil {
        return err
    }

    x.MyTransitiveField = result
    return nil
}

// Deprecated: Use NewIncluded().GetMyTransitiveField() instead.
func (x *Included) DefaultGetMyTransitiveField() *transitive.Foo {
    if !x.IsSetMyTransitiveField() {
        return transitive.NewFoo()
    }
    return x.MyTransitiveField
}



func (x *Included) Write(p thrift.Encoder) error {
    if err := p.WriteStructBegin("Included"); err != nil {
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

func (x *Included) Read(p thrift.Decoder) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        var fieldReadErr error
        switch {
        case (id == 1 && wireType == thrift.I64):  // MyIntField
            fieldReadErr = x.readField1(p)
        case (id == 2 && wireType == thrift.STRUCT):  // MyTransitiveField
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

func (x *Included) String() string {
    return thrift.StructToString(reflect.ValueOf(x))
}

func (x *Included) setDefaults() *Included {
    return x.
        SetMyIntFieldNonCompat(0).
        SetMyTransitiveFieldNonCompat(
              transitive.ExampleFoo,
          )
}



// RegisterTypes registers types found in this file that have a thrift_uri with the passed in registry.
func RegisterTypes(registry interface {
  RegisterType(name string, initializer func() any)
}) {

}
