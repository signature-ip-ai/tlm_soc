// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop__pi51.h"

VL_INLINE_OPT void Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc0__0(Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_store_fifo_0->__PVT__rstb = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc0__1(Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc0__0(Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo, vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_rddata);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_s, vlSelfRef.__PVT__read_data_fifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc0__1(Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc0__3(Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__ic_RX_FLIT_s, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(73,vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc1__0(Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_store_fifo_0->__PVT__rstb = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc1__1(Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc1__0(Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo, vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_rddata);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_s, vlSelfRef.__PVT__read_data_fifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc1__1(Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc1__3(Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_rspproc_anyvc__pi48___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc1__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__ic_RX_FLIT_s, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(73,vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
}
