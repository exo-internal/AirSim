#ifndef PARAMETERVALUE_SPLTYPES_H
#define PARAMETERVALUE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_ParameterValue_.h"
#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __ParameterValue__rcl_interfaces__load (c_base base);

extern c_metaObject __ParameterValue__rcl_interfaces_msg__load (c_base base);

extern c_metaObject __ParameterValue__rcl_interfaces_msg_dds___load (c_base base);

extern const char *rcl_interfaces_msg_dds__ParameterValue__metaDescriptor[];
extern const int rcl_interfaces_msg_dds__ParameterValue__metaDescriptorArrLength;
extern const int rcl_interfaces_msg_dds__ParameterValue__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_msg_dds__ParameterValue___load (c_base base);
struct _rcl_interfaces_msg_dds__ParameterValue_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces v_copyin_result __rcl_interfaces_msg_dds__ParameterValue___copyIn(c_base base, const struct rcl_interfaces::msg::dds_::ParameterValue_ *from, struct _rcl_interfaces_msg_dds__ParameterValue_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces void __rcl_interfaces_msg_dds__ParameterValue___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_msg_dds__ParameterValue_ {
    c_octet type_;
    c_bool bool_value_;
    c_longlong integer_value_;
    c_double double_value_;
    c_string string_value_;
    c_sequence byte_array_value_;
    c_sequence bool_array_value_;
    c_sequence integer_array_value_;
    c_sequence double_array_value_;
    c_sequence string_array_value_;
};

#undef OS_API
#endif
