#ifndef ILLUMINANCE_SPLTYPES_H
#define ILLUMINANCE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Illuminance_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Illuminance__sensor_msgs__load (c_base base);

extern c_metaObject __Illuminance__sensor_msgs_msg__load (c_base base);

extern c_metaObject __Illuminance__sensor_msgs_msg_dds___load (c_base base);

extern const char *sensor_msgs_msg_dds__Illuminance__metaDescriptor[];
extern const int sensor_msgs_msg_dds__Illuminance__metaDescriptorArrLength;
extern const int sensor_msgs_msg_dds__Illuminance__metaDescriptorLength;
extern c_metaObject __sensor_msgs_msg_dds__Illuminance___load (c_base base);
struct _sensor_msgs_msg_dds__Illuminance_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_msg_dds__Illuminance___copyIn(c_base base, const struct sensor_msgs::msg::dds_::Illuminance_ *from, struct _sensor_msgs_msg_dds__Illuminance_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_msg_dds__Illuminance___copyOut(const void *_from, void *_to);
struct _sensor_msgs_msg_dds__Illuminance_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_double illuminance_;
    c_double variance_;
};

#undef OS_API
#endif
