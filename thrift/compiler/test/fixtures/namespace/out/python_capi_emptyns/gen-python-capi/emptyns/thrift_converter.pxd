
#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#


cdef extern from "thrift/compiler/test/fixtures/namespace/gen-cpp2/emptyns_types.h":
    cdef cppclass cFoo "::cpp2::Foo":
        cFoo()

cdef cFoo Foo_convert_to_cpp(object inst) except*
cdef object Foo_from_cpp(const cFoo& c_struct)
