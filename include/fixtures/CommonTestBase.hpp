#ifndef __FIXTURES_COMMON_TEST_BASE_HPP__
#define __FIXTURES_COMMON_TEST_BASE_HPP__

#include <cmath>
#include <memory>
#include <optional>

#include <gtest/gtest.h>

#include <chi_tlm/chi_tlm_extension.h>

#include <fixtures/FieldWidthDefinitions.hpp>

struct CommonTestBase : public ::testing::Test
{
    CommonTestBase()
        : ::testing::Test()
        , random_(::testing::GTEST_FLAG(random_seed))
    {}

    std::unique_ptr<chi::ChiExtension> create_chi_req_message(
        const chi::ReqOpcode& opcode,
        std::optional<sc_dt::sc_bv<ReqFields::SRCID_WIDTH>> src_id = std::nullopt,
        std::optional<sc_dt::sc_bv<ReqFields::TGTID_WIDTH>> tgt_id = std::nullopt,
        std::optional<sc_dt::sc_bv<ReqFields::QOS_WIDTH>> qos = std::nullopt,
        std::optional<sc_dt::sc_bv<ReqFields::TXNID_WIDTH>> chi_txn_id = std::nullopt,
        std::optional<sc_dt::sc_bv<ReqFields::RETURNNID_WIDTH>> return_nid = std::nullopt,
        std::optional<bool> allow_retry = std::nullopt,
        std::optional<sc_dt::sc_bv<ReqFields::ORDER_WIDTH>> order = std::nullopt,
        std::optional<bool> mem_attr_allocate = std::nullopt,
        std::optional<bool> mem_attr_cacheable = std::nullopt,
        std::optional<bool> mem_attr_device = std::nullopt,
        std::optional<bool> mem_attr_ewa = std::nullopt,
        std::optional<bool> do_dwt = std::nullopt,
        std::optional<bool> exp_comp_ack = std::nullopt)
    {
        std::unique_ptr<chi::ChiExtension> message = std::make_unique<chi::ChiExtension>();
        message->channel = chi::ChiChannel::REQ;
        message->req_fields.opcode = opcode;

        message->qos = qos.value_or(sc_dt::sc_bv<ReqFields::QOS_WIDTH>(0)).to_uint();
        message->chi_txn_id = chi_txn_id.value_or(random_.Generate(std::pow(2, ReqFields::TXNID_WIDTH))).to_uint();
        message->req_fields.tgt_id = tgt_id.value_or(random_.Generate(std::pow(2, ReqFields::TGTID_WIDTH))).to_uint();
        message->req_fields.src_id = src_id.value_or(random_.Generate(std::pow(2, ReqFields::SRCID_WIDTH))).to_uint();
        message->req_fields.return_nid = return_nid.value_or(random_.Generate(std::pow(2, ReqFields::RETURNNID_WIDTH))).to_uint();
        message->req_fields.allow_retry = allow_retry.value_or(true);
        message->req_fields.order = order.value_or(sc_dt::sc_bv<ReqFields::ORDER_WIDTH>(0)).to_uint();
        message->req_fields.mem_attr.allocate = mem_attr_allocate.value_or(false);
        message->req_fields.mem_attr.cacheable = mem_attr_cacheable.value_or(false);
        message->req_fields.mem_attr.device = mem_attr_device.value_or(false);
        message->req_fields.mem_attr.ewa = mem_attr_ewa.value_or(false);
        message->req_fields.do_dwt = do_dwt.value_or(false);
        message->req_fields.exp_comp_ack = exp_comp_ack.value_or(false);

        return message;
    }

    std::unique_ptr<chi::ChiExtension> create_chi_srsp_message(
        const chi::RspOpcode& opcode,
        std::optional<sc_dt::sc_bv<RspFields::QOS_WIDTH>> qos = std::nullopt,
        std::optional<sc_dt::sc_bv<RspFields::TXNID_WIDTH>> chi_txn_id = std::nullopt,
        std::optional<sc_dt::sc_bv<RspFields::SRCID_WIDTH>> src_id = std::nullopt,
        std::optional<sc_dt::sc_bv<RspFields::TGTID_WIDTH>> tgt_id = std::nullopt,
        std::optional<chi::Resp> resp = std::nullopt,
        std::optional<chi::Resp> fwd_state = std::nullopt,
        std::optional<sc_dt::sc_bv<RspFields::PCRDTYPE_WIDTH>> pcrd_type = std::nullopt,
        std::optional<sc_dt::sc_bv<RspFields::DBID_WIDTH>> dbid = std::nullopt)
    {
        std::unique_ptr<chi::ChiExtension> message = std::make_unique<chi::ChiExtension>();
        message->channel = chi::ChiChannel::SRSP;
        message->rsp_fields.opcode = opcode;

        message->qos = qos.value_or(sc_dt::sc_bv<RspFields::QOS_WIDTH>(0)).to_uint();
        message->chi_txn_id = chi_txn_id.value_or(random_.Generate(std::pow(2, RspFields::TXNID_WIDTH))).to_uint();
        message->rsp_fields.src_id = src_id.value_or(random_.Generate(std::pow(2, RspFields::SRCID_WIDTH))).to_uint();
        message->rsp_fields.tgt_id = tgt_id.value_or(random_.Generate(std::pow(2, RspFields::TGTID_WIDTH))).to_uint();
        message->rsp_fields.resp = resp.value_or(chi::Resp::Uninitialized);
        message->rsp_fields.fwd_state = fwd_state.value_or(chi::Resp::Uninitialized);
        message->rsp_fields.pcrd_type = pcrd_type.value_or(sc_dt::sc_bv<RspFields::PCRDTYPE_WIDTH>(0)).to_uint();
        message->rsp_fields.dbid = dbid.value_or(sc_dt::sc_bv<RspFields::DBID_WIDTH>(0)).to_uint();

        return message;
    }

