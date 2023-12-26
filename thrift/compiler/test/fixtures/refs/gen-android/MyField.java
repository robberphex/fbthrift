/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
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
public class MyField implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("MyField");
  private static final TField OPT_VALUE_FIELD_DESC = new TField("opt_value", TType.I64, (short)1);
  private static final TField VALUE_FIELD_DESC = new TField("value", TType.I64, (short)2);
  private static final TField REQ_VALUE_FIELD_DESC = new TField("req_value", TType.I64, (short)3);
  private static final TField OPT_ENUM_VALUE_FIELD_DESC = new TField("opt_enum_value", TType.I32, (short)4);
  private static final TField ENUM_VALUE_FIELD_DESC = new TField("enum_value", TType.I32, (short)5);
  private static final TField REQ_ENUM_VALUE_FIELD_DESC = new TField("req_enum_value", TType.I32, (short)6);
  private static final TField OPT_STR_VALUE_FIELD_DESC = new TField("opt_str_value", TType.STRING, (short)7);
  private static final TField STR_VALUE_FIELD_DESC = new TField("str_value", TType.STRING, (short)8);
  private static final TField REQ_STR_VALUE_FIELD_DESC = new TField("req_str_value", TType.STRING, (short)9);

  public final Long opt_value;
  public final Long value;
  public final Long req_value;
  /**
   * 
   * @see MyEnum
   */
  public final MyEnum opt_enum_value;
  /**
   * 
   * @see MyEnum
   */
  public final MyEnum enum_value;
  /**
   * 
   * @see MyEnum
   */
  public final MyEnum req_enum_value;
  public final String opt_str_value;
  public final String str_value;
  public final String req_str_value;
  public static final int OPT_VALUE = 1;
  public static final int VALUE = 2;
  public static final int REQ_VALUE = 3;
  public static final int OPT_ENUM_VALUE = 4;
  public static final int ENUM_VALUE = 5;
  public static final int REQ_ENUM_VALUE = 6;
  public static final int OPT_STR_VALUE = 7;
  public static final int STR_VALUE = 8;
  public static final int REQ_STR_VALUE = 9;

  public MyField(
      Long opt_value,
      Long value,
      Long req_value,
      MyEnum opt_enum_value,
      MyEnum enum_value,
      MyEnum req_enum_value,
      String opt_str_value,
      String str_value,
      String req_str_value) {
    this.opt_value = opt_value;
    this.value = value;
    this.req_value = req_value;
    this.opt_enum_value = opt_enum_value;
    this.enum_value = enum_value;
    this.req_enum_value = req_enum_value;
    this.opt_str_value = opt_str_value;
    this.str_value = str_value;
    this.req_str_value = req_str_value;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public MyField(MyField other) {
    if (other.isSetOpt_value()) {
      this.opt_value = TBaseHelper.deepCopy(other.opt_value);
    } else {
      this.opt_value = null;
    }
    if (other.isSetValue()) {
      this.value = TBaseHelper.deepCopy(other.value);
    } else {
      this.value = null;
    }
    if (other.isSetReq_value()) {
      this.req_value = TBaseHelper.deepCopy(other.req_value);
    } else {
      this.req_value = null;
    }
    if (other.isSetOpt_enum_value()) {
      this.opt_enum_value = TBaseHelper.deepCopy(other.opt_enum_value);
    } else {
      this.opt_enum_value = null;
    }
    if (other.isSetEnum_value()) {
      this.enum_value = TBaseHelper.deepCopy(other.enum_value);
    } else {
      this.enum_value = null;
    }
    if (other.isSetReq_enum_value()) {
      this.req_enum_value = TBaseHelper.deepCopy(other.req_enum_value);
    } else {
      this.req_enum_value = null;
    }
    if (other.isSetOpt_str_value()) {
      this.opt_str_value = TBaseHelper.deepCopy(other.opt_str_value);
    } else {
      this.opt_str_value = null;
    }
    if (other.isSetStr_value()) {
      this.str_value = TBaseHelper.deepCopy(other.str_value);
    } else {
      this.str_value = null;
    }
    if (other.isSetReq_str_value()) {
      this.req_str_value = TBaseHelper.deepCopy(other.req_str_value);
    } else {
      this.req_str_value = null;
    }
  }

  public MyField deepCopy() {
    return new MyField(this);
  }

  public Long getOpt_value() {
    return this.opt_value;
  }

  // Returns true if field opt_value is set (has been assigned a value) and false otherwise
  public boolean isSetOpt_value() {
    return this.opt_value != null;
  }

  public Long getValue() {
    return this.value;
  }

  // Returns true if field value is set (has been assigned a value) and false otherwise
  public boolean isSetValue() {
    return this.value != null;
  }

  public Long getReq_value() {
    return this.req_value;
  }

  // Returns true if field req_value is set (has been assigned a value) and false otherwise
  public boolean isSetReq_value() {
    return this.req_value != null;
  }

  /**
   * 
   * @see MyEnum
   */
  public MyEnum getOpt_enum_value() {
    return this.opt_enum_value;
  }

  // Returns true if field opt_enum_value is set (has been assigned a value) and false otherwise
  public boolean isSetOpt_enum_value() {
    return this.opt_enum_value != null;
  }

  /**
   * 
   * @see MyEnum
   */
  public MyEnum getEnum_value() {
    return this.enum_value;
  }

  // Returns true if field enum_value is set (has been assigned a value) and false otherwise
  public boolean isSetEnum_value() {
    return this.enum_value != null;
  }

  /**
   * 
   * @see MyEnum
   */
  public MyEnum getReq_enum_value() {
    return this.req_enum_value;
  }

  // Returns true if field req_enum_value is set (has been assigned a value) and false otherwise
  public boolean isSetReq_enum_value() {
    return this.req_enum_value != null;
  }

  public String getOpt_str_value() {
    return this.opt_str_value;
  }

  // Returns true if field opt_str_value is set (has been assigned a value) and false otherwise
  public boolean isSetOpt_str_value() {
    return this.opt_str_value != null;
  }

  public String getStr_value() {
    return this.str_value;
  }

  // Returns true if field str_value is set (has been assigned a value) and false otherwise
  public boolean isSetStr_value() {
    return this.str_value != null;
  }

  public String getReq_str_value() {
    return this.req_str_value;
  }

  // Returns true if field req_str_value is set (has been assigned a value) and false otherwise
  public boolean isSetReq_str_value() {
    return this.req_str_value != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof MyField))
      return false;
    MyField that = (MyField)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetOpt_value(), that.isSetOpt_value(), this.opt_value, that.opt_value)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetValue(), that.isSetValue(), this.value, that.value)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetReq_value(), that.isSetReq_value(), this.req_value, that.req_value)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetOpt_enum_value(), that.isSetOpt_enum_value(), this.opt_enum_value, that.opt_enum_value)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetEnum_value(), that.isSetEnum_value(), this.enum_value, that.enum_value)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetReq_enum_value(), that.isSetReq_enum_value(), this.req_enum_value, that.req_enum_value)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetOpt_str_value(), that.isSetOpt_str_value(), this.opt_str_value, that.opt_str_value)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetStr_value(), that.isSetStr_value(), this.str_value, that.str_value)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetReq_str_value(), that.isSetReq_str_value(), this.req_str_value, that.req_str_value)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {opt_value, value, req_value, opt_enum_value, enum_value, req_enum_value, opt_str_value, str_value, req_str_value});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static MyField deserialize(TProtocol iprot) throws TException {
    Long tmp_opt_value = null;
    Long tmp_value = null;
    Long tmp_req_value = null;
    MyEnum tmp_opt_enum_value = null;
    MyEnum tmp_enum_value = null;
    MyEnum tmp_req_enum_value = null;
    String tmp_opt_str_value = null;
    String tmp_str_value = null;
    String tmp_req_str_value = null;
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
        case OPT_VALUE:
          if (__field.type == TType.I64) {
            tmp_opt_value = iprot.readI64();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case VALUE:
          if (__field.type == TType.I64) {
            tmp_value = iprot.readI64();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case REQ_VALUE:
          if (__field.type == TType.I64) {
            tmp_req_value = iprot.readI64();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case OPT_ENUM_VALUE:
          if (__field.type == TType.I32) {
            tmp_opt_enum_value = MyEnum.findByValue(iprot.readI32());
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case ENUM_VALUE:
          if (__field.type == TType.I32) {
            tmp_enum_value = MyEnum.findByValue(iprot.readI32());
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case REQ_ENUM_VALUE:
          if (__field.type == TType.I32) {
            tmp_req_enum_value = MyEnum.findByValue(iprot.readI32());
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case OPT_STR_VALUE:
          if (__field.type == TType.STRING) {
            tmp_opt_str_value = iprot.readString();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case STR_VALUE:
          if (__field.type == TType.STRING) {
            tmp_str_value = iprot.readString();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case REQ_STR_VALUE:
          if (__field.type == TType.STRING) {
            tmp_req_str_value = iprot.readString();
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

    MyField _that;
    _that = new MyField(
      tmp_opt_value
      ,tmp_value
      ,tmp_req_value
      ,tmp_opt_enum_value
      ,tmp_enum_value
      ,tmp_req_enum_value
      ,tmp_opt_str_value
      ,tmp_str_value
      ,tmp_req_str_value
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.opt_value != null) {
      if (isSetOpt_value()) {
        oprot.writeFieldBegin(OPT_VALUE_FIELD_DESC);
        oprot.writeI64(this.opt_value);
        oprot.writeFieldEnd();
      }
    }
    if (this.value != null) {
      oprot.writeFieldBegin(VALUE_FIELD_DESC);
      oprot.writeI64(this.value);
      oprot.writeFieldEnd();
    }
    if (this.req_value != null) {
      oprot.writeFieldBegin(REQ_VALUE_FIELD_DESC);
      oprot.writeI64(this.req_value);
      oprot.writeFieldEnd();
    }
    if (this.opt_enum_value != null) {
      if (isSetOpt_enum_value()) {
        oprot.writeFieldBegin(OPT_ENUM_VALUE_FIELD_DESC);
        oprot.writeI32(this.opt_enum_value == null ? 0 : this.opt_enum_value.getValue());
        oprot.writeFieldEnd();
      }
    }
    if (this.enum_value != null) {
      oprot.writeFieldBegin(ENUM_VALUE_FIELD_DESC);
      oprot.writeI32(this.enum_value == null ? 0 : this.enum_value.getValue());
      oprot.writeFieldEnd();
    }
    if (this.req_enum_value != null) {
      oprot.writeFieldBegin(REQ_ENUM_VALUE_FIELD_DESC);
      oprot.writeI32(this.req_enum_value == null ? 0 : this.req_enum_value.getValue());
      oprot.writeFieldEnd();
    }
    if (this.opt_str_value != null) {
      if (isSetOpt_str_value()) {
        oprot.writeFieldBegin(OPT_STR_VALUE_FIELD_DESC);
        oprot.writeString(this.opt_str_value);
        oprot.writeFieldEnd();
      }
    }
    if (this.str_value != null) {
      oprot.writeFieldBegin(STR_VALUE_FIELD_DESC);
      oprot.writeString(this.str_value);
      oprot.writeFieldEnd();
    }
    if (this.req_str_value != null) {
      oprot.writeFieldBegin(REQ_STR_VALUE_FIELD_DESC);
      oprot.writeString(this.req_str_value);
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
    if (req_value == null) {
      throw new TProtocolException(TProtocolException.MISSING_REQUIRED_FIELD, "Required field 'req_value' was not present! Struct: " + toString());
    }
    if (req_enum_value == null) {
      throw new TProtocolException(TProtocolException.MISSING_REQUIRED_FIELD, "Required field 'req_enum_value' was not present! Struct: " + toString());
    }
    if (req_str_value == null) {
      throw new TProtocolException(TProtocolException.MISSING_REQUIRED_FIELD, "Required field 'req_str_value' was not present! Struct: " + toString());
    }
  }

}
