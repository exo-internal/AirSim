#ifndef INTERACTIVEMARKER_SPLTYPES_H
#define INTERACTIVEMARKER_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_InteractiveMarker_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Pose_SplDcps.h"
#include "visualization_msgs/msg/dds_opensplice/MenuEntry_SplDcps.h"
#include "visualization_msgs/msg/dds_opensplice/InteractiveMarkerControl_SplDcps.h"

#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __InteractiveMarker__visualization_msgs__load (c_base base);

extern c_metaObject __InteractiveMarker__visualization_msgs_msg__load (c_base base);

extern c_metaObject __InteractiveMarker__visualization_msgs_msg_dds___load (c_base base);

extern const char *visualization_msgs_msg_dds__InteractiveMarker__metaDescriptor[];
extern const int visualization_msgs_msg_dds__InteractiveMarker__metaDescriptorArrLength;
extern const int visualization_msgs_msg_dds__InteractiveMarker__metaDescriptorLength;
extern c_metaObject __visualization_msgs_msg_dds__InteractiveMarker___load (c_base base);
struct _visualization_msgs_msg_dds__InteractiveMarker_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs v_copyin_result __visualization_msgs_msg_dds__InteractiveMarker___copyIn(c_base base, const struct visualization_msgs::msg::dds_::InteractiveMarker_ *from, struct _visualization_msgs_msg_dds__InteractiveMarker_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs void __visualization_msgs_msg_dds__InteractiveMarker___copyOut(const void *_from, void *_to);
struct _visualization_msgs_msg_dds__InteractiveMarker_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _geometry_msgs_msg_dds__Pose_ pose_;
    c_string name_;
    c_string description_;
    c_float scale_;
    c_sequence menu_entries_;
    c_sequence controls_;
};

#undef OS_API
#endif
