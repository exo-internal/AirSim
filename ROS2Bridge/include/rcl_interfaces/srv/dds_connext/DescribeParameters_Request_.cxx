

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DescribeParameters_Request_.idl using "rtiddsgen".
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

#include "DescribeParameters_Request_.h"

#include <new>

namespace rcl_interfaces {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *DescribeParameters_Request_TYPENAME = "rcl_interfaces::srv::dds_::DescribeParameters_Request_";

            DDS_TypeCode* DescribeParameters_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DescribeParameters_Request__g_tc_names__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode DescribeParameters_Request__g_tc_names__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member DescribeParameters_Request__g_tc_members[1]=
                {

                    {
                        (char *)"names_",/* Member name */
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
                    }
                };

                static DDS_TypeCode DescribeParameters_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"rcl_interfaces::srv::dds_::DescribeParameters_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        DescribeParameters_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for DescribeParameters_Request_*/

                if (is_initialized) {
                    return &DescribeParameters_Request__g_tc;
                }

                DescribeParameters_Request__g_tc_names__sequence._data._typeCode = (RTICdrTypeCode *)&DescribeParameters_Request__g_tc_names__string;

                DescribeParameters_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& DescribeParameters_Request__g_tc_names__sequence;

                is_initialized = RTI_TRUE;

                return &DescribeParameters_Request__g_tc;
            }

            RTIBool DescribeParameters_Request__initialize(
                DescribeParameters_Request_* sample) {
                return rcl_interfaces::srv::dds_::DescribeParameters_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool DescribeParameters_Request__initialize_ex(
                DescribeParameters_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return rcl_interfaces::srv::dds_::DescribeParameters_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool DescribeParameters_Request__initialize_w_params(
                DescribeParameters_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    DDS_StringSeq_initialize(&sample->names_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->names_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->names_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->names_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->names_, 0);
                }
                return RTI_TRUE;
            }

            void DescribeParameters_Request__finalize(
                DescribeParameters_Request_* sample)
            {

                rcl_interfaces::srv::dds_::DescribeParameters_Request__finalize_ex(sample,RTI_TRUE);
            }

            void DescribeParameters_Request__finalize_ex(
                DescribeParameters_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                rcl_interfaces::srv::dds_::DescribeParameters_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void DescribeParameters_Request__finalize_w_params(
                DescribeParameters_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                DDS_StringSeq_finalize(&sample->names_);

            }

            void DescribeParameters_Request__finalize_optional_members(
                DescribeParameters_Request_* sample, RTIBool deletePointers)
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

            RTIBool DescribeParameters_Request__copy(
                DescribeParameters_Request_* dst,
                const DescribeParameters_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!DDS_StringSeq_copy(&dst->names_ ,
                    &src->names_ )) {
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
            * Configure and implement 'DescribeParameters_Request_' sequence class.
            */
            #define T DescribeParameters_Request_
            #define TSeq DescribeParameters_Request_Seq

            #define T_initialize_w_params rcl_interfaces::srv::dds_::DescribeParameters_Request__initialize_w_params

            #define T_finalize_w_params   rcl_interfaces::srv::dds_::DescribeParameters_Request__finalize_w_params
            #define T_copy       rcl_interfaces::srv::dds_::DescribeParameters_Request__copy

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
} /* namespace rcl_interfaces  */

