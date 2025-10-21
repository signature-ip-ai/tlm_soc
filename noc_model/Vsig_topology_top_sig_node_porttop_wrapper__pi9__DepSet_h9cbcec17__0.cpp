// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_porttop__pi26.h"
#include "Vsig_topology_top_sig_node_porttop_wrapper__pi9.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__3(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_activate_clk = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__6(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_is_inactive = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__7(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_activate_clk = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__tx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__8(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_datf_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__9(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__0(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_req_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__1(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_activate_clk = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__4(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_is_inactive = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__5(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_activate_clk = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__tx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__6(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_datf_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__7(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__8(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__0(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__all_cache_init_complete 
        = vlSelfRef.__PVT__all_cache_init_complete;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__1(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id_translator_hs_pending_txn_snp 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__id_translator_hs_pending_txn_snp;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__2(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_clear_timeout_interrupt 
        = vlSelfRef.__PVT__i_clear_timeout_interrupt;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_clear_recovery_interrupt 
        = vlSelfRef.__PVT__i_clear_recovery_interrupt;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__3(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc0, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_reqf_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__6(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__cc_is_inactive 
        = vlSelfRef.__PVT__cc_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__1(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__tx_intfrx_gclk 
        = vlSelfRef.__PVT__tx_intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__2(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_intfrx_gclk 
        = vlSelfRef.__PVT__rx_intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__3(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_ic_gclk 
        = vlSelfRef.__PVT__rx_ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__4(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__tx_ic_gclk 
        = vlSelfRef.__PVT__tx_ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__5(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_req_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__6(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__cm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__7(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__noncm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__8(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__cm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__9(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__noncm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__10(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__noncm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__11(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__noncm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__12(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__cm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__13(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__cm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__14(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__14\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__xy_coord_all_hn_f 
        = vlSelfRef.__PVT__xy_coord_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__15(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__15\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__xy_coord_all_pm 
        = vlSelfRef.__PVT__xy_coord_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__16(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__16\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state;
    vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_to_pl;
    vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled = 1U;
        if (vlSelfRef.__PVT__node_porttop_rn__DOT__syscoreq_to_hn) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        if (vlSelfRef.__PVT__node_porttop_rn__DOT__coh_con2enable) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt = 1U;
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__syscoreq_to_hn)))) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 3U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled = 1U;
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_snppend)) 
                   & (~ (IData)(vlSelfRef.__PVT__id_translator_hs_pending_txn_snp))))) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt = 0U;
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 0U;
        }
    }
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__sysco_is_disabled 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__17(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__17\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_req_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__20(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__20\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_datf_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__21(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__21\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__22(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__22\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__23(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__23\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__24(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__24\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__25(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__25\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_is_inactive = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__26(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__26\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_activate_clk = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__tx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__3(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_activate_clk = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__6(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_is_inactive = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__7(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_activate_clk = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__tx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__8(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_datf_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__9(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__0(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_req_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__1(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_activate_clk = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__4(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_is_inactive = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__5(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_activate_clk = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__tx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__6(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_datf_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__7(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__8(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__0(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__all_cache_init_complete 
        = vlSelfRef.__PVT__all_cache_init_complete;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__1(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id_translator_hs_pending_txn_snp 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__id_translator_hs_pending_txn_snp;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__2(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_clear_timeout_interrupt 
        = vlSelfRef.__PVT__i_clear_timeout_interrupt;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__i_clear_recovery_interrupt 
        = vlSelfRef.__PVT__i_clear_recovery_interrupt;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__3(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc0, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_reqf_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__6(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__cc_is_inactive 
        = vlSelfRef.__PVT__cc_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__1(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__tx_intfrx_gclk 
        = vlSelfRef.__PVT__tx_intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__2(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_intfrx_gclk 
        = vlSelfRef.__PVT__rx_intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__3(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_ic_gclk 
        = vlSelfRef.__PVT__rx_ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__4(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__tx_ic_gclk 
        = vlSelfRef.__PVT__tx_ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__5(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_req_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__6(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__cm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__7(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__noncm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__8(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__cm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__9(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__noncm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__10(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__noncm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__11(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__noncm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__12(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__cm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__13(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__cm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__14(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__14\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__xy_coord_all_hn_f 
        = vlSelfRef.__PVT__xy_coord_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__15(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__15\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__xy_coord_all_pm 
        = vlSelfRef.__PVT__xy_coord_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__16(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__16\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state;
    vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_to_pl;
    vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled = 1U;
        if (vlSelfRef.__PVT__node_porttop_rn__DOT__syscoreq_to_hn) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        if (vlSelfRef.__PVT__node_porttop_rn__DOT__coh_con2enable) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt = 1U;
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__syscoreq_to_hn)))) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 3U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state))) {
        vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled = 1U;
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__coh_snppend)) 
                   & (~ (IData)(vlSelfRef.__PVT__id_translator_hs_pending_txn_snp))))) {
            vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt = 0U;
            vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt = 0U;
        }
    }
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__sysco_is_disabled 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__sysco_is_disabled;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__17(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__17\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_req_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__20(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__20\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_datf_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__21(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__21\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__22(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__22\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__23(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__23\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__24(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__24\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__25(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__25\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_is_inactive = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__26(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__26\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_activate_clk = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__tx_activate_clk;
}
