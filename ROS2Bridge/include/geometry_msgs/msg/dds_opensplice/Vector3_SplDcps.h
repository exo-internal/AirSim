#ifndef VECTOR3_SPLTYPES_H
#define VECTOR3_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Vector3_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Vector3__geometry_msgs__load (c_base base);

extern c_metaObject __Vector3__geometry_msgs_msg__load (c_base base);

extern c_metaObject __Vector3__geometry_msgs_msg_dds___load (c_base base);

extern const char *geometry_msgs_msg_dds__Vector3__metaDescriptor[];
extern const int geometry_msgs_msg_dds__Vector3__metaDescriptorArrLength;
extern const int geometry_msgs_msg_dds__Vector3__metaDescriptorLength;
extern c_metaObject __geometry_msgs_msg_dds__Vector3___load (c_base base);
struct _geometry_msgs_msg_dds__Vector3_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs v_copyin_result __geometry_msgs_msg_dds__Vector3___copyIn(c_base base, const struct geometry_msgs::msg::dds_::Vector3_ *from, struct _geometry_msgs_msg_dds__Vector3_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs void __geometry_msgs_msg_dds__Vector3___copyOut(const void *_from, void *_to);
struct _geometry_msgs_msg_dds__Vector3_ {
    c_double x_;
    c_double y_;
    c_double z_;
};

#undef OS_API
#endif
