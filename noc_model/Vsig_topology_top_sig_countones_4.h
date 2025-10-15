// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_COUNTONES_4_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_COUNTONES_4_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_countones_4 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__sharevec,3,0);
    VL_OUT8(__PVT__onescount,2,0);

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_countones_4(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_countones_4();
    VL_UNCOPYABLE(Vsig_topology_top_sig_countones_4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
