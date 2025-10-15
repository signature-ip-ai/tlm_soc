// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_lnkactive_rcv.h"
#include "Vsig_topology_top_sig_node_rx_datproc__pi59.h"
#include "Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1.h"
#include "Vsig_topology_top_sig_node_rxtop__pi44.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__13(Vsig_topology_top_sig_node_rxtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcvr_can_send_crdt = vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__rcvr_can_send_crdt;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__rcvr_can_send_crdt 
        = vlSelfRef.__PVT__rcvr_can_send_crdt;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__rcvr_can_send_crdt 
        = vlSelfRef.__PVT__rcvr_can_send_crdt;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__13(Vsig_topology_top_sig_node_rxtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcvr_can_send_crdt = vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__rcvr_can_send_crdt;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__rcvr_can_send_crdt 
        = vlSelfRef.__PVT__rcvr_can_send_crdt;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__rcvr_can_send_crdt 
        = vlSelfRef.__PVT__rcvr_can_send_crdt;
}
