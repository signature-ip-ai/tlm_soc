// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_countones.h"

VL_INLINE_OPT void Vsig_topology_top_sig_countones___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0__0(Vsig_topology_top_sig_countones* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_countones___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ones_count_12 = (0x1fU & (VL_EXTEND_II(5,4, 
                                                            vlSelfRef.__PVT__onescount
                                                            [0U]) 
                                               + VL_EXTEND_II(5,4, 
                                                              vlSelfRef.__PVT__onescount
                                                              [1U])));
    vlSelfRef.__PVT__ones_count = (0x1fU & ((IData)(vlSelfRef.__PVT__ones_count_12) 
                                            + VL_EXTEND_II(5,4, 
                                                           vlSelfRef.__PVT__onescount
                                                           [2U])));
}

VL_INLINE_OPT void Vsig_topology_top_sig_countones___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp__0(Vsig_topology_top_sig_countones* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_countones___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ones_count_12 = (0x1fU & (VL_EXTEND_II(5,4, 
                                                            vlSelfRef.__PVT__onescount
                                                            [0U]) 
                                               + VL_EXTEND_II(5,4, 
                                                              vlSelfRef.__PVT__onescount
                                                              [1U])));
    vlSelfRef.__PVT__ones_count = (0x1fU & ((IData)(vlSelfRef.__PVT__ones_count_12) 
                                            + VL_EXTEND_II(5,4, 
                                                           vlSelfRef.__PVT__onescount
                                                           [2U])));
}

VL_INLINE_OPT void Vsig_topology_top_sig_countones___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req__0(Vsig_topology_top_sig_countones* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_countones___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ones_count_12 = (0x1fU & (VL_EXTEND_II(5,4, 
                                                            vlSelfRef.__PVT__onescount
                                                            [0U]) 
                                               + VL_EXTEND_II(5,4, 
                                                              vlSelfRef.__PVT__onescount
                                                              [1U])));
    vlSelfRef.__PVT__ones_count = (0x1fU & ((IData)(vlSelfRef.__PVT__ones_count_12) 
                                            + VL_EXTEND_II(5,4, 
                                                           vlSelfRef.__PVT__onescount
                                                           [2U])));
}
