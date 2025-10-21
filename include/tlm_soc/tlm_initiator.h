#pragma once

#include <systemc>
#include <tlm>
#include <tlm_utils/simple_initiator_socket.h>

using namespace sc_core;
using namespace tlm;
using namespace tlm_utils;

class simple_initiator : public sc_module
{
public:
    // TLM-2.0 simple initiator socket
    simple_initiator_socket<simple_initiator> initiator_socket;

    SC_CTOR(simple_initiator)
        : initiator_socket("initiator_socket")
    {
        // Register backward path callback
        initiator_socket.register_nb_transport_bw(this, &simple_initiator::nb_transport_bw);
    }

private:
    // Backward path non-blocking transport method
    tlm_sync_enum nb_transport_bw(tlm_generic_payload& trans,
                                    tlm_phase& phase,
                                    sc_time& delay)
    {
        // Handle backward path communication
        // This is called by the target to send responses back

        return TLM_ACCEPTED;
    }
};