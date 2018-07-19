#ifndef INERTIA_SPLTYPES_H
#define INERTIA_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Inertia_.h"
#include "geometry_msgs/msg/dds_opensplice/Vector3_SplDcps.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Inertia__geometry_msgs__load (c_base base);

extern c_metaObject __Inertia__geometry_msgs_msg__load (c_base base);

extern c_metaObject __Inertia__geometry_msgs_msg_dds___load (c_base base);

extern const char *geometry_msgs_msg_dds__Inertia__metaDescriptor[];
extern const int geometry_msgs_msg_dds__Inertia__metaDescriptorArrLength;
extern const int geometry_msgs_msg_dds__Inertia__metaDescriptorLength;
extern c_metaObject __geometry_msgs_msg_dds__Inertia___load (c_base base);
struct _geometry_msgs_msg_dds__Inertia_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs v_copyin_result __geometry_msgs_msg_dds__Inertia___copyIn(c_base base, const struct geometry_msgs::msg::dds_::Inertia_ *from, struct _geometry_msgs_msg_dds__Inertia_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs void __geometry_msgs_msg_dds__Inertia___copyOut(const void *_from, void *_to);
struct _geometry_msgs_msg_dds__Inertia_ {
    c_double m_;
    struct _geometry_msgs_msg_dds__Vector3_ com_;
    c_double ixx_;
    c_double ixy_;
    c_double ixz_;
    c_double iyy_;
    c_double iyz_;
    c_double izz_;
};

#undef OS_API
#endif
