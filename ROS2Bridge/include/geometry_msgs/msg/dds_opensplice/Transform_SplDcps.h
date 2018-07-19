#ifndef TRANSFORM_SPLTYPES_H
#define TRANSFORM_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Transform_.h"
#include "geometry_msgs/msg/dds_opensplice/Vector3_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Quaternion_SplDcps.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Transform__geometry_msgs__load (c_base base);

extern c_metaObject __Transform__geometry_msgs_msg__load (c_base base);

extern c_metaObject __Transform__geometry_msgs_msg_dds___load (c_base base);

extern const char *geometry_msgs_msg_dds__Transform__metaDescriptor[];
extern const int geometry_msgs_msg_dds__Transform__metaDescriptorArrLength;
extern const int geometry_msgs_msg_dds__Transform__metaDescriptorLength;
extern c_metaObject __geometry_msgs_msg_dds__Transform___load (c_base base);
struct _geometry_msgs_msg_dds__Transform_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs v_copyin_result __geometry_msgs_msg_dds__Transform___copyIn(c_base base, const struct geometry_msgs::msg::dds_::Transform_ *from, struct _geometry_msgs_msg_dds__Transform_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs void __geometry_msgs_msg_dds__Transform___copyOut(const void *_from, void *_to);
struct _geometry_msgs_msg_dds__Transform_ {
    struct _geometry_msgs_msg_dds__Vector3_ translation_;
    struct _geometry_msgs_msg_dds__Quaternion_ rotation_;
};

#undef OS_API
#endif
