#ifndef DURATION_SPLTYPES_H
#define DURATION_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Duration_.h"
#include "builtin_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

extern c_metaObject __Duration__builtin_interfaces__load (c_base base);

extern c_metaObject __Duration__builtin_interfaces_msg__load (c_base base);

extern c_metaObject __Duration__builtin_interfaces_msg_dds___load (c_base base);

extern const char *builtin_interfaces_msg_dds__Duration__metaDescriptor[];
extern const int builtin_interfaces_msg_dds__Duration__metaDescriptorArrLength;
extern const int builtin_interfaces_msg_dds__Duration__metaDescriptorLength;
extern c_metaObject __builtin_interfaces_msg_dds__Duration___load (c_base base);
struct _builtin_interfaces_msg_dds__Duration_ ;
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces v_copyin_result __builtin_interfaces_msg_dds__Duration___copyIn(c_base base, const struct builtin_interfaces::msg::dds_::Duration_ *from, struct _builtin_interfaces_msg_dds__Duration_ *to);
extern ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces void __builtin_interfaces_msg_dds__Duration___copyOut(const void *_from, void *_to);
struct _builtin_interfaces_msg_dds__Duration_ {
    c_long sec_;
    c_ulong nanosec_;
};

#undef OS_API
#endif
