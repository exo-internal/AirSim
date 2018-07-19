#ifndef GRIDCELLS_SPLTYPES_H
#define GRIDCELLS_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GridCells_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/Point_SplDcps.h"

#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __GridCells__nav_msgs__load (c_base base);

extern c_metaObject __GridCells__nav_msgs_msg__load (c_base base);

extern c_metaObject __GridCells__nav_msgs_msg_dds___load (c_base base);

extern const char *nav_msgs_msg_dds__GridCells__metaDescriptor[];
extern const int nav_msgs_msg_dds__GridCells__metaDescriptorArrLength;
extern const int nav_msgs_msg_dds__GridCells__metaDescriptorLength;
extern c_metaObject __nav_msgs_msg_dds__GridCells___load (c_base base);
struct _nav_msgs_msg_dds__GridCells_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs v_copyin_result __nav_msgs_msg_dds__GridCells___copyIn(c_base base, const struct nav_msgs::msg::dds_::GridCells_ *from, struct _nav_msgs_msg_dds__GridCells_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs void __nav_msgs_msg_dds__GridCells___copyOut(const void *_from, void *_to);
struct _nav_msgs_msg_dds__GridCells_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_float cell_width_;
    c_float cell_height_;
    c_sequence cells_;
};

#undef OS_API
#endif
