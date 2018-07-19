#ifndef GETPOINTMAPROI_RESPONSE_SPLTYPES_H
#define GETPOINTMAPROI_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GetPointMapROI_Response_.h"
#include "sensor_msgs/msg/dds_opensplice/PointCloud2_SplDcps.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __GetPointMapROI_Response__map_msgs__load (c_base base);

extern c_metaObject __GetPointMapROI_Response__map_msgs_srv__load (c_base base);

extern c_metaObject __GetPointMapROI_Response__map_msgs_srv_dds___load (c_base base);

extern const char *map_msgs_srv_dds__GetPointMapROI_Response__metaDescriptor[];
extern const int map_msgs_srv_dds__GetPointMapROI_Response__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__GetPointMapROI_Response__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__GetPointMapROI_Response___load (c_base base);
struct _map_msgs_srv_dds__GetPointMapROI_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__GetPointMapROI_Response___copyIn(c_base base, const struct map_msgs::srv::dds_::GetPointMapROI_Response_ *from, struct _map_msgs_srv_dds__GetPointMapROI_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__GetPointMapROI_Response___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__GetPointMapROI_Response_ {
    struct _sensor_msgs_msg_dds__PointCloud2_ sub_map_;
};

#undef OS_API
#endif
