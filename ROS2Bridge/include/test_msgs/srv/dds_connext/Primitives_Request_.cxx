

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Primitives_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "Primitives_Request_.h"

#include <new>

namespace test_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *Primitives_Request_TYPENAME = "test_msgs::srv::dds_::Primitives_Request_";

            DDS_TypeCode* Primitives_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Primitives_Request__g_tc_string_value__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member Primitives_Request__g_tc_members[14]=
                {

                    {
                        (char *)"bool_value_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"byte_value_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"char_value_",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"float32_value_",/* Member name */
                        {
                            3,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"float64_value_",/* Member name */
                        {
                            4,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"int8_value_",/* Member name */
                        {
                            5,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uint8_value_",/* Member name */
                        {
                            6,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"int16_value_",/* Member name */
                        {
                            7,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uint16_value_",/* Member name */
                        {
                            8,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"int32_value_",/* Member name */
                        {
                            9,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uint32_value_",/* Member name */
                        {
                            10,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"int64_value_",/* Member name */
                        {
                            11,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uint64_value_",/* Member name */
                        {
                            12,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"string_value_",/* Member name */
                        {
                            13,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode Primitives_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::srv::dds_::Primitives_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        14, /* Number of members */
                        Primitives_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Primitives_Request_*/

                if (is_initialized) {
                    return &Primitives_Request__g_tc;
                }

                Primitives_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                Primitives_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                Primitives_Request__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;

                Primitives_Request__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                Primitives_Request__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                Primitives_Request__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                Primitives_Request__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                Primitives_Request__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                Primitives_Request__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;

                Primitives_Request__g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Primitives_Request__g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                Primitives_Request__g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

                Primitives_Request__g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                Primitives_Request__g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&Primitives_Request__g_tc_string_value__string;

                is_initialized = RTI_TRUE;

                return &Primitives_Request__g_tc;
            }

            RTIBool Primitives_Request__initialize(
                Primitives_Request_* sample) {
                return test_msgs::srv::dds_::Primitives_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Primitives_Request__initialize_ex(
                Primitives_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::srv::dds_::Primitives_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Primitives_Request__initialize_w_params(
                Primitives_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->bool_value_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->byte_value_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initChar(&sample->char_value_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->float32_value_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->float64_value_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->int8_value_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->uint8_value_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initShort(&sample->int16_value_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedShort(&sample->uint16_value_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->int32_value_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLong(&sample->uint32_value_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLongLong(&sample->int64_value_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLongLong(&sample->uint64_value_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->string_value_= DDS_String_alloc ((0));
                    if (sample->string_value_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->string_value_!= NULL) { 
                        sample->string_value_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void Primitives_Request__finalize(
                Primitives_Request_* sample)
            {

                test_msgs::srv::dds_::Primitives_Request__finalize_ex(sample,RTI_TRUE);
            }

            void Primitives_Request__finalize_ex(
                Primitives_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::srv::dds_::Primitives_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void Primitives_Request__finalize_w_params(
                Primitives_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->string_value_ != NULL) {
                    DDS_String_free(sample->string_value_);
                    sample->string_value_=NULL;

                }
            }

            void Primitives_Request__finalize_optional_members(
                Primitives_Request_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

            }

            RTIBool Primitives_Request__copy(
                Primitives_Request_* dst,
                const Primitives_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->bool_value_, &src->bool_value_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->byte_value_, &src->byte_value_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyChar (
                        &dst->char_value_, &src->char_value_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->float32_value_, &src->float32_value_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->float64_value_, &src->float64_value_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->int8_value_, &src->int8_value_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->uint8_value_, &src->uint8_value_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyShort (
                        &dst->int16_value_, &src->int16_value_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedShort (
                        &dst->uint16_value_, &src->uint16_value_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->int32_value_, &src->int32_value_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLong (
                        &dst->uint32_value_, &src->uint32_value_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLongLong (
                        &dst->int64_value_, &src->int64_value_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLongLong (
                        &dst->uint64_value_, &src->uint64_value_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->string_value_, src->string_value_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'Primitives_Request_' sequence class.
            */
            #define T Primitives_Request_
            #define TSeq Primitives_Request_Seq

            #define T_initialize_w_params test_msgs::srv::dds_::Primitives_Request__initialize_w_params

            #define T_finalize_w_params   test_msgs::srv::dds_::Primitives_Request__finalize_w_params
            #define T_copy       test_msgs::srv::dds_::Primitives_Request__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace test_msgs  */

