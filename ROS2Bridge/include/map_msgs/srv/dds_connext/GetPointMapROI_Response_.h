

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetPointMapROI_Response_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetPointMapROI_Response__769878379_h
#define GetPointMapROI_Response__769878379_h

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

            extern const char *GetPointMapROI_Response_TYPENAME;

            struct GetPointMapROI_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetPointMapROI_Response_TypeSupport;
            class GetPointMapROI_Response_DataWriter;
            class GetPointMapROI_Response_DataReader;
            #endif

            class GetPointMapROI_Response_ 
            {
              public:
                typedef struct GetPointMapROI_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetPointMapROI_Response_TypeSupport TypeSupport;
                typedef GetPointMapROI_Response_DataWriter DataWriter;
                typedef GetPointMapROI_Response_DataReader DataReader;
                #endif

                sensor_msgs::msg::dds_::PointCloud2_   sub_map_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_map_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetPointMapROI_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetPointMapROI_Response_Seq, GetPointMapROI_Response_);

            NDDSUSERDllExport
            RTIBool GetPointMapROI_Response__initialize(
                GetPointMapROI_Response_* self);

            NDDSUSERDllExport
            RTIBool GetPointMapROI_Response__initialize_ex(
                GetPointMapROI_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetPointMapROI_Response__initialize_w_params(
                GetPointMapROI_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetPointMapROI_Response__finalize(
                GetPointMapROI_Response_* self);

            NDDSUSERDllExport
            void GetPointMapROI_Response__finalize_ex(
                GetPointMapROI_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetPointMapROI_Response__finalize_w_params(
                GetPointMapROI_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetPointMapROI_Response__finalize_optional_members(
                GetPointMapROI_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetPointMapROI_Response__copy(
                GetPointMapROI_Response_* dst,
                const GetPointMapROI_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_map_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace map_msgs  */

#endif /* GetPointMapROI_Response_ */

