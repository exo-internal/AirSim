

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DynamicArrayPrimitivesNested_.idl using "rtiddsgen".
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

#include "DynamicArrayPrimitivesNested_.h"

#include <new>

namespace test_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *DynamicArrayPrimitivesNested_TYPENAME = "test_msgs::msg::dds_::DynamicArrayPrimitivesNested_";

            DDS_TypeCode* DynamicArrayPrimitivesNested__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode DynamicArrayPrimitivesNested__g_tc_dynamic_array_primitive_values__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member DynamicArrayPrimitivesNested__g_tc_members[1]=
                {

                    {
                        (char *)"dynamic_array_primitive_values_",/* Member name */
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

                static DDS_TypeCode DynamicArrayPrimitivesNested__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::msg::dds_::DynamicArrayPrimitivesNested_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        DynamicArrayPrimitivesNested__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for DynamicArrayPrimitivesNested_*/

                if (is_initialized) {
                    return &DynamicArrayPrimitivesNested__g_tc;
                }

                DynamicArrayPrimitivesNested__g_tc_dynamic_array_primitive_values__sequence._data._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::DynamicArrayPrimitives__get_typecode();

                DynamicArrayPrimitivesNested__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& DynamicArrayPrimitivesNested__g_tc_dynamic_array_primitive_values__sequence;

                is_initialized = RTI_TRUE;

                return &DynamicArrayPrimitivesNested__g_tc;
            }

            RTIBool DynamicArrayPrimitivesNested__initialize(
                DynamicArrayPrimitivesNested_* sample) {
                return test_msgs::msg::dds_::DynamicArrayPrimitivesNested__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool DynamicArrayPrimitivesNested__initialize_ex(
                DynamicArrayPrimitivesNested_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::DynamicArrayPrimitivesNested__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool DynamicArrayPrimitivesNested__initialize_w_params(
                DynamicArrayPrimitivesNested_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    test_msgs::msg::dds_::DynamicArrayPrimitives_Seq_initialize(&sample->dynamic_array_primitive_values_ );
                    test_msgs::msg::dds_::DynamicArrayPrimitives_Seq_set_element_allocation_params(&sample->dynamic_array_primitive_values_ ,allocParams);
                    test_msgs::msg::dds_::DynamicArrayPrimitives_Seq_set_absolute_maximum(&sample->dynamic_array_primitive_values_ , RTI_INT32_MAX);
                    if (!test_msgs::msg::dds_::DynamicArrayPrimitives_Seq_set_maximum(&sample->dynamic_array_primitive_values_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    test_msgs::msg::dds_::DynamicArrayPrimitives_Seq_set_length(&sample->dynamic_array_primitive_values_, 0);
                }
                return RTI_TRUE;
            }

            void DynamicArrayPrimitivesNested__finalize(
                DynamicArrayPrimitivesNested_* sample)
            {

                test_msgs::msg::dds_::DynamicArrayPrimitivesNested__finalize_ex(sample,RTI_TRUE);
            }

            void DynamicArrayPrimitivesNested__finalize_ex(
                DynamicArrayPrimitivesNested_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::DynamicArrayPrimitivesNested__finalize_w_params(
                    sample,&deallocParams);
            }

            void DynamicArrayPrimitivesNested__finalize_w_params(
                DynamicArrayPrimitivesNested_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                test_msgs::msg::dds_::DynamicArrayPrimitives_Seq_set_element_deallocation_params(
                    &sample->dynamic_array_primitive_values_,deallocParams);
                test_msgs::msg::dds_::DynamicArrayPrimitives_Seq_finalize(&sample->dynamic_array_primitive_values_);

            }

            void DynamicArrayPrimitivesNested__finalize_optional_members(
                DynamicArrayPrimitivesNested_* sample, RTIBool deletePointers)
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

                {
                    DDS_UnsignedLong i, length;
                    length = test_msgs::msg::dds_::DynamicArrayPrimitives_Seq_get_length(
                        &sample->dynamic_array_primitive_values_);

                    for (i = 0; i < length; i++) {
                        test_msgs::msg::dds_::DynamicArrayPrimitives__finalize_optional_members(
                            test_msgs::msg::dds_::DynamicArrayPrimitives_Seq_get_reference(
                                &sample->dynamic_array_primitive_values_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool DynamicArrayPrimitivesNested__copy(
                DynamicArrayPrimitivesNested_* dst,
                const DynamicArrayPrimitivesNested_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!test_msgs::msg::dds_::DynamicArrayPrimitives_Seq_copy(&dst->dynamic_array_primitive_values_ ,
                    &src->dynamic_array_primitive_values_ )) {
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
            * Configure and implement 'DynamicArrayPrimitivesNested_' sequence class.
            */
            #define T DynamicArrayPrimitivesNested_
            #define TSeq DynamicArrayPrimitivesNested_Seq

            #define T_initialize_w_params test_msgs::msg::dds_::DynamicArrayPrimitivesNested__initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::DynamicArrayPrimitivesNested__finalize_w_params
            #define T_copy       test_msgs::msg::dds_::DynamicArrayPrimitivesNested__copy

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

