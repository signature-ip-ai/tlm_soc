// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_lnkactive_xmt.h"

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__6(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__lnkstate = vlSelfRef.__PVT__lnkstate;
    vlSelfRef.__Vdly__return_linkcrdt = vlSelfRef.__PVT__return_linkcrdt;
    vlSelfRef.__Vdly__TXLINKACTIVEREQ = vlSelfRef.__PVT__TXLINKACTIVEREQ;
    vlSelfRef.__Vdly__xmtr_cansend_flits = vlSelfRef.__PVT__xmtr_cansend_flits;
    if (vlSelfRef.__PVT__rstb_clk) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__Vdly__lnkstate = 0U;
            vlSelfRef.__Vdly__TXLINKACTIVEREQ = 0U;
            vlSelfRef.__Vdly__xmtr_cansend_flits = 0U;
            vlSelfRef.__Vdly__return_linkcrdt = 0U;
        } else {
            vlSelfRef.__Vdly__lnkstate = vlSelfRef.__PVT__lnkstate_nxt;
            vlSelfRef.__Vdly__TXLINKACTIVEREQ = vlSelfRef.__PVT__TXLINKACTIVEREQ_nxt;
            vlSelfRef.__Vdly__xmtr_cansend_flits = vlSelfRef.__PVT__xmtr_cansend_flits_nxt;
            vlSelfRef.__Vdly__return_linkcrdt = vlSelfRef.__PVT__return_linkcrdt_nxt;
        }
    } else {
        vlSelfRef.__Vdly__lnkstate = 0U;
        vlSelfRef.__Vdly__TXLINKACTIVEREQ = 0U;
        vlSelfRef.__Vdly__xmtr_cansend_flits = 0U;
        vlSelfRef.__Vdly__return_linkcrdt = 0U;
    }
    vlSelfRef.__PVT__lnkstate = vlSelfRef.__Vdly__lnkstate;
    vlSelfRef.__PVT__return_linkcrdt = vlSelfRef.__Vdly__return_linkcrdt;
    vlSelfRef.__PVT__TXLINKACTIVEREQ = vlSelfRef.__Vdly__TXLINKACTIVEREQ;
    vlSelfRef.__PVT__xmtr_cansend_flits = vlSelfRef.__Vdly__xmtr_cansend_flits;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__2(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lnkstate_nxt = vlSelfRef.__PVT__lnkstate;
    vlSelfRef.__PVT__TXLINKACTIVEREQ_nxt = vlSelfRef.__PVT__TXLINKACTIVEREQ;
    vlSelfRef.__PVT__xmtr_cansend_flits_nxt = vlSelfRef.__PVT__xmtr_cansend_flits;
    vlSelfRef.__PVT__return_linkcrdt_nxt = vlSelfRef.__PVT__return_linkcrdt;
    if ((0U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if ((((IData)(vlSelfRef.__PVT__RXLINKACTIVEREQ_sync) 
                     | ((IData)(vlSelfRef.__PVT__enable_xmt_sync) 
                        & (~ (IData)(vlSelfRef.__PVT__RXLINKACTIVEACK)))) 
                    & (IData)(vlSelfRef.__PVT__all_cache_init_complete_sync))) {
            vlSelfRef.__PVT__lnkstate_nxt = 1U;
            vlSelfRef.__PVT__TXLINKACTIVEREQ_nxt = 1U;
            vlSelfRef.__PVT__xmtr_cansend_flits_nxt = 0U;
            vlSelfRef.__PVT__return_linkcrdt_nxt = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if (vlSelfRef.__PVT__TXLINKACTIVEACK_sync) {
            vlSelfRef.__PVT__lnkstate_nxt = 2U;
            vlSelfRef.__PVT__xmtr_cansend_flits_nxt = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__RXLINKACTIVEREQ_sync)) 
                          | ((IData)(vlSelfRef.__PVT__enter_deactivate) 
                             & (IData)(vlSelfRef.__PVT__RXLINKACTIVEACK))))) {
            vlSelfRef.__PVT__lnkstate_nxt = 3U;
            vlSelfRef.__PVT__TXLINKACTIVEREQ_nxt = 0U;
            vlSelfRef.__PVT__xmtr_cansend_flits_nxt = 0U;
            vlSelfRef.__PVT__return_linkcrdt_nxt = 1U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__TXLINKACTIVEACK_sync)))) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
            vlSelfRef.__PVT__return_linkcrdt_nxt = 0U;
        }
    } else {
        vlSelfRef.__PVT__lnkstate_nxt = 0U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__7(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__lnkstate = vlSelfRef.__PVT__lnkstate;
    vlSelfRef.__Vdly__return_linkcrdt = vlSelfRef.__PVT__return_linkcrdt;
    vlSelfRef.__Vdly__TXLINKACTIVEREQ = vlSelfRef.__PVT__TXLINKACTIVEREQ;
    vlSelfRef.__Vdly__xmtr_cansend_flits = vlSelfRef.__PVT__xmtr_cansend_flits;
    if (vlSelfRef.__PVT__rstb_clk) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__Vdly__lnkstate = 0U;
            vlSelfRef.__Vdly__TXLINKACTIVEREQ = 0U;
            vlSelfRef.__Vdly__xmtr_cansend_flits = 0U;
            vlSelfRef.__Vdly__return_linkcrdt = 0U;
        } else {
            vlSelfRef.__Vdly__lnkstate = vlSelfRef.__PVT__lnkstate_nxt;
            vlSelfRef.__Vdly__TXLINKACTIVEREQ = vlSelfRef.__PVT__TXLINKACTIVEREQ_nxt;
            vlSelfRef.__Vdly__xmtr_cansend_flits = vlSelfRef.__PVT__xmtr_cansend_flits_nxt;
            vlSelfRef.__Vdly__return_linkcrdt = vlSelfRef.__PVT__return_linkcrdt_nxt;
        }
    } else {
        vlSelfRef.__Vdly__lnkstate = 0U;
        vlSelfRef.__Vdly__TXLINKACTIVEREQ = 0U;
        vlSelfRef.__Vdly__xmtr_cansend_flits = 0U;
        vlSelfRef.__Vdly__return_linkcrdt = 0U;
    }
    vlSelfRef.__PVT__lnkstate = vlSelfRef.__Vdly__lnkstate;
    vlSelfRef.__PVT__return_linkcrdt = vlSelfRef.__Vdly__return_linkcrdt;
    vlSelfRef.__PVT__TXLINKACTIVEREQ = vlSelfRef.__Vdly__TXLINKACTIVEREQ;
    vlSelfRef.__PVT__xmtr_cansend_flits = vlSelfRef.__Vdly__xmtr_cansend_flits;
}

