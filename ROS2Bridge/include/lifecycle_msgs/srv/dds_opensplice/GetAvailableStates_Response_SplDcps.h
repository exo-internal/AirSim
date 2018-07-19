#ifndef GETAVAILABLESTATES_RESPONSE_SPLTYPES_H
#define GETAVAILABLESTATES_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GetAvailableStates_Response_.h"
#include "lifecycle_msgs/msg/dds_opensplice/State_SplDcps.h"

#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __GetAvailableStates_Response__lifecycle_msgs__load (c_base base);

extern c_metaObject __GetAvailableStates_Response__lifecycle_msgs_srv__load (c_base base);

extern c_metaObject __GetAvailableStates_Response__lifecycle_msgs_srv_dds___load (c_base base);

extern const char *lifecycle_msgs_srv_dds__GetAvailableStates_Response__metaDescriptor[];
extern const int lifecycle_msgs_srv_dds__GetAvailableStates_Response__metaDescriptorArrLength;
extern const int lifecycle_msgs_srv_dds__GetAvailableStates_Response__metaDescriptorLength;
extern c_metaObject __lifecycle_msgs_srv_dds__GetAvailableStates_Response___load (c_base base);
struct _lifecycle_msgs_srv_dds__GetAvailableStates_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs v_copyin_result __lifecycle_msgs_srv_dds__GetAvailableStates_Response___copyIn(c_base base, const struct lifecycle_msgs::srv::dds_::GetAvailableStates_Response_ *from, struct _lifecycle_msgs_srv_dds__GetAvailableStates_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs void __lifecycle_msgs_srv_dds__GetAvailableStates_Response___copyOut(const void *_from, void *_to);
struct _lifecycle_msgs_srv_dds__GetAvailableStates_Response_ {
    c_sequence available_states_;
};

#undef OS_API
#endif
