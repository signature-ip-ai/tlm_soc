// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CMN_PIPELINE_FF__D6F_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CMN_PIPELINE_FF__D6F_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_cmn_pipeline_ff__D6f final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset_n,0,0);
    VL_INW(__PVT__data_in,110,0,4);
    VL_OUTW(__PVT__data_out,110,0,4);

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_cmn_pipeline_ff__D6f(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_cmn_pipeline_ff__D6f();
    VL_UNCOPYABLE(Vsig_topology_top_sig_cmn_pipeline_ff__D6f);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
