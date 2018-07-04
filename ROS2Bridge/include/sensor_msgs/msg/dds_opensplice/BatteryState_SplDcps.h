#ifndef BATTERYSTATE_SPLTYPES_H
#define BATTERYSTATE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_BatteryState_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __BatteryState__sensor_msgs__load (c_base base);

extern c_metaObject __BatteryState__sensor_msgs_msg__load (c_base base);

extern c_metaObject __BatteryState__sensor_msgs_msg_dds___load (c_base base);

extern const char *sensor_msgs_msg_dds__BatteryState__metaDescriptor[];
extern const int sensor_msgs_msg_dds__BatteryState__metaDescriptorArrLength;
extern const int sensor_msgs_msg_dds__BatteryState__metaDescriptorLength;
extern c_metaObject __sensor_msgs_msg_dds__BatteryState___load (c_base base);
struct _sensor_msgs_msg_dds__BatteryState_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_msg_dds__BatteryState___copyIn(c_base base, const struct sensor_msgs::msg::dds_::BatteryState_ *from, struct _sensor_msgs_msg_dds__BatteryState_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_msg_dds__BatteryState___copyOut(const void *_from, void *_to);
struct _sensor_msgs_msg_dds__BatteryState_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_float voltage_;
    c_float current_;
    c_float charge_;
    c_float capacity_;
    c_float design_capacity_;
    c_float percentage_;
    c_octet power_supply_status_;
    c_octet power_supply_health_;
    c_octet power_supply_technology_;
    c_bool present_;
    c_sequence cell_voltage_;
    c_string location_;
    c_string serial_number_;
};

#undef OS_API
#endif
