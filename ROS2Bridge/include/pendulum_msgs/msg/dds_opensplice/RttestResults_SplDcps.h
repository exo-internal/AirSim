#ifndef RTTESTRESULTS_SPLTYPES_H
#define RTTESTRESULTS_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_RttestResults_.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_SplDcps.h"
#include "pendulum_msgs/msg/dds_opensplice/JointCommand_SplDcps.h"
#include "pendulum_msgs/msg/dds_opensplice/JointState_SplDcps.h"

#include "pendulum_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __RttestResults__pendulum_msgs__load (c_base base);

extern c_metaObject __RttestResults__pendulum_msgs_msg__load (c_base base);

extern c_metaObject __RttestResults__pendulum_msgs_msg_dds___load (c_base base);

extern const char *pendulum_msgs_msg_dds__RttestResults__metaDescriptor[];
extern const int pendulum_msgs_msg_dds__RttestResults__metaDescriptorArrLength;
extern const int pendulum_msgs_msg_dds__RttestResults__metaDescriptorLength;
extern c_metaObject __pendulum_msgs_msg_dds__RttestResults___load (c_base base);
struct _pendulum_msgs_msg_dds__RttestResults_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs v_copyin_result __pendulum_msgs_msg_dds__RttestResults___copyIn(c_base base, const struct pendulum_msgs::msg::dds_::RttestResults_ *from, struct _pendulum_msgs_msg_dds__RttestResults_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs void __pendulum_msgs_msg_dds__RttestResults___copyOut(const void *_from, void *_to);
struct _pendulum_msgs_msg_dds__RttestResults_ {
    struct _builtin_interfaces_msg_dds__Time_ stamp_;
    struct _pendulum_msgs_msg_dds__JointCommand_ command_;
    struct _pendulum_msgs_msg_dds__JointState_ state_;
    c_ulonglong cur_latency_;
    c_double mean_latency_;
    c_ulonglong min_latency_;
    c_ulonglong max_latency_;
    c_ulonglong minor_pagefaults_;
    c_ulonglong major_pagefaults_;
};

#undef OS_API
#endif
