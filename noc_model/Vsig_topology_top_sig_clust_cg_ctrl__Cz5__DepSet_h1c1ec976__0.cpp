// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_clust_cg_ctrl__Cz5.h"

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__inactivity_timer = vlSelfRef.__PVT__inactivity_timer;
    vlSelfRef.__Vdly__rx_cg_en_n = vlSelfRef.__PVT__rx_cg_en_n;
    if (vlSelfRef.__PVT__i_rst_n_rx_clk) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__i_block_is_inactive)) 
                   | (IData)(vlSelfRef.__PVT__i_activate_block)))) {
            vlSelfRef.__Vdly__inactivity_timer = 0U;
        } else if (((IData)(vlSelfRef.__PVT__inactivity_timer) 
                    < (IData)(vlSelfRef.__PVT__i_inactivity_count))) {
            vlSelfRef.__Vdly__inactivity_timer = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__inactivity_timer)));
        }
    } else {
        vlSelfRef.__Vdly__inactivity_timer = 0U;
    }
    vlSelfRef.__Vdly__rx_cg_en_n = ((1U & (~ (IData)(vlSelfRef.__PVT__i_rst_n_rx_clk))) 
                                    || ((IData)(vlSelfRef.__PVT__i_activate_block) 
                                        || ((1U & (~ (IData)(vlSelfRef.__PVT__clk_disable))) 
                                            && (IData)(vlSelfRef.__PVT__rx_cg_en_n))));
    vlSelfRef.__PVT__inactivity_timer = vlSelfRef.__Vdly__inactivity_timer;
    vlSelfRef.__PVT__rx_cg_en_n = vlSelfRef.__Vdly__rx_cg_en_n;
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__inactivity_timer = vlSelfRef.__PVT__inactivity_timer;
    vlSelfRef.__Vdly__rx_cg_en_n = vlSelfRef.__PVT__rx_cg_en_n;
    if (vlSelfRef.__PVT__i_rst_n_rx_clk) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__i_block_is_inactive)) 
                   | (IData)(vlSelfRef.__PVT__i_activate_block)))) {
            vlSelfRef.__Vdly__inactivity_timer = 0U;
        } else if (((IData)(vlSelfRef.__PVT__inactivity_timer) 
                    < (IData)(vlSelfRef.__PVT__i_inactivity_count))) {
            vlSelfRef.__Vdly__inactivity_timer = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__inactivity_timer)));
        }
    } else {
        vlSelfRef.__Vdly__inactivity_timer = 0U;
    }
    vlSelfRef.__Vdly__rx_cg_en_n = ((1U & (~ (IData)(vlSelfRef.__PVT__i_rst_n_rx_clk))) 
                                    || ((IData)(vlSelfRef.__PVT__i_activate_block) 
                                        || ((1U & (~ (IData)(vlSelfRef.__PVT__clk_disable))) 
                                            && (IData)(vlSelfRef.__PVT__rx_cg_en_n))));
    vlSelfRef.__PVT__inactivity_timer = vlSelfRef.__Vdly__inactivity_timer;
    vlSelfRef.__PVT__rx_cg_en_n = vlSelfRef.__Vdly__rx_cg_en_n;
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__inactivity_timer = vlSelfRef.__PVT__inactivity_timer;
    vlSelfRef.__Vdly__rx_cg_en_n = vlSelfRef.__PVT__rx_cg_en_n;
    if (vlSelfRef.__PVT__i_rst_n_rx_clk) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__i_block_is_inactive)) 
                   | (IData)(vlSelfRef.__PVT__i_activate_block)))) {
            vlSelfRef.__Vdly__inactivity_timer = 0U;
        } else if (((IData)(vlSelfRef.__PVT__inactivity_timer) 
                    < (IData)(vlSelfRef.__PVT__i_inactivity_count))) {
            vlSelfRef.__Vdly__inactivity_timer = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__inactivity_timer)));
        }
    } else {
        vlSelfRef.__Vdly__inactivity_timer = 0U;
    }
    vlSelfRef.__Vdly__rx_cg_en_n = ((1U & (~ (IData)(vlSelfRef.__PVT__i_rst_n_rx_clk))) 
                                    || ((IData)(vlSelfRef.__PVT__i_activate_block) 
                                        || ((1U & (~ (IData)(vlSelfRef.__PVT__clk_disable))) 
                                            && (IData)(vlSelfRef.__PVT__rx_cg_en_n))));
    vlSelfRef.__PVT__inactivity_timer = vlSelfRef.__Vdly__inactivity_timer;
    vlSelfRef.__PVT__rx_cg_en_n = vlSelfRef.__Vdly__rx_cg_en_n;
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__inactivity_timer = vlSelfRef.__PVT__inactivity_timer;
    vlSelfRef.__Vdly__rx_cg_en_n = vlSelfRef.__PVT__rx_cg_en_n;
    if (vlSelfRef.__PVT__i_rst_n_rx_clk) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__i_block_is_inactive)) 
                   | (IData)(vlSelfRef.__PVT__i_activate_block)))) {
            vlSelfRef.__Vdly__inactivity_timer = 0U;
        } else if (((IData)(vlSelfRef.__PVT__inactivity_timer) 
                    < (IData)(vlSelfRef.__PVT__i_inactivity_count))) {
            vlSelfRef.__Vdly__inactivity_timer = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__inactivity_timer)));
        }
    } else {
        vlSelfRef.__Vdly__inactivity_timer = 0U;
    }
    vlSelfRef.__Vdly__rx_cg_en_n = ((1U & (~ (IData)(vlSelfRef.__PVT__i_rst_n_rx_clk))) 
                                    || ((IData)(vlSelfRef.__PVT__i_activate_block) 
                                        || ((1U & (~ (IData)(vlSelfRef.__PVT__clk_disable))) 
                                            && (IData)(vlSelfRef.__PVT__rx_cg_en_n))));
    vlSelfRef.__PVT__inactivity_timer = vlSelfRef.__Vdly__inactivity_timer;
    vlSelfRef.__PVT__rx_cg_en_n = vlSelfRef.__Vdly__rx_cg_en_n;
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__inactivity_timer = vlSelfRef.__PVT__inactivity_timer;
    vlSelfRef.__Vdly__rx_cg_en_n = vlSelfRef.__PVT__rx_cg_en_n;
    if (vlSelfRef.__PVT__i_rst_n_rx_clk) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__i_block_is_inactive)) 
                   | (IData)(vlSelfRef.__PVT__i_activate_block)))) {
            vlSelfRef.__Vdly__inactivity_timer = 0U;
        } else if (((IData)(vlSelfRef.__PVT__inactivity_timer) 
                    < (IData)(vlSelfRef.__PVT__i_inactivity_count))) {
            vlSelfRef.__Vdly__inactivity_timer = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__inactivity_timer)));
        }
    } else {
        vlSelfRef.__Vdly__inactivity_timer = 0U;
    }
    vlSelfRef.__Vdly__rx_cg_en_n = ((1U & (~ (IData)(vlSelfRef.__PVT__i_rst_n_rx_clk))) 
                                    || ((IData)(vlSelfRef.__PVT__i_activate_block) 
                                        || ((1U & (~ (IData)(vlSelfRef.__PVT__clk_disable))) 
                                            && (IData)(vlSelfRef.__PVT__rx_cg_en_n))));
    vlSelfRef.__PVT__inactivity_timer = vlSelfRef.__Vdly__inactivity_timer;
    vlSelfRef.__PVT__rx_cg_en_n = vlSelfRef.__Vdly__rx_cg_en_n;
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__inactivity_timer = vlSelfRef.__PVT__inactivity_timer;
    vlSelfRef.__Vdly__rx_cg_en_n = vlSelfRef.__PVT__rx_cg_en_n;
    if (vlSelfRef.__PVT__i_rst_n_rx_clk) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__i_block_is_inactive)) 
                   | (IData)(vlSelfRef.__PVT__i_activate_block)))) {
            vlSelfRef.__Vdly__inactivity_timer = 0U;
        } else if (((IData)(vlSelfRef.__PVT__inactivity_timer) 
                    < (IData)(vlSelfRef.__PVT__i_inactivity_count))) {
            vlSelfRef.__Vdly__inactivity_timer = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__inactivity_timer)));
        }
    } else {
        vlSelfRef.__Vdly__inactivity_timer = 0U;
    }
    vlSelfRef.__Vdly__rx_cg_en_n = ((1U & (~ (IData)(vlSelfRef.__PVT__i_rst_n_rx_clk))) 
                                    || ((IData)(vlSelfRef.__PVT__i_activate_block) 
                                        || ((1U & (~ (IData)(vlSelfRef.__PVT__clk_disable))) 
                                            && (IData)(vlSelfRef.__PVT__rx_cg_en_n))));
    vlSelfRef.__PVT__inactivity_timer = vlSelfRef.__Vdly__inactivity_timer;
    vlSelfRef.__PVT__rx_cg_en_n = vlSelfRef.__Vdly__rx_cg_en_n;
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__inactivity_timer = vlSelfRef.__PVT__inactivity_timer;
    vlSelfRef.__Vdly__rx_cg_en_n = vlSelfRef.__PVT__rx_cg_en_n;
    if (vlSelfRef.__PVT__i_rst_n_rx_clk) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__i_block_is_inactive)) 
                   | (IData)(vlSelfRef.__PVT__i_activate_block)))) {
            vlSelfRef.__Vdly__inactivity_timer = 0U;
        } else if (((IData)(vlSelfRef.__PVT__inactivity_timer) 
                    < (IData)(vlSelfRef.__PVT__i_inactivity_count))) {
            vlSelfRef.__Vdly__inactivity_timer = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__inactivity_timer)));
        }
    } else {
        vlSelfRef.__Vdly__inactivity_timer = 0U;
    }
    vlSelfRef.__Vdly__rx_cg_en_n = ((1U & (~ (IData)(vlSelfRef.__PVT__i_rst_n_rx_clk))) 
                                    || ((IData)(vlSelfRef.__PVT__i_activate_block) 
                                        || ((1U & (~ (IData)(vlSelfRef.__PVT__clk_disable))) 
                                            && (IData)(vlSelfRef.__PVT__rx_cg_en_n))));
    vlSelfRef.__PVT__inactivity_timer = vlSelfRef.__Vdly__inactivity_timer;
    vlSelfRef.__PVT__rx_cg_en_n = vlSelfRef.__Vdly__rx_cg_en_n;
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__inactivity_timer = vlSelfRef.__PVT__inactivity_timer;
    vlSelfRef.__Vdly__rx_cg_en_n = vlSelfRef.__PVT__rx_cg_en_n;
    if (vlSelfRef.__PVT__i_rst_n_rx_clk) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__i_block_is_inactive)) 
                   | (IData)(vlSelfRef.__PVT__i_activate_block)))) {
            vlSelfRef.__Vdly__inactivity_timer = 0U;
        } else if (((IData)(vlSelfRef.__PVT__inactivity_timer) 
                    < (IData)(vlSelfRef.__PVT__i_inactivity_count))) {
            vlSelfRef.__Vdly__inactivity_timer = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__inactivity_timer)));
        }
    } else {
        vlSelfRef.__Vdly__inactivity_timer = 0U;
    }
    vlSelfRef.__Vdly__rx_cg_en_n = ((1U & (~ (IData)(vlSelfRef.__PVT__i_rst_n_rx_clk))) 
                                    || ((IData)(vlSelfRef.__PVT__i_activate_block) 
                                        || ((1U & (~ (IData)(vlSelfRef.__PVT__clk_disable))) 
                                            && (IData)(vlSelfRef.__PVT__rx_cg_en_n))));
    vlSelfRef.__PVT__inactivity_timer = vlSelfRef.__Vdly__inactivity_timer;
    vlSelfRef.__PVT__rx_cg_en_n = vlSelfRef.__Vdly__rx_cg_en_n;
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__inactivity_timer = vlSelfRef.__PVT__inactivity_timer;
    vlSelfRef.__Vdly__rx_cg_en_n = vlSelfRef.__PVT__rx_cg_en_n;
    if (vlSelfRef.__PVT__i_rst_n_rx_clk) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__i_block_is_inactive)) 
                   | (IData)(vlSelfRef.__PVT__i_activate_block)))) {
            vlSelfRef.__Vdly__inactivity_timer = 0U;
        } else if (((IData)(vlSelfRef.__PVT__inactivity_timer) 
                    < (IData)(vlSelfRef.__PVT__i_inactivity_count))) {
            vlSelfRef.__Vdly__inactivity_timer = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__inactivity_timer)));
        }
    } else {
        vlSelfRef.__Vdly__inactivity_timer = 0U;
    }
    vlSelfRef.__Vdly__rx_cg_en_n = ((1U & (~ (IData)(vlSelfRef.__PVT__i_rst_n_rx_clk))) 
                                    || ((IData)(vlSelfRef.__PVT__i_activate_block) 
                                        || ((1U & (~ (IData)(vlSelfRef.__PVT__clk_disable))) 
                                            && (IData)(vlSelfRef.__PVT__rx_cg_en_n))));
    vlSelfRef.__PVT__inactivity_timer = vlSelfRef.__Vdly__inactivity_timer;
    vlSelfRef.__PVT__rx_cg_en_n = vlSelfRef.__Vdly__rx_cg_en_n;
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__inactivity_timer = vlSelfRef.__PVT__inactivity_timer;
    vlSelfRef.__Vdly__rx_cg_en_n = vlSelfRef.__PVT__rx_cg_en_n;
    if (vlSelfRef.__PVT__i_rst_n_rx_clk) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__i_block_is_inactive)) 
                   | (IData)(vlSelfRef.__PVT__i_activate_block)))) {
            vlSelfRef.__Vdly__inactivity_timer = 0U;
        } else if (((IData)(vlSelfRef.__PVT__inactivity_timer) 
                    < (IData)(vlSelfRef.__PVT__i_inactivity_count))) {
            vlSelfRef.__Vdly__inactivity_timer = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__inactivity_timer)));
        }
    } else {
        vlSelfRef.__Vdly__inactivity_timer = 0U;
    }
    vlSelfRef.__Vdly__rx_cg_en_n = ((1U & (~ (IData)(vlSelfRef.__PVT__i_rst_n_rx_clk))) 
                                    || ((IData)(vlSelfRef.__PVT__i_activate_block) 
                                        || ((1U & (~ (IData)(vlSelfRef.__PVT__clk_disable))) 
                                            && (IData)(vlSelfRef.__PVT__rx_cg_en_n))));
    vlSelfRef.__PVT__inactivity_timer = vlSelfRef.__Vdly__inactivity_timer;
    vlSelfRef.__PVT__rx_cg_en_n = vlSelfRef.__Vdly__rx_cg_en_n;
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__inactivity_timer = vlSelfRef.__PVT__inactivity_timer;
    vlSelfRef.__Vdly__rx_cg_en_n = vlSelfRef.__PVT__rx_cg_en_n;
    if (vlSelfRef.__PVT__i_rst_n_rx_clk) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__i_block_is_inactive)) 
                   | (IData)(vlSelfRef.__PVT__i_activate_block)))) {
            vlSelfRef.__Vdly__inactivity_timer = 0U;
        } else if (((IData)(vlSelfRef.__PVT__inactivity_timer) 
                    < (IData)(vlSelfRef.__PVT__i_inactivity_count))) {
            vlSelfRef.__Vdly__inactivity_timer = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__inactivity_timer)));
        }
    } else {
        vlSelfRef.__Vdly__inactivity_timer = 0U;
    }
    vlSelfRef.__Vdly__rx_cg_en_n = ((1U & (~ (IData)(vlSelfRef.__PVT__i_rst_n_rx_clk))) 
                                    || ((IData)(vlSelfRef.__PVT__i_activate_block) 
                                        || ((1U & (~ (IData)(vlSelfRef.__PVT__clk_disable))) 
                                            && (IData)(vlSelfRef.__PVT__rx_cg_en_n))));
    vlSelfRef.__PVT__inactivity_timer = vlSelfRef.__Vdly__inactivity_timer;
    vlSelfRef.__PVT__rx_cg_en_n = vlSelfRef.__Vdly__rx_cg_en_n;
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__inactivity_timer = vlSelfRef.__PVT__inactivity_timer;
    vlSelfRef.__Vdly__rx_cg_en_n = vlSelfRef.__PVT__rx_cg_en_n;
    if (vlSelfRef.__PVT__i_rst_n_rx_clk) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__i_block_is_inactive)) 
                   | (IData)(vlSelfRef.__PVT__i_activate_block)))) {
            vlSelfRef.__Vdly__inactivity_timer = 0U;
        } else if (((IData)(vlSelfRef.__PVT__inactivity_timer) 
                    < (IData)(vlSelfRef.__PVT__i_inactivity_count))) {
            vlSelfRef.__Vdly__inactivity_timer = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__inactivity_timer)));
        }
    } else {
        vlSelfRef.__Vdly__inactivity_timer = 0U;
    }
    vlSelfRef.__Vdly__rx_cg_en_n = ((1U & (~ (IData)(vlSelfRef.__PVT__i_rst_n_rx_clk))) 
                                    || ((IData)(vlSelfRef.__PVT__i_activate_block) 
                                        || ((1U & (~ (IData)(vlSelfRef.__PVT__clk_disable))) 
                                            && (IData)(vlSelfRef.__PVT__rx_cg_en_n))));
    vlSelfRef.__PVT__inactivity_timer = vlSelfRef.__Vdly__inactivity_timer;
    vlSelfRef.__PVT__rx_cg_en_n = vlSelfRef.__Vdly__rx_cg_en_n;
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__inactivity_timer = vlSelfRef.__PVT__inactivity_timer;
    vlSelfRef.__Vdly__rx_cg_en_n = vlSelfRef.__PVT__rx_cg_en_n;
    if (vlSelfRef.__PVT__i_rst_n_rx_clk) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__i_block_is_inactive)) 
                   | (IData)(vlSelfRef.__PVT__i_activate_block)))) {
            vlSelfRef.__Vdly__inactivity_timer = 0U;
        } else if (((IData)(vlSelfRef.__PVT__inactivity_timer) 
                    < (IData)(vlSelfRef.__PVT__i_inactivity_count))) {
            vlSelfRef.__Vdly__inactivity_timer = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__inactivity_timer)));
        }
    } else {
        vlSelfRef.__Vdly__inactivity_timer = 0U;
    }
    vlSelfRef.__Vdly__rx_cg_en_n = ((1U & (~ (IData)(vlSelfRef.__PVT__i_rst_n_rx_clk))) 
                                    || ((IData)(vlSelfRef.__PVT__i_activate_block) 
                                        || ((1U & (~ (IData)(vlSelfRef.__PVT__clk_disable))) 
                                            && (IData)(vlSelfRef.__PVT__rx_cg_en_n))));
    vlSelfRef.__PVT__inactivity_timer = vlSelfRef.__Vdly__inactivity_timer;
    vlSelfRef.__PVT__rx_cg_en_n = vlSelfRef.__Vdly__rx_cg_en_n;
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__inactivity_timer = vlSelfRef.__PVT__inactivity_timer;
    vlSelfRef.__Vdly__rx_cg_en_n = vlSelfRef.__PVT__rx_cg_en_n;
    if (vlSelfRef.__PVT__i_rst_n_rx_clk) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__i_block_is_inactive)) 
                   | (IData)(vlSelfRef.__PVT__i_activate_block)))) {
            vlSelfRef.__Vdly__inactivity_timer = 0U;
        } else if (((IData)(vlSelfRef.__PVT__inactivity_timer) 
                    < (IData)(vlSelfRef.__PVT__i_inactivity_count))) {
            vlSelfRef.__Vdly__inactivity_timer = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__inactivity_timer)));
        }
    } else {
        vlSelfRef.__Vdly__inactivity_timer = 0U;
    }
    vlSelfRef.__Vdly__rx_cg_en_n = ((1U & (~ (IData)(vlSelfRef.__PVT__i_rst_n_rx_clk))) 
                                    || ((IData)(vlSelfRef.__PVT__i_activate_block) 
                                        || ((1U & (~ (IData)(vlSelfRef.__PVT__clk_disable))) 
                                            && (IData)(vlSelfRef.__PVT__rx_cg_en_n))));
    vlSelfRef.__PVT__inactivity_timer = vlSelfRef.__Vdly__inactivity_timer;
    vlSelfRef.__PVT__rx_cg_en_n = vlSelfRef.__Vdly__rx_cg_en_n;
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__inactivity_timer = vlSelfRef.__PVT__inactivity_timer;
    vlSelfRef.__Vdly__rx_cg_en_n = vlSelfRef.__PVT__rx_cg_en_n;
    if (vlSelfRef.__PVT__i_rst_n_rx_clk) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__i_block_is_inactive)) 
                   | (IData)(vlSelfRef.__PVT__i_activate_block)))) {
            vlSelfRef.__Vdly__inactivity_timer = 0U;
        } else if (((IData)(vlSelfRef.__PVT__inactivity_timer) 
                    < (IData)(vlSelfRef.__PVT__i_inactivity_count))) {
            vlSelfRef.__Vdly__inactivity_timer = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__inactivity_timer)));
        }
    } else {
        vlSelfRef.__Vdly__inactivity_timer = 0U;
    }
    vlSelfRef.__Vdly__rx_cg_en_n = ((1U & (~ (IData)(vlSelfRef.__PVT__i_rst_n_rx_clk))) 
                                    || ((IData)(vlSelfRef.__PVT__i_activate_block) 
                                        || ((1U & (~ (IData)(vlSelfRef.__PVT__clk_disable))) 
                                            && (IData)(vlSelfRef.__PVT__rx_cg_en_n))));
    vlSelfRef.__PVT__inactivity_timer = vlSelfRef.__Vdly__inactivity_timer;
    vlSelfRef.__PVT__rx_cg_en_n = vlSelfRef.__Vdly__rx_cg_en_n;
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__inactivity_timer = vlSelfRef.__PVT__inactivity_timer;
    vlSelfRef.__Vdly__rx_cg_en_n = vlSelfRef.__PVT__rx_cg_en_n;
    if (vlSelfRef.__PVT__i_rst_n_rx_clk) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__i_block_is_inactive)) 
                   | (IData)(vlSelfRef.__PVT__i_activate_block)))) {
            vlSelfRef.__Vdly__inactivity_timer = 0U;
        } else if (((IData)(vlSelfRef.__PVT__inactivity_timer) 
                    < (IData)(vlSelfRef.__PVT__i_inactivity_count))) {
            vlSelfRef.__Vdly__inactivity_timer = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__inactivity_timer)));
        }
    } else {
        vlSelfRef.__Vdly__inactivity_timer = 0U;
    }
    vlSelfRef.__Vdly__rx_cg_en_n = ((1U & (~ (IData)(vlSelfRef.__PVT__i_rst_n_rx_clk))) 
                                    || ((IData)(vlSelfRef.__PVT__i_activate_block) 
                                        || ((1U & (~ (IData)(vlSelfRef.__PVT__clk_disable))) 
                                            && (IData)(vlSelfRef.__PVT__rx_cg_en_n))));
    vlSelfRef.__PVT__inactivity_timer = vlSelfRef.__Vdly__inactivity_timer;
    vlSelfRef.__PVT__rx_cg_en_n = vlSelfRef.__Vdly__rx_cg_en_n;
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
}

