// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_porttop__pi26.h"
#include "Vsig_topology_top_sig_node_porttop_wrapper__pi9.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_TX_REQFLITPEND = 0U;
    vlSelfRef.__PVT__ic_TX_REQFLITV = 0U;
    VL_CONST_W_1X(151,vlSelfRef.__PVT__ic_TX_REQFLIT,0x00000000);
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__portis_RN_or_SN = 1U;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_REQLCRDV = 0U;
    VL_CONST_W_1X(108,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_SNPFLIT,0x00000000);
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_SNPFLITV = 0U;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_SNPFLITPEND = 0U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__3(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_req_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__4(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__xy_coord_all_hn_f 
        = vlSelfRef.__PVT__xy_coord_all_hn_f;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__xy_coord_all_pm 
        = vlSelfRef.__PVT__xy_coord_all_pm;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__cm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_hn_f;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__noncm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_f;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__cm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__noncm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__noncm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_pm;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__noncm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__cm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_pm;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__cm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_pm;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_ic_gclk 
        = vlSelfRef.__PVT__rx_ic_gclk;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__tx_ic_gclk 
        = vlSelfRef.__PVT__tx_ic_gclk;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__tx_intfrx_gclk 
        = vlSelfRef.__PVT__tx_intfrx_gclk;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_intfrx_gclk 
        = vlSelfRef.__PVT__rx_intfrx_gclk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__3(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_req_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__4(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_activate_clk = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_activate_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__7(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_is_inactive = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_is_inactive;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__8(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_activate_clk = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__tx_activate_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__9(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_datf_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__10(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__11(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_TX_REQFLITPEND = 0U;
    vlSelfRef.__PVT__ic_TX_REQFLITV = 0U;
    VL_CONST_W_1X(151,vlSelfRef.__PVT__ic_TX_REQFLIT,0x00000000);
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__portis_RN_or_SN = 1U;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_TX_REQLCRDV = 0U;
    VL_CONST_W_1X(108,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_SNPFLIT,0x00000000);
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_SNPFLITV = 0U;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__ic_RX_SNPFLITPEND = 0U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__3(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_req_vc0, vlSelfRef.__PVT__flit_all_req_vc0);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__4(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__xy_coord_all_hn_f 
        = vlSelfRef.__PVT__xy_coord_all_hn_f;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__xy_coord_all_pm 
        = vlSelfRef.__PVT__xy_coord_all_pm;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__cm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_hn_f;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__noncm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_f;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__cm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__noncm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__noncm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_pm;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__noncm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__cm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_pm;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__cm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_pm;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_ic_gclk 
        = vlSelfRef.__PVT__rx_ic_gclk;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__tx_ic_gclk 
        = vlSelfRef.__PVT__tx_ic_gclk;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__tx_intfrx_gclk 
        = vlSelfRef.__PVT__tx_intfrx_gclk;
    vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_intfrx_gclk 
        = vlSelfRef.__PVT__rx_intfrx_gclk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__3(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_req_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__4(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_activate_clk = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_activate_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__7(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_is_inactive = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__rx_is_inactive;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__8(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tx_activate_clk = vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__tx_activate_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__9(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_rspf_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_rspf_vc1);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_datf_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_out_datf_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__10(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__11(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__node_porttop_rn__DOT__u_node_porttop_rn->__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}
