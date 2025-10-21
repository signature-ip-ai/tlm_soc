// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_lnkactive_rcv.h"

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_rcv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__2(Vsig_topology_top_sig_lnkactive_rcv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_rcv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__lnkstate = vlSelfRef.__PVT__lnkstate;
    vlSelfRef.__Vdly__RXLINKACTIVEACK = vlSelfRef.__PVT__RXLINKACTIVEACK;
    if (vlSelfRef.__PVT__rstb_clk) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__Vdly__lnkstate = 0U;
            vlSelfRef.__Vdly__RXLINKACTIVEACK = 0U;
        } else {
            vlSelfRef.__Vdly__lnkstate = vlSelfRef.__PVT__lnkstate_nxt;
            vlSelfRef.__Vdly__RXLINKACTIVEACK = vlSelfRef.__PVT__RXLINKACTIVEACK_nxt;
        }
    } else {
        vlSelfRef.__Vdly__lnkstate = 0U;
        vlSelfRef.__Vdly__RXLINKACTIVEACK = 0U;
    }
    vlSelfRef.__PVT__lnkstate = vlSelfRef.__Vdly__lnkstate;
    vlSelfRef.__PVT__RXLINKACTIVEACK = vlSelfRef.__Vdly__RXLINKACTIVEACK;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_rcv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__1(Vsig_topology_top_sig_lnkactive_rcv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_rcv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lnkstate_nxt = vlSelfRef.__PVT__lnkstate;
    vlSelfRef.__PVT__RXLINKACTIVEACK_nxt = vlSelfRef.__PVT__RXLINKACTIVEACK;
    vlSelfRef.__PVT__rcvr_can_send_crdt = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if (vlSelfRef.__PVT__RXLINKACTIVEREQ_sync) {
            vlSelfRef.__PVT__lnkstate_nxt = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if (vlSelfRef.__PVT__TXLINKACTIVEREQ) {
            vlSelfRef.__PVT__lnkstate_nxt = 3U;
            vlSelfRef.__PVT__RXLINKACTIVEACK_nxt = 1U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        vlSelfRef.__PVT__lnkstate_nxt = ((IData)(vlSelfRef.__PVT__i_timeout_or_recovery_mode)
                                          ? 0U : 2U);
    } else if ((2U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if (vlSelfRef.__PVT__RXLINKACTIVEREQ_sync) {
            vlSelfRef.__PVT__rcvr_can_send_crdt = 1U;
        } else {
            vlSelfRef.__PVT__lnkstate_nxt = 4U;
            vlSelfRef.__PVT__rcvr_can_send_crdt = 0U;
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if (((~ (IData)(vlSelfRef.__PVT__TXLINKACTIVEREQ)) 
                    & (IData)(vlSelfRef.__PVT__credits_backto_full_sync))) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
            vlSelfRef.__PVT__RXLINKACTIVEACK_nxt = 0U;
        }
    } else {
        vlSelfRef.__PVT__lnkstate_nxt = 0U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_rcv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__2(Vsig_topology_top_sig_lnkactive_rcv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_rcv___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__lnkstate = vlSelfRef.__PVT__lnkstate;
    vlSelfRef.__Vdly__RXLINKACTIVEACK = vlSelfRef.__PVT__RXLINKACTIVEACK;
    if (vlSelfRef.__PVT__rstb_clk) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__Vdly__lnkstate = 0U;
            vlSelfRef.__Vdly__RXLINKACTIVEACK = 0U;
        } else {
            vlSelfRef.__Vdly__lnkstate = vlSelfRef.__PVT__lnkstate_nxt;
            vlSelfRef.__Vdly__RXLINKACTIVEACK = vlSelfRef.__PVT__RXLINKACTIVEACK_nxt;
        }
    } else {
        vlSelfRef.__Vdly__lnkstate = 0U;
        vlSelfRef.__Vdly__RXLINKACTIVEACK = 0U;
    }
    vlSelfRef.__PVT__lnkstate = vlSelfRef.__Vdly__lnkstate;
    vlSelfRef.__PVT__RXLINKACTIVEACK = vlSelfRef.__Vdly__RXLINKACTIVEACK;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_rcv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__1(Vsig_topology_top_sig_lnkactive_rcv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_rcv___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lnkstate_nxt = vlSelfRef.__PVT__lnkstate;
    vlSelfRef.__PVT__RXLINKACTIVEACK_nxt = vlSelfRef.__PVT__RXLINKACTIVEACK;
    vlSelfRef.__PVT__rcvr_can_send_crdt = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if (vlSelfRef.__PVT__RXLINKACTIVEREQ_sync) {
            vlSelfRef.__PVT__lnkstate_nxt = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if (vlSelfRef.__PVT__TXLINKACTIVEREQ) {
            vlSelfRef.__PVT__lnkstate_nxt = 3U;
            vlSelfRef.__PVT__RXLINKACTIVEACK_nxt = 1U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        vlSelfRef.__PVT__lnkstate_nxt = ((IData)(vlSelfRef.__PVT__i_timeout_or_recovery_mode)
                                          ? 0U : 2U);
    } else if ((2U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if (vlSelfRef.__PVT__RXLINKACTIVEREQ_sync) {
            vlSelfRef.__PVT__rcvr_can_send_crdt = 1U;
        } else {
            vlSelfRef.__PVT__lnkstate_nxt = 4U;
            vlSelfRef.__PVT__rcvr_can_send_crdt = 0U;
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if (((~ (IData)(vlSelfRef.__PVT__TXLINKACTIVEREQ)) 
                    & (IData)(vlSelfRef.__PVT__credits_backto_full_sync))) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
            vlSelfRef.__PVT__RXLINKACTIVEACK_nxt = 0U;
        }
    } else {
        vlSelfRef.__PVT__lnkstate_nxt = 0U;
    }
}
