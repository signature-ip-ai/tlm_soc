// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1.h"
#include "Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi64.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0(Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__myvc_value = 0U;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__myvc_value = 1U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__0(Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rxtop_rspproc_fifo_is_full_vc0 
        = vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__o_rxtop_rspproc_fifo_is_full;
    vlSelfRef.__PVT__rxtop_rspproc_fifo_is_full_vc1 
        = vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__o_rxtop_rspproc_fifo_is_full;
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__enable_balanced_routing 
        = vlSelfRef.__PVT__enable_balanced_routing;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__enable_balanced_routing 
        = vlSelfRef.__PVT__enable_balanced_routing;
    vlSelfRef.__PVT__o_rxtop_rspproc_fifo_is_full_vc0 
        = vlSelfRef.__PVT__rxtop_rspproc_fifo_is_full_vc0;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__1(Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__2(Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__icx_exist 
        = vlSelfRef.__PVT__icx_exist;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__icx_exist 
        = vlSelfRef.__PVT__icx_exist;
    vlSelfRef.__PVT__credits_backto_full_nxt = ((~ (IData)(vlSelfRef.__PVT__rcvr_can_send_crdt)) 
                                                & (4U 
                                                   == (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)));
    vlSelfRef.__PVT__send_credit = ((0U != (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent)) 
                                    & (IData)(vlSelfRef.__PVT__rcvr_can_send_crdt));
    vlSelfRef.__PVT__ic_RX_LCRDV = vlSelfRef.__PVT__send_credit;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__3(Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__rddata_snprsp_flit_fifo_tx_snp, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__rddata_snprsp_flit_fifo_tx_snp, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
    vlSelfRef.__PVT__snpresp_flit_is_vc0 = (8U > (0xfU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, 0U, 4)));
    vlSelfRef.__PVT__snpresp_flit_is_vc1 = (8U <= (0xfU 
                                                   & VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, 0U, 4)));
    vlSelfRef.__PVT__snpresp_available_sysco_disabled_vc0 
        = ((~ (IData)(vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp)) 
           & (IData)(vlSelfRef.__PVT__snpresp_flit_is_vc0));
    vlSelfRef.__PVT__snpresp_available_sysco_disabled_vc1 
        = ((~ (IData)(vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp)) 
           & (IData)(vlSelfRef.__PVT__snpresp_flit_is_vc1));
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__snpresp_available_sysco_disabled 
        = vlSelfRef.__PVT__snpresp_available_sysco_disabled_vc0;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__snpresp_available_sysco_disabled 
        = vlSelfRef.__PVT__snpresp_available_sysco_disabled_vc1;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__4(Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__0(Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_FLITPEND;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_FLITPEND;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = vlSelfRef.__PVT__crdt_balance_to_deactivate_link;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = (0x1fU & ((0U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_FLITV), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))
                     ? (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)
                     : ((1U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_FLITV), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))
                         ? ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                            - (IData)(1U)) : ((2U == 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_FLITV), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link))
                                               : (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)))));
    VL_ASSIGN_W(73,vlSelfRef.__PVT__ic_RX_RSPFLIT_s, vlSelfRef.__PVT__ic_RX_FLIT);
    vlSelfRef.__PVT__flit_is_vc0 = (8U > (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0U, 4)));
    vlSelfRef.__PVT__flit_is_vc1 = (8U <= (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0U, 4)));
    vlSelfRef.__PVT__rcvd_link_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                       & (0U == (0x1fU 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0x26U, 5))));
    VL_ASSIGN_W(73,vlSelfRef.__PVT__ic_RX_FLIT_modified, vlSelfRef.__PVT__ic_RX_RSPFLIT_s);
    VL_ASSIGNSEL_WI(73,11,0xfU, vlSelfRef.__PVT__ic_RX_FLIT_modified, 
                    VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), (IData)(vlSelfRef.__PVT__myproc_id)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc0 = (((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                            & (IData)(vlSelfRef.__PVT__flit_is_vc0)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_link_crdt)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc1 = (((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                            & (IData)(vlSelfRef.__PVT__flit_is_vc1)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_link_crdt)));
    VL_ASSIGN_W(73,vlSelfRef.__Vcellinp__sig_node_rx_rspproc_vc0__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_FLIT_modified);
    VL_ASSIGN_W(73,vlSelfRef.__Vcellinp__sig_node_rx_rspproc_vc1__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_FLIT_modified);
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc0;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc1;
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__ic_RX_FLIT, vlSelfRef.__Vcellinp__sig_node_rx_rspproc_vc0__ic_RX_FLIT);
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__ic_RX_FLIT, vlSelfRef.__Vcellinp__sig_node_rx_rspproc_vc1__ic_RX_FLIT);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__1(Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp_vc0 
        = vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__rden_snprsp_flit_fifo_tx_snp;
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_vc0, vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__flit_out);
    vlSelfRef.__PVT__rcv_buff_released_vc0 = vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__send_working_update;
    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp_vc1 
        = vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__rden_snprsp_flit_fifo_tx_snp;
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_vc1, vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__flit_out);
    vlSelfRef.__PVT__rcv_buff_released_vc1 = vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__send_working_update;
    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = 
        ((IData)(vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp_vc0) 
         | (IData)(vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp_vc1));
    vlSelfRef.__PVT__crdt_balnce_tobesent_nxt = vlSelfRef.__PVT__crdt_balnce_tobesent;
    vlSelfRef.__PVT__crdt_balnce_tobesent_nxt = (0x1fU 
                                                 & (((((((((0U 
                                                            == 
                                                            VL_CONCAT_III(4,2,2, 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))) 
                                                           | (2U 
                                                              == 
                                                              VL_CONCAT_III(4,2,2, 
                                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                          | (4U 
                                                             == 
                                                             VL_CONCAT_III(4,2,2, 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                         | (6U 
                                                            == 
                                                            VL_CONCAT_III(4,2,2, 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                        | (8U 
                                                           == 
                                                           VL_CONCAT_III(4,2,2, 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                       | (0xaU 
                                                          == 
                                                          VL_CONCAT_III(4,2,2, 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                      | (0xcU 
                                                         == 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                     | (0xeU 
                                                        == 
                                                        VL_CONCAT_III(4,2,2, 
                                                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      VL_CONCAT_III(4,2,2, 
                                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                      ? (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       VL_CONCAT_III(4,2,2, 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))
                                                       : 
                                                      ((4U 
                                                        == 
                                                        VL_CONCAT_III(4,2,2, 
                                                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                        ? 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))
                                                        : 
                                                       ((6U 
                                                         == 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))
                                                         : 
                                                        ((8U 
                                                          == 
                                                          VL_CONCAT_III(4,2,2, 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))
                                                          : 
                                                         ((0xaU 
                                                           == 
                                                           VL_CONCAT_III(4,2,2, 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                           ? 
                                                          ((IData)(2U) 
                                                           + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))
                                                           : 
                                                          ((0xcU 
                                                            == 
                                                            VL_CONCAT_III(4,2,2, 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                            ? 
                                                           ((IData)(2U) 
                                                            + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))
                                                            : 
                                                           ((IData)(3U) 
                                                            + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent)))))))))
                                                     : 
                                                    (((((((((1U 
                                                             == 
                                                             VL_CONCAT_III(4,2,2, 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))) 
                                                            | (3U 
                                                               == 
                                                               VL_CONCAT_III(4,2,2, 
                                                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                           | (5U 
                                                              == 
                                                              VL_CONCAT_III(4,2,2, 
                                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                          | (7U 
                                                             == 
                                                             VL_CONCAT_III(4,2,2, 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                         | (9U 
                                                            == 
                                                            VL_CONCAT_III(4,2,2, 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                        | (0xbU 
                                                           == 
                                                           VL_CONCAT_III(4,2,2, 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                       | (0xdU 
                                                          == 
                                                          VL_CONCAT_III(4,2,2, 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                      | (0xfU 
                                                         == 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))))
                                                      ? 
                                                     ((1U 
                                                       == 
                                                       VL_CONCAT_III(4,2,2, 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                       - (IData)(1U))
                                                       : 
                                                      ((3U 
                                                        == 
                                                        VL_CONCAT_III(4,2,2, 
                                                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                        ? (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent)
                                                        : 
                                                       ((5U 
                                                         == 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                         ? (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent)
                                                         : 
                                                        ((7U 
                                                          == 
                                                          VL_CONCAT_III(4,2,2, 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))
                                                          : 
                                                         ((9U 
                                                           == 
                                                           VL_CONCAT_III(4,2,2, 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                           ? (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent)
                                                           : 
                                                          ((0xbU 
                                                            == 
                                                            VL_CONCAT_III(4,2,2, 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))
                                                            : 
                                                           ((0xdU 
                                                             == 
                                                             VL_CONCAT_III(4,2,2, 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))
                                                             : 
                                                            ((IData)(2U) 
                                                             + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent)))))))))
                                                      : (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0(Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__myvc_value = 0U;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__myvc_value = 1U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__0(Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rxtop_rspproc_fifo_is_full_vc0 
        = vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__o_rxtop_rspproc_fifo_is_full;
    vlSelfRef.__PVT__rxtop_rspproc_fifo_is_full_vc1 
        = vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__o_rxtop_rspproc_fifo_is_full;
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__enable_balanced_routing 
        = vlSelfRef.__PVT__enable_balanced_routing;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__enable_balanced_routing 
        = vlSelfRef.__PVT__enable_balanced_routing;
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__i_ucie_bridge_locations[0U] 
        = vlSelfRef.__PVT__i_ucie_bridge_locations[0U];
    vlSelfRef.__PVT__o_rxtop_rspproc_fifo_is_full_vc0 
        = vlSelfRef.__PVT__rxtop_rspproc_fifo_is_full_vc0;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__1(Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__mycluster_id 
        = vlSelfRef.__PVT__mycluster_id;
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__icx_exist 
        = vlSelfRef.__PVT__icx_exist;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__icx_exist 
        = vlSelfRef.__PVT__icx_exist;
    vlSelfRef.__PVT__credits_backto_full_nxt = ((~ (IData)(vlSelfRef.__PVT__rcvr_can_send_crdt)) 
                                                & (4U 
                                                   == (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)));
    vlSelfRef.__PVT__send_credit = ((0U != (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent)) 
                                    & (IData)(vlSelfRef.__PVT__rcvr_can_send_crdt));
    vlSelfRef.__PVT__ic_RX_LCRDV = vlSelfRef.__PVT__send_credit;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__2(Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__rddata_snprsp_flit_fifo_tx_snp, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__rddata_snprsp_flit_fifo_tx_snp, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp);
    vlSelfRef.__PVT__snpresp_flit_is_vc0 = (8U > (0xfU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, 0U, 4)));
    vlSelfRef.__PVT__snpresp_flit_is_vc1 = (8U <= (0xfU 
                                                   & VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp_s, 0U, 4)));
    vlSelfRef.__PVT__snpresp_available_sysco_disabled_vc0 
        = ((~ (IData)(vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp)) 
           & (IData)(vlSelfRef.__PVT__snpresp_flit_is_vc0));
    vlSelfRef.__PVT__snpresp_available_sysco_disabled_vc1 
        = ((~ (IData)(vlSelfRef.__PVT__empty_snprsp_flit_fifo_tx_snp)) 
           & (IData)(vlSelfRef.__PVT__snpresp_flit_is_vc1));
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__snpresp_available_sysco_disabled 
        = vlSelfRef.__PVT__snpresp_available_sysco_disabled_vc0;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__snpresp_available_sysco_disabled 
        = vlSelfRef.__PVT__snpresp_available_sysco_disabled_vc1;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__3(Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__0(Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_FLITPEND;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_FLITPEND;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = vlSelfRef.__PVT__crdt_balance_to_deactivate_link;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = (0x1fU & ((0U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_FLITV), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))
                     ? (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)
                     : ((1U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_FLITV), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))
                         ? ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                            - (IData)(1U)) : ((2U == 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_FLITV), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link))
                                               : (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)))));
    VL_ASSIGN_W(73,vlSelfRef.__PVT__ic_RX_RSPFLIT_s, vlSelfRef.__PVT__ic_RX_FLIT);
    vlSelfRef.__PVT__flit_is_vc0 = (8U > (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0U, 4)));
    vlSelfRef.__PVT__flit_is_vc1 = (8U <= (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0U, 4)));
    vlSelfRef.__PVT__rcvd_link_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                       & (0U == (0x1fU 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0x26U, 5))));
    VL_ASSIGN_W(73,vlSelfRef.__PVT__ic_RX_FLIT_modified, vlSelfRef.__PVT__ic_RX_RSPFLIT_s);
    VL_ASSIGNSEL_WI(73,11,0xfU, vlSelfRef.__PVT__ic_RX_FLIT_modified, 
                    VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), (IData)(vlSelfRef.__PVT__myproc_id)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc0 = (((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                            & (IData)(vlSelfRef.__PVT__flit_is_vc0)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_link_crdt)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc1 = (((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                            & (IData)(vlSelfRef.__PVT__flit_is_vc1)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_link_crdt)));
    VL_ASSIGN_W(73,vlSelfRef.__Vcellinp__sig_node_rx_rspproc_vc0__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_FLIT_modified);
    VL_ASSIGN_W(73,vlSelfRef.__Vcellinp__sig_node_rx_rspproc_vc1__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_FLIT_modified);
    vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc0;
    vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc1;
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__ic_RX_FLIT, vlSelfRef.__Vcellinp__sig_node_rx_rspproc_vc0__ic_RX_FLIT);
    VL_ASSIGN_W(73,vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__ic_RX_FLIT, vlSelfRef.__Vcellinp__sig_node_rx_rspproc_vc1__ic_RX_FLIT);
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__1(Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_rspproc__P49_Uz1___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp_vc0 
        = vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__rden_snprsp_flit_fifo_tx_snp;
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_vc0, vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__flit_out);
    vlSelfRef.__PVT__rcv_buff_released_vc0 = vlSelf->__PVT__sig_node_rx_rspproc_vc0->__PVT__send_working_update;
    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp_vc1 
        = vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__rden_snprsp_flit_fifo_tx_snp;
    VL_ASSIGN_W(79,vlSelfRef.__PVT__flit_out_vc1, vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__flit_out);
    vlSelfRef.__PVT__rcv_buff_released_vc1 = vlSelf->__PVT__sig_node_rx_rspproc_vc1->__PVT__send_working_update;
    vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp = 
        ((IData)(vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp_vc0) 
         | (IData)(vlSelfRef.__PVT__rden_snprsp_flit_fifo_tx_snp_vc1));
    vlSelfRef.__PVT__crdt_balnce_tobesent_nxt = vlSelfRef.__PVT__crdt_balnce_tobesent;
    vlSelfRef.__PVT__crdt_balnce_tobesent_nxt = (0x1fU 
                                                 & (((((((((0U 
                                                            == 
                                                            VL_CONCAT_III(4,2,2, 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))) 
                                                           | (2U 
                                                              == 
                                                              VL_CONCAT_III(4,2,2, 
                                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                          | (4U 
                                                             == 
                                                             VL_CONCAT_III(4,2,2, 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                         | (6U 
                                                            == 
                                                            VL_CONCAT_III(4,2,2, 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                        | (8U 
                                                           == 
                                                           VL_CONCAT_III(4,2,2, 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                       | (0xaU 
                                                          == 
                                                          VL_CONCAT_III(4,2,2, 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                      | (0xcU 
                                                         == 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                     | (0xeU 
                                                        == 
                                                        VL_CONCAT_III(4,2,2, 
                                                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      VL_CONCAT_III(4,2,2, 
                                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                      ? (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       VL_CONCAT_III(4,2,2, 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))
                                                       : 
                                                      ((4U 
                                                        == 
                                                        VL_CONCAT_III(4,2,2, 
                                                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                        ? 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))
                                                        : 
                                                       ((6U 
                                                         == 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                         ? 
                                                        ((IData)(2U) 
                                                         + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))
                                                         : 
                                                        ((8U 
                                                          == 
                                                          VL_CONCAT_III(4,2,2, 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))
                                                          : 
                                                         ((0xaU 
                                                           == 
                                                           VL_CONCAT_III(4,2,2, 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                           ? 
                                                          ((IData)(2U) 
                                                           + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))
                                                           : 
                                                          ((0xcU 
                                                            == 
                                                            VL_CONCAT_III(4,2,2, 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                            ? 
                                                           ((IData)(2U) 
                                                            + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))
                                                            : 
                                                           ((IData)(3U) 
                                                            + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent)))))))))
                                                     : 
                                                    (((((((((1U 
                                                             == 
                                                             VL_CONCAT_III(4,2,2, 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))) 
                                                            | (3U 
                                                               == 
                                                               VL_CONCAT_III(4,2,2, 
                                                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                           | (5U 
                                                              == 
                                                              VL_CONCAT_III(4,2,2, 
                                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                          | (7U 
                                                             == 
                                                             VL_CONCAT_III(4,2,2, 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                         | (9U 
                                                            == 
                                                            VL_CONCAT_III(4,2,2, 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                        | (0xbU 
                                                           == 
                                                           VL_CONCAT_III(4,2,2, 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                       | (0xdU 
                                                          == 
                                                          VL_CONCAT_III(4,2,2, 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                                                      | (0xfU 
                                                         == 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))))
                                                      ? 
                                                     ((1U 
                                                       == 
                                                       VL_CONCAT_III(4,2,2, 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                       - (IData)(1U))
                                                       : 
                                                      ((3U 
                                                        == 
                                                        VL_CONCAT_III(4,2,2, 
                                                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                        ? (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent)
                                                        : 
                                                       ((5U 
                                                         == 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                         ? (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent)
                                                         : 
                                                        ((7U 
                                                          == 
                                                          VL_CONCAT_III(4,2,2, 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))
                                                          : 
                                                         ((9U 
                                                           == 
                                                           VL_CONCAT_III(4,2,2, 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                           ? (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent)
                                                           : 
                                                          ((0xbU 
                                                            == 
                                                            VL_CONCAT_III(4,2,2, 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                            ? 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))
                                                            : 
                                                           ((0xdU 
                                                             == 
                                                             VL_CONCAT_III(4,2,2, 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                             ? 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))
                                                             : 
                                                            ((IData)(2U) 
                                                             + (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent)))))))))
                                                      : (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))));
}
