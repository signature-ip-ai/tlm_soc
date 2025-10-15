// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_double_synchronizer.h"
#include "Vsig_topology_top_sig_lnkactive_rcv.h"

VL_ATTR_COLD void Vsig_topology_top_sig_lnkactive_rcv___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__0(Vsig_topology_top_sig_lnkactive_rcv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_rcv___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RXLINKACTIVEREQ_sync = vlSelf->__PVT__sig_double_synchronizer_0->__PVT__sig_dest;
    vlSelfRef.__PVT__credits_backto_full_sync = vlSelf->__PVT__sig_double_synchronizer_1->__PVT__sig_dest;
    vlSelf->__PVT__sig_double_synchronizer_1->__PVT__sig_src 
        = vlSelfRef.__PVT__credits_backto_full;
}

VL_ATTR_COLD void Vsig_topology_top_sig_lnkactive_rcv___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__2(Vsig_topology_top_sig_lnkactive_rcv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_rcv___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_double_synchronizer_0->__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_clk;
    vlSelf->__PVT__sig_double_synchronizer_1->__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_clk;
    vlSelf->__PVT__sig_double_synchronizer_0->__PVT__clkdest 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__sig_double_synchronizer_1->__PVT__clkdest 
        = vlSelfRef.__PVT__clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_lnkactive_rcv___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__0(Vsig_topology_top_sig_lnkactive_rcv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_rcv___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_double_synchronizer_0->__PVT__sig_src 
        = vlSelfRef.__PVT__RXLINKACTIVEREQ;
}

VL_ATTR_COLD void Vsig_topology_top_sig_lnkactive_rcv___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__0(Vsig_topology_top_sig_lnkactive_rcv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_rcv___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__RXLINKACTIVEREQ_sync = vlSelf->__PVT__sig_double_synchronizer_0->__PVT__sig_dest;
    vlSelfRef.__PVT__credits_backto_full_sync = vlSelf->__PVT__sig_double_synchronizer_1->__PVT__sig_dest;
    vlSelf->__PVT__sig_double_synchronizer_1->__PVT__sig_src 
        = vlSelfRef.__PVT__credits_backto_full;
}

VL_ATTR_COLD void Vsig_topology_top_sig_lnkactive_rcv___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__2(Vsig_topology_top_sig_lnkactive_rcv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_rcv___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_double_synchronizer_0->__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_clk;
    vlSelf->__PVT__sig_double_synchronizer_1->__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_clk;
    vlSelf->__PVT__sig_double_synchronizer_0->__PVT__clkdest 
        = vlSelfRef.__PVT__clk;
    vlSelf->__PVT__sig_double_synchronizer_1->__PVT__clkdest 
        = vlSelfRef.__PVT__clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_lnkactive_rcv___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__0(Vsig_topology_top_sig_lnkactive_rcv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_rcv___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_double_synchronizer_0->__PVT__sig_src 
        = vlSelfRef.__PVT__RXLINKACTIVEREQ;
}
