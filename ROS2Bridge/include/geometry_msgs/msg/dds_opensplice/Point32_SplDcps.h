#ifndef POINT32_SPLTYPES_H
#define POINT32_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Point32_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Point32__geometry_msgs__load (c_base base);

extern c_metaObject __Point32__geometry_msgs_msg__load (c_base base);

extern c_metaObject __Point32__geometry_msgs_msg_dds___load (c_base base);

extern const char *geometry_msgs_msg_dds__Point32__metaDescriptor[];
extern const int geometry_msgs_msg_dds__Point32__metaDescriptorArrLength;
extern const int geometry_msgs_msg_dds__Point32__metaDescriptorLength;
extern c_metaObject __geometry_msgs_msg_dds__Point32___load (c_base base);
struct _geometry_msgs_msg_dds__Point32_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs v_copyin_result __geometry_msgs_msg_dds__Point32___copyIn(c_base base, const struct geometry_msgs::msg::dds_::Point32_ *from, struct _geometry_msgs_msg_dds__Point32_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs void __geometry_msgs_msg_dds__Point32___copyOut(const void *_from, void *_to);
struct _geometry_msgs_msg_dds__Point32_ {
    c_float x_;
    c_float y_;
    c_float z_;
};

#undef OS_API
#endif