VL_INLINE_OPT void Vsig_topology_top_sig_lnkactive_xmt___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__1(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lnkstate_nxt = vlSelfRef.__PVT__lnkstate;
    vlSelfRef.__PVT__TXLINKACTIVEREQ_nxt = vlSelfRef.__PVT__TXLINKACTIVEREQ;
    vlSelfRef.__PVT__xmtr_cansend_flits_nxt = vlSelfRef.__PVT__xmtr_cansend_flits;
    vlSelfRef.__PVT__return_linkcrdt_nxt = vlSelfRef.__PVT__return_linkcrdt;
    if ((0U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if ((((IData)(vlSelfRef.__PVT__RXLINKACTIVEREQ_sync) 
                     | ((IData)(vlSelfRef.__PVT__enable_xmt_sync) 
                        & (~ (IData)(vlSelfRef.__PVT__RXLINKACTIVEACK)))) 
                    & (IData)(vlSelfRef.__PVT__all_cache_init_complete_sync))) {
            vlSelfRef.__PVT__lnkstate_nxt = 1U;
            vlSelfRef.__PVT__TXLINKACTIVEREQ_nxt = 1U;
            vlSelfRef.__PVT__xmtr_cansend_flits_nxt = 0U;
            vlSelfRef.__PVT__return_linkcrdt_nxt = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if (vlSelfRef.__PVT__TXLINKACTIVEACK_sync) {
            vlSelfRef.__PVT__lnkstate_nxt = 2U;
            vlSelfRef.__PVT__xmtr_cansend_flits_nxt = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__RXLINKACTIVEREQ_sync)) 
                          | ((IData)(vlSelfRef.__PVT__enter_deactivate) 
                             & (IData)(vlSelfRef.__PVT__RXLINKACTIVEACK))))) {
            vlSelfRef.__PVT__lnkstate_nxt = 3U;
            vlSelfRef.__PVT__TXLINKACTIVEREQ_nxt = 0U;
            vlSelfRef.__PVT__xmtr_cansend_flits_nxt = 0U;
            vlSelfRef.__PVT__return_linkcrdt_nxt = 1U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__TXLINKACTIVEACK_sync)))) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
            vlSelfRef.__PVT__return_linkcrdt_nxt = 0U;
        }
    } else {
        vlSelfRef.__PVT__lnkstate_nxt = 0U;
    }
}
