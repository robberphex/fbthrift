<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

namespace fixtures\enums;

/**
 * Original thrift enum:-
 * Metasyntactic
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/enums/Metasyntactic'))>>
enum Metasyntactic: int {
  FOO = 1;
  BAR = 2;
  BAZ = 3;
  BAX = 4;
  Unspecified = 0;
}

class Metasyntactic_TEnumStaticMetadata implements \IThriftEnumStaticMetadata {
  public static function getEnumMetadata()[]: \tmeta_ThriftEnum {
    return \tmeta_ThriftEnum::fromShape(
      shape(
        "name" => "module.Metasyntactic",
        "elements" => dict[
          1 => "FOO",
          2 => "BAR",
          3 => "BAZ",
          4 => "BAX",
          0 => "Unspecified",
        ],
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TEnumAnnotations {
    return shape(
      'enum' => dict[],
      'constants' => dict[
      ],
    );
  }
}

/**
 * Original thrift enum:-
 * MyEnum1
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/enums/MyEnum1'))>>
enum MyEnum1: int {
  ME1_1 = 1;
  ME1_2 = 2;
  ME1_3 = 3;
  ME1_5 = 5;
  ME1_6 = 6;
  ME1_0 = 0;
}

class MyEnum1_TEnumStaticMetadata implements \IThriftEnumStaticMetadata {
  public static function getEnumMetadata()[]: \tmeta_ThriftEnum {
    return \tmeta_ThriftEnum::fromShape(
      shape(
        "name" => "module.MyEnum1",
        "elements" => dict[
          1 => "ME1_1",
          2 => "ME1_2",
          3 => "ME1_3",
          5 => "ME1_5",
          6 => "ME1_6",
          0 => "ME1_0",
        ],
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TEnumAnnotations {
    return shape(
      'enum' => dict[
        '\thrift\annotation\GenDefaultEnumValue' => \thrift\annotation\GenDefaultEnumValue::fromShape(
          shape(
            "name" => "ME1_0",
          )
        ),
      ],
      'constants' => dict[
      ],
    );
  }
}

/**
 * Original thrift enum:-
 * MyEnum2
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/enums/MyEnum2'))>>
enum MyEnum2: int {
  ME2_0 = 0;
  ME2_1 = 1;
  ME2_2 = 2;
}

class MyEnum2_TEnumStaticMetadata implements \IThriftEnumStaticMetadata {
  public static function getEnumMetadata()[]: \tmeta_ThriftEnum {
    return \tmeta_ThriftEnum::fromShape(
      shape(
        "name" => "module.MyEnum2",
        "elements" => dict[
          0 => "ME2_0",
          1 => "ME2_1",
          2 => "ME2_2",
        ],
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TEnumAnnotations {
    return shape(
      'enum' => dict[
        '\thrift\annotation\GenDefaultEnumValue' => \thrift\annotation\GenDefaultEnumValue::fromShape(
          shape(
          )
        ),
      ],
      'constants' => dict[
      ],
    );
  }
}

/**
 * Original thrift enum:-
 * MyEnum3
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/enums/MyEnum3'))>>
enum MyEnum3: int {
  ME3_0 = 0;
  ME3_1 = 1;
  ME3_N2 = -2;
  ME3_N1 = -1;
  ME3_9 = 9;
  ME3_10 = 10;
}

class MyEnum3_TEnumStaticMetadata implements \IThriftEnumStaticMetadata {
  public static function getEnumMetadata()[]: \tmeta_ThriftEnum {
    return \tmeta_ThriftEnum::fromShape(
      shape(
        "name" => "module.MyEnum3",
        "elements" => dict[
          0 => "ME3_0",
          1 => "ME3_1",
          -2 => "ME3_N2",
          -1 => "ME3_N1",
          9 => "ME3_9",
          10 => "ME3_10",
        ],
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TEnumAnnotations {
    return shape(
      'enum' => dict[],
      'constants' => dict[
      ],
    );
  }
}

/**
 * Original thrift enum:-
 * MyEnum4
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/enums/MyEnum4'))>>
enum MyEnum4: int {
  ME4_A = 2147483645;
  ME4_B = 2147483646;
  ME4_C = 2147483647;
  ME4_D = -2147483648;
  Unspecified = 0;
}

class MyEnum4_TEnumStaticMetadata implements \IThriftEnumStaticMetadata {
  public static function getEnumMetadata()[]: \tmeta_ThriftEnum {
    return \tmeta_ThriftEnum::fromShape(
      shape(
        "name" => "module.MyEnum4",
        "elements" => dict[
          2147483645 => "ME4_A",
          2147483646 => "ME4_B",
          2147483647 => "ME4_C",
          -2147483648 => "ME4_D",
          0 => "Unspecified",
        ],
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TEnumAnnotations {
    return shape(
      'enum' => dict[],
      'constants' => dict[
      ],
    );
  }
}

/**
 * Original thrift enum:-
 * MyBitmaskEnum1
 */
