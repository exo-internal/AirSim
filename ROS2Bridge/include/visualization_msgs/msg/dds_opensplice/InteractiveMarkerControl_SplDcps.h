#ifndef INTERACTIVEMARKERCONTROL_SPLTYPES_H
#define INTERACTIVEMARKERCONTROL_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_InteractiveMarkerControl_.h"
#include "geometry_msgs/msg/dds_opensplice/Quaternion_SplDcps.h"
#include "visualization_msgs/msg/dds_opensplice/Marker_SplDcps.h"

#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __InteractiveMarkerControl__visualization_msgs__load (c_base base);

extern c_metaObject __InteractiveMarkerControl__visualization_msgs_msg__load (c_base base);

extern c_metaObject __InteractiveMarkerControl__visualization_msgs_msg_dds___load (c_base base);

extern const char *visualization_msgs_msg_dds__InteractiveMarkerControl__metaDescriptor[];
extern const int visualization_msgs_msg_dds__InteractiveMarkerControl__metaDescriptorArrLength;
extern const int visualization_msgs_msg_dds__InteractiveMarkerControl__metaDescriptorLength;
extern c_metaObject __visualization_msgs_msg_dds__InteractiveMarkerControl___load (c_base base);
struct _visualization_msgs_msg_dds__InteractiveMarkerControl_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs v_copyin_result __visualization_msgs_msg_dds__InteractiveMarkerControl___copyIn(c_base base, const struct visualization_msgs::msg::dds_::InteractiveMarkerControl_ *from, struct _visualization_msgs_msg_dds__InteractiveMarkerControl_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs void __visualization_msgs_msg_dds__InteractiveMarkerControl___copyOut(const void *_from, void *_to);
struct _visualization_msgs_msg_dds__InteractiveMarkerControl_ {
    c_string name_;
    struct _geometry_msgs_msg_dds__Quaternion_ orientation_;
    c_octet orientation_mode_;
    c_octet interaction_mode_;
    c_bool always_visible_;
    c_sequence markers_;
    c_bool independent_marker_orientation_;
    c_string description_;
};

#undef OS_API
#endif
