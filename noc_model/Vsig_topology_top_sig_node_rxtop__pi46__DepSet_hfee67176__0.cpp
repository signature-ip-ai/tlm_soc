// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_ic_initcrdt_enable.h"
#include "Vsig_topology_top_sig_node_rx_datproc__pi59.h"
#include "Vsig_topology_top_sig_node_rx_reqproc__pi62.h"
#include "Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1.h"
#include "Vsig_topology_top_sig_node_rxtop__pi46.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi46___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__3(Vsig_topology_top_sig_node_rxtop__pi46* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi46___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__enable_init_update = vlSelf->__PVT__initcrdt_en_sync_port_gen__DOT__sig_ic_initcrdt_enable_0->__PVT__enable_init_update;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi46___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__3(Vsig_topology_top_sig_node_rxtop__pi46* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi46___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__enable_init_update = vlSelf->__PVT__initcrdt_en_sync_port_gen__DOT__sig_ic_initcrdt_enable_0->__PVT__enable_init_update;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
}
