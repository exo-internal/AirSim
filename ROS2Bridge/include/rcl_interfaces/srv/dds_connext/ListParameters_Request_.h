

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ListParameters_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ListParameters_Request__534402374_h
#define ListParameters_Request__534402374_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace rcl_interfaces {
    namespace srv {
        namespace dds_ {
            static const DDS_UnsignedLongLong ListParameters_Request__DEPTH_RECURSIVE= 0ULL;

            extern const char *ListParameters_Request_TYPENAME;

            struct ListParameters_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ListParameters_Request_TypeSupport;
            class ListParameters_Request_DataWriter;
            class ListParameters_Request_DataReader;
            #endif

            class ListParameters_Request_ 
            {
              public:
                typedef struct ListParameters_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ListParameters_Request_TypeSupport TypeSupport;
                typedef ListParameters_Request_DataWriter DataWriter;
                typedef ListParameters_Request_DataReader DataReader;
                #endif

                DDS_StringSeq  prefixes_ ;
                DDS_UnsignedLongLong   depth_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_rcl_interfaces)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ListParameters_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ListParameters_Request_Seq, ListParameters_Request_);

            NDDSUSERDllExport
            RTIBool ListParameters_Request__initialize(
                ListParameters_Request_* self);

            NDDSUSERDllExport
            RTIBool ListParameters_Request__initialize_ex(
                ListParameters_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ListParameters_Request__initialize_w_params(
                ListParameters_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ListParameters_Request__finalize(
                ListParameters_Request_* self);

            NDDSUSERDllExport
            void ListParameters_Request__finalize_ex(
                ListParameters_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ListParameters_Request__finalize_w_params(
                ListParameters_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ListParameters_Request__finalize_optional_members(
                ListParameters_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ListParameters_Request__copy(
                ListParameters_Request_* dst,
                const ListParameters_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_rcl_interfaces)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace rcl_interfaces  */

#endif /* ListParameters_Request_ */

