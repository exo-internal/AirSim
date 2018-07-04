#ifndef MARKER_SPLTYPES_H
#define MARKER_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Marker_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Pose_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Vector3_SplDcps.h"
#include "std_msgs/msg/dds_opensplice/ColorRGBA_SplDcps.h"
#include "builtin_interfaces/msg/dds_opensplice/Duration_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Point_SplDcps.h"

#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Marker__visualization_msgs__load (c_base base);

extern c_metaObject __Marker__visualization_msgs_msg__load (c_base base);

extern c_metaObject __Marker__visualization_msgs_msg_dds___load (c_base base);

extern const char *visualization_msgs_msg_dds__Marker__metaDescriptor[];
extern const int visualization_msgs_msg_dds__Marker__metaDescriptorArrLength;
extern const int visualization_msgs_msg_dds__Marker__metaDescriptorLength;
extern c_metaObject __visualization_msgs_msg_dds__Marker___load (c_base base);
struct _visualization_msgs_msg_dds__Marker_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs v_copyin_result __visualization_msgs_msg_dds__Marker___copyIn(c_base base, const struct visualization_msgs::msg::dds_::Marker_ *from, struct _visualization_msgs_msg_dds__Marker_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs void __visualization_msgs_msg_dds__Marker___copyOut(const void *_from, void *_to);
struct _visualization_msgs_msg_dds__Marker_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_string ns_;
    c_long id_;
    c_long type_;
    c_long action_;
    struct _geometry_msgs_msg_dds__Pose_ pose_;
    struct _geometry_msgs_msg_dds__Vector3_ scale_;
    struct _std_msgs_msg_dds__ColorRGBA_ color_;
    struct _builtin_interfaces_msg_dds__Duration_ lifetime_;
    c_bool frame_locked_;
    c_sequence points_;
    c_sequence colors_;
    c_string text_;
    c_string mesh_resource_;
    c_bool mesh_use_embedded_materials_;
};

#undef OS_API
#endif
