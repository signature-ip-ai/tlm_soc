// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_TX_PORTARB_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_TX_PORTARB_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_tx_portarb final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__ic_clk,0,0);
    VL_IN8(__PVT__rstb_ic_clk,0,0);
    VL_OUT8(__PVT__end_req_qual,0,0);
    CData/*3:0*/ __PVT__grant_posn;
    CData/*3:0*/ __PVT__grant_posn_nxt;
    CData/*0:0*/ __PVT__arbstate;
    CData/*0:0*/ __PVT__arbstate_nxt;
    CData/*0:0*/ __PVT__any_req_asserted;
    CData/*0:0*/ __Vdly__arbstate;
    CData/*3:0*/ __Vdly__grant_posn;
    VL_IN16(__PVT__req_vec,9,0);
    VL_IN16(__PVT__end_req_vec,9,0);
    VL_OUT16(__PVT__gnt_vec,9,0);
    SData/*9:0*/ __PVT__relative_req_vec;
    SData/*9:0*/ __PVT__gnt_vec_nxt;
    SData/*9:0*/ __PVT__rel_req_highest_priority;
    SData/*9:0*/ __Vdly__gnt_vec;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_tx_portarb(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_tx_portarb();
    VL_UNCOPYABLE(Vsig_topology_top_sig_tx_portarb);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
