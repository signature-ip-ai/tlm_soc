// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_double_synchronizer_param_dw__pi25.h"
#include "Vsig_topology_top_sig_node_porttop_wrapper__pi9.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__0(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__reg_syscoh_sync 
        = vlSelf->__PVT__node_porttop_rn__DOT__inst_sync_syscoh->__PVT__sig_dest;
    vlSelfRef.__PVT__node_porttop_rn__DOT__coh_con2enable 
        = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__reg_syscoh_sync), 1U));
    vlSelfRef.__PVT__node_porttop_rn__DOT__coh_snppend 
        = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__reg_syscoh_sync), 0U));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__0(Vsig_topology_top_sig_node_porttop_wrapper__pi9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsig_topology_top_sig_node_porttop_wrapper__pi9___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__node_porttop_rn__DOT__reg_syscoh_sync 
        = vlSelf->__PVT__node_porttop_rn__DOT__inst_sync_syscoh->__PVT__sig_dest;
    vlSelfRef.__PVT__node_porttop_rn__DOT__coh_con2enable 
        = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__reg_syscoh_sync), 1U));
    vlSelfRef.__PVT__node_porttop_rn__DOT__coh_snppend 
        = (1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__node_porttop_rn__DOT__reg_syscoh_sync), 0U));
}
