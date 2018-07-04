#ifndef ADDTWOINTS_RESPONSE_SPLTYPES_H
#define ADDTWOINTS_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_AddTwoInts_Response_.h"
#include "example_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __AddTwoInts_Response__example_interfaces__load (c_base base);

extern c_metaObject __AddTwoInts_Response__example_interfaces_srv__load (c_base base);

extern c_metaObject __AddTwoInts_Response__example_interfaces_srv_dds___load (c_base base);

extern const char *example_interfaces_srv_dds__AddTwoInts_Response__metaDescriptor[];
extern const int example_interfaces_srv_dds__AddTwoInts_Response__metaDescriptorArrLength;
extern const int example_interfaces_srv_dds__AddTwoInts_Response__metaDescriptorLength;
extern c_metaObject __example_interfaces_srv_dds__AddTwoInts_Response___load (c_base base);
struct _example_interfaces_srv_dds__AddTwoInts_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces v_copyin_result __example_interfaces_srv_dds__AddTwoInts_Response___copyIn(c_base base, const struct example_interfaces::srv::dds_::AddTwoInts_Response_ *from, struct _example_interfaces_srv_dds__AddTwoInts_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces void __example_interfaces_srv_dds__AddTwoInts_Response___copyOut(const void *_from, void *_to);
struct _example_interfaces_srv_dds__AddTwoInts_Response_ {
    c_longlong sum_;
};

#undef OS_API
#endif
