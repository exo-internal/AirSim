#ifndef SELFTEST_RESPONSE_SPLTYPES_H
#define SELFTEST_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_SelfTest_Response_.h"
#include "diagnostic_msgs/msg/dds_opensplice/DiagnosticStatus_SplDcps.h"

#include "diagnostic_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __SelfTest_Response__diagnostic_msgs__load (c_base base);

extern c_metaObject __SelfTest_Response__diagnostic_msgs_srv__load (c_base base);

extern c_metaObject __SelfTest_Response__diagnostic_msgs_srv_dds___load (c_base base);

extern const char *diagnostic_msgs_srv_dds__SelfTest_Response__metaDescriptor[];
extern const int diagnostic_msgs_srv_dds__SelfTest_Response__metaDescriptorArrLength;
extern const int diagnostic_msgs_srv_dds__SelfTest_Response__metaDescriptorLength;
extern c_metaObject __diagnostic_msgs_srv_dds__SelfTest_Response___load (c_base base);
struct _diagnostic_msgs_srv_dds__SelfTest_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs v_copyin_result __diagnostic_msgs_srv_dds__SelfTest_Response___copyIn(c_base base, const struct diagnostic_msgs::srv::dds_::SelfTest_Response_ *from, struct _diagnostic_msgs_srv_dds__SelfTest_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs void __diagnostic_msgs_srv_dds__SelfTest_Response___copyOut(const void *_from, void *_to);
struct _diagnostic_msgs_srv_dds__SelfTest_Response_ {
    c_string id_;
    c_octet passed_;
    c_sequence status_;
};

#undef OS_API
#endif