    std::unique_ptr<chi::ChiExtension> create_chi_crsp_message(
        const chi::RspOpcode& opcode,
        std::optional<sc_dt::sc_bv<RspFields::QOS_WIDTH>> qos = std::nullopt,
        std::optional<sc_dt::sc_bv<RspFields::TXNID_WIDTH>> chi_txn_id = std::nullopt,
        std::optional<sc_dt::sc_bv<RspFields::SRCID_WIDTH>> src_id = std::nullopt,
        std::optional<sc_dt::sc_bv<RspFields::TGTID_WIDTH>> tgt_id = std::nullopt,
        std::optional<chi::Resp> resp = std::nullopt,
        std::optional<chi::Resp> fwd_state = std::nullopt,
        std::optional<sc_dt::sc_bv<RspFields::PCRDTYPE_WIDTH>> pcrd_type = std::nullopt,
        std::optional<sc_dt::sc_bv<RspFields::DBID_WIDTH>> dbid = std::nullopt)
    {
        std::unique_ptr<chi::ChiExtension> message = std::make_unique<chi::ChiExtension>();
        message->channel = chi::ChiChannel::CRSP;
        message->rsp_fields.opcode = opcode;

        message->qos = qos.value_or(sc_dt::sc_bv<RspFields::QOS_WIDTH>(0)).to_uint();
        message->chi_txn_id = chi_txn_id.value_or(random_.Generate(std::pow(2, RspFields::TXNID_WIDTH))).to_uint();
        message->rsp_fields.src_id = src_id.value_or(random_.Generate(std::pow(2, RspFields::SRCID_WIDTH))).to_uint();
        message->rsp_fields.tgt_id = tgt_id.value_or(random_.Generate(std::pow(2, RspFields::TGTID_WIDTH))).to_uint();
        message->rsp_fields.resp = resp.value_or(chi::Resp::Uninitialized);
        message->rsp_fields.fwd_state = fwd_state.value_or(chi::Resp::Uninitialized);
        message->rsp_fields.pcrd_type = pcrd_type.value_or(sc_dt::sc_bv<RspFields::PCRDTYPE_WIDTH>(0)).to_uint();
        message->rsp_fields.dbid = dbid.value_or(sc_dt::sc_bv<RspFields::DBID_WIDTH>(0)).to_uint();

        return message;
    }

    std::unique_ptr<chi::ChiExtension> create_chi_rdat_message(
        const chi::DatOpcode& opcode,
        std::optional<sc_dt::sc_bv<DatFields::QOS_WIDTH>> qos = std::nullopt,
        std::optional<sc_dt::sc_bv<DatFields::TXNID_WIDTH>> chi_txn_id = std::nullopt,
        std::optional<sc_dt::sc_bv<DatFields::SRCID_WIDTH>> src_id = std::nullopt,
        std::optional<sc_dt::sc_bv<DatFields::TGTID_WIDTH>> tgt_id = std::nullopt,
        std::optional<sc_dt::sc_bv<DatFields::HOMENID_WIDTH>> home_n_id = std::nullopt,
        std::optional<chi::Resp> resp = std::nullopt,
        std::optional<chi::Resp> fwd_state = std::nullopt,
        std::optional<sc_dt::sc_bv<DatFields::DBID_WIDTH>> dbid = std::nullopt)
    {
        std::unique_ptr<chi::ChiExtension> message = std::make_unique<chi::ChiExtension>();
        message->channel = chi::ChiChannel::RDAT;
        message->dat_fields.opcode = opcode;

        message->qos = qos.value_or(sc_dt::sc_bv<DatFields::QOS_WIDTH>(0)).to_uint();
        message->chi_txn_id = chi_txn_id.value_or(random_.Generate(std::pow(2, DatFields::TXNID_WIDTH))).to_uint();
        message->dat_fields.src_id = src_id.value_or(random_.Generate(std::pow(2, DatFields::SRCID_WIDTH))).to_uint();
        message->dat_fields.tgt_id = tgt_id.value_or(random_.Generate(std::pow(2, DatFields::TGTID_WIDTH))).to_uint();
        message->dat_fields.home_n_id = home_n_id.value_or(random_.Generate(std::pow(2, DatFields::HOMENID_WIDTH))).to_uint();
        message->dat_fields.resp = resp.value_or(chi::Resp::Uninitialized);
        message->dat_fields.fwd_state = fwd_state.value_or(chi::Resp::Uninitialized);
        message->dat_fields.dbid = dbid.value_or(sc_dt::sc_bv<DatFields::DBID_WIDTH>(0)).to_uint();

        return message;
    }

