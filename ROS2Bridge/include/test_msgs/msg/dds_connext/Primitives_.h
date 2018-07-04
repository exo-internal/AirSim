

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Primitives_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Primitives__519389028_h
#define Primitives__519389028_h

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

            extern const char *Primitives_TYPENAME;

            struct Primitives_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Primitives_TypeSupport;
            class Primitives_DataWriter;
            class Primitives_DataReader;
            #endif

            class Primitives_ 
            {
              public:
                typedef struct Primitives_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Primitives_TypeSupport TypeSupport;
                typedef Primitives_DataWriter DataWriter;
                typedef Primitives_DataReader DataReader;
                #endif

                DDS_Boolean   bool_value_ ;
                DDS_Octet   byte_value_ ;
                DDS_Char   char_value_ ;
                DDS_Float   float32_value_ ;
                DDS_Double   float64_value_ ;
                DDS_Octet   int8_value_ ;
                DDS_Octet   uint8_value_ ;
                DDS_Short   int16_value_ ;
                DDS_UnsignedShort   uint16_value_ ;
                DDS_Long   int32_value_ ;
                DDS_UnsignedLong   uint32_value_ ;
                DDS_LongLong   int64_value_ ;
                DDS_UnsignedLongLong   uint64_value_ ;
                DDS_Char *   string_value_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Primitives__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Primitives_Seq, Primitives_);

            NDDSUSERDllExport
            RTIBool Primitives__initialize(
                Primitives_* self);

            NDDSUSERDllExport
            RTIBool Primitives__initialize_ex(
                Primitives_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Primitives__initialize_w_params(
                Primitives_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Primitives__finalize(
                Primitives_* self);

            NDDSUSERDllExport
            void Primitives__finalize_ex(
                Primitives_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Primitives__finalize_w_params(
                Primitives_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Primitives__finalize_optional_members(
                Primitives_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Primitives__copy(
                Primitives_* dst,
                const Primitives_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_test_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace test_msgs  */

#endif /* Primitives_ */

