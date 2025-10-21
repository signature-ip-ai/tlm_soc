// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CHI_XMT_DATA_FLIT__C2A8_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CHI_XMT_DATA_FLIT__C2A8_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_chi_xmt_data_flit__C2a8 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__cc_clk,0,0);
    VL_IN8(__PVT__rstb_cc_clk,0,0);
    VL_IN8(__PVT__compdata_tx_datflitv,0,0);
    VL_OUT8(__PVT__ic_TX_DATFLITPEND,0,0);
    VL_OUT8(__PVT__ic_TX_DATFLITV,0,0);
    CData/*0:0*/ __PVT__enter_ff__DOT__ic_TX_DATFLITV_nxt;
    CData/*0:0*/ __Vdly__ic_TX_DATFLITV;
    VL_INW(__PVT__compdata_tx_datflit,679,0,22);
    VL_OUTW(__PVT__ic_TX_DATFLIT,679,0,22);
    VlWide<22>/*679:0*/ __PVT__enter_ff__DOT__ic_TX_DATFLIT_nxt;
    VlWide<22>/*679:0*/ __Vdly__ic_TX_DATFLIT;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_chi_xmt_data_flit__C2a8(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_chi_xmt_data_flit__C2a8();
    VL_UNCOPYABLE(Vsig_topology_top_sig_chi_xmt_data_flit__C2a8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
