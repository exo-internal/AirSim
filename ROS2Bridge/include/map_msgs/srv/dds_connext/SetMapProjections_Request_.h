

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetMapProjections_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetMapProjections_Request__1918998049_h
#define SetMapProjections_Request__1918998049_h

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

            extern const char *SetMapProjections_Request_TYPENAME;

            struct SetMapProjections_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetMapProjections_Request_TypeSupport;
            class SetMapProjections_Request_DataWriter;
            class SetMapProjections_Request_DataReader;
            #endif

            class SetMapProjections_Request_ 
            {
              public:
                typedef struct SetMapProjections_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetMapProjections_Request_TypeSupport TypeSupport;
                typedef SetMapProjections_Request_DataWriter DataWriter;
                typedef SetMapProjections_Request_DataReader DataReader;
                #endif

                DDS_Boolean   _dummy ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_map_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetMapProjections_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetMapProjections_Request_Seq, SetMapProjections_Request_);

            NDDSUSERDllExport
            RTIBool SetMapProjections_Request__initialize(
                SetMapProjections_Request_* self);

            NDDSUSERDllExport
            RTIBool SetMapProjections_Request__initialize_ex(
                SetMapProjections_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetMapProjections_Request__initialize_w_params(
                SetMapProjections_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetMapProjections_Request__finalize(
                SetMapProjections_Request_* self);

            NDDSUSERDllExport
            void SetMapProjections_Request__finalize_ex(
                SetMapProjections_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetMapProjections_Request__finalize_w_params(
                SetMapProjections_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetMapProjections_Request__finalize_optional_members(
                SetMapProjections_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetMapProjections_Request__copy(
                SetMapProjections_Request_* dst,
                const SetMapProjections_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_map_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace map_msgs  */

#endif /* SetMapProjections_Request_ */

