#ifndef OCCUPANCYGRID_SPLTYPES_H
#define OCCUPANCYGRID_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_OccupancyGrid_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "nav_msgs/msg/dds_opensplice/MapMetaData_SplDcps.h"

#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __OccupancyGrid__nav_msgs__load (c_base base);

extern c_metaObject __OccupancyGrid__nav_msgs_msg__load (c_base base);

extern c_metaObject __OccupancyGrid__nav_msgs_msg_dds___load (c_base base);

extern const char *nav_msgs_msg_dds__OccupancyGrid__metaDescriptor[];
extern const int nav_msgs_msg_dds__OccupancyGrid__metaDescriptorArrLength;
extern const int nav_msgs_msg_dds__OccupancyGrid__metaDescriptorLength;
extern c_metaObject __nav_msgs_msg_dds__OccupancyGrid___load (c_base base);
struct _nav_msgs_msg_dds__OccupancyGrid_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs v_copyin_result __nav_msgs_msg_dds__OccupancyGrid___copyIn(c_base base, const struct nav_msgs::msg::dds_::OccupancyGrid_ *from, struct _nav_msgs_msg_dds__OccupancyGrid_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs void __nav_msgs_msg_dds__OccupancyGrid___copyOut(const void *_from, void *_to);
struct _nav_msgs_msg_dds__OccupancyGrid_ {
    struct _std_msgs_msg_dds__Header_ header_;
    struct _nav_msgs_msg_dds__MapMetaData_ info_;
    c_sequence data_;
};

#undef OS_API
#endif
