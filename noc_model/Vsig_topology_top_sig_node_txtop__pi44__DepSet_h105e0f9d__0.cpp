// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_double_synchronizer.h"
#include "Vsig_topology_top_sig_ic_crdt_recv.h"
#include "Vsig_topology_top_sig_lnkactive_xmt.h"
#include "Vsig_topology_top_sig_node_dattxflit_top__pi60.h"
#include "Vsig_topology_top_sig_node_rsptxflit_top.h"
#include "Vsig_topology_top_sig_node_snptxflit_top__pi59.h"
#include "Vsig_topology_top_sig_node_txtop__pi44.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__0(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__double_sync_ucie_gen__DOT__inst_sync_cc_inactive->__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__double_sync_ucie_gen__DOT__inst_sync_cc_inactive->__PVT__clkdest 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__rstb_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp->__PVT__cc_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp->__PVT__cc_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat->__PVT__cc_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi44___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__0(Vsig_topology_top_sig_node_txtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi44___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__double_sync_ucie_gen__DOT__inst_sync_cc_inactive->__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__double_sync_ucie_gen__DOT__inst_sync_cc_inactive->__PVT__clkdest 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__rstb_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_snp->__PVT__cc_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_rsp->__PVT__cc_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__req_crdt_recv_default__DOT__sig_ic_crdt_recv_dat->__PVT__cc_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
}
