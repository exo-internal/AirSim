#ifndef RELATIVEHUMIDITY_SPLTYPES_H
#define RELATIVEHUMIDITY_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_RelativeHumidity_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __RelativeHumidity__sensor_msgs__load (c_base base);

extern c_metaObject __RelativeHumidity__sensor_msgs_msg__load (c_base base);

extern c_metaObject __RelativeHumidity__sensor_msgs_msg_dds___load (c_base base);

extern const char *sensor_msgs_msg_dds__RelativeHumidity__metaDescriptor[];
extern const int sensor_msgs_msg_dds__RelativeHumidity__metaDescriptorArrLength;
extern const int sensor_msgs_msg_dds__RelativeHumidity__metaDescriptorLength;
extern c_metaObject __sensor_msgs_msg_dds__RelativeHumidity___load (c_base base);
struct _sensor_msgs_msg_dds__RelativeHumidity_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_msg_dds__RelativeHumidity___copyIn(c_base base, const struct sensor_msgs::msg::dds_::RelativeHumidity_ *from, struct _sensor_msgs_msg_dds__RelativeHumidity_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_msg_dds__RelativeHumidity___copyOut(const void *_from, void *_to);
struct _sensor_msgs_msg_dds__RelativeHumidity_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_double relative_humidity_;
    c_double variance_;
};

#undef OS_API
#endif
