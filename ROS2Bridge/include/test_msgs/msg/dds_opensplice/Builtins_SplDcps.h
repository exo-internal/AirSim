#ifndef BUILTINS_SPLTYPES_H
#define BUILTINS_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Builtins_.h"
#include "builtin_interfaces/msg/dds_opensplice/Duration_SplDcps.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_SplDcps.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Builtins__test_msgs__load (c_base base);

extern c_metaObject __Builtins__test_msgs_msg__load (c_base base);

extern c_metaObject __Builtins__test_msgs_msg_dds___load (c_base base);

extern const char *test_msgs_msg_dds__Builtins__metaDescriptor[];
extern const int test_msgs_msg_dds__Builtins__metaDescriptorArrLength;
extern const int test_msgs_msg_dds__Builtins__metaDescriptorLength;
extern c_metaObject __test_msgs_msg_dds__Builtins___load (c_base base);
struct _test_msgs_msg_dds__Builtins_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_msg_dds__Builtins___copyIn(c_base base, const struct test_msgs::msg::dds_::Builtins_ *from, struct _test_msgs_msg_dds__Builtins_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_msg_dds__Builtins___copyOut(const void *_from, void *_to);
struct _test_msgs_msg_dds__Builtins_ {
    struct _builtin_interfaces_msg_dds__Duration_ duration_value_;
    struct _builtin_interfaces_msg_dds__Time_ time_value_;
};

#undef OS_API
#endif
