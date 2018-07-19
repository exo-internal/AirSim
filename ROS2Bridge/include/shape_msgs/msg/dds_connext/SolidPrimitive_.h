

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SolidPrimitive_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SolidPrimitive__119680180_h
#define SolidPrimitive__119680180_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace shape_msgs {
    namespace msg {
        namespace dds_ {
            static const DDS_Octet SolidPrimitive__BOX= 1;
            static const DDS_Octet SolidPrimitive__SPHERE= 2;
            static const DDS_Octet SolidPrimitive__CYLINDER= 3;
            static const DDS_Octet SolidPrimitive__CONE= 4;
            static const DDS_Octet SolidPrimitive__BOX_X= 0;
            static const DDS_Octet SolidPrimitive__BOX_Y= 1;
            static const DDS_Octet SolidPrimitive__BOX_Z= 2;
            static const DDS_Octet SolidPrimitive__SPHERE_RADIUS= 0;
            static const DDS_Octet SolidPrimitive__CYLINDER_HEIGHT= 0;
            static const DDS_Octet SolidPrimitive__CYLINDER_RADIUS= 1;
            static const DDS_Octet SolidPrimitive__CONE_HEIGHT= 0;
            static const DDS_Octet SolidPrimitive__CONE_RADIUS= 1;

            extern const char *SolidPrimitive_TYPENAME;

            struct SolidPrimitive_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SolidPrimitive_TypeSupport;
            class SolidPrimitive_DataWriter;
            class SolidPrimitive_DataReader;
            #endif

            class SolidPrimitive_ 
            {
              public:
                typedef struct SolidPrimitive_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SolidPrimitive_TypeSupport TypeSupport;
                typedef SolidPrimitive_DataWriter DataWriter;
                typedef SolidPrimitive_DataReader DataReader;
                #endif

                DDS_Octet   type_ ;
                DDS_DoubleSeq  dimensions_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_shape_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SolidPrimitive__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SolidPrimitive_Seq, SolidPrimitive_);

            NDDSUSERDllExport
            RTIBool SolidPrimitive__initialize(
                SolidPrimitive_* self);

            NDDSUSERDllExport
            RTIBool SolidPrimitive__initialize_ex(
                SolidPrimitive_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SolidPrimitive__initialize_w_params(
                SolidPrimitive_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SolidPrimitive__finalize(
                SolidPrimitive_* self);

            NDDSUSERDllExport
            void SolidPrimitive__finalize_ex(
                SolidPrimitive_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SolidPrimitive__finalize_w_params(
                SolidPrimitive_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SolidPrimitive__finalize_optional_members(
                SolidPrimitive_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SolidPrimitive__copy(
                SolidPrimitive_* dst,
                const SolidPrimitive_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_shape_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace shape_msgs  */

#endif /* SolidPrimitive_ */

