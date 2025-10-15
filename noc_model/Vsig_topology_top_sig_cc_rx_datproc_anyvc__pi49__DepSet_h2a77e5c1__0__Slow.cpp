// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0(Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_store_fifo_0->__PVT__restore_rdptr = 0U;
    vlSelf->__PVT__flit_store_fifo_0->__PVT__snapshot_rdptr = 0U;
    vlSelfRef.__PVT__my_topology_x = 0U;
    vlSelfRef.__PVT__my_topology_y = 0U;
    vlSelfRef.__PVT__tgt_topology_x = 0U;
    vlSelfRef.__PVT__tgt_topology_y = 0U;
    vlSelfRef.__PVT__w_tgt_ucie_bridge_info = 0U;
    vlSelfRef.__PVT__myport_id = 4U;
    vlSelfRef.__PVT__creditfifo_hasroom = 1U;
    vlSelfRef.__PVT__full_credit_fifo = 0U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__0(Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ucie_bridge_cluster_only_x = (7U 
                                                   & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__w_tgt_ucie_bridge_info), 3U, 3));
    vlSelfRef.__PVT__ucie_bridge_cluster_only_y = (7U 
                                                   & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__w_tgt_ucie_bridge_info), 7U, 3));
    vlSelfRef.__PVT__ucie_bridge_port_drxn_only = (7U 
                                                   & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__w_tgt_ucie_bridge_info), 0U, 3));
    vlSelfRef.__PVT__mismatched_topology_ids = (((IData)(vlSelfRef.__PVT__my_topology_x) 
                                                 != (IData)(vlSelfRef.__PVT__tgt_topology_x)) 
                                                | ((IData)(vlSelfRef.__PVT__my_topology_y) 
                                                   != (IData)(vlSelfRef.__PVT__tgt_topology_y)));
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_pyld, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_empty;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__1(Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__Vcellout__flit_store_fifo_0__fifo_rddata, vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_rddata);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo, vlSelfRef.__Vcellout__flit_store_fifo_0__fifo_rddata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__3(Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_store_fifo_0->__PVT__rstb = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__4(Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1(Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_store_fifo_0->__PVT__restore_rdptr = 0U;
    vlSelf->__PVT__flit_store_fifo_0->__PVT__snapshot_rdptr = 0U;
    vlSelfRef.__PVT__my_topology_x = 0U;
    vlSelfRef.__PVT__my_topology_y = 0U;
    vlSelfRef.__PVT__tgt_topology_x = 0U;
    vlSelfRef.__PVT__tgt_topology_y = 0U;
    vlSelfRef.__PVT__w_tgt_ucie_bridge_info = 0U;
    vlSelfRef.__PVT__myport_id = 4U;
    vlSelfRef.__PVT__creditfifo_hasroom = 1U;
    vlSelfRef.__PVT__full_credit_fifo = 0U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__0(Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ucie_bridge_cluster_only_x = (7U 
                                                   & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__w_tgt_ucie_bridge_info), 3U, 3));
    vlSelfRef.__PVT__ucie_bridge_cluster_only_y = (7U 
                                                   & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__w_tgt_ucie_bridge_info), 7U, 3));
    vlSelfRef.__PVT__ucie_bridge_port_drxn_only = (7U 
                                                   & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__w_tgt_ucie_bridge_info), 0U, 3));
    vlSelfRef.__PVT__mismatched_topology_ids = (((IData)(vlSelfRef.__PVT__my_topology_x) 
                                                 != (IData)(vlSelfRef.__PVT__tgt_topology_x)) 
                                                | ((IData)(vlSelfRef.__PVT__my_topology_y) 
                                                   != (IData)(vlSelfRef.__PVT__tgt_topology_y)));
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_pyld, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_empty;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__1(Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__Vcellout__flit_store_fifo_0__fifo_rddata, vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_rddata);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo, vlSelfRef.__Vcellout__flit_store_fifo_0__fifo_rddata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__3(Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_store_fifo_0->__PVT__rstb = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__4(Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_cc_rx_datproc_anyvc__pi49___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_gclk;
}
