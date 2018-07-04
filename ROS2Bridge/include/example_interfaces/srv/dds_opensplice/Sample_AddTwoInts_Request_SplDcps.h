#ifndef SAMPLE_ADDTWOINTS_REQUEST_SPLTYPES_H
#define SAMPLE_ADDTWOINTS_REQUEST_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Sample_AddTwoInts_Request_.h"
#include "example_interfaces/srv/dds_opensplice/AddTwoInts_Request_SplDcps.h"

#include "example_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Sample_AddTwoInts_Request__example_interfaces__load (c_base base);

extern c_metaObject __Sample_AddTwoInts_Request__example_interfaces_srv__load (c_base base);

extern c_metaObject __Sample_AddTwoInts_Request__example_interfaces_srv_dds___load (c_base base);

extern const char *example_interfaces_srv_dds__Sample_AddTwoInts_Request__metaDescriptor[];
extern const int example_interfaces_srv_dds__Sample_AddTwoInts_Request__metaDescriptorArrLength;
extern const int example_interfaces_srv_dds__Sample_AddTwoInts_Request__metaDescriptorLength;
extern c_metaObject __example_interfaces_srv_dds__Sample_AddTwoInts_Request___load (c_base base);
struct _example_interfaces_srv_dds__Sample_AddTwoInts_Request_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces v_copyin_result __example_interfaces_srv_dds__Sample_AddTwoInts_Request___copyIn(c_base base, const struct example_interfaces::srv::dds_::Sample_AddTwoInts_Request_ *from, struct _example_interfaces_srv_dds__Sample_AddTwoInts_Request_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces void __example_interfaces_srv_dds__Sample_AddTwoInts_Request___copyOut(const void *_from, void *_to);
struct _example_interfaces_srv_dds__Sample_AddTwoInts_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _example_interfaces_srv_dds__AddTwoInts_Request_ request_;
};

#undef OS_API
#endif
