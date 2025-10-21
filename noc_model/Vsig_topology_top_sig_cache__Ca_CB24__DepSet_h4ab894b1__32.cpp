// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cache__Ca_CB24.h"
#include "Vsig_topology_top_sig_sram_model__Fa_FB45.h"

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__4(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__15__KET____DOT__sig_cache_u__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_sram_valid_tag_data->__PVT__rden 
        = vlSelfRef.__PVT__rden_cache_pre;
    vlSelf->__PVT__sig_sram_valid_tag_data->__PVT__rdptr 
        = vlSelfRef.__PVT__cache_index_rd_pre;
}
