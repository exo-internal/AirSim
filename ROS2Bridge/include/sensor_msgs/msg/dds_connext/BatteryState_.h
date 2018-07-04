

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BatteryState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef BatteryState__1543308401_h
#define BatteryState__1543308401_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace sensor_msgs {
    namespace msg {
        namespace dds_ {
            static const DDS_Octet BatteryState__POWER_SUPPLY_STATUS_UNKNOWN= 0;
            static const DDS_Octet BatteryState__POWER_SUPPLY_STATUS_CHARGING= 1;
            static const DDS_Octet BatteryState__POWER_SUPPLY_STATUS_DISCHARGING= 2;
            static const DDS_Octet BatteryState__POWER_SUPPLY_STATUS_NOT_CHARGING= 3;
            static const DDS_Octet BatteryState__POWER_SUPPLY_STATUS_FULL= 4;
            static const DDS_Octet BatteryState__POWER_SUPPLY_HEALTH_UNKNOWN= 0;
            static const DDS_Octet BatteryState__POWER_SUPPLY_HEALTH_GOOD= 1;
            static const DDS_Octet BatteryState__POWER_SUPPLY_HEALTH_OVERHEAT= 2;
            static const DDS_Octet BatteryState__POWER_SUPPLY_HEALTH_DEAD= 3;
            static const DDS_Octet BatteryState__POWER_SUPPLY_HEALTH_OVERVOLTAGE= 4;
            static const DDS_Octet BatteryState__POWER_SUPPLY_HEALTH_UNSPEC_FAILURE= 5;
            static const DDS_Octet BatteryState__POWER_SUPPLY_HEALTH_COLD= 6;
            static const DDS_Octet BatteryState__POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE= 7;
            static const DDS_Octet BatteryState__POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE= 8;
            static const DDS_Octet BatteryState__POWER_SUPPLY_TECHNOLOGY_UNKNOWN= 0;
            static const DDS_Octet BatteryState__POWER_SUPPLY_TECHNOLOGY_NIMH= 1;
            static const DDS_Octet BatteryState__POWER_SUPPLY_TECHNOLOGY_LION= 2;
            static const DDS_Octet BatteryState__POWER_SUPPLY_TECHNOLOGY_LIPO= 3;
            static const DDS_Octet BatteryState__POWER_SUPPLY_TECHNOLOGY_LIFE= 4;
            static const DDS_Octet BatteryState__POWER_SUPPLY_TECHNOLOGY_NICD= 5;
            static const DDS_Octet BatteryState__POWER_SUPPLY_TECHNOLOGY_LIMN= 6;

            extern const char *BatteryState_TYPENAME;

            struct BatteryState_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class BatteryState_TypeSupport;
            class BatteryState_DataWriter;
            class BatteryState_DataReader;
            #endif

            class BatteryState_ 
            {
              public:
                typedef struct BatteryState_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef BatteryState_TypeSupport TypeSupport;
                typedef BatteryState_DataWriter DataWriter;
                typedef BatteryState_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Float   voltage_ ;
                DDS_Float   current_ ;
                DDS_Float   charge_ ;
                DDS_Float   capacity_ ;
                DDS_Float   design_capacity_ ;
                DDS_Float   percentage_ ;
                DDS_Octet   power_supply_status_ ;
                DDS_Octet   power_supply_health_ ;
                DDS_Octet   power_supply_technology_ ;
                DDS_Boolean   present_ ;
                DDS_FloatSeq  cell_voltage_ ;
                DDS_Char *   location_ ;
                DDS_Char *   serial_number_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* BatteryState__get_typecode(void); /* Type code */

            DDS_SEQUENCE(BatteryState_Seq, BatteryState_);

            NDDSUSERDllExport
            RTIBool BatteryState__initialize(
                BatteryState_* self);

            NDDSUSERDllExport
            RTIBool BatteryState__initialize_ex(
                BatteryState_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool BatteryState__initialize_w_params(
                BatteryState_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void BatteryState__finalize(
                BatteryState_* self);

            NDDSUSERDllExport
            void BatteryState__finalize_ex(
                BatteryState_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void BatteryState__finalize_w_params(
                BatteryState_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void BatteryState__finalize_optional_members(
                BatteryState_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool BatteryState__copy(
                BatteryState_* dst,
                const BatteryState_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* BatteryState_ */

