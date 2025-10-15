// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_chi_xmt_data_flit__C2a8.h"

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_data_flit__C2a8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0__0(Vsig_topology_top_sig_chi_xmt_data_flit__C2a8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_data_flit__C2a8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__enter_ff__DOT__ic_TX_DATFLITV_nxt 
        = vlSelfRef.__PVT__compdata_tx_datflitv;
    vlSelfRef.__PVT__ic_TX_DATFLITPEND = vlSelfRef.__PVT__enter_ff__DOT__ic_TX_DATFLITV_nxt;
}

extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_he95d9d6c_0;

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_data_flit__C2a8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0__1(Vsig_topology_top_sig_chi_xmt_data_flit__C2a8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_data_flit__C2a8___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__enter_ff__DOT__ic_TX_DATFLIT_nxt, Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    if (vlSelfRef.__PVT__compdata_tx_datflitv) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__enter_ff__DOT__ic_TX_DATFLIT_nxt, vlSelfRef.__PVT__compdata_tx_datflit);
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_data_flit__C2a8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0__0(Vsig_topology_top_sig_chi_xmt_data_flit__C2a8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_data_flit__C2a8___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ic_TX_DATFLITV = vlSelfRef.__PVT__ic_TX_DATFLITV;
    VL_ASSIGN_W(680,vlSelfRef.__Vdly__ic_TX_DATFLIT, vlSelfRef.__PVT__ic_TX_DATFLIT);
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__ic_TX_DATFLITV = vlSelfRef.__PVT__enter_ff__DOT__ic_TX_DATFLITV_nxt;
        VL_ASSIGN_W(680,vlSelfRef.__Vdly__ic_TX_DATFLIT, vlSelfRef.__PVT__enter_ff__DOT__ic_TX_DATFLIT_nxt);
    } else {
        vlSelfRef.__Vdly__ic_TX_DATFLITV = 0U;
        VL_ASSIGN_W(680,vlSelfRef.__Vdly__ic_TX_DATFLIT, Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    }
    vlSelfRef.__PVT__ic_TX_DATFLITV = vlSelfRef.__Vdly__ic_TX_DATFLITV;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT, vlSelfRef.__Vdly__ic_TX_DATFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_data_flit__C2a8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0__0(Vsig_topology_top_sig_chi_xmt_data_flit__C2a8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_data_flit__C2a8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__enter_ff__DOT__ic_TX_DATFLITV_nxt 
        = vlSelfRef.__PVT__compdata_tx_datflitv;
    vlSelfRef.__PVT__ic_TX_DATFLITPEND = vlSelfRef.__PVT__enter_ff__DOT__ic_TX_DATFLITV_nxt;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_data_flit__C2a8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0__1(Vsig_topology_top_sig_chi_xmt_data_flit__C2a8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_data_flit__C2a8___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_data_flit_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__enter_ff__DOT__ic_TX_DATFLIT_nxt, Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    if (vlSelfRef.__PVT__compdata_tx_datflitv) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__enter_ff__DOT__ic_TX_DATFLIT_nxt, vlSelfRef.__PVT__compdata_tx_datflit);
    }
}
