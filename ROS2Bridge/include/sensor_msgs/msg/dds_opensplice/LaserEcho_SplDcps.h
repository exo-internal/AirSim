#ifndef LASERECHO_SPLTYPES_H
#define LASERECHO_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_LaserEcho_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __LaserEcho__sensor_msgs__load (c_base base);

extern c_metaObject __LaserEcho__sensor_msgs_msg__load (c_base base);

extern c_metaObject __LaserEcho__sensor_msgs_msg_dds___load (c_base base);

extern const char *sensor_msgs_msg_dds__LaserEcho__metaDescriptor[];
extern const int sensor_msgs_msg_dds__LaserEcho__metaDescriptorArrLength;
extern const int sensor_msgs_msg_dds__LaserEcho__metaDescriptorLength;
extern c_metaObject __sensor_msgs_msg_dds__LaserEcho___load (c_base base);
struct _sensor_msgs_msg_dds__LaserEcho_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_msg_dds__LaserEcho___copyIn(c_base base, const struct sensor_msgs::msg::dds_::LaserEcho_ *from, struct _sensor_msgs_msg_dds__LaserEcho_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_msg_dds__LaserEcho___copyOut(const void *_from, void *_to);
struct _sensor_msgs_msg_dds__LaserEcho_ {
    c_sequence echoes_;
};

#undef OS_API
#endif
