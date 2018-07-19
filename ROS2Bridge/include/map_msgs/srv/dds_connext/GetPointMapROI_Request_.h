

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetPointMapROI_Request_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetPointMapROI_Request__578786279_h
#define GetPointMapROI_Request__578786279_h

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

            extern const char *GetPointMapROI_Request_TYPENAME;

            struct GetPointMapROI_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetPointMapROI_Request_TypeSupport;
            class GetPointMapROI_Request_DataWriter;
            class GetPointMapROI_Request_DataReader;
            #endif

            class GetPointMapROI_Request_ 
            {
              public:
                typedef struct GetPointMapROI_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetPointMapROI_Request_TypeSupport TypeSupport;
                typedef GetPointMapROI_Request_DataWriter DataWriter;
                typedef GetPointMapROI_Request_DataReader DataReader;
                #endif

                DDS_Double   x_ ;
                DDS_Double   y_ ;
                DDS_Double   z_ ;
                DDS_Double   r_ ;
                DDS_Double   l_x_ ;
                DDS_Double   l_y_ ;
                DDS_Double   l_z_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_map_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetPointMapROI_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetPointMapROI_Request_Seq, GetPointMapROI_Request_);

            NDDSUSERDllExport
            RTIBool GetPointMapROI_Request__initialize(
                GetPointMapROI_Request_* self);

            NDDSUSERDllExport
            RTIBool GetPointMapROI_Request__initialize_ex(
                GetPointMapROI_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetPointMapROI_Request__initialize_w_params(
                GetPointMapROI_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetPointMapROI_Request__finalize(
                GetPointMapROI_Request_* self);

            NDDSUSERDllExport
            void GetPointMapROI_Request__finalize_ex(
                GetPointMapROI_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetPointMapROI_Request__finalize_w_params(
                GetPointMapROI_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetPointMapROI_Request__finalize_optional_members(
                GetPointMapROI_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetPointMapROI_Request__copy(
                GetPointMapROI_Request_* dst,
                const GetPointMapROI_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_map_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace map_msgs  */

#endif /* GetPointMapROI_Request_ */

