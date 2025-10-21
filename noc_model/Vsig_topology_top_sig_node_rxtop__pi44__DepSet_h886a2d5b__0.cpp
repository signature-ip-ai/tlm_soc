// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_lnkactive_rcv.h"
#include "Vsig_topology_top_sig_node_rx_datproc__pi59.h"
#include "Vsig_topology_top_sig_node_rx_reqproc__pi58.h"
#include "Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1.h"
#include "Vsig_topology_top_sig_node_rxtop__pi44.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi44___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__0(Vsig_topology_top_sig_node_rxtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi44___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_REQFLITPEND 
        = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__RXLINKACTIVEREQ 
        = vlSelfRef.__PVT__ic_RX_LINKACTIVEREQ;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_REQFLITV 
        = vlSelfRef.__PVT__ic_RX_REQFLITV;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_DATFLITV;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_DATFLIT);
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_RSPFLIT);
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__ic_RX_REQFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi44___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__0(Vsig_topology_top_sig_node_rxtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi44___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_REQFLITPEND 
        = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__RXLINKACTIVEREQ 
        = vlSelfRef.__PVT__ic_RX_LINKACTIVEREQ;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_REQFLITV 
        = vlSelfRef.__PVT__ic_RX_REQFLITV;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_DATFLITV;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_DATFLIT);
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_RSPFLIT);
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__ic_RX_REQFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__19(Vsig_topology_top_sig_node_rxtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__19\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_REQFLITPEND 
        = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__RXLINKACTIVEREQ 
        = vlSelfRef.__PVT__ic_RX_LINKACTIVEREQ;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_REQFLITV 
        = vlSelfRef.__PVT__ic_RX_REQFLITV;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_DATFLITV;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_DATFLIT);
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_RSPFLIT);
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__ic_RX_REQFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi44___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__0(Vsig_topology_top_sig_node_rxtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi44___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_REQFLITPEND 
        = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__RXLINKACTIVEREQ 
        = vlSelfRef.__PVT__ic_RX_LINKACTIVEREQ;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_REQFLITV 
        = vlSelfRef.__PVT__ic_RX_REQFLITV;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_DATFLITV;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_DATFLIT);
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_RSPFLIT);
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__ic_RX_REQFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi44___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__0(Vsig_topology_top_sig_node_rxtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi44___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_REQFLITPEND 
        = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__RXLINKACTIVEREQ 
        = vlSelfRef.__PVT__ic_RX_LINKACTIVEREQ;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_REQFLITV 
        = vlSelfRef.__PVT__ic_RX_REQFLITV;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_DATFLITV;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_DATFLIT);
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_RSPFLIT);
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__ic_RX_REQFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__19(Vsig_topology_top_sig_node_rxtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi44___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__19\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_RSPFLITPEND;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_DATFLITPEND;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_REQFLITPEND 
        = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__RXLINKACTIVEREQ 
        = vlSelfRef.__PVT__ic_RX_LINKACTIVEREQ;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_REQFLITV 
        = vlSelfRef.__PVT__ic_RX_REQFLITV;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_DATFLITV;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_RSPFLITV;
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_DATFLIT);
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_RSPFLIT);
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_REQFLIT, vlSelfRef.__PVT__ic_RX_REQFLIT);
}
