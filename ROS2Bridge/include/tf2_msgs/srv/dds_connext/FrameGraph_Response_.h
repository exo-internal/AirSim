

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FrameGraph_Response_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FrameGraph_Response__1685123826_h
#define FrameGraph_Response__1685123826_h

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

            extern const char *FrameGraph_Response_TYPENAME;

            struct FrameGraph_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FrameGraph_Response_TypeSupport;
            class FrameGraph_Response_DataWriter;
            class FrameGraph_Response_DataReader;
            #endif

            class FrameGraph_Response_ 
            {
              public:
                typedef struct FrameGraph_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FrameGraph_Response_TypeSupport TypeSupport;
                typedef FrameGraph_Response_DataWriter DataWriter;
                typedef FrameGraph_Response_DataReader DataReader;
                #endif

                DDS_Char *   frame_yaml_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_tf2_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FrameGraph_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FrameGraph_Response_Seq, FrameGraph_Response_);

            NDDSUSERDllExport
            RTIBool FrameGraph_Response__initialize(
                FrameGraph_Response_* self);

            NDDSUSERDllExport
            RTIBool FrameGraph_Response__initialize_ex(
                FrameGraph_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FrameGraph_Response__initialize_w_params(
                FrameGraph_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FrameGraph_Response__finalize(
                FrameGraph_Response_* self);

            NDDSUSERDllExport
            void FrameGraph_Response__finalize_ex(
                FrameGraph_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FrameGraph_Response__finalize_w_params(
                FrameGraph_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FrameGraph_Response__finalize_optional_members(
                FrameGraph_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FrameGraph_Response__copy(
                FrameGraph_Response_* dst,
                const FrameGraph_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_tf2_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace tf2_msgs  */

#endif /* FrameGraph_Response_ */

