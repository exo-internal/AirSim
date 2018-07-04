#ifndef TIMEREFERENCE_SPLTYPES_H
#define TIMEREFERENCE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_TimeReference_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_SplDcps.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __TimeReference__sensor_msgs__load (c_base base);

extern c_metaObject __TimeReference__sensor_msgs_msg__load (c_base base);

extern c_metaObject __TimeReference__sensor_msgs_msg_dds___load (c_base base);

extern const char *sensor_msgs_msg_dds__TimeReference__metaDescriptor[];
extern const int sensor_msgs_msg_dds__TimeReference__metaDescriptorArrLength;
extern const int sensor_msgs_msg_dds__TimeReference__metaDescriptorLength;
extern c_metaObject __sensor_msgs_msg_dds__TimeReference___load (c_base base);
struct _sensor_msgs_msg_dds__TimeReference_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_msg_dds__TimeReference___copyIn(c_base base, const struct sensor_msgs::msg::dds_::TimeReference_ *from, struct _sensor_msgs_msg_dds__TimeReference_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_msg_dds__TimeReference___copyOut(const void *_from, void *_to);
struct _sensor_msgs_msg_dds__TimeReference_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _builtin_interfaces_msg_dds__Time_ time_ref_;
    c_string source_;
};

#undef OS_API
#endif
