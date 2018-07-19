#ifndef POINTFIELD_SPLTYPES_H
#define POINTFIELD_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_PointField_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __PointField__sensor_msgs__load (c_base base);

extern c_metaObject __PointField__sensor_msgs_msg__load (c_base base);

extern c_metaObject __PointField__sensor_msgs_msg_dds___load (c_base base);

extern const char *sensor_msgs_msg_dds__PointField__metaDescriptor[];
extern const int sensor_msgs_msg_dds__PointField__metaDescriptorArrLength;
extern const int sensor_msgs_msg_dds__PointField__metaDescriptorLength;
extern c_metaObject __sensor_msgs_msg_dds__PointField___load (c_base base);
struct _sensor_msgs_msg_dds__PointField_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_msg_dds__PointField___copyIn(c_base base, const struct sensor_msgs::msg::dds_::PointField_ *from, struct _sensor_msgs_msg_dds__PointField_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_msg_dds__PointField___copyOut(const void *_from, void *_to);
struct _sensor_msgs_msg_dds__PointField_ {
    c_string name_;
    c_ulong offset_;
    c_octet datatype_;
    c_ulong count_;
};

#undef OS_API
#endif
