// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98.h"

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0__0(Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__enter_ff__DOT__ic_TX_SNPFLITV_nxt 
        = vlSelfRef.__PVT__snp_tx_snpflitv;
    vlSelfRef.__PVT__ic_TX_SNPFLITPEND = vlSelfRef.__PVT__enter_ff__DOT__ic_TX_SNPFLITV_nxt;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0__1(Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_CONST_W_1X(152,vlSelfRef.__PVT__enter_ff__DOT__ic_TX_SNPFLIT_nxt,0x00000000);
    if (vlSelfRef.__PVT__snp_tx_snpflitv) {
        VL_ASSIGN_W(152,vlSelfRef.__PVT__enter_ff__DOT__ic_TX_SNPFLIT_nxt, vlSelfRef.__PVT__snp_tx_snpflit);
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0__0(Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ic_TX_SNPFLITV = vlSelfRef.__PVT__ic_TX_SNPFLITV;
    VL_ASSIGN_W(152,vlSelfRef.__Vdly__ic_TX_SNPFLIT, vlSelfRef.__PVT__ic_TX_SNPFLIT);
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__ic_TX_SNPFLITV = vlSelfRef.__PVT__enter_ff__DOT__ic_TX_SNPFLITV_nxt;
        VL_ASSIGN_W(152,vlSelfRef.__Vdly__ic_TX_SNPFLIT, vlSelfRef.__PVT__enter_ff__DOT__ic_TX_SNPFLIT_nxt);
    } else {
        vlSelfRef.__Vdly__ic_TX_SNPFLITV = 0U;
        VL_CONST_W_1X(152,vlSelfRef.__Vdly__ic_TX_SNPFLIT,0x00000000);
    }
    vlSelfRef.__PVT__ic_TX_SNPFLITV = vlSelfRef.__Vdly__ic_TX_SNPFLITV;
    VL_ASSIGN_W(152,vlSelfRef.__PVT__ic_TX_SNPFLIT, vlSelfRef.__Vdly__ic_TX_SNPFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0__0(Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__enter_ff__DOT__ic_TX_SNPFLITV_nxt 
        = vlSelfRef.__PVT__snp_tx_snpflitv;
    vlSelfRef.__PVT__ic_TX_SNPFLITPEND = vlSelfRef.__PVT__enter_ff__DOT__ic_TX_SNPFLITV_nxt;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0__1(Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq_flit__C98___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_flit_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_CONST_W_1X(152,vlSelfRef.__PVT__enter_ff__DOT__ic_TX_SNPFLIT_nxt,0x00000000);
    if (vlSelfRef.__PVT__snp_tx_snpflitv) {
        VL_ASSIGN_W(152,vlSelfRef.__PVT__enter_ff__DOT__ic_TX_SNPFLIT_nxt, vlSelfRef.__PVT__snp_tx_snpflit);
    }
}
