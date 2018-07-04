#ifndef MULTIECHOLASERSCAN_SPLTYPES_H
#define MULTIECHOLASERSCAN_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_MultiEchoLaserScan_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "sensor_msgs/msg/dds_opensplice/LaserEcho_SplDcps.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __MultiEchoLaserScan__sensor_msgs__load (c_base base);

extern c_metaObject __MultiEchoLaserScan__sensor_msgs_msg__load (c_base base);

extern c_metaObject __MultiEchoLaserScan__sensor_msgs_msg_dds___load (c_base base);

extern const char *sensor_msgs_msg_dds__MultiEchoLaserScan__metaDescriptor[];
extern const int sensor_msgs_msg_dds__MultiEchoLaserScan__metaDescriptorArrLength;
extern const int sensor_msgs_msg_dds__MultiEchoLaserScan__metaDescriptorLength;
extern c_metaObject __sensor_msgs_msg_dds__MultiEchoLaserScan___load (c_base base);
struct _sensor_msgs_msg_dds__MultiEchoLaserScan_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_msg_dds__MultiEchoLaserScan___copyIn(c_base base, const struct sensor_msgs::msg::dds_::MultiEchoLaserScan_ *from, struct _sensor_msgs_msg_dds__MultiEchoLaserScan_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_msg_dds__MultiEchoLaserScan___copyOut(const void *_from, void *_to);
struct _sensor_msgs_msg_dds__MultiEchoLaserScan_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_float angle_min_;
    c_float angle_max_;
    c_float angle_increment_;
    c_float time_increment_;
    c_float scan_time_;
    c_float range_min_;
    c_float range_max_;
    c_sequence ranges_;
    c_sequence intensities_;
};

#undef OS_API
#endif
