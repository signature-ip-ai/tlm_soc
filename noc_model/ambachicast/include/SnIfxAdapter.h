#ifndef __SN_IFX_ADAPTER_H__
#define __SN_IFX_ADAPTER_H__

#include <systemc>
#include <tlm>
#include <tlm_utils/simple_initiator_socket.h>


SC_MODULE(SnIfxAdapter)
{
public:
    static constexpr auto BUS_WIDTH = 32u;
    static constexpr auto REQFLIT_WIDTH = 151;
    static constexpr auto RSPFLIT_WIDTH = 73;
    static constexpr auto DATFLIT_WIDTH = 680;

    using TYPES = tlm::tlm_base_protocol_types;
    using reqflit_t = sc_dt::sc_bv<REQFLIT_WIDTH>;
    using rspflit_t = sc_dt::sc_bv<RSPFLIT_WIDTH>;
    using datflit_t = sc_dt::sc_bv<DATFLIT_WIDTH>;

    SC_HAS_PROCESS(SnIfxAdapter);
    SnIfxAdapter(sc_core::sc_module_name name);

    tlm_utils::simple_initiator_socket<SnIfxAdapter, BUS_WIDTH, TYPES> initiator_socket;

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
    sc_core::sc_signal<reqflit_t> RX_REQFLIT_in;
    sc_core::sc_signal<bool> RX_REQLCRDV_out;

    sc_core::sc_signal<bool> RX_DATFLITPEND_in;
    sc_core::sc_signal<bool> RX_DATFLITV_in;
    sc_core::sc_signal<datflit_t> RX_DATFLIT_in;
    sc_core::sc_signal<bool> RX_DATLCRDV_out;

    sc_core::sc_signal<bool> TX_LINKACTIVEREQ_out;
    sc_core::sc_signal<bool> TX_LINKACTIVEACK_in;

    sc_core::sc_signal<bool> TX_RSPFLITPEND_out;
    sc_core::sc_signal<bool> TX_RSPFLITV_out;
    sc_core::sc_signal<rspflit_t> TX_RSPFLIT_out;
    sc_core::sc_signal<bool> TX_RSPLCRDV_in;

    sc_core::sc_signal<bool> TX_DATFLITPEND_out;
    sc_core::sc_signal<bool> TX_DATFLITV_out;
    sc_core::sc_signal<datflit_t> TX_DATFLIT_out;
    sc_core::sc_signal<bool> TX_DATLCRDV_in;

private:
    tlm::tlm_sync_enum nb_transport_bw(tlm::tlm_generic_payload&, tlm::tlm_phase&, sc_core::sc_time&);
    void invalidate_direct_mem_ptr(sc_dt::uint64 start_range, sc_dt::uint64 end_range);

    void forward_clock();
    void forward_reset();
    void main_process();

    void adapter_reset();
};

#endif  // __SN_IFX_ADAPTER_H__
