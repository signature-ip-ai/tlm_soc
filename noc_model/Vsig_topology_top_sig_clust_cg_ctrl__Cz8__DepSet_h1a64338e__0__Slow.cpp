// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_clust_cg_ctrl__Cz8.h"

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__inst_cc_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
}

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_rx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
}

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_ppx_tx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
}

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_rx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
}

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__0__KET____DOT__inst_icx_tx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
}

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_rx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
}

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_ppx_tx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
}

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_rx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
}

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__1__KET____DOT__inst_icx_tx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
}

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_rx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
}

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_ppx_tx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
}

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_rx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
}

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__2__KET____DOT__inst_icx_tx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
}

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_rx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
}

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_ppx_tx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
}

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_rx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
}

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__0(Vsig_topology_top_sig_clust_cg_ctrl__Cz8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz8___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_clust_cg_top_0__gen_inst_cg_ctlr__BRA__3__KET____DOT__inst_icx_tx_cg_ctrl__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_rx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__o_tx_cg_en_n = ((IData)(vlSelfRef.__PVT__rx_cg_en_n) 
                                     & (IData)(vlSelfRef.__PVT__i_block_exists));
    vlSelfRef.__PVT__clk_disable = ((IData)(vlSelfRef.__PVT__inactivity_timer) 
                                    == (IData)(vlSelfRef.__PVT__i_inactivity_count));
}

VL_ATTR_COLD void Vsig_topology_top_sig_clust_cg_ctrl__Cz8___ctor_var_reset(Vsig_topology_top_sig_clust_cg_ctrl__Cz8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_clust_cg_ctrl__Cz8___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__i_rx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15491278445792133634ull);
    vlSelf->__PVT__i_rst_n_rx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6733609189776550967ull);
    vlSelf->__PVT__i_tx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9895968260897322955ull);
    vlSelf->__PVT__i_rst_n_tx_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15452495942400951400ull);
    vlSelf->__PVT__i_block_exists = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17887487151315784088ull);
    vlSelf->__PVT__i_block_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10667146992207901226ull);
    vlSelf->__PVT__i_activate_block = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2816899802525094869ull);
    vlSelf->__PVT__i_inactivity_count = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 489865452984655993ull);
    vlSelf->__PVT__o_rx_cg_en_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6023563584117982669ull);
    vlSelf->__PVT__o_tx_cg_en_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10067572170120499167ull);
    vlSelf->__PVT__inactivity_timer = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16249076910173549788ull);
    vlSelf->__PVT__clk_disable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15312097416523538279ull);
    vlSelf->__PVT__rx_cg_en_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17267530077113302390ull);
    vlSelf->__Vdly__inactivity_timer = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15122194131067608674ull);
    vlSelf->__Vdly__rx_cg_en_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17292409642803655841ull);
}
