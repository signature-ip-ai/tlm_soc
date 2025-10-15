// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop__pi73.h"
#include "Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__0(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__0\n"); );
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
    vlSelfRef.__PVT__o_rxtop_datproc_fifo_is_full = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_full;
    vlSelfRef.__PVT__flit_out_meta = VL_CONCAT_III(6,4,2, 
                                                   VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__myvc_value)), 0U);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_pyld, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__1(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__Vcellout__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_rddata, vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rddata);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo, vlSelfRef.__Vcellout__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_rddata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__3(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__rstb 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__4(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__0(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    VL_ASSIGN_W(680,vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__0(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__0\n"); );
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
    vlSelfRef.__PVT__o_rxtop_datproc_fifo_is_full = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_full;
    vlSelfRef.__PVT__flit_out_meta = VL_CONCAT_III(6,4,2, 
                                                   VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__myvc_value)), 0U);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_pyld, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__1(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__Vcellout__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_rddata, vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rddata);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo, vlSelfRef.__Vcellout__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_rddata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__3(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__rstb 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__4(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__0(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    VL_ASSIGN_W(680,vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__0(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__0\n"); );
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
    vlSelfRef.__PVT__o_rxtop_datproc_fifo_is_full = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_full;
    vlSelfRef.__PVT__flit_out_meta = VL_CONCAT_III(6,4,2, 
                                                   VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__myvc_value)), 0U);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_pyld, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__1(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__Vcellout__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_rddata, vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rddata);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo, vlSelfRef.__Vcellout__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_rddata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__3(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__rstb 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__4(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__0(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    VL_ASSIGN_W(680,vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__0(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__0\n"); );
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
    vlSelfRef.__PVT__o_rxtop_datproc_fifo_is_full = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_full;
    vlSelfRef.__PVT__flit_out_meta = VL_CONCAT_III(6,4,2, 
                                                   VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__myvc_value)), 0U);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_pyld, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__1(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__Vcellout__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_rddata, vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rddata);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo, vlSelfRef.__Vcellout__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_rddata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__3(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__rstb 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__4(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__0(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    VL_ASSIGN_W(680,vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__0(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__0\n"); );
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
    vlSelfRef.__PVT__o_rxtop_datproc_fifo_is_full = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_full;
    vlSelfRef.__PVT__flit_out_meta = VL_CONCAT_III(6,4,2, 
                                                   VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__myvc_value)), 0U);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_pyld, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__1(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__Vcellout__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_rddata, vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rddata);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo, vlSelfRef.__Vcellout__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_rddata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__3(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__rstb 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__4(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__0(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    VL_ASSIGN_W(680,vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__0(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__0\n"); );
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
    vlSelfRef.__PVT__o_rxtop_datproc_fifo_is_full = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_full;
    vlSelfRef.__PVT__flit_out_meta = VL_CONCAT_III(6,4,2, 
                                                   VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__myvc_value)), 0U);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_pyld, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__1(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__Vcellout__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_rddata, vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rddata);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo, vlSelfRef.__Vcellout__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_rddata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__3(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__rstb 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__4(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__0(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    VL_ASSIGN_W(680,vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__0(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__0\n"); );
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
    vlSelfRef.__PVT__o_rxtop_datproc_fifo_is_full = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_full;
    vlSelfRef.__PVT__flit_out_meta = VL_CONCAT_III(6,4,2, 
                                                   VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__myvc_value)), 0U);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_pyld, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__1(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__Vcellout__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_rddata, vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rddata);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo, vlSelfRef.__Vcellout__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_rddata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__3(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__rstb 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__4(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__0(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    VL_ASSIGN_W(680,vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__0(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__0\n"); );
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
    vlSelfRef.__PVT__o_rxtop_datproc_fifo_is_full = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_full;
    vlSelfRef.__PVT__flit_out_meta = VL_CONCAT_III(6,4,2, 
                                                   VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__myvc_value)), 0U);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_pyld, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__1(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__Vcellout__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_rddata, vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rddata);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo, vlSelfRef.__Vcellout__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_rddata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__3(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__rstb 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__4(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__0(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi67___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    VL_ASSIGN_W(680,vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata);
}
