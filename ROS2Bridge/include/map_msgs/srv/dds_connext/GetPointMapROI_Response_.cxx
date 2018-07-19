

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetPointMapROI_Response_.idl using "rtiddsgen".
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

#include "GetPointMapROI_Response_.h"

#include <new>

namespace map_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GetPointMapROI_Response_TYPENAME = "map_msgs::srv::dds_::GetPointMapROI_Response_";

            DDS_TypeCode* GetPointMapROI_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GetPointMapROI_Response__g_tc_members[1]=
                {

                    {
                        (char *)"sub_map_",/* Member name */
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

                static DDS_TypeCode GetPointMapROI_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"map_msgs::srv::dds_::GetPointMapROI_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GetPointMapROI_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetPointMapROI_Response_*/

                if (is_initialized) {
                    return &GetPointMapROI_Response__g_tc;
                }

                GetPointMapROI_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)sensor_msgs::msg::dds_::PointCloud2__get_typecode();

                is_initialized = RTI_TRUE;

                return &GetPointMapROI_Response__g_tc;
            }

            RTIBool GetPointMapROI_Response__initialize(
                GetPointMapROI_Response_* sample) {
                return map_msgs::srv::dds_::GetPointMapROI_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetPointMapROI_Response__initialize_ex(
                GetPointMapROI_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return map_msgs::srv::dds_::GetPointMapROI_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetPointMapROI_Response__initialize_w_params(
                GetPointMapROI_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!sensor_msgs::msg::dds_::PointCloud2__initialize_w_params(&sample->sub_map_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void GetPointMapROI_Response__finalize(
                GetPointMapROI_Response_* sample)
            {

                map_msgs::srv::dds_::GetPointMapROI_Response__finalize_ex(sample,RTI_TRUE);
            }

            void GetPointMapROI_Response__finalize_ex(
                GetPointMapROI_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                map_msgs::srv::dds_::GetPointMapROI_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetPointMapROI_Response__finalize_w_params(
                GetPointMapROI_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                sensor_msgs::msg::dds_::PointCloud2__finalize_w_params(&sample->sub_map_,deallocParams);

            }

            void GetPointMapROI_Response__finalize_optional_members(
                GetPointMapROI_Response_* sample, RTIBool deletePointers)
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

                sensor_msgs::msg::dds_::PointCloud2__finalize_optional_members(&sample->sub_map_, deallocParams->delete_pointers);
            }

            RTIBool GetPointMapROI_Response__copy(
                GetPointMapROI_Response_* dst,
                const GetPointMapROI_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!sensor_msgs::msg::dds_::PointCloud2__copy(
                        &dst->sub_map_,(const sensor_msgs::msg::dds_::PointCloud2_*)&src->sub_map_)) {
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
            * Configure and implement 'GetPointMapROI_Response_' sequence class.
            */
            #define T GetPointMapROI_Response_
            #define TSeq GetPointMapROI_Response_Seq

            #define T_initialize_w_params map_msgs::srv::dds_::GetPointMapROI_Response__initialize_w_params

            #define T_finalize_w_params   map_msgs::srv::dds_::GetPointMapROI_Response__finalize_w_params
            #define T_copy       map_msgs::srv::dds_::GetPointMapROI_Response__copy

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
} /* namespace map_msgs  */

