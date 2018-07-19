#ifndef CAMERAINFO_SPLTYPES_H
#define CAMERAINFO_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_CameraInfo_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "sensor_msgs/msg/dds_opensplice/RegionOfInterest_SplDcps.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __CameraInfo__sensor_msgs__load (c_base base);

extern c_metaObject __CameraInfo__sensor_msgs_msg__load (c_base base);

extern c_metaObject __CameraInfo__sensor_msgs_msg_dds___load (c_base base);

extern c_metaObject __sensor_msgs_msg_dds__sensor_msgs__CameraInfo__double_array_9__load (c_base base);
typedef c_double _sensor_msgs_msg_dds__sensor_msgs__CameraInfo__double_array_9[9];

extern c_metaObject __sensor_msgs_msg_dds__sensor_msgs__CameraInfo__double_array_12__load (c_base base);
typedef c_double _sensor_msgs_msg_dds__sensor_msgs__CameraInfo__double_array_12[12];

extern const char *sensor_msgs_msg_dds__CameraInfo__metaDescriptor[];
extern const int sensor_msgs_msg_dds__CameraInfo__metaDescriptorArrLength;
extern const int sensor_msgs_msg_dds__CameraInfo__metaDescriptorLength;
extern c_metaObject __sensor_msgs_msg_dds__CameraInfo___load (c_base base);
struct _sensor_msgs_msg_dds__CameraInfo_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_msg_dds__CameraInfo___copyIn(c_base base, const struct sensor_msgs::msg::dds_::CameraInfo_ *from, struct _sensor_msgs_msg_dds__CameraInfo_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_msg_dds__CameraInfo___copyOut(const void *_from, void *_to);
struct _sensor_msgs_msg_dds__CameraInfo_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_ulong height_;
    c_ulong width_;
    c_string distortion_model_;
    c_sequence d_;
    _sensor_msgs_msg_dds__sensor_msgs__CameraInfo__double_array_9 k_;
    _sensor_msgs_msg_dds__sensor_msgs__CameraInfo__double_array_9 r_;
    _sensor_msgs_msg_dds__sensor_msgs__CameraInfo__double_array_12 p_;
    c_ulong binning_x_;
    c_ulong binning_y_;
    struct _sensor_msgs_msg_dds__RegionOfInterest_ roi_;
};

#undef OS_API
#endif
