#ifndef DIAGNOSTICSTATUS_SPLTYPES_H
#define DIAGNOSTICSTATUS_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_DiagnosticStatus_.h"
#include "diagnostic_msgs/msg/dds_opensplice/KeyValue_SplDcps.h"

#include "diagnostic_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __DiagnosticStatus__diagnostic_msgs__load (c_base base);

extern c_metaObject __DiagnosticStatus__diagnostic_msgs_msg__load (c_base base);

extern c_metaObject __DiagnosticStatus__diagnostic_msgs_msg_dds___load (c_base base);

extern const char *diagnostic_msgs_msg_dds__DiagnosticStatus__metaDescriptor[];
extern const int diagnostic_msgs_msg_dds__DiagnosticStatus__metaDescriptorArrLength;
extern const int diagnostic_msgs_msg_dds__DiagnosticStatus__metaDescriptorLength;
extern c_metaObject __diagnostic_msgs_msg_dds__DiagnosticStatus___load (c_base base);
struct _diagnostic_msgs_msg_dds__DiagnosticStatus_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs v_copyin_result __diagnostic_msgs_msg_dds__DiagnosticStatus___copyIn(c_base base, const struct diagnostic_msgs::msg::dds_::DiagnosticStatus_ *from, struct _diagnostic_msgs_msg_dds__DiagnosticStatus_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs void __diagnostic_msgs_msg_dds__DiagnosticStatus___copyOut(const void *_from, void *_to);
struct _diagnostic_msgs_msg_dds__DiagnosticStatus_ {
    c_octet level_;
    c_string name_;
    c_string message_;
    c_string hardware_id_;
    c_sequence values_;
};

#undef OS_API
#endif
