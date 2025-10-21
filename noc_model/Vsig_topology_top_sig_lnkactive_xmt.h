// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_LNKACTIVE_XMT_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_LNKACTIVE_XMT_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_double_synchronizer;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_lnkactive_xmt final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_double_synchronizer* __PVT__double_synchronizer_0;
    Vsig_topology_top_sig_double_synchronizer* __PVT__double_synchronizer_1;
    Vsig_topology_top_sig_double_synchronizer* __PVT__double_synchronizer_2;
    Vsig_topology_top_sig_double_synchronizer* __PVT__double_synchronizer_3;
    Vsig_topology_top_sig_double_synchronizer* __PVT__double_synchronizer_4;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rstb_clk,0,0);
    VL_IN8(__PVT__enable_xmt,0,0);
    VL_IN8(__PVT__all_cache_init_complete,0,0);
    VL_IN8(__PVT__i_timeout_or_recovery_mode,0,0);
    VL_IN8(__PVT__RXLINKACTIVEREQ,0,0);
    VL_IN8(__PVT__RXLINKACTIVEACK,0,0);
    VL_OUT8(__PVT__TXLINKACTIVEREQ,0,0);
    VL_IN8(__PVT__TXLINKACTIVEACK,0,0);
    VL_IN8(__PVT__enter_deactivate,0,0);
    VL_OUT8(__PVT__xmtr_cansend_flits,0,0);
    VL_OUT8(__PVT__return_linkcrdt,0,0);
    CData/*1:0*/ __PVT__lnkstate;
    CData/*1:0*/ __PVT__lnkstate_nxt;
    CData/*0:0*/ __PVT__TXLINKACTIVEREQ_nxt;
    CData/*0:0*/ __PVT__enable_xmt_sync;
    CData/*0:0*/ __PVT__TXLINKACTIVEACK_sync;
    CData/*0:0*/ __PVT__xmtr_cansend_flits_nxt;
    CData/*0:0*/ __PVT__enter_deactivate_sync;
    CData/*0:0*/ __PVT__return_linkcrdt_nxt;
    CData/*0:0*/ __PVT__RXLINKACTIVEREQ_sync;
    CData/*0:0*/ __PVT__all_cache_init_complete_sync;
    CData/*1:0*/ __Vdly__lnkstate;
    CData/*0:0*/ __Vdly__TXLINKACTIVEREQ;
    CData/*0:0*/ __Vdly__xmtr_cansend_flits;
    CData/*0:0*/ __Vdly__return_linkcrdt;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_lnkactive_xmt(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_lnkactive_xmt();
    VL_UNCOPYABLE(Vsig_topology_top_sig_lnkactive_xmt);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
