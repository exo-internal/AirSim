#ifndef SAMPLE_GETPLAN_RESPONSE_SPLTYPES_H
#define SAMPLE_GETPLAN_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Sample_GetPlan_Response_.h"
#include "nav_msgs/srv/dds_opensplice/GetPlan_Response_SplDcps.h"

#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Sample_GetPlan_Response__nav_msgs__load (c_base base);

extern c_metaObject __Sample_GetPlan_Response__nav_msgs_srv__load (c_base base);

extern c_metaObject __Sample_GetPlan_Response__nav_msgs_srv_dds___load (c_base base);

extern const char *nav_msgs_srv_dds__Sample_GetPlan_Response__metaDescriptor[];
extern const int nav_msgs_srv_dds__Sample_GetPlan_Response__metaDescriptorArrLength;
extern const int nav_msgs_srv_dds__Sample_GetPlan_Response__metaDescriptorLength;
extern c_metaObject __nav_msgs_srv_dds__Sample_GetPlan_Response___load (c_base base);
struct _nav_msgs_srv_dds__Sample_GetPlan_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs v_copyin_result __nav_msgs_srv_dds__Sample_GetPlan_Response___copyIn(c_base base, const struct nav_msgs::srv::dds_::Sample_GetPlan_Response_ *from, struct _nav_msgs_srv_dds__Sample_GetPlan_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs void __nav_msgs_srv_dds__Sample_GetPlan_Response___copyOut(const void *_from, void *_to);
struct _nav_msgs_srv_dds__Sample_GetPlan_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _nav_msgs_srv_dds__GetPlan_Response_ response_;
};

#undef OS_API
#endif
