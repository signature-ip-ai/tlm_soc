// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cc_arbtop.h"
#include "Vsig_topology_top_sig_cc_vcarb.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cc_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_arbtop_0__5(Vsig_topology_top_sig_cc_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_arbtop_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__end_granted_agent = ((VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 0U) 
                                           & (IData)(vlSelfRef.__PVT__end_req_qual_vc0)) 
                                          | (VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 1U) 
                                             & (IData)(vlSelfRef.__PVT__end_req_qual_vc1)));
    vlSelf->__PVT__sig_cc_vcarb_0->__PVT__end_granted_agent 
        = vlSelfRef.__PVT__end_granted_agent;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_arbtop_0__6(Vsig_topology_top_sig_cc_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_arbtop_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vcarb = vlSelf->__PVT__sig_cc_vcarb_0->__PVT__gnt_vec;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0__3(Vsig_topology_top_sig_cc_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vcarb = vlSelf->__PVT__sig_cc_vcarb_0->__PVT__gnt_vec;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__3(Vsig_topology_top_sig_cc_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vcarb = vlSelf->__PVT__sig_cc_vcarb_0->__PVT__gnt_vec;
}
