#ifndef POINTCLOUD_SPLTYPES_H
#define POINTCLOUD_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_PointCloud_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Point32_SplDcps.h"
#include "sensor_msgs/msg/dds_opensplice/ChannelFloat32_SplDcps.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __PointCloud__sensor_msgs__load (c_base base);

extern c_metaObject __PointCloud__sensor_msgs_msg__load (c_base base);

extern c_metaObject __PointCloud__sensor_msgs_msg_dds___load (c_base base);

extern const char *sensor_msgs_msg_dds__PointCloud__metaDescriptor[];
extern const int sensor_msgs_msg_dds__PointCloud__metaDescriptorArrLength;
extern const int sensor_msgs_msg_dds__PointCloud__metaDescriptorLength;
extern c_metaObject __sensor_msgs_msg_dds__PointCloud___load (c_base base);
struct _sensor_msgs_msg_dds__PointCloud_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_msg_dds__PointCloud___copyIn(c_base base, const struct sensor_msgs::msg::dds_::PointCloud_ *from, struct _sensor_msgs_msg_dds__PointCloud_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_msg_dds__PointCloud___copyOut(const void *_from, void *_to);
struct _sensor_msgs_msg_dds__PointCloud_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_sequence points_;
    c_sequence channels_;
};

#undef OS_API
#endif
