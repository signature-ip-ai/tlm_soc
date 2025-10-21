// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CLUST_CG_CTRL__CZ5_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CLUST_CG_CTRL__CZ5_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_clust_cg_ctrl__Cz5 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__i_rx_clk,0,0);
    VL_IN8(__PVT__i_rst_n_rx_clk,0,0);
    VL_IN8(__PVT__i_tx_clk,0,0);
    VL_IN8(__PVT__i_rst_n_tx_clk,0,0);
    VL_IN8(__PVT__i_block_exists,0,0);
    VL_IN8(__PVT__i_block_is_inactive,0,0);
    VL_IN8(__PVT__i_activate_block,0,0);
    VL_IN8(__PVT__i_inactivity_count,7,0);
    VL_OUT8(__PVT__o_rx_cg_en_n,0,0);
    VL_OUT8(__PVT__o_tx_cg_en_n,0,0);
    CData/*7:0*/ __PVT__inactivity_timer;
    CData/*0:0*/ __PVT__clk_disable;
    CData/*0:0*/ __PVT__rx_cg_en_n;
    CData/*7:0*/ __Vdly__inactivity_timer;
    CData/*0:0*/ __Vdly__rx_cg_en_n;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_clust_cg_ctrl__Cz5(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_clust_cg_ctrl__Cz5();
    VL_UNCOPYABLE(Vsig_topology_top_sig_clust_cg_ctrl__Cz5);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
