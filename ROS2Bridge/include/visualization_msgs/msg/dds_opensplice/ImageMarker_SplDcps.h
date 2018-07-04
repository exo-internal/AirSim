#ifndef IMAGEMARKER_SPLTYPES_H
#define IMAGEMARKER_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_ImageMarker_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Point_SplDcps.h"
#include "std_msgs/msg/dds_opensplice/ColorRGBA_SplDcps.h"
#include "builtin_interfaces/msg/dds_opensplice/Duration_SplDcps.h"

#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __ImageMarker__visualization_msgs__load (c_base base);

extern c_metaObject __ImageMarker__visualization_msgs_msg__load (c_base base);

extern c_metaObject __ImageMarker__visualization_msgs_msg_dds___load (c_base base);

extern const char *visualization_msgs_msg_dds__ImageMarker__metaDescriptor[];
extern const int visualization_msgs_msg_dds__ImageMarker__metaDescriptorArrLength;
extern const int visualization_msgs_msg_dds__ImageMarker__metaDescriptorLength;
extern c_metaObject __visualization_msgs_msg_dds__ImageMarker___load (c_base base);
struct _visualization_msgs_msg_dds__ImageMarker_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs v_copyin_result __visualization_msgs_msg_dds__ImageMarker___copyIn(c_base base, const struct visualization_msgs::msg::dds_::ImageMarker_ *from, struct _visualization_msgs_msg_dds__ImageMarker_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs void __visualization_msgs_msg_dds__ImageMarker___copyOut(const void *_from, void *_to);
struct _visualization_msgs_msg_dds__ImageMarker_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_string ns_;
    c_long id_;
    c_long type_;
    c_long action_;
    struct _geometry_msgs_msg_dds__Point_ position_;
    c_float scale_;
    struct _std_msgs_msg_dds__ColorRGBA_ outline_color_;
    c_octet filled_;
    struct _std_msgs_msg_dds__ColorRGBA_ fill_color_;
    struct _builtin_interfaces_msg_dds__Duration_ lifetime_;
    c_sequence points_;
    c_sequence outline_colors_;
};

#undef OS_API
#endif
