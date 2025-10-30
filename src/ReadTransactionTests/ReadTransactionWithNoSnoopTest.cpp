#include <fixtures/ReadTransactionTest.hpp>

#include <memory>

#include <systemc>
#include <gtest/gtest.h>

#include <chi_tlm/chi_enums.h>

#include <CommonTestMatchers.hpp>

using namespace ::testing;
using ::testing::_;

TEST_F(ReadTransactionTest, ReadTransactionWithNoSnoopTest)
{
    expect_to_receive_credits_from_cnoc();
    send_credits_to_cnoc(5);

    sc_core::sc_start(500, sc_core::SC_NS);

    std::unique_ptr<chi::ChiExtension> read_no_snoop_req = create_chi_req_message(chi::ReqOpcode::ReadNoSnp);

    EXPECT_CALL(*target_->get_callbacks_mock(), nb_transport_fw(
        IsChiReqMessageWithOpcode(chi::ReqOpcode::ReadNoSnp),
        IsOfPhaseType(chi::TRANSFER), _))
            .WillOnce(DoAll(
                Invoke([&](tlm::tlm_generic_payload& trans, tlm::tlm_phase& phase, sc_core::sc_time& delay)
                {
                    auto&& message = trans.get_extension<chi::ChiExtension>();
                    ASSERT_EQ(message->channel, chi::ChiChannel::REQ);
                    ASSERT_EQ(message->req_fields.opcode , chi::ReqOpcode::ReadNoSnp);
                    ASSERT_EQ(message->req_fields.tgt_id , target_->get_node_id());
                }),
                Return(tlm::TLM_ACCEPTED)));

    initiator0_->send_message(read_no_snoop_req);

    sc_core::sc_start(50, sc_core::SC_NS);
}
