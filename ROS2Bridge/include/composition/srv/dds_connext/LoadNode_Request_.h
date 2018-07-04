

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LoadNode_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LoadNode_Request__1431330867_h
#define LoadNode_Request__1431330867_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace composition {
    namespace srv {
        namespace dds_ {

            extern const char *LoadNode_Request_TYPENAME;

            struct LoadNode_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LoadNode_Request_TypeSupport;
            class LoadNode_Request_DataWriter;
            class LoadNode_Request_DataReader;
            #endif

            class LoadNode_Request_ 
            {
              public:
                typedef struct LoadNode_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LoadNode_Request_TypeSupport TypeSupport;
                typedef LoadNode_Request_DataWriter DataWriter;
                typedef LoadNode_Request_DataReader DataReader;
                #endif

                DDS_Char *   package_name_ ;
                DDS_Char *   plugin_name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_composition)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LoadNode_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LoadNode_Request_Seq, LoadNode_Request_);

            NDDSUSERDllExport
            RTIBool LoadNode_Request__initialize(
                LoadNode_Request_* self);

            NDDSUSERDllExport
            RTIBool LoadNode_Request__initialize_ex(
                LoadNode_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LoadNode_Request__initialize_w_params(
                LoadNode_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LoadNode_Request__finalize(
                LoadNode_Request_* self);

            NDDSUSERDllExport
            void LoadNode_Request__finalize_ex(
                LoadNode_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LoadNode_Request__finalize_w_params(
                LoadNode_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LoadNode_Request__finalize_optional_members(
                LoadNode_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LoadNode_Request__copy(
                LoadNode_Request_* dst,
                const LoadNode_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_composition)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace composition  */

#endif /* LoadNode_Request_ */

