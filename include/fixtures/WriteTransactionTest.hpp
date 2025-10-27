#ifndef __FIXTURES_WRITE_TRANSACTION_TEST_HPP__
#define __FIXTURES_WRITE_TRANSACTION_TEST_HPP__

#include <optional>
#include <memory>
#include <cmath>

#include <systemc>
#include <gtest/gtest.h>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>

#include <tlm_top.h>
#include <chi_tlm/chi_tlm_extension.h>

#include <SimpleRnInitiator.h>
#include <SimpleSnTarget.h>
#include <fixtures/FieldWidthDefinitions.hpp>
#include <CommonTestMatchers.hpp>

using namespace ::testing;
using ::testing::_;

namespace
{
constexpr auto INITIATOR_NODE_ID    = 0x01;
constexpr auto TARGET_NODE_ID       = 0x03;
}  // namespace

struct WriteTransactionTest : public ::testing::Test
{
    WriteTransactionTest()
        : ::testing::Test()
        , dut_(std::make_shared<tlm_top>("top"))
        , initiator_(std::make_shared<SimpleRnInitiator>("initiator0", INITIATOR_NODE_ID))
        , target_(std::make_shared<SimpleSnTarget>("target0", TARGET_NODE_ID))
        , logger_(spdlog::stdout_color_st("WriteTransactionTest"))
        , random_(::testing::GTEST_FLAG(random_seed))
    {}

    void SetUp()
    {
        initiator_->initiator_socket.bind(dut_->cl0_p1_rn_target_socket);
        dut_->cl0_p3_sn_initiator_socket.bind(target_->target_socket);

        sc_core::sc_start(sc_core::SC_ZERO_TIME);
        dut_->enable_trace();
    }

    std::unique_ptr<chi::ChiExtension> createChiReqMessage(const chi::ReqOpcode& opcode,
        std::optional<sc_dt::sc_bv<11>> src_id = std::nullopt, std::optional<sc_dt::sc_bv<11>> tgt_id = std::nullopt)
    {
        std::unique_ptr<chi::ChiExtension> message = std::make_unique<chi::ChiExtension>();
        message->channel = chi::ChiChannel::REQ;
        message->req_fields.opcode = opcode;

        message->qos = 0;
        message->chi_txn_id = random_.Generate(std::pow(2, ReqFields::TXNID_WIDTH));
        message->req_fields.tgt_id =  tgt_id.value_or(random_.Generate(std::pow(2, ReqFields::TGTID_WIDTH))).to_uint();
        message->req_fields.src_id = src_id.value_or(random_.Generate(std::pow(2, ReqFields::SRCID_WIDTH))).to_uint();
        message->req_fields.return_nid = random_.Generate(std::pow(2, ReqFields::RETURNNID_WIDTH));
        message->req_fields.allow_retry = true;
        message->req_fields.order = 0;
        message->req_fields.mem_attr.allocate = false;
        message->req_fields.mem_attr.cacheable = false;
        message->req_fields.mem_attr.device = false;
        message->req_fields.mem_attr.ewa = false;
        message->req_fields.do_dwt = false;
        message->req_fields.exp_comp_ack = false;
        return message;
    }

    std::unique_ptr<chi::ChiExtension> createChiSrspMessage(const chi::RspOpcode& opcode)
    {
        std::unique_ptr<chi::ChiExtension> message = std::make_unique<chi::ChiExtension>();
        message->channel = chi::ChiChannel::SRSP;
        message->rsp_fields.opcode = opcode;

        message->qos = 0;
        message->chi_txn_id = random_.Generate(std::pow(2, RspFields::TXNID_WIDTH));
        message->rsp_fields.src_id = random_.Generate(std::pow(2, RspFields::SRCID_WIDTH));
        message->rsp_fields.tgt_id = random_.Generate(std::pow(2, RspFields::TGTID_WIDTH));
        message->rsp_fields.resp = chi::Resp::Uninitialized;
        message->rsp_fields.fwd_state = chi::Resp::Uninitialized;
        message->rsp_fields.pcrd_type = 0;
        message->rsp_fields.dbid = 0;
        return message;
    }

