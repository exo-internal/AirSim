#ifndef MULTIDOFJOINTTRAJECTORYPOINT_SPLTYPES_H
#define MULTIDOFJOINTTRAJECTORYPOINT_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_MultiDOFJointTrajectoryPoint_.h"
#include "geometry_msgs/msg/dds_opensplice/Transform_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Twist_SplDcps.h"
#include "builtin_interfaces/msg/dds_opensplice/Duration_SplDcps.h"

#include "trajectory_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __MultiDOFJointTrajectoryPoint__trajectory_msgs__load (c_base base);

extern c_metaObject __MultiDOFJointTrajectoryPoint__trajectory_msgs_msg__load (c_base base);

extern c_metaObject __MultiDOFJointTrajectoryPoint__trajectory_msgs_msg_dds___load (c_base base);

extern const char *trajectory_msgs_msg_dds__MultiDOFJointTrajectoryPoint__metaDescriptor[];
extern const int trajectory_msgs_msg_dds__MultiDOFJointTrajectoryPoint__metaDescriptorArrLength;
extern const int trajectory_msgs_msg_dds__MultiDOFJointTrajectoryPoint__metaDescriptorLength;
extern c_metaObject __trajectory_msgs_msg_dds__MultiDOFJointTrajectoryPoint___load (c_base base);
struct _trajectory_msgs_msg_dds__MultiDOFJointTrajectoryPoint_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs v_copyin_result __trajectory_msgs_msg_dds__MultiDOFJointTrajectoryPoint___copyIn(c_base base, const struct trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint_ *from, struct _trajectory_msgs_msg_dds__MultiDOFJointTrajectoryPoint_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs void __trajectory_msgs_msg_dds__MultiDOFJointTrajectoryPoint___copyOut(const void *_from, void *_to);
struct _trajectory_msgs_msg_dds__MultiDOFJointTrajectoryPoint_ {
    c_sequence transforms_;
    c_sequence velocities_;
    c_sequence accelerations_;
    struct _builtin_interfaces_msg_dds__Duration_ time_from_start_;
};

#undef OS_API
#endif
