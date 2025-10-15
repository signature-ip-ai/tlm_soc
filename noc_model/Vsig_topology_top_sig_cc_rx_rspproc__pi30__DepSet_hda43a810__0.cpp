// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cc_rx_rspproc__pi30.h"

VL_INLINE_OPT void Vsig_topology_top_sig_cc_rx_rspproc__pi30___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__0(Vsig_topology_top_sig_cc_rx_rspproc__pi30* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cc_rx_rspproc__pi30___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__credits_cnt = vlSelfRef.__PVT__credits_cnt;
    vlSelfRef.__Vdly__credits_cnt = ((IData)(vlSelfRef.__PVT__rstb_ic_clk)
                                      ? (IData)(vlSelfRef.__PVT__credits_cnt_nxt)
                                      : 0U);
    vlSelfRef.__PVT__credits_cnt = vlSelfRef.__Vdly__credits_cnt;
}
