#ifndef __SIMPLE_INITIATOR_CALLBACKS_MOCK_HPP__
#define __SIMPLE_INITIATOR_CALLBACKS_MOCK_HPP__

#include <systemc>
#include <tlm>
#include <gmock/gmock.h>

struct SimpleInitiatorCallbacksMock
{
    MOCK_METHOD3(nb_transport_bw, tlm::tlm_sync_enum(tlm::tlm_generic_payload& trans, tlm::tlm_phase& phase, sc_core::sc_time& delay));
};

#endif  // __SIMPLE_INITIATOR_CALLBACKS_MOCK_HPP__
