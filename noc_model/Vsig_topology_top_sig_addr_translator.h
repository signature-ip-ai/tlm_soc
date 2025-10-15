// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_ADDR_TRANSLATOR_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_ADDR_TRANSLATOR_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_addr_translator final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rstn,0,0);
    VL_IN8(__PVT__i_tx_req_v,0,0);
    CData/*3:0*/ __PVT__addr_translator_enabled__DOT__cm_activated_pm;
    CData/*3:0*/ __PVT__addr_translator_enabled__DOT__cm_addr_match_pm;
    CData/*3:0*/ __PVT__addr_translator_enabled__DOT__noncm_activated_pm;
    CData/*3:0*/ __PVT__addr_translator_enabled__DOT__noncm_addr_match_pm;
    CData/*1:0*/ __PVT__addr_translator_enabled__DOT__cm_idx;
    CData/*1:0*/ __PVT__addr_translator_enabled__DOT__noncm_idx;
    CData/*0:0*/ __PVT__addr_translator_enabled__DOT__overflow;
    CData/*0:0*/ __PVT__addr_translator_enabled__DOT__unused_signal;
    CData/*0:0*/ __PVT__addr_translator_enabled__DOT__unused_signal_nxt;
    CData/*0:0*/ __Vdly__addr_translator_enabled__DOT__unused_signal;
    VL_INW(__PVT__cm_homeaddr_base_all_pm,111,0,4);
    VL_INW(__PVT__cm_homeaddr_limit_all_pm,115,0,4);
    VL_INW(__PVT__noncm_homeaddr_base_all_pm,111,0,4);
    VL_INW(__PVT__noncm_homeaddr_limit_all_pm,115,0,4);
    VlWide<4>/*111:0*/ __PVT__addr_translator_enabled__DOT__cm_homeaddr_base_pm;
    VlWide<4>/*115:0*/ __PVT__addr_translator_enabled__DOT__cm_homeaddr_limit_pm;
    VlWide<4>/*111:0*/ __PVT__addr_translator_enabled__DOT__cm_homeaddr_base_sliced_pm;
    VlWide<4>/*115:0*/ __PVT__addr_translator_enabled__DOT__cm_homeaddr_limit_sliced_pm;
    VlWide<4>/*111:0*/ __PVT__addr_translator_enabled__DOT__cm_flit_addr_sliced_pm;
    VlWide<4>/*111:0*/ __PVT__addr_translator_enabled__DOT__noncm_homeaddr_base_pm;
    VlWide<4>/*115:0*/ __PVT__addr_translator_enabled__DOT__noncm_homeaddr_limit_pm;
    VlWide<4>/*111:0*/ __PVT__addr_translator_enabled__DOT__noncm_homeaddr_base_sliced_pm;
    VlWide<4>/*115:0*/ __PVT__addr_translator_enabled__DOT__noncm_homeaddr_limit_sliced_pm;
    VlWide<4>/*111:0*/ __PVT__addr_translator_enabled__DOT__noncm_flit_addr_sliced_pm;
    IData/*31:0*/ __PVT__addr_translator_enabled__DOT__cm_match_idx_comb_proc__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__addr_translator_enabled__DOT__noncm_match_idx_comb_proc__DOT__unnamedblk2__DOT__i;
    VL_IN64(__PVT__i_tx_req_addr,51,0);
    VL_OUT64(__PVT__o_tx_req_addr_to_sn,51,0);

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_addr_translator(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_addr_translator();
    VL_UNCOPYABLE(Vsig_topology_top_sig_addr_translator);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
