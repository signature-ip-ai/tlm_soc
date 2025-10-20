#include <iostream>
#include <memory>
#include <vector>
#include "tlm_soc/tlm_initiator.h"
#include "tlm_soc/tlm_target.h"
#include <tlm_top.h>

#include <chi_tlm/chi_enums.h>
#include <chi_tlm/chi_tlm_extension.h>
#include <chi_tlm/chi_credit_extension.h>


int sc_main(int argc, char** argv)
{
    simple_initiator initiator0{"initiator0"};
    simple_target target0{"target0"};
    tlm_top top{"top"};

    initiator0.initiator_socket.bind(top.cl0_p1_rn_target_socket);
    top.cl0_p3_sn_initiator_socket.bind(target0.target_socket);

    sc_core::sc_start(sc_core::SC_ZERO_TIME);
    top.enable_trace();

    std::cout << "Elaboration complete\n";

    sc_core::sc_start(20, sc_core::SC_NS);

    chi::ChiExtension* message = new chi::ChiExtension;
    message->channel = chi::ChiChannel::REQ;
    message->qos = 5;
    message->req_fields.opcode = chi::ReqOpcode::WriteNoSnpFull;

    tlm::tlm_generic_payload trans;
    trans.set_extension(message);

    tlm::tlm_phase phase = chi::REQ;
    sc_core::sc_time time = sc_core::SC_ZERO_TIME;
    initiator0.initiator_socket->nb_transport_fw(trans, phase, time);

    sc_core::sc_start(1000, sc_core::SC_NS);

    auto&& channel_list = {chi::ChiChannel::SNP, chi::ChiChannel::RDAT, chi::ChiChannel::CRSP};
    for (auto i = 0; i < 5; ++i)
    {
        for (auto&& channel : channel_list)
        {
            chi::ChiCreditExtension* credit_message = new chi::ChiCreditExtension;
            credit_message->channel = channel;

            tlm::tlm_generic_payload trans1;
            trans1.set_extension(credit_message);

            tlm::tlm_phase phase = chi::CREDIT_RELEASE;
            sc_core::sc_time time = sc_core::SC_ZERO_TIME;
            initiator0.initiator_socket->nb_transport_fw(trans1, phase, time);
        }
    }

    sc_core::sc_start(1000, sc_core::SC_NS);

    std::cout << "Simulation complete\n";
    return 0;
}
