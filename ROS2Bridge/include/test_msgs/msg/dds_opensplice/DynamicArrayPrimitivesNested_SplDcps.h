#ifndef DYNAMICARRAYPRIMITIVESNESTED_SPLTYPES_H
#define DYNAMICARRAYPRIMITIVESNESTED_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_DynamicArrayPrimitivesNested_.h"
#include "test_msgs/msg/dds_opensplice/DynamicArrayPrimitives_SplDcps.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __DynamicArrayPrimitivesNested__test_msgs__load (c_base base);

extern c_metaObject __DynamicArrayPrimitivesNested__test_msgs_msg__load (c_base base);

extern c_metaObject __DynamicArrayPrimitivesNested__test_msgs_msg_dds___load (c_base base);

extern const char *test_msgs_msg_dds__DynamicArrayPrimitivesNested__metaDescriptor[];
extern const int test_msgs_msg_dds__DynamicArrayPrimitivesNested__metaDescriptorArrLength;
extern const int test_msgs_msg_dds__DynamicArrayPrimitivesNested__metaDescriptorLength;
extern c_metaObject __test_msgs_msg_dds__DynamicArrayPrimitivesNested___load (c_base base);
struct _test_msgs_msg_dds__DynamicArrayPrimitivesNested_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_msg_dds__DynamicArrayPrimitivesNested___copyIn(c_base base, const struct test_msgs::msg::dds_::DynamicArrayPrimitivesNested_ *from, struct _test_msgs_msg_dds__DynamicArrayPrimitivesNested_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_msg_dds__DynamicArrayPrimitivesNested___copyOut(const void *_from, void *_to);
struct _test_msgs_msg_dds__DynamicArrayPrimitivesNested_ {
    c_sequence dynamic_array_primitive_values_;
};

#undef OS_API
#endif
