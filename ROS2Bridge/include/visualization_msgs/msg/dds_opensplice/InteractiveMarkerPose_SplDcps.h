#ifndef INTERACTIVEMARKERPOSE_SPLTYPES_H
#define INTERACTIVEMARKERPOSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_InteractiveMarkerPose_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Pose_SplDcps.h"

#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __InteractiveMarkerPose__visualization_msgs__load (c_base base);

extern c_metaObject __InteractiveMarkerPose__visualization_msgs_msg__load (c_base base);

extern c_metaObject __InteractiveMarkerPose__visualization_msgs_msg_dds___load (c_base base);

extern const char *visualization_msgs_msg_dds__InteractiveMarkerPose__metaDescriptor[];
extern const int visualization_msgs_msg_dds__InteractiveMarkerPose__metaDescriptorArrLength;
extern const int visualization_msgs_msg_dds__InteractiveMarkerPose__metaDescriptorLength;
extern c_metaObject __visualization_msgs_msg_dds__InteractiveMarkerPose___load (c_base base);
struct _visualization_msgs_msg_dds__InteractiveMarkerPose_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs v_copyin_result __visualization_msgs_msg_dds__InteractiveMarkerPose___copyIn(c_base base, const struct visualization_msgs::msg::dds_::InteractiveMarkerPose_ *from, struct _visualization_msgs_msg_dds__InteractiveMarkerPose_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs void __visualization_msgs_msg_dds__InteractiveMarkerPose___copyOut(const void *_from, void *_to);
struct _visualization_msgs_msg_dds__InteractiveMarkerPose_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _geometry_msgs_msg_dds__Pose_ pose_;
    c_string name_;
};

#undef OS_API
#endif
