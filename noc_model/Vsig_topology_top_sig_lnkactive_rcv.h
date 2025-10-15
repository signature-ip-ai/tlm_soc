// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_LNKACTIVE_RCV_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_LNKACTIVE_RCV_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_double_synchronizer;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_lnkactive_rcv final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_double_synchronizer* __PVT__sig_double_synchronizer_0;
    Vsig_topology_top_sig_double_synchronizer* __PVT__sig_double_synchronizer_1;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rstb_clk,0,0);
    VL_IN8(__PVT__i_timeout_or_recovery_mode,0,0);
    VL_IN8(__PVT__credits_backto_full,0,0);
    VL_IN8(__PVT__TXLINKACTIVEREQ,0,0);
    VL_IN8(__PVT__RXLINKACTIVEREQ,0,0);
    VL_OUT8(__PVT__RXLINKACTIVEACK,0,0);
    VL_OUT8(__PVT__rcvr_can_send_crdt,0,0);
    CData/*2:0*/ __PVT__lnkstate;
    CData/*2:0*/ __PVT__lnkstate_nxt;
    CData/*0:0*/ __PVT__RXLINKACTIVEREQ_sync;
    CData/*0:0*/ __PVT__RXLINKACTIVEACK_nxt;
    CData/*0:0*/ __PVT__credits_backto_full_sync;
    CData/*2:0*/ __Vdly__lnkstate;
    CData/*0:0*/ __Vdly__RXLINKACTIVEACK;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_lnkactive_rcv(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_lnkactive_rcv();
    VL_UNCOPYABLE(Vsig_topology_top_sig_lnkactive_rcv);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
