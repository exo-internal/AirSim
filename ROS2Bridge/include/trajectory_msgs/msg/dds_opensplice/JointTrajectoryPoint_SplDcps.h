#ifndef JOINTTRAJECTORYPOINT_SPLTYPES_H
#define JOINTTRAJECTORYPOINT_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_JointTrajectoryPoint_.h"
#include "builtin_interfaces/msg/dds_opensplice/Duration_SplDcps.h"

#include "trajectory_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __JointTrajectoryPoint__trajectory_msgs__load (c_base base);

extern c_metaObject __JointTrajectoryPoint__trajectory_msgs_msg__load (c_base base);

extern c_metaObject __JointTrajectoryPoint__trajectory_msgs_msg_dds___load (c_base base);

extern const char *trajectory_msgs_msg_dds__JointTrajectoryPoint__metaDescriptor[];
extern const int trajectory_msgs_msg_dds__JointTrajectoryPoint__metaDescriptorArrLength;
extern const int trajectory_msgs_msg_dds__JointTrajectoryPoint__metaDescriptorLength;
extern c_metaObject __trajectory_msgs_msg_dds__JointTrajectoryPoint___load (c_base base);
struct _trajectory_msgs_msg_dds__JointTrajectoryPoint_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs v_copyin_result __trajectory_msgs_msg_dds__JointTrajectoryPoint___copyIn(c_base base, const struct trajectory_msgs::msg::dds_::JointTrajectoryPoint_ *from, struct _trajectory_msgs_msg_dds__JointTrajectoryPoint_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs void __trajectory_msgs_msg_dds__JointTrajectoryPoint___copyOut(const void *_from, void *_to);
struct _trajectory_msgs_msg_dds__JointTrajectoryPoint_ {
    c_sequence positions_;
    c_sequence velocities_;
    c_sequence accelerations_;
    c_sequence effort_;
    struct _builtin_interfaces_msg_dds__Duration_ time_from_start_;
};

#undef OS_API
#endif
