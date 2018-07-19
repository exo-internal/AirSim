#ifndef GETSTATE_REQUEST_SPLTYPES_H
#define GETSTATE_REQUEST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GetState_Request_.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __GetState_Request__lifecycle_msgs__load (c_base base);

extern c_metaObject __GetState_Request__lifecycle_msgs_srv__load (c_base base);

extern c_metaObject __GetState_Request__lifecycle_msgs_srv_dds___load (c_base base);

extern const char *lifecycle_msgs_srv_dds__GetState_Request__metaDescriptor[];
extern const int lifecycle_msgs_srv_dds__GetState_Request__metaDescriptorArrLength;
extern const int lifecycle_msgs_srv_dds__GetState_Request__metaDescriptorLength;
extern c_metaObject __lifecycle_msgs_srv_dds__GetState_Request___load (c_base base);
struct _lifecycle_msgs_srv_dds__GetState_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs v_copyin_result __lifecycle_msgs_srv_dds__GetState_Request___copyIn(c_base base, const struct lifecycle_msgs::srv::dds_::GetState_Request_ *from, struct _lifecycle_msgs_srv_dds__GetState_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs void __lifecycle_msgs_srv_dds__GetState_Request___copyOut(const void *_from, void *_to);
struct _lifecycle_msgs_srv_dds__GetState_Request_ {
    c_string node_name_;
};

#undef OS_API
#endif
