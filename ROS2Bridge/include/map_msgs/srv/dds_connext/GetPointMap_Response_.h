

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetPointMap_Response_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetPointMap_Response__392450184_h
#define GetPointMap_Response__392450184_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "sensor_msgs/msg/dds_connext/PointCloud2_.h"
namespace map_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetPointMap_Response_TYPENAME;

            struct GetPointMap_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetPointMap_Response_TypeSupport;
            class GetPointMap_Response_DataWriter;
            class GetPointMap_Response_DataReader;
            #endif

            class GetPointMap_Response_ 
            {
              public:
                typedef struct GetPointMap_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetPointMap_Response_TypeSupport TypeSupport;
                typedef GetPointMap_Response_DataWriter DataWriter;
                typedef GetPointMap_Response_DataReader DataReader;
                #endif

                sensor_msgs::msg::dds_::PointCloud2_   map_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_map_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetPointMap_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetPointMap_Response_Seq, GetPointMap_Response_);

            NDDSUSERDllExport
            RTIBool GetPointMap_Response__initialize(
                GetPointMap_Response_* self);

            NDDSUSERDllExport
            RTIBool GetPointMap_Response__initialize_ex(
                GetPointMap_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetPointMap_Response__initialize_w_params(
                GetPointMap_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetPointMap_Response__finalize(
                GetPointMap_Response_* self);

            NDDSUSERDllExport
            void GetPointMap_Response__finalize_ex(
                GetPointMap_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetPointMap_Response__finalize_w_params(
                GetPointMap_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetPointMap_Response__finalize_optional_members(
                GetPointMap_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetPointMap_Response__copy(
                GetPointMap_Response_* dst,
                const GetPointMap_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_map_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace map_msgs  */

#endif /* GetPointMap_Response_ */

