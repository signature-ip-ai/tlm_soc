// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cmn_pipeline_ff__D2ab.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cmn_pipeline_ff__D2ab___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxdat_slv__0(Vsig_topology_top_sig_cmn_pipeline_ff__D2ab* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cmn_pipeline_ff__D2ab___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxdat_slv__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(683,vlSelfRef.__PVT__data_out, vlSelfRef.__PVT__data_in);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cmn_pipeline_ff__D2ab___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxdat_mst__0(Vsig_topology_top_sig_cmn_pipeline_ff__D2ab* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cmn_pipeline_ff__D2ab___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_sig_cmn_pipeline_rn__i_pipe_rxdat_mst__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(683,vlSelfRef.__PVT__data_out, vlSelfRef.__PVT__data_in);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cmn_pipeline_ff__D2ab___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn__i_pipe_rxdat_slv__0(Vsig_topology_top_sig_cmn_pipeline_ff__D2ab* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cmn_pipeline_ff__D2ab___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn__i_pipe_rxdat_slv__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(683,vlSelfRef.__PVT__data_out, vlSelfRef.__PVT__data_in);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cmn_pipeline_ff__D2ab___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn__i_pipe_rxdat_mst__0(Vsig_topology_top_sig_cmn_pipeline_ff__D2ab* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cmn_pipeline_ff__D2ab___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_sig_cmn_pipeline_sn__i_pipe_rxdat_mst__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(683,vlSelfRef.__PVT__data_out, vlSelfRef.__PVT__data_in);
}

VL_ATTR_COLD void Vsig_topology_top_sig_cmn_pipeline_ff__D2ab___ctor_var_reset(Vsig_topology_top_sig_cmn_pipeline_ff__D2ab* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cmn_pipeline_ff__D2ab___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14129604614540204776ull);
    VL_SCOPED_RAND_RESET_W(683, vlSelf->__PVT__data_in, __VscopeHash, 10574596302020702150ull);
    VL_SCOPED_RAND_RESET_W(683, vlSelf->__PVT__data_out, __VscopeHash, 11675680895196038875ull);
}
