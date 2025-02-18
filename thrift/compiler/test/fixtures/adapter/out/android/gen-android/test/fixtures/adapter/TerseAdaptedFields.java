/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.adapter;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class TerseAdaptedFields implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("TerseAdaptedFields");
  private static final TField INT_FIELD_FIELD_DESC = new TField("int_field", TType.I32, (short)1);
  private static final TField STRING_FIELD_FIELD_DESC = new TField("string_field", TType.STRING, (short)2);
  private static final TField SET_FIELD_FIELD_DESC = new TField("set_field", TType.SET, (short)3);

  public final Integer int_field;
  public final String string_field;
  public final Set<Integer> set_field;
  public static final int INT_FIELD = 1;
  public static final int STRING_FIELD = 2;
  public static final int SET_FIELD = 3;

  public TerseAdaptedFields(
      Integer int_field,
      String string_field,
      Set<Integer> set_field) {
    this.int_field = int_field;
    this.string_field = string_field;
    this.set_field = set_field;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public TerseAdaptedFields(TerseAdaptedFields other) {
    if (other.isSetInt_field()) {
      this.int_field = TBaseHelper.deepCopy(other.int_field);
    } else {
      this.int_field = null;
    }
    if (other.isSetString_field()) {
      this.string_field = TBaseHelper.deepCopy(other.string_field);
    } else {
      this.string_field = null;
    }
    if (other.isSetSet_field()) {
      this.set_field = TBaseHelper.deepCopy(other.set_field);
    } else {
      this.set_field = null;
    }
  }

  public TerseAdaptedFields deepCopy() {
    return new TerseAdaptedFields(this);
  }

  public Integer getInt_field() {
    return this.int_field;
  }

  // Returns true if field int_field is set (has been assigned a value) and false otherwise
  public boolean isSetInt_field() {
    return this.int_field != null;
  }

  public String getString_field() {
    return this.string_field;
  }

  // Returns true if field string_field is set (has been assigned a value) and false otherwise
  public boolean isSetString_field() {
    return this.string_field != null;
  }

  public Set<Integer> getSet_field() {
    return this.set_field;
  }

  // Returns true if field set_field is set (has been assigned a value) and false otherwise
  public boolean isSetSet_field() {
    return this.set_field != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof TerseAdaptedFields))
      return false;
    TerseAdaptedFields that = (TerseAdaptedFields)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetInt_field(), that.isSetInt_field(), this.int_field, that.int_field)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetString_field(), that.isSetString_field(), this.string_field, that.string_field)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetSet_field(), that.isSetSet_field(), this.set_field, that.set_field)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {int_field, string_field, set_field});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static TerseAdaptedFields deserialize(TProtocol iprot) throws TException {
    Integer tmp_int_field = null;
    String tmp_string_field = null;
    Set<Integer> tmp_set_field = null;
    TField __field;
    iprot.readStructBegin();
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case INT_FIELD:
          if (__field.type == TType.I32) {
            tmp_int_field = iprot.readI32();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case STRING_FIELD:
          if (__field.type == TType.STRING) {
            tmp_string_field = iprot.readString();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case SET_FIELD:
          if (__field.type == TType.SET) {
            {
              TSet _set63 = iprot.readSetBegin();
              tmp_set_field = new HashSet<Integer>(Math.max(0, 2*_set63.size));
              for (int _i64 = 0; 
                   (_set63.size < 0) ? iprot.peekSet() : (_i64 < _set63.size); 
                   ++_i64)
              {
                Integer _elem65;
                _elem65 = iprot.readI32();
                tmp_set_field.add(_elem65);
              }
              iprot.readSetEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();

    TerseAdaptedFields _that;
    _that = new TerseAdaptedFields(
      tmp_int_field
      ,tmp_string_field
      ,tmp_set_field
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.int_field != null) {
      oprot.writeFieldBegin(INT_FIELD_FIELD_DESC);
      oprot.writeI32(this.int_field);
      oprot.writeFieldEnd();
    }
    if (this.string_field != null) {
      oprot.writeFieldBegin(STRING_FIELD_FIELD_DESC);
      oprot.writeString(this.string_field);
      oprot.writeFieldEnd();
    }
    if (this.set_field != null) {
      oprot.writeFieldBegin(SET_FIELD_FIELD_DESC);
      {
        oprot.writeSetBegin(new TSet(TType.I32, this.set_field.size()));
        for (Integer _iter66 : this.set_field)        {
          oprot.writeI32(_iter66);
        }
        oprot.writeSetEnd();
      }
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    return TBaseHelper.toStringHelper(this, indent, prettyPrint);
  }

  public void validate() throws TException {
    // check for required fields
  }

}

