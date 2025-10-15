// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_ic_crdt_recv.h"
#include "Vsig_topology_top_sig_lnkactive_xmt.h"
#include "Vsig_topology_top_sig_node_txtop__pi44.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_txtop__pi44___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__1(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__TXLINKACTIVEACK 
        = vlSelfRef.__PVT__ic_TX_LINKACTIVEACK;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp->__PVT__rcvd_crdt 
        = vlSelfRef.__PVT__TX_SNPLCRDV;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat->__PVT__rcvd_crdt 
        = vlSelfRef.__PVT__TX_DATLCRDV;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp->__PVT__rcvd_crdt 
        = vlSelfRef.__PVT__TX_RSPLCRDV;
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__RXLINKACTIVEREQ 
        = vlSelfRef.__PVT__ic_RX_LINKACTIVEREQ;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_txtop__pi44___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__1(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__TXLINKACTIVEACK 
        = vlSelfRef.__PVT__ic_TX_LINKACTIVEACK;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp->__PVT__rcvd_crdt 
        = vlSelfRef.__PVT__TX_SNPLCRDV;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat->__PVT__rcvd_crdt 
        = vlSelfRef.__PVT__TX_DATLCRDV;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp->__PVT__rcvd_crdt 
        = vlSelfRef.__PVT__TX_RSPLCRDV;
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__RXLINKACTIVEREQ 
        = vlSelfRef.__PVT__ic_RX_LINKACTIVEREQ;
}
