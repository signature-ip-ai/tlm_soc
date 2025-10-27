#include <iostream>
#include <memory>
#include <vector>
#include <tlm_soc/simple_rn_initiator.h>
#include <tlm_soc/tlm_target.h>
#include <tlm_top.h>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>

#include <chi_tlm/chi_enums.h>
#include <chi_tlm/chi_tlm_extension.h>
#include <chi_tlm/chi_credit_extension.h>

void send_credits_to_rn_ifx(simple_rn_initiator* initiator)
{
    auto&& rn_channel_list = {chi::ChiChannel::SNP, chi::ChiChannel::RDAT, chi::ChiChannel::CRSP};
    for (auto i = 0; i < 5; ++i)
    {
        for (auto&& channel : rn_channel_list)
        {
            chi::ChiCreditExtension* credit_message = new chi::ChiCreditExtension;
            credit_message->channel = channel;

            tlm::tlm_generic_payload trans1;
            trans1.set_extension(credit_message);

            tlm::tlm_phase phase = chi::CREDIT_RELEASE;
            sc_core::sc_time time = sc_core::SC_ZERO_TIME;
            initiator->initiator_socket->nb_transport_fw(trans1, phase, time);
        }
    }
}

void send_credits_to_sn_ifx(simple_target* target)
{
    auto&& sn_channel_list = {chi::ChiChannel::REQ, chi::ChiChannel::WDAT};
    for (auto i = 0; i < 5; ++i)
    {
        for (auto&& channel : sn_channel_list)
        {
            chi::ChiCreditExtension* credit_message = new chi::ChiCreditExtension;
            credit_message->channel = channel;

            tlm::tlm_generic_payload trans1;
            trans1.set_extension(credit_message);

            tlm::tlm_phase phase = chi::CREDIT_RELEASE;
            sc_core::sc_time time = sc_core::SC_ZERO_TIME;
            target->target_socket->nb_transport_bw(trans1, phase, time);
        }
    }
}

void send_request_to_rn_ifx(simple_rn_initiator* initiator)
{
    chi::ChiExtension* message = new chi::ChiExtension;
    message->channel = chi::ChiChannel::REQ;
    message->qos = 0;
    message->chi_txn_id = 0x1;
    message->req_fields.opcode = chi::ReqOpcode::WriteNoSnpFull;
    message->req_fields.tgt_id = 0x3;
    message->req_fields.src_id = 0x1;
    message->req_fields.return_nid = 0x1;

    tlm::tlm_generic_payload trans;
    trans.set_extension(message);

    tlm::tlm_phase phase = chi::TRANSFER;
    sc_core::sc_time time = sc_core::SC_ZERO_TIME;
    initiator->initiator_socket->nb_transport_fw(trans, phase, time);
}

int sc_main(int argc, char** argv)
{
    spdlog::set_pattern("[%H:%M:%S UTC%z][%^%=8l%$][%n] %v");
    auto&& logger = spdlog::stdout_color_st("sc_main");

    simple_rn_initiator initiator0{"initiator0"};
    simple_target target0{"target0"};
    tlm_top top{"top"};

    initiator0.initiator_socket.bind(top.cl0_p1_rn_target_socket);
    top.cl0_p3_sn_initiator_socket.bind(target0.target_socket);

    sc_core::sc_start(sc_core::SC_ZERO_TIME);
    top.enable_trace();

    logger->info("Elaboration complete");

    sc_core::sc_start(100, sc_core::SC_NS);

    send_credits_to_rn_ifx(&initiator0);

    sc_core::sc_start(100, sc_core::SC_NS);

    send_credits_to_sn_ifx(&target0);

    sc_core::sc_start(2000, sc_core::SC_NS);

    send_request_to_rn_ifx(&initiator0);
    sc_core::sc_start(2000, sc_core::SC_NS);

    logger->info("Simulation complete");
    return 0;
}
