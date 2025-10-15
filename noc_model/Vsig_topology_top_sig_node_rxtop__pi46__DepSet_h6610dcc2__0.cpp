// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_rxtop__pi46.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi46___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__0(Vsig_topology_top_sig_node_rxtop__pi46* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi46___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_timeout_can_send_generated_dat_rsp_flit 
        = (((~ (IData)(vlSelfRef.__PVT__rxtop_datproc_fifo_is_full_vc0)) 
            & (~ (IData)(vlSelfRef.__PVT__rxtop_rspproc_fifo_is_full_vc0))) 
           & (IData)(vlSelfRef.__PVT__timeout_or_recovery_mode));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rxtop__pi46___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__0(Vsig_topology_top_sig_node_rxtop__pi46* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_rxtop__pi46___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_timeout_can_send_generated_dat_rsp_flit 
        = (((~ (IData)(vlSelfRef.__PVT__rxtop_datproc_fifo_is_full_vc0)) 
            & (~ (IData)(vlSelfRef.__PVT__rxtop_rspproc_fifo_is_full_vc0))) 
           & (IData)(vlSelfRef.__PVT__timeout_or_recovery_mode));
}
