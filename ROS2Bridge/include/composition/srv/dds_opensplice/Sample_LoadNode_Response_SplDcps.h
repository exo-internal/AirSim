#ifndef SAMPLE_LOADNODE_RESPONSE_SPLTYPES_H
#define SAMPLE_LOADNODE_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Sample_LoadNode_Response_.h"
#include "composition/srv/dds_opensplice/LoadNode_Response_SplDcps.h"

#include "composition/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Sample_LoadNode_Response__composition__load (c_base base);

extern c_metaObject __Sample_LoadNode_Response__composition_srv__load (c_base base);

extern c_metaObject __Sample_LoadNode_Response__composition_srv_dds___load (c_base base);

extern const char *composition_srv_dds__Sample_LoadNode_Response__metaDescriptor[];
extern const int composition_srv_dds__Sample_LoadNode_Response__metaDescriptorArrLength;
extern const int composition_srv_dds__Sample_LoadNode_Response__metaDescriptorLength;
extern c_metaObject __composition_srv_dds__Sample_LoadNode_Response___load (c_base base);
struct _composition_srv_dds__Sample_LoadNode_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition v_copyin_result __composition_srv_dds__Sample_LoadNode_Response___copyIn(c_base base, const struct composition::srv::dds_::Sample_LoadNode_Response_ *from, struct _composition_srv_dds__Sample_LoadNode_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition void __composition_srv_dds__Sample_LoadNode_Response___copyOut(const void *_from, void *_to);
struct _composition_srv_dds__Sample_LoadNode_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _composition_srv_dds__LoadNode_Response_ response_;
};

#undef OS_API
#endif
