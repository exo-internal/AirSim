#ifndef POSE2D_SPLTYPES_H
#define POSE2D_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Pose2D_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Pose2D__geometry_msgs__load (c_base base);

extern c_metaObject __Pose2D__geometry_msgs_msg__load (c_base base);

extern c_metaObject __Pose2D__geometry_msgs_msg_dds___load (c_base base);

extern const char *geometry_msgs_msg_dds__Pose2D__metaDescriptor[];
extern const int geometry_msgs_msg_dds__Pose2D__metaDescriptorArrLength;
extern const int geometry_msgs_msg_dds__Pose2D__metaDescriptorLength;
extern c_metaObject __geometry_msgs_msg_dds__Pose2D___load (c_base base);
struct _geometry_msgs_msg_dds__Pose2D_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs v_copyin_result __geometry_msgs_msg_dds__Pose2D___copyIn(c_base base, const struct geometry_msgs::msg::dds_::Pose2D_ *from, struct _geometry_msgs_msg_dds__Pose2D_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs void __geometry_msgs_msg_dds__Pose2D___copyOut(const void *_from, void *_to);
struct _geometry_msgs_msg_dds__Pose2D_ {
    c_double x_;
    c_double y_;
    c_double theta_;
};

#undef OS_API
#endif
