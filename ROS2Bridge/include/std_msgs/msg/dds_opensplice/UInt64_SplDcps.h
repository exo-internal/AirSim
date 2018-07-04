#ifndef UINT64_SPLTYPES_H
#define UINT64_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_UInt64_.h"
#include "std_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __UInt64__std_msgs__load (c_base base);

extern c_metaObject __UInt64__std_msgs_msg__load (c_base base);

extern c_metaObject __UInt64__std_msgs_msg_dds___load (c_base base);

extern const char *std_msgs_msg_dds__UInt64__metaDescriptor[];
extern const int std_msgs_msg_dds__UInt64__metaDescriptorArrLength;
extern const int std_msgs_msg_dds__UInt64__metaDescriptorLength;
extern c_metaObject __std_msgs_msg_dds__UInt64___load (c_base base);
struct _std_msgs_msg_dds__UInt64_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs v_copyin_result __std_msgs_msg_dds__UInt64___copyIn(c_base base, const struct std_msgs::msg::dds_::UInt64_ *from, struct _std_msgs_msg_dds__UInt64_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs void __std_msgs_msg_dds__UInt64___copyOut(const void *_from, void *_to);
struct _std_msgs_msg_dds__UInt64_ {
    c_ulonglong data_;
};

#undef OS_API
#endif