    std::unique_ptr<chi::ChiExtension> createChiCrspMessage(const chi::RspOpcode& opcode)
    {
        std::unique_ptr<chi::ChiExtension> message = std::make_unique<chi::ChiExtension>();
        message->channel = chi::ChiChannel::CRSP;
        message->rsp_fields.opcode = opcode;

        message->qos = 0;
        message->chi_txn_id = random_.Generate(std::pow(2, RspFields::TXNID_WIDTH));
        message->rsp_fields.src_id = random_.Generate(std::pow(2, RspFields::SRCID_WIDTH));
        message->rsp_fields.tgt_id = random_.Generate(std::pow(2, RspFields::TGTID_WIDTH));
        message->rsp_fields.resp = chi::Resp::Uninitialized;
        message->rsp_fields.fwd_state = chi::Resp::Uninitialized;
        message->rsp_fields.pcrd_type = 0;
        message->rsp_fields.dbid = 0;
        return message;
    }

    std::unique_ptr<chi::ChiExtension> createChiRdatMessage(const chi::DatOpcode& opcode)
    {
        std::unique_ptr<chi::ChiExtension> message = std::make_unique<chi::ChiExtension>();
        message->channel = chi::ChiChannel::RDAT;
        message->dat_fields.opcode = opcode;

        message->qos = 0;
        message->chi_txn_id = random_.Generate(std::pow(2, DatFields::TXNID_WIDTH));
        message->dat_fields.src_id = random_.Generate(std::pow(2, DatFields::SRCID_WIDTH));
        message->dat_fields.tgt_id = random_.Generate(std::pow(2, DatFields::TGTID_WIDTH));
        message->dat_fields.home_n_id = random_.Generate(std::pow(2, DatFields::HOMENID_WIDTH));
        message->dat_fields.resp = chi::Resp::Uninitialized;
        message->dat_fields.fwd_state = chi::Resp::Uninitialized;
        message->dat_fields.dbid = 0;
        return message;
    }

    std::unique_ptr<chi::ChiExtension> createChiWdatMessage(const chi::DatOpcode& opcode)
    {
        std::unique_ptr<chi::ChiExtension> message = std::make_unique<chi::ChiExtension>();
        message->channel = chi::ChiChannel::WDAT;
        message->dat_fields.opcode = opcode;

        message->qos = 0;
        message->chi_txn_id = random_.Generate(std::pow(2, DatFields::TXNID_WIDTH));
        message->dat_fields.src_id = random_.Generate(std::pow(2, DatFields::SRCID_WIDTH));
        message->dat_fields.tgt_id = random_.Generate(std::pow(2, DatFields::TGTID_WIDTH));
        message->dat_fields.home_n_id = random_.Generate(std::pow(2, DatFields::HOMENID_WIDTH));
        message->dat_fields.resp = chi::Resp::Uninitialized;
        message->dat_fields.fwd_state = chi::Resp::Uninitialized;
        message->dat_fields.dbid = 0;
        return message;
    }

    std::unique_ptr<chi::ChiExtension> createChiSnpMessage(const chi::SnpOpcode& opcode)
    {
        std::unique_ptr<chi::ChiExtension> message = std::make_unique<chi::ChiExtension>();
        message->channel = chi::ChiChannel::SNP;
        message->snp_fields.opcode = opcode;

        message->qos = random_.Generate(std::pow(2, SnpFields::QOS_WIDTH));
        message->chi_txn_id = random_.Generate(std::pow(2, SnpFields::TXNID_WIDTH));
        message->snp_fields.src_id = random_.Generate(std::pow(2, SnpFields::SRCID_WIDTH));
        message->snp_fields.fwd_nid = random_.Generate(std::pow(2, SnpFields::FWDNID_WIDTH));
        message->snp_fields.fwd_txn_id = random_.Generate(std::pow(2, SnpFields::FWDTXNID_WIDTH));
        message->snp_fields.ret_to_src = random_.Generate(2);
        message->snp_fields.do_not_go_to_sd = false;
        return message;
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
    testing::internal::Random random_;
};

#endif  // __FIXTURES_WRITE_TRANSACTION_TEST_HPP__
