#ifndef JOINTSTATE_SPLTYPES_H
#define JOINTSTATE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_JointState_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __JointState__sensor_msgs__load (c_base base);

extern c_metaObject __JointState__sensor_msgs_msg__load (c_base base);

extern c_metaObject __JointState__sensor_msgs_msg_dds___load (c_base base);

extern const char *sensor_msgs_msg_dds__JointState__metaDescriptor[];
extern const int sensor_msgs_msg_dds__JointState__metaDescriptorArrLength;
extern const int sensor_msgs_msg_dds__JointState__metaDescriptorLength;
extern c_metaObject __sensor_msgs_msg_dds__JointState___load (c_base base);
struct _sensor_msgs_msg_dds__JointState_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs v_copyin_result __sensor_msgs_msg_dds__JointState___copyIn(c_base base, const struct sensor_msgs::msg::dds_::JointState_ *from, struct _sensor_msgs_msg_dds__JointState_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs void __sensor_msgs_msg_dds__JointState___copyOut(const void *_from, void *_to);
struct _sensor_msgs_msg_dds__JointState_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_sequence name_;
    c_sequence position_;
    c_sequence velocity_;
    c_sequence effort_;
};

#undef OS_API
#endif
