// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop__pi72.h"
#include "Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__0(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_fifo_default__DOT__flit_store_fifo_0->__PVT__rstb 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__1(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_fifo_default__DOT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__0(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(151,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_RX_REQFLIT_s, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(151,vlSelfRef.__Vcellinp__flit_fifo_default__DOT__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    VL_ASSIGN_W(151,vlSelf->__PVT__flit_fifo_default__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__flit_fifo_default__DOT__flit_store_fifo_0__fifo_wrdata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__0(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__flit_fifo_default__DOT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_ASSIGN_W(151,vlSelfRef.__Vcellout__flit_fifo_default__DOT__flit_store_fifo_0__fifo_rddata, vlSelf->__PVT__flit_fifo_default__DOT__flit_store_fifo_0->__PVT__fifo_rddata);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__read_data_fifo, vlSelfRef.__Vcellout__flit_fifo_default__DOT__flit_store_fifo_0__fifo_rddata);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__read_data_fifo_s, vlSelfRef.__PVT__read_data_fifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__0(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_fifo_default__DOT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__1(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(151,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_RX_REQFLIT_s, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(151,vlSelfRef.__Vcellinp__flit_fifo_default__DOT__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    VL_ASSIGN_W(151,vlSelf->__PVT__flit_fifo_default__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__flit_fifo_default__DOT__flit_store_fifo_0__fifo_wrdata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__0(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_fifo_default__DOT__flit_store_fifo_0->__PVT__rstb 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__1(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_fifo_default__DOT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__0(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(151,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_RX_REQFLIT_s, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(151,vlSelfRef.__Vcellinp__flit_fifo_default__DOT__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    VL_ASSIGN_W(151,vlSelf->__PVT__flit_fifo_default__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__flit_fifo_default__DOT__flit_store_fifo_0__fifo_wrdata);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__0(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSelf->__PVT__flit_fifo_default__DOT__flit_store_fifo_0->__PVT__fifo_empty;
    VL_ASSIGN_W(151,vlSelfRef.__Vcellout__flit_fifo_default__DOT__flit_store_fifo_0__fifo_rddata, vlSelf->__PVT__flit_fifo_default__DOT__flit_store_fifo_0->__PVT__fifo_rddata);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__read_data_fifo, vlSelfRef.__Vcellout__flit_fifo_default__DOT__flit_store_fifo_0__fifo_rddata);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__read_data_fifo_s, vlSelfRef.__PVT__read_data_fifo);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__0(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__flit_fifo_default__DOT__flit_store_fifo_0->__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__1(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi65___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(151,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_RX_REQFLIT_s, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(151,vlSelfRef.__Vcellinp__flit_fifo_default__DOT__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    VL_ASSIGN_W(151,vlSelf->__PVT__flit_fifo_default__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__flit_fifo_default__DOT__flit_store_fifo_0__fifo_wrdata);
}
