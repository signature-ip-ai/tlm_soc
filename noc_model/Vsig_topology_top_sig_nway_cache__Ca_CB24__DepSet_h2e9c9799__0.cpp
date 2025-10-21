// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_nway_cache__Ca_CB24.h"

VL_INLINE_OPT void Vsig_topology_top_sig_nway_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__0(Vsig_topology_top_sig_nway_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_nway_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cache_tag_rd_nxt = ((IData)(vlSelfRef.__PVT__rden_cache_cohc)
                                          ? vlSelfRef.__PVT__cache_tag_rd_cohc
                                          : vlSelfRef.__PVT__cache_tag_rd_dirc);
}

VL_INLINE_OPT void Vsig_topology_top_sig_nway_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__2(Vsig_topology_top_sig_nway_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_nway_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cache_all_occupied = VL_REDAND_II(16, (IData)(vlSelfRef.__PVT__valid_rddata_cache_s));
    VL_ASSIGNSEL_II(16,3,0U, vlSelfRef.__PVT__validity_vector, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__valid_rddata_cache_s), 2U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__valid_rddata_cache_s), 1U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__valid_rddata_cache_s), 0U)))));
    VL_ASSIGNSEL_II(16,3,3U, vlSelfRef.__PVT__validity_vector, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__valid_rddata_cache_s), 5U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__valid_rddata_cache_s), 4U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__valid_rddata_cache_s), 3U)))));
    VL_ASSIGNSEL_II(16,3,6U, vlSelfRef.__PVT__validity_vector, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__valid_rddata_cache_s), 8U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__valid_rddata_cache_s), 7U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__valid_rddata_cache_s), 6U)))));
    VL_ASSIGNSEL_II(16,3,9U, vlSelfRef.__PVT__validity_vector, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__valid_rddata_cache_s), 0xbU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__valid_rddata_cache_s), 0xaU)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__valid_rddata_cache_s), 9U)))));
    VL_ASSIGNSEL_II(16,3,0xcU, vlSelfRef.__PVT__validity_vector, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__valid_rddata_cache_s), 0xeU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__valid_rddata_cache_s), 0xdU)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__valid_rddata_cache_s), 0xcU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__validity_vector, 
                    (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__valid_rddata_cache_s), 0xfU)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_nway_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__20(Vsig_topology_top_sig_nway_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_nway_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__20\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cachehit = (0U != (IData)(vlSelfRef.__PVT__cachehit_vector));
}

