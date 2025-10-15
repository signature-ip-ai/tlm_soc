// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_lnkactive_rcv.h"
#include "Vsig_topology_top_sig_node_rx_datproc__pi59.h"
#include "Vsig_topology_top_sig_node_rx_reqproc__pi58.h"
#include "Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1.h"
#include "Vsig_topology_top_sig_node_rxtop__pi44.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_rxtop__pi44___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__1(Vsig_topology_top_sig_node_rxtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi44___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_req_port_is_inactive = vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__rx_req_port_is_inactive;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc0, vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__flit_out_vc0);
    vlSelfRef.__PVT__ic_RX_SNPLCRDV = vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_SNPLCRDV;
    vlSelfRef.__PVT__rxtop_rspproc_fifo_is_full_vc0 
        = vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__o_rxtop_rspproc_fifo_is_full_vc0;
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__flit_out_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__flit_out_vc1);
    vlSelfRef.__PVT__rxtop_datproc_fifo_is_full_vc0 
        = vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__o_rxtop_datproc_fifo_is_full_vc0;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__qos_override_val 
        = vlSelfRef.__PVT__qos_override_val;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__qos_override_en 
        = vlSelfRef.__PVT__qos_override_en;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__xy_coord_all_hn_i 
        = vlSelfRef.__PVT__xy_coord_all_hn_i;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    VL_ASSIGN_W(112,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__noncm_homeaddr_base_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_i);
    VL_ASSIGN_W(116,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__noncm_homeaddr_limit_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_i);
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[1U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[1U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[2U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[2U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[3U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[3U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[4U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[4U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[5U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[5U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[6U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[6U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[7U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[7U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[8U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[8U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[9U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[9U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xaU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xaU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xbU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xbU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xcU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xcU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xdU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xdU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xeU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xeU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xfU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xfU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[1U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[2U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[3U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[4U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[5U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[6U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[7U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[8U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[9U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xaU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xbU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xcU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xdU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xeU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xfU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[1U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[2U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[3U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[4U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[5U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[6U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[7U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[8U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[9U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xaU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xbU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xcU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xdU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xeU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xfU];
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__TXLINKACTIVEREQ 
        = vlSelfRef.__PVT__ic_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__o_timeout_can_send_generated_dat_rsp_flit 
        = (((~ (IData)(vlSelfRef.__PVT__rxtop_datproc_fifo_is_full_vc0)) 
            & (~ (IData)(vlSelfRef.__PVT__rxtop_rspproc_fifo_is_full_vc0))) 
           & (IData)(vlSelfRef.__PVT__timeout_or_recovery_mode));
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rxtop__pi44___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__2(Vsig_topology_top_sig_node_rxtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi44___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__mn_node_id 
        = vlSelfRef.__PVT__mn_node_id;
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

VL_ATTR_COLD void Vsig_topology_top_sig_node_rxtop__pi44___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__0(Vsig_topology_top_sig_node_rxtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi44___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_node_rxtop__pi44___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__1(Vsig_topology_top_sig_node_rxtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi44___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rx_req_port_is_inactive = vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__rx_req_port_is_inactive;
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_reqf_vc0, vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__flit_out_vc0);
    vlSelfRef.__PVT__ic_RX_SNPLCRDV = vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__ic_RX_SNPLCRDV;
    vlSelfRef.__PVT__rxtop_rspproc_fifo_is_full_vc0 
        = vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__o_rxtop_rspproc_fifo_is_full_vc0;
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc0, vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__flit_out_vc0);
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_datf_vc1, vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__flit_out_vc1);
    vlSelfRef.__PVT__rxtop_datproc_fifo_is_full_vc0 
        = vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__o_rxtop_datproc_fifo_is_full_vc0;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__qos_override_val 
        = vlSelfRef.__PVT__qos_override_val;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__qos_override_en 
        = vlSelfRef.__PVT__qos_override_en;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__xy_coord_all_hn_i 
        = vlSelfRef.__PVT__xy_coord_all_hn_i;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__myproc_id 
        = vlSelfRef.__PVT__myproc_id;
    VL_ASSIGN_W(112,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__noncm_homeaddr_base_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_i);
    VL_ASSIGN_W(116,vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__noncm_homeaddr_limit_all_hn_i, vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_i);
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[1U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[1U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[2U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[2U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[3U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[3U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[4U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[4U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[5U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[5U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[6U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[6U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[7U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[7U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[8U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[8U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[9U] 
        = vlSelfRef.__PVT__i_ucie_node_ids[9U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xaU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xaU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xbU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xbU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xcU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xcU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xdU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xdU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xeU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xeU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_node_ids[0xfU] 
        = vlSelfRef.__PVT__i_ucie_node_ids[0xfU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[1U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[2U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[3U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[4U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[5U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[6U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[7U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[8U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[9U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xaU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xbU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xcU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xdU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xeU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_base_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_base_addresses[0xfU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[1U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[1U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[2U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[2U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[3U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[3U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[4U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[4U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[5U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[5U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[6U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[6U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[7U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[7U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[8U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[8U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[9U] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[9U];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xaU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xaU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xbU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xbU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xcU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xcU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xdU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xdU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xeU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xeU];
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__i_ucie_limit_addresses[0xfU] 
        = vlSelfRef.__PVT__i_ucie_limit_addresses[0xfU];
    vlSelf->__PVT__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0->__PVT__TXLINKACTIVEREQ 
        = vlSelfRef.__PVT__ic_TX_LINKACTIVEREQ;
    vlSelfRef.__PVT__o_timeout_can_send_generated_dat_rsp_flit 
        = (((~ (IData)(vlSelfRef.__PVT__rxtop_datproc_fifo_is_full_vc0)) 
            & (~ (IData)(vlSelfRef.__PVT__rxtop_rspproc_fifo_is_full_vc0))) 
           & (IData)(vlSelfRef.__PVT__timeout_or_recovery_mode));
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rxtop__pi44___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__2(Vsig_topology_top_sig_node_rxtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi44___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSelf->__PVT__sig_node_rx_datproc_0->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSelf->__PVT__sig_node_rx_rspproc_0->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSelf->__PVT__sig_node_rx_reqproc_0->__PVT__mn_node_id 
        = vlSelfRef.__PVT__mn_node_id;
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

VL_ATTR_COLD void Vsig_topology_top_sig_node_rxtop__pi44___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__0(Vsig_topology_top_sig_node_rxtop__pi44* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi44___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__0\n"); );
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
