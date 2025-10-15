// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cache__Ca_CB24.h"
#include "Vsig_topology_top_sig_sram_model__Fa_FB45.h"

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__0(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_sram_valid_tag_data->__PVT__rdclk 
        = vlSelfRef.__PVT__cache_clk;
    vlSelf->__PVT__sig_sram_valid_tag_data->__PVT__wrclk 
        = vlSelfRef.__PVT__cache_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_cache__Ca_CB24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__0(Vsig_topology_top_sig_cache__Ca_CB24* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cache__Ca_CB24___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__dir_nway_cache__NWAY_CACHE_TOP__BRA__0__KET____DOT__sig_cache_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VL_CONCAT_WQI(68,36,32, __Vtemp_1, vlSelfRef.__PVT__cache_tag_wr, vlSelfRef.__PVT__wrdata_cache);
    VL_CONCAT_WIW(69,1,68, vlSelfRef.__Vcellinp__sig_sram_valid_tag_data__wrdata, (IData)(vlSelfRef.__PVT__wrvalid_cache), __Vtemp_1);
    vlSelf->__PVT__sig_sram_valid_tag_data->__PVT__wrptr 
        = vlSelfRef.__PVT__cache_index_wr;
    vlSelf->__PVT__sig_sram_valid_tag_data->__PVT__wren 
        = vlSelfRef.__PVT__wren_cache;
    vlSelfRef.__PVT__clr_in_pendingq = (((IData)(vlSelfRef.__PVT__wren_cache) 
                                         & (IData)(vlSelfRef.__PVT__sel_wren_cohc)) 
                                        & (~ (IData)(vlSelfRef.__PVT__inpendingq_matches_collnq)));
    VL_ASSIGN_W(69,vlSelf->__PVT__sig_sram_valid_tag_data->__PVT__wrdata, vlSelfRef.__Vcellinp__sig_sram_valid_tag_data__wrdata);
    VL_ASSIGNBIT_WI(0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0U)))));
    VL_ASSIGNBIT_WI(1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 1U)))));
    VL_ASSIGNBIT_WI(2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 2U)))));
    VL_ASSIGNBIT_WI(3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 3U)))));
    VL_ASSIGNBIT_WI(4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 4U)))));
    VL_ASSIGNBIT_WI(5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 5U)))));
    VL_ASSIGNBIT_WI(6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 6U)))));
    VL_ASSIGNBIT_WI(7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 7U)))));
    VL_ASSIGNBIT_WI(8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 8U)))));
    VL_ASSIGNBIT_WI(9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 9U)))));
    VL_ASSIGNBIT_WI(0xaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xaU)))));
    VL_ASSIGNBIT_WI(0xbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xbU)))));
    VL_ASSIGNBIT_WI(0xcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xcU)))));
    VL_ASSIGNBIT_WI(0xdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xdU)))));
    VL_ASSIGNBIT_WI(0xeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xeU)))));
    VL_ASSIGNBIT_WI(0xfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xfU)))));
    VL_ASSIGNBIT_WI(0x10U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x10U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x10U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x10U)))));
    VL_ASSIGNBIT_WI(0x11U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x11U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x11U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x11U)))));
    VL_ASSIGNBIT_WI(0x12U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x12U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x12U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x12U)))));
    VL_ASSIGNBIT_WI(0x13U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x13U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x13U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x13U)))));
    VL_ASSIGNBIT_WI(0x14U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x14U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x14U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x14U)))));
    VL_ASSIGNBIT_WI(0x15U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x15U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x15U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x15U)))));
    VL_ASSIGNBIT_WI(0x16U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x16U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x16U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x16U)))));
    VL_ASSIGNBIT_WI(0x17U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x17U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x17U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x17U)))));
    VL_ASSIGNBIT_WI(0x18U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x18U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x18U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x18U)))));
    VL_ASSIGNBIT_WI(0x19U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x19U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x19U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x19U)))));
    VL_ASSIGNBIT_WI(0x1aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1aU)))));
    VL_ASSIGNBIT_WI(0x1bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1bU)))));
    VL_ASSIGNBIT_WI(0x1cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1cU)))));
    VL_ASSIGNBIT_WI(0x1dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1dU)))));
    VL_ASSIGNBIT_WI(0x1eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1eU)))));
    VL_ASSIGNBIT_WI(0x1fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1fU)))));
    VL_ASSIGNBIT_WI(0x20U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x20U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x20U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x20U)))));
    VL_ASSIGNBIT_WI(0x21U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x21U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x21U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x21U)))));
    VL_ASSIGNBIT_WI(0x22U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x22U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x22U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x22U)))));
    VL_ASSIGNBIT_WI(0x23U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x23U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x23U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x23U)))));
    VL_ASSIGNBIT_WI(0x24U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x24U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x24U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x24U)))));
    VL_ASSIGNBIT_WI(0x25U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x25U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x25U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x25U)))));
    VL_ASSIGNBIT_WI(0x26U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x26U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x26U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x26U)))));
    VL_ASSIGNBIT_WI(0x27U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x27U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x27U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x27U)))));
    VL_ASSIGNBIT_WI(0x28U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x28U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x28U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x28U)))));
    VL_ASSIGNBIT_WI(0x29U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x29U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x29U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x29U)))));
    VL_ASSIGNBIT_WI(0x2aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2aU)))));
    VL_ASSIGNBIT_WI(0x2bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2bU)))));
    VL_ASSIGNBIT_WI(0x2cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2cU)))));
    VL_ASSIGNBIT_WI(0x2dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2dU)))));
    VL_ASSIGNBIT_WI(0x2eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2eU)))));
    VL_ASSIGNBIT_WI(0x2fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2fU)))));
    VL_ASSIGNBIT_WI(0x30U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x30U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x30U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x30U)))));
    VL_ASSIGNBIT_WI(0x31U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x31U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x31U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x31U)))));
    VL_ASSIGNBIT_WI(0x32U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x32U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x32U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x32U)))));
    VL_ASSIGNBIT_WI(0x33U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x33U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x33U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x33U)))));
    VL_ASSIGNBIT_WI(0x34U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x34U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x34U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x34U)))));
    VL_ASSIGNBIT_WI(0x35U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x35U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x35U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x35U)))));
    VL_ASSIGNBIT_WI(0x36U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x36U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x36U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x36U)))));
    VL_ASSIGNBIT_WI(0x37U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x37U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x37U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x37U)))));
    VL_ASSIGNBIT_WI(0x38U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38U)))));
    VL_ASSIGNBIT_WI(0x39U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x39U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x39U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x39U)))));
    VL_ASSIGNBIT_WI(0x3aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3aU)))));
    VL_ASSIGNBIT_WI(0x3bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3bU)))));
    VL_ASSIGNBIT_WI(0x3cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3cU)))));
    VL_ASSIGNBIT_WI(0x3dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3dU)))));
    VL_ASSIGNBIT_WI(0x3eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3eU)))));
    VL_ASSIGNBIT_WI(0x3fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x3fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x3fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x3fU)))));
    VL_ASSIGNBIT_WI(0x40U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x40U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x40U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x40U)))));
    VL_ASSIGNBIT_WI(0x41U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x41U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x41U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x41U)))));
    VL_ASSIGNBIT_WI(0x42U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x42U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x42U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x42U)))));
    VL_ASSIGNBIT_WI(0x43U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x43U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x43U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x43U)))));
    VL_ASSIGNBIT_WI(0x44U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x44U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x44U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x44U)))));
    VL_ASSIGNBIT_WI(0x45U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x45U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x45U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x45U)))));
    VL_ASSIGNBIT_WI(0x46U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x46U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x46U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x46U)))));
    VL_ASSIGNBIT_WI(0x47U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x47U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x47U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x47U)))));
    VL_ASSIGNBIT_WI(0x48U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x48U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x48U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x48U)))));
    VL_ASSIGNBIT_WI(0x49U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x49U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x49U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x49U)))));
    VL_ASSIGNBIT_WI(0x4aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x4aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x4aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x4aU)))));
    VL_ASSIGNBIT_WI(0x4bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x4bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x4bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x4bU)))));
    VL_ASSIGNBIT_WI(0x4cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x4cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x4cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x4cU)))));
    VL_ASSIGNBIT_WI(0x4dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x4dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x4dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x4dU)))));
    VL_ASSIGNBIT_WI(0x4eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x4eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x4eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x4eU)))));
    VL_ASSIGNBIT_WI(0x4fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x4fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x4fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x4fU)))));
    VL_ASSIGNBIT_WI(0x50U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x50U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x50U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x50U)))));
    VL_ASSIGNBIT_WI(0x51U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x51U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x51U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x51U)))));
    VL_ASSIGNBIT_WI(0x52U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x52U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x52U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x52U)))));
    VL_ASSIGNBIT_WI(0x53U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x53U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x53U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x53U)))));
    VL_ASSIGNBIT_WI(0x54U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x54U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x54U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x54U)))));
    VL_ASSIGNBIT_WI(0x55U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x55U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x55U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x55U)))));
    VL_ASSIGNBIT_WI(0x56U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x56U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x56U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x56U)))));
    VL_ASSIGNBIT_WI(0x57U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x57U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x57U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x57U)))));
    VL_ASSIGNBIT_WI(0x58U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x58U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x58U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x58U)))));
    VL_ASSIGNBIT_WI(0x59U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x59U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x59U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x59U)))));
    VL_ASSIGNBIT_WI(0x5aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x5aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x5aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x5aU)))));
    VL_ASSIGNBIT_WI(0x5bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x5bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x5bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x5bU)))));
    VL_ASSIGNBIT_WI(0x5cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x5cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x5cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x5cU)))));
    VL_ASSIGNBIT_WI(0x5dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x5dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x5dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x5dU)))));
    VL_ASSIGNBIT_WI(0x5eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x5eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x5eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x5eU)))));
    VL_ASSIGNBIT_WI(0x5fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x5fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x5fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x5fU)))));
    VL_ASSIGNBIT_WI(0x60U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x60U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x60U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x60U)))));
    VL_ASSIGNBIT_WI(0x61U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x61U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x61U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x61U)))));
    VL_ASSIGNBIT_WI(0x62U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x62U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x62U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x62U)))));
    VL_ASSIGNBIT_WI(0x63U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x63U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x63U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x63U)))));
    VL_ASSIGNBIT_WI(0x64U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x64U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x64U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x64U)))));
    VL_ASSIGNBIT_WI(0x65U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x65U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x65U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x65U)))));
    VL_ASSIGNBIT_WI(0x66U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x66U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x66U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x66U)))));
    VL_ASSIGNBIT_WI(0x67U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x67U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x67U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x67U)))));
    VL_ASSIGNBIT_WI(0x68U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x68U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x68U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x68U)))));
    VL_ASSIGNBIT_WI(0x69U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x69U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x69U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x69U)))));
    VL_ASSIGNBIT_WI(0x6aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x6aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x6aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x6aU)))));
    VL_ASSIGNBIT_WI(0x6bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x6bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x6bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x6bU)))));
    VL_ASSIGNBIT_WI(0x6cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x6cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x6cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x6cU)))));
    VL_ASSIGNBIT_WI(0x6dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x6dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x6dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x6dU)))));
    VL_ASSIGNBIT_WI(0x6eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x6eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x6eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x6eU)))));
    VL_ASSIGNBIT_WI(0x6fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x6fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x6fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x6fU)))));
    VL_ASSIGNBIT_WI(0x70U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x70U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x70U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x70U)))));
    VL_ASSIGNBIT_WI(0x71U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x71U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x71U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x71U)))));
    VL_ASSIGNBIT_WI(0x72U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x72U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x72U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x72U)))));
    VL_ASSIGNBIT_WI(0x73U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x73U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x73U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x73U)))));
    VL_ASSIGNBIT_WI(0x74U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x74U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x74U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x74U)))));
    VL_ASSIGNBIT_WI(0x75U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x75U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x75U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x75U)))));
    VL_ASSIGNBIT_WI(0x76U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x76U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x76U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x76U)))));
    VL_ASSIGNBIT_WI(0x77U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x77U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x77U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x77U)))));
    VL_ASSIGNBIT_WI(0x78U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x78U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x78U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x78U)))));
    VL_ASSIGNBIT_WI(0x79U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x79U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x79U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x79U)))));
    VL_ASSIGNBIT_WI(0x7aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x7aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x7aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x7aU)))));
    VL_ASSIGNBIT_WI(0x7bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x7bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x7bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x7bU)))));
    VL_ASSIGNBIT_WI(0x7cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x7cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x7cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x7cU)))));
    VL_ASSIGNBIT_WI(0x7dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x7dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x7dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x7dU)))));
    VL_ASSIGNBIT_WI(0x7eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x7eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x7eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x7eU)))));
    VL_ASSIGNBIT_WI(0x7fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x7fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x7fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x7fU)))));
    VL_ASSIGNBIT_WI(0x80U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x80U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x80U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x80U)))));
    VL_ASSIGNBIT_WI(0x81U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x81U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x81U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x81U)))));
    VL_ASSIGNBIT_WI(0x82U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x82U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x82U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x82U)))));
    VL_ASSIGNBIT_WI(0x83U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x83U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x83U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x83U)))));
    VL_ASSIGNBIT_WI(0x84U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x84U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x84U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x84U)))));
    VL_ASSIGNBIT_WI(0x85U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x85U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x85U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x85U)))));
    VL_ASSIGNBIT_WI(0x86U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x86U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x86U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x86U)))));
    VL_ASSIGNBIT_WI(0x87U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x87U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x87U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x87U)))));
    VL_ASSIGNBIT_WI(0x88U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x88U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x88U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x88U)))));
    VL_ASSIGNBIT_WI(0x89U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x89U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x89U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x89U)))));
    VL_ASSIGNBIT_WI(0x8aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x8aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x8aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x8aU)))));
    VL_ASSIGNBIT_WI(0x8bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x8bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x8bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x8bU)))));
    VL_ASSIGNBIT_WI(0x8cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x8cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x8cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x8cU)))));
    VL_ASSIGNBIT_WI(0x8dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x8dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x8dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x8dU)))));
    VL_ASSIGNBIT_WI(0x8eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x8eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x8eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x8eU)))));
    VL_ASSIGNBIT_WI(0x8fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x8fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x8fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x8fU)))));
    VL_ASSIGNBIT_WI(0x90U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x90U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x90U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x90U)))));
    VL_ASSIGNBIT_WI(0x91U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x91U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x91U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x91U)))));
    VL_ASSIGNBIT_WI(0x92U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x92U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x92U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x92U)))));
    VL_ASSIGNBIT_WI(0x93U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x93U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x93U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x93U)))));
    VL_ASSIGNBIT_WI(0x94U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x94U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x94U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x94U)))));
    VL_ASSIGNBIT_WI(0x95U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x95U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x95U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x95U)))));
    VL_ASSIGNBIT_WI(0x96U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x96U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x96U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x96U)))));
    VL_ASSIGNBIT_WI(0x97U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x97U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x97U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x97U)))));
    VL_ASSIGNBIT_WI(0x98U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x98U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x98U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x98U)))));
    VL_ASSIGNBIT_WI(0x99U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x99U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x99U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x99U)))));
    VL_ASSIGNBIT_WI(0x9aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x9aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x9aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x9aU)))));
    VL_ASSIGNBIT_WI(0x9bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x9bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x9bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x9bU)))));
    VL_ASSIGNBIT_WI(0x9cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x9cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x9cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x9cU)))));
    VL_ASSIGNBIT_WI(0x9dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x9dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x9dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x9dU)))));
    VL_ASSIGNBIT_WI(0x9eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x9eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x9eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x9eU)))));
    VL_ASSIGNBIT_WI(0x9fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x9fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x9fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x9fU)))));
    VL_ASSIGNBIT_WI(0xa0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xa0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xa0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xa0U)))));
    VL_ASSIGNBIT_WI(0xa1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xa1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xa1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xa1U)))));
    VL_ASSIGNBIT_WI(0xa2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xa2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xa2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xa2U)))));
    VL_ASSIGNBIT_WI(0xa3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xa3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xa3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xa3U)))));
    VL_ASSIGNBIT_WI(0xa4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xa4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xa4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xa4U)))));
    VL_ASSIGNBIT_WI(0xa5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xa5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xa5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xa5U)))));
    VL_ASSIGNBIT_WI(0xa6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xa6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xa6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xa6U)))));
    VL_ASSIGNBIT_WI(0xa7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xa7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xa7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xa7U)))));
    VL_ASSIGNBIT_WI(0xa8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xa8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xa8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xa8U)))));
    VL_ASSIGNBIT_WI(0xa9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xa9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xa9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xa9U)))));
    VL_ASSIGNBIT_WI(0xaaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xaaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xaaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xaaU)))));
    VL_ASSIGNBIT_WI(0xabU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xabU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xabU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xabU)))));
    VL_ASSIGNBIT_WI(0xacU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xacU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xacU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xacU)))));
    VL_ASSIGNBIT_WI(0xadU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xadU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xadU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xadU)))));
    VL_ASSIGNBIT_WI(0xaeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xaeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xaeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xaeU)))));
    VL_ASSIGNBIT_WI(0xafU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xafU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xafU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xafU)))));
    VL_ASSIGNBIT_WI(0xb0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xb0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xb0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xb0U)))));
    VL_ASSIGNBIT_WI(0xb1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xb1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xb1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xb1U)))));
    VL_ASSIGNBIT_WI(0xb2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xb2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xb2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xb2U)))));
    VL_ASSIGNBIT_WI(0xb3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xb3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xb3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xb3U)))));
    VL_ASSIGNBIT_WI(0xb4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xb4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xb4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xb4U)))));
    VL_ASSIGNBIT_WI(0xb5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xb5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xb5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xb5U)))));
    VL_ASSIGNBIT_WI(0xb6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xb6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xb6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xb6U)))));
    VL_ASSIGNBIT_WI(0xb7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xb7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xb7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xb7U)))));
    VL_ASSIGNBIT_WI(0xb8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xb8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xb8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xb8U)))));
    VL_ASSIGNBIT_WI(0xb9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xb9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xb9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xb9U)))));
    VL_ASSIGNBIT_WI(0xbaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xbaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xbaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xbaU)))));
    VL_ASSIGNBIT_WI(0xbbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xbbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xbbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xbbU)))));
    VL_ASSIGNBIT_WI(0xbcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xbcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xbcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xbcU)))));
    VL_ASSIGNBIT_WI(0xbdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xbdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xbdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xbdU)))));
    VL_ASSIGNBIT_WI(0xbeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xbeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xbeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xbeU)))));
    VL_ASSIGNBIT_WI(0xbfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xbfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xbfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xbfU)))));
    VL_ASSIGNBIT_WI(0xc0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xc0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xc0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xc0U)))));
    VL_ASSIGNBIT_WI(0xc1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xc1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xc1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xc1U)))));
    VL_ASSIGNBIT_WI(0xc2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xc2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xc2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xc2U)))));
    VL_ASSIGNBIT_WI(0xc3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xc3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xc3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xc3U)))));
    VL_ASSIGNBIT_WI(0xc4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xc4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xc4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xc4U)))));
    VL_ASSIGNBIT_WI(0xc5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xc5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xc5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xc5U)))));
    VL_ASSIGNBIT_WI(0xc6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xc6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xc6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xc6U)))));
    VL_ASSIGNBIT_WI(0xc7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xc7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xc7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xc7U)))));
    VL_ASSIGNBIT_WI(0xc8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xc8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xc8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xc8U)))));
    VL_ASSIGNBIT_WI(0xc9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xc9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xc9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xc9U)))));
    VL_ASSIGNBIT_WI(0xcaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xcaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xcaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xcaU)))));
    VL_ASSIGNBIT_WI(0xcbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xcbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xcbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xcbU)))));
    VL_ASSIGNBIT_WI(0xccU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xccU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xccU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xccU)))));
    VL_ASSIGNBIT_WI(0xcdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xcdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xcdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xcdU)))));
    VL_ASSIGNBIT_WI(0xceU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xceU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xceU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xceU)))));
    VL_ASSIGNBIT_WI(0xcfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xcfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xcfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xcfU)))));
    VL_ASSIGNBIT_WI(0xd0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xd0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xd0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xd0U)))));
    VL_ASSIGNBIT_WI(0xd1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xd1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xd1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xd1U)))));
    VL_ASSIGNBIT_WI(0xd2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xd2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xd2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xd2U)))));
    VL_ASSIGNBIT_WI(0xd3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xd3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xd3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xd3U)))));
    VL_ASSIGNBIT_WI(0xd4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xd4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xd4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xd4U)))));
    VL_ASSIGNBIT_WI(0xd5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xd5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xd5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xd5U)))));
    VL_ASSIGNBIT_WI(0xd6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xd6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xd6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xd6U)))));
    VL_ASSIGNBIT_WI(0xd7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xd7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xd7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xd7U)))));
    VL_ASSIGNBIT_WI(0xd8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xd8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xd8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xd8U)))));
    VL_ASSIGNBIT_WI(0xd9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xd9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xd9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xd9U)))));
    VL_ASSIGNBIT_WI(0xdaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xdaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xdaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xdaU)))));
    VL_ASSIGNBIT_WI(0xdbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xdbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xdbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xdbU)))));
    VL_ASSIGNBIT_WI(0xdcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xdcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xdcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xdcU)))));
    VL_ASSIGNBIT_WI(0xddU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xddU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xddU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xddU)))));
    VL_ASSIGNBIT_WI(0xdeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xdeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xdeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xdeU)))));
    VL_ASSIGNBIT_WI(0xdfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xdfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xdfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xdfU)))));
    VL_ASSIGNBIT_WI(0xe0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xe0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xe0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xe0U)))));
    VL_ASSIGNBIT_WI(0xe1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xe1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xe1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xe1U)))));
    VL_ASSIGNBIT_WI(0xe2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xe2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xe2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xe2U)))));
    VL_ASSIGNBIT_WI(0xe3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xe3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xe3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xe3U)))));
    VL_ASSIGNBIT_WI(0xe4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xe4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xe4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xe4U)))));
    VL_ASSIGNBIT_WI(0xe5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xe5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xe5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xe5U)))));
    VL_ASSIGNBIT_WI(0xe6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xe6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xe6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xe6U)))));
    VL_ASSIGNBIT_WI(0xe7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xe7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xe7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xe7U)))));
    VL_ASSIGNBIT_WI(0xe8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xe8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xe8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xe8U)))));
    VL_ASSIGNBIT_WI(0xe9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xe9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xe9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xe9U)))));
    VL_ASSIGNBIT_WI(0xeaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xeaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xeaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xeaU)))));
    VL_ASSIGNBIT_WI(0xebU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xebU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xebU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xebU)))));
    VL_ASSIGNBIT_WI(0xecU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xecU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xecU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xecU)))));
    VL_ASSIGNBIT_WI(0xedU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xedU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xedU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xedU)))));
    VL_ASSIGNBIT_WI(0xeeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xeeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xeeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xeeU)))));
    VL_ASSIGNBIT_WI(0xefU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xefU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xefU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xefU)))));
    VL_ASSIGNBIT_WI(0xf0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xf0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xf0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xf0U)))));
    VL_ASSIGNBIT_WI(0xf1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xf1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xf1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xf1U)))));
    VL_ASSIGNBIT_WI(0xf2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xf2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xf2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xf2U)))));
    VL_ASSIGNBIT_WI(0xf3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xf3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xf3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xf3U)))));
    VL_ASSIGNBIT_WI(0xf4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xf4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xf4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xf4U)))));
    VL_ASSIGNBIT_WI(0xf5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xf5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xf5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xf5U)))));
    VL_ASSIGNBIT_WI(0xf6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xf6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xf6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xf6U)))));
    VL_ASSIGNBIT_WI(0xf7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xf7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xf7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xf7U)))));
    VL_ASSIGNBIT_WI(0xf8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xf8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xf8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xf8U)))));
    VL_ASSIGNBIT_WI(0xf9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xf9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xf9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xf9U)))));
    VL_ASSIGNBIT_WI(0xfaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xfaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xfaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xfaU)))));
    VL_ASSIGNBIT_WI(0xfbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xfbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xfbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xfbU)))));
    VL_ASSIGNBIT_WI(0xfcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xfcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xfcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xfcU)))));
    VL_ASSIGNBIT_WI(0xfdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xfdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xfdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xfdU)))));
    VL_ASSIGNBIT_WI(0xfeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xfeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xfeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xfeU)))));
    VL_ASSIGNBIT_WI(0xffU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0xffU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0xffU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0xffU)))));
    VL_ASSIGNBIT_WI(0x100U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x100U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x100U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x100U)))));
    VL_ASSIGNBIT_WI(0x101U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x101U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x101U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x101U)))));
    VL_ASSIGNBIT_WI(0x102U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x102U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x102U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x102U)))));
    VL_ASSIGNBIT_WI(0x103U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x103U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x103U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x103U)))));
    VL_ASSIGNBIT_WI(0x104U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x104U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x104U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x104U)))));
    VL_ASSIGNBIT_WI(0x105U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x105U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x105U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x105U)))));
    VL_ASSIGNBIT_WI(0x106U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x106U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x106U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x106U)))));
    VL_ASSIGNBIT_WI(0x107U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x107U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x107U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x107U)))));
    VL_ASSIGNBIT_WI(0x108U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x108U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x108U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x108U)))));
    VL_ASSIGNBIT_WI(0x109U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x109U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x109U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x109U)))));
    VL_ASSIGNBIT_WI(0x10aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x10aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x10aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x10aU)))));
    VL_ASSIGNBIT_WI(0x10bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x10bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x10bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x10bU)))));
    VL_ASSIGNBIT_WI(0x10cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x10cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x10cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x10cU)))));
    VL_ASSIGNBIT_WI(0x10dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x10dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x10dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x10dU)))));
    VL_ASSIGNBIT_WI(0x10eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x10eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x10eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x10eU)))));
    VL_ASSIGNBIT_WI(0x10fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x10fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x10fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x10fU)))));
    VL_ASSIGNBIT_WI(0x110U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x110U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x110U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x110U)))));
    VL_ASSIGNBIT_WI(0x111U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x111U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x111U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x111U)))));
    VL_ASSIGNBIT_WI(0x112U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x112U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x112U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x112U)))));
    VL_ASSIGNBIT_WI(0x113U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x113U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x113U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x113U)))));
    VL_ASSIGNBIT_WI(0x114U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x114U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x114U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x114U)))));
    VL_ASSIGNBIT_WI(0x115U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x115U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x115U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x115U)))));
    VL_ASSIGNBIT_WI(0x116U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x116U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x116U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x116U)))));
    VL_ASSIGNBIT_WI(0x117U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x117U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x117U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x117U)))));
    VL_ASSIGNBIT_WI(0x118U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x118U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x118U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x118U)))));
    VL_ASSIGNBIT_WI(0x119U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x119U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x119U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x119U)))));
    VL_ASSIGNBIT_WI(0x11aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x11aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x11aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x11aU)))));
    VL_ASSIGNBIT_WI(0x11bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x11bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x11bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x11bU)))));
    VL_ASSIGNBIT_WI(0x11cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x11cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x11cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x11cU)))));
    VL_ASSIGNBIT_WI(0x11dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x11dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x11dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x11dU)))));
    VL_ASSIGNBIT_WI(0x11eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x11eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x11eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x11eU)))));
    VL_ASSIGNBIT_WI(0x11fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x11fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x11fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x11fU)))));
    VL_ASSIGNBIT_WI(0x120U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x120U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x120U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x120U)))));
    VL_ASSIGNBIT_WI(0x121U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x121U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x121U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x121U)))));
    VL_ASSIGNBIT_WI(0x122U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x122U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x122U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x122U)))));
    VL_ASSIGNBIT_WI(0x123U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x123U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x123U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x123U)))));
    VL_ASSIGNBIT_WI(0x124U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x124U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x124U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x124U)))));
    VL_ASSIGNBIT_WI(0x125U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x125U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x125U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x125U)))));
    VL_ASSIGNBIT_WI(0x126U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x126U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x126U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x126U)))));
    VL_ASSIGNBIT_WI(0x127U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x127U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x127U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x127U)))));
    VL_ASSIGNBIT_WI(0x128U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x128U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x128U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x128U)))));
    VL_ASSIGNBIT_WI(0x129U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x129U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x129U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x129U)))));
    VL_ASSIGNBIT_WI(0x12aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x12aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x12aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x12aU)))));
    VL_ASSIGNBIT_WI(0x12bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x12bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x12bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x12bU)))));
    VL_ASSIGNBIT_WI(0x12cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x12cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x12cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x12cU)))));
    VL_ASSIGNBIT_WI(0x12dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x12dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x12dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x12dU)))));
    VL_ASSIGNBIT_WI(0x12eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x12eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x12eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x12eU)))));
    VL_ASSIGNBIT_WI(0x12fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x12fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x12fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x12fU)))));
    VL_ASSIGNBIT_WI(0x130U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x130U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x130U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x130U)))));
    VL_ASSIGNBIT_WI(0x131U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x131U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x131U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x131U)))));
    VL_ASSIGNBIT_WI(0x132U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x132U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x132U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x132U)))));
    VL_ASSIGNBIT_WI(0x133U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x133U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x133U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x133U)))));
    VL_ASSIGNBIT_WI(0x134U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x134U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x134U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x134U)))));
    VL_ASSIGNBIT_WI(0x135U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x135U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x135U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x135U)))));
    VL_ASSIGNBIT_WI(0x136U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x136U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x136U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x136U)))));
    VL_ASSIGNBIT_WI(0x137U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x137U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x137U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x137U)))));
    VL_ASSIGNBIT_WI(0x138U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x138U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x138U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x138U)))));
    VL_ASSIGNBIT_WI(0x139U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x139U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x139U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x139U)))));
    VL_ASSIGNBIT_WI(0x13aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x13aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x13aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x13aU)))));
    VL_ASSIGNBIT_WI(0x13bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x13bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x13bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x13bU)))));
    VL_ASSIGNBIT_WI(0x13cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x13cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x13cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x13cU)))));
    VL_ASSIGNBIT_WI(0x13dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x13dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x13dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x13dU)))));
    VL_ASSIGNBIT_WI(0x13eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x13eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x13eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x13eU)))));
    VL_ASSIGNBIT_WI(0x13fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x13fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x13fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x13fU)))));
    VL_ASSIGNBIT_WI(0x140U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x140U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x140U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x140U)))));
    VL_ASSIGNBIT_WI(0x141U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x141U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x141U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x141U)))));
    VL_ASSIGNBIT_WI(0x142U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x142U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x142U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x142U)))));
    VL_ASSIGNBIT_WI(0x143U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x143U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x143U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x143U)))));
    VL_ASSIGNBIT_WI(0x144U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x144U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x144U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x144U)))));
    VL_ASSIGNBIT_WI(0x145U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x145U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x145U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x145U)))));
    VL_ASSIGNBIT_WI(0x146U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x146U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x146U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x146U)))));
    VL_ASSIGNBIT_WI(0x147U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x147U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x147U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x147U)))));
    VL_ASSIGNBIT_WI(0x148U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x148U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x148U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x148U)))));
    VL_ASSIGNBIT_WI(0x149U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x149U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x149U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x149U)))));
    VL_ASSIGNBIT_WI(0x14aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x14aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x14aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x14aU)))));
    VL_ASSIGNBIT_WI(0x14bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x14bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x14bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x14bU)))));
    VL_ASSIGNBIT_WI(0x14cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x14cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x14cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x14cU)))));
    VL_ASSIGNBIT_WI(0x14dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x14dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x14dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x14dU)))));
    VL_ASSIGNBIT_WI(0x14eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x14eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x14eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x14eU)))));
    VL_ASSIGNBIT_WI(0x14fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x14fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x14fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x14fU)))));
    VL_ASSIGNBIT_WI(0x150U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x150U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x150U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x150U)))));
    VL_ASSIGNBIT_WI(0x151U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x151U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x151U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x151U)))));
    VL_ASSIGNBIT_WI(0x152U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x152U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x152U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x152U)))));
    VL_ASSIGNBIT_WI(0x153U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x153U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x153U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x153U)))));
    VL_ASSIGNBIT_WI(0x154U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x154U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x154U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x154U)))));
    VL_ASSIGNBIT_WI(0x155U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x155U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x155U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x155U)))));
    VL_ASSIGNBIT_WI(0x156U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x156U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x156U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x156U)))));
    VL_ASSIGNBIT_WI(0x157U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x157U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x157U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x157U)))));
    VL_ASSIGNBIT_WI(0x158U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x158U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x158U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x158U)))));
    VL_ASSIGNBIT_WI(0x159U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x159U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x159U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x159U)))));
    VL_ASSIGNBIT_WI(0x15aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x15aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x15aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x15aU)))));
    VL_ASSIGNBIT_WI(0x15bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x15bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x15bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x15bU)))));
    VL_ASSIGNBIT_WI(0x15cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x15cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x15cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x15cU)))));
    VL_ASSIGNBIT_WI(0x15dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x15dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x15dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x15dU)))));
    VL_ASSIGNBIT_WI(0x15eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x15eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x15eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x15eU)))));
    VL_ASSIGNBIT_WI(0x15fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x15fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x15fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x15fU)))));
    VL_ASSIGNBIT_WI(0x160U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x160U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x160U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x160U)))));
    VL_ASSIGNBIT_WI(0x161U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x161U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x161U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x161U)))));
    VL_ASSIGNBIT_WI(0x162U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x162U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x162U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x162U)))));
    VL_ASSIGNBIT_WI(0x163U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x163U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x163U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x163U)))));
    VL_ASSIGNBIT_WI(0x164U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x164U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x164U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x164U)))));
    VL_ASSIGNBIT_WI(0x165U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x165U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x165U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x165U)))));
    VL_ASSIGNBIT_WI(0x166U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x166U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x166U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x166U)))));
    VL_ASSIGNBIT_WI(0x167U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x167U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x167U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x167U)))));
    VL_ASSIGNBIT_WI(0x168U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x168U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x168U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x168U)))));
    VL_ASSIGNBIT_WI(0x169U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x169U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x169U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x169U)))));
    VL_ASSIGNBIT_WI(0x16aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x16aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x16aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x16aU)))));
    VL_ASSIGNBIT_WI(0x16bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x16bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x16bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x16bU)))));
    VL_ASSIGNBIT_WI(0x16cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x16cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x16cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x16cU)))));
    VL_ASSIGNBIT_WI(0x16dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x16dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x16dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x16dU)))));
    VL_ASSIGNBIT_WI(0x16eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x16eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x16eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x16eU)))));
    VL_ASSIGNBIT_WI(0x16fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x16fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x16fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x16fU)))));
    VL_ASSIGNBIT_WI(0x170U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x170U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x170U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x170U)))));
    VL_ASSIGNBIT_WI(0x171U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x171U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x171U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x171U)))));
    VL_ASSIGNBIT_WI(0x172U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x172U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x172U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x172U)))));
    VL_ASSIGNBIT_WI(0x173U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x173U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x173U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x173U)))));
    VL_ASSIGNBIT_WI(0x174U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x174U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x174U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x174U)))));
    VL_ASSIGNBIT_WI(0x175U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x175U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x175U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x175U)))));
    VL_ASSIGNBIT_WI(0x176U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x176U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x176U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x176U)))));
    VL_ASSIGNBIT_WI(0x177U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x177U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x177U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x177U)))));
    VL_ASSIGNBIT_WI(0x178U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x178U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x178U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x178U)))));
    VL_ASSIGNBIT_WI(0x179U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x179U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x179U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x179U)))));
    VL_ASSIGNBIT_WI(0x17aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x17aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x17aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x17aU)))));
    VL_ASSIGNBIT_WI(0x17bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x17bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x17bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x17bU)))));
    VL_ASSIGNBIT_WI(0x17cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x17cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x17cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x17cU)))));
    VL_ASSIGNBIT_WI(0x17dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x17dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x17dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x17dU)))));
    VL_ASSIGNBIT_WI(0x17eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x17eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x17eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x17eU)))));
    VL_ASSIGNBIT_WI(0x17fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x17fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x17fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x17fU)))));
    VL_ASSIGNBIT_WI(0x180U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x180U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x180U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x180U)))));
    VL_ASSIGNBIT_WI(0x181U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x181U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x181U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x181U)))));
    VL_ASSIGNBIT_WI(0x182U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x182U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x182U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x182U)))));
    VL_ASSIGNBIT_WI(0x183U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x183U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x183U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x183U)))));
    VL_ASSIGNBIT_WI(0x184U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x184U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x184U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x184U)))));
    VL_ASSIGNBIT_WI(0x185U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x185U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x185U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x185U)))));
    VL_ASSIGNBIT_WI(0x186U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x186U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x186U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x186U)))));
    VL_ASSIGNBIT_WI(0x187U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x187U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x187U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x187U)))));
    VL_ASSIGNBIT_WI(0x188U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x188U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x188U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x188U)))));
    VL_ASSIGNBIT_WI(0x189U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x189U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x189U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x189U)))));
    VL_ASSIGNBIT_WI(0x18aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x18aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x18aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x18aU)))));
    VL_ASSIGNBIT_WI(0x18bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x18bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x18bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x18bU)))));
    VL_ASSIGNBIT_WI(0x18cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x18cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x18cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x18cU)))));
    VL_ASSIGNBIT_WI(0x18dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x18dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x18dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x18dU)))));
    VL_ASSIGNBIT_WI(0x18eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x18eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x18eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x18eU)))));
    VL_ASSIGNBIT_WI(0x18fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x18fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x18fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x18fU)))));
    VL_ASSIGNBIT_WI(0x190U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x190U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x190U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x190U)))));
    VL_ASSIGNBIT_WI(0x191U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x191U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x191U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x191U)))));
    VL_ASSIGNBIT_WI(0x192U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x192U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x192U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x192U)))));
    VL_ASSIGNBIT_WI(0x193U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x193U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x193U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x193U)))));
    VL_ASSIGNBIT_WI(0x194U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x194U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x194U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x194U)))));
    VL_ASSIGNBIT_WI(0x195U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x195U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x195U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x195U)))));
    VL_ASSIGNBIT_WI(0x196U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x196U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x196U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x196U)))));
    VL_ASSIGNBIT_WI(0x197U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x197U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x197U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x197U)))));
    VL_ASSIGNBIT_WI(0x198U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x198U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x198U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x198U)))));
    VL_ASSIGNBIT_WI(0x199U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x199U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x199U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x199U)))));
    VL_ASSIGNBIT_WI(0x19aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x19aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x19aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x19aU)))));
    VL_ASSIGNBIT_WI(0x19bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x19bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x19bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x19bU)))));
    VL_ASSIGNBIT_WI(0x19cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x19cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x19cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x19cU)))));
    VL_ASSIGNBIT_WI(0x19dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x19dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x19dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x19dU)))));
    VL_ASSIGNBIT_WI(0x19eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x19eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x19eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x19eU)))));
    VL_ASSIGNBIT_WI(0x19fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x19fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x19fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x19fU)))));
    VL_ASSIGNBIT_WI(0x1a0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1a0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1a0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1a0U)))));
    VL_ASSIGNBIT_WI(0x1a1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1a1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1a1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1a1U)))));
    VL_ASSIGNBIT_WI(0x1a2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1a2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1a2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1a2U)))));
    VL_ASSIGNBIT_WI(0x1a3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1a3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1a3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1a3U)))));
    VL_ASSIGNBIT_WI(0x1a4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1a4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1a4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1a4U)))));
    VL_ASSIGNBIT_WI(0x1a5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1a5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1a5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1a5U)))));
    VL_ASSIGNBIT_WI(0x1a6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1a6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1a6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1a6U)))));
    VL_ASSIGNBIT_WI(0x1a7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1a7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1a7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1a7U)))));
    VL_ASSIGNBIT_WI(0x1a8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1a8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1a8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1a8U)))));
    VL_ASSIGNBIT_WI(0x1a9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1a9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1a9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1a9U)))));
    VL_ASSIGNBIT_WI(0x1aaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1aaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1aaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1aaU)))));
    VL_ASSIGNBIT_WI(0x1abU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1abU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1abU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1abU)))));
    VL_ASSIGNBIT_WI(0x1acU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1acU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1acU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1acU)))));
    VL_ASSIGNBIT_WI(0x1adU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1adU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1adU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1adU)))));
    VL_ASSIGNBIT_WI(0x1aeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1aeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1aeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1aeU)))));
    VL_ASSIGNBIT_WI(0x1afU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1afU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1afU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1afU)))));
    VL_ASSIGNBIT_WI(0x1b0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1b0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1b0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1b0U)))));
    VL_ASSIGNBIT_WI(0x1b1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1b1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1b1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1b1U)))));
    VL_ASSIGNBIT_WI(0x1b2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1b2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1b2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1b2U)))));
    VL_ASSIGNBIT_WI(0x1b3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1b3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1b3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1b3U)))));
    VL_ASSIGNBIT_WI(0x1b4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1b4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1b4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1b4U)))));
    VL_ASSIGNBIT_WI(0x1b5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1b5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1b5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1b5U)))));
    VL_ASSIGNBIT_WI(0x1b6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1b6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1b6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1b6U)))));
    VL_ASSIGNBIT_WI(0x1b7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1b7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1b7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1b7U)))));
    VL_ASSIGNBIT_WI(0x1b8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1b8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1b8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1b8U)))));
    VL_ASSIGNBIT_WI(0x1b9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1b9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1b9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1b9U)))));
    VL_ASSIGNBIT_WI(0x1baU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1baU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1baU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1baU)))));
    VL_ASSIGNBIT_WI(0x1bbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1bbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1bbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1bbU)))));
    VL_ASSIGNBIT_WI(0x1bcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1bcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1bcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1bcU)))));
    VL_ASSIGNBIT_WI(0x1bdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1bdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1bdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1bdU)))));
    VL_ASSIGNBIT_WI(0x1beU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1beU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1beU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1beU)))));
    VL_ASSIGNBIT_WI(0x1bfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1bfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1bfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1bfU)))));
    VL_ASSIGNBIT_WI(0x1c0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1c0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1c0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1c0U)))));
    VL_ASSIGNBIT_WI(0x1c1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1c1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1c1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1c1U)))));
    VL_ASSIGNBIT_WI(0x1c2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1c2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1c2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1c2U)))));
    VL_ASSIGNBIT_WI(0x1c3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1c3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1c3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1c3U)))));
    VL_ASSIGNBIT_WI(0x1c4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1c4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1c4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1c4U)))));
    VL_ASSIGNBIT_WI(0x1c5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1c5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1c5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1c5U)))));
    VL_ASSIGNBIT_WI(0x1c6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1c6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1c6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1c6U)))));
    VL_ASSIGNBIT_WI(0x1c7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1c7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1c7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1c7U)))));
    VL_ASSIGNBIT_WI(0x1c8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1c8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1c8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1c8U)))));
    VL_ASSIGNBIT_WI(0x1c9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1c9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1c9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1c9U)))));
    VL_ASSIGNBIT_WI(0x1caU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1caU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1caU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1caU)))));
    VL_ASSIGNBIT_WI(0x1cbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1cbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1cbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1cbU)))));
    VL_ASSIGNBIT_WI(0x1ccU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1ccU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1ccU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1ccU)))));
    VL_ASSIGNBIT_WI(0x1cdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1cdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1cdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1cdU)))));
    VL_ASSIGNBIT_WI(0x1ceU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1ceU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1ceU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1ceU)))));
    VL_ASSIGNBIT_WI(0x1cfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1cfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1cfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1cfU)))));
    VL_ASSIGNBIT_WI(0x1d0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1d0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1d0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1d0U)))));
    VL_ASSIGNBIT_WI(0x1d1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1d1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1d1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1d1U)))));
    VL_ASSIGNBIT_WI(0x1d2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1d2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1d2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1d2U)))));
    VL_ASSIGNBIT_WI(0x1d3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1d3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1d3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1d3U)))));
    VL_ASSIGNBIT_WI(0x1d4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1d4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1d4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1d4U)))));
    VL_ASSIGNBIT_WI(0x1d5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1d5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1d5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1d5U)))));
    VL_ASSIGNBIT_WI(0x1d6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1d6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1d6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1d6U)))));
    VL_ASSIGNBIT_WI(0x1d7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1d7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1d7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1d7U)))));
    VL_ASSIGNBIT_WI(0x1d8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1d8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1d8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1d8U)))));
    VL_ASSIGNBIT_WI(0x1d9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1d9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1d9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1d9U)))));
    VL_ASSIGNBIT_WI(0x1daU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1daU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1daU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1daU)))));
    VL_ASSIGNBIT_WI(0x1dbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1dbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1dbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1dbU)))));
    VL_ASSIGNBIT_WI(0x1dcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1dcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1dcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1dcU)))));
    VL_ASSIGNBIT_WI(0x1ddU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1ddU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1ddU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1ddU)))));
    VL_ASSIGNBIT_WI(0x1deU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1deU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1deU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1deU)))));
    VL_ASSIGNBIT_WI(0x1dfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1dfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1dfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1dfU)))));
    VL_ASSIGNBIT_WI(0x1e0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1e0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1e0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1e0U)))));
    VL_ASSIGNBIT_WI(0x1e1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1e1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1e1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1e1U)))));
    VL_ASSIGNBIT_WI(0x1e2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1e2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1e2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1e2U)))));
    VL_ASSIGNBIT_WI(0x1e3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1e3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1e3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1e3U)))));
    VL_ASSIGNBIT_WI(0x1e4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1e4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1e4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1e4U)))));
    VL_ASSIGNBIT_WI(0x1e5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1e5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1e5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1e5U)))));
    VL_ASSIGNBIT_WI(0x1e6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1e6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1e6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1e6U)))));
    VL_ASSIGNBIT_WI(0x1e7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1e7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1e7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1e7U)))));
    VL_ASSIGNBIT_WI(0x1e8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1e8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1e8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1e8U)))));
    VL_ASSIGNBIT_WI(0x1e9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1e9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1e9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1e9U)))));
    VL_ASSIGNBIT_WI(0x1eaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1eaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1eaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1eaU)))));
    VL_ASSIGNBIT_WI(0x1ebU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1ebU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1ebU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1ebU)))));
    VL_ASSIGNBIT_WI(0x1ecU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1ecU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1ecU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1ecU)))));
    VL_ASSIGNBIT_WI(0x1edU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1edU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1edU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1edU)))));
    VL_ASSIGNBIT_WI(0x1eeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1eeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1eeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1eeU)))));
    VL_ASSIGNBIT_WI(0x1efU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1efU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1efU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1efU)))));
    VL_ASSIGNBIT_WI(0x1f0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1f0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1f0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1f0U)))));
    VL_ASSIGNBIT_WI(0x1f1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1f1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1f1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1f1U)))));
    VL_ASSIGNBIT_WI(0x1f2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1f2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1f2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1f2U)))));
    VL_ASSIGNBIT_WI(0x1f3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1f3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1f3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1f3U)))));
    VL_ASSIGNBIT_WI(0x1f4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1f4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1f4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1f4U)))));
    VL_ASSIGNBIT_WI(0x1f5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1f5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1f5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1f5U)))));
    VL_ASSIGNBIT_WI(0x1f6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1f6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1f6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1f6U)))));
    VL_ASSIGNBIT_WI(0x1f7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1f7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1f7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1f7U)))));
    VL_ASSIGNBIT_WI(0x1f8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1f8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1f8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1f8U)))));
    VL_ASSIGNBIT_WI(0x1f9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1f9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1f9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1f9U)))));
    VL_ASSIGNBIT_WI(0x1faU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1faU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1faU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1faU)))));
    VL_ASSIGNBIT_WI(0x1fbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1fbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1fbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1fbU)))));
    VL_ASSIGNBIT_WI(0x1fcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1fcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1fcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1fcU)))));
    VL_ASSIGNBIT_WI(0x1fdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1fdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1fdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1fdU)))));
    VL_ASSIGNBIT_WI(0x1feU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1feU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1feU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1feU)))));
    VL_ASSIGNBIT_WI(0x1ffU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x1ffU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x1ffU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x1ffU)))));
    VL_ASSIGNBIT_WI(0x200U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x200U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x200U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x200U)))));
    VL_ASSIGNBIT_WI(0x201U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x201U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x201U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x201U)))));
    VL_ASSIGNBIT_WI(0x202U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x202U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x202U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x202U)))));
    VL_ASSIGNBIT_WI(0x203U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x203U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x203U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x203U)))));
    VL_ASSIGNBIT_WI(0x204U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x204U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x204U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x204U)))));
    VL_ASSIGNBIT_WI(0x205U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x205U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x205U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x205U)))));
    VL_ASSIGNBIT_WI(0x206U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x206U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x206U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x206U)))));
    VL_ASSIGNBIT_WI(0x207U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x207U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x207U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x207U)))));
    VL_ASSIGNBIT_WI(0x208U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x208U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x208U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x208U)))));
    VL_ASSIGNBIT_WI(0x209U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x209U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x209U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x209U)))));
    VL_ASSIGNBIT_WI(0x20aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x20aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x20aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x20aU)))));
    VL_ASSIGNBIT_WI(0x20bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x20bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x20bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x20bU)))));
    VL_ASSIGNBIT_WI(0x20cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x20cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x20cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x20cU)))));
    VL_ASSIGNBIT_WI(0x20dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x20dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x20dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x20dU)))));
    VL_ASSIGNBIT_WI(0x20eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x20eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x20eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x20eU)))));
    VL_ASSIGNBIT_WI(0x20fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x20fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x20fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x20fU)))));
    VL_ASSIGNBIT_WI(0x210U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x210U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x210U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x210U)))));
    VL_ASSIGNBIT_WI(0x211U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x211U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x211U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x211U)))));
    VL_ASSIGNBIT_WI(0x212U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x212U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x212U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x212U)))));
    VL_ASSIGNBIT_WI(0x213U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x213U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x213U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x213U)))));
    VL_ASSIGNBIT_WI(0x214U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x214U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x214U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x214U)))));
    VL_ASSIGNBIT_WI(0x215U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x215U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x215U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x215U)))));
    VL_ASSIGNBIT_WI(0x216U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x216U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x216U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x216U)))));
    VL_ASSIGNBIT_WI(0x217U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x217U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x217U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x217U)))));
    VL_ASSIGNBIT_WI(0x218U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x218U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x218U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x218U)))));
    VL_ASSIGNBIT_WI(0x219U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x219U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x219U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x219U)))));
    VL_ASSIGNBIT_WI(0x21aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x21aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x21aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x21aU)))));
    VL_ASSIGNBIT_WI(0x21bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x21bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x21bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x21bU)))));
    VL_ASSIGNBIT_WI(0x21cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x21cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x21cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x21cU)))));
    VL_ASSIGNBIT_WI(0x21dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x21dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x21dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x21dU)))));
    VL_ASSIGNBIT_WI(0x21eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x21eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x21eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x21eU)))));
    VL_ASSIGNBIT_WI(0x21fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x21fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x21fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x21fU)))));
    VL_ASSIGNBIT_WI(0x220U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x220U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x220U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x220U)))));
    VL_ASSIGNBIT_WI(0x221U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x221U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x221U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x221U)))));
    VL_ASSIGNBIT_WI(0x222U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x222U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x222U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x222U)))));
    VL_ASSIGNBIT_WI(0x223U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x223U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x223U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x223U)))));
    VL_ASSIGNBIT_WI(0x224U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x224U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x224U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x224U)))));
    VL_ASSIGNBIT_WI(0x225U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x225U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x225U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x225U)))));
    VL_ASSIGNBIT_WI(0x226U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x226U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x226U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x226U)))));
    VL_ASSIGNBIT_WI(0x227U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x227U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x227U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x227U)))));
    VL_ASSIGNBIT_WI(0x228U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x228U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x228U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x228U)))));
    VL_ASSIGNBIT_WI(0x229U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x229U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x229U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x229U)))));
    VL_ASSIGNBIT_WI(0x22aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x22aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x22aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x22aU)))));
    VL_ASSIGNBIT_WI(0x22bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x22bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x22bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x22bU)))));
    VL_ASSIGNBIT_WI(0x22cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x22cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x22cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x22cU)))));
    VL_ASSIGNBIT_WI(0x22dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x22dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x22dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x22dU)))));
    VL_ASSIGNBIT_WI(0x22eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x22eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x22eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x22eU)))));
    VL_ASSIGNBIT_WI(0x22fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x22fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x22fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x22fU)))));
    VL_ASSIGNBIT_WI(0x230U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x230U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x230U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x230U)))));
    VL_ASSIGNBIT_WI(0x231U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x231U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x231U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x231U)))));
    VL_ASSIGNBIT_WI(0x232U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x232U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x232U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x232U)))));
    VL_ASSIGNBIT_WI(0x233U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x233U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x233U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x233U)))));
    VL_ASSIGNBIT_WI(0x234U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x234U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x234U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x234U)))));
    VL_ASSIGNBIT_WI(0x235U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x235U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x235U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x235U)))));
    VL_ASSIGNBIT_WI(0x236U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x236U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x236U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x236U)))));
    VL_ASSIGNBIT_WI(0x237U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x237U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x237U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x237U)))));
    VL_ASSIGNBIT_WI(0x238U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x238U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x238U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x238U)))));
    VL_ASSIGNBIT_WI(0x239U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x239U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x239U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x239U)))));
    VL_ASSIGNBIT_WI(0x23aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x23aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x23aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x23aU)))));
    VL_ASSIGNBIT_WI(0x23bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x23bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x23bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x23bU)))));
    VL_ASSIGNBIT_WI(0x23cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x23cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x23cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x23cU)))));
    VL_ASSIGNBIT_WI(0x23dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x23dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x23dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x23dU)))));
    VL_ASSIGNBIT_WI(0x23eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x23eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x23eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x23eU)))));
    VL_ASSIGNBIT_WI(0x23fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x23fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x23fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x23fU)))));
    VL_ASSIGNBIT_WI(0x240U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x240U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x240U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x240U)))));
    VL_ASSIGNBIT_WI(0x241U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x241U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x241U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x241U)))));
    VL_ASSIGNBIT_WI(0x242U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x242U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x242U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x242U)))));
    VL_ASSIGNBIT_WI(0x243U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x243U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x243U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x243U)))));
    VL_ASSIGNBIT_WI(0x244U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x244U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x244U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x244U)))));
    VL_ASSIGNBIT_WI(0x245U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x245U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x245U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x245U)))));
    VL_ASSIGNBIT_WI(0x246U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x246U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x246U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x246U)))));
    VL_ASSIGNBIT_WI(0x247U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x247U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x247U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x247U)))));
    VL_ASSIGNBIT_WI(0x248U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x248U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x248U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x248U)))));
    VL_ASSIGNBIT_WI(0x249U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x249U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x249U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x249U)))));
    VL_ASSIGNBIT_WI(0x24aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x24aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x24aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x24aU)))));
    VL_ASSIGNBIT_WI(0x24bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x24bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x24bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x24bU)))));
    VL_ASSIGNBIT_WI(0x24cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x24cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x24cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x24cU)))));
    VL_ASSIGNBIT_WI(0x24dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x24dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x24dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x24dU)))));
    VL_ASSIGNBIT_WI(0x24eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x24eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x24eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x24eU)))));
    VL_ASSIGNBIT_WI(0x24fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x24fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x24fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x24fU)))));
    VL_ASSIGNBIT_WI(0x250U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x250U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x250U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x250U)))));
    VL_ASSIGNBIT_WI(0x251U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x251U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x251U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x251U)))));
    VL_ASSIGNBIT_WI(0x252U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x252U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x252U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x252U)))));
    VL_ASSIGNBIT_WI(0x253U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x253U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x253U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x253U)))));
    VL_ASSIGNBIT_WI(0x254U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x254U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x254U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x254U)))));
    VL_ASSIGNBIT_WI(0x255U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x255U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x255U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x255U)))));
    VL_ASSIGNBIT_WI(0x256U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x256U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x256U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x256U)))));
    VL_ASSIGNBIT_WI(0x257U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x257U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x257U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x257U)))));
    VL_ASSIGNBIT_WI(0x258U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x258U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x258U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x258U)))));
    VL_ASSIGNBIT_WI(0x259U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x259U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x259U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x259U)))));
    VL_ASSIGNBIT_WI(0x25aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x25aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x25aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x25aU)))));
    VL_ASSIGNBIT_WI(0x25bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x25bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x25bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x25bU)))));
    VL_ASSIGNBIT_WI(0x25cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x25cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x25cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x25cU)))));
    VL_ASSIGNBIT_WI(0x25dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x25dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x25dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x25dU)))));
    VL_ASSIGNBIT_WI(0x25eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x25eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x25eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x25eU)))));
    VL_ASSIGNBIT_WI(0x25fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x25fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x25fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x25fU)))));
    VL_ASSIGNBIT_WI(0x260U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x260U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x260U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x260U)))));
    VL_ASSIGNBIT_WI(0x261U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x261U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x261U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x261U)))));
    VL_ASSIGNBIT_WI(0x262U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x262U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x262U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x262U)))));
    VL_ASSIGNBIT_WI(0x263U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x263U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x263U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x263U)))));
    VL_ASSIGNBIT_WI(0x264U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x264U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x264U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x264U)))));
    VL_ASSIGNBIT_WI(0x265U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x265U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x265U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x265U)))));
    VL_ASSIGNBIT_WI(0x266U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x266U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x266U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x266U)))));
    VL_ASSIGNBIT_WI(0x267U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x267U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x267U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x267U)))));
    VL_ASSIGNBIT_WI(0x268U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x268U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x268U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x268U)))));
    VL_ASSIGNBIT_WI(0x269U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x269U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x269U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x269U)))));
    VL_ASSIGNBIT_WI(0x26aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x26aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x26aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x26aU)))));
    VL_ASSIGNBIT_WI(0x26bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x26bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x26bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x26bU)))));
    VL_ASSIGNBIT_WI(0x26cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x26cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x26cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x26cU)))));
    VL_ASSIGNBIT_WI(0x26dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x26dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x26dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x26dU)))));
    VL_ASSIGNBIT_WI(0x26eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x26eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x26eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x26eU)))));
    VL_ASSIGNBIT_WI(0x26fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x26fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x26fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x26fU)))));
    VL_ASSIGNBIT_WI(0x270U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x270U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x270U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x270U)))));
    VL_ASSIGNBIT_WI(0x271U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x271U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x271U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x271U)))));
    VL_ASSIGNBIT_WI(0x272U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x272U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x272U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x272U)))));
    VL_ASSIGNBIT_WI(0x273U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x273U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x273U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x273U)))));
    VL_ASSIGNBIT_WI(0x274U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x274U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x274U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x274U)))));
    VL_ASSIGNBIT_WI(0x275U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x275U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x275U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x275U)))));
    VL_ASSIGNBIT_WI(0x276U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x276U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x276U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x276U)))));
    VL_ASSIGNBIT_WI(0x277U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x277U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x277U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x277U)))));
    VL_ASSIGNBIT_WI(0x278U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x278U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x278U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x278U)))));
    VL_ASSIGNBIT_WI(0x279U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x279U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x279U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x279U)))));
    VL_ASSIGNBIT_WI(0x27aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x27aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x27aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x27aU)))));
    VL_ASSIGNBIT_WI(0x27bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x27bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x27bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x27bU)))));
    VL_ASSIGNBIT_WI(0x27cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x27cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x27cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x27cU)))));
    VL_ASSIGNBIT_WI(0x27dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x27dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x27dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x27dU)))));
    VL_ASSIGNBIT_WI(0x27eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x27eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x27eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x27eU)))));
    VL_ASSIGNBIT_WI(0x27fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x27fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x27fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x27fU)))));
    VL_ASSIGNBIT_WI(0x280U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x280U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x280U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x280U)))));
    VL_ASSIGNBIT_WI(0x281U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x281U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x281U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x281U)))));
    VL_ASSIGNBIT_WI(0x282U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x282U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x282U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x282U)))));
    VL_ASSIGNBIT_WI(0x283U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x283U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x283U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x283U)))));
    VL_ASSIGNBIT_WI(0x284U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x284U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x284U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x284U)))));
    VL_ASSIGNBIT_WI(0x285U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x285U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x285U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x285U)))));
    VL_ASSIGNBIT_WI(0x286U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x286U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x286U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x286U)))));
    VL_ASSIGNBIT_WI(0x287U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x287U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x287U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x287U)))));
    VL_ASSIGNBIT_WI(0x288U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x288U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x288U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x288U)))));
    VL_ASSIGNBIT_WI(0x289U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x289U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x289U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x289U)))));
    VL_ASSIGNBIT_WI(0x28aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x28aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x28aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x28aU)))));
    VL_ASSIGNBIT_WI(0x28bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x28bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x28bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x28bU)))));
    VL_ASSIGNBIT_WI(0x28cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x28cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x28cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x28cU)))));
    VL_ASSIGNBIT_WI(0x28dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x28dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x28dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x28dU)))));
    VL_ASSIGNBIT_WI(0x28eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x28eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x28eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x28eU)))));
    VL_ASSIGNBIT_WI(0x28fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x28fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x28fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x28fU)))));
    VL_ASSIGNBIT_WI(0x290U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x290U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x290U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x290U)))));
    VL_ASSIGNBIT_WI(0x291U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x291U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x291U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x291U)))));
    VL_ASSIGNBIT_WI(0x292U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x292U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x292U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x292U)))));
    VL_ASSIGNBIT_WI(0x293U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x293U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x293U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x293U)))));
    VL_ASSIGNBIT_WI(0x294U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x294U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x294U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x294U)))));
    VL_ASSIGNBIT_WI(0x295U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x295U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x295U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x295U)))));
    VL_ASSIGNBIT_WI(0x296U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x296U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x296U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x296U)))));
    VL_ASSIGNBIT_WI(0x297U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x297U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x297U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x297U)))));
    VL_ASSIGNBIT_WI(0x298U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x298U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x298U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x298U)))));
    VL_ASSIGNBIT_WI(0x299U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x299U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x299U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x299U)))));
    VL_ASSIGNBIT_WI(0x29aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x29aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x29aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x29aU)))));
    VL_ASSIGNBIT_WI(0x29bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x29bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x29bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x29bU)))));
    VL_ASSIGNBIT_WI(0x29cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x29cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x29cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x29cU)))));
    VL_ASSIGNBIT_WI(0x29dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x29dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x29dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x29dU)))));
    VL_ASSIGNBIT_WI(0x29eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x29eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x29eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x29eU)))));
    VL_ASSIGNBIT_WI(0x29fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x29fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x29fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x29fU)))));
    VL_ASSIGNBIT_WI(0x2a0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2a0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2a0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2a0U)))));
    VL_ASSIGNBIT_WI(0x2a1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2a1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2a1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2a1U)))));
    VL_ASSIGNBIT_WI(0x2a2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2a2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2a2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2a2U)))));
    VL_ASSIGNBIT_WI(0x2a3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2a3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2a3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2a3U)))));
    VL_ASSIGNBIT_WI(0x2a4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2a4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2a4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2a4U)))));
    VL_ASSIGNBIT_WI(0x2a5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2a5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2a5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2a5U)))));
    VL_ASSIGNBIT_WI(0x2a6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2a6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2a6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2a6U)))));
    VL_ASSIGNBIT_WI(0x2a7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2a7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2a7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2a7U)))));
    VL_ASSIGNBIT_WI(0x2a8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2a8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2a8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2a8U)))));
    VL_ASSIGNBIT_WI(0x2a9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2a9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2a9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2a9U)))));
    VL_ASSIGNBIT_WI(0x2aaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2aaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2aaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2aaU)))));
    VL_ASSIGNBIT_WI(0x2abU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2abU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2abU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2abU)))));
    VL_ASSIGNBIT_WI(0x2acU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2acU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2acU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2acU)))));
    VL_ASSIGNBIT_WI(0x2adU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2adU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2adU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2adU)))));
    VL_ASSIGNBIT_WI(0x2aeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2aeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2aeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2aeU)))));
    VL_ASSIGNBIT_WI(0x2afU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2afU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2afU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2afU)))));
    VL_ASSIGNBIT_WI(0x2b0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2b0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2b0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2b0U)))));
    VL_ASSIGNBIT_WI(0x2b1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2b1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2b1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2b1U)))));
    VL_ASSIGNBIT_WI(0x2b2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2b2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2b2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2b2U)))));
    VL_ASSIGNBIT_WI(0x2b3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2b3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2b3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2b3U)))));
    VL_ASSIGNBIT_WI(0x2b4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2b4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2b4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2b4U)))));
    VL_ASSIGNBIT_WI(0x2b5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2b5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2b5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2b5U)))));
    VL_ASSIGNBIT_WI(0x2b6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2b6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2b6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2b6U)))));
    VL_ASSIGNBIT_WI(0x2b7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2b7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2b7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2b7U)))));
    VL_ASSIGNBIT_WI(0x2b8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2b8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2b8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2b8U)))));
    VL_ASSIGNBIT_WI(0x2b9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2b9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2b9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2b9U)))));
    VL_ASSIGNBIT_WI(0x2baU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2baU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2baU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2baU)))));
    VL_ASSIGNBIT_WI(0x2bbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2bbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2bbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2bbU)))));
    VL_ASSIGNBIT_WI(0x2bcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2bcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2bcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2bcU)))));
    VL_ASSIGNBIT_WI(0x2bdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2bdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2bdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2bdU)))));
    VL_ASSIGNBIT_WI(0x2beU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2beU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2beU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2beU)))));
    VL_ASSIGNBIT_WI(0x2bfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2bfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2bfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2bfU)))));
    VL_ASSIGNBIT_WI(0x2c0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2c0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2c0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2c0U)))));
    VL_ASSIGNBIT_WI(0x2c1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2c1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2c1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2c1U)))));
    VL_ASSIGNBIT_WI(0x2c2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2c2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2c2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2c2U)))));
    VL_ASSIGNBIT_WI(0x2c3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2c3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2c3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2c3U)))));
    VL_ASSIGNBIT_WI(0x2c4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2c4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2c4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2c4U)))));
    VL_ASSIGNBIT_WI(0x2c5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2c5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2c5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2c5U)))));
    VL_ASSIGNBIT_WI(0x2c6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2c6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2c6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2c6U)))));
    VL_ASSIGNBIT_WI(0x2c7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2c7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2c7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2c7U)))));
    VL_ASSIGNBIT_WI(0x2c8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2c8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2c8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2c8U)))));
    VL_ASSIGNBIT_WI(0x2c9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2c9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2c9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2c9U)))));
    VL_ASSIGNBIT_WI(0x2caU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2caU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2caU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2caU)))));
    VL_ASSIGNBIT_WI(0x2cbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2cbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2cbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2cbU)))));
    VL_ASSIGNBIT_WI(0x2ccU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2ccU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2ccU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2ccU)))));
    VL_ASSIGNBIT_WI(0x2cdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2cdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2cdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2cdU)))));
    VL_ASSIGNBIT_WI(0x2ceU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2ceU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2ceU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2ceU)))));
    VL_ASSIGNBIT_WI(0x2cfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2cfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2cfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2cfU)))));
    VL_ASSIGNBIT_WI(0x2d0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2d0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2d0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2d0U)))));
    VL_ASSIGNBIT_WI(0x2d1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2d1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2d1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2d1U)))));
    VL_ASSIGNBIT_WI(0x2d2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2d2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2d2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2d2U)))));
    VL_ASSIGNBIT_WI(0x2d3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2d3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2d3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2d3U)))));
    VL_ASSIGNBIT_WI(0x2d4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2d4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2d4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2d4U)))));
    VL_ASSIGNBIT_WI(0x2d5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2d5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2d5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2d5U)))));
    VL_ASSIGNBIT_WI(0x2d6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2d6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2d6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2d6U)))));
    VL_ASSIGNBIT_WI(0x2d7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2d7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2d7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2d7U)))));
    VL_ASSIGNBIT_WI(0x2d8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2d8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2d8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2d8U)))));
    VL_ASSIGNBIT_WI(0x2d9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2d9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2d9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2d9U)))));
    VL_ASSIGNBIT_WI(0x2daU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2daU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2daU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2daU)))));
    VL_ASSIGNBIT_WI(0x2dbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2dbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2dbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2dbU)))));
    VL_ASSIGNBIT_WI(0x2dcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2dcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2dcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2dcU)))));
    VL_ASSIGNBIT_WI(0x2ddU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2ddU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2ddU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2ddU)))));
    VL_ASSIGNBIT_WI(0x2deU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2deU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2deU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2deU)))));
    VL_ASSIGNBIT_WI(0x2dfU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2dfU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2dfU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2dfU)))));
    VL_ASSIGNBIT_WI(0x2e0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2e0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2e0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2e0U)))));
    VL_ASSIGNBIT_WI(0x2e1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2e1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2e1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2e1U)))));
    VL_ASSIGNBIT_WI(0x2e2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2e2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2e2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2e2U)))));
    VL_ASSIGNBIT_WI(0x2e3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2e3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2e3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2e3U)))));
    VL_ASSIGNBIT_WI(0x2e4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2e4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2e4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2e4U)))));
    VL_ASSIGNBIT_WI(0x2e5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2e5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2e5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2e5U)))));
    VL_ASSIGNBIT_WI(0x2e6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2e6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2e6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2e6U)))));
    VL_ASSIGNBIT_WI(0x2e7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2e7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2e7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2e7U)))));
    VL_ASSIGNBIT_WI(0x2e8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2e8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2e8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2e8U)))));
    VL_ASSIGNBIT_WI(0x2e9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2e9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2e9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2e9U)))));
    VL_ASSIGNBIT_WI(0x2eaU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2eaU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2eaU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2eaU)))));
    VL_ASSIGNBIT_WI(0x2ebU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2ebU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2ebU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2ebU)))));
    VL_ASSIGNBIT_WI(0x2ecU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2ecU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2ecU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2ecU)))));
    VL_ASSIGNBIT_WI(0x2edU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2edU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2edU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2edU)))));
    VL_ASSIGNBIT_WI(0x2eeU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2eeU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2eeU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2eeU)))));
    VL_ASSIGNBIT_WI(0x2efU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2efU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2efU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2efU)))));
    VL_ASSIGNBIT_WI(0x2f0U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2f0U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2f0U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2f0U)))));
    VL_ASSIGNBIT_WI(0x2f1U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2f1U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2f1U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2f1U)))));
    VL_ASSIGNBIT_WI(0x2f2U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2f2U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2f2U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2f2U)))));
    VL_ASSIGNBIT_WI(0x2f3U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2f3U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2f3U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2f3U)))));
    VL_ASSIGNBIT_WI(0x2f4U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2f4U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2f4U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2f4U)))));
    VL_ASSIGNBIT_WI(0x2f5U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2f5U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2f5U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2f5U)))));
    VL_ASSIGNBIT_WI(0x2f6U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2f6U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2f6U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2f6U)))));
    VL_ASSIGNBIT_WI(0x2f7U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2f7U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2f7U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2f7U)))));
    VL_ASSIGNBIT_WI(0x2f8U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2f8U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2f8U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2f8U)))));
    VL_ASSIGNBIT_WI(0x2f9U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2f9U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2f9U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2f9U)))));
    VL_ASSIGNBIT_WI(0x2faU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2faU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2faU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2faU)))));
    VL_ASSIGNBIT_WI(0x2fbU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2fbU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2fbU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2fbU)))));
    VL_ASSIGNBIT_WI(0x2fcU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2fcU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2fcU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2fcU)))));
    VL_ASSIGNBIT_WI(0x2fdU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2fdU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2fdU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2fdU)))));
    VL_ASSIGNBIT_WI(0x2feU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2feU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2feU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2feU)))));
    VL_ASSIGNBIT_WI(0x2ffU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x2ffU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x2ffU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x2ffU)))));
    VL_ASSIGNBIT_WI(0x300U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x300U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x300U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x300U)))));
    VL_ASSIGNBIT_WI(0x301U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x301U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x301U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x301U)))));
    VL_ASSIGNBIT_WI(0x302U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x302U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x302U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x302U)))));
    VL_ASSIGNBIT_WI(0x303U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x303U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x303U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x303U)))));
    VL_ASSIGNBIT_WI(0x304U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x304U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x304U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x304U)))));
    VL_ASSIGNBIT_WI(0x305U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x305U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x305U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x305U)))));
    VL_ASSIGNBIT_WI(0x306U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x306U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x306U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x306U)))));
    VL_ASSIGNBIT_WI(0x307U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x307U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x307U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x307U)))));
    VL_ASSIGNBIT_WI(0x308U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x308U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x308U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x308U)))));
    VL_ASSIGNBIT_WI(0x309U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x309U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x309U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x309U)))));
    VL_ASSIGNBIT_WI(0x30aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x30aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x30aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x30aU)))));
    VL_ASSIGNBIT_WI(0x30bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x30bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x30bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x30bU)))));
    VL_ASSIGNBIT_WI(0x30cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x30cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x30cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x30cU)))));
    VL_ASSIGNBIT_WI(0x30dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x30dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x30dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x30dU)))));
    VL_ASSIGNBIT_WI(0x30eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x30eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x30eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x30eU)))));
    VL_ASSIGNBIT_WI(0x30fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x30fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x30fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x30fU)))));
    VL_ASSIGNBIT_WI(0x310U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x310U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x310U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x310U)))));
    VL_ASSIGNBIT_WI(0x311U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x311U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x311U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x311U)))));
    VL_ASSIGNBIT_WI(0x312U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x312U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x312U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x312U)))));
    VL_ASSIGNBIT_WI(0x313U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x313U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x313U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x313U)))));
    VL_ASSIGNBIT_WI(0x314U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x314U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x314U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x314U)))));
    VL_ASSIGNBIT_WI(0x315U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x315U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x315U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x315U)))));
    VL_ASSIGNBIT_WI(0x316U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x316U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x316U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x316U)))));
    VL_ASSIGNBIT_WI(0x317U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x317U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x317U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x317U)))));
    VL_ASSIGNBIT_WI(0x318U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x318U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x318U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x318U)))));
    VL_ASSIGNBIT_WI(0x319U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x319U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x319U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x319U)))));
    VL_ASSIGNBIT_WI(0x31aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x31aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x31aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x31aU)))));
    VL_ASSIGNBIT_WI(0x31bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x31bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x31bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x31bU)))));
    VL_ASSIGNBIT_WI(0x31cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x31cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x31cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x31cU)))));
    VL_ASSIGNBIT_WI(0x31dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x31dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x31dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x31dU)))));
    VL_ASSIGNBIT_WI(0x31eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x31eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x31eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x31eU)))));
    VL_ASSIGNBIT_WI(0x31fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x31fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x31fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x31fU)))));
    VL_ASSIGNBIT_WI(0x320U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x320U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x320U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x320U)))));
    VL_ASSIGNBIT_WI(0x321U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x321U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x321U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x321U)))));
    VL_ASSIGNBIT_WI(0x322U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x322U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x322U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x322U)))));
    VL_ASSIGNBIT_WI(0x323U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x323U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x323U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x323U)))));
    VL_ASSIGNBIT_WI(0x324U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x324U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x324U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x324U)))));
    VL_ASSIGNBIT_WI(0x325U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x325U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x325U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x325U)))));
    VL_ASSIGNBIT_WI(0x326U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x326U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x326U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x326U)))));
    VL_ASSIGNBIT_WI(0x327U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x327U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x327U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x327U)))));
    VL_ASSIGNBIT_WI(0x328U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x328U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x328U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x328U)))));
    VL_ASSIGNBIT_WI(0x329U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x329U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x329U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x329U)))));
    VL_ASSIGNBIT_WI(0x32aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x32aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x32aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x32aU)))));
    VL_ASSIGNBIT_WI(0x32bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x32bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x32bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x32bU)))));
    VL_ASSIGNBIT_WI(0x32cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x32cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x32cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x32cU)))));
    VL_ASSIGNBIT_WI(0x32dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x32dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x32dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x32dU)))));
    VL_ASSIGNBIT_WI(0x32eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x32eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x32eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x32eU)))));
    VL_ASSIGNBIT_WI(0x32fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x32fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x32fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x32fU)))));
    VL_ASSIGNBIT_WI(0x330U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x330U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x330U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x330U)))));
    VL_ASSIGNBIT_WI(0x331U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x331U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x331U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x331U)))));
    VL_ASSIGNBIT_WI(0x332U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x332U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x332U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x332U)))));
    VL_ASSIGNBIT_WI(0x333U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x333U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x333U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x333U)))));
    VL_ASSIGNBIT_WI(0x334U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x334U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x334U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x334U)))));
    VL_ASSIGNBIT_WI(0x335U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x335U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x335U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x335U)))));
    VL_ASSIGNBIT_WI(0x336U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x336U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x336U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x336U)))));
    VL_ASSIGNBIT_WI(0x337U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x337U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x337U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x337U)))));
    VL_ASSIGNBIT_WI(0x338U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x338U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x338U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x338U)))));
    VL_ASSIGNBIT_WI(0x339U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x339U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x339U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x339U)))));
    VL_ASSIGNBIT_WI(0x33aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x33aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x33aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x33aU)))));
    VL_ASSIGNBIT_WI(0x33bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x33bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x33bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x33bU)))));
    VL_ASSIGNBIT_WI(0x33cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x33cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x33cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x33cU)))));
    VL_ASSIGNBIT_WI(0x33dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x33dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x33dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x33dU)))));
    VL_ASSIGNBIT_WI(0x33eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x33eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x33eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x33eU)))));
    VL_ASSIGNBIT_WI(0x33fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x33fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x33fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x33fU)))));
    VL_ASSIGNBIT_WI(0x340U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x340U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x340U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x340U)))));
    VL_ASSIGNBIT_WI(0x341U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x341U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x341U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x341U)))));
    VL_ASSIGNBIT_WI(0x342U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x342U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x342U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x342U)))));
    VL_ASSIGNBIT_WI(0x343U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x343U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x343U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x343U)))));
    VL_ASSIGNBIT_WI(0x344U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x344U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x344U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x344U)))));
    VL_ASSIGNBIT_WI(0x345U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x345U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x345U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x345U)))));
    VL_ASSIGNBIT_WI(0x346U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x346U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x346U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x346U)))));
    VL_ASSIGNBIT_WI(0x347U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x347U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x347U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x347U)))));
    VL_ASSIGNBIT_WI(0x348U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x348U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x348U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x348U)))));
    VL_ASSIGNBIT_WI(0x349U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x349U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x349U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x349U)))));
    VL_ASSIGNBIT_WI(0x34aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x34aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x34aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x34aU)))));
    VL_ASSIGNBIT_WI(0x34bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x34bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x34bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x34bU)))));
    VL_ASSIGNBIT_WI(0x34cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x34cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x34cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x34cU)))));
    VL_ASSIGNBIT_WI(0x34dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x34dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x34dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x34dU)))));
    VL_ASSIGNBIT_WI(0x34eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x34eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x34eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x34eU)))));
    VL_ASSIGNBIT_WI(0x34fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x34fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x34fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x34fU)))));
    VL_ASSIGNBIT_WI(0x350U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x350U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x350U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x350U)))));
    VL_ASSIGNBIT_WI(0x351U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x351U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x351U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x351U)))));
    VL_ASSIGNBIT_WI(0x352U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x352U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x352U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x352U)))));
    VL_ASSIGNBIT_WI(0x353U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x353U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x353U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x353U)))));
    VL_ASSIGNBIT_WI(0x354U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x354U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x354U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x354U)))));
    VL_ASSIGNBIT_WI(0x355U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x355U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x355U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x355U)))));
    VL_ASSIGNBIT_WI(0x356U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x356U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x356U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x356U)))));
    VL_ASSIGNBIT_WI(0x357U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x357U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x357U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x357U)))));
    VL_ASSIGNBIT_WI(0x358U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x358U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x358U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x358U)))));
    VL_ASSIGNBIT_WI(0x359U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x359U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x359U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x359U)))));
    VL_ASSIGNBIT_WI(0x35aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x35aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x35aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x35aU)))));
    VL_ASSIGNBIT_WI(0x35bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x35bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x35bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x35bU)))));
    VL_ASSIGNBIT_WI(0x35cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x35cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x35cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x35cU)))));
    VL_ASSIGNBIT_WI(0x35dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x35dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x35dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x35dU)))));
    VL_ASSIGNBIT_WI(0x35eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x35eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x35eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x35eU)))));
    VL_ASSIGNBIT_WI(0x35fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x35fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x35fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x35fU)))));
    VL_ASSIGNBIT_WI(0x360U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x360U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x360U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x360U)))));
    VL_ASSIGNBIT_WI(0x361U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x361U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x361U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x361U)))));
    VL_ASSIGNBIT_WI(0x362U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x362U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x362U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x362U)))));
    VL_ASSIGNBIT_WI(0x363U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x363U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x363U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x363U)))));
    VL_ASSIGNBIT_WI(0x364U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x364U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x364U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x364U)))));
    VL_ASSIGNBIT_WI(0x365U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x365U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x365U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x365U)))));
    VL_ASSIGNBIT_WI(0x366U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x366U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x366U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x366U)))));
    VL_ASSIGNBIT_WI(0x367U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x367U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x367U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x367U)))));
    VL_ASSIGNBIT_WI(0x368U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x368U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x368U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x368U)))));
    VL_ASSIGNBIT_WI(0x369U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x369U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x369U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x369U)))));
    VL_ASSIGNBIT_WI(0x36aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x36aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x36aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x36aU)))));
    VL_ASSIGNBIT_WI(0x36bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x36bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x36bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x36bU)))));
    VL_ASSIGNBIT_WI(0x36cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x36cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x36cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x36cU)))));
    VL_ASSIGNBIT_WI(0x36dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x36dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x36dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x36dU)))));
    VL_ASSIGNBIT_WI(0x36eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x36eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x36eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x36eU)))));
    VL_ASSIGNBIT_WI(0x36fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x36fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x36fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x36fU)))));
    VL_ASSIGNBIT_WI(0x370U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x370U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x370U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x370U)))));
    VL_ASSIGNBIT_WI(0x371U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x371U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x371U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x371U)))));
    VL_ASSIGNBIT_WI(0x372U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x372U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x372U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x372U)))));
    VL_ASSIGNBIT_WI(0x373U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x373U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x373U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x373U)))));
    VL_ASSIGNBIT_WI(0x374U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x374U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x374U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x374U)))));
    VL_ASSIGNBIT_WI(0x375U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x375U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x375U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x375U)))));
    VL_ASSIGNBIT_WI(0x376U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x376U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x376U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x376U)))));
    VL_ASSIGNBIT_WI(0x377U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x377U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x377U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x377U)))));
    VL_ASSIGNBIT_WI(0x378U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x378U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x378U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x378U)))));
    VL_ASSIGNBIT_WI(0x379U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x379U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x379U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x379U)))));
    VL_ASSIGNBIT_WI(0x37aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x37aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x37aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x37aU)))));
    VL_ASSIGNBIT_WI(0x37bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x37bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x37bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x37bU)))));
    VL_ASSIGNBIT_WI(0x37cU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x37cU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x37cU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x37cU)))));
    VL_ASSIGNBIT_WI(0x37dU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x37dU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x37dU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x37dU)))));
    VL_ASSIGNBIT_WI(0x37eU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x37eU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x37eU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x37eU)))));
    VL_ASSIGNBIT_WI(0x37fU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x37fU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x37fU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x37fU)))));
    VL_ASSIGNBIT_WI(0x380U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x380U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x380U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x380U)))));
    VL_ASSIGNBIT_WI(0x381U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x381U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x381U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x381U)))));
    VL_ASSIGNBIT_WI(0x382U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x382U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x382U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x382U)))));
    VL_ASSIGNBIT_WI(0x383U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x383U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x383U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x383U)))));
    VL_ASSIGNBIT_WI(0x384U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x384U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x384U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x384U)))));
    VL_ASSIGNBIT_WI(0x385U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x385U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x385U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x385U)))));
    VL_ASSIGNBIT_WI(0x386U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x386U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x386U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x386U)))));
    VL_ASSIGNBIT_WI(0x387U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x387U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x387U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x387U)))));
    VL_ASSIGNBIT_WI(0x388U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x388U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x388U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x388U)))));
    VL_ASSIGNBIT_WI(0x389U, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x389U == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x389U == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x389U)))));
    VL_ASSIGNBIT_WI(0x38aU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38aU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38aU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38aU)))));
    VL_ASSIGNBIT_WI(0x38bU, vlSelfRef.__PVT__in_pendingq_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__rden_cache_d1) 
                             & (IData)(vlSelfRef.__PVT__cache_hit)) 
                            & (0x38bU == (IData)(vlSelfRef.__PVT__cache_index_rd_d1))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_in_pendingq) 
                                  & (0x38bU == (IData)(vlSelfRef.__PVT__cache_index_wr)))) 
                              & VL_BITSEL_IWII(1024, vlSelfRef.__PVT__in_pendingq, 0x38bU)))));
}
