// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_porttop__pi26.h"
#include "Vsig_topology_top_sig_node_txtop__pi45.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__6(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_txtop_0->__PVT__sysco_is_disabled 
        = vlSelfRef.__PVT__sysco_is_disabled;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__7(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__snpflitpend_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_SNPFLITPEND;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__1(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__sig_node_txtop_0->__PVT__flit_all_req_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__14(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__14\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_txtop_0->__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_txtop_0->__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__15(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__15\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txtop_0->__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txtop_0->__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__6(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_txtop_0->__PVT__sysco_is_disabled 
        = vlSelfRef.__PVT__sysco_is_disabled;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__7(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__snpflitpend_from_tx_top = vlSelf->__PVT__sig_node_txtop_0->__PVT__TX_SNPFLITPEND;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__1(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1610,vlSelf->__PVT__sig_node_txtop_0->__PVT__flit_all_req_vc1, vlSelfRef.__PVT__flit_all_req_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__14(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__14\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_txtop_0->__PVT__flit_all_rsp_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_txtop_0->__PVT__flit_all_rsp_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__15(Vsig_topology_top_sig_node_porttop__pi26* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi26___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__15\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txtop_0->__PVT__flit_all_dat_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_txtop_0->__PVT__flit_all_dat_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}
