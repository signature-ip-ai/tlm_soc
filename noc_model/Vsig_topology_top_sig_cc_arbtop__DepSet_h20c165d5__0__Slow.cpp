// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cc_arbtop.h"
#include "Vsig_topology_top_sig_cc_vcarb.h"
#include "Vsig_topology_top_sig_tx_portarb.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cc_arbtop___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_arbtop_0__0(Vsig_topology_top_sig_cc_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_arbtop___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_arbtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc0_pre = vlSelf->__PVT__sig_tx_portarb_vc0->__PVT__gnt_vec;
    vlSelfRef.__PVT__gnt_vec_vc1_pre = vlSelf->__PVT__sig_tx_portarb_vc1->__PVT__gnt_vec;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__req_tovcarb, 
                    ((0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre)) 
                     & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__vcx_has_credits), 0U)));
    VL_ASSIGNSEL_II(3,2,1U, vlSelfRef.__PVT__req_tovcarb, 
                    VL_EXTEND_II(2,1, ((0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre)) 
                                       & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__vcx_has_credits), 1U))));
    vlSelf->__PVT__sig_cc_vcarb_0->__PVT__req_vec = vlSelfRef.__PVT__req_tovcarb;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_arbtop___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_arbtop_0__1(Vsig_topology_top_sig_cc_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_arbtop___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_arbtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_tx_portarb_vc0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_tx_portarb_vc1->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_cc_vcarb_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_arbtop___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_arbtop_0__2(Vsig_topology_top_sig_cc_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_arbtop___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_reqtxflit_top_0__sig_cc_arbtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_tx_portarb_vc0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_tx_portarb_vc1->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_cc_vcarb_0->__PVT__ic_clk = vlSelfRef.__PVT__ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_arbtop___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0__0(Vsig_topology_top_sig_cc_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_arbtop___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc1_pre = vlSelf->__PVT__sig_tx_portarb_vc1->__PVT__gnt_vec;
    vlSelfRef.__PVT__gnt_vec_vc0_pre = vlSelf->__PVT__sig_tx_portarb_vc0->__PVT__gnt_vec;
    VL_ASSIGNSEL_II(3,2,1U, vlSelfRef.__PVT__req_tovcarb, 
                    VL_EXTEND_II(2,1, ((0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre)) 
                                       & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__vcx_has_credits), 1U))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__req_tovcarb, 
                    ((0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre)) 
                     & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__vcx_has_credits), 0U)));
    vlSelf->__PVT__sig_cc_vcarb_0->__PVT__req_vec = vlSelfRef.__PVT__req_tovcarb;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_arbtop___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0__1(Vsig_topology_top_sig_cc_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_arbtop___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_tx_portarb_vc0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_tx_portarb_vc1->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_cc_vcarb_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_arbtop___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0__2(Vsig_topology_top_sig_cc_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_arbtop___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_tx_portarb_vc0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_tx_portarb_vc1->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_cc_vcarb_0->__PVT__ic_clk = vlSelfRef.__PVT__ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0__2(Vsig_topology_top_sig_cc_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_rsptxflit_top_0__sig_cc_arbtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__end_req_qual_vc0 = vlSelf->__PVT__sig_tx_portarb_vc0->__PVT__end_req_qual;
    vlSelfRef.__PVT__end_req_qual_vc1 = vlSelf->__PVT__sig_tx_portarb_vc1->__PVT__end_req_qual;
    vlSelfRef.__PVT__end_granted_agent = ((VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 0U) 
                                           & (IData)(vlSelfRef.__PVT__end_req_qual_vc0)) 
                                          | (VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 1U) 
                                             & (IData)(vlSelfRef.__PVT__end_req_qual_vc1)));
    vlSelf->__PVT__sig_cc_vcarb_0->__PVT__end_granted_agent 
        = vlSelfRef.__PVT__end_granted_agent;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_arbtop___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__0(Vsig_topology_top_sig_cc_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_arbtop___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gnt_vec_vc1_pre = vlSelf->__PVT__sig_tx_portarb_vc1->__PVT__gnt_vec;
    vlSelfRef.__PVT__gnt_vec_vc0_pre = vlSelf->__PVT__sig_tx_portarb_vc0->__PVT__gnt_vec;
    VL_ASSIGNSEL_II(3,2,1U, vlSelfRef.__PVT__req_tovcarb, 
                    VL_EXTEND_II(2,1, ((0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc1_pre)) 
                                       & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__vcx_has_credits), 1U))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__req_tovcarb, 
                    ((0U != (IData)(vlSelfRef.__PVT__gnt_vec_vc0_pre)) 
                     & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__vcx_has_credits), 0U)));
    vlSelf->__PVT__sig_cc_vcarb_0->__PVT__req_vec = vlSelfRef.__PVT__req_tovcarb;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_arbtop___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__1(Vsig_topology_top_sig_cc_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_arbtop___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_tx_portarb_vc0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_tx_portarb_vc1->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_cc_vcarb_0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_arbtop___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__2(Vsig_topology_top_sig_cc_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_arbtop___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_tx_portarb_vc0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_tx_portarb_vc1->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSelf->__PVT__sig_cc_vcarb_0->__PVT__ic_clk = vlSelfRef.__PVT__ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__2(Vsig_topology_top_sig_cc_arbtop* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_arbtop___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_txtop_0__sig_cc_dattxflit_top_0__sig_cc_arbtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__end_req_qual_vc0 = vlSelf->__PVT__sig_tx_portarb_vc0->__PVT__end_req_qual;
    vlSelfRef.__PVT__end_req_qual_vc1 = vlSelf->__PVT__sig_tx_portarb_vc1->__PVT__end_req_qual;
    vlSelfRef.__PVT__end_granted_agent = ((VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 0U) 
                                           & (IData)(vlSelfRef.__PVT__end_req_qual_vc0)) 
                                          | (VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_vec_vcarb), 1U) 
                                             & (IData)(vlSelfRef.__PVT__end_req_qual_vc1)));
    vlSelf->__PVT__sig_cc_vcarb_0->__PVT__end_granted_agent 
        = vlSelfRef.__PVT__end_granted_agent;
}
