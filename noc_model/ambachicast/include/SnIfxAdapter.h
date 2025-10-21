#ifndef __SN_IFX_ADAPTER_H__
#define __SN_IFX_ADAPTER_H__

#include <memory>

#include <systemc>
#include <tlm>
#include <tlm_utils/simple_initiator_socket.h>

#include <flits/definitions.h>

class SnIfxAdapterTxChannel;
class SnIfxAdapterRxChannel;

SC_MODULE(SnIfxAdapter)
{
public:
    SnIfxAdapter(sc_core::sc_module_name name);
    ~SnIfxAdapter() = default;

    SnIfxAdapter(const SnIfxAdapter&) = delete;
    SnIfxAdapter& operator=(const SnIfxAdapter&) = delete;
    SnIfxAdapter(SnIfxAdapter&& other) noexcept = delete;
    SnIfxAdapter& operator=(SnIfxAdapter&& other) noexcept = delete;

    tlm_utils::simple_initiator_socket<SnIfxAdapter> initiator_socket;

    // Reset and Clocking will be provided by ClkResetIfx
    sc_core::sc_in<bool> intfrx_clk_in;
    sc_core::sc_in<bool> rstb_intfrx_clk_in;

    // Reset and Clocking forwarded to the NoC SN interface
    sc_core::sc_signal<bool> intfrx_clk_out;
    sc_core::sc_signal<bool> rstb_intfrx_clk_out;

    sc_core::sc_signal<bool> RXSACTIVE_in;
    sc_core::sc_signal<bool> TXSACTIVE_out;

    sc_core::sc_signal<bool> RX_LINKACTIVEREQ_in;
    sc_core::sc_signal<bool> RX_LINKACTIVEACK_out;

    sc_core::sc_signal<bool> RX_REQFLITPEND_in;
    sc_core::sc_signal<bool> RX_REQFLITV_in;
    sc_core::sc_signal<flits::reqflit_t> RX_REQFLIT_in;
    sc_core::sc_signal<bool> RX_REQLCRDV_out;

    sc_core::sc_signal<bool> RX_DATFLITPEND_in;
    sc_core::sc_signal<bool> RX_DATFLITV_in;
    sc_core::sc_signal<flits::datflit_t> RX_DATFLIT_in;
    sc_core::sc_signal<bool> RX_DATLCRDV_out;

    sc_core::sc_signal<bool> TX_LINKACTIVEREQ_out;
    sc_core::sc_signal<bool> TX_LINKACTIVEACK_in;

    sc_core::sc_signal<bool> TX_RSPFLITPEND_out;
    sc_core::sc_signal<bool> TX_RSPFLITV_out;
    sc_core::sc_signal<flits::rspflit_t> TX_RSPFLIT_out;
    sc_core::sc_signal<bool> TX_RSPLCRDV_in;

    sc_core::sc_signal<bool> TX_DATFLITPEND_out;
    sc_core::sc_signal<bool> TX_DATFLITV_out;
    sc_core::sc_signal<flits::datflit_t> TX_DATFLIT_out;
    sc_core::sc_signal<bool> TX_DATLCRDV_in;

private:
    tlm::tlm_sync_enum nb_transport_bw(tlm::tlm_generic_payload&, tlm::tlm_phase&, sc_core::sc_time&);
    void invalidate_direct_mem_ptr(sc_dt::uint64 start_range, sc_dt::uint64 end_range);

    void forward_clock();
    void forward_reset();

    void handle_rdat_credit_event();
    void handle_crsp_credit_event();

    void handle_req_flit_event();
    void handle_wdat_flit_event();

    void bind_tx_channels();
    void bind_rx_channels();

    std::shared_ptr<SnIfxAdapterTxChannel> tx_channel_;
    std::shared_ptr<SnIfxAdapterRxChannel> rx_channel_;
};

#endif  // __SN_IFX_ADAPTER_H__
