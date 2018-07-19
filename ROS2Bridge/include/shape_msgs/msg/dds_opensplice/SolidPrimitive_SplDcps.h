#ifndef SOLIDPRIMITIVE_SPLTYPES_H
#define SOLIDPRIMITIVE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_SolidPrimitive_.h"
#include "shape_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __SolidPrimitive__shape_msgs__load (c_base base);

extern c_metaObject __SolidPrimitive__shape_msgs_msg__load (c_base base);

extern c_metaObject __SolidPrimitive__shape_msgs_msg_dds___load (c_base base);

extern const char *shape_msgs_msg_dds__SolidPrimitive__metaDescriptor[];
extern const int shape_msgs_msg_dds__SolidPrimitive__metaDescriptorArrLength;
extern const int shape_msgs_msg_dds__SolidPrimitive__metaDescriptorLength;
extern c_metaObject __shape_msgs_msg_dds__SolidPrimitive___load (c_base base);
struct _shape_msgs_msg_dds__SolidPrimitive_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs v_copyin_result __shape_msgs_msg_dds__SolidPrimitive___copyIn(c_base base, const struct shape_msgs::msg::dds_::SolidPrimitive_ *from, struct _shape_msgs_msg_dds__SolidPrimitive_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs void __shape_msgs_msg_dds__SolidPrimitive___copyOut(const void *_from, void *_to);
struct _shape_msgs_msg_dds__SolidPrimitive_ {
    c_octet type_;
    c_sequence dimensions_;
};

#undef OS_API
#endif
