// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cg_cell.h"

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cg_cc_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cg_cc_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cg_cc_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cg_cc_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_intfc_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_intfc_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_ic_clk__0(Vsig_topology_top_sig_cg_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_cg_cell___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_ic_clk__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__final_cg_enable_n;
    vlSelfRef.__Vdly__final_cg_enable_n = vlSelfRef.__PVT__i_cg_enable_n;
    vlSelfRef.__PVT__final_cg_enable_n = vlSelfRef.__Vdly__final_cg_enable_n;
    vlSelfRef.__PVT__o_gated_clk = ((IData)(vlSelfRef.__PVT__i_clk) 
                                    & (IData)(vlSelfRef.__PVT__final_cg_enable_n));
}
