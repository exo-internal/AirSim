

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MagneticField_.idl using "rtiddsgen".
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

#include "MagneticField_.h"

#include <new>

namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */

            DDS_TypeCode* sensor_msgs__MagneticField__double_array_9_get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode sensor_msgs__MagneticField__double_array_9_g_tc_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,9, NULL,NULL);

                static DDS_TypeCode sensor_msgs__MagneticField__double_array_9_g_tc =
                {{
                        DDS_TK_ALIAS, /* Kind*/
                        DDS_BOOLEAN_FALSE,/* Is a pointer? */
                        -1, /* Ignored */
                        (char *)"sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9", /* Name */
                        NULL, /* Content type code is assigned later */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        DDS_VM_NONE /* Ignored */
                    }}; /* Type code for  sensor_msgs__MagneticField__double_array_9 */

                if (is_initialized) {
                    return &sensor_msgs__MagneticField__double_array_9_g_tc;
                }

                sensor_msgs__MagneticField__double_array_9_g_tc_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

                sensor_msgs__MagneticField__double_array_9_g_tc._data._typeCode =  (RTICdrTypeCode *)& sensor_msgs__MagneticField__double_array_9_g_tc_array;

                is_initialized = RTI_TRUE;

                return &sensor_msgs__MagneticField__double_array_9_g_tc;
            }

            RTIBool sensor_msgs__MagneticField__double_array_9_initialize(
                sensor_msgs__MagneticField__double_array_9* sample) {
                return sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool sensor_msgs__MagneticField__double_array_9_initialize_ex(
                sensor_msgs__MagneticField__double_array_9* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool sensor_msgs__MagneticField__double_array_9_initialize_w_params(
                sensor_msgs__MagneticField__double_array_9* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initArray(
                    (*sample), (9), RTI_CDR_DOUBLE_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void sensor_msgs__MagneticField__double_array_9_finalize(
                sensor_msgs__MagneticField__double_array_9* sample)
            {

                sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_finalize_ex(sample,RTI_TRUE);
            }

            void sensor_msgs__MagneticField__double_array_9_finalize_ex(
                sensor_msgs__MagneticField__double_array_9* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_finalize_w_params(
                    sample,&deallocParams);
            }

            void sensor_msgs__MagneticField__double_array_9_finalize_w_params(
                sensor_msgs__MagneticField__double_array_9* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void sensor_msgs__MagneticField__double_array_9_finalize_optional_members(
                sensor_msgs__MagneticField__double_array_9* sample, RTIBool deletePointers)
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

            RTIBool sensor_msgs__MagneticField__double_array_9_copy(
                sensor_msgs__MagneticField__double_array_9* dst,
                const sensor_msgs__MagneticField__double_array_9* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyArray(
                        (*dst) ,(*src),(9), RTI_CDR_DOUBLE_SIZE)) {
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
            * Configure and implement 'sensor_msgs__MagneticField__double_array_9' sequence class.
            */
            #define T sensor_msgs__MagneticField__double_array_9
            #define TSeq sensor_msgs__MagneticField__double_array_9Seq

            #define T_initialize_w_params sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_initialize_w_params

            #define T_finalize_w_params   sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_finalize_w_params
            #define T_copy       sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_copy

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
            const char *MagneticField_TYPENAME = "sensor_msgs::msg::dds_::MagneticField_";

            DDS_TypeCode* MagneticField__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MagneticField__g_tc_members[3]=
                {

                    {
                        (char *)"header_",/* Member name */
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
                        (char *)"magnetic_field_",/* Member name */
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
                        (char *)"magnetic_field_covariance_",/* Member name */
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
                    }
                };

                static DDS_TypeCode MagneticField__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"sensor_msgs::msg::dds_::MagneticField_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        MagneticField__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MagneticField_*/

                if (is_initialized) {
                    return &MagneticField__g_tc;
                }

                MagneticField__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                MagneticField__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Vector3__get_typecode();

                MagneticField__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_get_typecode();

                is_initialized = RTI_TRUE;

                return &MagneticField__g_tc;
            }

            RTIBool MagneticField__initialize(
                MagneticField_* sample) {
                return sensor_msgs::msg::dds_::MagneticField__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MagneticField__initialize_ex(
                MagneticField_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return sensor_msgs::msg::dds_::MagneticField__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MagneticField__initialize_w_params(
                MagneticField_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!std_msgs::msg::dds_::Header__initialize_w_params(&sample->header_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!geometry_msgs::msg::dds_::Vector3__initialize_w_params(&sample->magnetic_field_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_initialize_w_params(&sample->magnetic_field_covariance_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void MagneticField__finalize(
                MagneticField_* sample)
            {

                sensor_msgs::msg::dds_::MagneticField__finalize_ex(sample,RTI_TRUE);
            }

            void MagneticField__finalize_ex(
                MagneticField_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                sensor_msgs::msg::dds_::MagneticField__finalize_w_params(
                    sample,&deallocParams);
            }

            void MagneticField__finalize_w_params(
                MagneticField_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                geometry_msgs::msg::dds_::Vector3__finalize_w_params(&sample->magnetic_field_,deallocParams);

                sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_finalize_w_params(&sample->magnetic_field_covariance_,deallocParams);

            }

            void MagneticField__finalize_optional_members(
                MagneticField_* sample, RTIBool deletePointers)
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

                std_msgs::msg::dds_::Header__finalize_optional_members(&sample->header_, deallocParams->delete_pointers);
                geometry_msgs::msg::dds_::Vector3__finalize_optional_members(&sample->magnetic_field_, deallocParams->delete_pointers);
                sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_finalize_optional_members(&sample->magnetic_field_covariance_, deallocParams->delete_pointers);
            }

            RTIBool MagneticField__copy(
                MagneticField_* dst,
                const MagneticField_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::Vector3__copy(
                        &dst->magnetic_field_,(const geometry_msgs::msg::dds_::Vector3_*)&src->magnetic_field_)) {
                        return RTI_FALSE;
                    } 
                    if (!sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9_copy(
                        &dst->magnetic_field_covariance_,(const sensor_msgs::msg::dds_::sensor_msgs__MagneticField__double_array_9*)&src->magnetic_field_covariance_)) {
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
            * Configure and implement 'MagneticField_' sequence class.
            */
            #define T MagneticField_
            #define TSeq MagneticField_Seq

            #define T_initialize_w_params sensor_msgs::msg::dds_::MagneticField__initialize_w_params

            #define T_finalize_w_params   sensor_msgs::msg::dds_::MagneticField__finalize_w_params
            #define T_copy       sensor_msgs::msg::dds_::MagneticField__copy

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
} /* namespace sensor_msgs  */

