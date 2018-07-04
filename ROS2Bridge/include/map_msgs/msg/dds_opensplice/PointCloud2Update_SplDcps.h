#ifndef POINTCLOUD2UPDATE_SPLTYPES_H
#define POINTCLOUD2UPDATE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_PointCloud2Update_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "sensor_msgs/msg/dds_opensplice/PointCloud2_SplDcps.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __PointCloud2Update__map_msgs__load (c_base base);

extern c_metaObject __PointCloud2Update__map_msgs_msg__load (c_base base);

extern c_metaObject __PointCloud2Update__map_msgs_msg_dds___load (c_base base);

extern const char *map_msgs_msg_dds__PointCloud2Update__metaDescriptor[];
extern const int map_msgs_msg_dds__PointCloud2Update__metaDescriptorArrLength;
extern const int map_msgs_msg_dds__PointCloud2Update__metaDescriptorLength;
extern c_metaObject __map_msgs_msg_dds__PointCloud2Update___load (c_base base);
struct _map_msgs_msg_dds__PointCloud2Update_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_msg_dds__PointCloud2Update___copyIn(c_base base, const struct map_msgs::msg::dds_::PointCloud2Update_ *from, struct _map_msgs_msg_dds__PointCloud2Update_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_msg_dds__PointCloud2Update___copyOut(const void *_from, void *_to);
struct _map_msgs_msg_dds__PointCloud2Update_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_ulong type_;
    struct _sensor_msgs_msg_dds__PointCloud2_ points_;
};

#undef OS_API
#endif
