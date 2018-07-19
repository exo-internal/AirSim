#ifndef REGIONOFINTEREST_SPLTYPES_H
#define REGIONOFINTEREST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_RegionOfInterest_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __RegionOfInterest__sensor_msgs__load (c_base base);

extern c_metaObject __RegionOfInterest__sensor_msgs_msg__load (c_base base);

extern c_metaObject __RegionOfInterest__sensor_msgs_msg_dds___load (c_base base);

extern const char *sensor_msgs_msg_dds__RegionOfInterest__metaDescriptor[];
extern const int sensor_msgs_msg_dds__RegionOfInterest__metaDescriptorArrLength;
extern const int sensor_msgs_msg_dds__RegionOfInterest__metaDescriptorLength;
extern c_metaObject __sensor_msgs_msg_dds__RegionOfInterest___load (c_base base);
struct _sensor_msgs_msg_dds__RegionOfInterest_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_msg_dds__RegionOfInterest___copyIn(c_base base, const struct sensor_msgs::msg::dds_::RegionOfInterest_ *from, struct _sensor_msgs_msg_dds__RegionOfInterest_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_msg_dds__RegionOfInterest___copyOut(const void *_from, void *_to);
struct _sensor_msgs_msg_dds__RegionOfInterest_ {
    c_ulong x_offset_;
    c_ulong y_offset_;
    c_ulong height_;
    c_ulong width_;
    c_bool do_rectify_;
};

#undef OS_API
#endif
