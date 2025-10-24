// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_coherency_ctrlr__pi14.h"

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__43(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__43\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_collnq_gated = (((((~ (IData)(vlSelfRef.__PVT__outstand_cmdq_full)) 
                                            & (IData)(vlSelfRef.__PVT__room_atlst3_snpreqfifo)) 
                                           & (~ (IData)(vlSelfRef.__PVT__block_fetch_cohc))) 
                                          & (~ (IData)(vlSelfRef.__PVT__block_collnq_rd_cache))) 
                                         & (IData)(vlSelfRef.__PVT__req_collnq));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__44(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__44\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_reqcmdq_gated = (((((((((~ (IData)(vlSelfRef.__PVT__outstand_cmdq_full)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__collnq_full))) 
                                                & (~ (IData)(vlSelfRef.__PVT__blockreqq_dueto_highestseqnum_incollnq))) 
                                               & (~ (IData)(vlSelfRef.__PVT__block_cmqfull))) 
                                              & (IData)(vlSelfRef.__PVT__room_atlst3_snpreqfifo)) 
                                             & (~ (IData)(vlSelfRef.__PVT__block_fetch_cohc))) 
                                            & (~ (IData)(vlSelfRef.__PVT__block_reqcmdq_dueto_eviction))) 
                                           & (~ (IData)(vlSelfRef.__PVT__block_reqcmdq_rd_cache))) 
                                          & (IData)(vlSelfRef.__PVT__req_reqcmdq));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__46(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__46\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__num_emptyloc_outstandq_nxt = (
                                                   (((((vlSelfRef.__PVT__num_emptyloc_outstandq 
                                                        - 
                                                        VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__gnt_reqcmdq))) 
                                                       - 
                                                       VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__gnt_collnq))) 
                                                      - 
                                                      VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__gnt_cmq))) 
                                                     + 
                                                     VL_EXTEND_II(32,1, 
                                                                  (0U 
                                                                   != vlSelfRef.__PVT__clr_outstand_cmd))) 
                                                    + 
                                                    VL_EXTEND_II(32,1, 
                                                                 (0U 
                                                                  != (IData)(vlSelfRef.__PVT__wren_collnq_valid)))) 
                                                   + 
                                                   VL_EXTEND_II(32,1, (IData)(vlSelfRef.__PVT__wren_cmq_ph4)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__47(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__47\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cm_addr_match_pm_ph1 = (((IData)(vlSelfRef.__PVT__cm_activated_pm) 
                                              & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm_ph1 
                                                 >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm)) 
                                             & (VL_EXTEND_II(29,28, vlSelfRef.__PVT__cm_flit_addr_sliced_pm_ph1) 
                                                < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__48(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__48\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__noncm_addr_match_pm_ph1 = (((IData)(vlSelfRef.__PVT__noncm_activated_pm) 
                                                 & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm_ph1 
                                                    >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm)) 
                                                & (VL_EXTEND_II(29,28, vlSelfRef.__PVT__noncm_flit_addr_sliced_pm_ph1) 
                                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm));
}
