#ifndef NESTED_SPLTYPES_H
#define NESTED_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Nested_.h"
#include "test_msgs/msg/dds_opensplice/Primitives_SplDcps.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Nested__test_msgs__load (c_base base);

extern c_metaObject __Nested__test_msgs_msg__load (c_base base);

extern c_metaObject __Nested__test_msgs_msg_dds___load (c_base base);

extern const char *test_msgs_msg_dds__Nested__metaDescriptor[];
extern const int test_msgs_msg_dds__Nested__metaDescriptorArrLength;
extern const int test_msgs_msg_dds__Nested__metaDescriptorLength;
extern c_metaObject __test_msgs_msg_dds__Nested___load (c_base base);
struct _test_msgs_msg_dds__Nested_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_msg_dds__Nested___copyIn(c_base base, const struct test_msgs::msg::dds_::Nested_ *from, struct _test_msgs_msg_dds__Nested_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_msg_dds__Nested___copyOut(const void *_from, void *_to);
struct _test_msgs_msg_dds__Nested_ {
    struct _test_msgs_msg_dds__Primitives_ primitive_values_;
};

#undef OS_API
#endif
