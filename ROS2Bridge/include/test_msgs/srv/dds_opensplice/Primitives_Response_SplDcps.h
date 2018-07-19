#ifndef PRIMITIVES_RESPONSE_SPLTYPES_H
#define PRIMITIVES_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Primitives_Response_.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Primitives_Response__test_msgs__load (c_base base);

extern c_metaObject __Primitives_Response__test_msgs_srv__load (c_base base);

extern c_metaObject __Primitives_Response__test_msgs_srv_dds___load (c_base base);

extern const char *test_msgs_srv_dds__Primitives_Response__metaDescriptor[];
extern const int test_msgs_srv_dds__Primitives_Response__metaDescriptorArrLength;
extern const int test_msgs_srv_dds__Primitives_Response__metaDescriptorLength;
extern c_metaObject __test_msgs_srv_dds__Primitives_Response___load (c_base base);
struct _test_msgs_srv_dds__Primitives_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_srv_dds__Primitives_Response___copyIn(c_base base, const struct test_msgs::srv::dds_::Primitives_Response_ *from, struct _test_msgs_srv_dds__Primitives_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_srv_dds__Primitives_Response___copyOut(const void *_from, void *_to);
struct _test_msgs_srv_dds__Primitives_Response_ {
    c_bool bool_value_;
    c_octet byte_value_;
    c_char char_value_;
    c_float float32_value_;
    c_double float64_value_;
    c_octet int8_value_;
    c_octet uint8_value_;
    c_short int16_value_;
    c_ushort uint16_value_;
    c_long int32_value_;
    c_ulong uint32_value_;
    c_longlong int64_value_;
    c_ulonglong uint64_value_;
    c_string string_value_;
};

#undef OS_API
#endif
