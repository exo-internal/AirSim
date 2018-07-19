

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ConfigLogger_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ConfigLogger_Request__384820507_h
#define ConfigLogger_Request__384820507_h

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

            extern const char *ConfigLogger_Request_TYPENAME;

            struct ConfigLogger_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ConfigLogger_Request_TypeSupport;
            class ConfigLogger_Request_DataWriter;
            class ConfigLogger_Request_DataReader;
            #endif

            class ConfigLogger_Request_ 
            {
              public:
                typedef struct ConfigLogger_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ConfigLogger_Request_TypeSupport TypeSupport;
                typedef ConfigLogger_Request_DataWriter DataWriter;
                typedef ConfigLogger_Request_DataReader DataReader;
                #endif

                DDS_Char *   logger_name_ ;
                DDS_Char *   level_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_logging_demo)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ConfigLogger_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ConfigLogger_Request_Seq, ConfigLogger_Request_);

            NDDSUSERDllExport
            RTIBool ConfigLogger_Request__initialize(
                ConfigLogger_Request_* self);

            NDDSUSERDllExport
            RTIBool ConfigLogger_Request__initialize_ex(
                ConfigLogger_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ConfigLogger_Request__initialize_w_params(
                ConfigLogger_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ConfigLogger_Request__finalize(
                ConfigLogger_Request_* self);

            NDDSUSERDllExport
            void ConfigLogger_Request__finalize_ex(
                ConfigLogger_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ConfigLogger_Request__finalize_w_params(
                ConfigLogger_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ConfigLogger_Request__finalize_optional_members(
                ConfigLogger_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ConfigLogger_Request__copy(
                ConfigLogger_Request_* dst,
                const ConfigLogger_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_logging_demo)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace logging_demo  */

#endif /* ConfigLogger_Request_ */

