// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_DOUBLE_SYNCHRONIZER_PARAM_DW__PI24_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_DOUBLE_SYNCHRONIZER_PARAM_DW__PI24_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_double_synchronizer;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_double_synchronizer_param_dw__pi24 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_double_synchronizer* __PVT__gen_double_synchronizer_param_dw__BRA__0__KET____DOT__i_sig_double_synchronizer;
    Vsig_topology_top_sig_double_synchronizer* __PVT__gen_double_synchronizer_param_dw__BRA__1__KET____DOT__i_sig_double_synchronizer;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clkdest,0,0);
    VL_IN8(__PVT__resetb_clkdest,0,0);
    VL_IN8(__PVT__sig_src,1,0);
    VL_OUT8(__PVT__sig_dest,1,0);
    CData/*0:0*/ __Vcellout__gen_double_synchronizer_param_dw__BRA__0__KET____DOT__i_sig_double_synchronizer__sig_dest;
    CData/*0:0*/ __Vcellinp__gen_double_synchronizer_param_dw__BRA__0__KET____DOT__i_sig_double_synchronizer__sig_src;
    CData/*0:0*/ __Vcellout__gen_double_synchronizer_param_dw__BRA__1__KET____DOT__i_sig_double_synchronizer__sig_dest;
    CData/*0:0*/ __Vcellinp__gen_double_synchronizer_param_dw__BRA__1__KET____DOT__i_sig_double_synchronizer__sig_src;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_double_synchronizer_param_dw__pi24(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_double_synchronizer_param_dw__pi24();
    VL_UNCOPYABLE(Vsig_topology_top_sig_double_synchronizer_param_dw__pi24);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
