// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_COUNTONES_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_COUNTONES_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_countones_8;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_countones final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_countones_8* __PVT__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u;
    Vsig_topology_top_sig_countones_8* __PVT__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u;
    Vsig_topology_top_sig_countones_8* __PVT__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__cc_clk,0,0);
    VL_IN8(__PVT__rstb_cc_clk,0,0);
    VL_OUT8(__PVT__ones_count,4,0);
    CData/*4:0*/ __PVT__ones_count_12;
    CData/*3:0*/ __Vcellout__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__onescount_out;
    CData/*7:0*/ __Vcellinp__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__sharevec;
    CData/*3:0*/ __Vcellout__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__onescount_out;
    CData/*7:0*/ __Vcellinp__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__sharevec;
    CData/*3:0*/ __Vcellout__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__onescount_out;
    CData/*7:0*/ __Vcellinp__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__sharevec;
    VL_IN(__PVT__share_vec,23,0);
    VlUnpacked<CData/*3:0*/, 3> __PVT__onescount;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_countones(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_countones();
    VL_UNCOPYABLE(Vsig_topology_top_sig_countones);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
