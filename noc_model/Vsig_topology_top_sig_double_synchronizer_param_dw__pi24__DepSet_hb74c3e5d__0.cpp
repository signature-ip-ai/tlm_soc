// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_double_synchronizer_param_dw__pi24.h"

VL_INLINE_OPT void Vsig_topology_top_sig_double_synchronizer_param_dw__pi24___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__inst_sync_syscoh__0(Vsig_topology_top_sig_double_synchronizer_param_dw__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsig_topology_top_sig_double_synchronizer_param_dw__pi24___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__inst_sync_syscoh__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__inst_sync_syscoh__gen_double_synchronizer_param_dw__BRA__0__KET____DOT__i_sig_double_synchronizer.__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__resetb_clkdest;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__inst_sync_syscoh__gen_double_synchronizer_param_dw__BRA__1__KET____DOT__i_sig_double_synchronizer.__PVT__resetb_clkdest 
        = vlSelfRef.__PVT__resetb_clkdest;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__inst_sync_syscoh__gen_double_synchronizer_param_dw__BRA__0__KET____DOT__i_sig_double_synchronizer.__PVT__clkdest 
        = vlSelfRef.__PVT__clkdest;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__inst_sync_syscoh__gen_double_synchronizer_param_dw__BRA__1__KET____DOT__i_sig_double_synchronizer.__PVT__clkdest 
        = vlSelfRef.__PVT__clkdest;
}

VL_INLINE_OPT void Vsig_topology_top_sig_double_synchronizer_param_dw__pi24___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__inst_sync_syscoh__0(Vsig_topology_top_sig_double_synchronizer_param_dw__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsig_topology_top_sig_double_synchronizer_param_dw__pi24___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__inst_sync_syscoh__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_double_synchronizer_param_dw__BRA__0__KET____DOT__i_sig_double_synchronizer__sig_dest 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__inst_sync_syscoh__gen_double_synchronizer_param_dw__BRA__0__KET____DOT__i_sig_double_synchronizer.__PVT__sig_dest;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__sig_dest, vlSelfRef.__Vcellout__gen_double_synchronizer_param_dw__BRA__0__KET____DOT__i_sig_double_synchronizer__sig_dest);
}

VL_INLINE_OPT void Vsig_topology_top_sig_double_synchronizer_param_dw__pi24___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__inst_sync_syscoh__1(Vsig_topology_top_sig_double_synchronizer_param_dw__pi24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsig_topology_top_sig_double_synchronizer_param_dw__pi24___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__inst_sync_syscoh__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__gen_double_synchronizer_param_dw__BRA__1__KET____DOT__i_sig_double_synchronizer__sig_dest 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__inst_sync_syscoh__gen_double_synchronizer_param_dw__BRA__1__KET____DOT__i_sig_double_synchronizer.__PVT__sig_dest;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__sig_dest, vlSelfRef.__Vcellout__gen_double_synchronizer_param_dw__BRA__1__KET____DOT__i_sig_double_synchronizer__sig_dest);
}
