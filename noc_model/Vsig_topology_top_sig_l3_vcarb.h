// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_L3_VCARB_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_L3_VCARB_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_l3_vcarb final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__ic_clk,0,0);
    VL_IN8(__PVT__rstb_ic_clk,0,0);
    VL_IN8(__PVT__req_vec,2,0);
    VL_IN8(__PVT__end_granted_agent,0,0);
    VL_OUT8(__PVT__gnt_vec,2,0);
    CData/*0:0*/ __PVT__arbstate;
    CData/*0:0*/ __PVT__arbstate_nxt;
    CData/*2:0*/ __PVT__gnt_hist;
    CData/*2:0*/ __PVT__gnt_hist_nxt;
    CData/*0:0*/ __Vdly__arbstate;
    CData/*2:0*/ __Vdly__gnt_hist;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_l3_vcarb(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_l3_vcarb();
    VL_UNCOPYABLE(Vsig_topology_top_sig_l3_vcarb);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