VL_INLINE_OPT void Vsig_topology_top_sig_nway_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__21(Vsig_topology_top_sig_nway_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_nway_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__21\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sel_cache_rd = ((IData)(vlSelfRef.__PVT__evict_this_cycle)
                                      ? (IData)(vlSelfRef.__PVT__evict_this_one)
                                      : (IData)(vlSelfRef.__PVT__cachehit_vector));
    vlSelfRef.__PVT__rddata_cache = 0U;
    vlSelfRef.__PVT__rdout_tag_value = 0ULL;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__sel_cache_rd), 0U))) {
        vlSelfRef.__PVT__rddata_cache = vlSelfRef.__PVT__rddata_cache_s
            [0U];
        vlSelfRef.__PVT__rdout_tag_value = vlSelfRef.__PVT__rdout_tag_value_s
            [0U];
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 1U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__sel_cache_rd), 1U))) {
        vlSelfRef.__PVT__rddata_cache = vlSelfRef.__PVT__rddata_cache_s
            [1U];
        vlSelfRef.__PVT__rdout_tag_value = vlSelfRef.__PVT__rdout_tag_value_s
            [1U];
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 2U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__sel_cache_rd), 2U))) {
        vlSelfRef.__PVT__rddata_cache = vlSelfRef.__PVT__rddata_cache_s
            [2U];
        vlSelfRef.__PVT__rdout_tag_value = vlSelfRef.__PVT__rdout_tag_value_s
            [2U];
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 3U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__sel_cache_rd), 3U))) {
        vlSelfRef.__PVT__rddata_cache = vlSelfRef.__PVT__rddata_cache_s
            [3U];
        vlSelfRef.__PVT__rdout_tag_value = vlSelfRef.__PVT__rdout_tag_value_s
            [3U];
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 4U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__sel_cache_rd), 4U))) {
        vlSelfRef.__PVT__rddata_cache = vlSelfRef.__PVT__rddata_cache_s
            [4U];
        vlSelfRef.__PVT__rdout_tag_value = vlSelfRef.__PVT__rdout_tag_value_s
            [4U];
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 5U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__sel_cache_rd), 5U))) {
        vlSelfRef.__PVT__rddata_cache = vlSelfRef.__PVT__rddata_cache_s
            [5U];
        vlSelfRef.__PVT__rdout_tag_value = vlSelfRef.__PVT__rdout_tag_value_s
            [5U];
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 6U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__sel_cache_rd), 6U))) {
        vlSelfRef.__PVT__rddata_cache = vlSelfRef.__PVT__rddata_cache_s
            [6U];
        vlSelfRef.__PVT__rdout_tag_value = vlSelfRef.__PVT__rdout_tag_value_s
            [6U];
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 7U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__sel_cache_rd), 7U))) {
        vlSelfRef.__PVT__rddata_cache = vlSelfRef.__PVT__rddata_cache_s
            [7U];
        vlSelfRef.__PVT__rdout_tag_value = vlSelfRef.__PVT__rdout_tag_value_s
            [7U];
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 8U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__sel_cache_rd), 8U))) {
        vlSelfRef.__PVT__rddata_cache = vlSelfRef.__PVT__rddata_cache_s
            [8U];
        vlSelfRef.__PVT__rdout_tag_value = vlSelfRef.__PVT__rdout_tag_value_s
            [8U];
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 9U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__sel_cache_rd), 9U))) {
        vlSelfRef.__PVT__rddata_cache = vlSelfRef.__PVT__rddata_cache_s
            [9U];
        vlSelfRef.__PVT__rdout_tag_value = vlSelfRef.__PVT__rdout_tag_value_s
            [9U];
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xaU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__sel_cache_rd), 0xaU))) {
        vlSelfRef.__PVT__rddata_cache = vlSelfRef.__PVT__rddata_cache_s
            [0xaU];
        vlSelfRef.__PVT__rdout_tag_value = vlSelfRef.__PVT__rdout_tag_value_s
            [0xaU];
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xbU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__sel_cache_rd), 0xbU))) {
        vlSelfRef.__PVT__rddata_cache = vlSelfRef.__PVT__rddata_cache_s
            [0xbU];
        vlSelfRef.__PVT__rdout_tag_value = vlSelfRef.__PVT__rdout_tag_value_s
            [0xbU];
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xcU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__sel_cache_rd), 0xcU))) {
        vlSelfRef.__PVT__rddata_cache = vlSelfRef.__PVT__rddata_cache_s
            [0xcU];
        vlSelfRef.__PVT__rdout_tag_value = vlSelfRef.__PVT__rdout_tag_value_s
            [0xcU];
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xdU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__sel_cache_rd), 0xdU))) {
        vlSelfRef.__PVT__rddata_cache = vlSelfRef.__PVT__rddata_cache_s
            [0xdU];
        vlSelfRef.__PVT__rdout_tag_value = vlSelfRef.__PVT__rdout_tag_value_s
            [0xdU];
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xeU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__sel_cache_rd), 0xeU))) {
        vlSelfRef.__PVT__rddata_cache = vlSelfRef.__PVT__rddata_cache_s
            [0xeU];
        vlSelfRef.__PVT__rdout_tag_value = vlSelfRef.__PVT__rdout_tag_value_s
            [0xeU];
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xfU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__sel_cache_rd), 0xfU))) {
        vlSelfRef.__PVT__rddata_cache = vlSelfRef.__PVT__rddata_cache_s
            [0xfU];
        vlSelfRef.__PVT__rdout_tag_value = vlSelfRef.__PVT__rdout_tag_value_s
            [0xfU];
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x10U;
}

VL_INLINE_OPT void Vsig_topology_top_sig_nway_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__39(Vsig_topology_top_sig_nway_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_nway_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__39\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_II(16,3,0U, vlSelfRef.__PVT__in_pendingq_cache_all, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__in_pendingq_cache_s), 2U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__in_pendingq_cache_s), 1U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__in_pendingq_cache_s), 0U)))));
    VL_ASSIGNSEL_II(16,3,3U, vlSelfRef.__PVT__in_pendingq_cache_all, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__in_pendingq_cache_s), 5U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__in_pendingq_cache_s), 4U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__in_pendingq_cache_s), 3U)))));
    VL_ASSIGNSEL_II(16,3,6U, vlSelfRef.__PVT__in_pendingq_cache_all, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__in_pendingq_cache_s), 8U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__in_pendingq_cache_s), 7U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__in_pendingq_cache_s), 6U)))));
    VL_ASSIGNSEL_II(16,3,9U, vlSelfRef.__PVT__in_pendingq_cache_all, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__in_pendingq_cache_s), 0xbU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__in_pendingq_cache_s), 0xaU)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__in_pendingq_cache_s), 9U)))));
    VL_ASSIGNSEL_II(16,3,0xcU, vlSelfRef.__PVT__in_pendingq_cache_all, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__in_pendingq_cache_s), 0xeU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__in_pendingq_cache_s), 0xdU)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__in_pendingq_cache_s), 0xcU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__in_pendingq_cache_all, 
                    (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__in_pendingq_cache_s), 0xfU)));
}
