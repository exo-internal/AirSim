#ifndef SAMPLE_PRIMITIVES_RESPONSE_SPLTYPES_H
#define SAMPLE_PRIMITIVES_RESPONSE_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Sample_Primitives_Response_.h"
#include "test_msgs/srv/dds_opensplice/Primitives_Response_SplDcps.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Sample_Primitives_Response__test_msgs__load (c_base base);

extern c_metaObject __Sample_Primitives_Response__test_msgs_srv__load (c_base base);

extern c_metaObject __Sample_Primitives_Response__test_msgs_srv_dds___load (c_base base);

extern const char *test_msgs_srv_dds__Sample_Primitives_Response__metaDescriptor[];
extern const int test_msgs_srv_dds__Sample_Primitives_Response__metaDescriptorArrLength;
extern const int test_msgs_srv_dds__Sample_Primitives_Response__metaDescriptorLength;
extern c_metaObject __test_msgs_srv_dds__Sample_Primitives_Response___load (c_base base);
struct _test_msgs_srv_dds__Sample_Primitives_Response_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs v_copyin_result __test_msgs_srv_dds__Sample_Primitives_Response___copyIn(c_base base, const struct test_msgs::srv::dds_::Sample_Primitives_Response_ *from, struct _test_msgs_srv_dds__Sample_Primitives_Response_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs void __test_msgs_srv_dds__Sample_Primitives_Response___copyOut(const void *_from, void *_to);
struct _test_msgs_srv_dds__Sample_Primitives_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _test_msgs_srv_dds__Primitives_Response_ response_;
};

#undef OS_API
#endif
