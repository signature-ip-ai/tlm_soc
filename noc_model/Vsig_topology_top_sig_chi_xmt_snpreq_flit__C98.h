// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CHI_XMT_SNPREQ_FLIT__C98_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CHI_XMT_SNPREQ_FLIT__C98_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__cc_clk,0,0);
    VL_IN8(__PVT__rstb_cc_clk,0,0);
    VL_IN8(__PVT__snp_tx_snpflitv,0,0);
    VL_IN8(__PVT__snpreq_crdt_avail,0,0);
    VL_OUT8(__PVT__ic_TX_SNPFLITPEND,0,0);
    VL_OUT8(__PVT__ic_TX_SNPFLITV,0,0);
    CData/*0:0*/ __PVT__enter_ff__DOT__ic_TX_SNPFLITV_nxt;
    CData/*0:0*/ __Vdly__ic_TX_SNPFLITV;
    VL_INW(__PVT__snp_tx_snpflit,151,0,5);
    VL_OUTW(__PVT__ic_TX_SNPFLIT,151,0,5);
    VlWide<5>/*151:0*/ __PVT__enter_ff__DOT__ic_TX_SNPFLIT_nxt;
    VlWide<5>/*151:0*/ __Vdly__ic_TX_SNPFLIT;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98();
    VL_UNCOPYABLE(Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
