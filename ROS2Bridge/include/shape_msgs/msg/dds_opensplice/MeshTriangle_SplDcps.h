#ifndef MESHTRIANGLE_SPLTYPES_H
#define MESHTRIANGLE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_MeshTriangle_.h"
#include "shape_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __MeshTriangle__shape_msgs__load (c_base base);

extern c_metaObject __MeshTriangle__shape_msgs_msg__load (c_base base);

extern c_metaObject __MeshTriangle__shape_msgs_msg_dds___load (c_base base);

extern c_metaObject __shape_msgs_msg_dds__shape_msgs__MeshTriangle__unsigned_long_array_3__load (c_base base);
typedef c_ulong _shape_msgs_msg_dds__shape_msgs__MeshTriangle__unsigned_long_array_3[3];

extern const char *shape_msgs_msg_dds__MeshTriangle__metaDescriptor[];
extern const int shape_msgs_msg_dds__MeshTriangle__metaDescriptorArrLength;
extern const int shape_msgs_msg_dds__MeshTriangle__metaDescriptorLength;
extern c_metaObject __shape_msgs_msg_dds__MeshTriangle___load (c_base base);
struct _shape_msgs_msg_dds__MeshTriangle_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs v_copyin_result __shape_msgs_msg_dds__MeshTriangle___copyIn(c_base base, const struct shape_msgs::msg::dds_::MeshTriangle_ *from, struct _shape_msgs_msg_dds__MeshTriangle_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs void __shape_msgs_msg_dds__MeshTriangle___copyOut(const void *_from, void *_to);
struct _shape_msgs_msg_dds__MeshTriangle_ {
    _shape_msgs_msg_dds__shape_msgs__MeshTriangle__unsigned_long_array_3 vertex_indices_;
};

#undef OS_API
#endif
