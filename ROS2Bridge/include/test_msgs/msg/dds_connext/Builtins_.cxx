

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Builtins_.idl using "rtiddsgen".
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

#include "Builtins_.h"

#include <new>

namespace test_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Builtins_TYPENAME = "test_msgs::msg::dds_::Builtins_";

            DDS_TypeCode* Builtins__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Builtins__g_tc_members[2]=
                {

                    {
                        (char *)"duration_value_",/* Member name */
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
                        (char *)"time_value_",/* Member name */
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

                static DDS_TypeCode Builtins__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::msg::dds_::Builtins_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Builtins__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Builtins_*/

                if (is_initialized) {
                    return &Builtins__g_tc;
                }

                Builtins__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Duration__get_typecode();

                Builtins__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                is_initialized = RTI_TRUE;

                return &Builtins__g_tc;
            }

            RTIBool Builtins__initialize(
                Builtins_* sample) {
                return test_msgs::msg::dds_::Builtins__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Builtins__initialize_ex(
                Builtins_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::Builtins__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Builtins__initialize_w_params(
                Builtins_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!builtin_interfaces::msg::dds_::Duration__initialize_w_params(&sample->duration_value_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!builtin_interfaces::msg::dds_::Time__initialize_w_params(&sample->time_value_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void Builtins__finalize(
                Builtins_* sample)
            {

                test_msgs::msg::dds_::Builtins__finalize_ex(sample,RTI_TRUE);
            }

            void Builtins__finalize_ex(
                Builtins_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::Builtins__finalize_w_params(
                    sample,&deallocParams);
            }

            void Builtins__finalize_w_params(
                Builtins_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                builtin_interfaces::msg::dds_::Duration__finalize_w_params(&sample->duration_value_,deallocParams);

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->time_value_,deallocParams);

            }

            void Builtins__finalize_optional_members(
                Builtins_* sample, RTIBool deletePointers)
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

                builtin_interfaces::msg::dds_::Duration__finalize_optional_members(&sample->duration_value_, deallocParams->delete_pointers);
                builtin_interfaces::msg::dds_::Time__finalize_optional_members(&sample->time_value_, deallocParams->delete_pointers);
            }

            RTIBool Builtins__copy(
                Builtins_* dst,
                const Builtins_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!builtin_interfaces::msg::dds_::Duration__copy(
                        &dst->duration_value_,(const builtin_interfaces::msg::dds_::Duration_*)&src->duration_value_)) {
                        return RTI_FALSE;
                    } 
                    if (!builtin_interfaces::msg::dds_::Time__copy(
                        &dst->time_value_,(const builtin_interfaces::msg::dds_::Time_*)&src->time_value_)) {
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
            * Configure and implement 'Builtins_' sequence class.
            */
            #define T Builtins_
            #define TSeq Builtins_Seq

            #define T_initialize_w_params test_msgs::msg::dds_::Builtins__initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::Builtins__finalize_w_params
            #define T_copy       test_msgs::msg::dds_::Builtins__copy

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
    } /* namespace msg  */
} /* namespace test_msgs  */

