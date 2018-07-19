

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetMapProjections_Response_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetMapProjections_Response__633228716_h
#define SetMapProjections_Response__633228716_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "map_msgs/msg/dds_connext/ProjectedMapInfo_.h"
namespace map_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SetMapProjections_Response_TYPENAME;

            struct SetMapProjections_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetMapProjections_Response_TypeSupport;
            class SetMapProjections_Response_DataWriter;
            class SetMapProjections_Response_DataReader;
            #endif

            class SetMapProjections_Response_ 
            {
              public:
                typedef struct SetMapProjections_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetMapProjections_Response_TypeSupport TypeSupport;
                typedef SetMapProjections_Response_DataWriter DataWriter;
                typedef SetMapProjections_Response_DataReader DataReader;
                #endif

                map_msgs::msg::dds_::ProjectedMapInfo_Seq  projected_maps_info_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_map_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetMapProjections_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetMapProjections_Response_Seq, SetMapProjections_Response_);

            NDDSUSERDllExport
            RTIBool SetMapProjections_Response__initialize(
                SetMapProjections_Response_* self);

            NDDSUSERDllExport
            RTIBool SetMapProjections_Response__initialize_ex(
                SetMapProjections_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetMapProjections_Response__initialize_w_params(
                SetMapProjections_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetMapProjections_Response__finalize(
                SetMapProjections_Response_* self);

            NDDSUSERDllExport
            void SetMapProjections_Response__finalize_ex(
                SetMapProjections_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetMapProjections_Response__finalize_w_params(
                SetMapProjections_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetMapProjections_Response__finalize_optional_members(
                SetMapProjections_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetMapProjections_Response__copy(
                SetMapProjections_Response_* dst,
                const SetMapProjections_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_map_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace map_msgs  */

#endif /* SetMapProjections_Response_ */

