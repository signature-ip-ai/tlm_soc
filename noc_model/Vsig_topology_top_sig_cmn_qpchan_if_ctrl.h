// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CMN_QPCHAN_IF_CTRL_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CMN_QPCHAN_IF_CTRL_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_cmn_qpchan_if_ctrl final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__is_idle,0,0);
    VL_IN8(__PVT__qreqn,0,0);
    VL_OUT8(__PVT__qacceptn,0,0);
    VL_OUT8(__PVT__qdeny,0,0);
    VL_OUT8(__PVT__qactive,0,0);
    VL_OUT8(__PVT__qin_quiescence,0,0);
    VL_IN8(__PVT__pstate,0,0);
    VL_IN8(__PVT__preq,0,0);
    VL_OUT8(__PVT__paccept,0,0);
    VL_OUT8(__PVT__pdeny,0,0);
    VL_OUT8(__PVT__pactive,0,0);

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_cmn_qpchan_if_ctrl(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_cmn_qpchan_if_ctrl();
    VL_UNCOPYABLE(Vsig_topology_top_sig_cmn_qpchan_if_ctrl);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
