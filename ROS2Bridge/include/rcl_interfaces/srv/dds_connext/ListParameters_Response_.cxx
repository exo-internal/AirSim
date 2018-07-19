

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ListParameters_Response_.idl using "rtiddsgen".
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

#include "ListParameters_Response_.h"

#include <new>

namespace rcl_interfaces {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *ListParameters_Response_TYPENAME = "rcl_interfaces::srv::dds_::ListParameters_Response_";

            DDS_TypeCode* ListParameters_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ListParameters_Response__g_tc_members[1]=
                {

                    {
                        (char *)"result_",/* Member name */
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

                static DDS_TypeCode ListParameters_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"rcl_interfaces::srv::dds_::ListParameters_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ListParameters_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ListParameters_Response_*/

                if (is_initialized) {
                    return &ListParameters_Response__g_tc;
                }

                ListParameters_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rcl_interfaces::msg::dds_::ListParametersResult__get_typecode();

                is_initialized = RTI_TRUE;

                return &ListParameters_Response__g_tc;
            }

            RTIBool ListParameters_Response__initialize(
                ListParameters_Response_* sample) {
                return rcl_interfaces::srv::dds_::ListParameters_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ListParameters_Response__initialize_ex(
                ListParameters_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return rcl_interfaces::srv::dds_::ListParameters_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ListParameters_Response__initialize_w_params(
                ListParameters_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!rcl_interfaces::msg::dds_::ListParametersResult__initialize_w_params(&sample->result_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void ListParameters_Response__finalize(
                ListParameters_Response_* sample)
            {

                rcl_interfaces::srv::dds_::ListParameters_Response__finalize_ex(sample,RTI_TRUE);
            }

            void ListParameters_Response__finalize_ex(
                ListParameters_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                rcl_interfaces::srv::dds_::ListParameters_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void ListParameters_Response__finalize_w_params(
                ListParameters_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                rcl_interfaces::msg::dds_::ListParametersResult__finalize_w_params(&sample->result_,deallocParams);

            }

            void ListParameters_Response__finalize_optional_members(
                ListParameters_Response_* sample, RTIBool deletePointers)
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

                rcl_interfaces::msg::dds_::ListParametersResult__finalize_optional_members(&sample->result_, deallocParams->delete_pointers);
            }

            RTIBool ListParameters_Response__copy(
                ListParameters_Response_* dst,
                const ListParameters_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!rcl_interfaces::msg::dds_::ListParametersResult__copy(
                        &dst->result_,(const rcl_interfaces::msg::dds_::ListParametersResult_*)&src->result_)) {
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
            * Configure and implement 'ListParameters_Response_' sequence class.
            */
            #define T ListParameters_Response_
            #define TSeq ListParameters_Response_Seq

            #define T_initialize_w_params rcl_interfaces::srv::dds_::ListParameters_Response__initialize_w_params

            #define T_finalize_w_params   rcl_interfaces::srv::dds_::ListParameters_Response__finalize_w_params
            #define T_copy       rcl_interfaces::srv::dds_::ListParameters_Response__copy

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

