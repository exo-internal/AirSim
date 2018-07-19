#ifndef DIAGNOSTICARRAY_SPLTYPES_H
#define DIAGNOSTICARRAY_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_DiagnosticArray_.h"
#include "std_msgs/msg/dds_opensplice/Header_SplDcps.h"
#include "diagnostic_msgs/msg/dds_opensplice/DiagnosticStatus_SplDcps.h"

#include "diagnostic_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __DiagnosticArray__diagnostic_msgs__load (c_base base);

extern c_metaObject __DiagnosticArray__diagnostic_msgs_msg__load (c_base base);

extern c_metaObject __DiagnosticArray__diagnostic_msgs_msg_dds___load (c_base base);

extern const char *diagnostic_msgs_msg_dds__DiagnosticArray__metaDescriptor[];
extern const int diagnostic_msgs_msg_dds__DiagnosticArray__metaDescriptorArrLength;
extern const int diagnostic_msgs_msg_dds__DiagnosticArray__metaDescriptorLength;
extern c_metaObject __diagnostic_msgs_msg_dds__DiagnosticArray___load (c_base base);
struct _diagnostic_msgs_msg_dds__DiagnosticArray_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs v_copyin_result __diagnostic_msgs_msg_dds__DiagnosticArray___copyIn(c_base base, const struct diagnostic_msgs::msg::dds_::DiagnosticArray_ *from, struct _diagnostic_msgs_msg_dds__DiagnosticArray_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs void __diagnostic_msgs_msg_dds__DiagnosticArray___copyOut(const void *_from, void *_to);
struct _diagnostic_msgs_msg_dds__DiagnosticArray_ {
    struct _std_msgs_msg_dds__Header_ header_;
    c_sequence status_;
};

#undef OS_API
#endif
