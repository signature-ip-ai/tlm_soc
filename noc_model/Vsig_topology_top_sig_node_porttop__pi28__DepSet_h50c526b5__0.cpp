// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_addr_translator.h"
#include "Vsig_topology_top_sig_id_translator_sn__I23_Tc.h"
#include "Vsig_topology_top_sig_node_porttop__pi28.h"
#include "Vsig_topology_top_sig_node_rxtop__pi46.h"
#include "Vsig_topology_top_sig_node_txtop__pi45.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi28___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__0(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_txtop_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__rstn 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__rst_n 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi28___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__0(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_txtop_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__rstn 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__rst_n 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__id_translator_sn__DOT__sig_addr_translator_0->__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_node_rxtop_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
}
