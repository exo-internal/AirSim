#ifndef MESH_SPLTYPES_H
#define MESH_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Mesh_.h"
#include "shape_msgs/msg/dds_opensplice/MeshTriangle_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Point_SplDcps.h"

#include "shape_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Mesh__shape_msgs__load (c_base base);

extern c_metaObject __Mesh__shape_msgs_msg__load (c_base base);

extern c_metaObject __Mesh__shape_msgs_msg_dds___load (c_base base);

extern const char *shape_msgs_msg_dds__Mesh__metaDescriptor[];
extern const int shape_msgs_msg_dds__Mesh__metaDescriptorArrLength;
extern const int shape_msgs_msg_dds__Mesh__metaDescriptorLength;
extern c_metaObject __shape_msgs_msg_dds__Mesh___load (c_base base);
struct _shape_msgs_msg_dds__Mesh_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs v_copyin_result __shape_msgs_msg_dds__Mesh___copyIn(c_base base, const struct shape_msgs::msg::dds_::Mesh_ *from, struct _shape_msgs_msg_dds__Mesh_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs void __shape_msgs_msg_dds__Mesh___copyOut(const void *_from, void *_to);
struct _shape_msgs_msg_dds__Mesh_ {
    c_sequence triangles_;
    c_sequence vertices_;
};

#undef OS_API
#endif
