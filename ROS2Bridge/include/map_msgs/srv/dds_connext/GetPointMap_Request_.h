

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetPointMap_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetPointMap_Request__1814013819_h
#define GetPointMap_Request__1814013819_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace map_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetPointMap_Request_TYPENAME;

            struct GetPointMap_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetPointMap_Request_TypeSupport;
            class GetPointMap_Request_DataWriter;
            class GetPointMap_Request_DataReader;
            #endif

            class GetPointMap_Request_ 
            {
              public:
                typedef struct GetPointMap_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetPointMap_Request_TypeSupport TypeSupport;
                typedef GetPointMap_Request_DataWriter DataWriter;
                typedef GetPointMap_Request_DataReader DataReader;
                #endif

                DDS_Boolean   _dummy ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_map_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetPointMap_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetPointMap_Request_Seq, GetPointMap_Request_);

            NDDSUSERDllExport
            RTIBool GetPointMap_Request__initialize(
                GetPointMap_Request_* self);

            NDDSUSERDllExport
            RTIBool GetPointMap_Request__initialize_ex(
                GetPointMap_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetPointMap_Request__initialize_w_params(
                GetPointMap_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetPointMap_Request__finalize(
                GetPointMap_Request_* self);

            NDDSUSERDllExport
            void GetPointMap_Request__finalize_ex(
                GetPointMap_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetPointMap_Request__finalize_w_params(
                GetPointMap_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetPointMap_Request__finalize_optional_members(
                GetPointMap_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetPointMap_Request__copy(
                GetPointMap_Request_* dst,
                const GetPointMap_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_map_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace map_msgs  */

#endif /* GetPointMap_Request_ */

