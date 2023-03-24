/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.lazy_constants;

import com.facebook.swift.codec.*;
import com.google.common.collect.*;
import java.util.*;

@SwiftGenerated
public final class Constants {
    private Constants() {}

    public static final int MY_INT = 1337;

    public static final String NAME = "Mark Zuckerberg";

    public static final List<Map<String, Integer>> STATES = ImmutableList.<Map<String, Integer>>builder()
        .add(ImmutableMap.<String, Integer>builder()
        .put("San Diego", 3211000)
        .put("Sacramento", 479600)
        .put("SF", 837400)
        .build())
        .add(ImmutableMap.<String, Integer>builder()
        .put("New York", 8406000)
        .put("Albany", 98400)
        .build())
        .build();

    public static final Set<String> CITIES = ImmutableSet.<String>builder()
        .add("New York")
        .add("Sacramento")
        .build();

    public static final double X = (double)1;

    public static final double Y = 1000000.0;

    public static final double Z = (double)1000000000;

    public static final Map<test.fixtures.lazy_constants.Company, Integer> CONST_ENUM_MAP = ImmutableMap.<test.fixtures.lazy_constants.Company, Integer>builder()
        .put(test.fixtures.lazy_constants.Company.FACEBOOK, 123)
        .put(test.fixtures.lazy_constants.Company.WHATSAPP, 2)
        .build();

    public static final test.fixtures.lazy_constants.Internship INSTAGRAM = new test.fixtures.lazy_constants.Internship.Builder().setWeeks(12).setTitle("Software Engineer").setEmployer(test.fixtures.lazy_constants.Company.INSTAGRAM).build();

    public static final List<test.fixtures.lazy_constants.Range> K_RANGES = ImmutableList.<test.fixtures.lazy_constants.Range>builder()
        .add(new test.fixtures.lazy_constants.Range.Builder().setMin(1).setMax(2).build())
        .add(new test.fixtures.lazy_constants.Range.Builder().setMin(5).setMax(6).build())
        .build();

    public static final List<test.fixtures.lazy_constants.Internship> INTERN_LIST = ImmutableList.<test.fixtures.lazy_constants.Internship>builder()
        .add(test.fixtures.lazy_constants.Constants.INSTAGRAM)
        .add(new test.fixtures.lazy_constants.Internship.Builder().setWeeks(10).setTitle("Sales Intern").setEmployer(test.fixtures.lazy_constants.Company.FACEBOOK).build())
        .build();

    public static final String APOSTROPHE = "'";

    public static final String TRIPLE_APOSTROPHE = "'''";

    public static final String QUOTATION_MARK = "\"";

    public static final String BACKSLASH = "\\";

    public static final String ESCAPED_A = "a";

    public static final Map<String, Integer> CHAR2ASCII = ImmutableMap.<String, Integer>builder()
        .put("'", 39)
        .put("\"", 34)
        .put("\\", 92)
        .put("a", 97)
        .build();
}
