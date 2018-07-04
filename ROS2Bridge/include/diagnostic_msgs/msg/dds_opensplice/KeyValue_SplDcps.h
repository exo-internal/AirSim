#ifndef KEYVALUE_SPLTYPES_H
#define KEYVALUE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_KeyValue_.h"
#include "diagnostic_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __KeyValue__diagnostic_msgs__load (c_base base);

extern c_metaObject __KeyValue__diagnostic_msgs_msg__load (c_base base);

extern c_metaObject __KeyValue__diagnostic_msgs_msg_dds___load (c_base base);

extern const char *diagnostic_msgs_msg_dds__KeyValue__metaDescriptor[];
extern const int diagnostic_msgs_msg_dds__KeyValue__metaDescriptorArrLength;
extern const int diagnostic_msgs_msg_dds__KeyValue__metaDescriptorLength;
extern c_metaObject __diagnostic_msgs_msg_dds__KeyValue___load (c_base base);
struct _diagnostic_msgs_msg_dds__KeyValue_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs v_copyin_result __diagnostic_msgs_msg_dds__KeyValue___copyIn(c_base base, const struct diagnostic_msgs::msg::dds_::KeyValue_ *from, struct _diagnostic_msgs_msg_dds__KeyValue_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs void __diagnostic_msgs_msg_dds__KeyValue___copyOut(const void *_from, void *_to);
struct _diagnostic_msgs_msg_dds__KeyValue_ {
    c_string key_;
    c_string value_;
};

#undef OS_API
#endif
