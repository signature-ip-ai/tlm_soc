// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_ic_initcrdt_enable.h"
#include "Vsig_topology_top_sig_lnkactive_rcv.h"
#include "Vsig_topology_top_sig_node_rx_datproc__pi59.h"
#include "Vsig_topology_top_sig_node_rx_reqproc__pi62.h"
#include "Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1.h"
#include "Vsig_topology_top_sig_node_rxtop__pi46.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi46___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__0(Vsig_topology_top_sig_node_rxtop__pi46* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi46___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__initcrdt_en_sync_port_gen__DOT__sig_ic_initcrdt_enable_0->__PVT__rstb_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__rstb_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__initcrdt_en_sync_port_gen__DOT__sig_ic_initcrdt_enable_0->__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi46___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__0(Vsig_topology_top_sig_node_rxtop__pi46* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi46___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__initcrdt_en_sync_port_gen__DOT__sig_ic_initcrdt_enable_0->__PVT__rstb_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__rstb_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__initcrdt_en_sync_port_gen__DOT__sig_ic_initcrdt_enable_0->__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
}
