#ifndef __SIMPLE_TARGET_CALLBACKS_MOCK_HPP__
#define __SIMPLE_TARGET_CALLBACKS_MOCK_HPP__

#include <systemc>
#include <tlm>
#include <gmock/gmock.h>

struct SimpleTargetCallbacksMock
{
    MOCK_METHOD3(nb_transport_fw, tlm::tlm_sync_enum(tlm::tlm_generic_payload& trans, tlm::tlm_phase& phase, sc_core::sc_time& delay));
};

#endif  // __SIMPLE_TARGET_CALLBACKS_MOCK_HPP__
