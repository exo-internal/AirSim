#ifndef GETMAP_REQUEST_SPLTYPES_H
#define GETMAP_REQUEST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GetMap_Request_.h"
#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __GetMap_Request__nav_msgs__load (c_base base);

extern c_metaObject __GetMap_Request__nav_msgs_srv__load (c_base base);

extern c_metaObject __GetMap_Request__nav_msgs_srv_dds___load (c_base base);

extern const char *nav_msgs_srv_dds__GetMap_Request__metaDescriptor[];
extern const int nav_msgs_srv_dds__GetMap_Request__metaDescriptorArrLength;
extern const int nav_msgs_srv_dds__GetMap_Request__metaDescriptorLength;
extern c_metaObject __nav_msgs_srv_dds__GetMap_Request___load (c_base base);
struct _nav_msgs_srv_dds__GetMap_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs v_copyin_result __nav_msgs_srv_dds__GetMap_Request___copyIn(c_base base, const struct nav_msgs::srv::dds_::GetMap_Request_ *from, struct _nav_msgs_srv_dds__GetMap_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs void __nav_msgs_srv_dds__GetMap_Request___copyOut(const void *_from, void *_to);
struct _nav_msgs_srv_dds__GetMap_Request_ {
    c_bool dummy;
};

#undef OS_API
#endif
