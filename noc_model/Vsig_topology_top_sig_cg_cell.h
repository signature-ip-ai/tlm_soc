// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CG_CELL_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CG_CELL_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_cg_cell final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_cg_enable_n,0,0);
    VL_OUT8(__PVT__o_gated_clk,0,0);
    CData/*0:0*/ __PVT__final_cg_enable_n;
    CData/*0:0*/ __Vdly__final_cg_enable_n;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_cg_cell(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_cg_cell();
    VL_UNCOPYABLE(Vsig_topology_top_sig_cg_cell);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
