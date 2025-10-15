// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_countones_4.h"
#include "Vsig_topology_top_sig_countones_8.h"

VL_ATTR_COLD void Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__0(Vsig_topology_top_sig_countones_8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_countones_4_0__sharevec 
        = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__sharevec), 0U, 4));
    vlSelfRef.__Vcellinp__sig_countones_4_1__sharevec 
        = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__sharevec), 4U, 4));
    vlSelf->__PVT__sig_countones_4_0->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__sig_countones_4_0__sharevec;
    vlSelf->__PVT__sig_countones_4_1->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__sig_countones_4_1__sharevec;
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__1(Vsig_topology_top_sig_countones_8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__onescount1 = vlSelf->__PVT__sig_countones_4_0->__PVT__onescount;
    vlSelfRef.__PVT__onescount2 = vlSelf->__PVT__sig_countones_4_1->__PVT__onescount;
    vlSelfRef.__PVT__onescount_out_nxt = (0xfU & (VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__onescount1)) 
                                                  + 
                                                  VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__onescount2))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__0(Vsig_topology_top_sig_countones_8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_countones_4_0__sharevec 
        = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__sharevec), 0U, 4));
    vlSelfRef.__Vcellinp__sig_countones_4_1__sharevec 
        = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__sharevec), 4U, 4));
    vlSelf->__PVT__sig_countones_4_0->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__sig_countones_4_0__sharevec;
    vlSelf->__PVT__sig_countones_4_1->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__sig_countones_4_1__sharevec;
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__1(Vsig_topology_top_sig_countones_8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__onescount1 = vlSelf->__PVT__sig_countones_4_0->__PVT__onescount;
    vlSelfRef.__PVT__onescount2 = vlSelf->__PVT__sig_countones_4_1->__PVT__onescount;
    vlSelfRef.__PVT__onescount_out_nxt = (0xfU & (VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__onescount1)) 
                                                  + 
                                                  VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__onescount2))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__0(Vsig_topology_top_sig_countones_8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_countones_4_0__sharevec 
        = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__sharevec), 0U, 4));
    vlSelfRef.__Vcellinp__sig_countones_4_1__sharevec 
        = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__sharevec), 4U, 4));
    vlSelf->__PVT__sig_countones_4_0->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__sig_countones_4_0__sharevec;
    vlSelf->__PVT__sig_countones_4_1->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__sig_countones_4_1__sharevec;
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__1(Vsig_topology_top_sig_countones_8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__onescount1 = vlSelf->__PVT__sig_countones_4_0->__PVT__onescount;
    vlSelfRef.__PVT__onescount2 = vlSelf->__PVT__sig_countones_4_1->__PVT__onescount;
    vlSelfRef.__PVT__onescount_out_nxt = (0xfU & (VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__onescount1)) 
                                                  + 
                                                  VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__onescount2))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__0(Vsig_topology_top_sig_countones_8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_countones_4_0__sharevec 
        = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__sharevec), 0U, 4));
    vlSelfRef.__Vcellinp__sig_countones_4_1__sharevec 
        = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__sharevec), 4U, 4));
    vlSelf->__PVT__sig_countones_4_0->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__sig_countones_4_0__sharevec;
    vlSelf->__PVT__sig_countones_4_1->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__sig_countones_4_1__sharevec;
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__1(Vsig_topology_top_sig_countones_8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__onescount1 = vlSelf->__PVT__sig_countones_4_0->__PVT__onescount;
    vlSelfRef.__PVT__onescount2 = vlSelf->__PVT__sig_countones_4_1->__PVT__onescount;
    vlSelfRef.__PVT__onescount_out_nxt = (0xfU & (VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__onescount1)) 
                                                  + 
                                                  VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__onescount2))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__0(Vsig_topology_top_sig_countones_8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_countones_4_0__sharevec 
        = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__sharevec), 0U, 4));
    vlSelfRef.__Vcellinp__sig_countones_4_1__sharevec 
        = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__sharevec), 4U, 4));
    vlSelf->__PVT__sig_countones_4_0->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__sig_countones_4_0__sharevec;
    vlSelf->__PVT__sig_countones_4_1->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__sig_countones_4_1__sharevec;
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__1(Vsig_topology_top_sig_countones_8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__onescount1 = vlSelf->__PVT__sig_countones_4_0->__PVT__onescount;
    vlSelfRef.__PVT__onescount2 = vlSelf->__PVT__sig_countones_4_1->__PVT__onescount;
    vlSelfRef.__PVT__onescount_out_nxt = (0xfU & (VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__onescount1)) 
                                                  + 
                                                  VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__onescount2))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__0(Vsig_topology_top_sig_countones_8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_countones_4_0__sharevec 
        = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__sharevec), 0U, 4));
    vlSelfRef.__Vcellinp__sig_countones_4_1__sharevec 
        = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__sharevec), 4U, 4));
    vlSelf->__PVT__sig_countones_4_0->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__sig_countones_4_0__sharevec;
    vlSelf->__PVT__sig_countones_4_1->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__sig_countones_4_1__sharevec;
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__1(Vsig_topology_top_sig_countones_8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__onescount1 = vlSelf->__PVT__sig_countones_4_0->__PVT__onescount;
    vlSelfRef.__PVT__onescount2 = vlSelf->__PVT__sig_countones_4_1->__PVT__onescount;
    vlSelfRef.__PVT__onescount_out_nxt = (0xfU & (VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__onescount1)) 
                                                  + 
                                                  VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__onescount2))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__0(Vsig_topology_top_sig_countones_8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_countones_4_0__sharevec 
        = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__sharevec), 0U, 4));
    vlSelfRef.__Vcellinp__sig_countones_4_1__sharevec 
        = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__sharevec), 4U, 4));
    vlSelf->__PVT__sig_countones_4_0->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__sig_countones_4_0__sharevec;
    vlSelf->__PVT__sig_countones_4_1->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__sig_countones_4_1__sharevec;
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__1(Vsig_topology_top_sig_countones_8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__onescount1 = vlSelf->__PVT__sig_countones_4_0->__PVT__onescount;
    vlSelfRef.__PVT__onescount2 = vlSelf->__PVT__sig_countones_4_1->__PVT__onescount;
    vlSelfRef.__PVT__onescount_out_nxt = (0xfU & (VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__onescount1)) 
                                                  + 
                                                  VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__onescount2))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__0(Vsig_topology_top_sig_countones_8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_countones_4_0__sharevec 
        = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__sharevec), 0U, 4));
    vlSelfRef.__Vcellinp__sig_countones_4_1__sharevec 
        = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__sharevec), 4U, 4));
    vlSelf->__PVT__sig_countones_4_0->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__sig_countones_4_0__sharevec;
    vlSelf->__PVT__sig_countones_4_1->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__sig_countones_4_1__sharevec;
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__1(Vsig_topology_top_sig_countones_8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__onescount1 = vlSelf->__PVT__sig_countones_4_0->__PVT__onescount;
    vlSelfRef.__PVT__onescount2 = vlSelf->__PVT__sig_countones_4_1->__PVT__onescount;
    vlSelfRef.__PVT__onescount_out_nxt = (0xfU & (VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__onescount1)) 
                                                  + 
                                                  VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__onescount2))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__0(Vsig_topology_top_sig_countones_8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_countones_4_0__sharevec 
        = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__sharevec), 0U, 4));
    vlSelfRef.__Vcellinp__sig_countones_4_1__sharevec 
        = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__sharevec), 4U, 4));
    vlSelf->__PVT__sig_countones_4_0->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__sig_countones_4_0__sharevec;
    vlSelf->__PVT__sig_countones_4_1->__PVT__sharevec 
        = vlSelfRef.__Vcellinp__sig_countones_4_1__sharevec;
}

VL_ATTR_COLD void Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__1(Vsig_topology_top_sig_countones_8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_countones_8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__onescount1 = vlSelf->__PVT__sig_countones_4_0->__PVT__onescount;
    vlSelfRef.__PVT__onescount2 = vlSelf->__PVT__sig_countones_4_1->__PVT__onescount;
    vlSelfRef.__PVT__onescount_out_nxt = (0xfU & (VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__onescount1)) 
                                                  + 
                                                  VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__onescount2))));
}
