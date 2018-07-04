#ifndef JOINTSTATE_SPLTYPES_H
#define JOINTSTATE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_JointState_.h"
#include "pendulum_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __JointState__pendulum_msgs__load (c_base base);

extern c_metaObject __JointState__pendulum_msgs_msg__load (c_base base);

extern c_metaObject __JointState__pendulum_msgs_msg_dds___load (c_base base);

extern const char *pendulum_msgs_msg_dds__JointState__metaDescriptor[];
extern const int pendulum_msgs_msg_dds__JointState__metaDescriptorArrLength;
extern const int pendulum_msgs_msg_dds__JointState__metaDescriptorLength;
extern c_metaObject __pendulum_msgs_msg_dds__JointState___load (c_base base);
struct _pendulum_msgs_msg_dds__JointState_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs v_copyin_result __pendulum_msgs_msg_dds__JointState___copyIn(c_base base, const struct pendulum_msgs::msg::dds_::JointState_ *from, struct _pendulum_msgs_msg_dds__JointState_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs void __pendulum_msgs_msg_dds__JointState___copyOut(const void *_from, void *_to);
struct _pendulum_msgs_msg_dds__JointState_ {
    c_double position_;
    c_double velocity_;
    c_double effort_;
};

#undef OS_API
#endif
