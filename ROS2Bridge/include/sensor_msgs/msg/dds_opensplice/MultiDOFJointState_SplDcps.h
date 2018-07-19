#ifndef MULTIDOFJOINTSTATE_SPLTYPES_H
#define MULTIDOFJOINTSTATE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_MultiDOFJointState_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Transform_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Twist_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Wrench_SplDcps.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __MultiDOFJointState__sensor_msgs__load (c_base base);

extern c_metaObject __MultiDOFJointState__sensor_msgs_msg__load (c_base base);

extern c_metaObject __MultiDOFJointState__sensor_msgs_msg_dds___load (c_base base);

extern const char *sensor_msgs_msg_dds__MultiDOFJointState__metaDescriptor[];
extern const int sensor_msgs_msg_dds__MultiDOFJointState__metaDescriptorArrLength;
extern const int sensor_msgs_msg_dds__MultiDOFJointState__metaDescriptorLength;
extern c_metaObject __sensor_msgs_msg_dds__MultiDOFJointState___load (c_base base);
struct _sensor_msgs_msg_dds__MultiDOFJointState_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_msg_dds__MultiDOFJointState___copyIn(c_base base, const struct sensor_msgs::msg::dds_::MultiDOFJointState_ *from, struct _sensor_msgs_msg_dds__MultiDOFJointState_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_msg_dds__MultiDOFJointState___copyOut(const void *_from, void *_to);
struct _sensor_msgs_msg_dds__MultiDOFJointState_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_sequence joint_names_;
    c_sequence transforms_;
    c_sequence twist_;
    c_sequence wrench_;
};

#undef OS_API
#endif
