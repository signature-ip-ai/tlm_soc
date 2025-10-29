#ifndef __FIXTURES_READ_TRANSACTION_TEST_HPP__
#define __FIXTURES_READ_TRANSACTION_TEST_HPP__

#include <memory>

#include <systemc>
#include <gtest/gtest.h>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>

#include <tlm_top.h>
#include <chi_tlm/chi_tlm_extension.h>

#include <SimpleRnInitiator.h>
#include <SimpleSnTarget.h>
#include <fixtures/FieldWidthDefinitions.hpp>
#include <fixtures/CommonTestBase.hpp>
#include <CommonTestMatchers.hpp>

using namespace ::testing;
using ::testing::_;

namespace
{
constexpr auto INITIATOR_NODE_ID    = 0x01;
constexpr auto TARGET_NODE_ID       = 0x03;
}  // namespace

struct ReadTransactionTest : public CommonTestBase
{
    ReadTransactionTest()
        : CommonTestBase()
        , dut_(std::make_shared<tlm_top>("top"))
        , initiator_(std::make_shared<SimpleRnInitiator>("initiator0", INITIATOR_NODE_ID))
        , target_(std::make_shared<SimpleSnTarget>("target0", TARGET_NODE_ID))
        , logger_(spdlog::stdout_color_st("ReadTransactionTest"))
    {}

    void SetUp()
    {
        initiator_->initiator_socket.bind(dut_->cl0_p1_rn_target_socket);
        dut_->cl0_p3_sn_initiator_socket.bind(target_->target_socket);

        sc_core::sc_start(sc_core::SC_ZERO_TIME);
        dut_->enable_trace();

        sc_core::sc_start(10, sc_core::SC_NS);
    }

    void expect_to_receive_credits_from_cnoc()
    {
        // Credits forwarded to RnInitiator
        EXPECT_CALL(*initiator_->get_callbacks_mock(), nb_transport_bw(
            IsChiCreditExtensionWithChannel(chi::ChiChannel::REQ),
            IsOfPhaseType(chi::CREDIT_RELEASE), _))
                .WillRepeatedly(Return(tlm::TLM_ACCEPTED));

        EXPECT_CALL(*initiator_->get_callbacks_mock(), nb_transport_bw(
            IsChiCreditExtensionWithChannel(chi::ChiChannel::WDAT),
            IsOfPhaseType(chi::CREDIT_RELEASE), _))
                .WillRepeatedly(Return(tlm::TLM_ACCEPTED));

        EXPECT_CALL(*initiator_->get_callbacks_mock(), nb_transport_bw(
            IsChiCreditExtensionWithChannel(chi::ChiChannel::SRSP),
            IsOfPhaseType(chi::CREDIT_RELEASE), _))
                .WillRepeatedly(Return(tlm::TLM_ACCEPTED));

        // Credits forwarded to SnTarget
        EXPECT_CALL(*target_->get_callbacks_mock(), nb_transport_fw(
            IsChiCreditExtensionWithChannel(chi::ChiChannel::RDAT),
            IsOfPhaseType(chi::CREDIT_RELEASE), _))
                .WillRepeatedly(Return(tlm::TLM_ACCEPTED));

        EXPECT_CALL(*target_->get_callbacks_mock(), nb_transport_fw(
            IsChiCreditExtensionWithChannel(chi::ChiChannel::CRSP),
            IsOfPhaseType(chi::CREDIT_RELEASE), _))
                .WillRepeatedly(Return(tlm::TLM_ACCEPTED));
    }

    void send_credits_to_cnoc(unsigned num_credits)
    {
        initiator_->send_credits(num_credits, chi::ChiChannel::SNP);
        initiator_->send_credits(num_credits, chi::ChiChannel::RDAT);
        initiator_->send_credits(num_credits, chi::ChiChannel::CRSP);

        target_->send_credits(num_credits, chi::ChiChannel::REQ);
        target_->send_credits(num_credits, chi::ChiChannel::WDAT);
    }

    std::shared_ptr<tlm_top> dut_;
    std::shared_ptr<SimpleRnInitiator> initiator_;
    std::shared_ptr<SimpleSnTarget> target_;
    std::shared_ptr<spdlog::logger> logger_;
};

#endif  // __FIXTURES_READ_TRANSACTION_TEST_HPP__
