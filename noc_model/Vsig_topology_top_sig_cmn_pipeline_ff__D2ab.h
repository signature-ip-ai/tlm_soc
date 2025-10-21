// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CMN_PIPELINE_FF__D2AB_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CMN_PIPELINE_FF__D2AB_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_cmn_pipeline_ff__D2ab final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset_n,0,0);
    VL_INW(__PVT__data_in,682,0,22);
    VL_OUTW(__PVT__data_out,682,0,22);

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_cmn_pipeline_ff__D2ab(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_cmn_pipeline_ff__D2ab();
    VL_UNCOPYABLE(Vsig_topology_top_sig_cmn_pipeline_ff__D2ab);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
