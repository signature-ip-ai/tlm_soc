// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_rx_datproc__pi58.h"
#include "Vsig_topology_top_sig_node_rx_datproc_anyvc__pi66.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__0(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__1(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__0(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_FLITPEND;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_FLITPEND;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_RX_DATFLIT_s, vlSelfRef.__PVT__ic_RX_FLIT);
    vlSelfRef.__PVT__rcvd_proc_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                       & (0U != (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4))));
    vlSelfRef.__PVT__flit_is_vc0 = (8U > (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0U, 4)));
    vlSelfRef.__PVT__flit_is_vc1 = (8U <= (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0U, 4)));
    vlSelfRef.__PVT__rcvd_link_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                       & (0U == (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4))));
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_RX_FLIT_modified, vlSelfRef.__PVT__ic_RX_DATFLIT_s);
    VL_ASSIGNSEL_WI(680,11,0xfU, vlSelfRef.__PVT__ic_RX_FLIT_modified, 
                    VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), (IData)(vlSelfRef.__PVT__myproc_id)));
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = vlSelfRef.__PVT__crdt_balance_to_deactivate_link;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = (0x1fU & (((((((((0U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))) 
                           | (2U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                          | (4U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                         | (6U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                        | (1U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                       | (3U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                      | (5U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                     | (7U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))))
                     ? ((0U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                         ? (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)
                         : ((2U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                             ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link))
                             : ((4U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                 ? ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                    + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                 : ((6U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                     ? ((IData)(1U) 
                                        + ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                           + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))
                                     : ((1U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                         ? ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                            - (IData)(1U))
                                         : ((3U == 
                                             VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                             ? (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)
                                             : ((5U 
                                                 == 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                 ? 
                                                (((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                                  + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                 - (IData)(1U))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                                 + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))))))))
                     : (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc0 = (((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                            & (IData)(vlSelfRef.__PVT__flit_is_vc0)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_link_crdt)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc1 = (((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                            & (IData)(vlSelfRef.__PVT__flit_is_vc1)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_link_crdt)));
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc0__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_FLIT_modified);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc1__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_FLIT_modified);
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc0;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc1;
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_RX_FLIT, vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc0__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_RX_FLIT, vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc1__ic_RX_FLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__1(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcv_buff_released_vc0 = vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__send_working_update;
    vlSelfRef.__PVT__rcv_buff_released_vc1 = vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__send_working_update;
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
                                                       ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                        + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                                        : 
                                                       ((6U 
                                                         == 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                         ? 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                          + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))
                                                         : 
                                                        ((8U 
                                                          == 
                                                          VL_CONCAT_III(4,2,2, 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                          ? 
                                                         ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                          + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                                          : 
                                                         ((0xaU 
                                                           == 
                                                           VL_CONCAT_III(4,2,2, 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                           ? 
                                                          ((IData)(1U) 
                                                           + 
                                                           ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                            + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))
                                                           : 
                                                          ((0xcU 
                                                            == 
                                                            VL_CONCAT_III(4,2,2, 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                            ? 
                                                           (((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                             + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                            + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                                            : 
                                                           ((IData)(1U) 
                                                            + 
                                                            (((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                              + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                             + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))))))))))
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
                                                         ? 
                                                        (((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                          + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                         - (IData)(1U))
                                                         : 
                                                        ((7U 
                                                          == 
                                                          VL_CONCAT_III(4,2,2, 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                          ? 
                                                         ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                          + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                                          : 
                                                         ((9U 
                                                           == 
                                                           VL_CONCAT_III(4,2,2, 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                           ? 
                                                          (((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                            + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                           - (IData)(1U))
                                                           : 
                                                          ((0xbU 
                                                            == 
                                                            VL_CONCAT_III(4,2,2, 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                            ? 
                                                           ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                            + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                                            : 
                                                           ((0xdU 
                                                             == 
                                                             VL_CONCAT_III(4,2,2, 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                             ? 
                                                            ((((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                               + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                              + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                             - (IData)(1U))
                                                             : 
                                                            (((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                              + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                             + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))))))))
                                                      : (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__0(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_FLITPEND;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_FLITPEND;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_RX_DATFLIT_s, vlSelfRef.__PVT__ic_RX_FLIT);
    vlSelfRef.__PVT__rcvd_proc_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                       & (0U != (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4))));
    vlSelfRef.__PVT__flit_is_vc0 = (8U > (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0U, 4)));
    vlSelfRef.__PVT__flit_is_vc1 = (8U <= (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0U, 4)));
    vlSelfRef.__PVT__rcvd_link_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                       & (0U == (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4))));
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_RX_FLIT_modified, vlSelfRef.__PVT__ic_RX_DATFLIT_s);
    VL_ASSIGNSEL_WI(680,11,0xfU, vlSelfRef.__PVT__ic_RX_FLIT_modified, 
                    VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), (IData)(vlSelfRef.__PVT__myproc_id)));
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = vlSelfRef.__PVT__crdt_balance_to_deactivate_link;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = (0x1fU & (((((((((0U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))) 
                           | (2U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                          | (4U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                         | (6U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                        | (1U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                       | (3U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                      | (5U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                     | (7U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))))
                     ? ((0U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                         ? (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)
                         : ((2U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                             ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link))
                             : ((4U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                 ? ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                    + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                 : ((6U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                     ? ((IData)(1U) 
                                        + ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                           + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))
                                     : ((1U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                         ? ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                            - (IData)(1U))
                                         : ((3U == 
                                             VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                             ? (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)
                                             : ((5U 
                                                 == 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                 ? 
                                                (((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                                  + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                 - (IData)(1U))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                                 + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))))))))
                     : (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc0 = (((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                            & (IData)(vlSelfRef.__PVT__flit_is_vc0)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_link_crdt)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc1 = (((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                            & (IData)(vlSelfRef.__PVT__flit_is_vc1)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_link_crdt)));
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc0__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_FLIT_modified);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc1__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_FLIT_modified);
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc0;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc1;
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_RX_FLIT, vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc0__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_RX_FLIT, vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc1__ic_RX_FLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__1(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcv_buff_released_vc0 = vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__send_working_update;
    vlSelfRef.__PVT__rcv_buff_released_vc1 = vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__send_working_update;
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
                                                       ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                        + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                                        : 
                                                       ((6U 
                                                         == 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                         ? 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                          + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))
                                                         : 
                                                        ((8U 
                                                          == 
                                                          VL_CONCAT_III(4,2,2, 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                          ? 
                                                         ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                          + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                                          : 
                                                         ((0xaU 
                                                           == 
                                                           VL_CONCAT_III(4,2,2, 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                           ? 
                                                          ((IData)(1U) 
                                                           + 
                                                           ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                            + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))
                                                           : 
                                                          ((0xcU 
                                                            == 
                                                            VL_CONCAT_III(4,2,2, 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                            ? 
                                                           (((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                             + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                            + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                                            : 
                                                           ((IData)(1U) 
                                                            + 
                                                            (((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                              + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                             + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))))))))))
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
                                                         ? 
                                                        (((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                          + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                         - (IData)(1U))
                                                         : 
                                                        ((7U 
                                                          == 
                                                          VL_CONCAT_III(4,2,2, 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                          ? 
                                                         ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                          + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                                          : 
                                                         ((9U 
                                                           == 
                                                           VL_CONCAT_III(4,2,2, 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                           ? 
                                                          (((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                            + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                           - (IData)(1U))
                                                           : 
                                                          ((0xbU 
                                                            == 
                                                            VL_CONCAT_III(4,2,2, 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                            ? 
                                                           ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                            + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                                            : 
                                                           ((0xdU 
                                                             == 
                                                             VL_CONCAT_III(4,2,2, 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                             ? 
                                                            ((((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                               + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                              + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                             - (IData)(1U))
                                                             : 
                                                            (((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                              + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                             + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))))))))
                                                      : (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__0(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rxtop_datproc_fifo_is_full_vc0 
        = vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__o_rxtop_datproc_fifo_is_full;
    vlSelfRef.__PVT__o_rxtop_datproc_fifo_is_full_vc0 
        = vlSelfRef.__PVT__rxtop_datproc_fifo_is_full_vc0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__1(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rxtop_datproc_fifo_is_full_vc1 
        = vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__o_rxtop_datproc_fifo_is_full;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__2(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_vc0, vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__flit_out);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__3(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_vc1, vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__flit_out);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__0(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__1(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__3(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_FLITPEND;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_FLITPEND;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_RX_DATFLIT_s, vlSelfRef.__PVT__ic_RX_FLIT);
    vlSelfRef.__PVT__rcvd_proc_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                       & (0U != (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4))));
    vlSelfRef.__PVT__flit_is_vc0 = (8U > (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0U, 4)));
    vlSelfRef.__PVT__flit_is_vc1 = (8U <= (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0U, 4)));
    vlSelfRef.__PVT__rcvd_link_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                       & (0U == (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4))));
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_RX_FLIT_modified, vlSelfRef.__PVT__ic_RX_DATFLIT_s);
    VL_ASSIGNSEL_WI(680,11,0xfU, vlSelfRef.__PVT__ic_RX_FLIT_modified, 
                    VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), (IData)(vlSelfRef.__PVT__myproc_id)));
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = vlSelfRef.__PVT__crdt_balance_to_deactivate_link;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = (0x1fU & (((((((((0U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))) 
                           | (2U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                          | (4U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                         | (6U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                        | (1U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                       | (3U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                      | (5U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                     | (7U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))))
                     ? ((0U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                         ? (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)
                         : ((2U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                             ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link))
                             : ((4U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                 ? ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                    + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                 : ((6U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                     ? ((IData)(1U) 
                                        + ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                           + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))
                                     : ((1U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                         ? ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                            - (IData)(1U))
                                         : ((3U == 
                                             VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                             ? (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)
                                             : ((5U 
                                                 == 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                 ? 
                                                (((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                                  + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                 - (IData)(1U))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                                 + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))))))))
                     : (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc0 = (((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                            & (IData)(vlSelfRef.__PVT__flit_is_vc0)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_link_crdt)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc1 = (((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                            & (IData)(vlSelfRef.__PVT__flit_is_vc1)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_link_crdt)));
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc0__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_FLIT_modified);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc1__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_FLIT_modified);
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc0;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc1;
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_RX_FLIT, vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc0__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_RX_FLIT, vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc1__ic_RX_FLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__4(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcv_buff_released_vc0 = vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__send_working_update;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__5(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcv_buff_released_vc1 = vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__send_working_update;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__0(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__1(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__0(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_FLITPEND;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_FLITPEND;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_RX_DATFLIT_s, vlSelfRef.__PVT__ic_RX_FLIT);
    vlSelfRef.__PVT__rcvd_proc_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                       & (0U != (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4))));
    vlSelfRef.__PVT__flit_is_vc0 = (8U > (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0U, 4)));
    vlSelfRef.__PVT__flit_is_vc1 = (8U <= (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0U, 4)));
    vlSelfRef.__PVT__rcvd_link_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                       & (0U == (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4))));
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_RX_FLIT_modified, vlSelfRef.__PVT__ic_RX_DATFLIT_s);
    VL_ASSIGNSEL_WI(680,11,0xfU, vlSelfRef.__PVT__ic_RX_FLIT_modified, 
                    VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), (IData)(vlSelfRef.__PVT__myproc_id)));
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = vlSelfRef.__PVT__crdt_balance_to_deactivate_link;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = (0x1fU & (((((((((0U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))) 
                           | (2U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                          | (4U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                         | (6U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                        | (1U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                       | (3U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                      | (5U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                     | (7U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))))
                     ? ((0U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                         ? (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)
                         : ((2U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                             ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link))
                             : ((4U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                 ? ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                    + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                 : ((6U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                     ? ((IData)(1U) 
                                        + ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                           + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))
                                     : ((1U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                         ? ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                            - (IData)(1U))
                                         : ((3U == 
                                             VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                             ? (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)
                                             : ((5U 
                                                 == 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                 ? 
                                                (((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                                  + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                 - (IData)(1U))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                                 + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))))))))
                     : (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc0 = (((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                            & (IData)(vlSelfRef.__PVT__flit_is_vc0)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_link_crdt)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc1 = (((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                            & (IData)(vlSelfRef.__PVT__flit_is_vc1)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_link_crdt)));
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc0__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_FLIT_modified);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc1__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_FLIT_modified);
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc0;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc1;
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_RX_FLIT, vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc0__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_RX_FLIT, vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc1__ic_RX_FLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__1(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcv_buff_released_vc0 = vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__send_working_update;
    vlSelfRef.__PVT__rcv_buff_released_vc1 = vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__send_working_update;
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
                                                       ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                        + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                                        : 
                                                       ((6U 
                                                         == 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                         ? 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                          + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))
                                                         : 
                                                        ((8U 
                                                          == 
                                                          VL_CONCAT_III(4,2,2, 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                          ? 
                                                         ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                          + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                                          : 
                                                         ((0xaU 
                                                           == 
                                                           VL_CONCAT_III(4,2,2, 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                           ? 
                                                          ((IData)(1U) 
                                                           + 
                                                           ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                            + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))
                                                           : 
                                                          ((0xcU 
                                                            == 
                                                            VL_CONCAT_III(4,2,2, 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                            ? 
                                                           (((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                             + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                            + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                                            : 
                                                           ((IData)(1U) 
                                                            + 
                                                            (((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                              + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                             + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))))))))))
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
                                                         ? 
                                                        (((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                          + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                         - (IData)(1U))
                                                         : 
                                                        ((7U 
                                                          == 
                                                          VL_CONCAT_III(4,2,2, 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                          ? 
                                                         ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                          + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                                          : 
                                                         ((9U 
                                                           == 
                                                           VL_CONCAT_III(4,2,2, 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                           ? 
                                                          (((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                            + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                           - (IData)(1U))
                                                           : 
                                                          ((0xbU 
                                                            == 
                                                            VL_CONCAT_III(4,2,2, 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                            ? 
                                                           ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                            + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                                            : 
                                                           ((0xdU 
                                                             == 
                                                             VL_CONCAT_III(4,2,2, 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                             ? 
                                                            ((((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                               + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                              + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                             - (IData)(1U))
                                                             : 
                                                            (((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                              + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                             + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))))))))
                                                      : (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__0(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_FLITPEND;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_FLITPEND;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_RX_DATFLIT_s, vlSelfRef.__PVT__ic_RX_FLIT);
    vlSelfRef.__PVT__rcvd_proc_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                       & (0U != (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4))));
    vlSelfRef.__PVT__flit_is_vc0 = (8U > (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0U, 4)));
    vlSelfRef.__PVT__flit_is_vc1 = (8U <= (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0U, 4)));
    vlSelfRef.__PVT__rcvd_link_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                       & (0U == (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4))));
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_RX_FLIT_modified, vlSelfRef.__PVT__ic_RX_DATFLIT_s);
    VL_ASSIGNSEL_WI(680,11,0xfU, vlSelfRef.__PVT__ic_RX_FLIT_modified, 
                    VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), (IData)(vlSelfRef.__PVT__myproc_id)));
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = vlSelfRef.__PVT__crdt_balance_to_deactivate_link;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = (0x1fU & (((((((((0U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))) 
                           | (2U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                          | (4U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                         | (6U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                        | (1U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                       | (3U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                      | (5U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                     | (7U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))))
                     ? ((0U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                         ? (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)
                         : ((2U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                             ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link))
                             : ((4U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                 ? ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                    + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                 : ((6U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                     ? ((IData)(1U) 
                                        + ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                           + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))
                                     : ((1U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                         ? ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                            - (IData)(1U))
                                         : ((3U == 
                                             VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                             ? (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)
                                             : ((5U 
                                                 == 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                 ? 
                                                (((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                                  + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                 - (IData)(1U))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                                 + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))))))))
                     : (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc0 = (((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                            & (IData)(vlSelfRef.__PVT__flit_is_vc0)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_link_crdt)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc1 = (((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                            & (IData)(vlSelfRef.__PVT__flit_is_vc1)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_link_crdt)));
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc0__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_FLIT_modified);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc1__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_FLIT_modified);
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc0;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc1;
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_RX_FLIT, vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc0__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_RX_FLIT, vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc1__ic_RX_FLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__1(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcv_buff_released_vc0 = vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__send_working_update;
    vlSelfRef.__PVT__rcv_buff_released_vc1 = vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__send_working_update;
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
                                                       ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                        + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                                        : 
                                                       ((6U 
                                                         == 
                                                         VL_CONCAT_III(4,2,2, 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                         ? 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                          + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))
                                                         : 
                                                        ((8U 
                                                          == 
                                                          VL_CONCAT_III(4,2,2, 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                          ? 
                                                         ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                          + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                                          : 
                                                         ((0xaU 
                                                           == 
                                                           VL_CONCAT_III(4,2,2, 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                           ? 
                                                          ((IData)(1U) 
                                                           + 
                                                           ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                            + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))
                                                           : 
                                                          ((0xcU 
                                                            == 
                                                            VL_CONCAT_III(4,2,2, 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                            ? 
                                                           (((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                             + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                            + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                                            : 
                                                           ((IData)(1U) 
                                                            + 
                                                            (((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                              + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                             + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))))))))))
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
                                                         ? 
                                                        (((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                          + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                         - (IData)(1U))
                                                         : 
                                                        ((7U 
                                                          == 
                                                          VL_CONCAT_III(4,2,2, 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                          ? 
                                                         ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                          + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                                          : 
                                                         ((9U 
                                                           == 
                                                           VL_CONCAT_III(4,2,2, 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                           ? 
                                                          (((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                            + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                           - (IData)(1U))
                                                           : 
                                                          ((0xbU 
                                                            == 
                                                            VL_CONCAT_III(4,2,2, 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                          VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                            ? 
                                                           ((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                            + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                                            : 
                                                           ((0xdU 
                                                             == 
                                                             VL_CONCAT_III(4,2,2, 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                             ? 
                                                            ((((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                               + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                              + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                             - (IData)(1U))
                                                             : 
                                                            (((IData)(vlSelfRef.__PVT__crdt_balnce_tobesent) 
                                                              + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                             + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))))))))
                                                      : (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__0(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rxtop_datproc_fifo_is_full_vc0 
        = vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__o_rxtop_datproc_fifo_is_full;
    vlSelfRef.__PVT__o_rxtop_datproc_fifo_is_full_vc0 
        = vlSelfRef.__PVT__rxtop_datproc_fifo_is_full_vc0;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__1(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rxtop_datproc_fifo_is_full_vc1 
        = vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__o_rxtop_datproc_fifo_is_full;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__2(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_vc0, vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__flit_out);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__3(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(686,vlSelfRef.__PVT__flit_out_vc1, vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__flit_out);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__0(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__1(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__3(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_FLITPEND;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__ic_RX_FLITPEND;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_RX_DATFLIT_s, vlSelfRef.__PVT__ic_RX_FLIT);
    vlSelfRef.__PVT__rcvd_proc_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                       & (0U != (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4))));
    vlSelfRef.__PVT__flit_is_vc0 = (8U > (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0U, 4)));
    vlSelfRef.__PVT__flit_is_vc1 = (8U <= (0xfU & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0U, 4)));
    vlSelfRef.__PVT__rcvd_link_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                       & (0U == (0xfU 
                                                 & VL_SEL_IWII(680, vlSelfRef.__PVT__ic_RX_DATFLIT_s, 0x31U, 4))));
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_RX_FLIT_modified, vlSelfRef.__PVT__ic_RX_DATFLIT_s);
    VL_ASSIGNSEL_WI(680,11,0xfU, vlSelfRef.__PVT__ic_RX_FLIT_modified, 
                    VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), (IData)(vlSelfRef.__PVT__myproc_id)));
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = vlSelfRef.__PVT__crdt_balance_to_deactivate_link;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = (0x1fU & (((((((((0U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))) 
                           | (2U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                          | (4U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                         | (6U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                        | (1U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                       | (3U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                      | (5U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))) 
                     | (7U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV)))))
                     ? ((0U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                         ? (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)
                         : ((2U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                             ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link))
                             : ((4U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                 ? ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                    + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value))
                                 : ((6U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                     ? ((IData)(1U) 
                                        + ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                           + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))
                                     : ((1U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                         ? ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                            - (IData)(1U))
                                         : ((3U == 
                                             VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                             ? (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)
                                             : ((5U 
                                                 == 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__rcvd_proc_crdt), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_link_crdt), (IData)(vlSelfRef.__PVT__ic_RX_LCRDV))))
                                                 ? 
                                                (((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                                  + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)) 
                                                 - (IData)(1U))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                                                 + (IData)(vlSelfRef.__PVT__rcv_buff_released_credit_value)))))))))
                     : (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc0 = (((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                            & (IData)(vlSelfRef.__PVT__flit_is_vc0)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_link_crdt)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc1 = (((IData)(vlSelfRef.__PVT__ic_RX_FLITV) 
                                            & (IData)(vlSelfRef.__PVT__flit_is_vc1)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_link_crdt)));
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc0__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_FLIT_modified);
    VL_ASSIGN_W(680,vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc1__ic_RX_FLIT, vlSelfRef.__PVT__ic_RX_FLIT_modified);
    vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc0;
    vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc1;
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__ic_RX_FLIT, vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc0__ic_RX_FLIT);
    VL_ASSIGN_W(680,vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__ic_RX_FLIT, vlSelfRef.__Vcellinp__sig_node_rx_datproc_vc1__ic_RX_FLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__4(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcv_buff_released_vc0 = vlSelf->__PVT__sig_node_rx_datproc_vc0->__PVT__send_working_update;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__5(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcv_buff_released_vc1 = vlSelf->__PVT__sig_node_rx_datproc_vc1->__PVT__send_working_update;
}
