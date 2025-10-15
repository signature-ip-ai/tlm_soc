// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_DOUBLE_SYNCHRONIZER_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_DOUBLE_SYNCHRONIZER_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_double_synchronizer final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clkdest,0,0);
    VL_IN8(__PVT__resetb_clkdest,0,0);
    VL_IN8(__PVT__sig_src,0,0);
    VL_OUT8(__PVT__sig_dest,0,0);
    CData/*0:0*/ __PVT__sig_src_sync1;
    CData/*0:0*/ __Vdly__sig_src_sync1;
    CData/*0:0*/ __Vdly__sig_dest;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_double_synchronizer(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_double_synchronizer();
    VL_UNCOPYABLE(Vsig_topology_top_sig_double_synchronizer);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
