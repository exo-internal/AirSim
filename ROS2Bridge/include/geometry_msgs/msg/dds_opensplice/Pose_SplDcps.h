#ifndef POSE_SPLTYPES_H
#define POSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Pose_.h"
#include "geometry_msgs/msg/dds_opensplice/Point_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Quaternion_SplDcps.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Pose__geometry_msgs__load (c_base base);

extern c_metaObject __Pose__geometry_msgs_msg__load (c_base base);

extern c_metaObject __Pose__geometry_msgs_msg_dds___load (c_base base);

extern const char *geometry_msgs_msg_dds__Pose__metaDescriptor[];
extern const int geometry_msgs_msg_dds__Pose__metaDescriptorArrLength;
extern const int geometry_msgs_msg_dds__Pose__metaDescriptorLength;
extern c_metaObject __geometry_msgs_msg_dds__Pose___load (c_base base);
struct _geometry_msgs_msg_dds__Pose_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs v_copyin_result __geometry_msgs_msg_dds__Pose___copyIn(c_base base, const struct geometry_msgs::msg::dds_::Pose_ *from, struct _geometry_msgs_msg_dds__Pose_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs void __geometry_msgs_msg_dds__Pose___copyOut(const void *_from, void *_to);
struct _geometry_msgs_msg_dds__Pose_ {
    struct _geometry_msgs_msg_dds__Point_ position_;
    struct _geometry_msgs_msg_dds__Quaternion_ orientation_;
};

#undef OS_API
#endif
