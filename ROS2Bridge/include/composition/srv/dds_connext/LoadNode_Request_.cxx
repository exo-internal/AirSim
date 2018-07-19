

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LoadNode_Request_.idl using "rtiddsgen".
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

#include "LoadNode_Request_.h"

#include <new>

namespace composition {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *LoadNode_Request_TYPENAME = "composition::srv::dds_::LoadNode_Request_";

            DDS_TypeCode* LoadNode_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode LoadNode_Request__g_tc_package_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode LoadNode_Request__g_tc_plugin_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member LoadNode_Request__g_tc_members[2]=
                {

                    {
                        (char *)"package_name_",/* Member name */
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
                        (char *)"plugin_name_",/* Member name */
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
                    }
                };

                static DDS_TypeCode LoadNode_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"composition::srv::dds_::LoadNode_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        LoadNode_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for LoadNode_Request_*/

                if (is_initialized) {
                    return &LoadNode_Request__g_tc;
                }

                LoadNode_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&LoadNode_Request__g_tc_package_name__string;

                LoadNode_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&LoadNode_Request__g_tc_plugin_name__string;

                is_initialized = RTI_TRUE;

                return &LoadNode_Request__g_tc;
            }

            RTIBool LoadNode_Request__initialize(
                LoadNode_Request_* sample) {
                return composition::srv::dds_::LoadNode_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool LoadNode_Request__initialize_ex(
                LoadNode_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return composition::srv::dds_::LoadNode_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool LoadNode_Request__initialize_w_params(
                LoadNode_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->package_name_= DDS_String_alloc ((0));
                    if (sample->package_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->package_name_!= NULL) { 
                        sample->package_name_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->plugin_name_= DDS_String_alloc ((0));
                    if (sample->plugin_name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->plugin_name_!= NULL) { 
                        sample->plugin_name_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void LoadNode_Request__finalize(
                LoadNode_Request_* sample)
            {

                composition::srv::dds_::LoadNode_Request__finalize_ex(sample,RTI_TRUE);
            }

            void LoadNode_Request__finalize_ex(
                LoadNode_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                composition::srv::dds_::LoadNode_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void LoadNode_Request__finalize_w_params(
                LoadNode_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->package_name_ != NULL) {
                    DDS_String_free(sample->package_name_);
                    sample->package_name_=NULL;

                }
                if (sample->plugin_name_ != NULL) {
                    DDS_String_free(sample->plugin_name_);
                    sample->plugin_name_=NULL;

                }
            }

            void LoadNode_Request__finalize_optional_members(
                LoadNode_Request_* sample, RTIBool deletePointers)
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

            RTIBool LoadNode_Request__copy(
                LoadNode_Request_* dst,
                const LoadNode_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->package_name_, src->package_name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->plugin_name_, src->plugin_name_, 
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
            * Configure and implement 'LoadNode_Request_' sequence class.
            */
            #define T LoadNode_Request_
            #define TSeq LoadNode_Request_Seq

            #define T_initialize_w_params composition::srv::dds_::LoadNode_Request__initialize_w_params

            #define T_finalize_w_params   composition::srv::dds_::LoadNode_Request__finalize_w_params
            #define T_copy       composition::srv::dds_::LoadNode_Request__copy

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
} /* namespace composition  */

