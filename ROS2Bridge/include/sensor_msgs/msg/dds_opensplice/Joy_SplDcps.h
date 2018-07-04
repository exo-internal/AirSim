#ifndef JOY_SPLTYPES_H
#define JOY_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Joy_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Joy__sensor_msgs__load (c_base base);

extern c_metaObject __Joy__sensor_msgs_msg__load (c_base base);

extern c_metaObject __Joy__sensor_msgs_msg_dds___load (c_base base);

extern const char *sensor_msgs_msg_dds__Joy__metaDescriptor[];
extern const int sensor_msgs_msg_dds__Joy__metaDescriptorArrLength;
extern const int sensor_msgs_msg_dds__Joy__metaDescriptorLength;
extern c_metaObject __sensor_msgs_msg_dds__Joy___load (c_base base);
struct _sensor_msgs_msg_dds__Joy_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_msg_dds__Joy___copyIn(c_base base, const struct sensor_msgs::msg::dds_::Joy_ *from, struct _sensor_msgs_msg_dds__Joy_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_msg_dds__Joy___copyOut(const void *_from, void *_to);
struct _sensor_msgs_msg_dds__Joy_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_sequence axes_;
    c_sequence buttons_;
};

#undef OS_API
#endif
