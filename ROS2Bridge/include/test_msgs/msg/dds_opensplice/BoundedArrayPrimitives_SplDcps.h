#ifndef BOUNDEDARRAYPRIMITIVES_SPLTYPES_H
#define BOUNDEDARRAYPRIMITIVES_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_BoundedArrayPrimitives_.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __BoundedArrayPrimitives__test_msgs__load (c_base base);

extern c_metaObject __BoundedArrayPrimitives__test_msgs_msg__load (c_base base);

extern c_metaObject __BoundedArrayPrimitives__test_msgs_msg_dds___load (c_base base);

extern const char *test_msgs_msg_dds__BoundedArrayPrimitives__metaDescriptor[];
extern const int test_msgs_msg_dds__BoundedArrayPrimitives__metaDescriptorArrLength;
extern const int test_msgs_msg_dds__BoundedArrayPrimitives__metaDescriptorLength;
extern c_metaObject __test_msgs_msg_dds__BoundedArrayPrimitives___load (c_base base);
struct _test_msgs_msg_dds__BoundedArrayPrimitives_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_msg_dds__BoundedArrayPrimitives___copyIn(c_base base, const struct test_msgs::msg::dds_::BoundedArrayPrimitives_ *from, struct _test_msgs_msg_dds__BoundedArrayPrimitives_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_msg_dds__BoundedArrayPrimitives___copyOut(const void *_from, void *_to);
struct _test_msgs_msg_dds__BoundedArrayPrimitives_ {
    c_sequence bool_values_;
    c_sequence byte_values_;
    c_sequence char_values_;
    c_sequence float32_values_;
    c_sequence float64_values_;
    c_sequence int8_values_;
    c_sequence uint8_values_;
    c_sequence int16_values_;
    c_sequence uint16_values_;
    c_sequence int32_values_;
    c_sequence uint32_values_;
    c_sequence int64_values_;
    c_sequence uint64_values_;
    c_sequence string_values_;
    c_long check_;
};

#undef OS_API
#endif
