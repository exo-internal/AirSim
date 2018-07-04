#ifndef TRANSITION_SPLTYPES_H
#define TRANSITION_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Transition_.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Transition__lifecycle_msgs__load (c_base base);

extern c_metaObject __Transition__lifecycle_msgs_msg__load (c_base base);

extern c_metaObject __Transition__lifecycle_msgs_msg_dds___load (c_base base);

extern const char *lifecycle_msgs_msg_dds__Transition__metaDescriptor[];
extern const int lifecycle_msgs_msg_dds__Transition__metaDescriptorArrLength;
extern const int lifecycle_msgs_msg_dds__Transition__metaDescriptorLength;
extern c_metaObject __lifecycle_msgs_msg_dds__Transition___load (c_base base);
struct _lifecycle_msgs_msg_dds__Transition_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs v_copyin_result __lifecycle_msgs_msg_dds__Transition___copyIn(c_base base, const struct lifecycle_msgs::msg::dds_::Transition_ *from, struct _lifecycle_msgs_msg_dds__Transition_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs void __lifecycle_msgs_msg_dds__Transition___copyOut(const void *_from, void *_to);
struct _lifecycle_msgs_msg_dds__Transition_ {
    c_octet id_;
    c_string label_;
};

#undef OS_API
#endif
