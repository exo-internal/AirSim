#ifndef SAMPLE_SETCAMERAINFO_REQUEST_SPLTYPES_H
#define SAMPLE_SETCAMERAINFO_REQUEST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Sample_SetCameraInfo_Request_.h"
#include "sensor_msgs/srv/dds_opensplice/SetCameraInfo_Request_SplDcps.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Sample_SetCameraInfo_Request__sensor_msgs__load (c_base base);

extern c_metaObject __Sample_SetCameraInfo_Request__sensor_msgs_srv__load (c_base base);

extern c_metaObject __Sample_SetCameraInfo_Request__sensor_msgs_srv_dds___load (c_base base);

extern const char *sensor_msgs_srv_dds__Sample_SetCameraInfo_Request__metaDescriptor[];
extern const int sensor_msgs_srv_dds__Sample_SetCameraInfo_Request__metaDescriptorArrLength;
extern const int sensor_msgs_srv_dds__Sample_SetCameraInfo_Request__metaDescriptorLength;
extern c_metaObject __sensor_msgs_srv_dds__Sample_SetCameraInfo_Request___load (c_base base);
struct _sensor_msgs_srv_dds__Sample_SetCameraInfo_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_srv_dds__Sample_SetCameraInfo_Request___copyIn(c_base base, const struct sensor_msgs::srv::dds_::Sample_SetCameraInfo_Request_ *from, struct _sensor_msgs_srv_dds__Sample_SetCameraInfo_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_srv_dds__Sample_SetCameraInfo_Request___copyOut(const void *_from, void *_to);
struct _sensor_msgs_srv_dds__Sample_SetCameraInfo_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _sensor_msgs_srv_dds__SetCameraInfo_Request_ request_;
};

#undef OS_API
#endif
