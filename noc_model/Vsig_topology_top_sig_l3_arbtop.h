// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_L3_ARBTOP_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_L3_ARBTOP_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_l3_vcarb;
class Vsig_topology_top_sig_tx_portarb;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_l3_arbtop final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_tx_portarb* __PVT__sig_tx_portarb_vc0;
    Vsig_topology_top_sig_tx_portarb* __PVT__sig_tx_portarb_vc1;
    Vsig_topology_top_sig_l3_vcarb* __PVT__sig_l3_vcarb_0;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__ic_clk,0,0);
    VL_IN8(__PVT__rstb_ic_clk,0,0);
    VL_IN8(__PVT__vcx_has_credits,2,0);
    CData/*2:0*/ __PVT__req_tovcarb;
    CData/*2:0*/ __PVT__gnt_vec_vcarb;
    CData/*0:0*/ __PVT__end_req_qual_vc0;
    CData/*0:0*/ __PVT__end_req_qual_vc1;
    CData/*0:0*/ __PVT__end_granted_agent;
    VL_IN16(__PVT__req_vec_vc0,9,0);
    VL_IN16(__PVT__end_req_vec_vc0,9,0);
    VL_IN16(__PVT__req_vec_vc1,9,0);
    VL_IN16(__PVT__end_req_vec_vc1,9,0);
    VL_OUT16(__PVT__gnt_vec_vc0,9,0);
    VL_OUT16(__PVT__gnt_vec_vc1,9,0);
    SData/*9:0*/ __PVT__gnt_vec_vc0_pre;
    SData/*9:0*/ __PVT__gnt_vec_vc1_pre;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_l3_arbtop(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_l3_arbtop();
    VL_UNCOPYABLE(Vsig_topology_top_sig_l3_arbtop);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
