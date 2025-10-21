// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_lnkactive_rcv.h"
#include "Vsig_topology_top_sig_node_rx_datproc__pi59.h"
#include "Vsig_topology_top_sig_node_rx_reqproc__pi62.h"
#include "Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1.h"
#include "Vsig_topology_top_sig_node_rxtop__pi46.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_rxtop__pi46___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__1(Vsig_topology_top_sig_node_rxtop__pi46* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi46___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rxtop_rspproc_fifo_is_full_vc0 
        = vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__o_rxtop_rspproc_fifo_is_full_vc0;
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__flit_out_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__flit_out_vc1);
    vlSelfRef.__PVT__rxtop_datproc_fifo_is_full_vc0 
        = vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__o_rxtop_datproc_fifo_is_full_vc0;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc0, vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__flit_out_vc0);
    vlSelfRef.__PVT__ic_RX_SNPLCRDV = vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_SNPLCRDV;
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__TXLINKACTIVEREQ 
        = vlSelfRef.__PVT__ic_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__o_timeout_can_send_generated_dat_rsp_flit 
        = (((~ (IData)(vlSelfRef.__PVT__rxtop_datproc_fifo_is_full_vc0)) 
            & (~ (IData)(vlSelfRef.__PVT__rxtop_rspproc_fifo_is_full_vc0))) 
           & (IData)(vlSelfRef.__PVT__timeout_or_recovery_mode));
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rxtop__pi46___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__2(Vsig_topology_top_sig_node_rxtop__pi46* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi46___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__empty_snprsp_flit_fifo_tx_snp 
        = vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__icx_exist 
        = vlSelfRef.__PVT__icx_exist_req;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__icx_exist 
        = vlSelfRef.__PVT__icx_exist_rsp;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__icx_exist 
        = vlSelfRef.__PVT__icx_exist_dat;
    vlSelfRef.__PVT__rcvr_can_send_crdt = vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__rcvr_can_send_crdt;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__rcvr_can_send_crdt 
        = vlSelfRef.__PVT__rcvr_can_send_crdt;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__rcvr_can_send_crdt 
        = vlSelfRef.__PVT__rcvr_can_send_crdt;
    vlSelfRef.__PVT__rcvr_can_send_crdt_muxed = ((IData)(vlSelfRef.__PVT__rcvr_can_send_crdt) 
                                                 & (~ (IData)(vlSelfRef.__PVT__id_translator_full_req)));
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__rcvr_can_send_crdt 
        = vlSelfRef.__PVT__rcvr_can_send_crdt_muxed;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rxtop__pi46___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__0(Vsig_topology_top_sig_node_rxtop__pi46* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi46___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_node_rxtop__pi46___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__1(Vsig_topology_top_sig_node_rxtop__pi46* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi46___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rxtop_rspproc_fifo_is_full_vc0 
        = vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__o_rxtop_rspproc_fifo_is_full_vc0;
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__flit_out_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__flit_out_vc1);
    vlSelfRef.__PVT__rxtop_datproc_fifo_is_full_vc0 
        = vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__o_rxtop_datproc_fifo_is_full_vc0;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc0, vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__flit_out_vc0);
    vlSelfRef.__PVT__ic_RX_SNPLCRDV = vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_SNPLCRDV;
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__TXLINKACTIVEREQ 
        = vlSelfRef.__PVT__ic_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__o_timeout_can_send_generated_dat_rsp_flit 
        = (((~ (IData)(vlSelfRef.__PVT__rxtop_datproc_fifo_is_full_vc0)) 
            & (~ (IData)(vlSelfRef.__PVT__rxtop_rspproc_fifo_is_full_vc0))) 
           & (IData)(vlSelfRef.__PVT__timeout_or_recovery_mode));
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rxtop__pi46___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__2(Vsig_topology_top_sig_node_rxtop__pi46* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi46___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__empty_snprsp_flit_fifo_tx_snp 
        = vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__icx_exist 
        = vlSelfRef.__PVT__icx_exist_req;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__icx_exist 
        = vlSelfRef.__PVT__icx_exist_rsp;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__icx_exist 
        = vlSelfRef.__PVT__icx_exist_dat;
    vlSelfRef.__PVT__rcvr_can_send_crdt = vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__rcvr_can_send_crdt;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__rcvr_can_send_crdt 
        = vlSelfRef.__PVT__rcvr_can_send_crdt;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__rcvr_can_send_crdt 
        = vlSelfRef.__PVT__rcvr_can_send_crdt;
    vlSelfRef.__PVT__rcvr_can_send_crdt_muxed = ((IData)(vlSelfRef.__PVT__rcvr_can_send_crdt) 
                                                 & (~ (IData)(vlSelfRef.__PVT__id_translator_full_req)));
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__rcvr_can_send_crdt 
        = vlSelfRef.__PVT__rcvr_can_send_crdt_muxed;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rxtop__pi46___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__0(Vsig_topology_top_sig_node_rxtop__pi46* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi46___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__0\n"); );
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