VL_INLINE_OPT void Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz5___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__inactivity_timer = vlSelfRef.__PVT__inactivity_timer;
    vlSelfRef.__Vdly__rx_cg_en_n = vlSelfRef.__PVT__rx_cg_en_n;
    if (vlSelfRef.__PVT__i_rst_n_rx_clk) {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__i_block_is_inactive)) 
                   | (IData)(vlSelfRef.__PVT__i_activate_block)))) {
            vlSelfRef.__Vdly__inactivity_timer = 0U;
        } else if (((IData)(vlSelfRef.__PVT__inactivity_timer) 
                    < (IData)(vlSelfRef.__PVT__i_inactivity_count))) {
            vlSelfRef.__Vdly__inactivity_timer = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__inactivity_timer)));
        }
    } else {
        vlSelfRef.__Vdly__inactivity_timer = 0U;
    }
    vlSelfRef.__Vdly__rx_cg_en_n = ((1U & (~ (IData)(vlSelfRef.__PVT__i_rst_n_rx_clk))) 
                                    || ((IData)(vlSelfRef.__PVT__i_activate_block) 
                                        || ((1U & (~ (IData)(vlSelfRef.__PVT__clk_disable))) 
                                            && (IData)(vlSelfRef.__PVT__rx_cg_en_n))));
    vlSelfRef.__PVT__inactivity_timer = vlSelfRef.__Vdly__inactivity_timer;
    vlSelfRef.__PVT__rx_cg_en_n = vlSelfRef.__Vdly__rx_cg_en_n;
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
}
