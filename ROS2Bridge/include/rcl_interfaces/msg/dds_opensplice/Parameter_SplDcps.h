#ifndef PARAMETER_SPLTYPES_H
#define PARAMETER_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Parameter_.h"
#include "rcl_interfaces/msg/dds_opensplice/ParameterValue_SplDcps.h"

#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Parameter__rcl_interfaces__load (c_base base);

extern c_metaObject __Parameter__rcl_interfaces_msg__load (c_base base);

extern c_metaObject __Parameter__rcl_interfaces_msg_dds___load (c_base base);

extern const char *rcl_interfaces_msg_dds__Parameter__metaDescriptor[];
extern const int rcl_interfaces_msg_dds__Parameter__metaDescriptorArrLength;
extern const int rcl_interfaces_msg_dds__Parameter__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_msg_dds__Parameter___load (c_base base);
struct _rcl_interfaces_msg_dds__Parameter_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces v_copyin_result __rcl_interfaces_msg_dds__Parameter___copyIn(c_base base, const struct rcl_interfaces::msg::dds_::Parameter_ *from, struct _rcl_interfaces_msg_dds__Parameter_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces void __rcl_interfaces_msg_dds__Parameter___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_msg_dds__Parameter_ {
    c_string name_;
    struct _rcl_interfaces_msg_dds__ParameterValue_ value_;
};

#undef OS_API
#endif
