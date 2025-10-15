// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_L3_RX_DATPROC__PI41_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_L3_RX_DATPROC__PI41_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_ic_crdt_update__N8;
class Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi54;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_l3_rx_datproc__pi41 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi54* __PVT__sig_l3_rx_datproc_vc0;
    Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi54* __PVT__sig_l3_rx_datproc_vc1;
    Vsig_topology_top_sig_ic_crdt_update__N8* __PVT__sig_ic_crdt_update_0;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__ic_clk,0,0);
    VL_IN8(__PVT__rstb_ic_clk,0,0);
    VL_IN8(__PVT__ic_gclk,0,0);
    VL_IN8(__PVT__mycluster_id,7,0);
    VL_IN8(__PVT__ic_RX_FLITPEND,0,0);
    VL_IN8(__PVT__ic_RX_FLITV,0,0);
    VL_OUT8(__PVT__ic_RX_LCRDV,0,0);
    VL_IN8(__PVT__gnt_vc0,0,0);
    VL_IN8(__PVT__gnt_vc1,0,0);
    VL_OUT8(__PVT__end_flit_out_vc0,0,0);
    VL_OUT8(__PVT__end_flit_out_vc1,0,0);
    VL_OUT8(__PVT__valid_flit_out_vc0,0,0);
    VL_OUT8(__PVT__valid_flit_out_vc1,0,0);
    VL_IN8(__PVT__enable_init_update,0,0);
    VL_IN8(__PVT__icx_exist,3,0);
    VL_IN8(__PVT__enable_balanced_routing,0,0);
    CData/*0:0*/ __PVT__flit_is_vc0;
    CData/*0:0*/ __PVT__flit_is_vc1;
    CData/*3:0*/ __PVT__flit_qos_field;
    CData/*0:0*/ __PVT__send_working_update_vc0;
    CData/*0:0*/ __PVT__send_working_update_vc1;
    CData/*0:0*/ __PVT__send_working_update;
    CData/*0:0*/ __PVT__ic_RX_FLITV_is_vc0;
    CData/*0:0*/ __PVT__ic_RX_FLITV_is_vc1;
    CData/*4:0*/ __PVT__credits_cnt;
    CData/*4:0*/ __PVT__credits_cnt_nxt;
    CData/*4:0*/ __Vdly__credits_cnt;
    VL_OUT16(__PVT__req_vc0,9,0);
    VL_OUT16(__PVT__req_vc1,9,0);
    VL_INW(__PVT__ic_RX_FLIT,679,0,22);
    VL_OUTW(__PVT__flit_out_vc0,685,0,22);
    VL_OUTW(__PVT__flit_out_vc1,685,0,22);
    VlWide<22>/*679:0*/ __PVT__ic_RX_DATFLIT_s;
    VL_IN16(__PVT__i_ucie_bridge_locations[1],10,0);

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_l3_rx_datproc__pi41(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_l3_rx_datproc__pi41();
    VL_UNCOPYABLE(Vsig_topology_top_sig_l3_rx_datproc__pi41);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
