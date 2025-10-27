#include <SimpleSnTarget.h>

SimpleSnTarget::SimpleSnTarget(sc_core::sc_module_name module_name,  const sc_dt::sc_bv<11>& node_id)
    : sc_core::sc_module(module_name)
    , target_socket("target_socket")
    , callbacks_mock(std::make_shared<SimpleTargetCallbacksMock>())
    , node_id_(node_id.to_uint())
{
    target_socket.register_nb_transport_fw(this, &SimpleSnTarget::nb_transport_fw);
}

std::shared_ptr<SimpleTargetCallbacksMock> SimpleSnTarget::get_callbacks_mock()
{
    return this->callbacks_mock;
}

void SimpleSnTarget::send_credits(unsigned num_credits, chi::ChiChannel channel)
{
    for (auto i = 0u; i < num_credits; ++i)
    {
        chi::ChiCreditExtension* credit_message = new chi::ChiCreditExtension;
        credit_message->channel = channel;

        tlm::tlm_generic_payload trans1;
        trans1.set_extension(credit_message);

        tlm::tlm_phase phase = chi::CREDIT_RELEASE;
        sc_core::sc_time time = sc_core::SC_ZERO_TIME;
        this->target_socket->nb_transport_bw(trans1, phase, time);
    }
}

void SimpleSnTarget::send_message(const std::unique_ptr<chi::ChiExtension>& message)
{
    auto&& chi_message = dynamic_cast<chi::ChiExtension*>(message->clone());
    tlm::tlm_generic_payload trans;
    trans.set_extension(chi_message);

    tlm::tlm_phase phase = chi::TRANSFER;
    sc_core::sc_time time = sc_core::SC_ZERO_TIME;
    this->target_socket->nb_transport_bw(trans, phase, time);
}

unsigned SimpleSnTarget::get_node_id() const
{
    return node_id_;
}

tlm_sync_enum SimpleSnTarget::nb_transport_fw(tlm_generic_payload& trans, tlm_phase& phase, sc_time& delay)
{
    return this->callbacks_mock->nb_transport_fw(trans, phase, delay);
}
