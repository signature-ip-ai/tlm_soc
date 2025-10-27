#include <tlm_soc/simple_rn_initiator.h>

simple_rn_initiator::simple_rn_initiator(sc_core::sc_module_name module_name)
    : sc_core::sc_module(module_name)
    , initiator_socket("initiator_socket")
{
    initiator_socket.register_nb_transport_bw(this, &simple_rn_initiator::nb_transport_bw);
}

tlm_sync_enum simple_rn_initiator::nb_transport_bw(tlm_generic_payload& trans, tlm_phase& phase, sc_time& delay)
{
    return TLM_ACCEPTED;
}
