// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_clust_cg_top.h"

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_top___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__0(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__i_block_exists 
        = vlSelfRef.__PVT__i_cc_exists;
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_ic_tx), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_ic_tx), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_ic_tx), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_ic_tx), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_ic_rx), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_ic_rx), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_ic_rx), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__i_activate_block 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_activate_ic_rx), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__i_rst_n_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_ic_intfc_clk), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__i_rst_n_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_ic_intfc_clk), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__i_rst_n_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_ic_intfc_clk), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__i_rst_n_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_ic_intfc_clk), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__i_rst_n_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_ic_intfc_clk), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__i_rst_n_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_ic_intfc_clk), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__i_rst_n_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_ic_intfc_clk), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__i_rst_n_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_ic_intfc_clk), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__i_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_intfc_clk), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__i_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_intfc_clk), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__i_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_intfc_clk), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__i_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_intfc_clk), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__i_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_intfc_clk), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__i_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_intfc_clk), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__i_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_intfc_clk), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__i_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_intfc_clk), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_intfc_clk__i_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_intfc_clk), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_intfc_clk__i_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_intfc_clk), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_intfc_clk__i_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_intfc_clk), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_intfc_clk__i_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_intfc_clk), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_intfc_clk__i_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_intfc_clk), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_intfc_clk__i_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_intfc_clk), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_intfc_clk__i_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_intfc_clk), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_intfc_clk__i_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_intfc_clk), 3U));
    vlSelfRef.__PVT__clock_gating_enable = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__i_cg_reg_ctrl_2), 0U));
    vlSelfRef.__PVT__clock_gating_mode = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__i_cg_reg_ctrl_2), 1U));
    vlSelfRef.__PVT__pp_inactivity_cntr = (0xffU & 
                                           VL_SEL_IIII(32, vlSelfRef.__PVT__i_cg_reg_ctrl_1, 0x18U, 8));
    vlSelfRef.__PVT__ic_inactivity_cntr = (0xffU & 
                                           VL_SEL_IIII(32, vlSelfRef.__PVT__i_cg_reg_ctrl_1, 0x10U, 8));
    vlSelfRef.__PVT__cc_inactivity_cntr = (0xffU & 
                                           VL_SEL_IIII(32, vlSelfRef.__PVT__i_cg_reg_ctrl_1, 8U, 8));
    vlSelfRef.__PVT__cluster_inactivity_counter = (0xffU 
                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__i_cg_reg_ctrl_1, 0U, 8));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__i_block_exists 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_exists), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__i_block_exists 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_exists), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__i_block_exists 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_exists), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__i_block_exists 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_exists), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__i_block_exists 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_exists), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__i_block_exists 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_exists), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__i_block_exists 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_exists), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__i_block_exists 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_ic_exists), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_exists 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_exists), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_exists 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_exists), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_exists 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_exists), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_exists 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_exists), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_exists 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_exists), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_exists 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_exists), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_exists 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_exists), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_exists 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_exists), 3U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__i_activate_block;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__i_rst_n_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__i_rst_n_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__i_rst_n_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__i_rst_n_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__i_rst_n_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__i_rst_n_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__i_rst_n_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__i_rst_n_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__i_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__i_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__i_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__i_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__i_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__i_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__i_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__i_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_intfc_clk.__PVT__i_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_intfc_clk__i_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_intfc_clk.__PVT__i_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_intfc_clk__i_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_intfc_clk.__PVT__i_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_intfc_clk__i_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_intfc_clk.__PVT__i_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_intfc_clk__i_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_intfc_clk.__PVT__i_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_intfc_clk__i_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_intfc_clk.__PVT__i_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_intfc_clk__i_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_intfc_clk.__PVT__i_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_intfc_clk__i_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_intfc_clk.__PVT__i_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_intfc_clk__i_clk;
    if (vlSelfRef.__PVT__clock_gating_mode) {
        vlSelfRef.__PVT__pp_inactivity_cntr_mux = vlSelfRef.__PVT__cluster_inactivity_counter;
        vlSelfRef.__PVT__ic_inactivity_cntr_mux = vlSelfRef.__PVT__cluster_inactivity_counter;
        vlSelfRef.__PVT__cc_inactivity_cntr_mux = vlSelfRef.__PVT__cluster_inactivity_counter;
    } else {
        vlSelfRef.__PVT__pp_inactivity_cntr_mux = vlSelfRef.__PVT__pp_inactivity_cntr;
        vlSelfRef.__PVT__ic_inactivity_cntr_mux = vlSelfRef.__PVT__ic_inactivity_cntr;
        vlSelfRef.__PVT__cc_inactivity_cntr_mux = vlSelfRef.__PVT__cc_inactivity_cntr;
    }
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_block_exists 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__i_block_exists;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_block_exists 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__i_block_exists;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_block_exists 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__i_block_exists;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_block_exists 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__i_block_exists;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_block_exists 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__i_block_exists;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_block_exists 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__i_block_exists;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_block_exists 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__i_block_exists;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_block_exists 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__i_block_exists;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_block_exists 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_exists;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_block_exists 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_exists;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_block_exists 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_exists;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_block_exists 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_exists;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_block_exists 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_exists;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_block_exists 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_exists;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_block_exists 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__i_block_exists;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_block_exists 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__i_block_exists;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__i_inactivity_count 
        = vlSelfRef.__PVT__cc_inactivity_cntr_mux;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_inactivity_count 
        = vlSelfRef.__PVT__pp_inactivity_cntr_mux;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_inactivity_count 
        = vlSelfRef.__PVT__pp_inactivity_cntr_mux;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_inactivity_count 
        = vlSelfRef.__PVT__pp_inactivity_cntr_mux;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_inactivity_count 
        = vlSelfRef.__PVT__pp_inactivity_cntr_mux;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_inactivity_count 
        = vlSelfRef.__PVT__pp_inactivity_cntr_mux;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_inactivity_count 
        = vlSelfRef.__PVT__pp_inactivity_cntr_mux;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_inactivity_count 
        = vlSelfRef.__PVT__pp_inactivity_cntr_mux;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_inactivity_count 
        = vlSelfRef.__PVT__pp_inactivity_cntr_mux;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_inactivity_count 
        = vlSelfRef.__PVT__ic_inactivity_cntr_mux;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_inactivity_count 
        = vlSelfRef.__PVT__ic_inactivity_cntr_mux;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_inactivity_count 
        = vlSelfRef.__PVT__ic_inactivity_cntr_mux;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_inactivity_count 
        = vlSelfRef.__PVT__ic_inactivity_cntr_mux;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_inactivity_count 
        = vlSelfRef.__PVT__ic_inactivity_cntr_mux;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_inactivity_count 
        = vlSelfRef.__PVT__ic_inactivity_cntr_mux;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_inactivity_count 
        = vlSelfRef.__PVT__ic_inactivity_cntr_mux;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_inactivity_count 
        = vlSelfRef.__PVT__ic_inactivity_cntr_mux;
}

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_top___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__1(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cc_intfc_cg_en_n = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__o_tx_cg_en_n;
    vlSelfRef.__PVT__cc_ic_cg_en_n = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_intfc_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_intfc_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_intfc_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_intfc_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_intfc_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_intfc_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_intfc_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_intfc_clk__o_gated_clk 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_intfc_clk.__PVT__o_gated_clk;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__o_tx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__o_tx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__o_tx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__o_tx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__o_tx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__o_tx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__o_tx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__o_tx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__o_tx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__o_tx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__o_tx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__o_tx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__o_tx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__o_tx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__o_tx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__o_rx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__o_rx_cg_en_n;
    vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__o_tx_cg_en_n 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__o_tx_cg_en_n;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__PVT__i_rst_n_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__PVT__i_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl.__PVT__i_rx_clk 
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
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_rst_n_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_pp_intfc_clk), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__i_rst_n_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_pp_intfc_clk), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_rst_n_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_pp_intfc_clk), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__i_rst_n_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_pp_intfc_clk), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_rst_n_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_pp_intfc_clk), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__i_rst_n_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_pp_intfc_clk), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__i_rst_n_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_rst_n_pp_intfc_clk), 3U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__i_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 0U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__i_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 1U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__i_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_tx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 2U));
    vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__i_rx_clk 
        = (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__i_pp_intfc_clk), 3U));
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
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cg_cc_ic_clk.__PVT__i_cg_enable_n 
        = vlSelfRef.__PVT__cc_ic_cg_en_n;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__o_ic_rx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_rx_intfc_clk__o_gated_clk);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__o_ic_tx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_cg_icx_tx_intfc_clk__o_gated_clk);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__o_ic_rx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_rx_intfc_clk__o_gated_clk);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__o_ic_tx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_cg_icx_tx_intfc_clk__o_gated_clk);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__o_ic_rx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_rx_intfc_clk__o_gated_clk);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__o_ic_tx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_cg_icx_tx_intfc_clk__o_gated_clk);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__o_ic_rx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_rx_intfc_clk__o_gated_clk);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__o_ic_tx_intfc_gclk, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_cg_icx_tx_intfc_clk__o_gated_clk);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__icx_rx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__icx_rx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__o_tx_cg_en_n);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__icx_tx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__icx_tx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__o_tx_cg_en_n);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__icx_rx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__icx_rx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__o_tx_cg_en_n);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__icx_tx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__icx_tx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__o_tx_cg_en_n);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__icx_rx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__icx_rx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__o_tx_cg_en_n);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__icx_tx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__icx_tx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__o_tx_cg_en_n);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__icx_rx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__icx_rx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__o_tx_cg_en_n);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__icx_tx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__icx_tx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__o_tx_cg_en_n);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ppx_rx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ppx_rx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__o_tx_cg_en_n);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ppx_tx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ppx_tx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__o_tx_cg_en_n);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ppx_rx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ppx_rx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__o_tx_cg_en_n);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ppx_tx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ppx_tx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__o_tx_cg_en_n);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ppx_rx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ppx_rx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__o_tx_cg_en_n);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ppx_tx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ppx_tx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__o_tx_cg_en_n);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ppx_rx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ppx_rx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__o_tx_cg_en_n);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ppx_tx_ic_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__o_rx_cg_en_n);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ppx_tx_intfc_cg_en_n, vlSelfRef.__Vcellout__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__o_tx_cg_en_n);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__i_rst_n_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_rst_n_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__i_rst_n_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_rst_n_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__i_rst_n_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_rst_n_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rst_n_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__i_rst_n_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_rst_n_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__i_rst_n_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__i_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__i_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__i_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__i_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__i_rx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl.__PVT__i_tx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__i_tx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl.__PVT__i_rx_clk 
        = vlSelfRef.__Vcellinp__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__i_rx_clk;
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

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_top___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__2(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_top___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__0(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_top___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__1(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl.__PVT__i_activate_block 
        = vlSelfRef.__PVT__i_activate_cc;
}

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_top___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__2(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_top___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__3(Vsig_topology_top_sig_clust_cg_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_clust_cg_top___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__3\n"); );
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
