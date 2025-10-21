// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cache__Ca_CB24.h"

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__1(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_WI(0x38cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38cU)))));
    VL_ASSIGNBIT_WI(0x38dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38dU)))));
    VL_ASSIGNBIT_WI(0x38eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38eU)))));
    VL_ASSIGNBIT_WI(0x38fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38fU)))));
    VL_ASSIGNBIT_WI(0x390U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x390U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x390U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x390U)))));
    VL_ASSIGNBIT_WI(0x391U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x391U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x391U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x391U)))));
    VL_ASSIGNBIT_WI(0x392U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x392U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x392U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x392U)))));
    VL_ASSIGNBIT_WI(0x393U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x393U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x393U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x393U)))));
    VL_ASSIGNBIT_WI(0x394U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x394U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x394U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x394U)))));
    VL_ASSIGNBIT_WI(0x395U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x395U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x395U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x395U)))));
    VL_ASSIGNBIT_WI(0x396U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x396U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x396U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x396U)))));
    VL_ASSIGNBIT_WI(0x397U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x397U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x397U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x397U)))));
    VL_ASSIGNBIT_WI(0x398U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x398U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x398U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x398U)))));
    VL_ASSIGNBIT_WI(0x399U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x399U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x399U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x399U)))));
    VL_ASSIGNBIT_WI(0x39aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39aU)))));
    VL_ASSIGNBIT_WI(0x39bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39bU)))));
    VL_ASSIGNBIT_WI(0x39cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39cU)))));
    VL_ASSIGNBIT_WI(0x39dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39dU)))));
    VL_ASSIGNBIT_WI(0x39eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39eU)))));
    VL_ASSIGNBIT_WI(0x39fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39fU)))));
    VL_ASSIGNBIT_WI(0x3a0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a0U)))));
    VL_ASSIGNBIT_WI(0x3a1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a1U)))));
    VL_ASSIGNBIT_WI(0x3a2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a2U)))));
    VL_ASSIGNBIT_WI(0x3a3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a3U)))));
    VL_ASSIGNBIT_WI(0x3a4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a4U)))));
    VL_ASSIGNBIT_WI(0x3a5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a5U)))));
    VL_ASSIGNBIT_WI(0x3a6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a6U)))));
    VL_ASSIGNBIT_WI(0x3a7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a7U)))));
    VL_ASSIGNBIT_WI(0x3a8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a8U)))));
    VL_ASSIGNBIT_WI(0x3a9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a9U)))));
    VL_ASSIGNBIT_WI(0x3aaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3aaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3aaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3aaU)))));
    VL_ASSIGNBIT_WI(0x3abU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3abU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3abU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3abU)))));
    VL_ASSIGNBIT_WI(0x3acU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3acU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3acU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3acU)))));
    VL_ASSIGNBIT_WI(0x3adU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3adU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3adU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3adU)))));
    VL_ASSIGNBIT_WI(0x3aeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3aeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3aeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3aeU)))));
    VL_ASSIGNBIT_WI(0x3afU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3afU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3afU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3afU)))));
    VL_ASSIGNBIT_WI(0x3b0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b0U)))));
    VL_ASSIGNBIT_WI(0x3b1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b1U)))));
    VL_ASSIGNBIT_WI(0x3b2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b2U)))));
    VL_ASSIGNBIT_WI(0x3b3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b3U)))));
    VL_ASSIGNBIT_WI(0x3b4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b4U)))));
    VL_ASSIGNBIT_WI(0x3b5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b5U)))));
    VL_ASSIGNBIT_WI(0x3b6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b6U)))));
    VL_ASSIGNBIT_WI(0x3b7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b7U)))));
    VL_ASSIGNBIT_WI(0x3b8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b8U)))));
    VL_ASSIGNBIT_WI(0x3b9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b9U)))));
    VL_ASSIGNBIT_WI(0x3baU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3baU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3baU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3baU)))));
    VL_ASSIGNBIT_WI(0x3bbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bbU)))));
    VL_ASSIGNBIT_WI(0x3bcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bcU)))));
    VL_ASSIGNBIT_WI(0x3bdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bdU)))));
    VL_ASSIGNBIT_WI(0x3beU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3beU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3beU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3beU)))));
    VL_ASSIGNBIT_WI(0x3bfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bfU)))));
    VL_ASSIGNBIT_WI(0x3c0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c0U)))));
    VL_ASSIGNBIT_WI(0x3c1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c1U)))));
    VL_ASSIGNBIT_WI(0x3c2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c2U)))));
    VL_ASSIGNBIT_WI(0x3c3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c3U)))));
    VL_ASSIGNBIT_WI(0x3c4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c4U)))));
    VL_ASSIGNBIT_WI(0x3c5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c5U)))));
    VL_ASSIGNBIT_WI(0x3c6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c6U)))));
    VL_ASSIGNBIT_WI(0x3c7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c7U)))));
    VL_ASSIGNBIT_WI(0x3c8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c8U)))));
    VL_ASSIGNBIT_WI(0x3c9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c9U)))));
    VL_ASSIGNBIT_WI(0x3caU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3caU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3caU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3caU)))));
    VL_ASSIGNBIT_WI(0x3cbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3cbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3cbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3cbU)))));
    VL_ASSIGNBIT_WI(0x3ccU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ccU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ccU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ccU)))));
    VL_ASSIGNBIT_WI(0x3cdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3cdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3cdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3cdU)))));
    VL_ASSIGNBIT_WI(0x3ceU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ceU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ceU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ceU)))));
    VL_ASSIGNBIT_WI(0x3cfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3cfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3cfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3cfU)))));
    VL_ASSIGNBIT_WI(0x3d0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d0U)))));
    VL_ASSIGNBIT_WI(0x3d1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d1U)))));
    VL_ASSIGNBIT_WI(0x3d2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d2U)))));
    VL_ASSIGNBIT_WI(0x3d3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d3U)))));
    VL_ASSIGNBIT_WI(0x3d4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d4U)))));
    VL_ASSIGNBIT_WI(0x3d5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d5U)))));
    VL_ASSIGNBIT_WI(0x3d6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d6U)))));
    VL_ASSIGNBIT_WI(0x3d7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d7U)))));
    VL_ASSIGNBIT_WI(0x3d8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d8U)))));
    VL_ASSIGNBIT_WI(0x3d9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d9U)))));
    VL_ASSIGNBIT_WI(0x3daU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3daU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3daU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3daU)))));
    VL_ASSIGNBIT_WI(0x3dbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3dbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3dbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3dbU)))));
    VL_ASSIGNBIT_WI(0x3dcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3dcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3dcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3dcU)))));
    VL_ASSIGNBIT_WI(0x3ddU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ddU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ddU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ddU)))));
    VL_ASSIGNBIT_WI(0x3deU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3deU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3deU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3deU)))));
    VL_ASSIGNBIT_WI(0x3dfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3dfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3dfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3dfU)))));
    VL_ASSIGNBIT_WI(0x3e0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e0U)))));
    VL_ASSIGNBIT_WI(0x3e1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e1U)))));
    VL_ASSIGNBIT_WI(0x3e2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e2U)))));
    VL_ASSIGNBIT_WI(0x3e3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e3U)))));
    VL_ASSIGNBIT_WI(0x3e4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e4U)))));
    VL_ASSIGNBIT_WI(0x3e5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e5U)))));
    VL_ASSIGNBIT_WI(0x3e6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e6U)))));
    VL_ASSIGNBIT_WI(0x3e7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e7U)))));
    VL_ASSIGNBIT_WI(0x3e8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e8U)))));
    VL_ASSIGNBIT_WI(0x3e9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e9U)))));
    VL_ASSIGNBIT_WI(0x3eaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3eaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3eaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3eaU)))));
    VL_ASSIGNBIT_WI(0x3ebU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ebU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ebU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ebU)))));
    VL_ASSIGNBIT_WI(0x3ecU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ecU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ecU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ecU)))));
    VL_ASSIGNBIT_WI(0x3edU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3edU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3edU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3edU)))));
    VL_ASSIGNBIT_WI(0x3eeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3eeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3eeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3eeU)))));
    VL_ASSIGNBIT_WI(0x3efU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3efU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3efU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3efU)))));
    VL_ASSIGNBIT_WI(0x3f0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f0U)))));
    VL_ASSIGNBIT_WI(0x3f1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f1U)))));
    VL_ASSIGNBIT_WI(0x3f2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f2U)))));
    VL_ASSIGNBIT_WI(0x3f3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f3U)))));
    VL_ASSIGNBIT_WI(0x3f4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f4U)))));
    VL_ASSIGNBIT_WI(0x3f5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f5U)))));
    VL_ASSIGNBIT_WI(0x3f6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f6U)))));
    VL_ASSIGNBIT_WI(0x3f7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f7U)))));
    VL_ASSIGNBIT_WI(0x3f8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f8U)))));
    VL_ASSIGNBIT_WI(0x3f9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f9U)))));
    VL_ASSIGNBIT_WI(0x3faU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3faU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3faU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3faU)))));
    VL_ASSIGNBIT_WI(0x3fbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3fbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3fbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3fbU)))));
    VL_ASSIGNBIT_WI(0x3fcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3fcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3fcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3fcU)))));
    VL_ASSIGNBIT_WI(0x3fdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3fdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3fdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3fdU)))));
    VL_ASSIGNBIT_WI(0x3feU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3feU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3feU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3feU)))));
    VL_ASSIGNBIT_WI(0x3ffU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ffU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ffU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ffU)))));
}

