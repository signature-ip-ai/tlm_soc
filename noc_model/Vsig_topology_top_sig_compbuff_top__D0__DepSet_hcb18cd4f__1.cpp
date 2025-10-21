// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_compbuff_top__D0.h"

VL_INLINE_OPT void Vsig_topology_top_sig_compbuff_top__D0___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__2(Vsig_topology_top_sig_compbuff_top__D0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_compbuff_top__D0___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 1U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 1U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 1U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 1U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 2U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 2U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 2U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 2U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 3U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 3U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 3U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 3U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 4U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 4U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 4U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 4U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 5U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 5U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 5U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 5U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 6U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 6U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 6U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 6U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 7U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 7U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 7U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 7U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 8U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 8U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 8U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 8U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 9U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 9U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 9U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 9U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xaU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xaU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xaU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xaU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xbU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xbU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xbU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xbU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xcU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xcU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xcU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xcU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xdU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xdU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xdU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xdU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xeU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xeU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xeU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xeU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xfU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xfU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xfU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0xfU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x10U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x10U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x10U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x10U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x11U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x11U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x11U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x11U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x12U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x12U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x12U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x12U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x13U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x13U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x13U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x13U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x14U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x14U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x14U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x14U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x15U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x15U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x15U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x15U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x16U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x16U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x16U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x16U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x17U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x17U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x17U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x17U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x18U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x18U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x18U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x18U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x19U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x19U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x19U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x19U) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1aU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1aU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1aU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1aU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1bU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1bU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1bU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1bU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1cU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1cU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1cU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1cU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1dU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1dU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1dU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1dU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1eU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1eU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1eU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1eU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__wren_compfifo_0, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1fU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 0U))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__wren_compfifo_1, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1fU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 1U))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__wren_compfifo_2, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1fU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 2U))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__wren_compfifo_3, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_ic, 0x1fU) 
                           & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wrdataid_compfifo_ic), 3U))));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 1U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 2U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 3U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 4U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 5U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 6U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 7U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 8U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 9U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0xaU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0xbU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0xcU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0xdU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0xeU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0xfU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0x10U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0x11U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0x12U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0x13U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0x14U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0x15U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0x16U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0x17U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0x18U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0x19U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0x1aU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0x1bU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0x1cU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0x1dU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0x1eU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_0, 0x1fU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 1U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 2U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 3U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 4U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 5U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 6U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 7U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 8U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 9U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0xaU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0xbU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0xcU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0xdU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0xeU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0xfU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0x10U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0x11U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0x12U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0x13U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0x14U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0x15U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0x16U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0x17U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0x18U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0x19U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0x1aU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0x1bU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0x1cU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0x1dU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0x1eU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_1, 0x1fU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 1U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 2U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 3U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 4U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 5U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 6U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 7U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 8U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 9U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0xaU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0xbU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0xcU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0xdU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0xeU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0xfU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0x10U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0x11U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0x12U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0x13U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0x14U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0x15U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0x16U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0x17U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0x18U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0x19U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0x1aU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0x1bU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0x1cU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0x1dU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0x1eU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_2, 0x1fU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 1U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 2U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 3U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 4U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 5U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 6U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 7U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 8U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 9U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0xaU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0xbU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0xcU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0xdU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0xeU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0xfU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0x10U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0x11U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0x12U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0x13U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0x14U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0x15U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0x16U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0x17U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0x18U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0x19U));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0x1aU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0x1bU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0x1cU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0x1dU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0x1eU));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_compfifo_3, 0x1fU));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_0 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__wren_0;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_1 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__wren_1;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_2 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__wren_2;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wren_3 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__wren_3;
}

