

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Plane_.idl using "rtiddsgen".
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

#include "Plane_.h"

#include <new>

namespace shape_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */

            DDS_TypeCode* shape_msgs__Plane__double_array_4_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode shape_msgs__Plane__double_array_4_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,4, NULL,NULL);

                static DDS_TypeCode shape_msgs__Plane__double_array_4_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE /* Ignored */
                    }}; /* Type code for  shape_msgs__Plane__double_array_4 */

                if (is_initialized) {
                    return &shape_msgs__Plane__double_array_4_g_tc;
                }

                shape_msgs__Plane__double_array_4_g_tc_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

                shape_msgs__Plane__double_array_4_g_tc._data._typeCode =  (RTICdrTypeCode *)& shape_msgs__Plane__double_array_4_g_tc_array;

                is_initialized = RTI_TRUE;

                return &shape_msgs__Plane__double_array_4_g_tc;
            }

            RTIBool shape_msgs__Plane__double_array_4_initialize(
                shape_msgs__Plane__double_array_4* sample) {
                return shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool shape_msgs__Plane__double_array_4_initialize_ex(
                shape_msgs__Plane__double_array_4* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool shape_msgs__Plane__double_array_4_initialize_w_params(
                shape_msgs__Plane__double_array_4* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    (*sample), (4), RTI_CDR_DOUBLE_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void shape_msgs__Plane__double_array_4_finalize(
                shape_msgs__Plane__double_array_4* sample)
            {

                shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_finalize_ex(sample,RTI_TRUE);
            }

            void shape_msgs__Plane__double_array_4_finalize_ex(
                shape_msgs__Plane__double_array_4* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_finalize_w_params(
                    sample,&deallocParams);
            }

            void shape_msgs__Plane__double_array_4_finalize_w_params(
                shape_msgs__Plane__double_array_4* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void shape_msgs__Plane__double_array_4_finalize_optional_members(
                shape_msgs__Plane__double_array_4* sample, RTIBool deletePointers)
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

            RTIBool shape_msgs__Plane__double_array_4_copy(
                shape_msgs__Plane__double_array_4* dst,
                const shape_msgs__Plane__double_array_4* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyArray(
                        (*dst) ,(*src),(4), RTI_CDR_DOUBLE_SIZE)) {
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
            * Configure and implement 'shape_msgs__Plane__double_array_4' sequence class.
            */
            #define T shape_msgs__Plane__double_array_4
            #define TSeq shape_msgs__Plane__double_array_4Seq

            #define T_initialize_w_params shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_initialize_w_params

            #define T_finalize_w_params   shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_finalize_w_params
            #define T_copy       shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_copy

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
            const char *Plane_TYPENAME = "shape_msgs::msg::dds_::Plane_";

            DDS_TypeCode* Plane__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Plane__g_tc_members[1]=
                {

                    {
                        (char *)"coef_",/* Member name */
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

                static DDS_TypeCode Plane__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"shape_msgs::msg::dds_::Plane_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        Plane__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Plane_*/

                if (is_initialized) {
                    return &Plane__g_tc;
                }

                Plane__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_get_typecode();

                is_initialized = RTI_TRUE;

                return &Plane__g_tc;
            }

            RTIBool Plane__initialize(
                Plane_* sample) {
                return shape_msgs::msg::dds_::Plane__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Plane__initialize_ex(
                Plane_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return shape_msgs::msg::dds_::Plane__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Plane__initialize_w_params(
                Plane_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_initialize_w_params(&sample->coef_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void Plane__finalize(
                Plane_* sample)
            {

                shape_msgs::msg::dds_::Plane__finalize_ex(sample,RTI_TRUE);
            }

            void Plane__finalize_ex(
                Plane_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                shape_msgs::msg::dds_::Plane__finalize_w_params(
                    sample,&deallocParams);
            }

            void Plane__finalize_w_params(
                Plane_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_finalize_w_params(&sample->coef_,deallocParams);

            }

            void Plane__finalize_optional_members(
                Plane_* sample, RTIBool deletePointers)
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

                shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_finalize_optional_members(&sample->coef_, deallocParams->delete_pointers);
            }

            RTIBool Plane__copy(
                Plane_* dst,
                const Plane_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4_copy(
                        &dst->coef_,(const shape_msgs::msg::dds_::shape_msgs__Plane__double_array_4*)&src->coef_)) {
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
            * Configure and implement 'Plane_' sequence class.
            */
            #define T Plane_
            #define TSeq Plane_Seq

            #define T_initialize_w_params shape_msgs::msg::dds_::Plane__initialize_w_params

            #define T_finalize_w_params   shape_msgs::msg::dds_::Plane__finalize_w_params
            #define T_copy       shape_msgs::msg::dds_::Plane__copy

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
} /* namespace shape_msgs  */

