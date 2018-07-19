

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetPlan_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetPlan_Request__969040388_h
#define GetPlan_Request__969040388_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/PoseStamped_.h"
namespace nav_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetPlan_Request_TYPENAME;

            struct GetPlan_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetPlan_Request_TypeSupport;
            class GetPlan_Request_DataWriter;
            class GetPlan_Request_DataReader;
            #endif

            class GetPlan_Request_ 
            {
              public:
                typedef struct GetPlan_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetPlan_Request_TypeSupport TypeSupport;
                typedef GetPlan_Request_DataWriter DataWriter;
                typedef GetPlan_Request_DataReader DataReader;
                #endif

                geometry_msgs::msg::dds_::PoseStamped_   start_ ;
                geometry_msgs::msg::dds_::PoseStamped_   goal_ ;
                DDS_Float   tolerance_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_nav_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetPlan_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetPlan_Request_Seq, GetPlan_Request_);

            NDDSUSERDllExport
            RTIBool GetPlan_Request__initialize(
                GetPlan_Request_* self);

            NDDSUSERDllExport
            RTIBool GetPlan_Request__initialize_ex(
                GetPlan_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetPlan_Request__initialize_w_params(
                GetPlan_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetPlan_Request__finalize(
                GetPlan_Request_* self);

            NDDSUSERDllExport
            void GetPlan_Request__finalize_ex(
                GetPlan_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetPlan_Request__finalize_w_params(
                GetPlan_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetPlan_Request__finalize_optional_members(
                GetPlan_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetPlan_Request__copy(
                GetPlan_Request_* dst,
                const GetPlan_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_nav_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace nav_msgs  */

#endif /* GetPlan_Request_ */

