// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_id_translator_rn_req__pi57.h"
#include "Vsig_topology_top_sig_id_translator_rn_wrapper__pi43.h"

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__1(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__tx_dat_v 
        = vlSelfRef.__PVT__tx_dat_v;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__tx_dat_dbid_from_hn 
        = vlSelfRef.__PVT__tx_dat_dbid_from_hn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__tx_dat_txnid_from_hn 
        = vlSelfRef.__PVT__tx_dat_txnid_from_hn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__0(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__ic_rx_req_v 
        = vlSelfRef.__PVT__ic_rx_req_v;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__ic_rx_req_txnid_from_rn 
        = vlSelfRef.__PVT__ic_rx_req_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__ic_rx_req_expcompack 
        = vlSelfRef.__PVT__ic_rx_req_expcompack;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__ic_rx_req_lkly_shared 
        = vlSelfRef.__PVT__ic_rx_req_lkly_shared;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__ic_rx_req_opcode 
        = vlSelfRef.__PVT__ic_rx_req_opcode;
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__1(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_dat_dbid_to_hn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__3(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_dat_dbid_to_hn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__7(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_dat_txnid_to_hn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__8(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_dat_txnid_to_hn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__1(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__tx_dat_v 
        = vlSelfRef.__PVT__tx_dat_v;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__tx_dat_dbid_from_hn 
        = vlSelfRef.__PVT__tx_dat_dbid_from_hn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__tx_dat_txnid_from_hn 
        = vlSelfRef.__PVT__tx_dat_txnid_from_hn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__0(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__ic_rx_req_v 
        = vlSelfRef.__PVT__ic_rx_req_v;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__ic_rx_req_txnid_from_rn 
        = vlSelfRef.__PVT__ic_rx_req_txnid_from_rn;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__ic_rx_req_expcompack 
        = vlSelfRef.__PVT__ic_rx_req_expcompack;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__ic_rx_req_lkly_shared 
        = vlSelfRef.__PVT__ic_rx_req_lkly_shared;
    vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__ic_rx_req_opcode 
        = vlSelfRef.__PVT__ic_rx_req_opcode;
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__1(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_dat_dbid_to_hn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__3(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_dat_dbid_to_hn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__7(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc0_rx_dat_txnid_to_hn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__8(Vsig_topology_top_sig_id_translator_rn_wrapper__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_rn_wrapper__pi43___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn_req = vlSelf->__PVT__i_sig_id_translator_rn_req->__PVT__vc1_rx_dat_txnid_to_hn;
}
