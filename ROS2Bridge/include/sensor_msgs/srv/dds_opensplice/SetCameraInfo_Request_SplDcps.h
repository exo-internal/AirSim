#ifndef SETCAMERAINFO_REQUEST_SPLTYPES_H
#define SETCAMERAINFO_REQUEST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_SetCameraInfo_Request_.h"
#include "sensor_msgs/msg/dds_opensplice/CameraInfo_SplDcps.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __SetCameraInfo_Request__sensor_msgs__load (c_base base);

extern c_metaObject __SetCameraInfo_Request__sensor_msgs_srv__load (c_base base);

extern c_metaObject __SetCameraInfo_Request__sensor_msgs_srv_dds___load (c_base base);

extern const char *sensor_msgs_srv_dds__SetCameraInfo_Request__metaDescriptor[];
extern const int sensor_msgs_srv_dds__SetCameraInfo_Request__metaDescriptorArrLength;
extern const int sensor_msgs_srv_dds__SetCameraInfo_Request__metaDescriptorLength;
extern c_metaObject __sensor_msgs_srv_dds__SetCameraInfo_Request___load (c_base base);
struct _sensor_msgs_srv_dds__SetCameraInfo_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_srv_dds__SetCameraInfo_Request___copyIn(c_base base, const struct sensor_msgs::srv::dds_::SetCameraInfo_Request_ *from, struct _sensor_msgs_srv_dds__SetCameraInfo_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_srv_dds__SetCameraInfo_Request___copyOut(const void *_from, void *_to);
struct _sensor_msgs_srv_dds__SetCameraInfo_Request_ {
    struct _sensor_msgs_msg_dds__CameraInfo_ camera_info_;
};

#undef OS_API
#endif
