// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop__pi68.h"
#include "Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi65.h"
#include "Vsig_topology_top_sig_routing_policy.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi65___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__1(Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi65___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__end_send = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSelfRef.__PVT__send_hdr = 0U;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = 0U;
    if (vlSelfRef.__PVT__xmtstate) {
        if (vlSelfRef.__PVT__xmtstate) {
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__send_gnt) {
                vlSelfRef.__PVT__send_hdr = 1U;
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__end_send = 1U;
                if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                     & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo = 1U;
                    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
                } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                             & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                            & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
                } else if (vlSelfRef.__PVT__snpresp_available_sysco_disabled) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = 1U;
                    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
                } else {
                    vlSelfRef.__PVT__xmtstate_nxt = 0U;
                }
            } else {
                vlSelfRef.__PVT__assert_req = 1U;
            }
        }
    } else if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo = 1U;
        VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
    } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                 & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
        VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
    } else if (vlSelfRef.__PVT__snpresp_available_sysco_disabled) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = 1U;
        VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
    }
    vlSelfRef.__PVT__flit_out_meta = (0x3fU & VL_SEL_IIII(32, 
                                                          ((IData)(vlSelfRef.__PVT__send_hdr)
                                                            ? 
                                                           VL_EXTEND_II(32,6, 
                                                                        VL_CONCAT_III(6,1,5, 1U, 
                                                                                VL_CONCAT_III(5,3,2, (IData)(vlSelfRef.__PVT__myvc_value), 0U)))
                                                            : 0U), 0U, 6));
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_FLIT_s, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_FLIT_s, 4U, 3));
        vlSelfRef.__PVT__opcode_fifoout = (0x1fU & 
                                           VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_FLIT_s, 0x26U, 5));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(73, vlSelfRef.__PVT__ic_RX_FLIT_s, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo, 4U, 3));
        vlSelfRef.__PVT__opcode_fifoout = (0x1fU & 
                                           VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo, 0x26U, 5));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(73, vlSelfRef.__PVT__read_data_fifo, 0xfU));
    } else if (vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, 4U, 3));
        vlSelfRef.__PVT__opcode_fifoout = (0x1fU & 
                                           VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, 0x26U, 5));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(73, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, 0xfU));
    } else {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo_stored, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo_stored, 4U, 3));
        vlSelfRef.__PVT__opcode_fifoout = (0x1fU & 
                                           VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo_stored, 0x26U, 5));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(73, vlSelfRef.__PVT__read_data_fifo_stored, 0xfU));
    }
    VL_CONCAT_WIW(79,6,73, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi65___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__1(Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi65___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__end_send = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSelfRef.__PVT__send_hdr = 0U;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = 0U;
    if (vlSelfRef.__PVT__xmtstate) {
        if (vlSelfRef.__PVT__xmtstate) {
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__send_gnt) {
                vlSelfRef.__PVT__send_hdr = 1U;
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__end_send = 1U;
                if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                     & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo = 1U;
                    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
                } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                             & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                            & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
                } else if (vlSelfRef.__PVT__snpresp_available_sysco_disabled) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = 1U;
                    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
                } else {
                    vlSelfRef.__PVT__xmtstate_nxt = 0U;
                }
            } else {
                vlSelfRef.__PVT__assert_req = 1U;
            }
        }
    } else if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo = 1U;
        VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
    } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                 & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
        VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
    } else if (vlSelfRef.__PVT__snpresp_available_sysco_disabled) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = 1U;
        VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
    }
    vlSelfRef.__PVT__flit_out_meta = (0x3fU & VL_SEL_IIII(32, 
                                                          ((IData)(vlSelfRef.__PVT__send_hdr)
                                                            ? 
                                                           VL_EXTEND_II(32,6, 
                                                                        VL_CONCAT_III(6,1,5, 1U, 
                                                                                VL_CONCAT_III(5,3,2, (IData)(vlSelfRef.__PVT__myvc_value), 0U)))
                                                            : 0U), 0U, 6));
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_FLIT_s, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_FLIT_s, 4U, 3));
        vlSelfRef.__PVT__opcode_fifoout = (0x1fU & 
                                           VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_FLIT_s, 0x26U, 5));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(73, vlSelfRef.__PVT__ic_RX_FLIT_s, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo, 4U, 3));
        vlSelfRef.__PVT__opcode_fifoout = (0x1fU & 
                                           VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo, 0x26U, 5));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(73, vlSelfRef.__PVT__read_data_fifo, 0xfU));
    } else if (vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, 4U, 3));
        vlSelfRef.__PVT__opcode_fifoout = (0x1fU & 
                                           VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, 0x26U, 5));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(73, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, 0xfU));
    } else {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo_stored, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo_stored, 4U, 3));
        vlSelfRef.__PVT__opcode_fifoout = (0x1fU & 
                                           VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo_stored, 0x26U, 5));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(73, vlSelfRef.__PVT__read_data_fifo_stored, 0xfU));
    }
    VL_CONCAT_WIW(79,6,73, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi65___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__1(Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi65___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__end_send = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSelfRef.__PVT__send_hdr = 0U;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = 0U;
    if (vlSelfRef.__PVT__xmtstate) {
        if (vlSelfRef.__PVT__xmtstate) {
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__send_gnt) {
                vlSelfRef.__PVT__send_hdr = 1U;
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__end_send = 1U;
                if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                     & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo = 1U;
                    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
                } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                             & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                            & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
                } else if (vlSelfRef.__PVT__snpresp_available_sysco_disabled) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = 1U;
                    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
                } else {
                    vlSelfRef.__PVT__xmtstate_nxt = 0U;
                }
            } else {
                vlSelfRef.__PVT__assert_req = 1U;
            }
        }
    } else if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo = 1U;
        VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
    } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                 & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
        VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
    } else if (vlSelfRef.__PVT__snpresp_available_sysco_disabled) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = 1U;
        VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
    }
    vlSelfRef.__PVT__flit_out_meta = (0x3fU & VL_SEL_IIII(32, 
                                                          ((IData)(vlSelfRef.__PVT__send_hdr)
                                                            ? 
                                                           VL_EXTEND_II(32,6, 
                                                                        VL_CONCAT_III(6,1,5, 1U, 
                                                                                VL_CONCAT_III(5,3,2, (IData)(vlSelfRef.__PVT__myvc_value), 0U)))
                                                            : 0U), 0U, 6));
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_FLIT_s, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_FLIT_s, 4U, 3));
        vlSelfRef.__PVT__opcode_fifoout = (0x1fU & 
                                           VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_FLIT_s, 0x26U, 5));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(73, vlSelfRef.__PVT__ic_RX_FLIT_s, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo, 4U, 3));
        vlSelfRef.__PVT__opcode_fifoout = (0x1fU & 
                                           VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo, 0x26U, 5));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(73, vlSelfRef.__PVT__read_data_fifo, 0xfU));
    } else if (vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, 4U, 3));
        vlSelfRef.__PVT__opcode_fifoout = (0x1fU & 
                                           VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, 0x26U, 5));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(73, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, 0xfU));
    } else {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo_stored, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo_stored, 4U, 3));
        vlSelfRef.__PVT__opcode_fifoout = (0x1fU & 
                                           VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo_stored, 0x26U, 5));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(73, vlSelfRef.__PVT__read_data_fifo_stored, 0xfU));
    }
    VL_CONCAT_WIW(79,6,73, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi65___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__1(Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi65* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi65___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__end_send = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSelfRef.__PVT__send_hdr = 0U;
    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = 0U;
    if (vlSelfRef.__PVT__xmtstate) {
        if (vlSelfRef.__PVT__xmtstate) {
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__send_gnt) {
                vlSelfRef.__PVT__send_hdr = 1U;
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__end_send = 1U;
                if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                     & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo = 1U;
                    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
                } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                             & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                            & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
                } else if (vlSelfRef.__PVT__snpresp_available_sysco_disabled) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = 1U;
                    VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
                } else {
                    vlSelfRef.__PVT__xmtstate_nxt = 0U;
                }
            } else {
                vlSelfRef.__PVT__assert_req = 1U;
            }
        }
    } else if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo = 1U;
        VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
    } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                 & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
        VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
    } else if (vlSelfRef.__PVT__snpresp_available_sysco_disabled) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = 1U;
        VL_ASSIGN_W(73,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
    }
    vlSelfRef.__PVT__flit_out_meta = (0x3fU & VL_SEL_IIII(32, 
                                                          ((IData)(vlSelfRef.__PVT__send_hdr)
                                                            ? 
                                                           VL_EXTEND_II(32,6, 
                                                                        VL_CONCAT_III(6,1,5, 1U, 
                                                                                VL_CONCAT_III(5,3,2, (IData)(vlSelfRef.__PVT__myvc_value), 0U)))
                                                            : 0U), 0U, 6));
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_FLIT_s, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_FLIT_s, 4U, 3));
        vlSelfRef.__PVT__opcode_fifoout = (0x1fU & 
                                           VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_FLIT_s, 0x26U, 5));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(73, vlSelfRef.__PVT__ic_RX_FLIT_s, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo, 4U, 3));
        vlSelfRef.__PVT__opcode_fifoout = (0x1fU & 
                                           VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo, 0x26U, 5));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(73, vlSelfRef.__PVT__read_data_fifo, 0xfU));
    } else if (vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, 4U, 3));
        vlSelfRef.__PVT__opcode_fifoout = (0x1fU & 
                                           VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, 0x26U, 5));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(73, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, 0xfU));
    } else {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo_stored, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo_stored, 4U, 3));
        vlSelfRef.__PVT__opcode_fifoout = (0x1fU & 
                                           VL_SEL_IWII(73, vlSelfRef.__PVT__read_data_fifo_stored, 0x26U, 5));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(73, vlSelfRef.__PVT__read_data_fifo_stored, 0xfU));
    }
    VL_CONCAT_WIW(79,6,73, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSelf->__PVT__sync_fifo_gen__DOT__flit_store_fifo_0->__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
}
