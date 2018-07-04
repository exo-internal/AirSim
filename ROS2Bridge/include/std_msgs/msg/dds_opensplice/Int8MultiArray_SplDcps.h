#ifndef INT8MULTIARRAY_SPLTYPES_H
#define INT8MULTIARRAY_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Int8MultiArray_.h"
#include "std_msgs/msg/dds_opensplice/MultiArrayLayout_SplDcps.h"

#include "std_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Int8MultiArray__std_msgs__load (c_base base);

extern c_metaObject __Int8MultiArray__std_msgs_msg__load (c_base base);

extern c_metaObject __Int8MultiArray__std_msgs_msg_dds___load (c_base base);

extern const char *std_msgs_msg_dds__Int8MultiArray__metaDescriptor[];
extern const int std_msgs_msg_dds__Int8MultiArray__metaDescriptorArrLength;
extern const int std_msgs_msg_dds__Int8MultiArray__metaDescriptorLength;
extern c_metaObject __std_msgs_msg_dds__Int8MultiArray___load (c_base base);
struct _std_msgs_msg_dds__Int8MultiArray_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs v_copyin_result __std_msgs_msg_dds__Int8MultiArray___copyIn(c_base base, const struct std_msgs::msg::dds_::Int8MultiArray_ *from, struct _std_msgs_msg_dds__Int8MultiArray_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs void __std_msgs_msg_dds__Int8MultiArray___copyOut(const void *_from, void *_to);
struct _std_msgs_msg_dds__Int8MultiArray_ {
    struct _std_msgs_msg_dds__MultiArrayLayout_ layout_;
    c_sequence data_;
};

#undef OS_API
#endif
