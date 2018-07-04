#ifndef INTRAPROCESSMESSAGE_SPLTYPES_H
#define INTRAPROCESSMESSAGE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_IntraProcessMessage_.h"
#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __IntraProcessMessage__rcl_interfaces__load (c_base base);

extern c_metaObject __IntraProcessMessage__rcl_interfaces_msg__load (c_base base);

extern c_metaObject __IntraProcessMessage__rcl_interfaces_msg_dds___load (c_base base);

extern const char *rcl_interfaces_msg_dds__IntraProcessMessage__metaDescriptor[];
extern const int rcl_interfaces_msg_dds__IntraProcessMessage__metaDescriptorArrLength;
extern const int rcl_interfaces_msg_dds__IntraProcessMessage__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_msg_dds__IntraProcessMessage___load (c_base base);
struct _rcl_interfaces_msg_dds__IntraProcessMessage_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces v_copyin_result __rcl_interfaces_msg_dds__IntraProcessMessage___copyIn(c_base base, const struct rcl_interfaces::msg::dds_::IntraProcessMessage_ *from, struct _rcl_interfaces_msg_dds__IntraProcessMessage_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces void __rcl_interfaces_msg_dds__IntraProcessMessage___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_msg_dds__IntraProcessMessage_ {
    c_ulonglong publisher_id_;
    c_ulonglong message_sequence_;
};

#undef OS_API
#endif
