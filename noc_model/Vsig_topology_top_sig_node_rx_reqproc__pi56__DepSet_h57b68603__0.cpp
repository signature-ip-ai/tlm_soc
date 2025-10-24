// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_rx_reqproc__pi56.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__inactive_cntr = vlSelfRef.__PVT__inactive_cntr;
    vlSelfRef.__Vdly__port_is_inactive = vlSelfRef.__PVT__port_is_inactive;
    vlSelfRef.__Vdly__snpcrdt_balnce_tobesent = vlSelfRef.__PVT__snpcrdt_balnce_tobesent;
    vlSelfRef.__Vdly__crdt_balance_to_deactivate_link 
        = vlSelfRef.__PVT__crdt_balance_to_deactivate_link;
    vlSelfRef.__Vdly__reqcredits_backto_full = vlSelfRef.__PVT__reqcredits_backto_full;
    vlSelfRef.__Vdly__snpcredits_backto_full = vlSelfRef.__PVT__snpcredits_backto_full;
    vlSelfRef.__Vdly__reqcrdt_balnce_tobesent = vlSelfRef.__PVT__reqcrdt_balnce_tobesent;
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        vlSelfRef.__Vdly__inactive_cntr = vlSelfRef.__PVT__inactive_cntr_nxt;
        vlSelfRef.__Vdly__port_is_inactive = vlSelfRef.__PVT__port_is_inactive_nxt;
    } else {
        vlSelfRef.__Vdly__inactive_cntr = 0U;
        vlSelfRef.__Vdly__port_is_inactive = 0U;
    }
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__Vdly__reqcrdt_balnce_tobesent = 4U;
            vlSelfRef.__Vdly__crdt_balance_to_deactivate_link = 4U;
            vlSelfRef.__Vdly__reqcredits_backto_full = 0U;
        } else {
            vlSelfRef.__Vdly__reqcrdt_balnce_tobesent 
                = vlSelfRef.__PVT__reqcrdt_balnce_tobesent_nxt;
            vlSelfRef.__Vdly__snpcrdt_balnce_tobesent 
                = vlSelfRef.__PVT__snpcrdt_balnce_tobesent_nxt;
            vlSelfRef.__Vdly__reqcredits_backto_full 
                = vlSelfRef.__PVT__reqcredits_backto_full_nxt;
            vlSelfRef.__Vdly__snpcredits_backto_full 
                = vlSelfRef.__PVT__snpcredits_backto_full_nxt;
            vlSelfRef.__Vdly__crdt_balance_to_deactivate_link 
                = vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt;
        }
    } else {
        vlSelfRef.__Vdly__reqcrdt_balnce_tobesent = 4U;
        vlSelfRef.__Vdly__snpcrdt_balnce_tobesent = 4U;
        vlSelfRef.__Vdly__reqcredits_backto_full = 0U;
        vlSelfRef.__Vdly__snpcredits_backto_full = 0U;
        vlSelfRef.__Vdly__crdt_balance_to_deactivate_link = 4U;
    }
    vlSelfRef.__PVT__inactive_cntr = vlSelfRef.__Vdly__inactive_cntr;
    vlSelfRef.__PVT__port_is_inactive = vlSelfRef.__Vdly__port_is_inactive;
    vlSelfRef.__PVT__snpcrdt_balnce_tobesent = vlSelfRef.__Vdly__snpcrdt_balnce_tobesent;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link 
        = vlSelfRef.__Vdly__crdt_balance_to_deactivate_link;
    vlSelfRef.__PVT__reqcredits_backto_full = vlSelfRef.__Vdly__reqcredits_backto_full;
    vlSelfRef.__PVT__snpcredits_backto_full = vlSelfRef.__Vdly__snpcredits_backto_full;
    vlSelfRef.__PVT__reqcrdt_balnce_tobesent = vlSelfRef.__Vdly__reqcrdt_balnce_tobesent;
    vlSelfRef.__PVT__rx_req_port_is_inactive = vlSelfRef.__PVT__port_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__2(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cm_homeaddr_base_hn_f[0U] = vlSelfRef.__PVT__cm_homeaddr_base_all_hn_f;
    vlSelfRef.__PVT__cm_homeaddr_base_sliced_hn_f[0U] 
        = vlSelfRef.__PVT__cm_homeaddr_base_hn_f[0U];
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__3(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__noncm_homeaddr_base_hn_f[0U] = vlSelfRef.__PVT__noncm_homeaddr_base_all_hn_f;
    vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_f[0U] 
        = vlSelfRef.__PVT__noncm_homeaddr_base_hn_f
        [0U];
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__4(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cm_activated_hn_f = (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f, 0x1cU));
    vlSelfRef.__PVT__cm_homeaddr_limit_hn_f[0U] = (0x1fffffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_EXTEND_II(29,28, 
                                                                   (0xfffffffU 
                                                                    & VL_SEL_IIII(29, vlSelfRef.__PVT__cm_homeaddr_limit_all_hn_f, 0U, 28)))));
    vlSelfRef.__PVT__cm_homeaddr_limit_sliced_hn_f[0U] 
        = vlSelfRef.__PVT__cm_homeaddr_limit_hn_f[0U];
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__5(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__noncm_homeaddr_base_pm[0U] = vlSelfRef.__PVT__noncm_homeaddr_base_all_pm;
    vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm[0U] 
        = vlSelfRef.__PVT__noncm_homeaddr_base_pm[0U];
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__6(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__noncm_activated_hn_f = (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f, 0x1cU));
    vlSelfRef.__PVT__noncm_homeaddr_limit_hn_f[0U] 
        = (0x1fffffffU & ((IData)(1U) + VL_EXTEND_II(29,28, 
                                                     (0xfffffffU 
                                                      & VL_SEL_IIII(29, vlSelfRef.__PVT__noncm_homeaddr_limit_all_hn_f, 0U, 28)))));
    vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_f[0U] 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_hn_f
        [0U];
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__7(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__noncm_activated_pm = (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0x1cU));
    vlSelfRef.__PVT__noncm_homeaddr_limit_pm[0U] = 
        (0x1fffffffU & ((IData)(1U) + VL_EXTEND_II(29,28, 
                                                   (0xfffffffU 
                                                    & VL_SEL_IIII(29, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0U, 28)))));
    vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm[0U] 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_pm[0U];
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__8(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cm_homeaddr_base_pm[0U] = vlSelfRef.__PVT__cm_homeaddr_base_all_pm;
    vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm[0U] 
        = vlSelfRef.__PVT__cm_homeaddr_base_pm[0U];
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__9(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cm_activated_pm = (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0x1cU));
    vlSelfRef.__PVT__cm_homeaddr_limit_pm[0U] = (0x1fffffffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_EXTEND_II(29,28, 
                                                                 (0xfffffffU 
                                                                  & VL_SEL_IIII(29, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0U, 28)))));
    vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm[0U] 
        = vlSelfRef.__PVT__cm_homeaddr_limit_pm[0U];
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__10(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xy_coord_hn_f[0U] = vlSelfRef.__PVT__xy_coord_all_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__11(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nodeid_pm[0U] = vlSelfRef.__PVT__xy_coord_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__12(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqcredits_backto_full_nxt = (1U 
                                                   & (((~ (IData)(vlSelfRef.__PVT__rcvr_can_send_crdt)) 
                                                       & (4U 
                                                          == (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link))) 
                                                      | (~ (IData)(vlSelfRef.__PVT__portis_RN_or_SN))));
    vlSelfRef.__PVT__send_reqcredit = ((0U != (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)) 
                                       & (IData)(vlSelfRef.__PVT__rcvr_can_send_crdt));
    vlSelfRef.__PVT__ic_RX_REQLCRDV = ((IData)(vlSelfRef.__PVT__send_reqcredit) 
                                       & (IData)(vlSelfRef.__PVT__portis_RN_or_SN));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__14(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__14\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cm_addr_match_pm = (((IData)(vlSelfRef.__PVT__cm_activated_pm) 
                                          & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                             [0U] >= 
                                             vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                                             [0U])) 
                                         & (VL_EXTEND_II(29,28, 
                                                         vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                         [0U]) 
                                            < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                            [0U]));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__15(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__15\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cm_reqaddr_match_hn_f = (((IData)(vlSelfRef.__PVT__cm_activated_hn_f) 
                                               & (vlSelfRef.__PVT__cm_reqflit_addr_sliced_hn_f
                                                  [0U] 
                                                  >= 
                                                  vlSelfRef.__PVT__cm_homeaddr_base_sliced_hn_f
                                                  [0U])) 
                                              & (VL_EXTEND_II(29,28, 
                                                              vlSelfRef.__PVT__cm_reqflit_addr_sliced_hn_f
                                                              [0U]) 
                                                 < 
                                                 vlSelfRef.__PVT__cm_homeaddr_limit_sliced_hn_f
                                                 [0U]));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__16(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__16\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__noncm_addr_match_pm = (((IData)(vlSelfRef.__PVT__noncm_activated_pm) 
                                             & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [0U] 
                                                >= 
                                                vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                                                [0U])) 
                                            & (VL_EXTEND_II(29,28, 
                                                            vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                            [0U]) 
                                               < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                               [0U]));
    vlSelfRef.__PVT__noncm_addr_match_pm_nonzero = vlSelfRef.__PVT__noncm_addr_match_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__17(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__17\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__noncm_reqaddr_match_hn_f = (((IData)(vlSelfRef.__PVT__noncm_activated_hn_f) 
                                                  & (vlSelfRef.__PVT__noncm_reqflit_addr_sliced_hn_f
                                                     [0U] 
                                                     >= 
                                                     vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_f
                                                     [0U])) 
                                                 & (VL_EXTEND_II(29,28, 
                                                                 vlSelfRef.__PVT__noncm_reqflit_addr_sliced_hn_f
                                                                 [0U]) 
                                                    < 
                                                    vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_f
                                                    [0U]));
    vlSelfRef.__PVT__noncm_addr_match_hn_f_nonzero 
        = vlSelfRef.__PVT__noncm_reqaddr_match_hn_f;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__18(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__18\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
        [0U];
    if (vlSelfRef.__PVT__cm_addr_match_pm) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [0U];
    }
    vlSelfRef.__PVT__s = 1U;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__19(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__19\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
        [0U];
    if (vlSelfRef.__PVT__cm_reqaddr_match_hn_f) {
        vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
            [0U];
    }
    vlSelfRef.__PVT__p = 1U;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__20(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__20\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
        [0U];
    if (vlSelfRef.__PVT__noncm_addr_match_pm) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [0U];
    }
    vlSelfRef.__PVT__t = 1U;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__21(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__21\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
        [0U];
    if (vlSelfRef.__PVT__noncm_reqaddr_match_hn_f) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f 
            = vlSelfRef.__PVT__xy_coord_hn_f[0U];
    }
    vlSelfRef.__PVT__q = 1U;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__22(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__22\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tgtid_pm = vlSelfRef.__PVT__cm_tgtid_pm;
    if (vlSelfRef.__PVT__noncm_addr_match_pm_nonzero) {
        vlSelfRef.__PVT__tgtid_pm = vlSelfRef.__PVT__noncm_tgtid_pm;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__23(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__23\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f;
    if (((IData)(vlSelfRef.__PVT__reqis_to_noncm) & (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_f_nonzero))) {
        vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f;
    } else if (((IData)(vlSelfRef.__PVT__reqis_to_noncm) 
                & (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i_nonzero))) {
        vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__24(Vsig_topology_top_sig_node_rx_reqproc__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__24\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__icn_generated_tgtid = (VL_REDOR_I((IData)(vlSelfRef.__PVT__ucie_addr_match_vec))
                                             ? (IData)(vlSelfRef.__PVT__ucie_tgtid)
                                             : ((0x14U 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x3eU, 7)))
                                                 ? (IData)(vlSelfRef.__PVT__mn_node_id)
                                                 : 
                                                ((0x3aU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x3eU, 7)))
                                                  ? (IData)(vlSelfRef.__PVT__tgtid_pm)
                                                  : 
                                                 VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__tgt_cluster_id_hn), (IData)(vlSelfRef.__PVT__tgt_port_id_hn)))));
}
