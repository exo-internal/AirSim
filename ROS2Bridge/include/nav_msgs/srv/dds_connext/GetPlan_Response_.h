

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetPlan_Response_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetPlan_Response__17148446_h
#define GetPlan_Response__17148446_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "nav_msgs/msg/dds_connext/Path_.h"
namespace nav_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetPlan_Response_TYPENAME;

            struct GetPlan_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetPlan_Response_TypeSupport;
            class GetPlan_Response_DataWriter;
            class GetPlan_Response_DataReader;
            #endif

            class GetPlan_Response_ 
            {
              public:
                typedef struct GetPlan_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetPlan_Response_TypeSupport TypeSupport;
                typedef GetPlan_Response_DataWriter DataWriter;
                typedef GetPlan_Response_DataReader DataReader;
                #endif

                nav_msgs::msg::dds_::Path_   plan_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_nav_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetPlan_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetPlan_Response_Seq, GetPlan_Response_);

            NDDSUSERDllExport
            RTIBool GetPlan_Response__initialize(
                GetPlan_Response_* self);

            NDDSUSERDllExport
            RTIBool GetPlan_Response__initialize_ex(
                GetPlan_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetPlan_Response__initialize_w_params(
                GetPlan_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetPlan_Response__finalize(
                GetPlan_Response_* self);

            NDDSUSERDllExport
            void GetPlan_Response__finalize_ex(
                GetPlan_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetPlan_Response__finalize_w_params(
                GetPlan_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetPlan_Response__finalize_optional_members(
                GetPlan_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetPlan_Response__copy(
                GetPlan_Response_* dst,
                const GetPlan_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_nav_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace nav_msgs  */

#endif /* GetPlan_Response_ */

