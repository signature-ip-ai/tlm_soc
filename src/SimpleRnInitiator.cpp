#include <SimpleRnInitiator.h>

SimpleRnInitiator::SimpleRnInitiator(sc_core::sc_module_name module_name, const sc_dt::sc_bv<11>& node_id)
    : sc_core::sc_module(module_name)
    , initiator_socket("initiator_socket")
    , callbacks_mock(std::make_shared<SimpleInitiatorCallbacksMock>())
    , node_id_(node_id.to_uint())
{
    initiator_socket.register_nb_transport_bw(this, &SimpleRnInitiator::nb_transport_bw);
}

std::shared_ptr<SimpleInitiatorCallbacksMock> SimpleRnInitiator::get_callbacks_mock()
{
    return this->callbacks_mock;
}

void SimpleRnInitiator::send_credits(unsigned num_credits, chi::ChiChannel channel)
{
    for (auto i = 0u; i < num_credits; ++i)
    {
        chi::ChiCreditExtension* credit_message = new chi::ChiCreditExtension;
        credit_message->channel = channel;

        tlm::tlm_generic_payload trans1;
        trans1.set_extension(credit_message);

        tlm::tlm_phase phase = chi::CREDIT_RELEASE;
        sc_core::sc_time time = sc_core::SC_ZERO_TIME;
        this->initiator_socket->nb_transport_fw(trans1, phase, time);
    }
}

void SimpleRnInitiator::send_message(const std::unique_ptr<chi::ChiExtension>& message)
{
    auto&& chi_message = dynamic_cast<chi::ChiExtension*>(message->clone());
    tlm::tlm_generic_payload trans;
    trans.set_extension(chi_message);

    tlm::tlm_phase phase = chi::TRANSFER;
    sc_core::sc_time time = sc_core::SC_ZERO_TIME;
    this->initiator_socket->nb_transport_fw(trans, phase, time);
}

unsigned SimpleRnInitiator::get_node_id() const
{
    return node_id_;
}

tlm_sync_enum SimpleRnInitiator::nb_transport_bw(tlm_generic_payload& trans, tlm_phase& phase, sc_time& delay)
{
    return this->callbacks_mock->nb_transport_bw(trans, phase, delay);
}
