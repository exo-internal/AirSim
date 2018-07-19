

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BoundedArrayPrimitives_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef BoundedArrayPrimitives__1057604164_h
#define BoundedArrayPrimitives__1057604164_h

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

            extern const char *BoundedArrayPrimitives_TYPENAME;

            struct BoundedArrayPrimitives_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class BoundedArrayPrimitives_TypeSupport;
            class BoundedArrayPrimitives_DataWriter;
            class BoundedArrayPrimitives_DataReader;
            #endif

            class BoundedArrayPrimitives_ 
            {
              public:
                typedef struct BoundedArrayPrimitives_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef BoundedArrayPrimitives_TypeSupport TypeSupport;
                typedef BoundedArrayPrimitives_DataWriter DataWriter;
                typedef BoundedArrayPrimitives_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* BoundedArrayPrimitives__get_typecode(void); /* Type code */

            DDS_SEQUENCE(BoundedArrayPrimitives_Seq, BoundedArrayPrimitives_);

            NDDSUSERDllExport
            RTIBool BoundedArrayPrimitives__initialize(
                BoundedArrayPrimitives_* self);

            NDDSUSERDllExport
            RTIBool BoundedArrayPrimitives__initialize_ex(
                BoundedArrayPrimitives_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool BoundedArrayPrimitives__initialize_w_params(
                BoundedArrayPrimitives_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void BoundedArrayPrimitives__finalize(
                BoundedArrayPrimitives_* self);

            NDDSUSERDllExport
            void BoundedArrayPrimitives__finalize_ex(
                BoundedArrayPrimitives_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void BoundedArrayPrimitives__finalize_w_params(
                BoundedArrayPrimitives_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void BoundedArrayPrimitives__finalize_optional_members(
                BoundedArrayPrimitives_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool BoundedArrayPrimitives__copy(
                BoundedArrayPrimitives_* dst,
                const BoundedArrayPrimitives_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* BoundedArrayPrimitives_ */

