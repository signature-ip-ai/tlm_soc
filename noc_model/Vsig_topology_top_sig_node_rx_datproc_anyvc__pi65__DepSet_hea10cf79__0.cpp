// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_rx_datproc_anyvc__pi65.h"

extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_he95d9d6c_0;

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi65___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__1(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi65___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__xmtstate = vlSelfRef.__PVT__xmtstate;
    VL_ASSIGN_W(680,vlSelfRef.__Vdly__read_data_fifo_stored, vlSelfRef.__PVT__read_data_fifo_stored);
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        vlSelfRef.__Vdly__xmtstate = vlSelfRef.__PVT__xmtstate_nxt;
        VL_ASSIGN_W(680,vlSelfRef.__Vdly__read_data_fifo_stored, vlSelfRef.__PVT__read_data_fifo_stored_nxt);
    } else {
        vlSelfRef.__Vdly__xmtstate = 0U;
        VL_ASSIGN_W(680,vlSelfRef.__Vdly__read_data_fifo_stored, Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    }
    vlSelfRef.__PVT__xmtstate = vlSelfRef.__Vdly__xmtstate;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored, vlSelfRef.__Vdly__read_data_fifo_stored);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_pyld, vlSelfRef.__PVT__read_data_fifo_stored);
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi65___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__1(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi65___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__xmtstate = vlSelfRef.__PVT__xmtstate;
    VL_ASSIGN_W(680,vlSelfRef.__Vdly__read_data_fifo_stored, vlSelfRef.__PVT__read_data_fifo_stored);
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        vlSelfRef.__Vdly__xmtstate = vlSelfRef.__PVT__xmtstate_nxt;
        VL_ASSIGN_W(680,vlSelfRef.__Vdly__read_data_fifo_stored, vlSelfRef.__PVT__read_data_fifo_stored_nxt);
    } else {
        vlSelfRef.__Vdly__xmtstate = 0U;
        VL_ASSIGN_W(680,vlSelfRef.__Vdly__read_data_fifo_stored, Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    }
    vlSelfRef.__PVT__xmtstate = vlSelfRef.__Vdly__xmtstate;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored, vlSelfRef.__Vdly__read_data_fifo_stored);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_pyld, vlSelfRef.__PVT__read_data_fifo_stored);
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi65___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__1(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi65___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__xmtstate = vlSelfRef.__PVT__xmtstate;
    VL_ASSIGN_W(680,vlSelfRef.__Vdly__read_data_fifo_stored, vlSelfRef.__PVT__read_data_fifo_stored);
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        vlSelfRef.__Vdly__xmtstate = vlSelfRef.__PVT__xmtstate_nxt;
        VL_ASSIGN_W(680,vlSelfRef.__Vdly__read_data_fifo_stored, vlSelfRef.__PVT__read_data_fifo_stored_nxt);
    } else {
        vlSelfRef.__Vdly__xmtstate = 0U;
        VL_ASSIGN_W(680,vlSelfRef.__Vdly__read_data_fifo_stored, Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    }
    vlSelfRef.__PVT__xmtstate = vlSelfRef.__Vdly__xmtstate;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored, vlSelfRef.__Vdly__read_data_fifo_stored);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_pyld, vlSelfRef.__PVT__read_data_fifo_stored);
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi65___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__1(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi65___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__xmtstate = vlSelfRef.__PVT__xmtstate;
    VL_ASSIGN_W(680,vlSelfRef.__Vdly__read_data_fifo_stored, vlSelfRef.__PVT__read_data_fifo_stored);
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        vlSelfRef.__Vdly__xmtstate = vlSelfRef.__PVT__xmtstate_nxt;
        VL_ASSIGN_W(680,vlSelfRef.__Vdly__read_data_fifo_stored, vlSelfRef.__PVT__read_data_fifo_stored_nxt);
    } else {
        vlSelfRef.__Vdly__xmtstate = 0U;
        VL_ASSIGN_W(680,vlSelfRef.__Vdly__read_data_fifo_stored, Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    }
    vlSelfRef.__PVT__xmtstate = vlSelfRef.__Vdly__xmtstate;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored, vlSelfRef.__Vdly__read_data_fifo_stored);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__flit_out_pyld, vlSelfRef.__PVT__read_data_fifo_stored);
    VL_CONCAT_WIW(686,6,680, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
}
