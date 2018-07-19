#ifndef POINTCLOUD_DCPS_IMPL_H_
#define POINTCLOUD_DCPS_IMPL_H_

#include "ccpp.h"
#include "ccpp_PointCloud_.h"
#include "TypeSupportMetaHolder.h"
#include "TypeSupport.h"
#include "FooDataWriter_impl.h"
#include "FooDataReader_impl.h"
#include "FooDataReaderView_impl.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace sensor_msgs {

    namespace msg {

        namespace dds_ {

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs PointCloud_TypeSupportMetaHolder : public ::DDS::OpenSplice::TypeSupportMetaHolder
            {
            public:
                PointCloud_TypeSupportMetaHolder ();
                virtual ~PointCloud_TypeSupportMetaHolder ();
            
            private:
                ::DDS::OpenSplice::DataWriter * create_datawriter ();
            
                ::DDS::OpenSplice::DataReader * create_datareader ();
            
                ::DDS::OpenSplice::DataReaderView * create_view ();
            };
            
            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs PointCloud_TypeSupport : public virtual PointCloud_TypeSupportInterface,
                                                               public ::DDS::OpenSplice::TypeSupport
            {
            public:
                PointCloud_TypeSupport ();
            
                virtual ~PointCloud_TypeSupport ();
            
            private:
                PointCloud_TypeSupport (const PointCloud_TypeSupport &);
            
                void operator= (const PointCloud_TypeSupport &);
            };
            
            typedef PointCloud_TypeSupportInterface_var PointCloud_TypeSupport_var;
            typedef PointCloud_TypeSupportInterface_ptr PointCloud_TypeSupport_ptr;
            
            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs PointCloud_DataWriter_impl : public virtual PointCloud_DataWriter,
                                                                   public ::DDS::OpenSplice::FooDataWriter_impl
            {
                friend class DDS::OpenSplice::Publisher;
                friend class PointCloud_TypeSupportMetaHolder;
            
            public:
                virtual ::DDS::InstanceHandle_t register_instance (
                    const PointCloud_ & instance_data) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
                    const PointCloud_ & instance_data,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t unregister_instance (
                    const PointCloud_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
                    const PointCloud_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t write (
                    const PointCloud_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t write_w_timestamp (
                    const PointCloud_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t dispose (
                    const PointCloud_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t dispose_w_timestamp (
                    const PointCloud_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t writedispose (
                    const PointCloud_ & instance_data,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t writedispose_w_timestamp (
                    const PointCloud_ & instance_data,
                    ::DDS::InstanceHandle_t handle,
                    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value (
                    PointCloud_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance (
                    const PointCloud_ & instance_data) THROW_ORB_EXCEPTIONS;
            
            protected:
                PointCloud_DataWriter_impl ();
            
                virtual ~PointCloud_DataWriter_impl ();
            
                virtual DDS::ReturnCode_t init (
                                DDS::OpenSplice::Publisher *publisher,
                                DDS::OpenSplice::DomainParticipant *participant,
                                const DDS::DataWriterQos &qos,
                                DDS::OpenSplice::Topic *a_topic,
                                const char *name,
                                DDS::OpenSplice::cxxCopyIn copyIn,
                                DDS::OpenSplice::cxxCopyOut copyOut);
            
            private:
                PointCloud_DataWriter_impl (const PointCloud_DataWriter_impl &);
            
                void operator= (const PointCloud_DataWriter &);
            };
            
            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs PointCloud_DataReader_impl : public virtual PointCloud_DataReader,
                                                                   public ::DDS::OpenSplice::FooDataReader_impl
            {
                friend class DDS::OpenSplice::Subscriber;
                friend class PointCloud_TypeSupportMetaHolder;
                friend class PointCloud_DataReaderView_impl;
            
            public:
                virtual ::DDS::ReturnCode_t read (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_w_condition (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_w_condition (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_sample (
                    PointCloud_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_sample (
                    PointCloud_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_instance (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_instance (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t return_loan (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value (
                    PointCloud_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance (
                    const PointCloud_ & instance) THROW_ORB_EXCEPTIONS;
            
            protected:
                PointCloud_DataReader_impl ();
            
                virtual ~PointCloud_DataReader_impl ();
            
                DDS::ReturnCode_t init (
                        DDS::OpenSplice::Subscriber *subscriber,
                        const DDS::DataReaderQos &qos,
                        DDS::OpenSplice::TopicDescription *a_topic,
                        const char *name,
                        DDS::OpenSplice::cxxCopyIn copyIn,
                        DDS::OpenSplice::cxxCopyOut copyOut);
            
                static void* dataSeqAlloc (
                    void * data_values,
                    DDS::ULong len);
            
                static void dataSeqLength (
                    void * data_values,
                    DDS::ULong len);
            
                static void * dataSeqGetBuffer (
                    void * data_values,
                    DDS::ULong index);
            
                static void dataSeqCopyOut (
                    const void * from,
                    void * received_data);
                static void copyDataOut(const void *from, void *to);
            
            private:
                PointCloud_DataReader_impl (const PointCloud_DataReader &);
                void operator= (const PointCloud_DataReader &);
            
                static ::DDS::ReturnCode_t check_preconditions (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples);
            };
            
            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs PointCloud_DataReaderView_impl : public virtual PointCloud_DataReaderView,
                                                                       public ::DDS::OpenSplice::FooDataReaderView_impl
            {
                friend class DDS::OpenSplice::DataReader;
                friend class PointCloud_TypeSupportMetaHolder;
            
            public:
                virtual ::DDS::ReturnCode_t read (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_w_condition (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_w_condition (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_sample (
                    PointCloud_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_sample (
                    PointCloud_ & received_data,
                    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_instance (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_instance (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::SampleStateMask sample_states,
                    ::DDS::ViewStateMask view_states,
                    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq,
                    ::DDS::Long max_samples,
                    ::DDS::InstanceHandle_t a_handle,
                    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t return_loan (
                    PointCloud_Seq & received_data,
                    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::ReturnCode_t get_key_value (
                    PointCloud_ & key_holder,
                    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS;
            
                virtual ::DDS::InstanceHandle_t lookup_instance (
                    const PointCloud_ & instance) THROW_ORB_EXCEPTIONS;
            
            protected:
                PointCloud_DataReaderView_impl ();
            
                virtual ~PointCloud_DataReaderView_impl ();
            
                virtual DDS::ReturnCode_t init (
                    DDS::OpenSplice::DataReader *reader,
                    const char *name,
                    const DDS::DataReaderViewQos &qos,
                    DDS::OpenSplice::cxxCopyIn copyIn,
                    DDS::OpenSplice::cxxCopyOut copyOut);
            
            private:
                PointCloud_DataReaderView_impl (const PointCloud_DataReaderView &);
            
                void operator= (const PointCloud_DataReaderView &);
            };
            
        }

    }

}

#undef OS_API
#endif
