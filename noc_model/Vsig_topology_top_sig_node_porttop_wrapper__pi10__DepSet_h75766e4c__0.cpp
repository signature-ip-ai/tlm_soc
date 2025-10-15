// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_porttop__pi28.h"
#include "Vsig_topology_top_sig_node_porttop_wrapper__pi10.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__1(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_ic_gclk 
        = vlSelfRef.__PVT__rx_ic_gclk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_ic_gclk 
        = vlSelfRef.__PVT__tx_ic_gclk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_intfrx_gclk 
        = vlSelfRef.__PVT__tx_intfrx_gclk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_intfrx_gclk 
        = vlSelfRef.__PVT__rx_intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__2(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_activate_clk = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__5(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_is_inactive = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__6(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_datf_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__7(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_activate_clk = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__8(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__0(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_req_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__1(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_activate_clk = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__4(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_datf_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__5(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_is_inactive = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__6(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_activate_clk = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__7(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__8(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__0(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__all_cache_init_complete 
        = vlSelfRef.__PVT__all_cache_init_complete;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__1(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_clear_timeout_interrupt 
        = vlSelfRef.__PVT__i_clear_timeout_interrupt;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_clear_recovery_interrupt 
        = vlSelfRef.__PVT__i_clear_recovery_interrupt;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__2(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc0, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_reqf_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__3(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__cc_is_inactive 
        = vlSelfRef.__PVT__cc_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__0(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_intfrx_gclk 
        = vlSelfRef.__PVT__tx_intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__1(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_intfrx_gclk 
        = vlSelfRef.__PVT__rx_intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__2(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_ic_gclk 
        = vlSelfRef.__PVT__rx_ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__3(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_ic_gclk 
        = vlSelfRef.__PVT__tx_ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__4(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_req_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__7(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_req_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__8(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_is_inactive = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__9(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_datf_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__10(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__11(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__12(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__13(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__14(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__14\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_activate_clk = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__1(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_ic_gclk 
        = vlSelfRef.__PVT__rx_ic_gclk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_ic_gclk 
        = vlSelfRef.__PVT__tx_ic_gclk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_intfrx_gclk 
        = vlSelfRef.__PVT__tx_intfrx_gclk;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_intfrx_gclk 
        = vlSelfRef.__PVT__rx_intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__2(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_activate_clk = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__5(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_is_inactive = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__6(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_datf_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__7(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_activate_clk = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__8(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__0(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_req_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__1(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_activate_clk = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__4(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_datf_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__5(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_is_inactive = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__6(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_activate_clk = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_activate_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__7(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__8(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__0(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__all_cache_init_complete 
        = vlSelfRef.__PVT__all_cache_init_complete;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__1(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_clear_timeout_interrupt 
        = vlSelfRef.__PVT__i_clear_timeout_interrupt;
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__i_clear_recovery_interrupt 
        = vlSelfRef.__PVT__i_clear_recovery_interrupt;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__2(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc0, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_reqf_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__3(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__cc_is_inactive 
        = vlSelfRef.__PVT__cc_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__0(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_intfrx_gclk 
        = vlSelfRef.__PVT__tx_intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__1(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_intfrx_gclk 
        = vlSelfRef.__PVT__rx_intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__2(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_ic_gclk 
        = vlSelfRef.__PVT__rx_ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__3(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_ic_gclk 
        = vlSelfRef.__PVT__tx_ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__4(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_req_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__7(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_req_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__8(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_is_inactive = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__rx_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__9(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_out_datf_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__10(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__11(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__12(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__13(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__14(Vsig_topology_top_sig_node_porttop_wrapper__pi10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi10___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__14\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_activate_clk = vlSelf->__PVT__node_porttop_sn__DOT__u_node_porttop_sn->__PVT__tx_activate_clk;
}
