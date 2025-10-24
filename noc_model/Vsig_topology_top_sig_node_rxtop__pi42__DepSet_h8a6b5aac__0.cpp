// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_node_rxtop__pi42.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__0(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__initcrdt_en_sync_port_gen__DOT__sig_ic_initcrdt_enable_0.__PVT__rstb_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0.__PVT__rstb_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__initcrdt_en_sync_port_gen__DOT__sig_ic_initcrdt_enable_0.__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0.__PVT__clk 
        = vlSelfRef.__PVT__ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__1(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__ic_gclk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__ic_gclk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__ic_gclk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__intfrx_gclk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__intfrx_gclk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__intfrx_gclk 
        = vlSelfRef.__PVT__intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__0(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__ic_RX_REQFLITPEND 
        = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0.__PVT__RXLINKACTIVEREQ 
        = vlSelfRef.__PVT__ic_RX_LINKACTIVEREQ;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__ic_RX_REQFLITV 
        = vlSelfRef.__PVT__ic_RX_REQFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_DATFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_DATFLIT);
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_RSPFLIT);
    VL_ASSIGN_W(151,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__ic_RX_REQFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__1(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__flit_out_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__flit_out_vc1);
    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__rden_snprsp_flit_fifo_tx_snp;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__0(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__ic_RX_REQFLITPEND 
        = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0.__PVT__RXLINKACTIVEREQ 
        = vlSelfRef.__PVT__ic_RX_LINKACTIVEREQ;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__ic_RX_REQFLITV 
        = vlSelfRef.__PVT__ic_RX_REQFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_DATFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_DATFLIT);
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_RSPFLIT);
    VL_ASSIGN_W(151,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__ic_RX_REQFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__1(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__flit_out_vc0);
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__flit_out_vc1);
    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__rden_snprsp_flit_fifo_tx_snp;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__0(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rxtop_datproc_fifo_is_full_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__o_rxtop_datproc_fifo_is_full_vc0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__1(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rxtop_rspproc_fifo_is_full_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__o_rxtop_rspproc_fifo_is_full_vc0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__2(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__empty_snprsp_flit_fifo_tx_snp 
        = vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp;
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__rddata_snprsp_flit_fifo_tx_snp, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__3(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__enable_init_update = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__initcrdt_en_sync_port_gen__DOT__sig_ic_initcrdt_enable_0.__PVT__enable_init_update;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__enable_init_update 
        = vlSelfRef.__PVT__enable_init_update;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__4(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__credits_backto_full_req = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__reqcredits_backto_full;
    vlSelfRef.__PVT__credits_backto_full_snp = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__snpcredits_backto_full;
    vlSelfRef.__PVT__rx_req_port_is_inactive = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__rx_req_port_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__5(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__flit_out_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__6(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__flit_out_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__7(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__flit_out_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__8(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__credits_backto_full_rsp = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__credits_backto_full;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__9(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__credits_backto_full_data = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__credits_backto_full;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__10(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_LINKACTIVEACK = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0.__PVT__RXLINKACTIVEACK;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__11(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0.__PVT__TXLINKACTIVEREQ 
        = vlSelfRef.__PVT__ic_TX_LINKACTIVEREQ;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__1(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__intfrx_gclk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__intfrx_gclk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__intfrx_gclk 
        = vlSelfRef.__PVT__intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__2(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__ic_gclk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__ic_gclk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__ic_gclk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__3(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__cm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__4(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__noncm_homeaddr_base_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__5(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__cm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__6(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__noncm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_base_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__7(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__noncm_homeaddr_limit_all_hn_f 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__8(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__noncm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__9(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__cm_homeaddr_base_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_base_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__10(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__cm_homeaddr_limit_all_pm 
        = vlSelfRef.__PVT__cm_homeaddr_limit_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__11(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__credits_backto_full = ((((IData)(vlSelfRef.__PVT__credits_backto_full_req) 
                                              & (IData)(vlSelfRef.__PVT__credits_backto_full_snp)) 
                                             & (IData)(vlSelfRef.__PVT__credits_backto_full_rsp)) 
                                            & (IData)(vlSelfRef.__PVT__credits_backto_full_data));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0.__PVT__credits_backto_full 
        = vlSelfRef.__PVT__credits_backto_full;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__12(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__xy_coord_all_hn_f 
        = vlSelfRef.__PVT__xy_coord_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__13(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__xy_coord_all_pm 
        = vlSelfRef.__PVT__xy_coord_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__14(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__14\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcvr_can_send_crdt = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0.__PVT__rcvr_can_send_crdt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__rcvr_can_send_crdt 
        = vlSelfRef.__PVT__rcvr_can_send_crdt;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__rcvr_can_send_crdt 
        = vlSelfRef.__PVT__rcvr_can_send_crdt;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__15(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__15\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcvr_can_send_crdt_muxed = ((IData)(vlSelfRef.__PVT__rcvr_can_send_crdt) 
                                                 & (~ (IData)(vlSelfRef.__PVT__id_translator_full_req)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__rcvr_can_send_crdt 
        = vlSelfRef.__PVT__rcvr_can_send_crdt_muxed;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__16(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__16\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_RSPLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__ic_RX_LCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__17(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__17\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_DATLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__ic_RX_LCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__18(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__18\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ic_RX_REQLCRDV = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__ic_RX_REQLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__19(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__19\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__ic_RX_REQFLITPEND 
        = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0.__PVT__RXLINKACTIVEREQ 
        = vlSelfRef.__PVT__ic_RX_LINKACTIVEREQ;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__ic_RX_REQFLITV 
        = vlSelfRef.__PVT__ic_RX_REQFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_DATFLITV;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    VL_ASSIGN_W(680,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0.__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_DATFLIT);
    VL_ASSIGN_W(73,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_RSPFLIT);
    VL_ASSIGN_W(151,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0.__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__ic_RX_REQFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__20(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__20\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc0, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__flit_out_vc0);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__21(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__21\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_rspf_vc1, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__flit_out_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__22(Vsig_topology_top_sig_node_rxtop__pi42* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi42___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__22\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0.__PVT__rden_snprsp_flit_fifo_tx_snp;
}
