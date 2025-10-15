// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_rx_reqproc__pi61.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi61___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__1(Vsig_topology_top_sig_node_rx_reqproc__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi61___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__snpcrdt_balnce_tobesent = vlSelfRef.__PVT__snpcrdt_balnce_tobesent;
    vlSelfRef.__Vdly__crdt_balance_to_deactivate_link 
        = vlSelfRef.__PVT__crdt_balance_to_deactivate_link;
    vlSelfRef.__Vdly__reqcredits_backto_full = vlSelfRef.__PVT__reqcredits_backto_full;
    vlSelfRef.__Vdly__snpcredits_backto_full = vlSelfRef.__PVT__snpcredits_backto_full;
    vlSelfRef.__Vdly__reqcrdt_balnce_tobesent = vlSelfRef.__PVT__reqcrdt_balnce_tobesent;
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__Vdly__reqcrdt_balnce_tobesent = 2U;
            vlSelfRef.__Vdly__crdt_balance_to_deactivate_link = 2U;
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
        vlSelfRef.__Vdly__reqcrdt_balnce_tobesent = 2U;
        vlSelfRef.__Vdly__snpcrdt_balnce_tobesent = 2U;
        vlSelfRef.__Vdly__reqcredits_backto_full = 0U;
        vlSelfRef.__Vdly__snpcredits_backto_full = 0U;
        vlSelfRef.__Vdly__crdt_balance_to_deactivate_link = 2U;
    }
    vlSelfRef.__PVT__snpcrdt_balnce_tobesent = vlSelfRef.__Vdly__snpcrdt_balnce_tobesent;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link 
        = vlSelfRef.__Vdly__crdt_balance_to_deactivate_link;
    vlSelfRef.__PVT__reqcredits_backto_full = vlSelfRef.__Vdly__reqcredits_backto_full;
    vlSelfRef.__PVT__snpcredits_backto_full = vlSelfRef.__Vdly__snpcredits_backto_full;
    vlSelfRef.__PVT__reqcrdt_balnce_tobesent = vlSelfRef.__Vdly__reqcrdt_balnce_tobesent;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi61___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__2(Vsig_topology_top_sig_node_rx_reqproc__pi61* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi61___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqcredits_backto_full_nxt = (1U 
                                                   & (((~ (IData)(vlSelfRef.__PVT__rcvr_can_send_crdt)) 
                                                       & (2U 
                                                          == (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link))) 
                                                      | (~ (IData)(vlSelfRef.__PVT__portis_RN_or_SN))));
    vlSelfRef.__PVT__send_reqcredit = ((0U != (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)) 
                                       & (IData)(vlSelfRef.__PVT__rcvr_can_send_crdt));
    vlSelfRef.__PVT__ic_RX_REQLCRDV = ((IData)(vlSelfRef.__PVT__send_reqcredit) 
                                       & (IData)(vlSelfRef.__PVT__portis_RN_or_SN));
}
