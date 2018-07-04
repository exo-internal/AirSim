#ifndef OCCUPANCYGRIDUPDATE_SPLTYPES_H
#define OCCUPANCYGRIDUPDATE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_OccupancyGridUpdate_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __OccupancyGridUpdate__map_msgs__load (c_base base);

extern c_metaObject __OccupancyGridUpdate__map_msgs_msg__load (c_base base);

extern c_metaObject __OccupancyGridUpdate__map_msgs_msg_dds___load (c_base base);

extern const char *map_msgs_msg_dds__OccupancyGridUpdate__metaDescriptor[];
extern const int map_msgs_msg_dds__OccupancyGridUpdate__metaDescriptorArrLength;
extern const int map_msgs_msg_dds__OccupancyGridUpdate__metaDescriptorLength;
extern c_metaObject __map_msgs_msg_dds__OccupancyGridUpdate___load (c_base base);
struct _map_msgs_msg_dds__OccupancyGridUpdate_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_msg_dds__OccupancyGridUpdate___copyIn(c_base base, const struct map_msgs::msg::dds_::OccupancyGridUpdate_ *from, struct _map_msgs_msg_dds__OccupancyGridUpdate_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_msg_dds__OccupancyGridUpdate___copyOut(const void *_from, void *_to);
struct _map_msgs_msg_dds__OccupancyGridUpdate_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_long x_;
    c_long y_;
    c_ulong width_;
    c_ulong height_;
    c_sequence data_;
};

#undef OS_API
#endif