    std::unique_ptr<chi::ChiExtension> create_chi_wdat_message(
        const chi::DatOpcode& opcode,
        std::optional<sc_dt::sc_bv<DatFields::QOS_WIDTH>> qos = std::nullopt,
        std::optional<sc_dt::sc_bv<DatFields::TXNID_WIDTH>> chi_txn_id = std::nullopt,
        std::optional<sc_dt::sc_bv<DatFields::SRCID_WIDTH>> src_id = std::nullopt,
        std::optional<sc_dt::sc_bv<DatFields::TGTID_WIDTH>> tgt_id = std::nullopt,
        std::optional<sc_dt::sc_bv<DatFields::HOMENID_WIDTH>> home_n_id = std::nullopt,
        std::optional<chi::Resp> resp = std::nullopt,
        std::optional<chi::Resp> fwd_state = std::nullopt,
        std::optional<sc_dt::sc_bv<DatFields::DBID_WIDTH>> dbid = std::nullopt)
    {
        std::unique_ptr<chi::ChiExtension> message = std::make_unique<chi::ChiExtension>();
        message->channel = chi::ChiChannel::WDAT;
        message->dat_fields.opcode = opcode;

        message->qos = qos.value_or(sc_dt::sc_bv<DatFields::QOS_WIDTH>(0)).to_uint();
        message->chi_txn_id = chi_txn_id.value_or(random_.Generate(std::pow(2, DatFields::TXNID_WIDTH))).to_uint();
        message->dat_fields.src_id = src_id.value_or(random_.Generate(std::pow(2, DatFields::SRCID_WIDTH))).to_uint();
        message->dat_fields.tgt_id = tgt_id.value_or(random_.Generate(std::pow(2, DatFields::TGTID_WIDTH))).to_uint();
        message->dat_fields.home_n_id = home_n_id.value_or(random_.Generate(std::pow(2, DatFields::HOMENID_WIDTH))).to_uint();
        message->dat_fields.resp = resp.value_or(chi::Resp::Uninitialized);
        message->dat_fields.fwd_state = fwd_state.value_or(chi::Resp::Uninitialized);
        message->dat_fields.dbid = dbid.value_or(sc_dt::sc_bv<DatFields::DBID_WIDTH>(0)).to_uint();

        return message;
    }

    std::unique_ptr<chi::ChiExtension> create_chi_snp_message(
        const chi::SnpOpcode& opcode,
        std::optional<sc_dt::sc_bv<SnpFields::QOS_WIDTH>> qos = std::nullopt,
        std::optional<sc_dt::sc_bv<SnpFields::TXNID_WIDTH>> chi_txn_id = std::nullopt,
        std::optional<sc_dt::sc_bv<SnpFields::SRCID_WIDTH>> src_id = std::nullopt,
        std::optional<sc_dt::sc_bv<SnpFields::FWDNID_WIDTH>> fwd_nid = std::nullopt,
        std::optional<sc_dt::sc_bv<SnpFields::FWDTXNID_WIDTH>> fwd_txn_id = std::nullopt,
        std::optional<bool> ret_to_src = std::nullopt,
        std::optional<bool> do_not_go_to_sd = std::nullopt)
    {
        std::unique_ptr<chi::ChiExtension> message = std::make_unique<chi::ChiExtension>();
        message->channel = chi::ChiChannel::SNP;
        message->snp_fields.opcode = opcode;

        message->qos = qos.value_or(random_.Generate(std::pow(2, SnpFields::QOS_WIDTH))).to_uint();
        message->chi_txn_id = chi_txn_id.value_or(random_.Generate(std::pow(2, SnpFields::TXNID_WIDTH))).to_uint();
        message->snp_fields.src_id = src_id.value_or(random_.Generate(std::pow(2, SnpFields::SRCID_WIDTH))).to_uint();
        message->snp_fields.fwd_nid = fwd_nid.value_or(random_.Generate(std::pow(2, SnpFields::FWDNID_WIDTH))).to_uint();
        message->snp_fields.fwd_txn_id = fwd_txn_id.value_or(random_.Generate(std::pow(2, SnpFields::FWDTXNID_WIDTH))).to_uint();
        message->snp_fields.ret_to_src = ret_to_src.value_or(random_.Generate(2));
        message->snp_fields.do_not_go_to_sd = do_not_go_to_sd.value_or(false);

        return message;
    }

    testing::internal::Random random_;
};

#endif  // __FIXTURES_COMMON_TEST_BASE_HPP__
