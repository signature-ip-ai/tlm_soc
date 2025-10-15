// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop__pi72.h"
#include "Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66.h"
#include "Vsig_topology_top_sig_routing_policy.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__0(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__end_send = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__vld_send = 0U;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    if (vlSelfRef.__PVT__xmtstate) {
        if (vlSelfRef.__PVT__xmtstate) {
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__send_gnt) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__vld_send = 1U;
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__end_send = 1U;
                if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                     & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
                } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                             & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                            & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
                } else {
                    vlSelfRef.__PVT__xmtstate_nxt = 0U;
                }
            } else {
                vlSelfRef.__PVT__assert_req = 1U;
            }
        } else {
            vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
        }
    } else if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
    } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                 & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
    }
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 0xfU));
    } else {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 0xfU));
    }
    VL_ASSIGN_W(680,vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata);
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__1(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__end_send = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__vld_send = 0U;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    if (vlSelfRef.__PVT__xmtstate) {
        if (vlSelfRef.__PVT__xmtstate) {
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__send_gnt) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__vld_send = 1U;
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__end_send = 1U;
                if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                     & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
                } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                             & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                            & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
                } else {
                    vlSelfRef.__PVT__xmtstate_nxt = 0U;
                }
            } else {
                vlSelfRef.__PVT__assert_req = 1U;
            }
        } else {
            vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
        }
    } else if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
    } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                 & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
    }
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 0xfU));
    } else {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 0xfU));
    }
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__2(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__end_send = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__vld_send = 0U;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    if (vlSelfRef.__PVT__xmtstate) {
        if (vlSelfRef.__PVT__xmtstate) {
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__send_gnt) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__vld_send = 1U;
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_tx_hs.__PVT__end_send = 1U;
                if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                     & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
                } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                             & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                            & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
                } else {
                    vlSelfRef.__PVT__xmtstate_nxt = 0U;
                }
            } else {
                vlSelfRef.__PVT__assert_req = 1U;
            }
        } else {
            vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
        }
    } else if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
    } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                 & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
    }
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 0xfU));
    } else {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 0xfU));
    }
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__0(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__end_send = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__vld_send = 0U;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    if (vlSelfRef.__PVT__xmtstate) {
        if (vlSelfRef.__PVT__xmtstate) {
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__send_gnt) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__vld_send = 1U;
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__end_send = 1U;
                if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                     & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
                } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                             & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                            & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
                } else {
                    vlSelfRef.__PVT__xmtstate_nxt = 0U;
                }
            } else {
                vlSelfRef.__PVT__assert_req = 1U;
            }
        } else {
            vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
        }
    } else if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
    } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                 & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
    }
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 0xfU));
    } else {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 0xfU));
    }
    VL_ASSIGN_W(680,vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata);
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__1(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__end_send = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__vld_send = 0U;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    if (vlSelfRef.__PVT__xmtstate) {
        if (vlSelfRef.__PVT__xmtstate) {
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__send_gnt) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__vld_send = 1U;
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__end_send = 1U;
                if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                     & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
                } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                             & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                            & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
                } else {
                    vlSelfRef.__PVT__xmtstate_nxt = 0U;
                }
            } else {
                vlSelfRef.__PVT__assert_req = 1U;
            }
        } else {
            vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
        }
    } else if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
    } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                 & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
    }
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 0xfU));
    } else {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 0xfU));
    }
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__2(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__end_send = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__vld_send = 0U;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    if (vlSelfRef.__PVT__xmtstate) {
        if (vlSelfRef.__PVT__xmtstate) {
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__send_gnt) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__vld_send = 1U;
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_tx_hs.__PVT__end_send = 1U;
                if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                     & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
                } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                             & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                            & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
                } else {
                    vlSelfRef.__PVT__xmtstate_nxt = 0U;
                }
            } else {
                vlSelfRef.__PVT__assert_req = 1U;
            }
        } else {
            vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
        }
    } else if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
    } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                 & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
    }
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 0xfU));
    } else {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 0xfU));
    }
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__0(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__end_send = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__vld_send = 0U;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    if (vlSelfRef.__PVT__xmtstate) {
        if (vlSelfRef.__PVT__xmtstate) {
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__send_gnt) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__vld_send = 1U;
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__end_send = 1U;
                if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                     & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
                } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                             & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                            & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
                } else {
                    vlSelfRef.__PVT__xmtstate_nxt = 0U;
                }
            } else {
                vlSelfRef.__PVT__assert_req = 1U;
            }
        } else {
            vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
        }
    } else if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
    } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                 & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
    }
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 0xfU));
    } else {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 0xfU));
    }
    VL_ASSIGN_W(680,vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata);
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__1(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__end_send = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__vld_send = 0U;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    if (vlSelfRef.__PVT__xmtstate) {
        if (vlSelfRef.__PVT__xmtstate) {
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__send_gnt) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__vld_send = 1U;
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__end_send = 1U;
                if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                     & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
                } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                             & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                            & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
                } else {
                    vlSelfRef.__PVT__xmtstate_nxt = 0U;
                }
            } else {
                vlSelfRef.__PVT__assert_req = 1U;
            }
        } else {
            vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
        }
    } else if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
    } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                 & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
    }
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 0xfU));
    } else {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 0xfU));
    }
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__2(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__end_send = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__vld_send = 0U;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    if (vlSelfRef.__PVT__xmtstate) {
        if (vlSelfRef.__PVT__xmtstate) {
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__send_gnt) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__vld_send = 1U;
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_tx_hs.__PVT__end_send = 1U;
                if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                     & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
                } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                             & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                            & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
                } else {
                    vlSelfRef.__PVT__xmtstate_nxt = 0U;
                }
            } else {
                vlSelfRef.__PVT__assert_req = 1U;
            }
        } else {
            vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
        }
    } else if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
    } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                 & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
    }
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 0xfU));
    } else {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 0xfU));
    }
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__0(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(680,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__end_send = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__vld_send = 0U;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    if (vlSelfRef.__PVT__xmtstate) {
        if (vlSelfRef.__PVT__xmtstate) {
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__send_gnt) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__vld_send = 1U;
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__end_send = 1U;
                if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                     & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
                } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                             & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                            & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
                } else {
                    vlSelfRef.__PVT__xmtstate_nxt = 0U;
                }
            } else {
                vlSelfRef.__PVT__assert_req = 1U;
            }
        } else {
            vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
        }
    } else if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
    } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                 & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
    }
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 0xfU));
    } else {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 0xfU));
    }
    VL_ASSIGN_W(680,vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__sync_fifo_gen__DOT__flit_store_fifo_0__fifo_wrdata);
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__1(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__end_send = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__vld_send = 0U;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    if (vlSelfRef.__PVT__xmtstate) {
        if (vlSelfRef.__PVT__xmtstate) {
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__send_gnt) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__vld_send = 1U;
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__end_send = 1U;
                if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                     & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
                } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                             & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                            & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
                } else {
                    vlSelfRef.__PVT__xmtstate_nxt = 0U;
                }
            } else {
                vlSelfRef.__PVT__assert_req = 1U;
            }
        } else {
            vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
        }
    } else if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
    } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                 & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
    }
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 0xfU));
    } else {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 0xfU));
    }
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__2(Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__end_send = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__vld_send = 0U;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    if (vlSelfRef.__PVT__xmtstate) {
        if (vlSelfRef.__PVT__xmtstate) {
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__send_gnt) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__vld_send = 1U;
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_tx_hs.__PVT__end_send = 1U;
                if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                     & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
                } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                             & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                            & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                    VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
                } else {
                    vlSelfRef.__PVT__xmtstate_nxt = 0U;
                }
            } else {
                vlSelfRef.__PVT__assert_req = 1U;
            }
        } else {
            vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
        }
    } else if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
    } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                 & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
        VL_ASSIGN_W(680,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
    }
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__write_data_fifo, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo, 0xfU));
    } else {
        vlSelfRef.__PVT__tgt_clusterid = (0xffU & VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(680, vlSelfRef.__PVT__read_data_fifo_stored, 0xfU));
    }
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
}
