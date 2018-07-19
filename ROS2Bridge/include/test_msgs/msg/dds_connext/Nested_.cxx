

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Nested_.idl using "rtiddsgen".
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

#include "Nested_.h"

#include <new>

namespace test_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Nested_TYPENAME = "test_msgs::msg::dds_::Nested_";

            DDS_TypeCode* Nested__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Nested__g_tc_members[1]=
                {

                    {
                        (char *)"primitive_values_",/* Member name */
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

                static DDS_TypeCode Nested__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::msg::dds_::Nested_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        Nested__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Nested_*/

                if (is_initialized) {
                    return &Nested__g_tc;
                }

                Nested__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::Primitives__get_typecode();

                is_initialized = RTI_TRUE;

                return &Nested__g_tc;
            }

            RTIBool Nested__initialize(
                Nested_* sample) {
                return test_msgs::msg::dds_::Nested__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Nested__initialize_ex(
                Nested_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::Nested__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Nested__initialize_w_params(
                Nested_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!test_msgs::msg::dds_::Primitives__initialize_w_params(&sample->primitive_values_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void Nested__finalize(
                Nested_* sample)
            {

                test_msgs::msg::dds_::Nested__finalize_ex(sample,RTI_TRUE);
            }

            void Nested__finalize_ex(
                Nested_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::Nested__finalize_w_params(
                    sample,&deallocParams);
            }

            void Nested__finalize_w_params(
                Nested_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                test_msgs::msg::dds_::Primitives__finalize_w_params(&sample->primitive_values_,deallocParams);

            }

            void Nested__finalize_optional_members(
                Nested_* sample, RTIBool deletePointers)
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

                test_msgs::msg::dds_::Primitives__finalize_optional_members(&sample->primitive_values_, deallocParams->delete_pointers);
            }

            RTIBool Nested__copy(
                Nested_* dst,
                const Nested_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!test_msgs::msg::dds_::Primitives__copy(
                        &dst->primitive_values_,(const test_msgs::msg::dds_::Primitives_*)&src->primitive_values_)) {
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
            * Configure and implement 'Nested_' sequence class.
            */
            #define T Nested_
            #define TSeq Nested_Seq

            #define T_initialize_w_params test_msgs::msg::dds_::Nested__initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::Nested__finalize_w_params
            #define T_copy       test_msgs::msg::dds_::Nested__copy

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

