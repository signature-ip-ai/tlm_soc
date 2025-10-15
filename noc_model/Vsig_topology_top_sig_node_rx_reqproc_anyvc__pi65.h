// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_NODE_RX_REQPROC_ANYVC__PI65_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_NODE_RX_REQPROC_ANYVC__PI65_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_fifo_synchclk_flop__pi72;
class Vsig_topology_top_sig_routing_policy;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_routing_policy* __PVT__inst_sig_routing_policy;
    Vsig_topology_top_sig_fifo_synchclk_flop__pi72* __PVT__flit_fifo_default__DOT__flit_store_fifo_0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__ic_clk,0,0);
        VL_IN8(__PVT__rstb_ic_clk,0,0);
        VL_IN8(__PVT__intfrx_clk,0,0);
        VL_IN8(__PVT__rstb_intfrx_clk,0,0);
        VL_IN8(__PVT__myvc_value,2,0);
        VL_IN8(__PVT__mycluster_id,7,0);
        VL_IN8(__PVT__ic_RX_FLITPEND,0,0);
        VL_IN8(__PVT__ic_RX_FLITV,0,0);
        VL_OUT8(__PVT__send_working_update,0,0);
        VL_IN8(__PVT__icx_exist,3,0);
        VL_IN8(__PVT__enable_balanced_routing,0,0);
        CData/*0:0*/ __PVT__empty_flit_store_fifo;
        CData/*0:0*/ __PVT__wren_flit_store_fifo;
        CData/*0:0*/ __PVT__assert_req;
        CData/*7:0*/ __PVT__tgt_clusterid_fifoout;
        CData/*2:0*/ __PVT__tgt_portid_fifoout;
        CData/*0:0*/ __PVT__drive_end_flit;
        CData/*0:0*/ __PVT__rden_storefifo;
        CData/*0:0*/ __PVT__exit_network;
        CData/*0:0*/ __PVT__route_east_xfirst;
        CData/*0:0*/ __PVT__route_west_xfirst;
        CData/*0:0*/ __PVT__route_north_xfirst;
        CData/*0:0*/ __PVT__route_south_xfirst;
        CData/*0:0*/ __PVT__route_east_yfirst;
        CData/*0:0*/ __PVT__route_west_yfirst;
        CData/*0:0*/ __PVT__route_north_yfirst;
        CData/*0:0*/ __PVT__route_south_yfirst;
        CData/*0:0*/ __PVT__xmtstate;
        CData/*0:0*/ __PVT__xmtstate_nxt;
        CData/*0:0*/ __PVT__rden_storefifo_bypass;
        CData/*0:0*/ __PVT__creditfifo_hasroom;
        CData/*0:0*/ __PVT__req_crdt_update;
        CData/*0:0*/ __PVT__empty_credit_fifo;
        CData/*0:0*/ __PVT__full_credit_fifo;
        CData/*0:0*/ __PVT__srcid_bit0_fifoout;
        CData/*3:0*/ __PVT__my_cluster_x;
        CData/*3:0*/ __PVT__tgt_cluster_x;
        CData/*3:0*/ __PVT__final_tgt_cluster_x;
        CData/*3:0*/ __PVT__my_cluster_y;
        CData/*3:0*/ __PVT__tgt_cluster_y;
        CData/*3:0*/ __PVT__final_tgt_cluster_y;
        CData/*0:0*/ __PVT__my_topology_x;
        CData/*0:0*/ __PVT__tgt_topology_x;
        CData/*0:0*/ __PVT__my_topology_y;
        CData/*0:0*/ __PVT__tgt_topology_y;
        CData/*0:0*/ __PVT__mismatched_topology_ids;
        CData/*2:0*/ __PVT__ucie_bridge_cluster_only_x;
        CData/*2:0*/ __PVT__ucie_bridge_cluster_only_y;
        CData/*2:0*/ __PVT__ucie_bridge_port_drxn_only;
        CData/*0:0*/ __PVT__select_xfirst;
        CData/*0:0*/ __Vdly__xmtstate;
        SData/*9:0*/ __PVT__flit_out_meta;
        SData/*10:0*/ __PVT__w_tgt_ucie_bridge_info;
        VL_INW(__PVT__ic_RX_FLIT,150,0,5);
        VL_OUTW(__PVT__flit_out,160,0,6);
        VlWide<5>/*150:0*/ __PVT__flit_out_pyld;
        VlWide<5>/*150:0*/ __Vcellout__flit_fifo_default__DOT__flit_store_fifo_0__fifo_rddata;
        VlWide<5>/*150:0*/ __Vcellinp__flit_fifo_default__DOT__flit_store_fifo_0__fifo_wrdata;
        VlWide<5>/*150:0*/ __PVT__ic_RX_REQFLIT_s;
        VlWide<5>/*150:0*/ __PVT__write_data_fifo;
        VlWide<5>/*150:0*/ __PVT__read_data_fifo;
        VlWide<5>/*150:0*/ __PVT__read_data_fifo_s;
        VlWide<5>/*150:0*/ __PVT__read_data_fifo_stored_s;
        VlWide<5>/*150:0*/ __PVT__read_data_fifo_stored;
    };
    struct {
        VlWide<5>/*150:0*/ __PVT__read_data_fifo_stored_nxt;
        VlWide<5>/*150:0*/ __Vdly__read_data_fifo_stored;
        VL_IN16(__PVT__i_ucie_bridge_locations[1],10,0);
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65();
    VL_UNCOPYABLE(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
