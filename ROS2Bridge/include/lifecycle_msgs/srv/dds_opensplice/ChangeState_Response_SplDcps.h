#ifndef CHANGESTATE_RESPONSE_SPLTYPES_H
#define CHANGESTATE_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_ChangeState_Response_.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __ChangeState_Response__lifecycle_msgs__load (c_base base);

extern c_metaObject __ChangeState_Response__lifecycle_msgs_srv__load (c_base base);

extern c_metaObject __ChangeState_Response__lifecycle_msgs_srv_dds___load (c_base base);

extern const char *lifecycle_msgs_srv_dds__ChangeState_Response__metaDescriptor[];
extern const int lifecycle_msgs_srv_dds__ChangeState_Response__metaDescriptorArrLength;
extern const int lifecycle_msgs_srv_dds__ChangeState_Response__metaDescriptorLength;
extern c_metaObject __lifecycle_msgs_srv_dds__ChangeState_Response___load (c_base base);
struct _lifecycle_msgs_srv_dds__ChangeState_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs v_copyin_result __lifecycle_msgs_srv_dds__ChangeState_Response___copyIn(c_base base, const struct lifecycle_msgs::srv::dds_::ChangeState_Response_ *from, struct _lifecycle_msgs_srv_dds__ChangeState_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs void __lifecycle_msgs_srv_dds__ChangeState_Response___copyOut(const void *_from, void *_to);
struct _lifecycle_msgs_srv_dds__ChangeState_Response_ {
    c_bool success_;
};

#undef OS_API
#endif
