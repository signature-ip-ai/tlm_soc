// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_NODE_RX_RSPPROC__P49_UZ1_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_NODE_RX_RSPPROC__P49_UZ1_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi65;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi65* __PVT__sig_node_rx_rspproc_vc0;
    Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi65* __PVT__sig_node_rx_rspproc_vc1;

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
    VL_OUT8(__PVT__o_rxtop_rspproc_fifo_is_full_vc0,0,0);
    VL_OUT8(__PVT__rden_snprsp_flit_fifo_tx_snp,0,0);
    VL_IN8(__PVT__empty_snprsp_flit_fifo_tx_snp,0,0);
    CData/*0:0*/ __PVT__flit_is_vc0;
    CData/*0:0*/ __PVT__flit_is_vc1;
    CData/*0:0*/ __PVT__rcv_buff_released_vc0;
    CData/*0:0*/ __PVT__rcv_buff_released_vc1;
    CData/*0:0*/ __PVT__send_working_update_gate;
    CData/*0:0*/ __PVT__enable_init_update_gate;
    CData/*0:0*/ __PVT__credits_backto_full_nxt;
    CData/*0:0*/ __PVT__send_credit;
    CData/*0:0*/ __PVT__rcvd_link_crdt;
    CData/*0:0*/ __PVT__ic_RX_FLITV_is_vc0;
    CData/*0:0*/ __PVT__ic_RX_FLITV_is_vc1;
    CData/*0:0*/ __PVT__rxtop_rspproc_fifo_is_full_vc0;
    CData/*0:0*/ __PVT__rxtop_rspproc_fifo_is_full_vc1;
    CData/*0:0*/ __PVT__rden_snprsp_flit_fifo_tx_snp_vc0;
    CData/*0:0*/ __PVT__rden_snprsp_flit_fifo_tx_snp_vc1;
    CData/*0:0*/ __PVT__snpresp_flit_is_vc0;
    CData/*0:0*/ __PVT__snpresp_flit_is_vc1;
    CData/*0:0*/ __PVT__snpresp_available_sysco_disabled_vc0;
    CData/*0:0*/ __PVT__snpresp_available_sysco_disabled_vc1;
    CData/*4:0*/ __PVT__crdt_balnce_tobesent;
    CData/*4:0*/ __PVT__crdt_balnce_tobesent_nxt;
    CData/*4:0*/ __PVT__crdt_balance_to_deactivate_link;
    CData/*4:0*/ __PVT__crdt_balance_to_deactivate_link_nxt;
    CData/*4:0*/ __Vdly__crdt_balnce_tobesent;
    CData/*4:0*/ __Vdly__crdt_balance_to_deactivate_link;
    CData/*0:0*/ __Vdly__credits_backto_full;
    VL_INW(__PVT__ic_RX_FLIT,72,0,3);
    VL_OUTW(__PVT__flit_out_vc0,78,0,3);
    VL_OUTW(__PVT__flit_out_vc1,78,0,3);
    VL_INW(__PVT__rddata_snprsp_flit_fifo_tx_snp,72,0,3);
    VlWide<3>/*72:0*/ __Vcellinp__sig_node_rx_rspproc_vc0__ic_RX_FLIT;
    VlWide<3>/*72:0*/ __Vcellinp__sig_node_rx_rspproc_vc1__ic_RX_FLIT;
    VlWide<3>/*72:0*/ __PVT__ic_RX_RSPFLIT_s;
    VlWide<3>/*72:0*/ __PVT__ic_RX_FLIT_modified;
    VlWide<3>/*72:0*/ __PVT__rddata_snprsp_flit_fifo_tx_snp_s;
    VL_IN16(__PVT__i_ucie_bridge_locations[1],10,0);

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1();
    VL_UNCOPYABLE(Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
