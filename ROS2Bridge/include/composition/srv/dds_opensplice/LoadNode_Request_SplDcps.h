#ifndef LOADNODE_REQUEST_SPLTYPES_H
#define LOADNODE_REQUEST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_LoadNode_Request_.h"
#include "composition/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __LoadNode_Request__composition__load (c_base base);

extern c_metaObject __LoadNode_Request__composition_srv__load (c_base base);

extern c_metaObject __LoadNode_Request__composition_srv_dds___load (c_base base);

extern const char *composition_srv_dds__LoadNode_Request__metaDescriptor[];
extern const int composition_srv_dds__LoadNode_Request__metaDescriptorArrLength;
extern const int composition_srv_dds__LoadNode_Request__metaDescriptorLength;
extern c_metaObject __composition_srv_dds__LoadNode_Request___load (c_base base);
struct _composition_srv_dds__LoadNode_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition v_copyin_result __composition_srv_dds__LoadNode_Request___copyIn(c_base base, const struct composition::srv::dds_::LoadNode_Request_ *from, struct _composition_srv_dds__LoadNode_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition void __composition_srv_dds__LoadNode_Request___copyOut(const void *_from, void *_to);
struct _composition_srv_dds__LoadNode_Request_ {
    c_string package_name_;
    c_string plugin_name_;
};

#undef OS_API
#endif
