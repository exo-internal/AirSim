

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ProjectedMapsInfo_Response_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ProjectedMapsInfo_Response__2630767_h
#define ProjectedMapsInfo_Response__2630767_h

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

            extern const char *ProjectedMapsInfo_Response_TYPENAME;

            struct ProjectedMapsInfo_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ProjectedMapsInfo_Response_TypeSupport;
            class ProjectedMapsInfo_Response_DataWriter;
            class ProjectedMapsInfo_Response_DataReader;
            #endif

            class ProjectedMapsInfo_Response_ 
            {
              public:
                typedef struct ProjectedMapsInfo_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ProjectedMapsInfo_Response_TypeSupport TypeSupport;
                typedef ProjectedMapsInfo_Response_DataWriter DataWriter;
                typedef ProjectedMapsInfo_Response_DataReader DataReader;
                #endif

                DDS_Boolean   _dummy ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_map_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ProjectedMapsInfo_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ProjectedMapsInfo_Response_Seq, ProjectedMapsInfo_Response_);

            NDDSUSERDllExport
            RTIBool ProjectedMapsInfo_Response__initialize(
                ProjectedMapsInfo_Response_* self);

            NDDSUSERDllExport
            RTIBool ProjectedMapsInfo_Response__initialize_ex(
                ProjectedMapsInfo_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ProjectedMapsInfo_Response__initialize_w_params(
                ProjectedMapsInfo_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ProjectedMapsInfo_Response__finalize(
                ProjectedMapsInfo_Response_* self);

            NDDSUSERDllExport
            void ProjectedMapsInfo_Response__finalize_ex(
                ProjectedMapsInfo_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ProjectedMapsInfo_Response__finalize_w_params(
                ProjectedMapsInfo_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ProjectedMapsInfo_Response__finalize_optional_members(
                ProjectedMapsInfo_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ProjectedMapsInfo_Response__copy(
                ProjectedMapsInfo_Response_* dst,
                const ProjectedMapsInfo_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_map_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace map_msgs  */

#endif /* ProjectedMapsInfo_Response_ */

