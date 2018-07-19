#ifndef SETMAP_REQUEST_SPLTYPES_H
#define SETMAP_REQUEST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_SetMap_Request_.h"
#include "nav_msgs/msg/dds_opensplice/OccupancyGrid_SplDcps.h"
#include "geometry_msgs/msg/dds_opensplice/PoseWithCovarianceStamped_SplDcps.h"

#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __SetMap_Request__nav_msgs__load (c_base base);

extern c_metaObject __SetMap_Request__nav_msgs_srv__load (c_base base);

extern c_metaObject __SetMap_Request__nav_msgs_srv_dds___load (c_base base);

extern const char *nav_msgs_srv_dds__SetMap_Request__metaDescriptor[];
extern const int nav_msgs_srv_dds__SetMap_Request__metaDescriptorArrLength;
extern const int nav_msgs_srv_dds__SetMap_Request__metaDescriptorLength;
extern c_metaObject __nav_msgs_srv_dds__SetMap_Request___load (c_base base);
struct _nav_msgs_srv_dds__SetMap_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs v_copyin_result __nav_msgs_srv_dds__SetMap_Request___copyIn(c_base base, const struct nav_msgs::srv::dds_::SetMap_Request_ *from, struct _nav_msgs_srv_dds__SetMap_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs void __nav_msgs_srv_dds__SetMap_Request___copyOut(const void *_from, void *_to);
struct _nav_msgs_srv_dds__SetMap_Request_ {
    struct _nav_msgs_msg_dds__OccupancyGrid_ map_;
    struct _geometry_msgs_msg_dds__PoseWithCovarianceStamped_ initial_pose_;
};

#undef OS_API
#endif
