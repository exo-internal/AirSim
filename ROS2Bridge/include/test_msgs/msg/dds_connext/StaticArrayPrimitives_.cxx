

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from StaticArrayPrimitives_.idl using "rtiddsgen".
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

#include "StaticArrayPrimitives_.h"

#include <new>

namespace test_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */

            DDS_TypeCode* test_msgs__StaticArrayPrimitives__boolean_array_3_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__boolean_array_3_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__boolean_array_3_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__boolean_array_3", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE /* Ignored */
                    }}; /* Type code for  test_msgs__StaticArrayPrimitives__boolean_array_3 */

                if (is_initialized) {
                    return &test_msgs__StaticArrayPrimitives__boolean_array_3_g_tc;
                }

                test_msgs__StaticArrayPrimitives__boolean_array_3_g_tc_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_boolean;

                test_msgs__StaticArrayPrimitives__boolean_array_3_g_tc._data._typeCode =  (RTICdrTypeCode *)& test_msgs__StaticArrayPrimitives__boolean_array_3_g_tc_array;

                is_initialized = RTI_TRUE;

                return &test_msgs__StaticArrayPrimitives__boolean_array_3_g_tc;
            }

            RTIBool test_msgs__StaticArrayPrimitives__boolean_array_3_initialize(
                test_msgs__StaticArrayPrimitives__boolean_array_3* sample) {
                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__boolean_array_3_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool test_msgs__StaticArrayPrimitives__boolean_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__boolean_array_3* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__boolean_array_3_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool test_msgs__StaticArrayPrimitives__boolean_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__boolean_array_3* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    (*sample), (3), RTI_CDR_BOOLEAN_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void test_msgs__StaticArrayPrimitives__boolean_array_3_finalize(
                test_msgs__StaticArrayPrimitives__boolean_array_3* sample)
            {

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__boolean_array_3_finalize_ex(sample,RTI_TRUE);
            }

            void test_msgs__StaticArrayPrimitives__boolean_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__boolean_array_3* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__boolean_array_3_finalize_w_params(
                    sample,&deallocParams);
            }

            void test_msgs__StaticArrayPrimitives__boolean_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__boolean_array_3* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void test_msgs__StaticArrayPrimitives__boolean_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__boolean_array_3* sample, RTIBool deletePointers)
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

            RTIBool test_msgs__StaticArrayPrimitives__boolean_array_3_copy(
                test_msgs__StaticArrayPrimitives__boolean_array_3* dst,
                const test_msgs__StaticArrayPrimitives__boolean_array_3* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyArray(
                        (*dst) ,(*src),(3), RTI_CDR_BOOLEAN_SIZE)) {
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
            * Configure and implement 'test_msgs__StaticArrayPrimitives__boolean_array_3' sequence class.
            */
            #define T test_msgs__StaticArrayPrimitives__boolean_array_3
            #define TSeq test_msgs__StaticArrayPrimitives__boolean_array_3Seq

            #define T_initialize_w_params test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__boolean_array_3_initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__boolean_array_3_finalize_w_params
            #define T_copy       test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__boolean_array_3_copy

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

            DDS_TypeCode* test_msgs__StaticArrayPrimitives__octet_array_3_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__octet_array_3_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__octet_array_3_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE /* Ignored */
                    }}; /* Type code for  test_msgs__StaticArrayPrimitives__octet_array_3 */

                if (is_initialized) {
                    return &test_msgs__StaticArrayPrimitives__octet_array_3_g_tc;
                }

                test_msgs__StaticArrayPrimitives__octet_array_3_g_tc_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

                test_msgs__StaticArrayPrimitives__octet_array_3_g_tc._data._typeCode =  (RTICdrTypeCode *)& test_msgs__StaticArrayPrimitives__octet_array_3_g_tc_array;

                is_initialized = RTI_TRUE;

                return &test_msgs__StaticArrayPrimitives__octet_array_3_g_tc;
            }

            RTIBool test_msgs__StaticArrayPrimitives__octet_array_3_initialize(
                test_msgs__StaticArrayPrimitives__octet_array_3* sample) {
                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool test_msgs__StaticArrayPrimitives__octet_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__octet_array_3* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool test_msgs__StaticArrayPrimitives__octet_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__octet_array_3* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    (*sample), (3), RTI_CDR_OCTET_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void test_msgs__StaticArrayPrimitives__octet_array_3_finalize(
                test_msgs__StaticArrayPrimitives__octet_array_3* sample)
            {

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_finalize_ex(sample,RTI_TRUE);
            }

            void test_msgs__StaticArrayPrimitives__octet_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__octet_array_3* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_finalize_w_params(
                    sample,&deallocParams);
            }

            void test_msgs__StaticArrayPrimitives__octet_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__octet_array_3* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void test_msgs__StaticArrayPrimitives__octet_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__octet_array_3* sample, RTIBool deletePointers)
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

            RTIBool test_msgs__StaticArrayPrimitives__octet_array_3_copy(
                test_msgs__StaticArrayPrimitives__octet_array_3* dst,
                const test_msgs__StaticArrayPrimitives__octet_array_3* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyArray(
                        (*dst) ,(*src),(3), RTI_CDR_OCTET_SIZE)) {
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
            * Configure and implement 'test_msgs__StaticArrayPrimitives__octet_array_3' sequence class.
            */
            #define T test_msgs__StaticArrayPrimitives__octet_array_3
            #define TSeq test_msgs__StaticArrayPrimitives__octet_array_3Seq

            #define T_initialize_w_params test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_finalize_w_params
            #define T_copy       test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_copy

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

            DDS_TypeCode* test_msgs__StaticArrayPrimitives__char_array_3_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__char_array_3_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__char_array_3_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__char_array_3", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE /* Ignored */
                    }}; /* Type code for  test_msgs__StaticArrayPrimitives__char_array_3 */

                if (is_initialized) {
                    return &test_msgs__StaticArrayPrimitives__char_array_3_g_tc;
                }

                test_msgs__StaticArrayPrimitives__char_array_3_g_tc_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_char;

                test_msgs__StaticArrayPrimitives__char_array_3_g_tc._data._typeCode =  (RTICdrTypeCode *)& test_msgs__StaticArrayPrimitives__char_array_3_g_tc_array;

                is_initialized = RTI_TRUE;

                return &test_msgs__StaticArrayPrimitives__char_array_3_g_tc;
            }

            RTIBool test_msgs__StaticArrayPrimitives__char_array_3_initialize(
                test_msgs__StaticArrayPrimitives__char_array_3* sample) {
                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__char_array_3_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool test_msgs__StaticArrayPrimitives__char_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__char_array_3* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__char_array_3_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool test_msgs__StaticArrayPrimitives__char_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__char_array_3* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    (*sample), (3), RTI_CDR_CHAR_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void test_msgs__StaticArrayPrimitives__char_array_3_finalize(
                test_msgs__StaticArrayPrimitives__char_array_3* sample)
            {

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__char_array_3_finalize_ex(sample,RTI_TRUE);
            }

            void test_msgs__StaticArrayPrimitives__char_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__char_array_3* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__char_array_3_finalize_w_params(
                    sample,&deallocParams);
            }

            void test_msgs__StaticArrayPrimitives__char_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__char_array_3* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void test_msgs__StaticArrayPrimitives__char_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__char_array_3* sample, RTIBool deletePointers)
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

            RTIBool test_msgs__StaticArrayPrimitives__char_array_3_copy(
                test_msgs__StaticArrayPrimitives__char_array_3* dst,
                const test_msgs__StaticArrayPrimitives__char_array_3* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyArray(
                        (*dst) ,(*src),(3), RTI_CDR_CHAR_SIZE)) {
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
            * Configure and implement 'test_msgs__StaticArrayPrimitives__char_array_3' sequence class.
            */
            #define T test_msgs__StaticArrayPrimitives__char_array_3
            #define TSeq test_msgs__StaticArrayPrimitives__char_array_3Seq

            #define T_initialize_w_params test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__char_array_3_initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__char_array_3_finalize_w_params
            #define T_copy       test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__char_array_3_copy

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

            DDS_TypeCode* test_msgs__StaticArrayPrimitives__float_array_3_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__float_array_3_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__float_array_3_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__float_array_3", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE /* Ignored */
                    }}; /* Type code for  test_msgs__StaticArrayPrimitives__float_array_3 */

                if (is_initialized) {
                    return &test_msgs__StaticArrayPrimitives__float_array_3_g_tc;
                }

                test_msgs__StaticArrayPrimitives__float_array_3_g_tc_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_float;

                test_msgs__StaticArrayPrimitives__float_array_3_g_tc._data._typeCode =  (RTICdrTypeCode *)& test_msgs__StaticArrayPrimitives__float_array_3_g_tc_array;

                is_initialized = RTI_TRUE;

                return &test_msgs__StaticArrayPrimitives__float_array_3_g_tc;
            }

            RTIBool test_msgs__StaticArrayPrimitives__float_array_3_initialize(
                test_msgs__StaticArrayPrimitives__float_array_3* sample) {
                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__float_array_3_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool test_msgs__StaticArrayPrimitives__float_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__float_array_3* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__float_array_3_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool test_msgs__StaticArrayPrimitives__float_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__float_array_3* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    (*sample), (3), RTI_CDR_FLOAT_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void test_msgs__StaticArrayPrimitives__float_array_3_finalize(
                test_msgs__StaticArrayPrimitives__float_array_3* sample)
            {

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__float_array_3_finalize_ex(sample,RTI_TRUE);
            }

            void test_msgs__StaticArrayPrimitives__float_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__float_array_3* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__float_array_3_finalize_w_params(
                    sample,&deallocParams);
            }

            void test_msgs__StaticArrayPrimitives__float_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__float_array_3* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void test_msgs__StaticArrayPrimitives__float_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__float_array_3* sample, RTIBool deletePointers)
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

            RTIBool test_msgs__StaticArrayPrimitives__float_array_3_copy(
                test_msgs__StaticArrayPrimitives__float_array_3* dst,
                const test_msgs__StaticArrayPrimitives__float_array_3* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyArray(
                        (*dst) ,(*src),(3), RTI_CDR_FLOAT_SIZE)) {
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
            * Configure and implement 'test_msgs__StaticArrayPrimitives__float_array_3' sequence class.
            */
            #define T test_msgs__StaticArrayPrimitives__float_array_3
            #define TSeq test_msgs__StaticArrayPrimitives__float_array_3Seq

            #define T_initialize_w_params test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__float_array_3_initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__float_array_3_finalize_w_params
            #define T_copy       test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__float_array_3_copy

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

            DDS_TypeCode* test_msgs__StaticArrayPrimitives__double_array_3_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__double_array_3_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__double_array_3_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__double_array_3", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE /* Ignored */
                    }}; /* Type code for  test_msgs__StaticArrayPrimitives__double_array_3 */

                if (is_initialized) {
                    return &test_msgs__StaticArrayPrimitives__double_array_3_g_tc;
                }

                test_msgs__StaticArrayPrimitives__double_array_3_g_tc_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

                test_msgs__StaticArrayPrimitives__double_array_3_g_tc._data._typeCode =  (RTICdrTypeCode *)& test_msgs__StaticArrayPrimitives__double_array_3_g_tc_array;

                is_initialized = RTI_TRUE;

                return &test_msgs__StaticArrayPrimitives__double_array_3_g_tc;
            }

            RTIBool test_msgs__StaticArrayPrimitives__double_array_3_initialize(
                test_msgs__StaticArrayPrimitives__double_array_3* sample) {
                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__double_array_3_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool test_msgs__StaticArrayPrimitives__double_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__double_array_3* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__double_array_3_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool test_msgs__StaticArrayPrimitives__double_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__double_array_3* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    (*sample), (3), RTI_CDR_DOUBLE_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void test_msgs__StaticArrayPrimitives__double_array_3_finalize(
                test_msgs__StaticArrayPrimitives__double_array_3* sample)
            {

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__double_array_3_finalize_ex(sample,RTI_TRUE);
            }

            void test_msgs__StaticArrayPrimitives__double_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__double_array_3* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__double_array_3_finalize_w_params(
                    sample,&deallocParams);
            }

            void test_msgs__StaticArrayPrimitives__double_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__double_array_3* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void test_msgs__StaticArrayPrimitives__double_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__double_array_3* sample, RTIBool deletePointers)
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

            RTIBool test_msgs__StaticArrayPrimitives__double_array_3_copy(
                test_msgs__StaticArrayPrimitives__double_array_3* dst,
                const test_msgs__StaticArrayPrimitives__double_array_3* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyArray(
                        (*dst) ,(*src),(3), RTI_CDR_DOUBLE_SIZE)) {
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
            * Configure and implement 'test_msgs__StaticArrayPrimitives__double_array_3' sequence class.
            */
            #define T test_msgs__StaticArrayPrimitives__double_array_3
            #define TSeq test_msgs__StaticArrayPrimitives__double_array_3Seq

            #define T_initialize_w_params test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__double_array_3_initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__double_array_3_finalize_w_params
            #define T_copy       test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__double_array_3_copy

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

            DDS_TypeCode* test_msgs__StaticArrayPrimitives__short_array_3_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__short_array_3_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__short_array_3_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__short_array_3", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE /* Ignored */
                    }}; /* Type code for  test_msgs__StaticArrayPrimitives__short_array_3 */

                if (is_initialized) {
                    return &test_msgs__StaticArrayPrimitives__short_array_3_g_tc;
                }

                test_msgs__StaticArrayPrimitives__short_array_3_g_tc_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_short;

                test_msgs__StaticArrayPrimitives__short_array_3_g_tc._data._typeCode =  (RTICdrTypeCode *)& test_msgs__StaticArrayPrimitives__short_array_3_g_tc_array;

                is_initialized = RTI_TRUE;

                return &test_msgs__StaticArrayPrimitives__short_array_3_g_tc;
            }

            RTIBool test_msgs__StaticArrayPrimitives__short_array_3_initialize(
                test_msgs__StaticArrayPrimitives__short_array_3* sample) {
                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__short_array_3_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool test_msgs__StaticArrayPrimitives__short_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__short_array_3* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__short_array_3_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool test_msgs__StaticArrayPrimitives__short_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__short_array_3* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    (*sample), (3), RTI_CDR_SHORT_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void test_msgs__StaticArrayPrimitives__short_array_3_finalize(
                test_msgs__StaticArrayPrimitives__short_array_3* sample)
            {

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__short_array_3_finalize_ex(sample,RTI_TRUE);
            }

            void test_msgs__StaticArrayPrimitives__short_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__short_array_3* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__short_array_3_finalize_w_params(
                    sample,&deallocParams);
            }

            void test_msgs__StaticArrayPrimitives__short_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__short_array_3* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void test_msgs__StaticArrayPrimitives__short_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__short_array_3* sample, RTIBool deletePointers)
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

            RTIBool test_msgs__StaticArrayPrimitives__short_array_3_copy(
                test_msgs__StaticArrayPrimitives__short_array_3* dst,
                const test_msgs__StaticArrayPrimitives__short_array_3* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyArray(
                        (*dst) ,(*src),(3), RTI_CDR_SHORT_SIZE)) {
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
            * Configure and implement 'test_msgs__StaticArrayPrimitives__short_array_3' sequence class.
            */
            #define T test_msgs__StaticArrayPrimitives__short_array_3
            #define TSeq test_msgs__StaticArrayPrimitives__short_array_3Seq

            #define T_initialize_w_params test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__short_array_3_initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__short_array_3_finalize_w_params
            #define T_copy       test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__short_array_3_copy

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

            DDS_TypeCode* test_msgs__StaticArrayPrimitives__unsigned_short_array_3_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__unsigned_short_array_3_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__unsigned_short_array_3_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_short_array_3", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE /* Ignored */
                    }}; /* Type code for  test_msgs__StaticArrayPrimitives__unsigned_short_array_3 */

                if (is_initialized) {
                    return &test_msgs__StaticArrayPrimitives__unsigned_short_array_3_g_tc;
                }

                test_msgs__StaticArrayPrimitives__unsigned_short_array_3_g_tc_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ushort;

                test_msgs__StaticArrayPrimitives__unsigned_short_array_3_g_tc._data._typeCode =  (RTICdrTypeCode *)& test_msgs__StaticArrayPrimitives__unsigned_short_array_3_g_tc_array;

                is_initialized = RTI_TRUE;

                return &test_msgs__StaticArrayPrimitives__unsigned_short_array_3_g_tc;
            }

            RTIBool test_msgs__StaticArrayPrimitives__unsigned_short_array_3_initialize(
                test_msgs__StaticArrayPrimitives__unsigned_short_array_3* sample) {
                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_short_array_3_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool test_msgs__StaticArrayPrimitives__unsigned_short_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__unsigned_short_array_3* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_short_array_3_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool test_msgs__StaticArrayPrimitives__unsigned_short_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__unsigned_short_array_3* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    (*sample), (3), RTI_CDR_UNSIGNED_SHORT_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void test_msgs__StaticArrayPrimitives__unsigned_short_array_3_finalize(
                test_msgs__StaticArrayPrimitives__unsigned_short_array_3* sample)
            {

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_short_array_3_finalize_ex(sample,RTI_TRUE);
            }

            void test_msgs__StaticArrayPrimitives__unsigned_short_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__unsigned_short_array_3* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_short_array_3_finalize_w_params(
                    sample,&deallocParams);
            }

            void test_msgs__StaticArrayPrimitives__unsigned_short_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__unsigned_short_array_3* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void test_msgs__StaticArrayPrimitives__unsigned_short_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__unsigned_short_array_3* sample, RTIBool deletePointers)
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

            RTIBool test_msgs__StaticArrayPrimitives__unsigned_short_array_3_copy(
                test_msgs__StaticArrayPrimitives__unsigned_short_array_3* dst,
                const test_msgs__StaticArrayPrimitives__unsigned_short_array_3* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyArray(
                        (*dst) ,(*src),(3), RTI_CDR_UNSIGNED_SHORT_SIZE)) {
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
            * Configure and implement 'test_msgs__StaticArrayPrimitives__unsigned_short_array_3' sequence class.
            */
            #define T test_msgs__StaticArrayPrimitives__unsigned_short_array_3
            #define TSeq test_msgs__StaticArrayPrimitives__unsigned_short_array_3Seq

            #define T_initialize_w_params test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_short_array_3_initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_short_array_3_finalize_w_params
            #define T_copy       test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_short_array_3_copy

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

            DDS_TypeCode* test_msgs__StaticArrayPrimitives__long_array_3_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__long_array_3_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__long_array_3_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_array_3", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE /* Ignored */
                    }}; /* Type code for  test_msgs__StaticArrayPrimitives__long_array_3 */

                if (is_initialized) {
                    return &test_msgs__StaticArrayPrimitives__long_array_3_g_tc;
                }

                test_msgs__StaticArrayPrimitives__long_array_3_g_tc_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_long;

                test_msgs__StaticArrayPrimitives__long_array_3_g_tc._data._typeCode =  (RTICdrTypeCode *)& test_msgs__StaticArrayPrimitives__long_array_3_g_tc_array;

                is_initialized = RTI_TRUE;

                return &test_msgs__StaticArrayPrimitives__long_array_3_g_tc;
            }

            RTIBool test_msgs__StaticArrayPrimitives__long_array_3_initialize(
                test_msgs__StaticArrayPrimitives__long_array_3* sample) {
                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_array_3_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool test_msgs__StaticArrayPrimitives__long_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__long_array_3* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_array_3_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool test_msgs__StaticArrayPrimitives__long_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__long_array_3* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    (*sample), (3), RTI_CDR_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void test_msgs__StaticArrayPrimitives__long_array_3_finalize(
                test_msgs__StaticArrayPrimitives__long_array_3* sample)
            {

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_array_3_finalize_ex(sample,RTI_TRUE);
            }

            void test_msgs__StaticArrayPrimitives__long_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__long_array_3* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_array_3_finalize_w_params(
                    sample,&deallocParams);
            }

            void test_msgs__StaticArrayPrimitives__long_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__long_array_3* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void test_msgs__StaticArrayPrimitives__long_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__long_array_3* sample, RTIBool deletePointers)
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

            RTIBool test_msgs__StaticArrayPrimitives__long_array_3_copy(
                test_msgs__StaticArrayPrimitives__long_array_3* dst,
                const test_msgs__StaticArrayPrimitives__long_array_3* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyArray(
                        (*dst) ,(*src),(3), RTI_CDR_LONG_SIZE)) {
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
            * Configure and implement 'test_msgs__StaticArrayPrimitives__long_array_3' sequence class.
            */
            #define T test_msgs__StaticArrayPrimitives__long_array_3
            #define TSeq test_msgs__StaticArrayPrimitives__long_array_3Seq

            #define T_initialize_w_params test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_array_3_initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_array_3_finalize_w_params
            #define T_copy       test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_array_3_copy

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

            DDS_TypeCode* test_msgs__StaticArrayPrimitives__unsigned_long_array_3_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__unsigned_long_array_3_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__unsigned_long_array_3_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_array_3", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE /* Ignored */
                    }}; /* Type code for  test_msgs__StaticArrayPrimitives__unsigned_long_array_3 */

                if (is_initialized) {
                    return &test_msgs__StaticArrayPrimitives__unsigned_long_array_3_g_tc;
                }

                test_msgs__StaticArrayPrimitives__unsigned_long_array_3_g_tc_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulong;

                test_msgs__StaticArrayPrimitives__unsigned_long_array_3_g_tc._data._typeCode =  (RTICdrTypeCode *)& test_msgs__StaticArrayPrimitives__unsigned_long_array_3_g_tc_array;

                is_initialized = RTI_TRUE;

                return &test_msgs__StaticArrayPrimitives__unsigned_long_array_3_g_tc;
            }

            RTIBool test_msgs__StaticArrayPrimitives__unsigned_long_array_3_initialize(
                test_msgs__StaticArrayPrimitives__unsigned_long_array_3* sample) {
                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_array_3_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool test_msgs__StaticArrayPrimitives__unsigned_long_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__unsigned_long_array_3* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_array_3_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool test_msgs__StaticArrayPrimitives__unsigned_long_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__unsigned_long_array_3* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    (*sample), (3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void test_msgs__StaticArrayPrimitives__unsigned_long_array_3_finalize(
                test_msgs__StaticArrayPrimitives__unsigned_long_array_3* sample)
            {

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_array_3_finalize_ex(sample,RTI_TRUE);
            }

            void test_msgs__StaticArrayPrimitives__unsigned_long_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__unsigned_long_array_3* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_array_3_finalize_w_params(
                    sample,&deallocParams);
            }

            void test_msgs__StaticArrayPrimitives__unsigned_long_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__unsigned_long_array_3* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void test_msgs__StaticArrayPrimitives__unsigned_long_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__unsigned_long_array_3* sample, RTIBool deletePointers)
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

            RTIBool test_msgs__StaticArrayPrimitives__unsigned_long_array_3_copy(
                test_msgs__StaticArrayPrimitives__unsigned_long_array_3* dst,
                const test_msgs__StaticArrayPrimitives__unsigned_long_array_3* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyArray(
                        (*dst) ,(*src),(3), RTI_CDR_UNSIGNED_LONG_SIZE)) {
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
            * Configure and implement 'test_msgs__StaticArrayPrimitives__unsigned_long_array_3' sequence class.
            */
            #define T test_msgs__StaticArrayPrimitives__unsigned_long_array_3
            #define TSeq test_msgs__StaticArrayPrimitives__unsigned_long_array_3Seq

            #define T_initialize_w_params test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_array_3_initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_array_3_finalize_w_params
            #define T_copy       test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_array_3_copy

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

            DDS_TypeCode* test_msgs__StaticArrayPrimitives__long_long_array_3_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__long_long_array_3_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__long_long_array_3_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_long_array_3", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE /* Ignored */
                    }}; /* Type code for  test_msgs__StaticArrayPrimitives__long_long_array_3 */

                if (is_initialized) {
                    return &test_msgs__StaticArrayPrimitives__long_long_array_3_g_tc;
                }

                test_msgs__StaticArrayPrimitives__long_long_array_3_g_tc_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_longlong;

                test_msgs__StaticArrayPrimitives__long_long_array_3_g_tc._data._typeCode =  (RTICdrTypeCode *)& test_msgs__StaticArrayPrimitives__long_long_array_3_g_tc_array;

                is_initialized = RTI_TRUE;

                return &test_msgs__StaticArrayPrimitives__long_long_array_3_g_tc;
            }

            RTIBool test_msgs__StaticArrayPrimitives__long_long_array_3_initialize(
                test_msgs__StaticArrayPrimitives__long_long_array_3* sample) {
                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_long_array_3_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool test_msgs__StaticArrayPrimitives__long_long_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__long_long_array_3* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_long_array_3_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool test_msgs__StaticArrayPrimitives__long_long_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__long_long_array_3* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    (*sample), (3), RTI_CDR_LONG_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void test_msgs__StaticArrayPrimitives__long_long_array_3_finalize(
                test_msgs__StaticArrayPrimitives__long_long_array_3* sample)
            {

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_long_array_3_finalize_ex(sample,RTI_TRUE);
            }

            void test_msgs__StaticArrayPrimitives__long_long_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__long_long_array_3* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_long_array_3_finalize_w_params(
                    sample,&deallocParams);
            }

            void test_msgs__StaticArrayPrimitives__long_long_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__long_long_array_3* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void test_msgs__StaticArrayPrimitives__long_long_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__long_long_array_3* sample, RTIBool deletePointers)
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

            RTIBool test_msgs__StaticArrayPrimitives__long_long_array_3_copy(
                test_msgs__StaticArrayPrimitives__long_long_array_3* dst,
                const test_msgs__StaticArrayPrimitives__long_long_array_3* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyArray(
                        (*dst) ,(*src),(3), RTI_CDR_LONG_LONG_SIZE)) {
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
            * Configure and implement 'test_msgs__StaticArrayPrimitives__long_long_array_3' sequence class.
            */
            #define T test_msgs__StaticArrayPrimitives__long_long_array_3
            #define TSeq test_msgs__StaticArrayPrimitives__long_long_array_3Seq

            #define T_initialize_w_params test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_long_array_3_initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_long_array_3_finalize_w_params
            #define T_copy       test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_long_array_3_copy

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

            DDS_TypeCode* test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE /* Ignored */
                    }}; /* Type code for  test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3 */

                if (is_initialized) {
                    return &test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_g_tc;
                }

                test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_g_tc_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulonglong;

                test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_g_tc._data._typeCode =  (RTICdrTypeCode *)& test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_g_tc_array;

                is_initialized = RTI_TRUE;

                return &test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_g_tc;
            }

            RTIBool test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_initialize(
                test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3* sample) {
                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    (*sample), (3), RTI_CDR_UNSIGNED_LONG_LONG_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_finalize(
                test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3* sample)
            {

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_finalize_ex(sample,RTI_TRUE);
            }

            void test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_finalize_w_params(
                    sample,&deallocParams);
            }

            void test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3* sample, RTIBool deletePointers)
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

            RTIBool test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_copy(
                test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3* dst,
                const test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyArray(
                        (*dst) ,(*src),(3), RTI_CDR_UNSIGNED_LONG_LONG_SIZE)) {
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
            * Configure and implement 'test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3' sequence class.
            */
            #define T test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3
            #define TSeq test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3Seq

            #define T_initialize_w_params test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_finalize_w_params
            #define T_copy       test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_copy

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

            DDS_TypeCode* test_msgs__StaticArrayPrimitives__string_array_3_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__string_array_3_g_tc_string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode test_msgs__StaticArrayPrimitives__string_array_3_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,3, NULL,NULL);

                static DDS_TypeCode test_msgs__StaticArrayPrimitives__string_array_3_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__string_array_3", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE /* Ignored */
                    }}; /* Type code for  test_msgs__StaticArrayPrimitives__string_array_3 */

                if (is_initialized) {
                    return &test_msgs__StaticArrayPrimitives__string_array_3_g_tc;
                }

                test_msgs__StaticArrayPrimitives__string_array_3_g_tc_array._data._typeCode =(RTICdrTypeCode *)&test_msgs__StaticArrayPrimitives__string_array_3_g_tc_string;

                test_msgs__StaticArrayPrimitives__string_array_3_g_tc._data._typeCode =  (RTICdrTypeCode *)& test_msgs__StaticArrayPrimitives__string_array_3_g_tc_array;

                is_initialized = RTI_TRUE;

                return &test_msgs__StaticArrayPrimitives__string_array_3_g_tc;
            }

            RTIBool test_msgs__StaticArrayPrimitives__string_array_3_initialize(
                test_msgs__StaticArrayPrimitives__string_array_3* sample) {
                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__string_array_3_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool test_msgs__StaticArrayPrimitives__string_array_3_initialize_ex(
                test_msgs__StaticArrayPrimitives__string_array_3* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__string_array_3_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool test_msgs__StaticArrayPrimitives__string_array_3_initialize_w_params(
                test_msgs__StaticArrayPrimitives__string_array_3* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    if (!RTICdrType_initStringArray((*sample), (3),(0)+1,
                    RTI_CDR_CHAR_TYPE)) {
                        return RTI_FALSE;
                    }

                } else {
                    int i;    
                    DDS_Char ** elem =
                    (DDS_Char **)  sample;  
                    for (i=0;i < (int)((3));i++,++elem) {
                        if (*elem != NULL) {
                            *elem[0]   = '\0';
                        }
                    }
                }    

                return RTI_TRUE;
            }

            void test_msgs__StaticArrayPrimitives__string_array_3_finalize(
                test_msgs__StaticArrayPrimitives__string_array_3* sample)
            {

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__string_array_3_finalize_ex(sample,RTI_TRUE);
            }

            void test_msgs__StaticArrayPrimitives__string_array_3_finalize_ex(
                test_msgs__StaticArrayPrimitives__string_array_3* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__string_array_3_finalize_w_params(
                    sample,&deallocParams);
            }

            void test_msgs__StaticArrayPrimitives__string_array_3_finalize_w_params(
                test_msgs__StaticArrayPrimitives__string_array_3* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                RTICdrType_finalizeStringArray((*sample), (3), RTI_CDR_CHAR_TYPE);

            }

            void test_msgs__StaticArrayPrimitives__string_array_3_finalize_optional_members(
                test_msgs__StaticArrayPrimitives__string_array_3* sample, RTIBool deletePointers)
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

            RTIBool test_msgs__StaticArrayPrimitives__string_array_3_copy(
                test_msgs__StaticArrayPrimitives__string_array_3* dst,
                const test_msgs__StaticArrayPrimitives__string_array_3* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringArrayEx(
                        (*dst),  (*src),        
                        (3),(RTI_INT32_MAX-1) + 1 ,
                        RTI_CDR_CHAR_TYPE,RTI_TRUE)) {
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
            * Configure and implement 'test_msgs__StaticArrayPrimitives__string_array_3' sequence class.
            */
            #define T test_msgs__StaticArrayPrimitives__string_array_3
            #define TSeq test_msgs__StaticArrayPrimitives__string_array_3Seq

            #define T_initialize_w_params test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__string_array_3_initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__string_array_3_finalize_w_params
            #define T_copy       test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__string_array_3_copy

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
            const char *StaticArrayPrimitives_TYPENAME = "test_msgs::msg::dds_::StaticArrayPrimitives_";

            DDS_TypeCode* StaticArrayPrimitives__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member StaticArrayPrimitives__g_tc_members[14]=
                {

                    {
                        (char *)"bool_values_",/* Member name */
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
                        (char *)"byte_values_",/* Member name */
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
                        (char *)"char_values_",/* Member name */
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
                        (char *)"float32_values_",/* Member name */
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
                        (char *)"float64_values_",/* Member name */
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
                        (char *)"int8_values_",/* Member name */
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
                        (char *)"uint8_values_",/* Member name */
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
                        (char *)"int16_values_",/* Member name */
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
                        (char *)"uint16_values_",/* Member name */
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
                        (char *)"int32_values_",/* Member name */
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
                        (char *)"uint32_values_",/* Member name */
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
                        (char *)"int64_values_",/* Member name */
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
                        (char *)"uint64_values_",/* Member name */
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
                        (char *)"string_values_",/* Member name */
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

                static DDS_TypeCode StaticArrayPrimitives__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"test_msgs::msg::dds_::StaticArrayPrimitives_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        14, /* Number of members */
                        StaticArrayPrimitives__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for StaticArrayPrimitives_*/

                if (is_initialized) {
                    return &StaticArrayPrimitives__g_tc;
                }

                StaticArrayPrimitives__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__boolean_array_3_get_typecode();

                StaticArrayPrimitives__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_get_typecode();

                StaticArrayPrimitives__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__char_array_3_get_typecode();

                StaticArrayPrimitives__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__float_array_3_get_typecode();

                StaticArrayPrimitives__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__double_array_3_get_typecode();

                StaticArrayPrimitives__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_get_typecode();

                StaticArrayPrimitives__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_get_typecode();

                StaticArrayPrimitives__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__short_array_3_get_typecode();

                StaticArrayPrimitives__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_short_array_3_get_typecode();

                StaticArrayPrimitives__g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_array_3_get_typecode();

                StaticArrayPrimitives__g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_array_3_get_typecode();

                StaticArrayPrimitives__g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_long_array_3_get_typecode();

                StaticArrayPrimitives__g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_get_typecode();

                StaticArrayPrimitives__g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__string_array_3_get_typecode();

                is_initialized = RTI_TRUE;

                return &StaticArrayPrimitives__g_tc;
            }

            RTIBool StaticArrayPrimitives__initialize(
                StaticArrayPrimitives_* sample) {
                return test_msgs::msg::dds_::StaticArrayPrimitives__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool StaticArrayPrimitives__initialize_ex(
                StaticArrayPrimitives_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return test_msgs::msg::dds_::StaticArrayPrimitives__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool StaticArrayPrimitives__initialize_w_params(
                StaticArrayPrimitives_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__boolean_array_3_initialize_w_params(&sample->bool_values_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_initialize_w_params(&sample->byte_values_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__char_array_3_initialize_w_params(&sample->char_values_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__float_array_3_initialize_w_params(&sample->float32_values_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__double_array_3_initialize_w_params(&sample->float64_values_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_initialize_w_params(&sample->int8_values_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_initialize_w_params(&sample->uint8_values_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__short_array_3_initialize_w_params(&sample->int16_values_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_short_array_3_initialize_w_params(&sample->uint16_values_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_array_3_initialize_w_params(&sample->int32_values_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_array_3_initialize_w_params(&sample->uint32_values_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_long_array_3_initialize_w_params(&sample->int64_values_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_initialize_w_params(&sample->uint64_values_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__string_array_3_initialize_w_params(&sample->string_values_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void StaticArrayPrimitives__finalize(
                StaticArrayPrimitives_* sample)
            {

                test_msgs::msg::dds_::StaticArrayPrimitives__finalize_ex(sample,RTI_TRUE);
            }

            void StaticArrayPrimitives__finalize_ex(
                StaticArrayPrimitives_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                test_msgs::msg::dds_::StaticArrayPrimitives__finalize_w_params(
                    sample,&deallocParams);
            }

            void StaticArrayPrimitives__finalize_w_params(
                StaticArrayPrimitives_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__boolean_array_3_finalize_w_params(&sample->bool_values_,deallocParams);

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_finalize_w_params(&sample->byte_values_,deallocParams);

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__char_array_3_finalize_w_params(&sample->char_values_,deallocParams);

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__float_array_3_finalize_w_params(&sample->float32_values_,deallocParams);

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__double_array_3_finalize_w_params(&sample->float64_values_,deallocParams);

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_finalize_w_params(&sample->int8_values_,deallocParams);

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_finalize_w_params(&sample->uint8_values_,deallocParams);

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__short_array_3_finalize_w_params(&sample->int16_values_,deallocParams);

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_short_array_3_finalize_w_params(&sample->uint16_values_,deallocParams);

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_array_3_finalize_w_params(&sample->int32_values_,deallocParams);

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_array_3_finalize_w_params(&sample->uint32_values_,deallocParams);

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_long_array_3_finalize_w_params(&sample->int64_values_,deallocParams);

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_finalize_w_params(&sample->uint64_values_,deallocParams);

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__string_array_3_finalize_w_params(&sample->string_values_,deallocParams);

            }

            void StaticArrayPrimitives__finalize_optional_members(
                StaticArrayPrimitives_* sample, RTIBool deletePointers)
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

                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__boolean_array_3_finalize_optional_members(&sample->bool_values_, deallocParams->delete_pointers);
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_finalize_optional_members(&sample->byte_values_, deallocParams->delete_pointers);
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__char_array_3_finalize_optional_members(&sample->char_values_, deallocParams->delete_pointers);
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__float_array_3_finalize_optional_members(&sample->float32_values_, deallocParams->delete_pointers);
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__double_array_3_finalize_optional_members(&sample->float64_values_, deallocParams->delete_pointers);
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_finalize_optional_members(&sample->int8_values_, deallocParams->delete_pointers);
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_finalize_optional_members(&sample->uint8_values_, deallocParams->delete_pointers);
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__short_array_3_finalize_optional_members(&sample->int16_values_, deallocParams->delete_pointers);
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_short_array_3_finalize_optional_members(&sample->uint16_values_, deallocParams->delete_pointers);
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_array_3_finalize_optional_members(&sample->int32_values_, deallocParams->delete_pointers);
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_array_3_finalize_optional_members(&sample->uint32_values_, deallocParams->delete_pointers);
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_long_array_3_finalize_optional_members(&sample->int64_values_, deallocParams->delete_pointers);
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_finalize_optional_members(&sample->uint64_values_, deallocParams->delete_pointers);
                test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__string_array_3_finalize_optional_members(&sample->string_values_, deallocParams->delete_pointers);
            }

            RTIBool StaticArrayPrimitives__copy(
                StaticArrayPrimitives_* dst,
                const StaticArrayPrimitives_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__boolean_array_3_copy(
                        &dst->bool_values_,(const test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__boolean_array_3*)&src->bool_values_)) {
                        return RTI_FALSE;
                    } 
                    if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_copy(
                        &dst->byte_values_,(const test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3*)&src->byte_values_)) {
                        return RTI_FALSE;
                    } 
                    if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__char_array_3_copy(
                        &dst->char_values_,(const test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__char_array_3*)&src->char_values_)) {
                        return RTI_FALSE;
                    } 
                    if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__float_array_3_copy(
                        &dst->float32_values_,(const test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__float_array_3*)&src->float32_values_)) {
                        return RTI_FALSE;
                    } 
                    if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__double_array_3_copy(
                        &dst->float64_values_,(const test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__double_array_3*)&src->float64_values_)) {
                        return RTI_FALSE;
                    } 
                    if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_copy(
                        &dst->int8_values_,(const test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3*)&src->int8_values_)) {
                        return RTI_FALSE;
                    } 
                    if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3_copy(
                        &dst->uint8_values_,(const test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__octet_array_3*)&src->uint8_values_)) {
                        return RTI_FALSE;
                    } 
                    if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__short_array_3_copy(
                        &dst->int16_values_,(const test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__short_array_3*)&src->int16_values_)) {
                        return RTI_FALSE;
                    } 
                    if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_short_array_3_copy(
                        &dst->uint16_values_,(const test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_short_array_3*)&src->uint16_values_)) {
                        return RTI_FALSE;
                    } 
                    if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_array_3_copy(
                        &dst->int32_values_,(const test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_array_3*)&src->int32_values_)) {
                        return RTI_FALSE;
                    } 
                    if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_array_3_copy(
                        &dst->uint32_values_,(const test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_array_3*)&src->uint32_values_)) {
                        return RTI_FALSE;
                    } 
                    if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_long_array_3_copy(
                        &dst->int64_values_,(const test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__long_long_array_3*)&src->int64_values_)) {
                        return RTI_FALSE;
                    } 
                    if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3_copy(
                        &dst->uint64_values_,(const test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__unsigned_long_long_array_3*)&src->uint64_values_)) {
                        return RTI_FALSE;
                    } 
                    if (!test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__string_array_3_copy(
                        &dst->string_values_,(const test_msgs::msg::dds_::test_msgs__StaticArrayPrimitives__string_array_3*)&src->string_values_)) {
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
            * Configure and implement 'StaticArrayPrimitives_' sequence class.
            */
            #define T StaticArrayPrimitives_
            #define TSeq StaticArrayPrimitives_Seq

            #define T_initialize_w_params test_msgs::msg::dds_::StaticArrayPrimitives__initialize_w_params

            #define T_finalize_w_params   test_msgs::msg::dds_::StaticArrayPrimitives__finalize_w_params
            #define T_copy       test_msgs::msg::dds_::StaticArrayPrimitives__copy

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