final class MyBitmaskEnum1 extends \Flags {
  const int   ONE = 1;
  const int   TWO = 2;
  const int   FOUR = 4;
  const int   Unspecified = 0;
}

class MyBitmaskEnum1_TEnumStaticMetadata implements \IThriftEnumStaticMetadata {
  public static function getEnumMetadata()[]: \tmeta_ThriftEnum {
    return \tmeta_ThriftEnum::fromShape(
      shape(
        "name" => "module.MyBitmaskEnum1",
        "elements" => dict[
          1 => "ONE",
          2 => "TWO",
          4 => "FOUR",
          0 => "Unspecified",
        ],
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TEnumAnnotations {
    return shape(
      'enum' => dict[],
      'constants' => dict[
      ],
    );
  }
}

/**
 * Original thrift enum:-
 * MyBitmaskEnum2
 */
final class MyBitmaskEnum2 extends \Flags {
  const int   ONE = 1;
  const int   TWO = 2;
  const int   FOUR = 4;
  const int   Unspecified = 0;
}

class MyBitmaskEnum2_TEnumStaticMetadata implements \IThriftEnumStaticMetadata {
  public static function getEnumMetadata()[]: \tmeta_ThriftEnum {
    return \tmeta_ThriftEnum::fromShape(
      shape(
        "name" => "module.MyBitmaskEnum2",
        "elements" => dict[
          1 => "ONE",
          2 => "TWO",
          4 => "FOUR",
          0 => "Unspecified",
        ],
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TEnumAnnotations {
    return shape(
      'enum' => dict[
        '\thrift\annotation\BitmaskEnum' => \thrift\annotation\BitmaskEnum::fromShape(
          shape(
          )
        ),
      ],
      'constants' => dict[
      ],
    );
  }
}

/**
 * Original thrift struct:-
 * SomeStruct
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/enums/SomeStruct'))>>
class SomeStruct implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'reasonable',
      'type' => \TType::I32,
      'enum' => \fixtures\enums\Metasyntactic::class,
    ),
    2 => shape(
      'var' => 'fine',
      'type' => \TType::I32,
      'enum' => \fixtures\enums\Metasyntactic::class,
    ),
    3 => shape(
      'var' => 'questionable',
      'type' => \TType::I32,
      'enum' => \fixtures\enums\Metasyntactic::class,
    ),
    4 => shape(
      'var' => 'tags',
      'type' => \TType::SET,
      'etype' => \TType::I32,
      'elem' => shape(
        'type' => \TType::I32,
      ),
      'format' => 'collection',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'reasonable' => 1,
    'fine' => 2,
    'questionable' => 3,
    'tags' => 4,
  ];

  const type TConstructorShape = shape(
    ?'reasonable' => ?\fixtures\enums\Metasyntactic,
    ?'fine' => ?\fixtures\enums\Metasyntactic,
    ?'questionable' => ?\fixtures\enums\Metasyntactic,
    ?'tags' => ?Set<int>,
  );

  const type TShape = shape(
    ?'reasonable' => ?\fixtures\enums\Metasyntactic,
    ?'fine' => ?\fixtures\enums\Metasyntactic,
    ?'questionable' => ?\fixtures\enums\Metasyntactic,
    'tags' => dict<int, bool>,
    ...
  );
  const int STRUCTURAL_ID = 8159017183734005742;
  /**
   * Original thrift field:-
   * 1: enum module.Metasyntactic reasonable
   */
  public ?\fixtures\enums\Metasyntactic $reasonable;
  /**
   * Original thrift field:-
   * 2: enum module.Metasyntactic fine
   */
  public ?\fixtures\enums\Metasyntactic $fine;
  /**
   * Original thrift field:-
   * 3: enum module.Metasyntactic questionable
   */
  public ?\fixtures\enums\Metasyntactic $questionable;
  /**
   * Original thrift field:-
   * 4: set<i32> tags
   */
  public Set<int> $tags;

  public function __construct(?\fixtures\enums\Metasyntactic $reasonable = null, ?\fixtures\enums\Metasyntactic $fine = null, ?\fixtures\enums\Metasyntactic $questionable = null, ?Set<int> $tags = null)[] {
    $this->reasonable = $reasonable ?? \fixtures\enums\Metasyntactic::FOO;
    $this->fine = $fine ?? \fixtures\enums\Metasyntactic::BAR;
    $this->questionable = $questionable ?? \fixtures\enums\Metasyntactic::coerce(-1);
    $this->tags = $tags ?? Set {
    };
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'reasonable'),
      Shapes::idx($shape, 'fine'),
      Shapes::idx($shape, 'questionable'),
      Shapes::idx($shape, 'tags'),
    );
  }

  public function getName()[]: string {
    return 'SomeStruct';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.SomeStruct",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_enum" => \tmeta_ThriftEnumType::fromShape(
                    shape(
                      "name" => "module.Metasyntactic",
                    )
                  ),
                )
              ),
              "name" => "reasonable",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_enum" => \tmeta_ThriftEnumType::fromShape(
                    shape(
                      "name" => "module.Metasyntactic",
                    )
                  ),
                )
              ),
              "name" => "fine",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_enum" => \tmeta_ThriftEnumType::fromShape(
                    shape(
                      "name" => "module.Metasyntactic",
                    )
                  ),
                )
              ),
              "name" => "questionable",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 4,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_set" => \tmeta_ThriftSetType::fromShape(
                    shape(
                      "valueType" => \tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "tags",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'reasonable'),
      Shapes::idx($shape, 'fine'),
      Shapes::idx($shape, 'questionable'),
      new Set(Keyset\keys($shape['tags'])),
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'reasonable' => $this->reasonable,
      'fine' => $this->fine,
      'questionable' => $this->questionable,
      'tags' => ThriftUtil::toDArray(Dict\fill_keys($this->tags->toValuesArray(), true), static::class),
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'reasonable') !== null) {
      $this->reasonable = \fixtures\enums\Metasyntactic::coerce(HH\FIXME\UNSAFE_CAST<mixed, \fixtures\enums\Metasyntactic>($parsed['reasonable']));
    }
    if (idx($parsed, 'fine') !== null) {
      $this->fine = \fixtures\enums\Metasyntactic::coerce(HH\FIXME\UNSAFE_CAST<mixed, \fixtures\enums\Metasyntactic>($parsed['fine']));
    }
    if (idx($parsed, 'questionable') !== null) {
      $this->questionable = \fixtures\enums\Metasyntactic::coerce(HH\FIXME\UNSAFE_CAST<mixed, \fixtures\enums\Metasyntactic>($parsed['questionable']));
    }
    if (idx($parsed, 'tags') !== null) {
      $_json3 = HH\FIXME\UNSAFE_CAST<mixed, Set<int>>($parsed['tags']);
      $_container4 = Set {};
      foreach($_json3 as $_key1 => $_value2) {
        $_elem5 = 0;
        $_tmp6 = (int)$_value2;
        if ($_tmp6 > 0x7fffffff) {
          throw new \TProtocolException("number exceeds limit in field");
        } else {
          $_elem5 = (int)$_tmp6;
        }
        $_container4->add($_elem5);
      }
      $this->tags = $_container4;
    }
  }

}

