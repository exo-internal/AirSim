#ifndef QUATERNION_SPLTYPES_H
#define QUATERNION_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Quaternion_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Quaternion__geometry_msgs__load (c_base base);

extern c_metaObject __Quaternion__geometry_msgs_msg__load (c_base base);

extern c_metaObject __Quaternion__geometry_msgs_msg_dds___load (c_base base);

extern const char *geometry_msgs_msg_dds__Quaternion__metaDescriptor[];
extern const int geometry_msgs_msg_dds__Quaternion__metaDescriptorArrLength;
extern const int geometry_msgs_msg_dds__Quaternion__metaDescriptorLength;
extern c_metaObject __geometry_msgs_msg_dds__Quaternion___load (c_base base);
struct _geometry_msgs_msg_dds__Quaternion_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs v_copyin_result __geometry_msgs_msg_dds__Quaternion___copyIn(c_base base, const struct geometry_msgs::msg::dds_::Quaternion_ *from, struct _geometry_msgs_msg_dds__Quaternion_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs void __geometry_msgs_msg_dds__Quaternion___copyOut(const void *_from, void *_to);
struct _geometry_msgs_msg_dds__Quaternion_ {
    c_double x_;
    c_double y_;
    c_double z_;
    c_double w_;
};

#undef OS_API
#endif
