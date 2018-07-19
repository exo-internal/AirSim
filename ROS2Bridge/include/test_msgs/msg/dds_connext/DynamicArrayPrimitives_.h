

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DynamicArrayPrimitives_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DynamicArrayPrimitives__67051196_h
#define DynamicArrayPrimitives__67051196_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace test_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *DynamicArrayPrimitives_TYPENAME;

            struct DynamicArrayPrimitives_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DynamicArrayPrimitives_TypeSupport;
            class DynamicArrayPrimitives_DataWriter;
            class DynamicArrayPrimitives_DataReader;
            #endif

            class DynamicArrayPrimitives_ 
            {
              public:
                typedef struct DynamicArrayPrimitives_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DynamicArrayPrimitives_TypeSupport TypeSupport;
                typedef DynamicArrayPrimitives_DataWriter DataWriter;
                typedef DynamicArrayPrimitives_DataReader DataReader;
                #endif

                DDS_BooleanSeq  bool_values_ ;
                DDS_OctetSeq  byte_values_ ;
                DDS_CharSeq  char_values_ ;
                DDS_FloatSeq  float32_values_ ;
                DDS_DoubleSeq  float64_values_ ;
                DDS_OctetSeq  int8_values_ ;
                DDS_OctetSeq  uint8_values_ ;
                DDS_ShortSeq  int16_values_ ;
                DDS_UnsignedShortSeq  uint16_values_ ;
                DDS_LongSeq  int32_values_ ;
                DDS_UnsignedLongSeq  uint32_values_ ;
                DDS_LongLongSeq  int64_values_ ;
                DDS_UnsignedLongLongSeq  uint64_values_ ;
                DDS_StringSeq  string_values_ ;
                DDS_Long   check_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* DynamicArrayPrimitives__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DynamicArrayPrimitives_Seq, DynamicArrayPrimitives_);

            NDDSUSERDllExport
            RTIBool DynamicArrayPrimitives__initialize(
                DynamicArrayPrimitives_* self);

            NDDSUSERDllExport
            RTIBool DynamicArrayPrimitives__initialize_ex(
                DynamicArrayPrimitives_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DynamicArrayPrimitives__initialize_w_params(
                DynamicArrayPrimitives_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DynamicArrayPrimitives__finalize(
                DynamicArrayPrimitives_* self);

            NDDSUSERDllExport
            void DynamicArrayPrimitives__finalize_ex(
                DynamicArrayPrimitives_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DynamicArrayPrimitives__finalize_w_params(
                DynamicArrayPrimitives_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DynamicArrayPrimitives__finalize_optional_members(
                DynamicArrayPrimitives_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DynamicArrayPrimitives__copy(
                DynamicArrayPrimitives_* dst,
                const DynamicArrayPrimitives_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* DynamicArrayPrimitives_ */

