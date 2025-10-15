// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_IC_CRDT_RECV_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_IC_CRDT_RECV_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_ic_crdt_recv final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__cc_clk,0,0);
    VL_IN8(__PVT__rstb_cc_clk,0,0);
    VL_IN8(__PVT__rcvd_crdt,0,0);
    VL_IN8(__PVT__consumed_crdt,0,0);
    VL_IN8(__PVT__i_in_timeout_or_recovery,0,0);
    VL_OUT8(__PVT__available_credits,3,0);
    CData/*3:0*/ __PVT__available_credits_nxt;
    CData/*3:0*/ __Vdly__available_credits;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_ic_crdt_recv(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_ic_crdt_recv();
    VL_UNCOPYABLE(Vsig_topology_top_sig_ic_crdt_recv);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
