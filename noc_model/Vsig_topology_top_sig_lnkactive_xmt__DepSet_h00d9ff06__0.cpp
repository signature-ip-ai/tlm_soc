// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_double_synchronizer.h"
#include "Vsig_topology_top_sig_lnkactive_xmt.h"

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__0(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__double_synchronizer_0->__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_clk;
    vlSelf->__PVT__double_synchronizer_1->__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_clk;
    vlSelf->__PVT__double_synchronizer_2->__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_clk;
    vlSelf->__PVT__double_synchronizer_3->__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_clk;
    vlSelf->__PVT__double_synchronizer_4->__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_clk;
    vlSelf->__PVT__double_synchronizer_0->__PVT__clkdest 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__double_synchronizer_1->__PVT__clkdest 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__double_synchronizer_2->__PVT__clkdest 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__double_synchronizer_3->__PVT__clkdest 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__double_synchronizer_4->__PVT__clkdest 
        = vlSelfRef.__PVT__clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__0(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__double_synchronizer_1->__PVT__sig_src 
        = vlSelfRef.__PVT__TXLINKACTIVEACK;
    vlSelf->__PVT__double_synchronizer_3->__PVT__sig_src 
        = vlSelfRef.__PVT__RXLINKACTIVEREQ;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__0(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__double_synchronizer_1->__PVT__sig_src 
        = vlSelfRef.__PVT__TXLINKACTIVEACK;
    vlSelf->__PVT__double_synchronizer_3->__PVT__sig_src 
        = vlSelfRef.__PVT__RXLINKACTIVEREQ;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__0(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__enter_deactivate_sync = vlSelf->__PVT__double_synchronizer_2->__PVT__sig_dest;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__1(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__enable_xmt_sync = vlSelf->__PVT__double_synchronizer_0->__PVT__sig_dest;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__2(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TXLINKACTIVEACK_sync = vlSelf->__PVT__double_synchronizer_1->__PVT__sig_dest;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__3(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RXLINKACTIVEREQ_sync = vlSelf->__PVT__double_synchronizer_3->__PVT__sig_dest;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__4(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__all_cache_init_complete_sync = vlSelf->__PVT__double_synchronizer_4->__PVT__sig_dest;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__5(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__double_synchronizer_4->__PVT__sig_src 
        = vlSelfRef.__PVT__all_cache_init_complete;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__0(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__double_synchronizer_0->__PVT__sig_src 
        = vlSelfRef.__PVT__enable_xmt;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__1(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__double_synchronizer_2->__PVT__sig_src 
        = vlSelfRef.__PVT__enter_deactivate;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__3(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__double_synchronizer_1->__PVT__sig_src 
        = vlSelfRef.__PVT__TXLINKACTIVEACK;
    vlSelf->__PVT__double_synchronizer_3->__PVT__sig_src 
        = vlSelfRef.__PVT__RXLINKACTIVEREQ;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__0(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__double_synchronizer_0->__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_clk;
    vlSelf->__PVT__double_synchronizer_1->__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_clk;
    vlSelf->__PVT__double_synchronizer_2->__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_clk;
    vlSelf->__PVT__double_synchronizer_3->__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_clk;
    vlSelf->__PVT__double_synchronizer_4->__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_clk;
    vlSelf->__PVT__double_synchronizer_0->__PVT__clkdest 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__double_synchronizer_1->__PVT__clkdest 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__double_synchronizer_2->__PVT__clkdest 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__double_synchronizer_3->__PVT__clkdest 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__double_synchronizer_4->__PVT__clkdest 
        = vlSelfRef.__PVT__clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__0(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__double_synchronizer_1->__PVT__sig_src 
        = vlSelfRef.__PVT__TXLINKACTIVEACK;
    vlSelf->__PVT__double_synchronizer_3->__PVT__sig_src 
        = vlSelfRef.__PVT__RXLINKACTIVEREQ;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__0(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__double_synchronizer_1->__PVT__sig_src 
        = vlSelfRef.__PVT__TXLINKACTIVEACK;
    vlSelf->__PVT__double_synchronizer_3->__PVT__sig_src 
        = vlSelfRef.__PVT__RXLINKACTIVEREQ;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__0(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__enter_deactivate_sync = vlSelf->__PVT__double_synchronizer_2->__PVT__sig_dest;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__1(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__enable_xmt_sync = vlSelf->__PVT__double_synchronizer_0->__PVT__sig_dest;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__2(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__TXLINKACTIVEACK_sync = vlSelf->__PVT__double_synchronizer_1->__PVT__sig_dest;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__3(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RXLINKACTIVEREQ_sync = vlSelf->__PVT__double_synchronizer_3->__PVT__sig_dest;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__4(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__all_cache_init_complete_sync = vlSelf->__PVT__double_synchronizer_4->__PVT__sig_dest;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__5(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__double_synchronizer_4->__PVT__sig_src 
        = vlSelfRef.__PVT__all_cache_init_complete;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__6(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__double_synchronizer_2->__PVT__sig_src 
        = vlSelfRef.__PVT__enter_deactivate;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__0(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__double_synchronizer_0->__PVT__sig_src 
        = vlSelfRef.__PVT__enable_xmt;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__2(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__double_synchronizer_1->__PVT__sig_src 
        = vlSelfRef.__PVT__TXLINKACTIVEACK;
    vlSelf->__PVT__double_synchronizer_3->__PVT__sig_src 
        = vlSelfRef.__PVT__RXLINKACTIVEREQ;
}
