

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FrameGraph_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FrameGraph_Request__1885065909_h
#define FrameGraph_Request__1885065909_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace tf2_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *FrameGraph_Request_TYPENAME;

            struct FrameGraph_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FrameGraph_Request_TypeSupport;
            class FrameGraph_Request_DataWriter;
            class FrameGraph_Request_DataReader;
            #endif

            class FrameGraph_Request_ 
            {
              public:
                typedef struct FrameGraph_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FrameGraph_Request_TypeSupport TypeSupport;
                typedef FrameGraph_Request_DataWriter DataWriter;
                typedef FrameGraph_Request_DataReader DataReader;
                #endif

                DDS_Boolean   _dummy ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_tf2_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FrameGraph_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FrameGraph_Request_Seq, FrameGraph_Request_);

            NDDSUSERDllExport
            RTIBool FrameGraph_Request__initialize(
                FrameGraph_Request_* self);

            NDDSUSERDllExport
            RTIBool FrameGraph_Request__initialize_ex(
                FrameGraph_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FrameGraph_Request__initialize_w_params(
                FrameGraph_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FrameGraph_Request__finalize(
                FrameGraph_Request_* self);

            NDDSUSERDllExport
            void FrameGraph_Request__finalize_ex(
                FrameGraph_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FrameGraph_Request__finalize_w_params(
                FrameGraph_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FrameGraph_Request__finalize_optional_members(
                FrameGraph_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FrameGraph_Request__copy(
                FrameGraph_Request_* dst,
                const FrameGraph_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_tf2_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace tf2_msgs  */

#endif /* FrameGraph_Request_ */

