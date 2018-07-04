

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConfigLogger_Response_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ConfigLogger_Response__962872055_h
#define ConfigLogger_Response__962872055_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace logging_demo {
    namespace srv {
        namespace dds_ {

            extern const char *ConfigLogger_Response_TYPENAME;

            struct ConfigLogger_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ConfigLogger_Response_TypeSupport;
            class ConfigLogger_Response_DataWriter;
            class ConfigLogger_Response_DataReader;
            #endif

            class ConfigLogger_Response_ 
            {
              public:
                typedef struct ConfigLogger_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ConfigLogger_Response_TypeSupport TypeSupport;
                typedef ConfigLogger_Response_DataWriter DataWriter;
                typedef ConfigLogger_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_logging_demo)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ConfigLogger_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ConfigLogger_Response_Seq, ConfigLogger_Response_);

            NDDSUSERDllExport
            RTIBool ConfigLogger_Response__initialize(
                ConfigLogger_Response_* self);

            NDDSUSERDllExport
            RTIBool ConfigLogger_Response__initialize_ex(
                ConfigLogger_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ConfigLogger_Response__initialize_w_params(
                ConfigLogger_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ConfigLogger_Response__finalize(
                ConfigLogger_Response_* self);

            NDDSUSERDllExport
            void ConfigLogger_Response__finalize_ex(
                ConfigLogger_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ConfigLogger_Response__finalize_w_params(
                ConfigLogger_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ConfigLogger_Response__finalize_optional_members(
                ConfigLogger_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ConfigLogger_Response__copy(
                ConfigLogger_Response_* dst,
                const ConfigLogger_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_logging_demo)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace logging_demo  */

#endif /* ConfigLogger_Response_ */

