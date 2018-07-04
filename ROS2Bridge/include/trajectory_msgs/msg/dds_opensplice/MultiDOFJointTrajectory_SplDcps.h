#ifndef MULTIDOFJOINTTRAJECTORY_SPLTYPES_H
#define MULTIDOFJOINTTRAJECTORY_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_MultiDOFJointTrajectory_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "trajectory_msgs/msg/dds_opensplice/MultiDOFJointTrajectoryPoint_SplDcps.h"

#include "trajectory_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __MultiDOFJointTrajectory__trajectory_msgs__load (c_base base);

extern c_metaObject __MultiDOFJointTrajectory__trajectory_msgs_msg__load (c_base base);

extern c_metaObject __MultiDOFJointTrajectory__trajectory_msgs_msg_dds___load (c_base base);

extern const char *trajectory_msgs_msg_dds__MultiDOFJointTrajectory__metaDescriptor[];
extern const int trajectory_msgs_msg_dds__MultiDOFJointTrajectory__metaDescriptorArrLength;
extern const int trajectory_msgs_msg_dds__MultiDOFJointTrajectory__metaDescriptorLength;
extern c_metaObject __trajectory_msgs_msg_dds__MultiDOFJointTrajectory___load (c_base base);
struct _trajectory_msgs_msg_dds__MultiDOFJointTrajectory_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs v_copyin_result __trajectory_msgs_msg_dds__MultiDOFJointTrajectory___copyIn(c_base base, const struct trajectory_msgs::msg::dds_::MultiDOFJointTrajectory_ *from, struct _trajectory_msgs_msg_dds__MultiDOFJointTrajectory_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_trajectory_msgs void __trajectory_msgs_msg_dds__MultiDOFJointTrajectory___copyOut(const void *_from, void *_to);
struct _trajectory_msgs_msg_dds__MultiDOFJointTrajectory_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_sequence joint_names_;
    c_sequence points_;
};

#undef OS_API
#endif