extern const VlWide<32>/*1023:0*/ Vsig_topology_top__ConstPool__CONST_hd6b7ba52_0;

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__2(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cache_index_rd_d1 = vlSelfRef.__PVT__cache_index_rd_d1;
    vlSelfRef.__Vdly__rden_cache_d1 = vlSelfRef.__PVT__rden_cache_d1;
    vlSelfRef.__Vdly__rddata_cache = vlSelfRef.__PVT__rddata_cache;
    VL_ASSIGN_W(1024,vlSelfRef.__Vdly__in_pendingq, vlSelfRef.__PVT__in_pendingq);
    vlSelfRef.__Vdly__rdtag_cache = vlSelfRef.__PVT__rdtag_cache;
    vlSelfRef.__Vdly__rdvalid_cache = vlSelfRef.__PVT__rdvalid_cache;
    if (vlSelfRef.__PVT__rstb_cache_clk) {
        VL_ASSIGN_W(1024,vlSelfRef.__Vdly__in_pendingq, vlSelfRef.__PVT__in_pendingq_nxt);
        vlSelfRef.__Vdly__cache_index_rd_d1 = vlSelfRef.__PVT__cache_index_rd;
        vlSelfRef.__Vdly__rden_cache_d1 = vlSelfRef.__PVT__rden_cache;
        vlSelfRef.__Vdly__rddata_cache = vlSelfRef.__PVT__rddata_cache_nxt;
        vlSelfRef.__Vdly__rdtag_cache = vlSelfRef.__PVT__rdtag_cache_nxt;
        vlSelfRef.__Vdly__rdvalid_cache = vlSelfRef.__PVT__rdvalid_cache_nxt;
    } else {
        VL_ASSIGN_W(1024,vlSelfRef.__Vdly__in_pendingq, Vsig_topology_top__ConstPool__CONST_hd6b7ba52_0);
        vlSelfRef.__Vdly__cache_index_rd_d1 = 0U;
        vlSelfRef.__Vdly__rden_cache_d1 = 0U;
        vlSelfRef.__Vdly__rddata_cache = 0U;
        vlSelfRef.__Vdly__rdtag_cache = 0ULL;
        vlSelfRef.__Vdly__rdvalid_cache = 0U;
    }
    vlSelfRef.__PVT__cache_index_rd_d1 = vlSelfRef.__Vdly__cache_index_rd_d1;
    vlSelfRef.__PVT__rden_cache_d1 = vlSelfRef.__Vdly__rden_cache_d1;
    vlSelfRef.__PVT__rddata_cache = vlSelfRef.__Vdly__rddata_cache;
    VL_ASSIGN_W(1024,vlSelfRef.__PVT__in_pendingq, vlSelfRef.__Vdly__in_pendingq);
    vlSelfRef.__PVT__rdtag_cache = vlSelfRef.__Vdly__rdtag_cache;
    vlSelfRef.__PVT__rdvalid_cache = vlSelfRef.__Vdly__rdvalid_cache;
    vlSelfRef.__PVT__rdout_tag_value = vlSelfRef.__PVT__rdtag_cache;
    vlSelfRef.__PVT__valid_rddata_cache = vlSelfRef.__PVT__rdvalid_cache;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__3(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rddata_cache_nxt = VL_SEL_IWII(69, vlSelfRef.__Vcellout__sig_sram_valid_tag_data__rddata, 0U, 32);
    vlSelfRef.__PVT__rdtag_cache_nxt = (0xfffffffffULL 
                                        & VL_SEL_QWII(69, vlSelfRef.__Vcellout__sig_sram_valid_tag_data__rddata, 0x20U, 36));
    vlSelfRef.__PVT__rdvalid_cache_nxt = (1U & VL_BITSEL_IWII(69, vlSelfRef.__Vcellout__sig_sram_valid_tag_data__rddata, 0x44U));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__0(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cache_hit = ((IData)(vlSelfRef.__PVT__rdvalid_cache) 
                                  & (vlSelfRef.__PVT__rdtag_cache 
                                     == vlSelfRef.__PVT__cache_tag_rd));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__1(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_pendingq_cache = (1U & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, (IData)(vlSelfRef.__PVT__cache_index_rd)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__3(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__3__KET____DOT__sig_cache_u__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_WI(0x38cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38cU)))));
    VL_ASSIGNBIT_WI(0x38dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38dU)))));
    VL_ASSIGNBIT_WI(0x38eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38eU)))));
    VL_ASSIGNBIT_WI(0x38fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38fU)))));
    VL_ASSIGNBIT_WI(0x390U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x390U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x390U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x390U)))));
    VL_ASSIGNBIT_WI(0x391U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x391U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x391U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x391U)))));
    VL_ASSIGNBIT_WI(0x392U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x392U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x392U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x392U)))));
    VL_ASSIGNBIT_WI(0x393U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x393U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x393U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x393U)))));
    VL_ASSIGNBIT_WI(0x394U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x394U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x394U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x394U)))));
    VL_ASSIGNBIT_WI(0x395U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x395U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x395U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x395U)))));
    VL_ASSIGNBIT_WI(0x396U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x396U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x396U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x396U)))));
    VL_ASSIGNBIT_WI(0x397U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x397U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x397U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x397U)))));
    VL_ASSIGNBIT_WI(0x398U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x398U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x398U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x398U)))));
    VL_ASSIGNBIT_WI(0x399U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x399U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x399U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x399U)))));
    VL_ASSIGNBIT_WI(0x39aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39aU)))));
    VL_ASSIGNBIT_WI(0x39bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39bU)))));
    VL_ASSIGNBIT_WI(0x39cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39cU)))));
    VL_ASSIGNBIT_WI(0x39dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39dU)))));
    VL_ASSIGNBIT_WI(0x39eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39eU)))));
    VL_ASSIGNBIT_WI(0x39fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39fU)))));
    VL_ASSIGNBIT_WI(0x3a0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a0U)))));
    VL_ASSIGNBIT_WI(0x3a1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a1U)))));
    VL_ASSIGNBIT_WI(0x3a2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a2U)))));
    VL_ASSIGNBIT_WI(0x3a3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a3U)))));
    VL_ASSIGNBIT_WI(0x3a4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a4U)))));
    VL_ASSIGNBIT_WI(0x3a5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a5U)))));
    VL_ASSIGNBIT_WI(0x3a6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a6U)))));
    VL_ASSIGNBIT_WI(0x3a7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a7U)))));
    VL_ASSIGNBIT_WI(0x3a8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a8U)))));
    VL_ASSIGNBIT_WI(0x3a9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a9U)))));
    VL_ASSIGNBIT_WI(0x3aaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3aaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3aaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3aaU)))));
    VL_ASSIGNBIT_WI(0x3abU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3abU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3abU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3abU)))));
    VL_ASSIGNBIT_WI(0x3acU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3acU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3acU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3acU)))));
    VL_ASSIGNBIT_WI(0x3adU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3adU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3adU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3adU)))));
    VL_ASSIGNBIT_WI(0x3aeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3aeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3aeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3aeU)))));
    VL_ASSIGNBIT_WI(0x3afU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3afU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3afU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3afU)))));
    VL_ASSIGNBIT_WI(0x3b0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b0U)))));
    VL_ASSIGNBIT_WI(0x3b1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b1U)))));
    VL_ASSIGNBIT_WI(0x3b2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b2U)))));
    VL_ASSIGNBIT_WI(0x3b3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b3U)))));
    VL_ASSIGNBIT_WI(0x3b4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b4U)))));
    VL_ASSIGNBIT_WI(0x3b5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b5U)))));
    VL_ASSIGNBIT_WI(0x3b6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b6U)))));
    VL_ASSIGNBIT_WI(0x3b7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b7U)))));
    VL_ASSIGNBIT_WI(0x3b8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b8U)))));
    VL_ASSIGNBIT_WI(0x3b9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b9U)))));
    VL_ASSIGNBIT_WI(0x3baU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3baU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3baU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3baU)))));
    VL_ASSIGNBIT_WI(0x3bbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bbU)))));
    VL_ASSIGNBIT_WI(0x3bcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bcU)))));
    VL_ASSIGNBIT_WI(0x3bdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bdU)))));
    VL_ASSIGNBIT_WI(0x3beU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3beU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3beU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3beU)))));
    VL_ASSIGNBIT_WI(0x3bfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bfU)))));
    VL_ASSIGNBIT_WI(0x3c0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c0U)))));
    VL_ASSIGNBIT_WI(0x3c1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c1U)))));
    VL_ASSIGNBIT_WI(0x3c2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c2U)))));
    VL_ASSIGNBIT_WI(0x3c3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c3U)))));
    VL_ASSIGNBIT_WI(0x3c4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c4U)))));
    VL_ASSIGNBIT_WI(0x3c5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c5U)))));
    VL_ASSIGNBIT_WI(0x3c6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c6U)))));
    VL_ASSIGNBIT_WI(0x3c7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c7U)))));
    VL_ASSIGNBIT_WI(0x3c8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c8U)))));
    VL_ASSIGNBIT_WI(0x3c9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c9U)))));
    VL_ASSIGNBIT_WI(0x3caU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3caU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3caU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3caU)))));
    VL_ASSIGNBIT_WI(0x3cbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3cbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3cbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3cbU)))));
    VL_ASSIGNBIT_WI(0x3ccU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ccU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ccU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ccU)))));
    VL_ASSIGNBIT_WI(0x3cdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3cdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3cdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3cdU)))));
    VL_ASSIGNBIT_WI(0x3ceU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ceU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ceU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ceU)))));
    VL_ASSIGNBIT_WI(0x3cfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3cfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3cfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3cfU)))));
    VL_ASSIGNBIT_WI(0x3d0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d0U)))));
    VL_ASSIGNBIT_WI(0x3d1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d1U)))));
    VL_ASSIGNBIT_WI(0x3d2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d2U)))));
    VL_ASSIGNBIT_WI(0x3d3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d3U)))));
    VL_ASSIGNBIT_WI(0x3d4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d4U)))));
    VL_ASSIGNBIT_WI(0x3d5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d5U)))));
    VL_ASSIGNBIT_WI(0x3d6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d6U)))));
    VL_ASSIGNBIT_WI(0x3d7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d7U)))));
    VL_ASSIGNBIT_WI(0x3d8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d8U)))));
    VL_ASSIGNBIT_WI(0x3d9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d9U)))));
    VL_ASSIGNBIT_WI(0x3daU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3daU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3daU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3daU)))));
    VL_ASSIGNBIT_WI(0x3dbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3dbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3dbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3dbU)))));
    VL_ASSIGNBIT_WI(0x3dcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3dcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3dcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3dcU)))));
    VL_ASSIGNBIT_WI(0x3ddU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ddU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ddU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ddU)))));
    VL_ASSIGNBIT_WI(0x3deU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3deU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3deU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3deU)))));
    VL_ASSIGNBIT_WI(0x3dfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3dfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3dfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3dfU)))));
    VL_ASSIGNBIT_WI(0x3e0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e0U)))));
    VL_ASSIGNBIT_WI(0x3e1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e1U)))));
    VL_ASSIGNBIT_WI(0x3e2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e2U)))));
    VL_ASSIGNBIT_WI(0x3e3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e3U)))));
    VL_ASSIGNBIT_WI(0x3e4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e4U)))));
    VL_ASSIGNBIT_WI(0x3e5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e5U)))));
    VL_ASSIGNBIT_WI(0x3e6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e6U)))));
    VL_ASSIGNBIT_WI(0x3e7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e7U)))));
    VL_ASSIGNBIT_WI(0x3e8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e8U)))));
    VL_ASSIGNBIT_WI(0x3e9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e9U)))));
    VL_ASSIGNBIT_WI(0x3eaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3eaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3eaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3eaU)))));
    VL_ASSIGNBIT_WI(0x3ebU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ebU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ebU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ebU)))));
    VL_ASSIGNBIT_WI(0x3ecU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ecU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ecU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ecU)))));
    VL_ASSIGNBIT_WI(0x3edU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3edU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3edU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3edU)))));
    VL_ASSIGNBIT_WI(0x3eeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3eeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3eeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3eeU)))));
    VL_ASSIGNBIT_WI(0x3efU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3efU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3efU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3efU)))));
    VL_ASSIGNBIT_WI(0x3f0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f0U)))));
    VL_ASSIGNBIT_WI(0x3f1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f1U)))));
    VL_ASSIGNBIT_WI(0x3f2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f2U)))));
    VL_ASSIGNBIT_WI(0x3f3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f3U)))));
    VL_ASSIGNBIT_WI(0x3f4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f4U)))));
    VL_ASSIGNBIT_WI(0x3f5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f5U)))));
    VL_ASSIGNBIT_WI(0x3f6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f6U)))));
    VL_ASSIGNBIT_WI(0x3f7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f7U)))));
    VL_ASSIGNBIT_WI(0x3f8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f8U)))));
    VL_ASSIGNBIT_WI(0x3f9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f9U)))));
    VL_ASSIGNBIT_WI(0x3faU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3faU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3faU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3faU)))));
    VL_ASSIGNBIT_WI(0x3fbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3fbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3fbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3fbU)))));
    VL_ASSIGNBIT_WI(0x3fcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3fcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3fcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3fcU)))));
    VL_ASSIGNBIT_WI(0x3fdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3fdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3fdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3fdU)))));
    VL_ASSIGNBIT_WI(0x3feU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3feU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3feU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3feU)))));
    VL_ASSIGNBIT_WI(0x3ffU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ffU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ffU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ffU)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__1(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_WI(0x38cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38cU)))));
    VL_ASSIGNBIT_WI(0x38dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38dU)))));
    VL_ASSIGNBIT_WI(0x38eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38eU)))));
    VL_ASSIGNBIT_WI(0x38fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38fU)))));
    VL_ASSIGNBIT_WI(0x390U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x390U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x390U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x390U)))));
    VL_ASSIGNBIT_WI(0x391U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x391U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x391U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x391U)))));
    VL_ASSIGNBIT_WI(0x392U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x392U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x392U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x392U)))));
    VL_ASSIGNBIT_WI(0x393U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x393U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x393U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x393U)))));
    VL_ASSIGNBIT_WI(0x394U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x394U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x394U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x394U)))));
    VL_ASSIGNBIT_WI(0x395U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x395U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x395U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x395U)))));
    VL_ASSIGNBIT_WI(0x396U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x396U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x396U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x396U)))));
    VL_ASSIGNBIT_WI(0x397U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x397U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x397U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x397U)))));
    VL_ASSIGNBIT_WI(0x398U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x398U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x398U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x398U)))));
    VL_ASSIGNBIT_WI(0x399U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x399U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x399U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x399U)))));
    VL_ASSIGNBIT_WI(0x39aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39aU)))));
    VL_ASSIGNBIT_WI(0x39bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39bU)))));
    VL_ASSIGNBIT_WI(0x39cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39cU)))));
    VL_ASSIGNBIT_WI(0x39dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39dU)))));
    VL_ASSIGNBIT_WI(0x39eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39eU)))));
    VL_ASSIGNBIT_WI(0x39fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39fU)))));
    VL_ASSIGNBIT_WI(0x3a0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a0U)))));
    VL_ASSIGNBIT_WI(0x3a1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a1U)))));
    VL_ASSIGNBIT_WI(0x3a2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a2U)))));
    VL_ASSIGNBIT_WI(0x3a3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a3U)))));
    VL_ASSIGNBIT_WI(0x3a4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a4U)))));
    VL_ASSIGNBIT_WI(0x3a5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a5U)))));
    VL_ASSIGNBIT_WI(0x3a6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a6U)))));
    VL_ASSIGNBIT_WI(0x3a7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a7U)))));
    VL_ASSIGNBIT_WI(0x3a8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a8U)))));
    VL_ASSIGNBIT_WI(0x3a9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a9U)))));
    VL_ASSIGNBIT_WI(0x3aaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3aaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3aaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3aaU)))));
    VL_ASSIGNBIT_WI(0x3abU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3abU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3abU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3abU)))));
    VL_ASSIGNBIT_WI(0x3acU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3acU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3acU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3acU)))));
    VL_ASSIGNBIT_WI(0x3adU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3adU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3adU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3adU)))));
    VL_ASSIGNBIT_WI(0x3aeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3aeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3aeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3aeU)))));
    VL_ASSIGNBIT_WI(0x3afU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3afU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3afU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3afU)))));
    VL_ASSIGNBIT_WI(0x3b0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b0U)))));
    VL_ASSIGNBIT_WI(0x3b1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b1U)))));
    VL_ASSIGNBIT_WI(0x3b2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b2U)))));
    VL_ASSIGNBIT_WI(0x3b3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b3U)))));
    VL_ASSIGNBIT_WI(0x3b4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b4U)))));
    VL_ASSIGNBIT_WI(0x3b5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b5U)))));
    VL_ASSIGNBIT_WI(0x3b6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b6U)))));
    VL_ASSIGNBIT_WI(0x3b7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b7U)))));
    VL_ASSIGNBIT_WI(0x3b8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b8U)))));
    VL_ASSIGNBIT_WI(0x3b9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b9U)))));
    VL_ASSIGNBIT_WI(0x3baU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3baU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3baU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3baU)))));
    VL_ASSIGNBIT_WI(0x3bbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bbU)))));
    VL_ASSIGNBIT_WI(0x3bcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bcU)))));
    VL_ASSIGNBIT_WI(0x3bdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bdU)))));
    VL_ASSIGNBIT_WI(0x3beU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3beU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3beU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3beU)))));
    VL_ASSIGNBIT_WI(0x3bfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bfU)))));
    VL_ASSIGNBIT_WI(0x3c0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c0U)))));
    VL_ASSIGNBIT_WI(0x3c1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c1U)))));
    VL_ASSIGNBIT_WI(0x3c2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c2U)))));
    VL_ASSIGNBIT_WI(0x3c3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c3U)))));
    VL_ASSIGNBIT_WI(0x3c4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c4U)))));
    VL_ASSIGNBIT_WI(0x3c5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c5U)))));
    VL_ASSIGNBIT_WI(0x3c6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c6U)))));
    VL_ASSIGNBIT_WI(0x3c7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c7U)))));
    VL_ASSIGNBIT_WI(0x3c8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c8U)))));
    VL_ASSIGNBIT_WI(0x3c9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c9U)))));
    VL_ASSIGNBIT_WI(0x3caU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3caU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3caU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3caU)))));
    VL_ASSIGNBIT_WI(0x3cbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3cbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3cbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3cbU)))));
    VL_ASSIGNBIT_WI(0x3ccU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ccU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ccU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ccU)))));
    VL_ASSIGNBIT_WI(0x3cdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3cdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3cdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3cdU)))));
    VL_ASSIGNBIT_WI(0x3ceU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ceU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ceU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ceU)))));
    VL_ASSIGNBIT_WI(0x3cfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3cfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3cfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3cfU)))));
    VL_ASSIGNBIT_WI(0x3d0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d0U)))));
    VL_ASSIGNBIT_WI(0x3d1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d1U)))));
    VL_ASSIGNBIT_WI(0x3d2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d2U)))));
    VL_ASSIGNBIT_WI(0x3d3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d3U)))));
    VL_ASSIGNBIT_WI(0x3d4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d4U)))));
    VL_ASSIGNBIT_WI(0x3d5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d5U)))));
    VL_ASSIGNBIT_WI(0x3d6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d6U)))));
    VL_ASSIGNBIT_WI(0x3d7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d7U)))));
    VL_ASSIGNBIT_WI(0x3d8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d8U)))));
    VL_ASSIGNBIT_WI(0x3d9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d9U)))));
    VL_ASSIGNBIT_WI(0x3daU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3daU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3daU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3daU)))));
    VL_ASSIGNBIT_WI(0x3dbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3dbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3dbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3dbU)))));
    VL_ASSIGNBIT_WI(0x3dcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3dcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3dcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3dcU)))));
    VL_ASSIGNBIT_WI(0x3ddU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ddU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ddU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ddU)))));
    VL_ASSIGNBIT_WI(0x3deU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3deU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3deU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3deU)))));
    VL_ASSIGNBIT_WI(0x3dfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3dfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3dfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3dfU)))));
    VL_ASSIGNBIT_WI(0x3e0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e0U)))));
    VL_ASSIGNBIT_WI(0x3e1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e1U)))));
    VL_ASSIGNBIT_WI(0x3e2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e2U)))));
    VL_ASSIGNBIT_WI(0x3e3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e3U)))));
    VL_ASSIGNBIT_WI(0x3e4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e4U)))));
    VL_ASSIGNBIT_WI(0x3e5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e5U)))));
    VL_ASSIGNBIT_WI(0x3e6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e6U)))));
    VL_ASSIGNBIT_WI(0x3e7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e7U)))));
    VL_ASSIGNBIT_WI(0x3e8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e8U)))));
    VL_ASSIGNBIT_WI(0x3e9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e9U)))));
    VL_ASSIGNBIT_WI(0x3eaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3eaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3eaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3eaU)))));
    VL_ASSIGNBIT_WI(0x3ebU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ebU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ebU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ebU)))));
    VL_ASSIGNBIT_WI(0x3ecU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ecU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ecU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ecU)))));
    VL_ASSIGNBIT_WI(0x3edU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3edU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3edU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3edU)))));
    VL_ASSIGNBIT_WI(0x3eeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3eeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3eeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3eeU)))));
    VL_ASSIGNBIT_WI(0x3efU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3efU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3efU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3efU)))));
    VL_ASSIGNBIT_WI(0x3f0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f0U)))));
    VL_ASSIGNBIT_WI(0x3f1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f1U)))));
    VL_ASSIGNBIT_WI(0x3f2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f2U)))));
    VL_ASSIGNBIT_WI(0x3f3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f3U)))));
    VL_ASSIGNBIT_WI(0x3f4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f4U)))));
    VL_ASSIGNBIT_WI(0x3f5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f5U)))));
    VL_ASSIGNBIT_WI(0x3f6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f6U)))));
    VL_ASSIGNBIT_WI(0x3f7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f7U)))));
    VL_ASSIGNBIT_WI(0x3f8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f8U)))));
    VL_ASSIGNBIT_WI(0x3f9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f9U)))));
    VL_ASSIGNBIT_WI(0x3faU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3faU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3faU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3faU)))));
    VL_ASSIGNBIT_WI(0x3fbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3fbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3fbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3fbU)))));
    VL_ASSIGNBIT_WI(0x3fcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3fcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3fcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3fcU)))));
    VL_ASSIGNBIT_WI(0x3fdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3fdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3fdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3fdU)))));
    VL_ASSIGNBIT_WI(0x3feU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3feU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3feU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3feU)))));
    VL_ASSIGNBIT_WI(0x3ffU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ffU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ffU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ffU)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__2(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cache_index_rd_d1 = vlSelfRef.__PVT__cache_index_rd_d1;
    vlSelfRef.__Vdly__rden_cache_d1 = vlSelfRef.__PVT__rden_cache_d1;
    vlSelfRef.__Vdly__rddata_cache = vlSelfRef.__PVT__rddata_cache;
    VL_ASSIGN_W(1024,vlSelfRef.__Vdly__in_pendingq, vlSelfRef.__PVT__in_pendingq);
    vlSelfRef.__Vdly__rdtag_cache = vlSelfRef.__PVT__rdtag_cache;
    vlSelfRef.__Vdly__rdvalid_cache = vlSelfRef.__PVT__rdvalid_cache;
    if (vlSelfRef.__PVT__rstb_cache_clk) {
        VL_ASSIGN_W(1024,vlSelfRef.__Vdly__in_pendingq, vlSelfRef.__PVT__in_pendingq_nxt);
        vlSelfRef.__Vdly__cache_index_rd_d1 = vlSelfRef.__PVT__cache_index_rd;
        vlSelfRef.__Vdly__rden_cache_d1 = vlSelfRef.__PVT__rden_cache;
        vlSelfRef.__Vdly__rddata_cache = vlSelfRef.__PVT__rddata_cache_nxt;
        vlSelfRef.__Vdly__rdtag_cache = vlSelfRef.__PVT__rdtag_cache_nxt;
        vlSelfRef.__Vdly__rdvalid_cache = vlSelfRef.__PVT__rdvalid_cache_nxt;
    } else {
        VL_ASSIGN_W(1024,vlSelfRef.__Vdly__in_pendingq, Vsig_topology_top__ConstPool__CONST_hd6b7ba52_0);
        vlSelfRef.__Vdly__cache_index_rd_d1 = 0U;
        vlSelfRef.__Vdly__rden_cache_d1 = 0U;
        vlSelfRef.__Vdly__rddata_cache = 0U;
        vlSelfRef.__Vdly__rdtag_cache = 0ULL;
        vlSelfRef.__Vdly__rdvalid_cache = 0U;
    }
    vlSelfRef.__PVT__cache_index_rd_d1 = vlSelfRef.__Vdly__cache_index_rd_d1;
    vlSelfRef.__PVT__rden_cache_d1 = vlSelfRef.__Vdly__rden_cache_d1;
    vlSelfRef.__PVT__rddata_cache = vlSelfRef.__Vdly__rddata_cache;
    VL_ASSIGN_W(1024,vlSelfRef.__PVT__in_pendingq, vlSelfRef.__Vdly__in_pendingq);
    vlSelfRef.__PVT__rdtag_cache = vlSelfRef.__Vdly__rdtag_cache;
    vlSelfRef.__PVT__rdvalid_cache = vlSelfRef.__Vdly__rdvalid_cache;
    vlSelfRef.__PVT__rdout_tag_value = vlSelfRef.__PVT__rdtag_cache;
    vlSelfRef.__PVT__valid_rddata_cache = vlSelfRef.__PVT__rdvalid_cache;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__3(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rddata_cache_nxt = VL_SEL_IWII(69, vlSelfRef.__Vcellout__sig_sram_valid_tag_data__rddata, 0U, 32);
    vlSelfRef.__PVT__rdtag_cache_nxt = (0xfffffffffULL 
                                        & VL_SEL_QWII(69, vlSelfRef.__Vcellout__sig_sram_valid_tag_data__rddata, 0x20U, 36));
    vlSelfRef.__PVT__rdvalid_cache_nxt = (1U & VL_BITSEL_IWII(69, vlSelfRef.__Vcellout__sig_sram_valid_tag_data__rddata, 0x44U));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__0(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cache_hit = ((IData)(vlSelfRef.__PVT__rdvalid_cache) 
                                  & (vlSelfRef.__PVT__rdtag_cache 
                                     == vlSelfRef.__PVT__cache_tag_rd));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__1(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_pendingq_cache = (1U & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, (IData)(vlSelfRef.__PVT__cache_index_rd)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__3(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__4__KET____DOT__sig_cache_u__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_WI(0x38cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38cU)))));
    VL_ASSIGNBIT_WI(0x38dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38dU)))));
    VL_ASSIGNBIT_WI(0x38eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38eU)))));
    VL_ASSIGNBIT_WI(0x38fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38fU)))));
    VL_ASSIGNBIT_WI(0x390U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x390U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x390U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x390U)))));
    VL_ASSIGNBIT_WI(0x391U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x391U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x391U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x391U)))));
    VL_ASSIGNBIT_WI(0x392U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x392U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x392U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x392U)))));
    VL_ASSIGNBIT_WI(0x393U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x393U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x393U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x393U)))));
    VL_ASSIGNBIT_WI(0x394U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x394U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x394U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x394U)))));
    VL_ASSIGNBIT_WI(0x395U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x395U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x395U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x395U)))));
    VL_ASSIGNBIT_WI(0x396U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x396U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x396U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x396U)))));
    VL_ASSIGNBIT_WI(0x397U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x397U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x397U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x397U)))));
    VL_ASSIGNBIT_WI(0x398U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x398U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x398U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x398U)))));
    VL_ASSIGNBIT_WI(0x399U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x399U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x399U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x399U)))));
    VL_ASSIGNBIT_WI(0x39aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39aU)))));
    VL_ASSIGNBIT_WI(0x39bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39bU)))));
    VL_ASSIGNBIT_WI(0x39cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39cU)))));
    VL_ASSIGNBIT_WI(0x39dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39dU)))));
    VL_ASSIGNBIT_WI(0x39eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39eU)))));
    VL_ASSIGNBIT_WI(0x39fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39fU)))));
    VL_ASSIGNBIT_WI(0x3a0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a0U)))));
    VL_ASSIGNBIT_WI(0x3a1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a1U)))));
    VL_ASSIGNBIT_WI(0x3a2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a2U)))));
    VL_ASSIGNBIT_WI(0x3a3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a3U)))));
    VL_ASSIGNBIT_WI(0x3a4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a4U)))));
    VL_ASSIGNBIT_WI(0x3a5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a5U)))));
    VL_ASSIGNBIT_WI(0x3a6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a6U)))));
    VL_ASSIGNBIT_WI(0x3a7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a7U)))));
    VL_ASSIGNBIT_WI(0x3a8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a8U)))));
    VL_ASSIGNBIT_WI(0x3a9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a9U)))));
    VL_ASSIGNBIT_WI(0x3aaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3aaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3aaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3aaU)))));
    VL_ASSIGNBIT_WI(0x3abU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3abU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3abU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3abU)))));
    VL_ASSIGNBIT_WI(0x3acU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3acU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3acU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3acU)))));
    VL_ASSIGNBIT_WI(0x3adU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3adU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3adU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3adU)))));
    VL_ASSIGNBIT_WI(0x3aeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3aeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3aeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3aeU)))));
    VL_ASSIGNBIT_WI(0x3afU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3afU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3afU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3afU)))));
    VL_ASSIGNBIT_WI(0x3b0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b0U)))));
    VL_ASSIGNBIT_WI(0x3b1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b1U)))));
    VL_ASSIGNBIT_WI(0x3b2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b2U)))));
    VL_ASSIGNBIT_WI(0x3b3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b3U)))));
    VL_ASSIGNBIT_WI(0x3b4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b4U)))));
    VL_ASSIGNBIT_WI(0x3b5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b5U)))));
    VL_ASSIGNBIT_WI(0x3b6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b6U)))));
    VL_ASSIGNBIT_WI(0x3b7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b7U)))));
    VL_ASSIGNBIT_WI(0x3b8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b8U)))));
    VL_ASSIGNBIT_WI(0x3b9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b9U)))));
    VL_ASSIGNBIT_WI(0x3baU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3baU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3baU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3baU)))));
    VL_ASSIGNBIT_WI(0x3bbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bbU)))));
    VL_ASSIGNBIT_WI(0x3bcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bcU)))));
    VL_ASSIGNBIT_WI(0x3bdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bdU)))));
    VL_ASSIGNBIT_WI(0x3beU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3beU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3beU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3beU)))));
    VL_ASSIGNBIT_WI(0x3bfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bfU)))));
    VL_ASSIGNBIT_WI(0x3c0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c0U)))));
    VL_ASSIGNBIT_WI(0x3c1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c1U)))));
    VL_ASSIGNBIT_WI(0x3c2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c2U)))));
    VL_ASSIGNBIT_WI(0x3c3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c3U)))));
    VL_ASSIGNBIT_WI(0x3c4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c4U)))));
    VL_ASSIGNBIT_WI(0x3c5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c5U)))));
    VL_ASSIGNBIT_WI(0x3c6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c6U)))));
    VL_ASSIGNBIT_WI(0x3c7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c7U)))));
    VL_ASSIGNBIT_WI(0x3c8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c8U)))));
    VL_ASSIGNBIT_WI(0x3c9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c9U)))));
    VL_ASSIGNBIT_WI(0x3caU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3caU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3caU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3caU)))));
    VL_ASSIGNBIT_WI(0x3cbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3cbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3cbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3cbU)))));
    VL_ASSIGNBIT_WI(0x3ccU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ccU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ccU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ccU)))));
    VL_ASSIGNBIT_WI(0x3cdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3cdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3cdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3cdU)))));
    VL_ASSIGNBIT_WI(0x3ceU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ceU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ceU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ceU)))));
    VL_ASSIGNBIT_WI(0x3cfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3cfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3cfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3cfU)))));
    VL_ASSIGNBIT_WI(0x3d0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d0U)))));
    VL_ASSIGNBIT_WI(0x3d1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d1U)))));
    VL_ASSIGNBIT_WI(0x3d2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d2U)))));
    VL_ASSIGNBIT_WI(0x3d3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d3U)))));
    VL_ASSIGNBIT_WI(0x3d4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d4U)))));
    VL_ASSIGNBIT_WI(0x3d5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d5U)))));
    VL_ASSIGNBIT_WI(0x3d6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d6U)))));
    VL_ASSIGNBIT_WI(0x3d7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d7U)))));
    VL_ASSIGNBIT_WI(0x3d8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d8U)))));
    VL_ASSIGNBIT_WI(0x3d9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d9U)))));
    VL_ASSIGNBIT_WI(0x3daU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3daU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3daU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3daU)))));
    VL_ASSIGNBIT_WI(0x3dbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3dbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3dbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3dbU)))));
    VL_ASSIGNBIT_WI(0x3dcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3dcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3dcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3dcU)))));
    VL_ASSIGNBIT_WI(0x3ddU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ddU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ddU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ddU)))));
    VL_ASSIGNBIT_WI(0x3deU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3deU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3deU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3deU)))));
    VL_ASSIGNBIT_WI(0x3dfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3dfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3dfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3dfU)))));
    VL_ASSIGNBIT_WI(0x3e0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e0U)))));
    VL_ASSIGNBIT_WI(0x3e1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e1U)))));
    VL_ASSIGNBIT_WI(0x3e2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e2U)))));
    VL_ASSIGNBIT_WI(0x3e3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e3U)))));
    VL_ASSIGNBIT_WI(0x3e4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e4U)))));
    VL_ASSIGNBIT_WI(0x3e5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e5U)))));
    VL_ASSIGNBIT_WI(0x3e6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e6U)))));
    VL_ASSIGNBIT_WI(0x3e7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e7U)))));
    VL_ASSIGNBIT_WI(0x3e8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e8U)))));
    VL_ASSIGNBIT_WI(0x3e9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e9U)))));
    VL_ASSIGNBIT_WI(0x3eaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3eaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3eaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3eaU)))));
    VL_ASSIGNBIT_WI(0x3ebU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ebU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ebU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ebU)))));
    VL_ASSIGNBIT_WI(0x3ecU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ecU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ecU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ecU)))));
    VL_ASSIGNBIT_WI(0x3edU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3edU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3edU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3edU)))));
    VL_ASSIGNBIT_WI(0x3eeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3eeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3eeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3eeU)))));
    VL_ASSIGNBIT_WI(0x3efU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3efU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3efU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3efU)))));
    VL_ASSIGNBIT_WI(0x3f0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f0U)))));
    VL_ASSIGNBIT_WI(0x3f1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f1U)))));
    VL_ASSIGNBIT_WI(0x3f2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f2U)))));
    VL_ASSIGNBIT_WI(0x3f3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f3U)))));
    VL_ASSIGNBIT_WI(0x3f4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f4U)))));
    VL_ASSIGNBIT_WI(0x3f5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f5U)))));
    VL_ASSIGNBIT_WI(0x3f6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f6U)))));
    VL_ASSIGNBIT_WI(0x3f7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f7U)))));
    VL_ASSIGNBIT_WI(0x3f8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f8U)))));
    VL_ASSIGNBIT_WI(0x3f9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f9U)))));
    VL_ASSIGNBIT_WI(0x3faU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3faU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3faU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3faU)))));
    VL_ASSIGNBIT_WI(0x3fbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3fbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3fbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3fbU)))));
    VL_ASSIGNBIT_WI(0x3fcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3fcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3fcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3fcU)))));
    VL_ASSIGNBIT_WI(0x3fdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3fdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3fdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3fdU)))));
    VL_ASSIGNBIT_WI(0x3feU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3feU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3feU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3feU)))));
    VL_ASSIGNBIT_WI(0x3ffU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ffU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ffU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ffU)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__1(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_WI(0x38cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38cU)))));
    VL_ASSIGNBIT_WI(0x38dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38dU)))));
    VL_ASSIGNBIT_WI(0x38eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38eU)))));
    VL_ASSIGNBIT_WI(0x38fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38fU)))));
    VL_ASSIGNBIT_WI(0x390U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x390U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x390U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x390U)))));
    VL_ASSIGNBIT_WI(0x391U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x391U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x391U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x391U)))));
    VL_ASSIGNBIT_WI(0x392U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x392U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x392U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x392U)))));
    VL_ASSIGNBIT_WI(0x393U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x393U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x393U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x393U)))));
    VL_ASSIGNBIT_WI(0x394U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x394U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x394U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x394U)))));
    VL_ASSIGNBIT_WI(0x395U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x395U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x395U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x395U)))));
    VL_ASSIGNBIT_WI(0x396U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x396U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x396U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x396U)))));
    VL_ASSIGNBIT_WI(0x397U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x397U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x397U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x397U)))));
    VL_ASSIGNBIT_WI(0x398U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x398U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x398U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x398U)))));
    VL_ASSIGNBIT_WI(0x399U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x399U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x399U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x399U)))));
    VL_ASSIGNBIT_WI(0x39aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39aU)))));
    VL_ASSIGNBIT_WI(0x39bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39bU)))));
    VL_ASSIGNBIT_WI(0x39cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39cU)))));
    VL_ASSIGNBIT_WI(0x39dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39dU)))));
    VL_ASSIGNBIT_WI(0x39eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39eU)))));
    VL_ASSIGNBIT_WI(0x39fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39fU)))));
    VL_ASSIGNBIT_WI(0x3a0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a0U)))));
    VL_ASSIGNBIT_WI(0x3a1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a1U)))));
    VL_ASSIGNBIT_WI(0x3a2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a2U)))));
    VL_ASSIGNBIT_WI(0x3a3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a3U)))));
    VL_ASSIGNBIT_WI(0x3a4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a4U)))));
    VL_ASSIGNBIT_WI(0x3a5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a5U)))));
    VL_ASSIGNBIT_WI(0x3a6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a6U)))));
    VL_ASSIGNBIT_WI(0x3a7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a7U)))));
    VL_ASSIGNBIT_WI(0x3a8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a8U)))));
    VL_ASSIGNBIT_WI(0x3a9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a9U)))));
    VL_ASSIGNBIT_WI(0x3aaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3aaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3aaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3aaU)))));
    VL_ASSIGNBIT_WI(0x3abU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3abU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3abU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3abU)))));
    VL_ASSIGNBIT_WI(0x3acU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3acU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3acU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3acU)))));
    VL_ASSIGNBIT_WI(0x3adU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3adU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3adU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3adU)))));
    VL_ASSIGNBIT_WI(0x3aeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3aeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3aeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3aeU)))));
    VL_ASSIGNBIT_WI(0x3afU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3afU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3afU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3afU)))));
    VL_ASSIGNBIT_WI(0x3b0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b0U)))));
    VL_ASSIGNBIT_WI(0x3b1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b1U)))));
    VL_ASSIGNBIT_WI(0x3b2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b2U)))));
    VL_ASSIGNBIT_WI(0x3b3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b3U)))));
    VL_ASSIGNBIT_WI(0x3b4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b4U)))));
    VL_ASSIGNBIT_WI(0x3b5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b5U)))));
    VL_ASSIGNBIT_WI(0x3b6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b6U)))));
    VL_ASSIGNBIT_WI(0x3b7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b7U)))));
    VL_ASSIGNBIT_WI(0x3b8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b8U)))));
    VL_ASSIGNBIT_WI(0x3b9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b9U)))));
    VL_ASSIGNBIT_WI(0x3baU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3baU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3baU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3baU)))));
    VL_ASSIGNBIT_WI(0x3bbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bbU)))));
    VL_ASSIGNBIT_WI(0x3bcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bcU)))));
    VL_ASSIGNBIT_WI(0x3bdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bdU)))));
    VL_ASSIGNBIT_WI(0x3beU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3beU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3beU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3beU)))));
    VL_ASSIGNBIT_WI(0x3bfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bfU)))));
    VL_ASSIGNBIT_WI(0x3c0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c0U)))));
    VL_ASSIGNBIT_WI(0x3c1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c1U)))));
    VL_ASSIGNBIT_WI(0x3c2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c2U)))));
    VL_ASSIGNBIT_WI(0x3c3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c3U)))));
    VL_ASSIGNBIT_WI(0x3c4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c4U)))));
    VL_ASSIGNBIT_WI(0x3c5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c5U)))));
    VL_ASSIGNBIT_WI(0x3c6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c6U)))));
    VL_ASSIGNBIT_WI(0x3c7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c7U)))));
    VL_ASSIGNBIT_WI(0x3c8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c8U)))));
    VL_ASSIGNBIT_WI(0x3c9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c9U)))));
    VL_ASSIGNBIT_WI(0x3caU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3caU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3caU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3caU)))));
    VL_ASSIGNBIT_WI(0x3cbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3cbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3cbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3cbU)))));
    VL_ASSIGNBIT_WI(0x3ccU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ccU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ccU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ccU)))));
    VL_ASSIGNBIT_WI(0x3cdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3cdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3cdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3cdU)))));
    VL_ASSIGNBIT_WI(0x3ceU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ceU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ceU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ceU)))));
    VL_ASSIGNBIT_WI(0x3cfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3cfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3cfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3cfU)))));
    VL_ASSIGNBIT_WI(0x3d0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d0U)))));
    VL_ASSIGNBIT_WI(0x3d1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d1U)))));
    VL_ASSIGNBIT_WI(0x3d2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d2U)))));
    VL_ASSIGNBIT_WI(0x3d3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d3U)))));
    VL_ASSIGNBIT_WI(0x3d4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d4U)))));
    VL_ASSIGNBIT_WI(0x3d5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d5U)))));
    VL_ASSIGNBIT_WI(0x3d6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d6U)))));
    VL_ASSIGNBIT_WI(0x3d7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d7U)))));
    VL_ASSIGNBIT_WI(0x3d8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d8U)))));
    VL_ASSIGNBIT_WI(0x3d9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d9U)))));
    VL_ASSIGNBIT_WI(0x3daU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3daU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3daU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3daU)))));
    VL_ASSIGNBIT_WI(0x3dbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3dbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3dbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3dbU)))));
    VL_ASSIGNBIT_WI(0x3dcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3dcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3dcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3dcU)))));
    VL_ASSIGNBIT_WI(0x3ddU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ddU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ddU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ddU)))));
    VL_ASSIGNBIT_WI(0x3deU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3deU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3deU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3deU)))));
    VL_ASSIGNBIT_WI(0x3dfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3dfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3dfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3dfU)))));
    VL_ASSIGNBIT_WI(0x3e0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e0U)))));
    VL_ASSIGNBIT_WI(0x3e1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e1U)))));
    VL_ASSIGNBIT_WI(0x3e2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e2U)))));
    VL_ASSIGNBIT_WI(0x3e3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e3U)))));
    VL_ASSIGNBIT_WI(0x3e4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e4U)))));
    VL_ASSIGNBIT_WI(0x3e5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e5U)))));
    VL_ASSIGNBIT_WI(0x3e6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e6U)))));
    VL_ASSIGNBIT_WI(0x3e7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e7U)))));
    VL_ASSIGNBIT_WI(0x3e8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e8U)))));
    VL_ASSIGNBIT_WI(0x3e9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e9U)))));
    VL_ASSIGNBIT_WI(0x3eaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3eaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3eaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3eaU)))));
    VL_ASSIGNBIT_WI(0x3ebU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ebU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ebU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ebU)))));
    VL_ASSIGNBIT_WI(0x3ecU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ecU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ecU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ecU)))));
    VL_ASSIGNBIT_WI(0x3edU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3edU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3edU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3edU)))));
    VL_ASSIGNBIT_WI(0x3eeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3eeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3eeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3eeU)))));
    VL_ASSIGNBIT_WI(0x3efU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3efU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3efU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3efU)))));
    VL_ASSIGNBIT_WI(0x3f0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f0U)))));
    VL_ASSIGNBIT_WI(0x3f1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f1U)))));
    VL_ASSIGNBIT_WI(0x3f2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f2U)))));
    VL_ASSIGNBIT_WI(0x3f3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f3U)))));
    VL_ASSIGNBIT_WI(0x3f4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f4U)))));
    VL_ASSIGNBIT_WI(0x3f5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f5U)))));
    VL_ASSIGNBIT_WI(0x3f6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f6U)))));
    VL_ASSIGNBIT_WI(0x3f7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f7U)))));
    VL_ASSIGNBIT_WI(0x3f8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f8U)))));
    VL_ASSIGNBIT_WI(0x3f9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f9U)))));
    VL_ASSIGNBIT_WI(0x3faU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3faU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3faU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3faU)))));
    VL_ASSIGNBIT_WI(0x3fbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3fbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3fbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3fbU)))));
    VL_ASSIGNBIT_WI(0x3fcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3fcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3fcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3fcU)))));
    VL_ASSIGNBIT_WI(0x3fdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3fdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3fdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3fdU)))));
    VL_ASSIGNBIT_WI(0x3feU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3feU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3feU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3feU)))));
    VL_ASSIGNBIT_WI(0x3ffU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ffU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ffU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ffU)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__2(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cache_index_rd_d1 = vlSelfRef.__PVT__cache_index_rd_d1;
    vlSelfRef.__Vdly__rden_cache_d1 = vlSelfRef.__PVT__rden_cache_d1;
    vlSelfRef.__Vdly__rddata_cache = vlSelfRef.__PVT__rddata_cache;
    VL_ASSIGN_W(1024,vlSelfRef.__Vdly__in_pendingq, vlSelfRef.__PVT__in_pendingq);
    vlSelfRef.__Vdly__rdtag_cache = vlSelfRef.__PVT__rdtag_cache;
    vlSelfRef.__Vdly__rdvalid_cache = vlSelfRef.__PVT__rdvalid_cache;
    if (vlSelfRef.__PVT__rstb_cache_clk) {
        VL_ASSIGN_W(1024,vlSelfRef.__Vdly__in_pendingq, vlSelfRef.__PVT__in_pendingq_nxt);
        vlSelfRef.__Vdly__cache_index_rd_d1 = vlSelfRef.__PVT__cache_index_rd;
        vlSelfRef.__Vdly__rden_cache_d1 = vlSelfRef.__PVT__rden_cache;
        vlSelfRef.__Vdly__rddata_cache = vlSelfRef.__PVT__rddata_cache_nxt;
        vlSelfRef.__Vdly__rdtag_cache = vlSelfRef.__PVT__rdtag_cache_nxt;
        vlSelfRef.__Vdly__rdvalid_cache = vlSelfRef.__PVT__rdvalid_cache_nxt;
    } else {
        VL_ASSIGN_W(1024,vlSelfRef.__Vdly__in_pendingq, Vsig_topology_top__ConstPool__CONST_hd6b7ba52_0);
        vlSelfRef.__Vdly__cache_index_rd_d1 = 0U;
        vlSelfRef.__Vdly__rden_cache_d1 = 0U;
        vlSelfRef.__Vdly__rddata_cache = 0U;
        vlSelfRef.__Vdly__rdtag_cache = 0ULL;
        vlSelfRef.__Vdly__rdvalid_cache = 0U;
    }
    vlSelfRef.__PVT__cache_index_rd_d1 = vlSelfRef.__Vdly__cache_index_rd_d1;
    vlSelfRef.__PVT__rden_cache_d1 = vlSelfRef.__Vdly__rden_cache_d1;
    vlSelfRef.__PVT__rddata_cache = vlSelfRef.__Vdly__rddata_cache;
    VL_ASSIGN_W(1024,vlSelfRef.__PVT__in_pendingq, vlSelfRef.__Vdly__in_pendingq);
    vlSelfRef.__PVT__rdtag_cache = vlSelfRef.__Vdly__rdtag_cache;
    vlSelfRef.__PVT__rdvalid_cache = vlSelfRef.__Vdly__rdvalid_cache;
    vlSelfRef.__PVT__rdout_tag_value = vlSelfRef.__PVT__rdtag_cache;
    vlSelfRef.__PVT__valid_rddata_cache = vlSelfRef.__PVT__rdvalid_cache;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__3(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rddata_cache_nxt = VL_SEL_IWII(69, vlSelfRef.__Vcellout__sig_sram_valid_tag_data__rddata, 0U, 32);
    vlSelfRef.__PVT__rdtag_cache_nxt = (0xfffffffffULL 
                                        & VL_SEL_QWII(69, vlSelfRef.__Vcellout__sig_sram_valid_tag_data__rddata, 0x20U, 36));
    vlSelfRef.__PVT__rdvalid_cache_nxt = (1U & VL_BITSEL_IWII(69, vlSelfRef.__Vcellout__sig_sram_valid_tag_data__rddata, 0x44U));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__0(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cache_hit = ((IData)(vlSelfRef.__PVT__rdvalid_cache) 
                                  & (vlSelfRef.__PVT__rdtag_cache 
                                     == vlSelfRef.__PVT__cache_tag_rd));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__1(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_pendingq_cache = (1U & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, (IData)(vlSelfRef.__PVT__cache_index_rd)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__3(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__5__KET____DOT__sig_cache_u__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_WI(0x38cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38cU)))));
    VL_ASSIGNBIT_WI(0x38dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38dU)))));
    VL_ASSIGNBIT_WI(0x38eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38eU)))));
    VL_ASSIGNBIT_WI(0x38fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38fU)))));
    VL_ASSIGNBIT_WI(0x390U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x390U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x390U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x390U)))));
    VL_ASSIGNBIT_WI(0x391U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x391U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x391U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x391U)))));
    VL_ASSIGNBIT_WI(0x392U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x392U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x392U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x392U)))));
    VL_ASSIGNBIT_WI(0x393U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x393U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x393U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x393U)))));
    VL_ASSIGNBIT_WI(0x394U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x394U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x394U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x394U)))));
    VL_ASSIGNBIT_WI(0x395U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x395U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x395U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x395U)))));
    VL_ASSIGNBIT_WI(0x396U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x396U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x396U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x396U)))));
    VL_ASSIGNBIT_WI(0x397U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x397U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x397U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x397U)))));
    VL_ASSIGNBIT_WI(0x398U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x398U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x398U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x398U)))));
    VL_ASSIGNBIT_WI(0x399U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x399U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x399U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x399U)))));
    VL_ASSIGNBIT_WI(0x39aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39aU)))));
    VL_ASSIGNBIT_WI(0x39bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39bU)))));
    VL_ASSIGNBIT_WI(0x39cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39cU)))));
    VL_ASSIGNBIT_WI(0x39dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39dU)))));
    VL_ASSIGNBIT_WI(0x39eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39eU)))));
    VL_ASSIGNBIT_WI(0x39fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39fU)))));
    VL_ASSIGNBIT_WI(0x3a0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a0U)))));
    VL_ASSIGNBIT_WI(0x3a1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a1U)))));
    VL_ASSIGNBIT_WI(0x3a2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a2U)))));
    VL_ASSIGNBIT_WI(0x3a3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a3U)))));
    VL_ASSIGNBIT_WI(0x3a4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a4U)))));
    VL_ASSIGNBIT_WI(0x3a5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a5U)))));
    VL_ASSIGNBIT_WI(0x3a6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a6U)))));
    VL_ASSIGNBIT_WI(0x3a7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a7U)))));
    VL_ASSIGNBIT_WI(0x3a8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a8U)))));
    VL_ASSIGNBIT_WI(0x3a9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3a9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3a9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3a9U)))));
    VL_ASSIGNBIT_WI(0x3aaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3aaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3aaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3aaU)))));
    VL_ASSIGNBIT_WI(0x3abU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3abU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3abU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3abU)))));
    VL_ASSIGNBIT_WI(0x3acU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3acU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3acU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3acU)))));
    VL_ASSIGNBIT_WI(0x3adU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3adU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3adU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3adU)))));
    VL_ASSIGNBIT_WI(0x3aeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3aeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3aeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3aeU)))));
    VL_ASSIGNBIT_WI(0x3afU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3afU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3afU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3afU)))));
    VL_ASSIGNBIT_WI(0x3b0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b0U)))));
    VL_ASSIGNBIT_WI(0x3b1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b1U)))));
    VL_ASSIGNBIT_WI(0x3b2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b2U)))));
    VL_ASSIGNBIT_WI(0x3b3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b3U)))));
    VL_ASSIGNBIT_WI(0x3b4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b4U)))));
    VL_ASSIGNBIT_WI(0x3b5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b5U)))));
    VL_ASSIGNBIT_WI(0x3b6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b6U)))));
    VL_ASSIGNBIT_WI(0x3b7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b7U)))));
    VL_ASSIGNBIT_WI(0x3b8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b8U)))));
    VL_ASSIGNBIT_WI(0x3b9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3b9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3b9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3b9U)))));
    VL_ASSIGNBIT_WI(0x3baU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3baU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3baU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3baU)))));
    VL_ASSIGNBIT_WI(0x3bbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bbU)))));
    VL_ASSIGNBIT_WI(0x3bcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bcU)))));
    VL_ASSIGNBIT_WI(0x3bdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bdU)))));
    VL_ASSIGNBIT_WI(0x3beU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3beU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3beU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3beU)))));
    VL_ASSIGNBIT_WI(0x3bfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bfU)))));
    VL_ASSIGNBIT_WI(0x3c0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c0U)))));
    VL_ASSIGNBIT_WI(0x3c1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c1U)))));
    VL_ASSIGNBIT_WI(0x3c2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c2U)))));
    VL_ASSIGNBIT_WI(0x3c3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c3U)))));
    VL_ASSIGNBIT_WI(0x3c4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c4U)))));
    VL_ASSIGNBIT_WI(0x3c5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c5U)))));
    VL_ASSIGNBIT_WI(0x3c6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c6U)))));
    VL_ASSIGNBIT_WI(0x3c7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c7U)))));
    VL_ASSIGNBIT_WI(0x3c8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c8U)))));
    VL_ASSIGNBIT_WI(0x3c9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3c9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3c9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3c9U)))));
    VL_ASSIGNBIT_WI(0x3caU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3caU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3caU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3caU)))));
    VL_ASSIGNBIT_WI(0x3cbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3cbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3cbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3cbU)))));
    VL_ASSIGNBIT_WI(0x3ccU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ccU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ccU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ccU)))));
    VL_ASSIGNBIT_WI(0x3cdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3cdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3cdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3cdU)))));
    VL_ASSIGNBIT_WI(0x3ceU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ceU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ceU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ceU)))));
    VL_ASSIGNBIT_WI(0x3cfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3cfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3cfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3cfU)))));
    VL_ASSIGNBIT_WI(0x3d0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d0U)))));
    VL_ASSIGNBIT_WI(0x3d1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d1U)))));
    VL_ASSIGNBIT_WI(0x3d2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d2U)))));
    VL_ASSIGNBIT_WI(0x3d3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d3U)))));
    VL_ASSIGNBIT_WI(0x3d4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d4U)))));
    VL_ASSIGNBIT_WI(0x3d5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d5U)))));
    VL_ASSIGNBIT_WI(0x3d6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d6U)))));
    VL_ASSIGNBIT_WI(0x3d7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d7U)))));
    VL_ASSIGNBIT_WI(0x3d8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d8U)))));
    VL_ASSIGNBIT_WI(0x3d9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3d9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3d9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3d9U)))));
    VL_ASSIGNBIT_WI(0x3daU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3daU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3daU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3daU)))));
    VL_ASSIGNBIT_WI(0x3dbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3dbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3dbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3dbU)))));
    VL_ASSIGNBIT_WI(0x3dcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3dcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3dcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3dcU)))));
    VL_ASSIGNBIT_WI(0x3ddU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ddU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ddU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ddU)))));
    VL_ASSIGNBIT_WI(0x3deU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3deU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3deU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3deU)))));
    VL_ASSIGNBIT_WI(0x3dfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3dfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3dfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3dfU)))));
    VL_ASSIGNBIT_WI(0x3e0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e0U)))));
    VL_ASSIGNBIT_WI(0x3e1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e1U)))));
    VL_ASSIGNBIT_WI(0x3e2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e2U)))));
    VL_ASSIGNBIT_WI(0x3e3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e3U)))));
    VL_ASSIGNBIT_WI(0x3e4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e4U)))));
    VL_ASSIGNBIT_WI(0x3e5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e5U)))));
    VL_ASSIGNBIT_WI(0x3e6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e6U)))));
    VL_ASSIGNBIT_WI(0x3e7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e7U)))));
    VL_ASSIGNBIT_WI(0x3e8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e8U)))));
    VL_ASSIGNBIT_WI(0x3e9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3e9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3e9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3e9U)))));
    VL_ASSIGNBIT_WI(0x3eaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3eaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3eaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3eaU)))));
    VL_ASSIGNBIT_WI(0x3ebU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ebU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ebU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ebU)))));
    VL_ASSIGNBIT_WI(0x3ecU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ecU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ecU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ecU)))));
    VL_ASSIGNBIT_WI(0x3edU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3edU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3edU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3edU)))));
    VL_ASSIGNBIT_WI(0x3eeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3eeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3eeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3eeU)))));
    VL_ASSIGNBIT_WI(0x3efU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3efU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3efU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3efU)))));
    VL_ASSIGNBIT_WI(0x3f0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f0U)))));
    VL_ASSIGNBIT_WI(0x3f1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f1U)))));
    VL_ASSIGNBIT_WI(0x3f2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f2U)))));
    VL_ASSIGNBIT_WI(0x3f3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f3U)))));
    VL_ASSIGNBIT_WI(0x3f4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f4U)))));
    VL_ASSIGNBIT_WI(0x3f5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f5U)))));
    VL_ASSIGNBIT_WI(0x3f6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f6U)))));
    VL_ASSIGNBIT_WI(0x3f7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f7U)))));
    VL_ASSIGNBIT_WI(0x3f8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f8U)))));
    VL_ASSIGNBIT_WI(0x3f9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3f9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3f9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3f9U)))));
    VL_ASSIGNBIT_WI(0x3faU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3faU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3faU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3faU)))));
    VL_ASSIGNBIT_WI(0x3fbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3fbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3fbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3fbU)))));
    VL_ASSIGNBIT_WI(0x3fcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3fcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3fcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3fcU)))));
    VL_ASSIGNBIT_WI(0x3fdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3fdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3fdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3fdU)))));
    VL_ASSIGNBIT_WI(0x3feU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3feU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3feU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3feU)))));
    VL_ASSIGNBIT_WI(0x3ffU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3ffU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3ffU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3ffU)))));
}