/**
 * Original thrift struct:-
 * MyStruct
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/enums/MyStruct'))>>
class MyStruct implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'me2_3',
      'type' => \TType::I32,
      'enum' => \fixtures\enums\MyEnum2::class,
    ),
    2 => shape(
      'var' => 'me3_n3',
      'type' => \TType::I32,
      'enum' => \fixtures\enums\MyEnum3::class,
    ),
    4 => shape(
      'var' => 'me1_t1',
      'type' => \TType::I32,
      'enum' => \fixtures\enums\MyEnum1::class,
    ),
    6 => shape(
      'var' => 'me1_t2',
      'type' => \TType::I32,
      'enum' => \fixtures\enums\MyEnum1::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'me2_3' => 1,
    'me3_n3' => 2,
    'me1_t1' => 4,
    'me1_t2' => 6,
  ];

  const type TConstructorShape = shape(
    ?'me2_3' => ?\fixtures\enums\MyEnum2,
    ?'me3_n3' => ?\fixtures\enums\MyEnum3,
    ?'me1_t1' => ?\fixtures\enums\MyEnum1,
    ?'me1_t2' => ?\fixtures\enums\MyEnum1,
  );

  const type TShape = shape(
    ?'me2_3' => ?\fixtures\enums\MyEnum2,
    ?'me3_n3' => ?\fixtures\enums\MyEnum3,
    ?'me1_t1' => ?\fixtures\enums\MyEnum1,
    ?'me1_t2' => ?\fixtures\enums\MyEnum1,
    ...
  );
  const int STRUCTURAL_ID = 8234221749727407461;
  /**
   * Original thrift field:-
   * 1: enum module.MyEnum2 me2_3
   */
  public ?\fixtures\enums\MyEnum2 $me2_3;
  /**
   * Original thrift field:-
   * 2: enum module.MyEnum3 me3_n3
   */
  public ?\fixtures\enums\MyEnum3 $me3_n3;
  /**
   * Original thrift field:-
   * 4: enum module.MyEnum1 me1_t1
   */
  public ?\fixtures\enums\MyEnum1 $me1_t1;
  /**
   * Original thrift field:-
   * 6: enum module.MyEnum1 me1_t2
   */
  public ?\fixtures\enums\MyEnum1 $me1_t2;

  public function __construct(?\fixtures\enums\MyEnum2 $me2_3 = null, ?\fixtures\enums\MyEnum3 $me3_n3 = null, ?\fixtures\enums\MyEnum1 $me1_t1 = null, ?\fixtures\enums\MyEnum1 $me1_t2 = null)[] {
    $this->me2_3 = $me2_3 ?? \fixtures\enums\MyEnum2::coerce(3);
    $this->me3_n3 = $me3_n3 ?? \fixtures\enums\MyEnum3::coerce(-3);
    $this->me1_t1 = $me1_t1 ?? \fixtures\enums\MyEnum1::ME1_1;
    $this->me1_t2 = $me1_t2 ?? \fixtures\enums\MyEnum1::ME1_1;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'me2_3'),
      Shapes::idx($shape, 'me3_n3'),
      Shapes::idx($shape, 'me1_t1'),
      Shapes::idx($shape, 'me1_t2'),
    );
  }

  public function getName()[]: string {
    return 'MyStruct';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.MyStruct",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_enum" => \tmeta_ThriftEnumType::fromShape(
                    shape(
                      "name" => "module.MyEnum2",
                    )
                  ),
                )
              ),
              "name" => "me2_3",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_enum" => \tmeta_ThriftEnumType::fromShape(
                    shape(
                      "name" => "module.MyEnum3",
                    )
                  ),
                )
              ),
              "name" => "me3_n3",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 4,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_enum" => \tmeta_ThriftEnumType::fromShape(
                    shape(
                      "name" => "module.MyEnum1",
                    )
                  ),
                )
              ),
              "name" => "me1_t1",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 6,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_enum" => \tmeta_ThriftEnumType::fromShape(
                    shape(
                      "name" => "module.MyEnum1",
                    )
                  ),
                )
              ),
              "name" => "me1_t2",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
        'me2_3' => shape(
          'field' => dict[],
          'type' => dict[
            '\thrift\annotation\GenDefaultEnumValue' => \thrift\annotation\GenDefaultEnumValue::fromShape(
              shape(
              )
            ),
          ],
        ),
        'me1_t1' => shape(
          'field' => dict[],
          'type' => dict[
            '\thrift\annotation\GenDefaultEnumValue' => \thrift\annotation\GenDefaultEnumValue::fromShape(
              shape(
                "name" => "ME1_0",
              )
            ),
          ],
        ),
        'me1_t2' => shape(
          'field' => dict[],
          'type' => dict[
            '\thrift\annotation\GenDefaultEnumValue' => \thrift\annotation\GenDefaultEnumValue::fromShape(
              shape(
                "name" => "ME1_0",
              )
            ),
          ],
        ),
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'me2_3'),
      Shapes::idx($shape, 'me3_n3'),
      Shapes::idx($shape, 'me1_t1'),
      Shapes::idx($shape, 'me1_t2'),
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'me2_3' => $this->me2_3,
      'me3_n3' => $this->me3_n3,
      'me1_t1' => $this->me1_t1,
      'me1_t2' => $this->me1_t2,
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'me2_3') !== null) {
      $this->me2_3 = \fixtures\enums\MyEnum2::coerce(HH\FIXME\UNSAFE_CAST<mixed, \fixtures\enums\MyEnum2>($parsed['me2_3']));
    }
    if (idx($parsed, 'me3_n3') !== null) {
      $this->me3_n3 = \fixtures\enums\MyEnum3::coerce(HH\FIXME\UNSAFE_CAST<mixed, \fixtures\enums\MyEnum3>($parsed['me3_n3']));
    }
    if (idx($parsed, 'me1_t1') !== null) {
      $this->me1_t1 = \fixtures\enums\MyEnum1::coerce(HH\FIXME\UNSAFE_CAST<mixed, \fixtures\enums\MyEnum1>($parsed['me1_t1']));
    }
    if (idx($parsed, 'me1_t2') !== null) {
      $this->me1_t2 = \fixtures\enums\MyEnum1::coerce(HH\FIXME\UNSAFE_CAST<mixed, \fixtures\enums\MyEnum1>($parsed['me1_t2']));
    }
  }

}

