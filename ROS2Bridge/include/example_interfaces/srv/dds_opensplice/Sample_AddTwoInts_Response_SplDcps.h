#ifndef SAMPLE_ADDTWOINTS_RESPONSE_SPLTYPES_H
#define SAMPLE_ADDTWOINTS_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Sample_AddTwoInts_Response_.h"
#include "example_interfaces/srv/dds_opensplice/AddTwoInts_Response_SplDcps.h"

#include "example_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Sample_AddTwoInts_Response__example_interfaces__load (c_base base);

extern c_metaObject __Sample_AddTwoInts_Response__example_interfaces_srv__load (c_base base);

extern c_metaObject __Sample_AddTwoInts_Response__example_interfaces_srv_dds___load (c_base base);

extern const char *example_interfaces_srv_dds__Sample_AddTwoInts_Response__metaDescriptor[];
extern const int example_interfaces_srv_dds__Sample_AddTwoInts_Response__metaDescriptorArrLength;
extern const int example_interfaces_srv_dds__Sample_AddTwoInts_Response__metaDescriptorLength;
extern c_metaObject __example_interfaces_srv_dds__Sample_AddTwoInts_Response___load (c_base base);
struct _example_interfaces_srv_dds__Sample_AddTwoInts_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces v_copyin_result __example_interfaces_srv_dds__Sample_AddTwoInts_Response___copyIn(c_base base, const struct example_interfaces::srv::dds_::Sample_AddTwoInts_Response_ *from, struct _example_interfaces_srv_dds__Sample_AddTwoInts_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces void __example_interfaces_srv_dds__Sample_AddTwoInts_Response___copyOut(const void *_from, void *_to);
struct _example_interfaces_srv_dds__Sample_AddTwoInts_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _example_interfaces_srv_dds__AddTwoInts_Response_ response_;
};

#undef OS_API
#endif
