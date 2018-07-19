

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetMap_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetMap_Request__1261673670_h
#define GetMap_Request__1261673670_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace nav_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetMap_Request_TYPENAME;

            struct GetMap_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetMap_Request_TypeSupport;
            class GetMap_Request_DataWriter;
            class GetMap_Request_DataReader;
            #endif

            class GetMap_Request_ 
            {
              public:
                typedef struct GetMap_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetMap_Request_TypeSupport TypeSupport;
                typedef GetMap_Request_DataWriter DataWriter;
                typedef GetMap_Request_DataReader DataReader;
                #endif

                DDS_Boolean   _dummy ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_nav_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetMap_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetMap_Request_Seq, GetMap_Request_);

            NDDSUSERDllExport
            RTIBool GetMap_Request__initialize(
                GetMap_Request_* self);

            NDDSUSERDllExport
            RTIBool GetMap_Request__initialize_ex(
                GetMap_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetMap_Request__initialize_w_params(
                GetMap_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetMap_Request__finalize(
                GetMap_Request_* self);

            NDDSUSERDllExport
            void GetMap_Request__finalize_ex(
                GetMap_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetMap_Request__finalize_w_params(
                GetMap_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetMap_Request__finalize_optional_members(
                GetMap_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetMap_Request__copy(
                GetMap_Request_* dst,
                const GetMap_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_nav_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace nav_msgs  */

#endif /* GetMap_Request_ */

