// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_NODE_RX_DATPROC__PI59_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_NODE_RX_DATPROC__PI59_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_node_rx_datproc__pi59 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* __PVT__sig_node_rx_datproc_vc0;
    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* __PVT__sig_node_rx_datproc_vc1;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__ic_clk,0,0);
    VL_IN8(__PVT__rstb_ic_clk,0,0);
    VL_IN8(__PVT__ic_gclk,0,0);
    VL_IN8(__PVT__intfrx_clk,0,0);
    VL_IN8(__PVT__intfrx_gclk,0,0);
    VL_IN8(__PVT__rstb_intfrx_clk,0,0);
    VL_IN8(__PVT__mycluster_id,7,0);
    VL_IN8(__PVT__myproc_id,2,0);
    VL_IN8(__PVT__ic_RX_FLITPEND,0,0);
    VL_IN8(__PVT__ic_RX_FLITV,0,0);
    VL_OUT8(__PVT__ic_RX_LCRDV,0,0);
    VL_IN8(__PVT__enable_init_update,0,0);
    VL_IN8(__PVT__rcvr_can_send_crdt,0,0);
    VL_IN8(__PVT__icx_exist,3,0);
    VL_IN8(__PVT__enable_balanced_routing,0,0);
    VL_OUT8(__PVT__credits_backto_full,0,0);
    VL_IN8(__PVT__i_timeout_or_recovery_mode,0,0);
    VL_OUT8(__PVT__o_rxtop_datproc_fifo_is_full_vc0,0,0);
    CData/*0:0*/ __PVT__flit_is_vc0;
    CData/*0:0*/ __PVT__flit_is_vc1;
    CData/*0:0*/ __PVT__rcv_buff_released_vc0;
    CData/*0:0*/ __PVT__rcv_buff_released_vc1;
    CData/*0:0*/ __PVT__send_credit;
    CData/*0:0*/ __PVT__credits_backto_full_nxt;
    CData/*0:0*/ __PVT__rcvd_link_crdt;
    CData/*0:0*/ __PVT__rcvd_proc_crdt;
    CData/*0:0*/ __PVT__rxtop_datproc_fifo_is_full_vc0;
    CData/*0:0*/ __PVT__rxtop_datproc_fifo_is_full_vc1;
    CData/*4:0*/ __PVT__crdt_balnce_tobesent;
    CData/*4:0*/ __PVT__crdt_balnce_tobesent_nxt;
    CData/*4:0*/ __PVT__crdt_balance_to_deactivate_link;
    CData/*4:0*/ __PVT__crdt_balance_to_deactivate_link_nxt;
    CData/*4:0*/ __PVT__rcv_buff_released_credit_value;
    CData/*0:0*/ __PVT__ic_RX_FLITV_is_vc0;
    CData/*0:0*/ __PVT__ic_RX_FLITV_is_vc1;
    CData/*4:0*/ __Vdly__crdt_balnce_tobesent;
    CData/*4:0*/ __Vdly__crdt_balance_to_deactivate_link;
    CData/*0:0*/ __Vdly__credits_backto_full;
    VL_INW(__PVT__ic_RX_FLIT,679,0,22);
    VL_OUTW(__PVT__flit_out_vc0,685,0,22);
    VL_OUTW(__PVT__flit_out_vc1,685,0,22);
    VlWide<22>/*679:0*/ __Vcellinp__sig_node_rx_datproc_vc0__ic_RX_FLIT;
    VlWide<22>/*679:0*/ __Vcellinp__sig_node_rx_datproc_vc1__ic_RX_FLIT;
    VlWide<22>/*679:0*/ __PVT__ic_RX_DATFLIT_s;
    VlWide<22>/*679:0*/ __PVT__ic_RX_FLIT_modified;
    VL_IN16(__PVT__i_ucie_bridge_locations[1],10,0);

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_node_rx_datproc__pi59(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_node_rx_datproc__pi59();
    VL_UNCOPYABLE(Vsig_topology_top_sig_node_rx_datproc__pi59);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
