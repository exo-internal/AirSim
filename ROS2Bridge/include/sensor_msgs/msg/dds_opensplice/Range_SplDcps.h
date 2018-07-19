#ifndef RANGE_SPLTYPES_H
#define RANGE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Range_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Range__sensor_msgs__load (c_base base);

extern c_metaObject __Range__sensor_msgs_msg__load (c_base base);

extern c_metaObject __Range__sensor_msgs_msg_dds___load (c_base base);

extern const char *sensor_msgs_msg_dds__Range__metaDescriptor[];
extern const int sensor_msgs_msg_dds__Range__metaDescriptorArrLength;
extern const int sensor_msgs_msg_dds__Range__metaDescriptorLength;
extern c_metaObject __sensor_msgs_msg_dds__Range___load (c_base base);
struct _sensor_msgs_msg_dds__Range_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_msg_dds__Range___copyIn(c_base base, const struct sensor_msgs::msg::dds_::Range_ *from, struct _sensor_msgs_msg_dds__Range_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_msg_dds__Range___copyOut(const void *_from, void *_to);
struct _sensor_msgs_msg_dds__Range_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_octet radiation_type_;
    c_float field_of_view_;
    c_float min_range_;
    c_float max_range_;
    c_float range_;
};

#undef OS_API
#endif
