#pragma once

#include <systemc>
#include <tlm>
#include <tlm_utils/simple_initiator_socket.h>

using namespace sc_core;
using namespace tlm;
using namespace tlm_utils;

struct simple_rn_initiator : public sc_module
{
public:
    simple_rn_initiator(sc_core::sc_module_name);

    simple_initiator_socket<simple_rn_initiator> initiator_socket;

private:
    tlm_sync_enum nb_transport_bw(tlm_generic_payload& trans, tlm_phase& phase, sc_time& delay);
};
