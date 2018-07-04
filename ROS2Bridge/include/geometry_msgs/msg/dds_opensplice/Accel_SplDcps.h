#ifndef ACCEL_SPLTYPES_H
#define ACCEL_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Accel_.h"
#include "geometry_msgs/msg/dds_opensplice/Vector3_SplDcps.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Accel__geometry_msgs__load (c_base base);

extern c_metaObject __Accel__geometry_msgs_msg__load (c_base base);

extern c_metaObject __Accel__geometry_msgs_msg_dds___load (c_base base);

extern const char *geometry_msgs_msg_dds__Accel__metaDescriptor[];
extern const int geometry_msgs_msg_dds__Accel__metaDescriptorArrLength;
extern const int geometry_msgs_msg_dds__Accel__metaDescriptorLength;
extern c_metaObject __geometry_msgs_msg_dds__Accel___load (c_base base);
struct _geometry_msgs_msg_dds__Accel_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs v_copyin_result __geometry_msgs_msg_dds__Accel___copyIn(c_base base, const struct geometry_msgs::msg::dds_::Accel_ *from, struct _geometry_msgs_msg_dds__Accel_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs void __geometry_msgs_msg_dds__Accel___copyOut(const void *_from, void *_to);
struct _geometry_msgs_msg_dds__Accel_ {
    struct _geometry_msgs_msg_dds__Vector3_ linear_;
    struct _geometry_msgs_msg_dds__Vector3_ angular_;
};

#undef OS_API
#endif
