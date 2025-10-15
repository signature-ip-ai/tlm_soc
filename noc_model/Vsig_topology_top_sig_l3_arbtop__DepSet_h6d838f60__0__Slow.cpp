// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_l3_arbtop.h"
#include "Vsig_topology_top_sig_tx_portarb.h"

VL_ATTR_COLD void Vsig_topology_top_sig_l3_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_rsptxflit_top_0__sig_l3_arbtop_0__1(Vsig_topology_top_sig_l3_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_rsptxflit_top_0__sig_l3_arbtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_tx_portarb_vc0->__PVT__end_req_vec 
        = vlSelfRef.__PVT__end_req_vec_vc0;
    vlSelf->__PVT__sig_tx_portarb_vc1->__PVT__end_req_vec 
        = vlSelfRef.__PVT__end_req_vec_vc1;
    vlSelf->__PVT__sig_tx_portarb_vc0->__PVT__req_vec 
        = vlSelfRef.__PVT__req_vec_vc0;
    vlSelf->__PVT__sig_tx_portarb_vc1->__PVT__req_vec 
        = vlSelfRef.__PVT__req_vec_vc1;
}

VL_ATTR_COLD void Vsig_topology_top_sig_l3_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_dattxflit_top_0__sig_l3_arbtop_0__1(Vsig_topology_top_sig_l3_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_txtop_0__sig_l3_dattxflit_top_0__sig_l3_arbtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_tx_portarb_vc0->__PVT__end_req_vec 
        = vlSelfRef.__PVT__end_req_vec_vc0;
    vlSelf->__PVT__sig_tx_portarb_vc1->__PVT__end_req_vec 
        = vlSelfRef.__PVT__end_req_vec_vc1;
    vlSelf->__PVT__sig_tx_portarb_vc0->__PVT__req_vec 
        = vlSelfRef.__PVT__req_vec_vc0;
    vlSelf->__PVT__sig_tx_portarb_vc1->__PVT__req_vec 
        = vlSelfRef.__PVT__req_vec_vc1;
}
