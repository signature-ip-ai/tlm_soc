#pragma once

#include <memory>
#include <systemc>
#include <tlm>
#include <tlm_utils/simple_target_socket.h>

#include <chi_tlm/chi_enums.h>
#include <chi_tlm/chi_credit_extension.h>
#include <chi_tlm/chi_tlm_extension.h>
#include <SimpleTargetCallbacksMock.hpp>

using namespace sc_core;
using namespace tlm;
using namespace tlm_utils;

class SimpleSnTarget : public sc_module
{
public:
    SimpleSnTarget(sc_module_name, const sc_dt::sc_bv<11>& node_id);
    simple_target_socket<SimpleSnTarget> target_socket;
    std::shared_ptr<SimpleTargetCallbacksMock> callbacks_mock;

    std::shared_ptr<SimpleTargetCallbacksMock> get_callbacks_mock();
    void send_credits(unsigned num_credits, chi::ChiChannel channel);
    void send_message(const std::unique_ptr<chi::ChiExtension>& message);
    unsigned get_node_id() const;

private:
    unsigned node_id_;
    tlm_sync_enum nb_transport_fw(tlm_generic_payload& trans, tlm_phase& phase, sc_time& delay);
};
