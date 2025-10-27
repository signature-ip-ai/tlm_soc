#include <fixtures/WriteTransactionTest.hpp>

#include <memory>

#include <systemc>
#include <gtest/gtest.h>

#include <chi_tlm/chi_enums.h>

#include <CommonTestMatchers.hpp>

using namespace ::testing;
using ::testing::_;

TEST_F(WriteTransactionTest, WriteTransactionWithNoSnoopTest)
{
    expect_to_receive_credits_from_cnoc();

    sc_core::sc_start(500, sc_core::SC_NS);

    send_credits_to_cnoc(5);

    std::unique_ptr<chi::ChiExtension> write_no_snoop_req = createChiReqMessage(chi::ReqOpcode::WriteNoSnpFull);
    std::unique_ptr<chi::ChiExtension> non_copyback_wr_data = createChiWdatMessage(chi::DatOpcode::NonCopyBackWriteData);
    std::unique_ptr<chi::ChiExtension> comp_dbid_resp = createChiCrspMessage(chi::RspOpcode::CompDBIDResp);

    EXPECT_CALL(*initiator_->get_callbacks_mock(), nb_transport_bw(
        IsChiCrspMessageWithOpcode(chi::RspOpcode::DBIDResp),
        IsOfPhaseType(chi::TRANSFER), _))
            .WillOnce(DoAll(
                Invoke([&](tlm::tlm_generic_payload& trans, tlm::tlm_phase& phase, sc_core::sc_time& delay)
                {
                    auto&& message = trans.get_extension<chi::ChiExtension>();
                    ASSERT_EQ(message->channel, chi::ChiChannel::CRSP);
                    ASSERT_EQ(message->rsp_fields.opcode , chi::RspOpcode::DBIDResp);
                    ASSERT_EQ(message->chi_txn_id, write_no_snoop_req->chi_txn_id);
                    ASSERT_EQ(message->rsp_fields.tgt_id, initiator_->get_node_id());

                    non_copyback_wr_data->dat_fields.tgt_id = message->rsp_fields.src_id;
                    non_copyback_wr_data->dat_fields.src_id = message->rsp_fields.tgt_id;
                    non_copyback_wr_data->chi_txn_id = message->rsp_fields.dbid;
                }),
                Return(tlm::TLM_ACCEPTED)));

    EXPECT_CALL(*target_->get_callbacks_mock(), nb_transport_fw(
        IsChiReqMessageWithOpcode(chi::ReqOpcode::WriteNoSnpFull),
        IsOfPhaseType(chi::TRANSFER), _))
            .WillOnce(DoAll(
                Invoke([&](tlm::tlm_generic_payload& trans, tlm::tlm_phase& phase, sc_core::sc_time& delay)
                {
                    auto&& message = trans.get_extension<chi::ChiExtension>();
                    ASSERT_EQ(message->channel, chi::ChiChannel::REQ);
                    ASSERT_EQ(message->req_fields.opcode , chi::ReqOpcode::WriteNoSnpFull);
                    ASSERT_EQ(message->req_fields.tgt_id , target_->get_node_id());

                    comp_dbid_resp->chi_txn_id = message->chi_txn_id;
                    comp_dbid_resp->rsp_fields.tgt_id = message->req_fields.src_id;
                    comp_dbid_resp->rsp_fields.src_id = message->req_fields.tgt_id;
                }),
                Return(tlm::TLM_ACCEPTED)));

    initiator_->send_message(write_no_snoop_req);

    sc_core::sc_start(50, sc_core::SC_NS);

    initiator_->send_message(non_copyback_wr_data);

    sc_core::sc_start(50, sc_core::SC_NS);

    EXPECT_CALL(*initiator_->get_callbacks_mock(), nb_transport_bw(
        IsChiCrspMessageWithOpcode(chi::RspOpcode::Comp),
        IsOfPhaseType(chi::TRANSFER), _))
            .WillOnce(Return(tlm::TLM_ACCEPTED));

    EXPECT_CALL(*target_->get_callbacks_mock(), nb_transport_fw(
        IsChiWdatMessageWithOpcode(chi::DatOpcode::NonCopyBackWriteData),
        IsOfPhaseType(chi::TRANSFER), _))
            .WillOnce(Return(tlm::TLM_ACCEPTED));

    target_->send_message(comp_dbid_resp);

    sc_core::sc_start(50, sc_core::SC_NS);
}
