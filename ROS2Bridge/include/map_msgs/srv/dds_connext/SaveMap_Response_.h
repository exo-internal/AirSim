

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SaveMap_Response_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SaveMap_Response__1541729947_h
#define SaveMap_Response__1541729947_h

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

            extern const char *SaveMap_Response_TYPENAME;

            struct SaveMap_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SaveMap_Response_TypeSupport;
            class SaveMap_Response_DataWriter;
            class SaveMap_Response_DataReader;
            #endif

            class SaveMap_Response_ 
            {
              public:
                typedef struct SaveMap_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SaveMap_Response_TypeSupport TypeSupport;
                typedef SaveMap_Response_DataWriter DataWriter;
                typedef SaveMap_Response_DataReader DataReader;
                #endif

                DDS_Boolean   _dummy ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_map_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SaveMap_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SaveMap_Response_Seq, SaveMap_Response_);

            NDDSUSERDllExport
            RTIBool SaveMap_Response__initialize(
                SaveMap_Response_* self);

            NDDSUSERDllExport
            RTIBool SaveMap_Response__initialize_ex(
                SaveMap_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SaveMap_Response__initialize_w_params(
                SaveMap_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SaveMap_Response__finalize(
                SaveMap_Response_* self);

            NDDSUSERDllExport
            void SaveMap_Response__finalize_ex(
                SaveMap_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SaveMap_Response__finalize_w_params(
                SaveMap_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SaveMap_Response__finalize_optional_members(
                SaveMap_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SaveMap_Response__copy(
                SaveMap_Response_* dst,
                const SaveMap_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_map_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace map_msgs  */

#endif /* SaveMap_Response_ */

