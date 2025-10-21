// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_rx_datproc__pi58.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__4(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__crdt_balance_to_deactivate_link 
        = vlSelfRef.__PVT__crdt_balance_to_deactivate_link;
    vlSelfRef.__Vdly__credits_backto_full = vlSelfRef.__PVT__credits_backto_full;
    vlSelfRef.__Vdly__crdt_balnce_tobesent = vlSelfRef.__PVT__crdt_balnce_tobesent;
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__Vdly__crdt_balnce_tobesent = 4U;
            vlSelfRef.__Vdly__crdt_balance_to_deactivate_link = 4U;
            vlSelfRef.__Vdly__credits_backto_full = 0U;
        } else {
            vlSelfRef.__Vdly__crdt_balnce_tobesent 
                = vlSelfRef.__PVT__crdt_balnce_tobesent_nxt;
            vlSelfRef.__Vdly__crdt_balance_to_deactivate_link 
                = vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt;
            vlSelfRef.__Vdly__credits_backto_full = vlSelfRef.__PVT__credits_backto_full_nxt;
        }
    } else {
        vlSelfRef.__Vdly__crdt_balnce_tobesent = 4U;
        vlSelfRef.__Vdly__crdt_balance_to_deactivate_link = 4U;
        vlSelfRef.__Vdly__credits_backto_full = 0U;
    }
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link 
        = vlSelfRef.__Vdly__crdt_balance_to_deactivate_link;
    vlSelfRef.__PVT__credits_backto_full = vlSelfRef.__Vdly__credits_backto_full;
    vlSelfRef.__PVT__crdt_balnce_tobesent = vlSelfRef.__Vdly__crdt_balnce_tobesent;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__2(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__credits_backto_full_nxt = ((~ (IData)(vlSelfRef.__PVT__rcvr_can_send_crdt)) 
                                                & (4U 
                                                   == (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)));
    vlSelfRef.__PVT__send_credit = ((0U != (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent)) 
                                    & (IData)(vlSelfRef.__PVT__rcvr_can_send_crdt));
    vlSelfRef.__PVT__ic_RX_LCRDV = vlSelfRef.__PVT__send_credit;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__6(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__4(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__crdt_balance_to_deactivate_link 
        = vlSelfRef.__PVT__crdt_balance_to_deactivate_link;
    vlSelfRef.__Vdly__credits_backto_full = vlSelfRef.__PVT__credits_backto_full;
    vlSelfRef.__Vdly__crdt_balnce_tobesent = vlSelfRef.__PVT__crdt_balnce_tobesent;
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__Vdly__crdt_balnce_tobesent = 4U;
            vlSelfRef.__Vdly__crdt_balance_to_deactivate_link = 4U;
            vlSelfRef.__Vdly__credits_backto_full = 0U;
        } else {
            vlSelfRef.__Vdly__crdt_balnce_tobesent 
                = vlSelfRef.__PVT__crdt_balnce_tobesent_nxt;
            vlSelfRef.__Vdly__crdt_balance_to_deactivate_link 
                = vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt;
            vlSelfRef.__Vdly__credits_backto_full = vlSelfRef.__PVT__credits_backto_full_nxt;
        }
    } else {
        vlSelfRef.__Vdly__crdt_balnce_tobesent = 4U;
        vlSelfRef.__Vdly__crdt_balance_to_deactivate_link = 4U;
        vlSelfRef.__Vdly__credits_backto_full = 0U;
    }
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link 
        = vlSelfRef.__Vdly__crdt_balance_to_deactivate_link;
    vlSelfRef.__PVT__credits_backto_full = vlSelfRef.__Vdly__credits_backto_full;
    vlSelfRef.__PVT__crdt_balnce_tobesent = vlSelfRef.__Vdly__crdt_balnce_tobesent;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__2(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__credits_backto_full_nxt = ((~ (IData)(vlSelfRef.__PVT__rcvr_can_send_crdt)) 
                                                & (4U 
                                                   == (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)));
    vlSelfRef.__PVT__send_credit = ((0U != (IData)(vlSelfRef.__PVT__crdt_balnce_tobesent)) 
                                    & (IData)(vlSelfRef.__PVT__rcvr_can_send_crdt));
    vlSelfRef.__PVT__ic_RX_LCRDV = vlSelfRef.__PVT__send_credit;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__6(Vsig_topology_top_sig_node_rx_datproc__pi58* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_datproc__pi58___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
