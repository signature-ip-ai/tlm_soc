// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_COUNTONES_8_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_COUNTONES_8_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_countones_4;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_countones_8 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_countones_4* __PVT__sig_countones_4_0;
    Vsig_topology_top_sig_countones_4* __PVT__sig_countones_4_1;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__cc_clk,0,0);
    VL_IN8(__PVT__rstb_cc_clk,0,0);
    VL_IN8(__PVT__sharevec,7,0);
    VL_OUT8(__PVT__onescount_out,3,0);
    CData/*3:0*/ __PVT__onescount_out_nxt;
    CData/*2:0*/ __PVT__onescount1;
    CData/*2:0*/ __PVT__onescount2;
    CData/*3:0*/ __Vcellinp__sig_countones_4_0__sharevec;
    CData/*3:0*/ __Vcellinp__sig_countones_4_1__sharevec;
    CData/*3:0*/ __Vdly__onescount_out;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_countones_8(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_countones_8();
    VL_UNCOPYABLE(Vsig_topology_top_sig_countones_8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
