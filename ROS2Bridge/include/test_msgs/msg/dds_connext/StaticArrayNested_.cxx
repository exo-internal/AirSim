

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StaticArrayNested_.idl using "rtiddsgen".
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

#include "StaticArrayNested_.h"

#include <new>

namespace test_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */

            DDS_TypeCode* test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);

                static DDS_TypeCode test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"test_msgs::msg::dds_::test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE /* Ignored */
                    }}; /* Type code for  test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4 */

                if (is_initialized) {
                    return &test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_g_tc;
                }

                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_g_tc_array._data._typeCode =(RTICdrTypeCode *)test_msgs::msg::dds_::Primitives__get_typecode();

                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_g_tc._data._typeCode =  (RTICdrTypeCode *)& test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_g_tc_array;

                is_initialized = RTI_TRUE;

                return &test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_g_tc;
            }

            RTIBool test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_initialize(
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4* sample) {
                return test_msgs::msg::dds_::test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_initialize_ex(
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_initialize_w_params(
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                {
                    int i = 0;
                    test_msgs::msg::dds_::Primitives_* elem =
                    (test_msgs::msg::dds_::Primitives_*) sample[0];

                    for (i = 0; i < (int) ((4)); ++i, ++elem) {
                        if (!test_msgs::msg::dds_::Primitives__initialize_w_params(elem,allocParams)) {
                            return RTI_FALSE;
                        }
                    }
                }
                return RTI_TRUE;
            }

            void test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_finalize(
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4* sample)
            {

                test_msgs::msg::dds_::test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_finalize_ex(sample,RTI_TRUE);
            }

            void test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_finalize_ex(
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_finalize_w_params(
                    sample,&deallocParams);
            }

            void test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_finalize_w_params(
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                {
                    int i = 0;
                    test_msgs::msg::dds_::Primitives_* elem =
                    (test_msgs::msg::dds_::Primitives_*) sample[0];

                    for (i = 0; i < (int) ((4)); ++i, ++elem) {
                        test_msgs::msg::dds_::Primitives__finalize_w_params(elem,deallocParams);
                    }
                }

            }

            void test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_finalize_optional_members(
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4* sample, RTIBool deletePointers)
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
                    int i = 0;
                    test_msgs::msg::dds_::Primitives_* elem =
                    (test_msgs::msg::dds_::Primitives_*) sample[0];

                    for (i = 0; i < (int) ((4)); ++i, ++elem) {
                        test_msgs::msg::dds_::Primitives__finalize_optional_members(elem, deallocParams->delete_pointers);
                    }
                }
            }

            RTIBool test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_copy(
                test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4* dst,
                const test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    {
                        int i = 0;
                        test_msgs::msg::dds_::Primitives_* elemOut = (test_msgs::msg::dds_::Primitives_*) dst[0];
                        const test_msgs::msg::dds_::Primitives_* elemIn = (const test_msgs::msg::dds_::Primitives_*) src[0];
                        for (i = 0; i < (int) ((4));++i, ++elemOut, ++elemIn) {
                            if (!test_msgs::msg::dds_::Primitives__copy (elemOut,(const test_msgs::msg::dds_::Primitives_*)elemIn)) {
                                return RTI_FALSE;
                            }
                        }
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
            * Configure and implement 'test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4' sequence class.
            */
            #define T test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4
            #define TSeq test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4Seq

            #define T_initialize_w_params test_msgs::msg::dds_::test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_finalize_w_params
            #define T_copy       test_msgs::msg::dds_::test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_copy

            #define T_no_get  
            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_no_get  

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T

            /* ========================================================================= */
            const char *StaticArrayNested_TYPENAME = "test_msgs::msg::dds_::StaticArrayNested_";

            DDS_TypeCode* StaticArrayNested__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member StaticArrayNested__g_tc_members[1]=
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

                static DDS_TypeCode StaticArrayNested__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::msg::dds_::StaticArrayNested_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        StaticArrayNested__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for StaticArrayNested_*/

                if (is_initialized) {
                    return &StaticArrayNested__g_tc;
                }

                StaticArrayNested__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_get_typecode();

                is_initialized = RTI_TRUE;

                return &StaticArrayNested__g_tc;
            }

            RTIBool StaticArrayNested__initialize(
                StaticArrayNested_* sample) {
                return test_msgs::msg::dds_::StaticArrayNested__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool StaticArrayNested__initialize_ex(
                StaticArrayNested_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::StaticArrayNested__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool StaticArrayNested__initialize_w_params(
                StaticArrayNested_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!test_msgs::msg::dds_::test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_initialize_w_params(&sample->primitive_values_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void StaticArrayNested__finalize(
                StaticArrayNested_* sample)
            {

                test_msgs::msg::dds_::StaticArrayNested__finalize_ex(sample,RTI_TRUE);
            }

            void StaticArrayNested__finalize_ex(
                StaticArrayNested_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::StaticArrayNested__finalize_w_params(
                    sample,&deallocParams);
            }

            void StaticArrayNested__finalize_w_params(
                StaticArrayNested_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                test_msgs::msg::dds_::test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_finalize_w_params(&sample->primitive_values_,deallocParams);

            }

            void StaticArrayNested__finalize_optional_members(
                StaticArrayNested_* sample, RTIBool deletePointers)
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

                test_msgs::msg::dds_::test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_finalize_optional_members(&sample->primitive_values_, deallocParams->delete_pointers);
            }

            RTIBool StaticArrayNested__copy(
                StaticArrayNested_* dst,
                const StaticArrayNested_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!test_msgs::msg::dds_::test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4_copy(
                        &dst->primitive_values_,(const test_msgs::msg::dds_::test_msgs__StaticArrayNested__test_msgs__msg__dds___Primitives__array_4*)&src->primitive_values_)) {
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
            * Configure and implement 'StaticArrayNested_' sequence class.
            */
            #define T StaticArrayNested_
            #define TSeq StaticArrayNested_Seq

            #define T_initialize_w_params test_msgs::msg::dds_::StaticArrayNested__initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::StaticArrayNested__finalize_w_params
            #define T_copy       test_msgs::msg::dds_::StaticArrayNested__copy

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

