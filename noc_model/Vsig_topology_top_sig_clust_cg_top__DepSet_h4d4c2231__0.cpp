// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_clust_cg_top.h"

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__0(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_ic_clk.__PVT__i_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_ic_clk.__PVT__i_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_ic_clk.__PVT__i_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_ic_clk.__PVT__i_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_ic_clk.__PVT__i_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_ic_clk.__PVT__i_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_ic_clk.__PVT__i_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_ic_clk.__PVT__i_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_ic_clk.__PVT__i_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_ic_clk.__PVT__i_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_ic_clk.__PVT__i_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_ic_clk.__PVT__i_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_ic_clk.__PVT__i_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_ic_clk.__PVT__i_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_ic_clk.__PVT__i_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_ic_clk.__PVT__i_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cg_cc_ic_clk.__PVT__i_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__i_rst_n_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_pp_intfc_clk), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__i_rst_n_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_pp_intfc_clk), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__i_rst_n_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_pp_intfc_clk), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__i_rst_n_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_pp_intfc_clk), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_rst_n_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_pp_intfc_clk), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_rst_n_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_pp_intfc_clk), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_rst_n_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_pp_intfc_clk), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__i_rst_n_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_pp_intfc_clk), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__i_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__i_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__i_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__i_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__i_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk__i_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__i_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_intfc_clk__i_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__i_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk__i_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__i_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_intfc_clk__i_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__i_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 3U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__i_rst_n_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__i_rst_n_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__i_rst_n_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__i_rst_n_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_rst_n_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_rst_n_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_rst_n_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__i_rst_n_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__i_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__i_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__i_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__i_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__i_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk.__PVT__i_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk__i_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk.__PVT__i_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__i_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_intfc_clk.__PVT__i_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_intfc_clk__i_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk.__PVT__i_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__i_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk.__PVT__i_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk__i_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk.__PVT__i_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__i_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_intfc_clk.__PVT__i_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_intfc_clk__i_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk.__PVT__i_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__i_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__1(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_ic_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_ic_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_ic_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_ic_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_ic_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_ic_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_ic_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_ic_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_ic_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_ic_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_ic_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_ic_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_ic_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_ic_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_ic_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_ic_clk.__PVT__o_gated_clk;
    vlSelfRef.__PVT__o_cc_ic_gclk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cg_cc_ic_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_intfc_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_intfc_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__o_ic_rx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_ic_clk__o_gated_clk);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__o_ic_tx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_ic_clk__o_gated_clk);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__o_ic_rx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_ic_clk__o_gated_clk);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__o_ic_tx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_ic_clk__o_gated_clk);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__o_ic_rx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_ic_clk__o_gated_clk);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__o_ic_tx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_ic_clk__o_gated_clk);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__o_ic_rx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_ic_clk__o_gated_clk);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__o_ic_tx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_ic_clk__o_gated_clk);
    vlSelfRef.__PVT__o_pp_rx_ic_gclk = VL_CONCAT_III(4,2,2, 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_ic_clk__o_gated_clk), (IData)(vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_ic_clk__o_gated_clk)), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_ic_clk__o_gated_clk), (IData)(vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_ic_clk__o_gated_clk)));
    vlSelfRef.__PVT__o_pp_tx_ic_gclk = VL_CONCAT_III(4,2,2, 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_ic_clk__o_gated_clk), (IData)(vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_ic_clk__o_gated_clk)), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_ic_clk__o_gated_clk), (IData)(vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_ic_clk__o_gated_clk)));
    vlSelfRef.__PVT__o_pp_tx_intfc_gclk = VL_CONCAT_III(4,2,2, 
                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__o_gated_clk), (IData)(vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_intfc_clk__o_gated_clk)), 
                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__o_gated_clk), (IData)(vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk__o_gated_clk)));
    vlSelfRef.__PVT__o_pp_rx_intfc_gclk = VL_CONCAT_III(4,2,2, 
                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__o_gated_clk), (IData)(vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_intfc_clk__o_gated_clk)), 
                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__o_gated_clk), (IData)(vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk__o_gated_clk)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__0(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_pp_rx), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_pp_rx), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_pp_rx), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_pp_rx), 3U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__i_activate_block;
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__1(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__all_are_inactive = ((((VL_REDAND_II(4, (IData)(vlSelfRef.__PVT__i_pp_rx_is_inactive)) 
                                            & VL_REDAND_II(4, (IData)(vlSelfRef.__PVT__i_ic_rx_is_inactive))) 
                                           & VL_REDAND_II(4, (IData)(vlSelfRef.__PVT__i_pp_tx_is_inactive))) 
                                          & VL_REDAND_II(4, (IData)(vlSelfRef.__PVT__i_ic_tx_is_inactive))) 
                                         & (IData)(vlSelfRef.__PVT__i_cc_is_inactive));
    if (vlSelfRef.__PVT__clock_gating_enable) {
        if (vlSelfRef.__PVT__clock_gating_mode) {
            vlSelfRef.__PVT__ppx_rx_is_inactive_mux 
                = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__all_are_inactive), 4U));
            vlSelfRef.__PVT__icx_rx_is_inactive_mux 
                = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__all_are_inactive), 4U));
            vlSelfRef.__PVT__ppx_tx_is_inactive_mux 
                = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__all_are_inactive), 4U));
            vlSelfRef.__PVT__icx_tx_is_inactive_mux 
                = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__all_are_inactive), 4U));
            vlSelfRef.__PVT__cc_is_inactive_mux = vlSelfRef.__PVT__all_are_inactive;
        } else {
            vlSelfRef.__PVT__ppx_rx_is_inactive_mux 
                = vlSelfRef.__PVT__i_pp_rx_is_inactive;
            vlSelfRef.__PVT__icx_rx_is_inactive_mux 
                = vlSelfRef.__PVT__i_ic_rx_is_inactive;
            vlSelfRef.__PVT__ppx_tx_is_inactive_mux 
                = vlSelfRef.__PVT__i_pp_tx_is_inactive;
            vlSelfRef.__PVT__icx_tx_is_inactive_mux 
                = vlSelfRef.__PVT__i_ic_tx_is_inactive;
            vlSelfRef.__PVT__cc_is_inactive_mux = vlSelfRef.__PVT__i_cc_is_inactive;
        }
    } else {
        vlSelfRef.__PVT__ppx_rx_is_inactive_mux = 0U;
        vlSelfRef.__PVT__icx_rx_is_inactive_mux = 0U;
        vlSelfRef.__PVT__ppx_tx_is_inactive_mux = 0U;
        vlSelfRef.__PVT__icx_tx_is_inactive_mux = 0U;
        vlSelfRef.__PVT__cc_is_inactive_mux = 0U;
    }
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__PVT__cc_is_inactive_mux;
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_rx_is_inactive_mux), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_rx_is_inactive_mux), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_rx_is_inactive_mux), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_rx_is_inactive_mux), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_rx_is_inactive_mux), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_rx_is_inactive_mux), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_rx_is_inactive_mux), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_rx_is_inactive_mux), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_tx_is_inactive_mux), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_tx_is_inactive_mux), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_tx_is_inactive_mux), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_tx_is_inactive_mux), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_tx_is_inactive_mux), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_tx_is_inactive_mux), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_tx_is_inactive_mux), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_tx_is_inactive_mux), 3U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__2(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__PVT__i_activate_cc;
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__3(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_pp_tx), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_pp_tx), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_pp_tx), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_pp_tx), 3U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block;
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__0(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_pp_rx), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_pp_rx), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_pp_rx), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_pp_rx), 3U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__i_activate_block;
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__1(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__PVT__i_activate_cc;
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__2(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_pp_tx), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_pp_tx), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_pp_tx), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_pp_tx), 3U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block;
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__3(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__all_are_inactive = ((((VL_REDAND_II(4, (IData)(vlSelfRef.__PVT__i_pp_rx_is_inactive)) 
                                            & VL_REDAND_II(4, (IData)(vlSelfRef.__PVT__i_ic_rx_is_inactive))) 
                                           & VL_REDAND_II(4, (IData)(vlSelfRef.__PVT__i_pp_tx_is_inactive))) 
                                          & VL_REDAND_II(4, (IData)(vlSelfRef.__PVT__i_ic_tx_is_inactive))) 
                                         & (IData)(vlSelfRef.__PVT__i_cc_is_inactive));
    if (vlSelfRef.__PVT__clock_gating_enable) {
        if (vlSelfRef.__PVT__clock_gating_mode) {
            vlSelfRef.__PVT__ppx_rx_is_inactive_mux 
                = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__all_are_inactive), 4U));
            vlSelfRef.__PVT__icx_rx_is_inactive_mux 
                = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__all_are_inactive), 4U));
            vlSelfRef.__PVT__ppx_tx_is_inactive_mux 
                = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__all_are_inactive), 4U));
            vlSelfRef.__PVT__icx_tx_is_inactive_mux 
                = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__all_are_inactive), 4U));
            vlSelfRef.__PVT__cc_is_inactive_mux = vlSelfRef.__PVT__all_are_inactive;
        } else {
            vlSelfRef.__PVT__ppx_rx_is_inactive_mux 
                = vlSelfRef.__PVT__i_pp_rx_is_inactive;
            vlSelfRef.__PVT__icx_rx_is_inactive_mux 
                = vlSelfRef.__PVT__i_ic_rx_is_inactive;
            vlSelfRef.__PVT__ppx_tx_is_inactive_mux 
                = vlSelfRef.__PVT__i_pp_tx_is_inactive;
            vlSelfRef.__PVT__icx_tx_is_inactive_mux 
                = vlSelfRef.__PVT__i_ic_tx_is_inactive;
            vlSelfRef.__PVT__cc_is_inactive_mux = vlSelfRef.__PVT__i_cc_is_inactive;
        }
    } else {
        vlSelfRef.__PVT__ppx_rx_is_inactive_mux = 0U;
        vlSelfRef.__PVT__icx_rx_is_inactive_mux = 0U;
        vlSelfRef.__PVT__ppx_tx_is_inactive_mux = 0U;
        vlSelfRef.__PVT__icx_tx_is_inactive_mux = 0U;
        vlSelfRef.__PVT__cc_is_inactive_mux = 0U;
    }
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__PVT__cc_is_inactive_mux;
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_rx_is_inactive_mux), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_rx_is_inactive_mux), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_rx_is_inactive_mux), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_rx_is_inactive_mux), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_rx_is_inactive_mux), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_rx_is_inactive_mux), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_rx_is_inactive_mux), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_rx_is_inactive_mux), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_tx_is_inactive_mux), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_tx_is_inactive_mux), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_tx_is_inactive_mux), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_tx_is_inactive_mux), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_tx_is_inactive_mux), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_tx_is_inactive_mux), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_tx_is_inactive_mux), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_tx_is_inactive_mux), 3U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__0(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cc_intfc_cg_en_n = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__o_tx_cg_en_n;
    vlSelfRef.__PVT__cc_ic_cg_en_n = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__o_rx_cg_en_n;
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__1(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__o_tx_cg_en_n;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ppx_rx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ppx_rx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__o_tx_cg_en_n);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__2(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__o_tx_cg_en_n;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ppx_tx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ppx_tx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__o_tx_cg_en_n);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__3(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__o_tx_cg_en_n;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__icx_rx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__icx_rx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__o_tx_cg_en_n);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__4(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__o_tx_cg_en_n;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__icx_tx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__icx_tx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__o_tx_cg_en_n);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__5(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__o_tx_cg_en_n;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ppx_rx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ppx_rx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__o_tx_cg_en_n);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__6(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__o_tx_cg_en_n;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ppx_tx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ppx_tx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__o_tx_cg_en_n);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__7(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__o_tx_cg_en_n;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__icx_rx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__icx_rx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__o_tx_cg_en_n);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__8(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__o_tx_cg_en_n;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__icx_tx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__icx_tx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__o_tx_cg_en_n);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__9(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__o_tx_cg_en_n;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ppx_rx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ppx_rx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__o_tx_cg_en_n);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__10(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__o_tx_cg_en_n;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ppx_tx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ppx_tx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__o_tx_cg_en_n);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__11(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__o_tx_cg_en_n;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__icx_rx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__icx_rx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__o_tx_cg_en_n);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__12(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__o_tx_cg_en_n;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__icx_tx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__icx_tx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__o_tx_cg_en_n);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__13(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__o_tx_cg_en_n;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ppx_rx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ppx_rx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__o_tx_cg_en_n);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__14(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__14\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__o_tx_cg_en_n;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ppx_tx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ppx_tx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__o_tx_cg_en_n);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__15(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__15\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__o_tx_cg_en_n;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__icx_rx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__icx_rx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__o_tx_cg_en_n);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__16(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__16\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__o_tx_cg_en_n;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__icx_tx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__icx_tx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__o_tx_cg_en_n);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__17(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__17\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_intfc_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__o_ic_rx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_intfc_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__18(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__18\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_ic_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__o_ic_rx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_ic_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__19(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__19\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_intfc_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__o_ic_tx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_intfc_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__20(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__20\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_ic_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__o_ic_tx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_ic_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__21(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__21\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_intfc_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__o_ic_rx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_intfc_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__22(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__22\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_ic_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__o_ic_rx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_ic_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__23(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__23\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_intfc_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__o_ic_tx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_intfc_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__24(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__24\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_ic_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__o_ic_tx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_ic_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__25(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__25\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_intfc_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__o_ic_rx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_intfc_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__26(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__26\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_ic_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__o_ic_rx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_ic_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__27(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__27\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_intfc_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__o_ic_tx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_intfc_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__28(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__28\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_ic_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__o_ic_tx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_ic_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__29(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__29\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_intfc_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__o_ic_rx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_intfc_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__30(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__30\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_ic_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__o_ic_rx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_ic_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__31(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__31\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_intfc_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__o_ic_tx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_intfc_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__32(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__32\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_ic_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__o_ic_tx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_ic_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__33(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__33\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__o_pp_tx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__34(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__34\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__o_pp_tx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__35(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__35\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_intfc_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__o_pp_tx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_intfc_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__36(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__36\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__o_pp_tx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__37(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__37\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__o_pp_rx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__38(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__38\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__o_pp_rx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__39(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__39\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_intfc_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__o_pp_rx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_intfc_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__40(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__40\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__o_pp_rx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__41(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__41\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_ic_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__o_pp_rx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_ic_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__42(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__42\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_ic_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__o_pp_rx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_ic_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__43(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__43\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_ic_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__o_pp_rx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_ic_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__44(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__44\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_ic_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__o_pp_rx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_ic_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__45(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__45\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_ic_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__o_pp_tx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_ic_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__46(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__46\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_ic_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__o_pp_tx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_ic_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__47(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__47\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_ic_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__o_pp_tx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_ic_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__48(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__48\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_ic_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_ic_clk.__PVT__o_gated_clk;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__o_pp_tx_ic_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_ic_clk__o_gated_clk);
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__49(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__49\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_cc_ic_gclk = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cg_cc_ic_clk.__PVT__o_gated_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__0(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_rx_intfc_cg_en_n), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_rx_intfc_cg_en_n), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_intfc_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_rx_intfc_cg_en_n), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_rx_intfc_cg_en_n), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_ic_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_rx_ic_cg_en_n), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_ic_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_rx_ic_cg_en_n), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_ic_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_rx_ic_cg_en_n), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_ic_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_rx_ic_cg_en_n), 3U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_intfc_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_intfc_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_intfc_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_intfc_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_intfc_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_ic_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_rx_ic_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_ic_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_rx_ic_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_ic_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_rx_ic_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_ic_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_rx_ic_clk__i_cg_enable_n;
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__1(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_ic_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_tx_ic_cg_en_n), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_ic_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_tx_ic_cg_en_n), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_ic_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_tx_ic_cg_en_n), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_ic_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_tx_ic_cg_en_n), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_tx_intfc_cg_en_n), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_tx_intfc_cg_en_n), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_intfc_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_tx_intfc_cg_en_n), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_tx_intfc_cg_en_n), 3U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_ic_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_ic_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_ic_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_ic_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_ic_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_ic_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_ic_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_ic_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_ppx_tx_intfc_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_ppx_tx_intfc_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_intfc_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_ppx_tx_intfc_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_ppx_tx_intfc_clk__i_cg_enable_n;
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__2(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_intfc_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_rx_intfc_cg_en_n), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_intfc_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_rx_intfc_cg_en_n), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_intfc_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_rx_intfc_cg_en_n), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_intfc_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_rx_intfc_cg_en_n), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_ic_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_rx_ic_cg_en_n), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_ic_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_rx_ic_cg_en_n), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_ic_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_rx_ic_cg_en_n), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_ic_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_rx_ic_cg_en_n), 3U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_intfc_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_intfc_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_intfc_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_intfc_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_intfc_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_intfc_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_intfc_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_intfc_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_ic_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_ic_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_ic_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_ic_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_ic_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_ic_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_ic_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_ic_clk__i_cg_enable_n;
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__3(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_ic_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_tx_ic_cg_en_n), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_ic_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_tx_ic_cg_en_n), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_ic_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_tx_ic_cg_en_n), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_ic_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_tx_ic_cg_en_n), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_intfc_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_tx_intfc_cg_en_n), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_intfc_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_tx_intfc_cg_en_n), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_intfc_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_tx_intfc_cg_en_n), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_intfc_clk__i_cg_enable_n 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_tx_intfc_cg_en_n), 3U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_ic_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_ic_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_ic_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_ic_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_ic_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_ic_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_ic_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_ic_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_intfc_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_intfc_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_intfc_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_intfc_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_intfc_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_intfc_clk__i_cg_enable_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_intfc_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_intfc_clk__i_cg_enable_n;
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__50(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__50\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cg_cc_ic_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__PVT__cc_ic_cg_en_n;
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__4(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__PVT__i_activate_cc;
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__5(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_pp_tx), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_pp_tx), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_pp_tx), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_pp_tx), 3U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__i_activate_block;
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__6(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__all_are_inactive = ((((VL_REDAND_II(4, (IData)(vlSelfRef.__PVT__i_pp_rx_is_inactive)) 
                                            & VL_REDAND_II(4, (IData)(vlSelfRef.__PVT__i_ic_rx_is_inactive))) 
                                           & VL_REDAND_II(4, (IData)(vlSelfRef.__PVT__i_pp_tx_is_inactive))) 
                                          & VL_REDAND_II(4, (IData)(vlSelfRef.__PVT__i_ic_tx_is_inactive))) 
                                         & (IData)(vlSelfRef.__PVT__i_cc_is_inactive));
    if (vlSelfRef.__PVT__clock_gating_enable) {
        if (vlSelfRef.__PVT__clock_gating_mode) {
            vlSelfRef.__PVT__ppx_rx_is_inactive_mux 
                = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__all_are_inactive), 4U));
            vlSelfRef.__PVT__icx_rx_is_inactive_mux 
                = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__all_are_inactive), 4U));
            vlSelfRef.__PVT__ppx_tx_is_inactive_mux 
                = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__all_are_inactive), 4U));
            vlSelfRef.__PVT__icx_tx_is_inactive_mux 
                = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__all_are_inactive), 4U));
            vlSelfRef.__PVT__cc_is_inactive_mux = vlSelfRef.__PVT__all_are_inactive;
        } else {
            vlSelfRef.__PVT__ppx_rx_is_inactive_mux 
                = vlSelfRef.__PVT__i_pp_rx_is_inactive;
            vlSelfRef.__PVT__icx_rx_is_inactive_mux 
                = vlSelfRef.__PVT__i_ic_rx_is_inactive;
            vlSelfRef.__PVT__ppx_tx_is_inactive_mux 
                = vlSelfRef.__PVT__i_pp_tx_is_inactive;
            vlSelfRef.__PVT__icx_tx_is_inactive_mux 
                = vlSelfRef.__PVT__i_ic_tx_is_inactive;
            vlSelfRef.__PVT__cc_is_inactive_mux = vlSelfRef.__PVT__i_cc_is_inactive;
        }
    } else {
        vlSelfRef.__PVT__ppx_rx_is_inactive_mux = 0U;
        vlSelfRef.__PVT__icx_rx_is_inactive_mux = 0U;
        vlSelfRef.__PVT__ppx_tx_is_inactive_mux = 0U;
        vlSelfRef.__PVT__icx_tx_is_inactive_mux = 0U;
        vlSelfRef.__PVT__cc_is_inactive_mux = 0U;
    }
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__PVT__cc_is_inactive_mux;
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_rx_is_inactive_mux), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_rx_is_inactive_mux), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_rx_is_inactive_mux), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_rx_is_inactive_mux), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_rx_is_inactive_mux), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_rx_is_inactive_mux), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_rx_is_inactive_mux), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_rx_is_inactive_mux), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_tx_is_inactive_mux), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_tx_is_inactive_mux), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_tx_is_inactive_mux), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__ppx_tx_is_inactive_mux), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_tx_is_inactive_mux), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_tx_is_inactive_mux), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_tx_is_inactive_mux), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_tx_is_inactive_mux), 3U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_block_is_inactive 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__i_block_is_inactive;
}
