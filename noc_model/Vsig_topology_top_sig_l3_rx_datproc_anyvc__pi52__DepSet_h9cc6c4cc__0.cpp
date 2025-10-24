// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi62.h"
#include "Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52.h"

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__0(Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_store_fifo_0->__PVT__rstb = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__1(Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__0(Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    VL_ASSIGN_W(680,vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__flit_store_fifo_0__fifo_wrdata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__0(Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__full_flit_store_fifo_dummy = vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_full;
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_ASSIGN_W(680,vlSelfRef.__Vcellout__flit_store_fifo_0__fifo_rddata, vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_rddata);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo, vlSelfRef.__Vcellout__flit_store_fifo_0__fifo_rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__1(Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__0(Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    VL_ASSIGN_W(680,vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__flit_store_fifo_0__fifo_wrdata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__0(Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_store_fifo_0->__PVT__rstb = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__1(Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__0(Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    VL_ASSIGN_W(680,vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__flit_store_fifo_0__fifo_wrdata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__0(Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__full_flit_store_fifo_dummy = vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_full;
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_ASSIGN_W(680,vlSelfRef.__Vcellout__flit_store_fifo_0__fifo_rddata, vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_rddata);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo, vlSelfRef.__Vcellout__flit_store_fifo_0__fifo_rddata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__1(Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__0(Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi52___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    VL_ASSIGN_W(680,vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__flit_store_fifo_0__fifo_wrdata);
}
