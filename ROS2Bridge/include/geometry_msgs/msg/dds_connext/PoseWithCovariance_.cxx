

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PoseWithCovariance_.idl using "rtiddsgen".
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

#include "PoseWithCovariance_.h"

#include <new>

namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */

            DDS_TypeCode* geometry_msgs__PoseWithCovariance__double_array_36_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode geometry_msgs__PoseWithCovariance__double_array_36_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,36, NULL,NULL);

                static DDS_TypeCode geometry_msgs__PoseWithCovariance__double_array_36_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"geometry_msgs::msg::dds_::geometry_msgs__PoseWithCovariance__double_array_36", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE /* Ignored */
                    }}; /* Type code for  geometry_msgs__PoseWithCovariance__double_array_36 */

                if (is_initialized) {
                    return &geometry_msgs__PoseWithCovariance__double_array_36_g_tc;
                }

                geometry_msgs__PoseWithCovariance__double_array_36_g_tc_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

                geometry_msgs__PoseWithCovariance__double_array_36_g_tc._data._typeCode =  (RTICdrTypeCode *)& geometry_msgs__PoseWithCovariance__double_array_36_g_tc_array;

                is_initialized = RTI_TRUE;

                return &geometry_msgs__PoseWithCovariance__double_array_36_g_tc;
            }

            RTIBool geometry_msgs__PoseWithCovariance__double_array_36_initialize(
                geometry_msgs__PoseWithCovariance__double_array_36* sample) {
                return geometry_msgs::msg::dds_::geometry_msgs__PoseWithCovariance__double_array_36_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool geometry_msgs__PoseWithCovariance__double_array_36_initialize_ex(
                geometry_msgs__PoseWithCovariance__double_array_36* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return geometry_msgs::msg::dds_::geometry_msgs__PoseWithCovariance__double_array_36_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool geometry_msgs__PoseWithCovariance__double_array_36_initialize_w_params(
                geometry_msgs__PoseWithCovariance__double_array_36* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    (*sample), (36), RTI_CDR_DOUBLE_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void geometry_msgs__PoseWithCovariance__double_array_36_finalize(
                geometry_msgs__PoseWithCovariance__double_array_36* sample)
            {

                geometry_msgs::msg::dds_::geometry_msgs__PoseWithCovariance__double_array_36_finalize_ex(sample,RTI_TRUE);
            }

            void geometry_msgs__PoseWithCovariance__double_array_36_finalize_ex(
                geometry_msgs__PoseWithCovariance__double_array_36* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                geometry_msgs::msg::dds_::geometry_msgs__PoseWithCovariance__double_array_36_finalize_w_params(
                    sample,&deallocParams);
            }

            void geometry_msgs__PoseWithCovariance__double_array_36_finalize_w_params(
                geometry_msgs__PoseWithCovariance__double_array_36* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void geometry_msgs__PoseWithCovariance__double_array_36_finalize_optional_members(
                geometry_msgs__PoseWithCovariance__double_array_36* sample, RTIBool deletePointers)
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

            RTIBool geometry_msgs__PoseWithCovariance__double_array_36_copy(
                geometry_msgs__PoseWithCovariance__double_array_36* dst,
                const geometry_msgs__PoseWithCovariance__double_array_36* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyArray(
                        (*dst) ,(*src),(36), RTI_CDR_DOUBLE_SIZE)) {
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
            * Configure and implement 'geometry_msgs__PoseWithCovariance__double_array_36' sequence class.
            */
            #define T geometry_msgs__PoseWithCovariance__double_array_36
            #define TSeq geometry_msgs__PoseWithCovariance__double_array_36Seq

            #define T_initialize_w_params geometry_msgs::msg::dds_::geometry_msgs__PoseWithCovariance__double_array_36_initialize_w_params

            #define T_finalize_w_params   geometry_msgs::msg::dds_::geometry_msgs__PoseWithCovariance__double_array_36_finalize_w_params
            #define T_copy       geometry_msgs::msg::dds_::geometry_msgs__PoseWithCovariance__double_array_36_copy

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
            const char *PoseWithCovariance_TYPENAME = "geometry_msgs::msg::dds_::PoseWithCovariance_";

            DDS_TypeCode* PoseWithCovariance__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PoseWithCovariance__g_tc_members[2]=
                {

                    {
                        (char *)"pose_",/* Member name */
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
                        (char *)"covariance_",/* Member name */
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

                static DDS_TypeCode PoseWithCovariance__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"geometry_msgs::msg::dds_::PoseWithCovariance_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        PoseWithCovariance__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PoseWithCovariance_*/

                if (is_initialized) {
                    return &PoseWithCovariance__g_tc;
                }

                PoseWithCovariance__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Pose__get_typecode();

                PoseWithCovariance__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::geometry_msgs__PoseWithCovariance__double_array_36_get_typecode();

                is_initialized = RTI_TRUE;

                return &PoseWithCovariance__g_tc;
            }

            RTIBool PoseWithCovariance__initialize(
                PoseWithCovariance_* sample) {
                return geometry_msgs::msg::dds_::PoseWithCovariance__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PoseWithCovariance__initialize_ex(
                PoseWithCovariance_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return geometry_msgs::msg::dds_::PoseWithCovariance__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PoseWithCovariance__initialize_w_params(
                PoseWithCovariance_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!geometry_msgs::msg::dds_::Pose__initialize_w_params(&sample->pose_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!geometry_msgs::msg::dds_::geometry_msgs__PoseWithCovariance__double_array_36_initialize_w_params(&sample->covariance_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void PoseWithCovariance__finalize(
                PoseWithCovariance_* sample)
            {

                geometry_msgs::msg::dds_::PoseWithCovariance__finalize_ex(sample,RTI_TRUE);
            }

            void PoseWithCovariance__finalize_ex(
                PoseWithCovariance_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                geometry_msgs::msg::dds_::PoseWithCovariance__finalize_w_params(
                    sample,&deallocParams);
            }

            void PoseWithCovariance__finalize_w_params(
                PoseWithCovariance_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                geometry_msgs::msg::dds_::Pose__finalize_w_params(&sample->pose_,deallocParams);

                geometry_msgs::msg::dds_::geometry_msgs__PoseWithCovariance__double_array_36_finalize_w_params(&sample->covariance_,deallocParams);

            }

            void PoseWithCovariance__finalize_optional_members(
                PoseWithCovariance_* sample, RTIBool deletePointers)
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

                geometry_msgs::msg::dds_::Pose__finalize_optional_members(&sample->pose_, deallocParams->delete_pointers);
                geometry_msgs::msg::dds_::geometry_msgs__PoseWithCovariance__double_array_36_finalize_optional_members(&sample->covariance_, deallocParams->delete_pointers);
            }

            RTIBool PoseWithCovariance__copy(
                PoseWithCovariance_* dst,
                const PoseWithCovariance_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!geometry_msgs::msg::dds_::Pose__copy(
                        &dst->pose_,(const geometry_msgs::msg::dds_::Pose_*)&src->pose_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::geometry_msgs__PoseWithCovariance__double_array_36_copy(
                        &dst->covariance_,(const geometry_msgs::msg::dds_::geometry_msgs__PoseWithCovariance__double_array_36*)&src->covariance_)) {
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
            * Configure and implement 'PoseWithCovariance_' sequence class.
            */
            #define T PoseWithCovariance_
            #define TSeq PoseWithCovariance_Seq

            #define T_initialize_w_params geometry_msgs::msg::dds_::PoseWithCovariance__initialize_w_params

            #define T_finalize_w_params   geometry_msgs::msg::dds_::PoseWithCovariance__finalize_w_params
            #define T_copy       geometry_msgs::msg::dds_::PoseWithCovariance__copy

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
} /* namespace geometry_msgs  */

