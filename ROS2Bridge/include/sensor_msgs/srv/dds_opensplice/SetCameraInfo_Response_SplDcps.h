#ifndef SETCAMERAINFO_RESPONSE_SPLTYPES_H
#define SETCAMERAINFO_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_SetCameraInfo_Response_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __SetCameraInfo_Response__sensor_msgs__load (c_base base);

extern c_metaObject __SetCameraInfo_Response__sensor_msgs_srv__load (c_base base);

extern c_metaObject __SetCameraInfo_Response__sensor_msgs_srv_dds___load (c_base base);

extern const char *sensor_msgs_srv_dds__SetCameraInfo_Response__metaDescriptor[];
extern const int sensor_msgs_srv_dds__SetCameraInfo_Response__metaDescriptorArrLength;
extern const int sensor_msgs_srv_dds__SetCameraInfo_Response__metaDescriptorLength;
extern c_metaObject __sensor_msgs_srv_dds__SetCameraInfo_Response___load (c_base base);
struct _sensor_msgs_srv_dds__SetCameraInfo_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_srv_dds__SetCameraInfo_Response___copyIn(c_base base, const struct sensor_msgs::srv::dds_::SetCameraInfo_Response_ *from, struct _sensor_msgs_srv_dds__SetCameraInfo_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_srv_dds__SetCameraInfo_Response___copyOut(const void *_from, void *_to);
struct _sensor_msgs_srv_dds__SetCameraInfo_Response_ {
    c_bool success_;
    c_string status_message_;
};

#undef OS_API
#endif