VL_INLINE_OPT void Vsig_topology_top_sig_compbuff_top__D0___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__4(Vsig_topology_top_sig_compbuff_top__D0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_compbuff_top__D0___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__allocated_compbuf = ((IData)(vlSelfRef.__PVT__allocated_compbuf_snpreq) 
                                          | (IData)(vlSelfRef.__PVT__allocated_compbuf_compdata));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0U == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (1U == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (2U == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (3U == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (4U == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (5U == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (6U == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (7U == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (8U == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (9U == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0xaU == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0xbU == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0xcU == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0xdU == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0xeU == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0xfU == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0x10U == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0x11U == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0x12U == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0x13U == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0x14U == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0x15U == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0x16U == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0x17U == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0x18U == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0x19U == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0x1aU == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0x1bU == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0x1cU == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0x1dU == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0x1eU == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf 
        = ((IData)(vlSelfRef.__PVT__allocated_compbuf) 
           & (0x1fU == (IData)(vlSelfRef.__PVT__buffernum_available)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__allocated_compbuf 
        = vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__allocated_compbuf;
}

VL_INLINE_OPT void Vsig_topology_top_sig_compbuff_top__D0___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__5(Vsig_topology_top_sig_compbuff_top__D0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_compbuff_top__D0___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_22;
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_25;
    VlWide<4>/*127:0*/ __Vtemp_26;
    VlWide<4>/*127:0*/ __Vtemp_27;
    VlWide<4>/*127:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_30;
    VlWide<4>/*127:0*/ __Vtemp_31;
    VlWide<4>/*127:0*/ __Vtemp_32;
    VlWide<4>/*127:0*/ __Vtemp_33;
    VlWide<4>/*127:0*/ __Vtemp_34;
    VlWide<4>/*127:0*/ __Vtemp_35;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_37;
    VlWide<4>/*127:0*/ __Vtemp_38;
    VlWide<4>/*127:0*/ __Vtemp_39;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_41;
    VlWide<4>/*127:0*/ __Vtemp_42;
    VlWide<4>/*127:0*/ __Vtemp_43;
    VlWide<4>/*127:0*/ __Vtemp_44;
    VlWide<4>/*127:0*/ __Vtemp_45;
    VlWide<4>/*127:0*/ __Vtemp_46;
    VlWide<4>/*127:0*/ __Vtemp_47;
    VlWide<4>/*127:0*/ __Vtemp_48;
    VlWide<4>/*127:0*/ __Vtemp_49;
    VlWide<4>/*127:0*/ __Vtemp_50;
    VlWide<4>/*127:0*/ __Vtemp_51;
    VlWide<4>/*127:0*/ __Vtemp_52;
    VlWide<4>/*127:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_55;
    VlWide<4>/*127:0*/ __Vtemp_56;
    VlWide<4>/*127:0*/ __Vtemp_57;
    VlWide<4>/*127:0*/ __Vtemp_58;
    VlWide<4>/*127:0*/ __Vtemp_59;
    VlWide<4>/*127:0*/ __Vtemp_60;
    VlWide<4>/*127:0*/ __Vtemp_61;
    VlWide<4>/*127:0*/ __Vtemp_62;
    VlWide<4>/*127:0*/ __Vtemp_63;
    VlWide<4>/*127:0*/ __Vtemp_64;
    VlWide<4>/*127:0*/ __Vtemp_65;
    VlWide<4>/*127:0*/ __Vtemp_66;
    VlWide<4>/*127:0*/ __Vtemp_67;
    VlWide<4>/*127:0*/ __Vtemp_68;
    VlWide<4>/*127:0*/ __Vtemp_69;
    VlWide<4>/*127:0*/ __Vtemp_70;
    VlWide<4>/*127:0*/ __Vtemp_71;
    VlWide<4>/*127:0*/ __Vtemp_72;
    VlWide<4>/*127:0*/ __Vtemp_73;
    VlWide<4>/*127:0*/ __Vtemp_74;
    VlWide<4>/*127:0*/ __Vtemp_75;
    VlWide<4>/*127:0*/ __Vtemp_76;
    VlWide<4>/*127:0*/ __Vtemp_77;
    VlWide<4>/*127:0*/ __Vtemp_78;
    VlWide<4>/*127:0*/ __Vtemp_79;
    VlWide<4>/*127:0*/ __Vtemp_80;
    VlWide<4>/*127:0*/ __Vtemp_81;
    VlWide<4>/*127:0*/ __Vtemp_82;
    VlWide<4>/*127:0*/ __Vtemp_83;
    VlWide<4>/*127:0*/ __Vtemp_84;
    VlWide<4>/*127:0*/ __Vtemp_85;
    VlWide<4>/*127:0*/ __Vtemp_86;
    VlWide<4>/*127:0*/ __Vtemp_87;
    VlWide<4>/*127:0*/ __Vtemp_88;
    VlWide<4>/*127:0*/ __Vtemp_89;
    VlWide<4>/*127:0*/ __Vtemp_90;
    VlWide<4>/*127:0*/ __Vtemp_91;
    VlWide<4>/*127:0*/ __Vtemp_92;
    VlWide<4>/*127:0*/ __Vtemp_93;
    VlWide<4>/*127:0*/ __Vtemp_94;
    VlWide<4>/*127:0*/ __Vtemp_95;
    VlWide<4>/*127:0*/ __Vtemp_96;
    VlWide<4>/*127:0*/ __Vtemp_97;
    VlWide<4>/*127:0*/ __Vtemp_98;
    VlWide<4>/*127:0*/ __Vtemp_99;
    VlWide<4>/*127:0*/ __Vtemp_100;
    VlWide<4>/*127:0*/ __Vtemp_101;
    VlWide<4>/*127:0*/ __Vtemp_102;
    VlWide<4>/*127:0*/ __Vtemp_103;
    VlWide<4>/*127:0*/ __Vtemp_104;
    VlWide<4>/*127:0*/ __Vtemp_105;
    VlWide<4>/*127:0*/ __Vtemp_106;
    VlWide<4>/*127:0*/ __Vtemp_107;
    VlWide<4>/*127:0*/ __Vtemp_108;
    VlWide<4>/*127:0*/ __Vtemp_109;
    VlWide<4>/*127:0*/ __Vtemp_110;
    VlWide<4>/*127:0*/ __Vtemp_111;
    VlWide<4>/*127:0*/ __Vtemp_112;
    VlWide<4>/*127:0*/ __Vtemp_113;
    VlWide<4>/*127:0*/ __Vtemp_114;
    VlWide<4>/*127:0*/ __Vtemp_115;
    VlWide<4>/*127:0*/ __Vtemp_116;
    VlWide<4>/*127:0*/ __Vtemp_117;
    VlWide<4>/*127:0*/ __Vtemp_118;
    VlWide<4>/*127:0*/ __Vtemp_119;
    VlWide<4>/*127:0*/ __Vtemp_120;
    VlWide<4>/*127:0*/ __Vtemp_121;
    VlWide<4>/*127:0*/ __Vtemp_122;
    VlWide<4>/*127:0*/ __Vtemp_123;
    VlWide<4>/*127:0*/ __Vtemp_124;
    VlWide<4>/*127:0*/ __Vtemp_125;
    VlWide<4>/*127:0*/ __Vtemp_126;
    VlWide<4>/*127:0*/ __Vtemp_127;
    VlWide<4>/*127:0*/ __Vtemp_128;
    // Body
    VL_SEL_WWII(128, 512, __Vtemp_1, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0U], __Vtemp_1);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_2, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0U], __Vtemp_2);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_3, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0U], __Vtemp_3);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_4, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0U], __Vtemp_4);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_5, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [1U], __Vtemp_5);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [1U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_6, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [1U], __Vtemp_6);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [1U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_7, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [1U], __Vtemp_7);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [1U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_8, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [1U], __Vtemp_8);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [1U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_9, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [2U], __Vtemp_9);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [2U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_10, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [2U], __Vtemp_10);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [2U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_11, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [2U], __Vtemp_11);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [2U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_12, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [2U], __Vtemp_12);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [2U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_13, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [3U], __Vtemp_13);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [3U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_14, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [3U], __Vtemp_14);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [3U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_15, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [3U], __Vtemp_15);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [3U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_16, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [3U], __Vtemp_16);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [3U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_17, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [4U], __Vtemp_17);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [4U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_18, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [4U], __Vtemp_18);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [4U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_19, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [4U], __Vtemp_19);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [4U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_20, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [4U], __Vtemp_20);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [4U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_21, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [5U], __Vtemp_21);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [5U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_22, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [5U], __Vtemp_22);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [5U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_23, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [5U], __Vtemp_23);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [5U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_24, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [5U], __Vtemp_24);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [5U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_25, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [6U], __Vtemp_25);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [6U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_26, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [6U], __Vtemp_26);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [6U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_27, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [6U], __Vtemp_27);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [6U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_28, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [6U], __Vtemp_28);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [6U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_29, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [7U], __Vtemp_29);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [7U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_30, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [7U], __Vtemp_30);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [7U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_31, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [7U], __Vtemp_31);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [7U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_32, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [7U], __Vtemp_32);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [7U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_33, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [8U], __Vtemp_33);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [8U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_34, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [8U], __Vtemp_34);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [8U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_35, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [8U], __Vtemp_35);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [8U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_36, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [8U], __Vtemp_36);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [8U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_37, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [9U], __Vtemp_37);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [9U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_38, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [9U], __Vtemp_38);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [9U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_39, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [9U], __Vtemp_39);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [9U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_40, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [9U], __Vtemp_40);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [9U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_41, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0xaU], __Vtemp_41);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0xaU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_42, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0xaU], __Vtemp_42);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0xaU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_43, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0xaU], __Vtemp_43);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0xaU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_44, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0xaU], __Vtemp_44);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0xaU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_45, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0xbU], __Vtemp_45);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0xbU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_46, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0xbU], __Vtemp_46);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0xbU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_47, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0xbU], __Vtemp_47);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0xbU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_48, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0xbU], __Vtemp_48);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0xbU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_49, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0xcU], __Vtemp_49);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0xcU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_50, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0xcU], __Vtemp_50);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0xcU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_51, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0xcU], __Vtemp_51);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0xcU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_52, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0xcU], __Vtemp_52);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0xcU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_53, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0xdU], __Vtemp_53);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0xdU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_54, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0xdU], __Vtemp_54);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0xdU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_55, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0xdU], __Vtemp_55);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0xdU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_56, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0xdU], __Vtemp_56);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0xdU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_57, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0xeU], __Vtemp_57);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0xeU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_58, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0xeU], __Vtemp_58);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0xeU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_59, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0xeU], __Vtemp_59);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0xeU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_60, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0xeU], __Vtemp_60);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0xeU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_61, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0xfU], __Vtemp_61);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0xfU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_62, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0xfU], __Vtemp_62);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0xfU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_63, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0xfU], __Vtemp_63);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0xfU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_64, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0xfU], __Vtemp_64);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0xfU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_65, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x10U], __Vtemp_65);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x10U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_66, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x10U], __Vtemp_66);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x10U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_67, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x10U], __Vtemp_67);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x10U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_68, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x10U], __Vtemp_68);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x10U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_69, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x11U], __Vtemp_69);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x11U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_70, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x11U], __Vtemp_70);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x11U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_71, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x11U], __Vtemp_71);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x11U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_72, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x11U], __Vtemp_72);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x11U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_73, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x12U], __Vtemp_73);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x12U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_74, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x12U], __Vtemp_74);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x12U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_75, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x12U], __Vtemp_75);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x12U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_76, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x12U], __Vtemp_76);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x12U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_77, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x13U], __Vtemp_77);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x13U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_78, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x13U], __Vtemp_78);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x13U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_79, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x13U], __Vtemp_79);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x13U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_80, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x13U], __Vtemp_80);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x13U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_81, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x14U], __Vtemp_81);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x14U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_82, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x14U], __Vtemp_82);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x14U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_83, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x14U], __Vtemp_83);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x14U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_84, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x14U], __Vtemp_84);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x14U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_85, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x15U], __Vtemp_85);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x15U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_86, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x15U], __Vtemp_86);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x15U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_87, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x15U], __Vtemp_87);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x15U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_88, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x15U], __Vtemp_88);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x15U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_89, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x16U], __Vtemp_89);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x16U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_90, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x16U], __Vtemp_90);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x16U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_91, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x16U], __Vtemp_91);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x16U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_92, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x16U], __Vtemp_92);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x16U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_93, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x17U], __Vtemp_93);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x17U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_94, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x17U], __Vtemp_94);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x17U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_95, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x17U], __Vtemp_95);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x17U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_96, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x17U], __Vtemp_96);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x17U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_97, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x18U], __Vtemp_97);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x18U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_98, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x18U], __Vtemp_98);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x18U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_99, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x18U], __Vtemp_99);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x18U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_100, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x18U], __Vtemp_100);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x18U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_101, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x19U], __Vtemp_101);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x19U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_102, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x19U], __Vtemp_102);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x19U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_103, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x19U], __Vtemp_103);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x19U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_104, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x19U], __Vtemp_104);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x19U], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_105, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x1aU], __Vtemp_105);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x1aU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_106, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x1aU], __Vtemp_106);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x1aU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_107, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x1aU], __Vtemp_107);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x1aU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_108, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x1aU], __Vtemp_108);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x1aU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_109, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x1bU], __Vtemp_109);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x1bU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_110, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x1bU], __Vtemp_110);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x1bU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_111, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x1bU], __Vtemp_111);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x1bU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_112, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x1bU], __Vtemp_112);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x1bU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_113, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x1cU], __Vtemp_113);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x1cU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_114, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x1cU], __Vtemp_114);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x1cU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_115, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x1cU], __Vtemp_115);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x1cU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_116, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x1cU], __Vtemp_116);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x1cU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_117, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x1dU], __Vtemp_117);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x1dU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_118, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x1dU], __Vtemp_118);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x1dU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_119, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x1dU], __Vtemp_119);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x1dU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_120, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x1dU], __Vtemp_120);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x1dU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_121, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x1eU], __Vtemp_121);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x1eU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_122, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x1eU], __Vtemp_122);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x1eU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_123, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x1eU], __Vtemp_123);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x1eU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_124, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x1eU], __Vtemp_124);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x1eU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_125, vlSelfRef.__PVT__wrdata_compfifo_ic, 0U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x1fU], __Vtemp_125);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_0
                    [0x1fU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_126, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x80U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x1fU], __Vtemp_126);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_1
                    [0x1fU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x10U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_127, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x100U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x1fU], __Vtemp_127);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_2
                    [0x1fU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x20U, 16)));
    VL_SEL_WWII(128, 512, __Vtemp_128, vlSelfRef.__PVT__wrdata_compfifo_ic, 0x180U, 128);
    VL_ASSIGNSEL_WW(144,128,0U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x1fU], __Vtemp_128);
    VL_ASSIGNSEL_WI(144,16,0x80U, vlSelfRef.__PVT__wrdata_compfifo_3
                    [0x1fU], (0xffffU & VL_SEL_IQII(64, vlSelfRef.__PVT__wrbe_dataflit_ic, 0x30U, 16)));
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[1U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[2U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[3U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[4U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[5U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[6U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[7U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[8U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[9U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0xaU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0xbU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0xcU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0xdU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0xeU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0xfU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0x10U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0x11U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0x12U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0x13U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0x14U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0x15U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0x16U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0x17U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0x18U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0x19U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0x1aU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0x1bU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0x1cU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0x1dU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0x1eU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0, 
                vlSelfRef.__PVT__wrdata_compfifo_0[0x1fU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[1U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[2U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[3U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[4U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[5U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[6U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[7U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[8U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[9U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0xaU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0xbU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0xcU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0xdU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0xeU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0xfU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0x10U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0x11U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0x12U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0x13U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0x14U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0x15U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0x16U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0x17U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0x18U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0x19U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0x1aU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0x1bU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0x1cU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0x1dU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0x1eU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1, 
                vlSelfRef.__PVT__wrdata_compfifo_1[0x1fU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[1U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[2U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[3U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[4U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[5U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[6U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[7U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[8U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[9U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0xaU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0xbU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0xcU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0xdU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0xeU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0xfU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0x10U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0x11U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0x12U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0x13U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0x14U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0x15U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0x16U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0x17U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0x18U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0x19U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0x1aU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0x1bU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0x1cU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0x1dU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0x1eU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2, 
                vlSelfRef.__PVT__wrdata_compfifo_2[0x1fU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[1U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[2U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[3U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[4U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[5U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[6U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[7U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[8U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[9U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0xaU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0xbU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0xcU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0xdU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0xeU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0xfU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0x10U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0x11U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0x12U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0x13U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0x14U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0x15U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0x16U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0x17U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0x18U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0x19U]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0x1aU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0x1bU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0x1cU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0x1dU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0x1eU]);
    VL_ASSIGN_W(144,vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3, 
                vlSelfRef.__PVT__wrdata_compfifo_3[0x1fU]);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_0, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_0);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_1, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_1);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_2, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_2);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
    VL_ASSIGN_W(144,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u.__PVT__wrdata_3, vlSelfRef.__Vcellinp__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__wrdata_3);
}
