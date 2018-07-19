#ifndef SAMPLE_PROJECTEDMAPSINFO_RESPONSE_SPLTYPES_H
#define SAMPLE_PROJECTEDMAPSINFO_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Sample_ProjectedMapsInfo_Response_.h"
#include "map_msgs/srv/dds_opensplice/ProjectedMapsInfo_Response_SplDcps.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Sample_ProjectedMapsInfo_Response__map_msgs__load (c_base base);

extern c_metaObject __Sample_ProjectedMapsInfo_Response__map_msgs_srv__load (c_base base);

extern c_metaObject __Sample_ProjectedMapsInfo_Response__map_msgs_srv_dds___load (c_base base);

extern const char *map_msgs_srv_dds__Sample_ProjectedMapsInfo_Response__metaDescriptor[];
extern const int map_msgs_srv_dds__Sample_ProjectedMapsInfo_Response__metaDescriptorArrLength;
extern const int map_msgs_srv_dds__Sample_ProjectedMapsInfo_Response__metaDescriptorLength;
extern c_metaObject __map_msgs_srv_dds__Sample_ProjectedMapsInfo_Response___load (c_base base);
struct _map_msgs_srv_dds__Sample_ProjectedMapsInfo_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs v_copyin_result __map_msgs_srv_dds__Sample_ProjectedMapsInfo_Response___copyIn(c_base base, const struct map_msgs::srv::dds_::Sample_ProjectedMapsInfo_Response_ *from, struct _map_msgs_srv_dds__Sample_ProjectedMapsInfo_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs void __map_msgs_srv_dds__Sample_ProjectedMapsInfo_Response___copyOut(const void *_from, void *_to);
struct _map_msgs_srv_dds__Sample_ProjectedMapsInfo_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _map_msgs_srv_dds__ProjectedMapsInfo_Response_ response_;
};

#undef OS_API
#endif
