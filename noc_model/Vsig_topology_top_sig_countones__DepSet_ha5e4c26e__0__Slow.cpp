// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_countones.h"
#include "Vsig_topology_top_sig_countones_8.h"

VL_ATTR_COLD void Vsig_topology_top_sig_countones___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0__0(Vsig_topology_top_sig_countones* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_countones___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__onescount_out 
        = vlSelf->__PVT__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u->__PVT__onescount_out;
    vlSelfRef.__Vcellout__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__onescount_out 
        = vlSelf->__PVT__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u->__PVT__onescount_out;
    vlSelfRef.__Vcellout__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__onescount_out 
        = vlSelf->__PVT__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u->__PVT__onescount_out;
    vlSelfRef.__PVT__onescount[0U] = vlSelfRef.__Vcellout__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__onescount_out;
    vlSelfRef.__PVT__onescount[1U] = vlSelfRef.__Vcellout__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__onescount_out;
    vlSelfRef.__PVT__onescount[2U] = vlSelfRef.__Vcellout__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__onescount_out;
    vlSelfRef.__PVT__ones_count_12 = (0x1fU & (VL_EXTEND_II(5,4, 
                                                            vlSelfRef.__PVT__onescount
                                                            [0U]) 
                                               + VL_EXTEND_II(5,4, 
                                                              vlSelfRef.__PVT__onescount
                                                              [1U])));
    vlSelfRef.__PVT__ones_count = (0x1fU & ((IData)(vlSelfRef.__PVT__ones_count_12) 
                                            + VL_EXTEND_II(5,4, 
                                                           vlSelfRef.__PVT__onescount
                                                           [2U])));
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0__1(Vsig_topology_top_sig_countones* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_countones___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSelf->__PVT__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSelf->__PVT__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSelfRef.__Vcellinp__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__sharevec 
        = (0xffU & VL_SEL_IIII(24, vlSelfRef.__PVT__share_vec, 0U, 8));
    vlSelfRef.__Vcellinp__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__sharevec 
        = (0xffU & VL_SEL_IIII(24, vlSelfRef.__PVT__share_vec, 8U, 8));
    vlSelfRef.__Vcellinp__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__sharevec 
        = (0xffU & VL_SEL_IIII(24, vlSelfRef.__PVT__share_vec, 0x10U, 8));
    vlSelf->__PVT__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__sharevec;
    vlSelf->__PVT__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__sharevec;
    vlSelf->__PVT__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__sharevec;
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0__2(Vsig_topology_top_sig_countones* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_countones___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u->__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
    vlSelf->__PVT__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u->__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
    vlSelf->__PVT__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u->__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp__0(Vsig_topology_top_sig_countones* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_countones___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__onescount_out 
        = vlSelf->__PVT__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u->__PVT__onescount_out;
    vlSelfRef.__Vcellout__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__onescount_out 
        = vlSelf->__PVT__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u->__PVT__onescount_out;
    vlSelfRef.__Vcellout__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__onescount_out 
        = vlSelf->__PVT__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u->__PVT__onescount_out;
    vlSelfRef.__Vcellinp__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__sharevec 
        = (0xffU & VL_SEL_IIII(24, vlSelfRef.__PVT__share_vec, 0U, 8));
    vlSelfRef.__Vcellinp__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__sharevec 
        = (0xffU & VL_SEL_IIII(24, vlSelfRef.__PVT__share_vec, 8U, 8));
    vlSelfRef.__Vcellinp__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__sharevec 
        = (0xffU & VL_SEL_IIII(24, vlSelfRef.__PVT__share_vec, 0x10U, 8));
    vlSelfRef.__PVT__onescount[0U] = vlSelfRef.__Vcellout__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__onescount_out;
    vlSelfRef.__PVT__onescount[1U] = vlSelfRef.__Vcellout__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__onescount_out;
    vlSelfRef.__PVT__onescount[2U] = vlSelfRef.__Vcellout__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__onescount_out;
    vlSelf->__PVT__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__sharevec;
    vlSelf->__PVT__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__sharevec;
    vlSelf->__PVT__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__sharevec;
    vlSelfRef.__PVT__ones_count_12 = (0x1fU & (VL_EXTEND_II(5,4, 
                                                            vlSelfRef.__PVT__onescount
                                                            [0U]) 
                                               + VL_EXTEND_II(5,4, 
                                                              vlSelfRef.__PVT__onescount
                                                              [1U])));
    vlSelfRef.__PVT__ones_count = (0x1fU & ((IData)(vlSelfRef.__PVT__ones_count_12) 
                                            + VL_EXTEND_II(5,4, 
                                                           vlSelfRef.__PVT__onescount
                                                           [2U])));
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp__1(Vsig_topology_top_sig_countones* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_countones___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSelf->__PVT__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSelf->__PVT__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp__2(Vsig_topology_top_sig_countones* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_countones___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u->__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
    vlSelf->__PVT__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u->__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
    vlSelf->__PVT__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u->__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req__0(Vsig_topology_top_sig_countones* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_countones___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__onescount_out 
        = vlSelf->__PVT__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u->__PVT__onescount_out;
    vlSelfRef.__Vcellout__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__onescount_out 
        = vlSelf->__PVT__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u->__PVT__onescount_out;
    vlSelfRef.__Vcellout__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__onescount_out 
        = vlSelf->__PVT__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u->__PVT__onescount_out;
    vlSelfRef.__Vcellinp__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__sharevec 
        = (0xffU & VL_SEL_IIII(24, vlSelfRef.__PVT__share_vec, 0U, 8));
    vlSelfRef.__Vcellinp__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__sharevec 
        = (0xffU & VL_SEL_IIII(24, vlSelfRef.__PVT__share_vec, 8U, 8));
    vlSelfRef.__Vcellinp__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__sharevec 
        = (0xffU & VL_SEL_IIII(24, vlSelfRef.__PVT__share_vec, 0x10U, 8));
    vlSelfRef.__PVT__onescount[0U] = vlSelfRef.__Vcellout__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__onescount_out;
    vlSelfRef.__PVT__onescount[1U] = vlSelfRef.__Vcellout__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__onescount_out;
    vlSelfRef.__PVT__onescount[2U] = vlSelfRef.__Vcellout__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__onescount_out;
    vlSelf->__PVT__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__sharevec;
    vlSelf->__PVT__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__sharevec;
    vlSelf->__PVT__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__sharevec;
    vlSelfRef.__PVT__ones_count_12 = (0x1fU & (VL_EXTEND_II(5,4, 
                                                            vlSelfRef.__PVT__onescount
                                                            [0U]) 
                                               + VL_EXTEND_II(5,4, 
                                                              vlSelfRef.__PVT__onescount
                                                              [1U])));
    vlSelfRef.__PVT__ones_count = (0x1fU & ((IData)(vlSelfRef.__PVT__ones_count_12) 
                                            + VL_EXTEND_II(5,4, 
                                                           vlSelfRef.__PVT__onescount
                                                           [2U])));
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req__1(Vsig_topology_top_sig_countones* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_countones___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSelf->__PVT__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSelf->__PVT__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u->__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req__2(Vsig_topology_top_sig_countones* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_countones___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u->__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
    vlSelf->__PVT__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u->__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
    vlSelf->__PVT__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u->__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
}
