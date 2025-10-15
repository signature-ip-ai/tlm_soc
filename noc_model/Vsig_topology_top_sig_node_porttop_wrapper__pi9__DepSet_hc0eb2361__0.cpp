// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cmn_pipeline_chi__pi24.h"
#include "Vsig_topology_top_sig_node_porttop_wrapper__pi9.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__4(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__node_porttop_rn__DOT__coh_state 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state;
    vlSelfRef.__Vdly__node_porttop_rn__DOT__syscoack_to_pl 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_to_pl;
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        vlSelfRef.__Vdly__node_porttop_rn__DOT__coh_state 
            = vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt;
        vlSelfRef.__Vdly__node_porttop_rn__DOT__syscoack_to_pl 
            = vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt;
    } else {
        vlSelfRef.__Vdly__node_porttop_rn__DOT__coh_state = 0U;
        vlSelfRef.__Vdly__node_porttop_rn__DOT__syscoack_to_pl = 0U;
    }
    vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state 
        = vlSelfRef.__Vdly__node_porttop_rn__DOT__coh_state;
    vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_to_pl 
        = vlSelfRef.__Vdly__node_porttop_rn__DOT__syscoack_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__syscoack_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_to_pl;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__5(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__syscoack = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__syscoack_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__syscoreq_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__syscoreq_mst;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__4(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__node_porttop_rn__DOT__coh_state 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state;
    vlSelfRef.__Vdly__node_porttop_rn__DOT__syscoack_to_pl 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_to_pl;
    if (vlSelfRef.__PVT__rstb_ic_clk) {
        vlSelfRef.__Vdly__node_porttop_rn__DOT__coh_state 
            = vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state_nxt;
        vlSelfRef.__Vdly__node_porttop_rn__DOT__syscoack_to_pl 
            = vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_nxt;
    } else {
        vlSelfRef.__Vdly__node_porttop_rn__DOT__coh_state = 0U;
        vlSelfRef.__Vdly__node_porttop_rn__DOT__syscoack_to_pl = 0U;
    }
    vlSelfRef.__PVT__node_porttop_rn__DOT__coh_state 
        = vlSelfRef.__Vdly__node_porttop_rn__DOT__coh_state;
    vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_to_pl 
        = vlSelfRef.__Vdly__node_porttop_rn__DOT__syscoack_to_pl;
    vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__syscoack_mst 
        = vlSelfRef.__PVT__node_porttop_rn__DOT__syscoack_to_pl;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__5(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__syscoack = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__syscoack_slv;
    vlSelfRef.__PVT__node_porttop_rn__DOT__syscoreq_to_hn 
        = vlSelf->__PVT__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn->__PVT__syscoreq_mst;
}
