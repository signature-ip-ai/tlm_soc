#pragma once

#include <systemc>
#include <tlm>
#include <tlm_utils/simple_target_socket.h>

using namespace sc_core;
using namespace tlm;
using namespace tlm_utils;

class simple_target : public sc_module
{
public:
    // TLM-2.0 simple target socket
    simple_target_socket<simple_target> target_socket;

    SC_CTOR(simple_target)
        : target_socket("target_socket")
    {
        // Register forward path callback
        target_socket.register_nb_transport_fw(this, &simple_target::nb_transport_fw);
    }

private:
    // Forward path non-blocking transport method
    tlm_sync_enum nb_transport_fw(tlm_generic_payload& trans,
                                    tlm_phase& phase,
                                    sc_time& delay)
    {
        // Handle forward path communication
        // This is called by the initiator to send requests

        return TLM_ACCEPTED;
    }
};