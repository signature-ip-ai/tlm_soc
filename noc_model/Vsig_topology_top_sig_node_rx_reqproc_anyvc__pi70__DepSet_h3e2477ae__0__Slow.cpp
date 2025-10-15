// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__0(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__0\n"); );
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
    VL_ASSIGN_W(151,vlSelfRef.__PVT__flit_out_pyld, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__flit_out_meta = VL_CONCAT_III(10,1,9, 1U, 
                                                   VL_CONCAT_III(9,3,6, (IData)(vlSelfRef.__PVT__myvc_value), 0U));
    VL_ASSIGN_W(151,vlSelfRef.__PVT__read_data_fifo_stored_s, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__empty_flit_store_fifo = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__flit_fifo_default__DOT__flit_store_fifo_0.__PVT__fifo_empty;
    VL_CONCAT_WIW(161,10,151, vlSelfRef.__PVT__flit_out, (IData)(vlSelfRef.__PVT__flit_out_meta), vlSelfRef.__PVT__flit_out_pyld);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__1(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(151,vlSelfRef.__Vcellout__flit_fifo_default__DOT__flit_store_fifo_0__fifo_rddata, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__flit_fifo_default__DOT__flit_store_fifo_0.__PVT__fifo_rddata);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__read_data_fifo, vlSelfRef.__Vcellout__flit_fifo_default__DOT__flit_store_fifo_0__fifo_rddata);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__read_data_fifo_s, vlSelfRef.__PVT__read_data_fifo);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__2(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__my_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__mycluster_id), 0U, 4));
    vlSelfRef.__PVT__my_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__mycluster_id), 4U, 4));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy.__PVT__icx_exist_i 
        = vlSelfRef.__PVT__icx_exist;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy.__PVT__my_x_i 
        = vlSelfRef.__PVT__my_cluster_x;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy.__PVT__my_y_i 
        = vlSelfRef.__PVT__my_cluster_y;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__3(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__flit_fifo_default__DOT__flit_store_fifo_0.__PVT__rstb 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__4(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__flit_fifo_default__DOT__flit_store_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__ic_clk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__0(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(151,vlSelfRef.__PVT__write_data_fifo, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_RX_REQFLIT_s, vlSelfRef.__PVT__ic_RX_FLIT);
    VL_ASSIGN_W(151,vlSelfRef.__Vcellinp__flit_fifo_default__DOT__flit_store_fifo_0__fifo_wrdata, vlSelfRef.__PVT__write_data_fifo);
    VL_ASSIGN_W(151,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__flit_fifo_default__DOT__flit_store_fifo_0.__PVT__fifo_wrdata, vlSelfRef.__Vcellinp__flit_fifo_default__DOT__flit_store_fifo_0__fifo_wrdata);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__1(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xmtstate_nxt = vlSelfRef.__PVT__xmtstate;
    vlSelfRef.__PVT__assert_req = 0U;
    vlSelfRef.__PVT__drive_end_flit = 0U;
    vlSelfRef.__PVT__rden_storefifo = 0U;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__vld_send = 0U;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo_stored);
    vlSelfRef.__PVT__rden_storefifo_bypass = 0U;
    if (vlSelfRef.__PVT__xmtstate) {
        if (vlSelfRef.__PVT__xmtstate) {
            if (vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__send_gnt) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__vld_send = 1U;
                vlSelfRef.__PVT__drive_end_flit = 1U;
                if (((~ (IData)(vlSelfRef.__PVT__empty_flit_store_fifo)) 
                     & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo = 1U;
                    VL_ASSIGN_W(151,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
                } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                             & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                            & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
                    vlSelfRef.__PVT__assert_req = 1U;
                    vlSelfRef.__PVT__xmtstate_nxt = 1U;
                    vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
                    VL_ASSIGN_W(151,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
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
        VL_ASSIGN_W(151,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__read_data_fifo);
    } else if ((((IData)(vlSelfRef.__PVT__empty_flit_store_fifo) 
                 & (IData)(vlSelfRef.__PVT__ic_RX_FLITV)) 
                & (IData)(vlSelfRef.__PVT__creditfifo_hasroom))) {
        vlSelfRef.__PVT__assert_req = 1U;
        vlSelfRef.__PVT__xmtstate_nxt = 1U;
        vlSelfRef.__PVT__rden_storefifo_bypass = 1U;
        VL_ASSIGN_W(151,vlSelfRef.__PVT__read_data_fifo_stored_nxt, vlSelfRef.__PVT__ic_RX_FLIT);
    }
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__end_send 
        = vlSelfRef.__PVT__drive_end_flit;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__flit_fifo_default__DOT__flit_store_fifo_0.__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_storefifo;
    vlSelfRef.__PVT__req_crdt_update = ((IData)(vlSelfRef.__PVT__rden_storefifo) 
                                        | (IData)(vlSelfRef.__PVT__rden_storefifo_bypass));
    vlSelfRef.__PVT__wren_flit_store_fifo = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                             & (~ (IData)(vlSelfRef.__PVT__rden_storefifo_bypass)));
    vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                              & VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_s, 7U, 8));
    vlSelfRef.__PVT__tgt_portid_fifoout = (7U & VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_s, 4U, 3));
    vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_stored_s, 0xfU));
    if (vlSelfRef.__PVT__rden_storefifo) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_s, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_s, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(151, vlSelfRef.__PVT__read_data_fifo_s, 0xfU));
    } else if (vlSelfRef.__PVT__rden_storefifo_bypass) {
        vlSelfRef.__PVT__tgt_clusterid_fifoout = (0xffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 7U, 8));
        vlSelfRef.__PVT__tgt_portid_fifoout = (7U & 
                                               VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 4U, 3));
        vlSelfRef.__PVT__srcid_bit0_fifoout = (1U & 
                                               VL_BITSEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0xfU));
    }
    vlSelfRef.__PVT__send_working_update = vlSelfRef.__PVT__req_crdt_update;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__flit_fifo_default__DOT__flit_store_fifo_0.__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_flit_store_fifo;
    vlSelfRef.__PVT__select_xfirst = (1U & ((~ (IData)(vlSelfRef.__PVT__enable_balanced_routing)) 
                                            | (~ (IData)(vlSelfRef.__PVT__srcid_bit0_fifoout))));
    vlSelfRef.__PVT__tgt_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 0U, 4));
    vlSelfRef.__PVT__tgt_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__tgt_clusterid_fifoout), 4U, 4));
    vlSelfRef.__PVT__final_tgt_cluster_x = vlSelfRef.__PVT__tgt_cluster_x;
    vlSelfRef.__PVT__final_tgt_cluster_y = vlSelfRef.__PVT__tgt_cluster_y;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy.__PVT__tgt_x_i 
        = vlSelfRef.__PVT__final_tgt_cluster_x;
    vlSelfRef.__PVT__exit_network = (VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__my_cluster_y), (IData)(vlSelfRef.__PVT__my_cluster_x)) 
                                     == VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__final_tgt_cluster_y), (IData)(vlSelfRef.__PVT__final_tgt_cluster_x)));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy.__PVT__tgt_y_i 
        = vlSelfRef.__PVT__final_tgt_cluster_y;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__2(Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi70___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_north_yfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy.__PVT__route_north_yfirst_o;
    vlSelfRef.__PVT__route_east_xfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy.__PVT__route_east_xfirst_o;
    vlSelfRef.__PVT__route_south_yfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy.__PVT__route_south_yfirst_o;
    vlSelfRef.__PVT__route_west_xfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy.__PVT__route_west_xfirst_o;
    vlSelfRef.__PVT__route_east_yfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy.__PVT__route_east_yfirst_o;
    vlSelfRef.__PVT__route_north_xfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy.__PVT__route_north_xfirst_o;
    vlSelfRef.__PVT__route_west_yfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy.__PVT__route_west_yfirst_o;
    vlSelfRef.__PVT__route_south_xfirst = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy.__PVT__route_south_xfirst_o;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send = 0U;
    if (vlSelfRef.__PVT__assert_req) {
        if (vlSelfRef.__PVT__exit_network) {
            if ((0U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send = 4U;
            } else if ((1U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send = 8U;
            } else if ((2U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send = 0x10U;
            } else if ((3U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send = 0x20U;
            } else if ((4U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send = 1U;
            }
        } else if (vlSelfRef.__PVT__select_xfirst) {
            if ((1U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_xfirst), (IData)(vlSelfRef.__PVT__route_north_xfirst)), 
                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_xfirst), (IData)(vlSelfRef.__PVT__route_east_xfirst))))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send = 0x80U;
            } else if ((2U == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_xfirst), (IData)(vlSelfRef.__PVT__route_north_xfirst)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_xfirst), (IData)(vlSelfRef.__PVT__route_east_xfirst))))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send = 0x200U;
            } else if ((4U == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_xfirst), (IData)(vlSelfRef.__PVT__route_north_xfirst)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_xfirst), (IData)(vlSelfRef.__PVT__route_east_xfirst))))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send = 0x40U;
            } else if ((8U == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_xfirst), (IData)(vlSelfRef.__PVT__route_north_xfirst)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_xfirst), (IData)(vlSelfRef.__PVT__route_east_xfirst))))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send = 0x100U;
            }
        } else if ((1U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_yfirst), (IData)(vlSelfRef.__PVT__route_east_yfirst)), 
                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_yfirst), (IData)(vlSelfRef.__PVT__route_north_yfirst))))) {
            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send = 0x40U;
        } else if ((2U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_yfirst), (IData)(vlSelfRef.__PVT__route_east_yfirst)), 
                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_yfirst), (IData)(vlSelfRef.__PVT__route_north_yfirst))))) {
            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send = 0x100U;
        } else if ((4U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_yfirst), (IData)(vlSelfRef.__PVT__route_east_yfirst)), 
                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_yfirst), (IData)(vlSelfRef.__PVT__route_north_yfirst))))) {
            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send = 0x80U;
        } else if ((8U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_yfirst), (IData)(vlSelfRef.__PVT__route_east_yfirst)), 
                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_yfirst), (IData)(vlSelfRef.__PVT__route_north_yfirst))))) {
            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send = 0x200U;
        }
    } else {
        vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_req_vc0_tx_hs.__PVT__req_send = 0U;
    }
}
