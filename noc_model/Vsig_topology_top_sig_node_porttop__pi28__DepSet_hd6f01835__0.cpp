// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_id_translator_sn__I23_Tc.h"
#include "Vsig_topology_top_sig_node_porttop__pi28.h"
#include "Vsig_topology_top_sig_node_txtop__pi45.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi28___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__2(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id_translator_full = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__id_translator_full;
    vlSelfRef.__PVT__id_translator_hs_pending_txn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__id_translator_hs_pending_txn;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__id_translator_hs_pending_txn 
        = vlSelfRef.__PVT__id_translator_hs_pending_txn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop__pi28___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__2(Vsig_topology_top_sig_node_porttop__pi28* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_node_porttop__pi28___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id_translator_full = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__id_translator_full;
    vlSelfRef.__PVT__id_translator_hs_pending_txn = vlSelf->__PVT__id_translator_sn__DOT__sig_id_translator_sn_0->__PVT__id_translator_hs_pending_txn;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__id_translator_full 
        = vlSelfRef.__PVT__id_translator_full;
    vlSelf->__PVT__sig_node_txtop_0->__PVT__id_translator_hs_pending_txn 
        = vlSelfRef.__PVT__id_translator_hs_pending_txn;
}
