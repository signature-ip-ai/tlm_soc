// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_ro_reg.h"

VL_INLINE_OPT void Vsig_topology_top_ro_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__ro_slc_and_dir_cache_flush_done_reg__0(Vsig_topology_top_ro_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_ro_reg___nba_sequent__TOP__sig_topology_top__sig_top_csr_wrapper_0__inst_sig_top_csr__ro_slc_and_dir_cache_flush_done_reg__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__o_rddata_reg = vlSelfRef.__PVT__o_rddata_reg;
    vlSelfRef.__Vdly__o_rddata_reg = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                       ? vlSelfRef.__PVT__in_data
                                       : 0U);
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__Vdly__o_rddata_reg;
}

VL_INLINE_OPT void Vsig_topology_top_ro_reg___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__ro_proc_port_reg_1__0(Vsig_topology_top_ro_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_ro_reg___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__ro_proc_port_reg_1__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__o_rddata_reg = vlSelfRef.__PVT__o_rddata_reg;
    vlSelfRef.__Vdly__o_rddata_reg = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                       ? vlSelfRef.__PVT__in_data
                                       : 0U);
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__Vdly__o_rddata_reg;
}

VL_INLINE_OPT void Vsig_topology_top_ro_reg___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__ro_node_port_timeout_status_reg_2__0(Vsig_topology_top_ro_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_ro_reg___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__inst_sig_cluster_csr__ro_node_port_timeout_status_reg_2__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__o_rddata_reg = vlSelfRef.__PVT__o_rddata_reg;
    vlSelfRef.__Vdly__o_rddata_reg = ((IData)(vlSelfRef.__PVT__i_rst_n)
                                       ? vlSelfRef.__PVT__in_data
                                       : 0U);
    vlSelfRef.__PVT__o_rddata_reg = vlSelfRef.__Vdly__o_rddata_reg;
}
