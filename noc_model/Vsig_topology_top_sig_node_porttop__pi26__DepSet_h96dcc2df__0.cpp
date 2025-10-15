// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_id_translator_rn_wrapper__pi43.h"
#include "Vsig_topology_top_sig_node_porttop__pi26.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__0(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__ic_rx_req_v 
        = vlSelfRef.__PVT__ic_RX_REQFLITV;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, vlSelfRef.__PVT__ic_RX_REQFLIT);
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_txnid_from_rn 
        = (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, 0x1aU, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_expcompack 
        = (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, 0x93U));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_lkly_shared 
        = (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, 0x7dU));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_opcode 
        = (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, 0x3eU, 7));
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__ic_rx_req_txnid_from_rn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_txnid_from_rn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__ic_rx_req_expcompack 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_expcompack;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__ic_rx_req_lkly_shared 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_lkly_shared;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__ic_rx_req_opcode 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_opcode;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__6(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_dat_dbid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__7(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_rsp_txnid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__8(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_dat_dbid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__9(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_rsp_txnid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__0(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__ic_rx_req_v 
        = vlSelfRef.__PVT__ic_RX_REQFLITV;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, vlSelfRef.__PVT__ic_RX_REQFLIT);
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_txnid_from_rn 
        = (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, 0x1aU, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_expcompack 
        = (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, 0x93U));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_lkly_shared 
        = (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, 0x7dU));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_opcode 
        = (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, 0x3eU, 7));
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__ic_rx_req_txnid_from_rn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_txnid_from_rn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__ic_rx_req_expcompack 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_expcompack;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__ic_rx_req_lkly_shared 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_lkly_shared;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__ic_rx_req_opcode 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_opcode;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__7(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_dat_dbid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__8(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_rsp_txnid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__9(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_dat_dbid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__10(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_rsp_txnid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__16(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__16\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_snp_txnid_to_rn 
        = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_snp_txnid_to_rn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__17(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__17\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_dat_dbid_to_rn 
        = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_dat_dbid_to_rn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__18(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__18\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_rsp_dbid_to_rn 
        = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_rsp_dbid_to_rn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__39(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__39\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_dat_dbid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__40(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__40\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_rsp_txnid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__41(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__41\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_dat_dbid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__42(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__42\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_rsp_txnid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__0(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__ic_rx_req_v 
        = vlSelfRef.__PVT__ic_RX_REQFLITV;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, vlSelfRef.__PVT__ic_RX_REQFLIT);
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_txnid_from_rn 
        = (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, 0x1aU, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_expcompack 
        = (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, 0x93U));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_lkly_shared 
        = (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, 0x7dU));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_opcode 
        = (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, 0x3eU, 7));
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__ic_rx_req_txnid_from_rn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_txnid_from_rn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__ic_rx_req_expcompack 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_expcompack;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__ic_rx_req_lkly_shared 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_lkly_shared;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__ic_rx_req_opcode 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_opcode;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__5(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_dat_dbid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__6(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_rsp_txnid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__7(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_dat_dbid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__8(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_rsp_txnid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__0(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__ic_rx_req_v 
        = vlSelfRef.__PVT__ic_RX_REQFLITV;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, vlSelfRef.__PVT__ic_RX_REQFLIT);
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_txnid_from_rn 
        = (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, 0x1aU, 12));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_expcompack 
        = (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, 0x93U));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_lkly_shared 
        = (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, 0x7dU));
    vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_opcode 
        = (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__req_flit_to_id_translator, 0x3eU, 7));
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__ic_rx_req_txnid_from_rn 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_txnid_from_rn;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__ic_rx_req_expcompack 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_expcompack;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__ic_rx_req_lkly_shared 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_lkly_shared;
    vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__ic_rx_req_opcode 
        = vlSelfRef.__Vcellinp__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__ic_rx_req_opcode;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__7(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_dat_dbid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__8(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_rsp_txnid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__9(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_dat_dbid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__10(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_rsp_txnid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__16(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__16\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_snp_txnid_to_rn 
        = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_snp_txnid_to_rn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__17(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__17\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_dat_dbid_to_rn 
        = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_dat_dbid_to_rn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__18(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__18\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__tx_rsp_dbid_to_rn 
        = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__tx_rsp_dbid_to_rn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__39(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__39\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_dat_dbid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__40(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__40\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc0_rx_rsp_txnid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__41(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__41\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_dat_txnid_to_hn;
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_dat_dbid_to_hn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__42(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__42\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelf->__PVT__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0->__PVT__vc1_rx_rsp_txnid_to_hn;
}
