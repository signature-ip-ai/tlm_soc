// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_coherency_ctrlr__pi15.h"

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_ctrlr__pi15___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0(Vsig_topology_top_sig_coherency_ctrlr__pi15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi15___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__winner_timeout_index_B2 = 0U;
    vlSelfRef.__PVT__winner_timeout_index_B3 = 0U;
    vlSelfRef.__PVT__reqfifo_bypass_en = 0U;
    vlSelfRef.__PVT__service_timeout = 0U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_ctrlr__pi15___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__0(Vsig_topology_top_sig_coherency_ctrlr__pi15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi15___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_12;
    VlWide<5>/*159:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_14;
    VlWide<5>/*159:0*/ __Vtemp_15;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_17;
    VlWide<5>/*159:0*/ __Vtemp_18;
    // Body
    VL_CONST_W_1X(155,vlSelfRef.__PVT__winner_colln_entry,0x00000000);
    vlSelfRef.__PVT__winner_colln_addr_invalid = 0U;
    vlSelfRef.__PVT__winner_colln_invalidate = 0U;
    VL_CONST_W_1X(155,vlSelfRef.__PVT__sel_winner_entry,0x00000000);
    vlSelfRef.__PVT__sel_winner_addr_invalid = 0U;
    vlSelfRef.__PVT__sel_winner_invalidate = 0U;
    if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 0U))) {
        VL_CONST_W_5X(160,__Vtemp_1,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(155, 1240, __Vtemp_2, vlSelfRef.__PVT__colln_cmd_field, 0U, 155);
        VL_AND_W(5, vlSelfRef.__PVT__sel_winner_entry, __Vtemp_1, __Vtemp_2);
        vlSelfRef.__PVT__sel_winner_addr_invalid = 
            (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 0U));
        vlSelfRef.__PVT__sel_winner_invalidate = (1U 
                                                  & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate), 0U));
    }
    vlSelfRef.__PVT__unnamedblk6__DOT__i = 1U;
    if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 1U))) {
        VL_CONST_W_5X(160,__Vtemp_3,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(155, 1240, __Vtemp_4, vlSelfRef.__PVT__colln_cmd_field, 0x9bU, 155);
        VL_AND_W(5, vlSelfRef.__PVT__sel_winner_entry, __Vtemp_3, __Vtemp_4);
        vlSelfRef.__PVT__sel_winner_addr_invalid = 
            (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 1U));
        vlSelfRef.__PVT__sel_winner_invalidate = (1U 
                                                  & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate), 1U));
    }
    vlSelfRef.__PVT__unnamedblk6__DOT__i = 2U;
    if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 2U))) {
        VL_CONST_W_5X(160,__Vtemp_5,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(155, 1240, __Vtemp_6, vlSelfRef.__PVT__colln_cmd_field, 0x136U, 155);
        VL_AND_W(5, vlSelfRef.__PVT__sel_winner_entry, __Vtemp_5, __Vtemp_6);
        vlSelfRef.__PVT__sel_winner_addr_invalid = 
            (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 2U));
        vlSelfRef.__PVT__sel_winner_invalidate = (1U 
                                                  & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate), 2U));
    }
    vlSelfRef.__PVT__unnamedblk6__DOT__i = 3U;
    if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 3U))) {
        VL_CONST_W_5X(160,__Vtemp_7,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(155, 1240, __Vtemp_8, vlSelfRef.__PVT__colln_cmd_field, 0x1d1U, 155);
        VL_AND_W(5, vlSelfRef.__PVT__sel_winner_entry, __Vtemp_7, __Vtemp_8);
        vlSelfRef.__PVT__sel_winner_addr_invalid = 
            (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 3U));
        vlSelfRef.__PVT__sel_winner_invalidate = (1U 
                                                  & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate), 3U));
    }
    vlSelfRef.__PVT__unnamedblk6__DOT__i = 4U;
    if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 4U))) {
        VL_CONST_W_5X(160,__Vtemp_9,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(155, 1240, __Vtemp_10, vlSelfRef.__PVT__colln_cmd_field, 0x26cU, 155);
        VL_AND_W(5, vlSelfRef.__PVT__sel_winner_entry, __Vtemp_9, __Vtemp_10);
        vlSelfRef.__PVT__sel_winner_addr_invalid = 
            (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 4U));
        vlSelfRef.__PVT__sel_winner_invalidate = (1U 
                                                  & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate), 4U));
    }
    vlSelfRef.__PVT__unnamedblk6__DOT__i = 5U;
    if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 5U))) {
        VL_CONST_W_5X(160,__Vtemp_11,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(155, 1240, __Vtemp_12, vlSelfRef.__PVT__colln_cmd_field, 0x307U, 155);
        VL_AND_W(5, vlSelfRef.__PVT__sel_winner_entry, __Vtemp_11, __Vtemp_12);
        vlSelfRef.__PVT__sel_winner_addr_invalid = 
            (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 5U));
        vlSelfRef.__PVT__sel_winner_invalidate = (1U 
                                                  & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate), 5U));
    }
    vlSelfRef.__PVT__unnamedblk6__DOT__i = 6U;
    if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 6U))) {
        VL_CONST_W_5X(160,__Vtemp_13,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(155, 1240, __Vtemp_14, vlSelfRef.__PVT__colln_cmd_field, 0x3a2U, 155);
        VL_AND_W(5, vlSelfRef.__PVT__sel_winner_entry, __Vtemp_13, __Vtemp_14);
        vlSelfRef.__PVT__sel_winner_addr_invalid = 
            (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 6U));
        vlSelfRef.__PVT__sel_winner_invalidate = (1U 
                                                  & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate), 6U));
    }
    vlSelfRef.__PVT__unnamedblk6__DOT__i = 7U;
    if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 7U))) {
        VL_CONST_W_5X(160,__Vtemp_15,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        VL_SEL_WWII(155, 1240, __Vtemp_16, vlSelfRef.__PVT__colln_cmd_field, 0x43dU, 155);
        VL_AND_W(5, vlSelfRef.__PVT__sel_winner_entry, __Vtemp_15, __Vtemp_16);
        vlSelfRef.__PVT__sel_winner_addr_invalid = 
            (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 7U));
        vlSelfRef.__PVT__sel_winner_invalidate = (1U 
                                                  & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate), 7U));
    }
    vlSelfRef.__PVT__unnamedblk6__DOT__i = 8U;
    if (vlSelfRef.__PVT__gnt_collnq) {
        VL_ASSIGN_W(155,vlSelfRef.__PVT__winner_colln_entry, vlSelfRef.__PVT__sel_winner_entry);
        vlSelfRef.__PVT__winner_colln_addr_invalid 
            = vlSelfRef.__PVT__sel_winner_addr_invalid;
        vlSelfRef.__PVT__winner_colln_invalidate = vlSelfRef.__PVT__sel_winner_invalidate;
    }
    VL_CONST_W_5X(160,__Vtemp_17,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 155, __Vtemp_18, vlSelfRef.__PVT__sel_winner_entry, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__sel_winner_entry_s, __Vtemp_17, __Vtemp_18);
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_ctrlr__pi15___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__3(Vsig_topology_top_sig_coherency_ctrlr__pi15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi15___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__block_cmq_rd_cache = ((IData)(vlSelfRef.__PVT__wren_cache_cohc_or_dirc) 
                                           & ((IData)(vlSelfRef.__PVT__cache_index_wr_cohc_or_dirc) 
                                              == (0x3ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cm_cmd_s, 0x4eU, 10))));
    vlSelfRef.__PVT__req_cmq_gated = (((((((~ (IData)(vlSelfRef.__PVT__outstand_cmdq_full)) 
                                           & (~ (IData)(vlSelfRef.__PVT__collnq_full))) 
                                          & (~ (IData)(vlSelfRef.__PVT__blockcmq_dueto_highestseqnum_incollnq))) 
                                         & (IData)(vlSelfRef.__PVT__room_atlst3_snpreqfifo)) 
                                        & (~ (IData)(vlSelfRef.__PVT__block_fetch_cohc))) 
                                       & (~ (IData)(vlSelfRef.__PVT__block_cmq_rd_cache))) 
                                      & (IData)(vlSelfRef.__PVT__req_cmq));
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_ctrlr__pi15___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__4(Vsig_topology_top_sig_coherency_ctrlr__pi15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi15___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_reqcmdq = (1U & ((~ (IData)(vlSelfRef.__PVT__empty_reqcmdq)) 
                                          | (((IData)(vlSelfRef.__PVT__empty_reqcmdq) 
                                              & (IData)(vlSelfRef.__PVT__wren_reqcmdq)) 
                                             & (IData)(vlSelfRef.__PVT__reqfifo_bypass_en))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_ctrlr__pi15___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__5(Vsig_topology_top_sig_coherency_ctrlr__pi15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi15___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0U))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 1U))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 1U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 2U))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 2U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 3U))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 3U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 4U))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 4U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 5U))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 5U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 6U))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 6U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 7U))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 7U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 8U))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 8U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 9U))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 9U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xaU))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0xaU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xbU))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0xbU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xcU))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0xcU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xdU))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0xdU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xeU))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0xeU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xfU))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0xfU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0xfU)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x10U))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0x10U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0x10U)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x11U))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0x11U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0x11U)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x12U))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0x12U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0x12U)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x13U))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0x13U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0x13U)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x14U))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0x14U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0x14U)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x15U))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0x15U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0x15U)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x16U))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0x16U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0x16U)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x17U))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0x17U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0x17U)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x18U))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0x18U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0x18U)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x19U))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0x19U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0x19U)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1aU))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0x1aU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0x1aU)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1bU))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0x1bU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0x1bU)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1cU))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0x1cU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0x1cU)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1dU))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0x1dU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0x1dU)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1eU))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0x1eU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0x1eU)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__outstand_prep_valid_nxt, 
                    (1U & ((~ (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU) 
                               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1fU))) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_prep, 0x1fU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_prep_valid, 0x1fU)))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_ctrlr__pi15___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__7(Vsig_topology_top_sig_coherency_ctrlr__pi15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi15___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__block_collnq_rd_cache = ((IData)(vlSelfRef.__PVT__wren_cache_cohc_or_dirc) 
                                              & ((IData)(vlSelfRef.__PVT__cache_index_wr_cohc_or_dirc) 
                                                 == 
                                                 (0x3ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__sel_winner_entry_s, 0x4eU, 10))));
    vlSelfRef.__PVT__req_collnq_gated = (((((~ (IData)(vlSelfRef.__PVT__outstand_cmdq_full)) 
                                            & (IData)(vlSelfRef.__PVT__room_atlst3_snpreqfifo)) 
                                           & (~ (IData)(vlSelfRef.__PVT__block_fetch_cohc))) 
                                          & (~ (IData)(vlSelfRef.__PVT__block_collnq_rd_cache))) 
                                         & (IData)(vlSelfRef.__PVT__req_collnq));
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_ctrlr__pi15___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__9(Vsig_topology_top_sig_coherency_ctrlr__pi15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi15___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__respbuff_avail_nxt = vlSelfRef.__PVT__respbuff_avail;
    if ((((IData)(vlSelfRef.__PVT__allocate_respbuf_snpreq) 
          & (~ (IData)(vlSelfRef.__PVT__allocate_respbuf_compdata))) 
         & (~ (IData)(vlSelfRef.__PVT__deallocate_respbuf_ph3_1st)))) {
        vlSelfRef.__PVT__respbuff_avail_nxt = (0x3fU 
                                               & ((IData)(vlSelfRef.__PVT__respbuff_avail) 
                                                  - (IData)(1U)));
    } else if ((((~ (IData)(vlSelfRef.__PVT__allocate_respbuf_snpreq)) 
                 & (IData)(vlSelfRef.__PVT__allocate_respbuf_compdata)) 
                & (~ (IData)(vlSelfRef.__PVT__deallocate_respbuf_ph3_1st)))) {
        vlSelfRef.__PVT__respbuff_avail_nxt = (0x3fU 
                                               & ((IData)(vlSelfRef.__PVT__respbuff_avail) 
                                                  - (IData)(1U)));
    } else if (((((IData)(vlSelfRef.__PVT__allocate_respbuf_snpreq) 
                  & (IData)(vlSelfRef.__PVT__allocate_respbuf_compdata)) 
                 & (IData)(vlSelfRef.__PVT__deallocate_respbuf_ph3_1st)) 
                & (~ (IData)(vlSelfRef.__PVT__deallocate_respbuf_ph3_2nd)))) {
        vlSelfRef.__PVT__respbuff_avail_nxt = (0x3fU 
                                               & ((IData)(vlSelfRef.__PVT__respbuff_avail) 
                                                  - (IData)(1U)));
    } else if ((((IData)(vlSelfRef.__PVT__allocate_respbuf_snpreq) 
                 & (IData)(vlSelfRef.__PVT__allocate_respbuf_compdata)) 
                & (~ (IData)(vlSelfRef.__PVT__deallocate_respbuf_ph3_1st)))) {
        vlSelfRef.__PVT__respbuff_avail_nxt = (0x3fU 
                                               & ((IData)(vlSelfRef.__PVT__respbuff_avail) 
                                                  - (IData)(2U)));
    } else if (((((~ (IData)(vlSelfRef.__PVT__allocate_respbuf_snpreq)) 
                  & (~ (IData)(vlSelfRef.__PVT__allocate_respbuf_compdata))) 
                 & (IData)(vlSelfRef.__PVT__deallocate_respbuf_ph3_1st)) 
                & (~ (IData)(vlSelfRef.__PVT__deallocate_respbuf_ph3_2nd)))) {
        vlSelfRef.__PVT__respbuff_avail_nxt = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__respbuff_avail)));
    } else if (((((~ (IData)(vlSelfRef.__PVT__allocate_respbuf_snpreq)) 
                  & (~ (IData)(vlSelfRef.__PVT__allocate_respbuf_compdata))) 
                 & (IData)(vlSelfRef.__PVT__deallocate_respbuf_ph3_1st)) 
                & (IData)(vlSelfRef.__PVT__deallocate_respbuf_ph3_2nd))) {
        vlSelfRef.__PVT__respbuff_avail_nxt = (0x3fU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.__PVT__respbuff_avail)));
    } else if (((((~ (IData)(vlSelfRef.__PVT__allocate_respbuf_snpreq)) 
                  & (IData)(vlSelfRef.__PVT__allocate_respbuf_compdata)) 
                 & (IData)(vlSelfRef.__PVT__deallocate_respbuf_ph3_1st)) 
                & (IData)(vlSelfRef.__PVT__deallocate_respbuf_ph3_2nd))) {
        vlSelfRef.__PVT__respbuff_avail_nxt = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__respbuff_avail)));
    } else if (((((IData)(vlSelfRef.__PVT__allocate_respbuf_snpreq) 
                  & (~ (IData)(vlSelfRef.__PVT__allocate_respbuf_compdata))) 
                 & (IData)(vlSelfRef.__PVT__deallocate_respbuf_ph3_1st)) 
                & (IData)(vlSelfRef.__PVT__deallocate_respbuf_ph3_2nd))) {
        vlSelfRef.__PVT__respbuff_avail_nxt = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__respbuff_avail)));
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0U == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0U == (0x1fU & 
                                            VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (1U == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (1U == (0x1fU & 
                                            VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (2U == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (2U == (0x1fU & 
                                            VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (3U == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (3U == (0x1fU & 
                                            VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (4U == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (4U == (0x1fU & 
                                            VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (5U == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (5U == (0x1fU & 
                                            VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (6U == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (6U == (0x1fU & 
                                            VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (7U == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (7U == (0x1fU & 
                                            VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (8U == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (8U == (0x1fU & 
                                            VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (9U == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (9U == (0x1fU & 
                                            VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0xaU == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0xaU == (0x1fU 
                                              & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0xbU == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0xbU == (0x1fU 
                                              & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0xcU == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0xcU == (0x1fU 
                                              & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0xdU == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0xdU == (0x1fU 
                                              & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0xeU == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0xeU == (0x1fU 
                                              & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0xfU == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0xfU == (0x1fU 
                                              & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0xfU)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0x10U == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x10U == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0x10U)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0x11U == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x11U == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0x11U)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0x12U == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x12U == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0x12U)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0x13U == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x13U == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0x13U)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0x14U == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x14U == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0x14U)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0x15U == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x15U == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0x15U)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0x16U == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x16U == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0x16U)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0x17U == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x17U == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0x17U)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0x18U == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x18U == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0x18U)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0x19U == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x19U == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0x19U)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0x1aU == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x1aU == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0x1aU)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0x1bU == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x1bU == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0x1bU)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0x1cU == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x1cU == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0x1cU)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0x1dU == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x1dU == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0x1dU)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0x1eU == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x1eU == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0x1eU)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata) 
                            & (0x1fU == (IData)(vlSelfRef.__PVT__outq_index))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x1fU == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 0x1fU)))));
    VL_ASSIGNSEL_WI(160,5,0U, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0U, 5))));
    VL_ASSIGNSEL_WI(160,5,5U, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (1U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (1U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 5U, 5))));
    VL_ASSIGNSEL_WI(160,5,0xaU, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (2U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (2U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0xaU, 5))));
    VL_ASSIGNSEL_WI(160,5,0xfU, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (3U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (3U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0xfU, 5))));
    VL_ASSIGNSEL_WI(160,5,0x14U, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (4U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (4U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x14U, 5))));
    VL_ASSIGNSEL_WI(160,5,0x19U, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (5U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (5U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x19U, 5))));
    VL_ASSIGNSEL_WI(160,5,0x1eU, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (6U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (6U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x1eU, 5))));
    VL_ASSIGNSEL_WI(160,5,0x23U, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (7U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (7U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x23U, 5))));
    VL_ASSIGNSEL_WI(160,5,0x28U, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (8U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (8U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x28U, 5))));
    VL_ASSIGNSEL_WI(160,5,0x2dU, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (9U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (9U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x2dU, 5))));
    VL_ASSIGNSEL_WI(160,5,0x32U, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0xaU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0xaU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x32U, 5))));
    VL_ASSIGNSEL_WI(160,5,0x37U, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0xbU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0xbU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x37U, 5))));
    VL_ASSIGNSEL_WI(160,5,0x3cU, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0xcU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0xcU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x3cU, 5))));
    VL_ASSIGNSEL_WI(160,5,0x41U, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0xdU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0xdU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x41U, 5))));
    VL_ASSIGNSEL_WI(160,5,0x46U, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0xeU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0xeU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x46U, 5))));
    VL_ASSIGNSEL_WI(160,5,0x4bU, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0xfU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0xfU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x4bU, 5))));
    VL_ASSIGNSEL_WI(160,5,0x50U, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0x10U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0x10U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x50U, 5))));
    VL_ASSIGNSEL_WI(160,5,0x55U, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0x11U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0x11U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x55U, 5))));
    VL_ASSIGNSEL_WI(160,5,0x5aU, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0x12U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0x12U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x5aU, 5))));
    VL_ASSIGNSEL_WI(160,5,0x5fU, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0x13U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0x13U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x5fU, 5))));
    VL_ASSIGNSEL_WI(160,5,0x64U, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0x14U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0x14U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x64U, 5))));
    VL_ASSIGNSEL_WI(160,5,0x69U, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0x15U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0x15U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x69U, 5))));
    VL_ASSIGNSEL_WI(160,5,0x6eU, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0x16U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0x16U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x6eU, 5))));
    VL_ASSIGNSEL_WI(160,5,0x73U, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0x17U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0x17U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x73U, 5))));
    VL_ASSIGNSEL_WI(160,5,0x78U, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0x18U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0x18U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x78U, 5))));
    VL_ASSIGNSEL_WI(160,5,0x7dU, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0x19U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0x19U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x7dU, 5))));
    VL_ASSIGNSEL_WI(160,5,0x82U, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0x1aU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0x1aU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x82U, 5))));
    VL_ASSIGNSEL_WI(160,5,0x87U, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0x1bU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0x1bU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x87U, 5))));
    VL_ASSIGNSEL_WI(160,5,0x8cU, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0x1cU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0x1cU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x8cU, 5))));
    VL_ASSIGNSEL_WI(160,5,0x91U, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0x1dU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0x1dU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x91U, 5))));
    VL_ASSIGNSEL_WI(160,5,0x96U, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0x1eU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0x1eU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x96U, 5))));
    VL_ASSIGNSEL_WI(160,5,0x9bU, vlSelfRef.__PVT__outstand_cmd_buffnum_1st_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_1st) 
                                & (0x1fU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_1st) 
                                  & (0x1fU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 0x9bU, 5))));
    VL_ASSIGNSEL_WI(160,5,0U, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0U, 5))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0U == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0U == (0x1fU & 
                                            VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0U)))));
    VL_ASSIGNSEL_WI(160,5,5U, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (1U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (1U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 5U, 5))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (1U == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (1U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (1U == (0x1fU & 
                                            VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 1U)))));
    VL_ASSIGNSEL_WI(160,5,0xaU, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (2U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (2U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0xaU, 5))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (2U == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (2U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (2U == (0x1fU & 
                                            VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 2U)))));
    VL_ASSIGNSEL_WI(160,5,0xfU, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (3U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (3U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0xfU, 5))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (3U == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (3U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (3U == (0x1fU & 
                                            VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 3U)))));
    VL_ASSIGNSEL_WI(160,5,0x14U, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (4U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (4U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x14U, 5))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (4U == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (4U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (4U == (0x1fU & 
                                            VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 4U)))));
    VL_ASSIGNSEL_WI(160,5,0x19U, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (5U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (5U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x19U, 5))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (5U == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (5U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (5U == (0x1fU & 
                                            VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 5U)))));
    VL_ASSIGNSEL_WI(160,5,0x1eU, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (6U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (6U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x1eU, 5))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (6U == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (6U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (6U == (0x1fU & 
                                            VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 6U)))));
    VL_ASSIGNSEL_WI(160,5,0x23U, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (7U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (7U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x23U, 5))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (7U == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (7U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (7U == (0x1fU & 
                                            VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 7U)))));
    VL_ASSIGNSEL_WI(160,5,0x28U, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (8U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (8U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x28U, 5))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (8U == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (8U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (8U == (0x1fU & 
                                            VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 8U)))));
    VL_ASSIGNSEL_WI(160,5,0x2dU, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (9U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (9U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x2dU, 5))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (9U == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (9U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (9U == (0x1fU & 
                                            VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 9U)))));
    VL_ASSIGNSEL_WI(160,5,0x32U, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0xaU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0xaU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x32U, 5))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0xaU == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0xaU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0xaU == (0x1fU 
                                              & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0xaU)))));
    VL_ASSIGNSEL_WI(160,5,0x37U, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0xbU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0xbU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x37U, 5))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0xbU == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0xbU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0xbU == (0x1fU 
                                              & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0xbU)))));
    VL_ASSIGNSEL_WI(160,5,0x3cU, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0xcU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0xcU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x3cU, 5))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0xcU == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0xcU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0xcU == (0x1fU 
                                              & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0xcU)))));
    VL_ASSIGNSEL_WI(160,5,0x41U, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0xdU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0xdU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x41U, 5))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0xdU == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0xdU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0xdU == (0x1fU 
                                              & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0xdU)))));
    VL_ASSIGNSEL_WI(160,5,0x46U, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0xeU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0xeU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x46U, 5))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0xeU == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0xeU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0xeU == (0x1fU 
                                              & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0xeU)))));
    VL_ASSIGNSEL_WI(160,5,0x4bU, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0xfU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0xfU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x4bU, 5))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0xfU == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0xfU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0xfU == (0x1fU 
                                              & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0xfU)))));
    VL_ASSIGNSEL_WI(160,5,0x50U, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0x10U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0x10U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x50U, 5))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0x10U == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0x10U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x10U == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0x10U)))));
    VL_ASSIGNSEL_WI(160,5,0x55U, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0x11U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0x11U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x55U, 5))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0x11U == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0x11U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x11U == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0x11U)))));
    VL_ASSIGNSEL_WI(160,5,0x5aU, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0x12U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0x12U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x5aU, 5))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0x12U == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0x12U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x12U == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0x12U)))));
    VL_ASSIGNSEL_WI(160,5,0x5fU, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0x13U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0x13U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x5fU, 5))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0x13U == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0x13U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x13U == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0x13U)))));
    VL_ASSIGNSEL_WI(160,5,0x64U, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0x14U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0x14U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x64U, 5))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0x14U == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0x14U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x14U == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0x14U)))));
    VL_ASSIGNSEL_WI(160,5,0x69U, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0x15U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0x15U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x69U, 5))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0x15U == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0x15U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x15U == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0x15U)))));
    VL_ASSIGNSEL_WI(160,5,0x6eU, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0x16U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0x16U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x6eU, 5))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0x16U == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0x16U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x16U == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0x16U)))));
    VL_ASSIGNSEL_WI(160,5,0x73U, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0x17U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0x17U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x73U, 5))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0x17U == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0x17U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x17U == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0x17U)))));
    VL_ASSIGNSEL_WI(160,5,0x78U, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0x18U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0x18U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x78U, 5))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0x18U == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0x18U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x18U == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0x18U)))));
    VL_ASSIGNSEL_WI(160,5,0x7dU, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0x19U == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0x19U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x7dU, 5))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0x19U == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0x19U == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x19U == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0x19U)))));
    VL_ASSIGNSEL_WI(160,5,0x82U, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0x1aU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0x1aU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x82U, 5))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0x1aU == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0x1aU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x1aU == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0x1aU)))));
    VL_ASSIGNSEL_WI(160,5,0x87U, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0x1bU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0x1bU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x87U, 5))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0x1bU == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0x1bU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x1bU == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0x1bU)))));
    VL_ASSIGNSEL_WI(160,5,0x8cU, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0x1cU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0x1cU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x8cU, 5))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0x1cU == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0x1cU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x1cU == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0x1cU)))));
    VL_ASSIGNSEL_WI(160,5,0x91U, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0x1dU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0x1dU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x91U, 5))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0x1dU == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0x1dU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x1dU == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0x1dU)))));
    VL_ASSIGNSEL_WI(160,5,0x96U, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0x1eU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0x1eU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x96U, 5))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0x1eU == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0x1eU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x1eU == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0x1eU)))));
    VL_ASSIGNSEL_WI(160,5,0x9bU, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd_nxt, 
                    (0x1fU & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                                & (0x1fU == (IData)(vlSelfRef.__PVT__outq_index))) 
                               | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                                  & (0x1fU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata))))
                               ? (IData)(vlSelfRef.__PVT__buffernum_available)
                               : VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 0x9bU, 5))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__vld_store_to_bn2_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__wren_compbuff_num_snpreq_2nd) 
                             & (0x1fU == (IData)(vlSelfRef.__PVT__outq_index))) 
                            | ((IData)(vlSelfRef.__PVT__wren_compbuff_num_compdata_2nd) 
                               & (0x1fU == (IData)(vlSelfRef.__PVT__index_pendingq_compdata)))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__clr_2nd_buffer) 
                                  & (0x1fU == (0x1fU 
                                               & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5))))) 
                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 0x1fU)))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_ctrlr__pi15___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__10(Vsig_topology_top_sig_coherency_ctrlr__pi15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi15___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__block_reqcmdq_rd_cache = ((IData)(vlSelfRef.__PVT__wren_cache_cohc_or_dirc) 
                                               & ((IData)(vlSelfRef.__PVT__cache_index_wr_cohc_or_dirc) 
                                                  == 
                                                  (0x3ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqcmdq_withbypass_s, 0x4eU, 10))));
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

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_ctrlr__pi15___ctor_var_reset(Vsig_topology_top_sig_coherency_ctrlr__pi15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi15___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10522366009035690765ull);
    vlSelf->__PVT__cc_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8377306375537073466ull);
    vlSelf->__PVT__rstb_cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8322896653826704470ull);
    vlSelf->__PVT__mycluster_id = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2384492568486524022ull);
    vlSelf->__PVT__reg_dwt_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14128118012209622633ull);
    vlSelf->__PVT__wren_reqcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12201464873303997130ull);
    VL_SCOPED_RAND_RESET_W(156, vlSelf->__PVT__wrdata_reqcmdq, __VscopeHash, 10509249749369163677ull);
    vlSelf->__PVT__fifofull_reqcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11061467253754343562ull);
    vlSelf->__PVT__send_reqcrdt_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17634417913722192789ull);
    vlSelf->__PVT__wren_respcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1153417048320893578ull);
    VL_SCOPED_RAND_RESET_W(74, vlSelf->__PVT__wrdata_respcmdq, __VscopeHash, 9048115003673750040ull);
    vlSelf->__PVT__send_respcrdt_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4736399220428113173ull);
    vlSelf->__PVT__wren_drespcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4925900247815952177ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__PVT__wrdata_drespcmdq, __VscopeHash, 1410683045650114290ull);
    vlSelf->__PVT__wren_memrespcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 913600410044621036ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__PVT__wrdata_memrespcmdq, __VscopeHash, 11547144100788774640ull);
    vlSelf->__PVT__wren_cmq_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14891505571427714330ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__cmd_ph4_req, __VscopeHash, 3879760464090824061ull);
    vlSelf->__PVT__cmd_addr_ph3 = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 15266753109267875081ull);
    vlSelf->__PVT__cmd_addr_ph3_has_matchingentry_incmq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12518608944154213720ull);
    vlSelf->__PVT__block_fetch_cohc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14509791292380692131ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__cm_cmd, __VscopeHash, 17134410543704108858ull);
    vlSelf->__PVT__cm_cmdvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10935687010101470423ull);
    vlSelf->__PVT__clr_cm_cmdvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13771873550443589026ull);
    VL_SCOPED_RAND_RESET_W(84, vlSelf->__PVT__evict_details, __VscopeHash, 7740052233367362936ull);
    vlSelf->__PVT__cm_cmdvalid_evict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6304623208976443716ull);
    vlSelf->__PVT__clr_cm_cmdvalid_evict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17550963073695834682ull);
    vlSelf->__PVT__en_blocking_reqcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12487398171900918568ull);
    vlSelf->__PVT__index_cache_eviction = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16098368761919786461ull);
    vlSelf->__PVT__rden_dircache_ph2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9279683512524933940ull);
    vlSelf->__PVT__cache_index_rd_ph2 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16604521808567997359ull);
    vlSelf->__PVT__cache_tag_rd_ph2 = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 10175872881553443454ull);
    vlSelf->__PVT__cachehit_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6175868923870352488ull);
    vlSelf->__PVT__cachehit_vector_ph3 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9643196123455433614ull);
    vlSelf->__PVT__rddata_cache_ph3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3900048599225600932ull);
    vlSelf->__PVT__fiforoom_atlst4_cmq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12010265418786223346ull);
    vlSelf->__PVT__full_cmqfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7697748521783914580ull);
    vlSelf->__PVT__cmqhas_1room = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5212482075423727568ull);
    vlSelf->__PVT__cmqhas_2room = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11328495738407190341ull);
    vlSelf->__PVT__cmqhas_3room = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1792089563180104986ull);
    vlSelf->__PVT__rden_dircache_pre = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12115579494320390871ull);
    vlSelf->__PVT__cache_index_rd_ph2_pre = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14905505759426433023ull);
    vlSelf->__PVT__wren_cache_vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10107894629028056029ull);
    vlSelf->__PVT__cache_index_wr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14592956125562570934ull);
    vlSelf->__PVT__cache_tag_wr = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 13680107875819807950ull);
    vlSelf->__PVT__wrdata_cache = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8550234609285485005ull);
    vlSelf->__PVT__inpendingq_matches_collnq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6925071695829880497ull);
    vlSelf->__PVT__wren_cache_cohc_or_dirc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11335812194555609403ull);
    vlSelf->__PVT__cache_index_wr_cohc_or_dirc = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7554872119381538796ull);
    vlSelf->__PVT__excl_load_reqv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10808861801624030781ull);
    vlSelf->__PVT__excl_load_addr = VL_SCOPED_RAND_RESET_Q(46, __VscopeHash, 1305004775471632917ull);
    vlSelf->__PVT__excl_load_lpid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1128574918061078016ull);
    vlSelf->__PVT__excl_load_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8389692310150307164ull);
    vlSelf->__PVT__excl_load_srcid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13242249198345360380ull);
    vlSelf->__PVT__buffer_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14663875713135549949ull);
    vlSelf->__PVT__excl_store_reqv = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16029179714232092762ull);
    vlSelf->__PVT__excl_store_addr = VL_SCOPED_RAND_RESET_Q(46, __VscopeHash, 14657429174638830149ull);
    vlSelf->__PVT__excl_store_lpid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15301952635516898376ull);
    vlSelf->__PVT__excl_store_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9909767904224513108ull);
    vlSelf->__PVT__excl_store_srcid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18234007080309262872ull);
    vlSelf->__PVT__excl_store_pass = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9923750064643304324ull);
    vlSelf->__PVT__atom_res_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12605299356513852222ull);
    vlSelf->__PVT__atom_addr = VL_SCOPED_RAND_RESET_Q(46, __VscopeHash, 14315296359907429470ull);
    vlSelf->__PVT__wren_snpreqfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9980584901421468606ull);
    VL_SCOPED_RAND_RESET_W(191, vlSelf->__PVT__wrdata_snpreqfifo, __VscopeHash, 4801220196664942517ull);
    vlSelf->__PVT__full_snpreqfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2813042500215223784ull);
    vlSelf->__PVT__room_atlst3_snpreqfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8871782108954021544ull);
    vlSelf->__PVT__wren_outcompfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7769135947045629551ull);
    VL_SCOPED_RAND_RESET_W(181, vlSelf->__PVT__wrdata_outcompfifo, __VscopeHash, 5139519633176733958ull);
    vlSelf->__PVT__full_outcompfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13961051321052729625ull);
    vlSelf->__PVT__room_atlst3_outcompfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15317600366221672467ull);
    vlSelf->__PVT__respbuff_avail = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7306347581112127521ull);
    vlSelf->__PVT__allocate_respbuf_snpreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12050584821466466478ull);
    vlSelf->__PVT__allocate_respbuf_compdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10366684842875233516ull);
    vlSelf->__PVT__clr_outstand_cmd_compdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 683546815149091109ull);
    vlSelf->__PVT__clr_collnreg_sending_ini_compdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1376278890112039216ull);
    vlSelf->__PVT__index_pendingq_clr_outstand_cmd_compdata = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13256195857044924955ull);
    vlSelf->__PVT__clr_outstand_cmd_snpreq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14247094991853056904ull);
    vlSelf->__PVT__index_pendingq_clr_outstand_cmd_snpreq = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 660746365005381008ull);
    vlSelf->__PVT__avoid_clr_colln_snpreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5938401738667444506ull);
    vlSelf->__PVT__xy_coord_all_pm = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14093339878997901900ull);
    vlSelf->__PVT__cm_homeaddr_base_all_pm = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 16326596507192002194ull);
    vlSelf->__PVT__cm_homeaddr_limit_all_pm = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 15039959541587252906ull);
    vlSelf->__PVT__noncm_homeaddr_base_all_pm = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 4362549229537796297ull);
    vlSelf->__PVT__noncm_homeaddr_limit_all_pm = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 17603428951671837452ull);
    vlSelf->__PVT__dmt_enable_all_pm_vec = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1292660233603648185ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__i_ucie_base_addresses[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 18152667713515942132ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__i_ucie_limit_addresses[__Vi0] = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 3856869148840372046ull);
    }
    vlSelf->__PVT__clr_outstand_prep = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4831969144429222940ull);
    vlSelf->__PVT__outstand_prep_valid = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12582084033824495830ull);
    vlSelf->__PVT__dealloc_compfifo_vector = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8362539444287821795ull);
    vlSelf->__PVT__wren_compbuff_num_snpreq_1st = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8446112528902780294ull);
    vlSelf->__PVT__wren_compbuff_num_snpreq_2nd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2978671294353993846ull);
    vlSelf->__PVT__wren_compbuff_num_compdata_1st = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8911625818810551941ull);
    vlSelf->__PVT__wren_compbuff_num_compdata_2nd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9349338333634213131ull);
    vlSelf->__PVT__en_compbuf_2nd_for_snpdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2836399122947749663ull);
    vlSelf->__PVT__outq_index = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2171178808354690650ull);
    vlSelf->__PVT__buffernum_available = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13775671881704718491ull);
    vlSelf->__PVT__index_outq_rcvdata = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8003945633691835691ull);
    vlSelf->__PVT__compq_buff_to_rcvdatproc_1st = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10387630494224006427ull);
    vlSelf->__PVT__compq_buff_to_rcvdatproc_2nd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2732871786700246567ull);
    vlSelf->__PVT__vld_compq_buff_to_rcvdatproc_2nd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2804318706357737406ull);
    vlSelf->__PVT__vld_compbuf_2nd_for_snpdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8127965794600819949ull);
    vlSelf->__PVT__index_pendingq_compdata = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4393906453454876949ull);
    vlSelf->__PVT__addr_outstandq_to_compdata = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 16900301021783641212ull);
    vlSelf->__PVT__clr_2nd_buffer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5189925435663627466ull);
    vlSelf->__PVT__use_early_write_response = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16156962359594802056ull);
    vlSelf->__PVT__o_rcv_rsp_dat_srcid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6132083960252224393ull);
    vlSelf->__PVT__i_rcv_rsp_dat_linear_srcid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11346350692381474643ull);
    vlSelf->__PVT__cc_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17456575816747454447ull);
    vlSelf->__PVT__full_reqcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6662396899841536198ull);
    vlSelf->__PVT__empty_reqcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6294438412174313800ull);
    VL_SCOPED_RAND_RESET_W(156, vlSelf->__PVT__rddata_reqcmdq, __VscopeHash, 1891028784043505255ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__rddata_reqcmdq_withbypass, __VscopeHash, 2924079194821041718ull);
    vlSelf->__PVT__rddata_reqcmdq_addr_invalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11467125709280824424ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__rddata_reqcmdq_withbypass_s, __VscopeHash, 351718291233148213ull);
    vlSelf->__PVT__gnt_reqcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15779085039219096443ull);
    vlSelf->__PVT__gnt_collnq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 32670324799716681ull);
    vlSelf->__PVT__gnt_cmq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8935289636920320705ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__evict_req_s, __VscopeHash, 18227369371499476669ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__sel_winner_entry_s, __VscopeHash, 8362305516337253408ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__cm_cmd_s, __VscopeHash, 11541439379297266086ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__cmd_ph3_req, __VscopeHash, 13693832501760903866ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__cmd_ph2_req, __VscopeHash, 10096175902112989961ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__cmd_ph2_req_nxt, __VscopeHash, 6120634392371628183ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__cmd_ph1_req_s, __VscopeHash, 18283995144816188013ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__cmd_ph2_req_s, __VscopeHash, 7076568428156084489ull);
    vlSelf->__PVT__cmdvalid_ph2_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17464609831516684162ull);
    vlSelf->__PVT__cmdvalid_ph2_req_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4777140092641195317ull);
    vlSelf->__PVT__cmdq_src_ph2_req = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 372353598084184834ull);
    vlSelf->__PVT__cmdq_src_ph3_req = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11210803585087358825ull);
    vlSelf->__PVT__cmdq_src_ph2_req_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1524843891792379990ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__cmd_ph3_rsp, __VscopeHash, 237160142415647441ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__cmd_ph3_rsp_nxt, __VscopeHash, 3666568776280425906ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__cmd_ph3_rsp_s, __VscopeHash, 7524194727775114623ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__cmd_ph3_rsp_nxt_s, __VscopeHash, 2453531347141092231ull);
    vlSelf->__PVT__cmdvalid_ph3_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11693670872026289588ull);
    vlSelf->__PVT__cmdvalid_ph3_rsp_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5916830526892604643ull);
    vlSelf->__PVT__cmdq_src_ph3_rsp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7410998606653362784ull);
    vlSelf->__PVT__cmdq_src_ph3_rsp_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2233193372260360040ull);
    vlSelf->__PVT__cmd_ph3_rsp_linear_srcid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8337272809379084643ull);
    vlSelf->__PVT__cmd_ph3_rsp_dbid = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11202792230493234094ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__status_field_retry_ph3, __VscopeHash, 14940570823230340964ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__status_field_retry_ph3_nxt, __VscopeHash, 3457822700520687643ull);
    vlSelf->__PVT__lower_index_valid = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 3008588429167394026ull);
    vlSelf->__PVT__wren_retry_ph3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9604428154476218934ull);
    vlSelf->__PVT__wren_retry_ph3_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12146531958956131427ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__PVT__cmd_ph3_datrsp_s, __VscopeHash, 6398079772931408538ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__cmd_ph3_req_s, __VscopeHash, 8501133323921442379ull);
    vlSelf->__PVT__cmdis_req_ph2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10433234641525688618ull);
    vlSelf->__PVT__cmdis_isatmo_ph2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2668700447089709851ull);
    vlSelf->__PVT__cmdis_req_ph2_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2818938820965185462ull);
    vlSelf->__PVT__cmdis_resp_ph3_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12487630505989677926ull);
    vlSelf->__PVT__cmdis_invalidate_ph2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2874604189765802283ull);
    vlSelf->__PVT__cmdis_invalidate_ph2_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9755169206710360501ull);
    vlSelf->__PVT__cmdis_invalidate_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4328809012815882476ull);
    vlSelf->__PVT__cmdis_invalidate_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3767914543776482889ull);
    vlSelf->__PVT__cmdvalid_ph3_req_outstd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15507988227280740441ull);
    vlSelf->__PVT__wren_outstand_cmd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12674821132336097229ull);
    vlSelf->__PVT__outstand_cmd_invalid = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11533776185401952885ull);
    vlSelf->__PVT__outstand_cmd_invalid_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 861323303823326014ull);
    VL_SCOPED_RAND_RESET_W(1664, vlSelf->__PVT__outstand_cmd_addr, __VscopeHash, 501111128605924420ull);
    VL_SCOPED_RAND_RESET_W(1664, vlSelf->__PVT__outstand_cmd_addr_nxt, __VscopeHash, 9365251208077819859ull);
    vlSelf->__PVT__outstand_cmd_atom = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13562287566859430130ull);
    vlSelf->__PVT__outstand_cmd_atom_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15939551741515701563ull);
    VL_SCOPED_RAND_RESET_W(768, vlSelf->__PVT__outstand_cmd, __VscopeHash, 8513690764493265175ull);
    VL_SCOPED_RAND_RESET_W(768, vlSelf->__PVT__outstand_cmd_nxt, __VscopeHash, 4843254993299247615ull);
    vlSelf->__PVT__outstand_req_atmo_wr_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9335153903050840331ull);
    vlSelf->__PVT__outstand_req_atmo_wr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5179691801242631627ull);
    vlSelf->__PVT__outstand_req_atmo_rd_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6270388599298439525ull);
    vlSelf->__PVT__outstand_req_atmo_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2546676936233422604ull);
    vlSelf->__PVT__outstand_req_atmo_rd_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12411628578049572999ull);
    vlSelf->__PVT__outstand_atom_rd_txnid = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3554260894511761305ull);
    vlSelf->__PVT__outstand_atom_rd_srcid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12841065568833056247ull);
    vlSelf->__PVT__outstand_atmo_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1633798011517385535ull);
    vlSelf->__PVT__outstand_atmo_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14490327418070295127ull);
    vlSelf->__PVT__outstand_atmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11236161350940613319ull);
    vlSelf->__PVT__outstand_atmo_rd_alloc_then_wr_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16287876126439863078ull);
    vlSelf->__PVT__outstand_atmo_rd_alloc_then_wr_clr_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6999366983626458751ull);
    vlSelf->__PVT__cmd_isatmo_ph2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11292722964128149443ull);
    vlSelf->__PVT__cmd_isatmo_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9767096552971663858ull);
    vlSelf->__PVT__cmd_isatmo_rd_ph2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3950275016637757199ull);
    vlSelf->__PVT__cmd_isatmo_rd_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8421577022093768882ull);
    vlSelf->__PVT__cmd_isatmo_wr_ph2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11745220814539229463ull);
    vlSelf->__PVT__cmd_isatmo_wr_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1046425301593080108ull);
    vlSelf->__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16441866015652081090ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->__PVT__outstand_cmd_buffnum_1st, __VscopeHash, 6551412326319674073ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->__PVT__outstand_cmd_buffnum_1st_nxt, __VscopeHash, 2378272074359142174ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->__PVT__outstand_cmd_buffnum_2nd, __VscopeHash, 17422036010695710165ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->__PVT__outstand_cmd_buffnum_2nd_nxt, __VscopeHash, 9488888285829396650ull);
    vlSelf->__PVT__vld_store_to_bn2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6431337296924867309ull);
    vlSelf->__PVT__vld_store_to_bn2_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10064101243024836680ull);
    vlSelf->__PVT__vld_store_compbuf_2nd_for_snpdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16641866751557152775ull);
    vlSelf->__PVT__vld_store_compbuf_2nd_for_snpdata_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4060299105522683946ull);
    vlSelf->__PVT__outstand_cmdq_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7460897613275246602ull);
    vlSelf->__PVT__outstand_prep_valid_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17853067866557563784ull);
    vlSelf->__PVT__excl_pass_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3563750232892799224ull);
    vlSelf->__PVT__excl_pass_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9633858654171392868ull);
    vlSelf->__PVT__req_is_excl_ld_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13348643544058696697ull);
    vlSelf->__PVT__req_is_excl_str_nsnp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12076166778621087540ull);
    vlSelf->__PVT__req_is_excl_str_snp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3095342634506897914ull);
    VL_SCOPED_RAND_RESET_W(74, vlSelf->__PVT__rddata_respcmdq, __VscopeHash, 1157173216053894869ull);
    vlSelf->__PVT__gnt_respcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17553224390695479336ull);
    vlSelf->__PVT__full_respcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8840583887665241156ull);
    vlSelf->__PVT__empty_respcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7175796486881243599ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__PVT__rddata_drespcmdq, __VscopeHash, 4169427509359705391ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__PVT__rddata_drespcmdq_s, __VscopeHash, 13743555557655381113ull);
    vlSelf->__PVT__gnt_drespcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7198500750416747752ull);
    vlSelf->__PVT__full_drespcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14839816296267447148ull);
    vlSelf->__PVT__empty_drespcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18325883008388214876ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__PVT__rddata_memrespcmdq, __VscopeHash, 9323555620304991067ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__PVT__rddata_memrespcmdq_prepped, __VscopeHash, 1380073810850094406ull);
    VL_SCOPED_RAND_RESET_W(109, vlSelf->__PVT__rddata_memrespcmdq_s, __VscopeHash, 17316035285472355031ull);
    vlSelf->__PVT__gnt_memrespcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3854605371402768281ull);
    vlSelf->__PVT__full_memrespcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8373990000977656760ull);
    vlSelf->__PVT__empty_memrespcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3527108860198841476ull);
    vlSelf->__PVT__req_cmq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5117924602800353925ull);
    vlSelf->__PVT__req_respcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16414594369681154381ull);
    vlSelf->__PVT__req_drespcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2840467798604878204ull);
    vlSelf->__PVT__req_reqcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3092073831377318287ull);
    vlSelf->__PVT__req_memrespcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14832210786307210684ull);
    vlSelf->__PVT__req_cmq_gated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7029910784341981293ull);
    vlSelf->__PVT__req_respcmdq_gated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1120930225340791144ull);
    vlSelf->__PVT__req_collnq_gated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5361374282362935012ull);
    vlSelf->__PVT__req_drespcmdq_gated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7447895750126789658ull);
    vlSelf->__PVT__req_reqcmdq_gated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7188644979440133902ull);
    vlSelf->__PVT__req_memrespcmdq_gated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 573487976523164675ull);
    vlSelf->__PVT__pshare_ph4 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15834435438107432795ull);
    vlSelf->__PVT__pshare_forsnp_ph4 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4584233663884175728ull);
    vlSelf->__PVT__respbuff_avail_nxt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6939901013112800515ull);
    vlSelf->__PVT__deallocate_respbuf_ph3_1st = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16404584930608763341ull);
    vlSelf->__PVT__deallocate_respbuf_ph3_2nd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13494914854408060637ull);
    vlSelf->__PVT__wren_outcompfifo_resp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2759699174917448329ull);
    vlSelf->__PVT__wren_outcompfifo_prelastresp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9730762544689976868ull);
    vlSelf->__PVT__wren_outcompfifo_retry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1050082756651350329ull);
    vlSelf->__PVT__wren_outcompfifo_atom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14006455625208189613ull);
    vlSelf->__PVT__wren_outcompfifo_compack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3816963102975130142ull);
    vlSelf->__PVT__wren_outcompfifo_wr_all = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16031332205029850657ull);
    vlSelf->__PVT__orig_wr_evict_full_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13928398974825418989ull);
    vlSelf->__PVT__cmdvalid_ph3_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15160448643831558143ull);
    vlSelf->__PVT__cmdvalid_ph3_req_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10497717489444724310ull);
    vlSelf->__PVT__index_statusreg_ph3_nxt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1889810778884318322ull);
    vlSelf->__PVT__index_statusreg_ph3 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5072904817093865819ull);
    vlSelf->__PVT__index_statusreg_ph4 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8242944593886954658ull);
    vlSelf->__PVT__cmdis_req_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2485764480388031284ull);
    vlSelf->__PVT__cmdis_resp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8852136189404447044ull);
    vlSelf->__PVT__wrindex_req_ph3 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16854564964103250313ull);
    vlSelf->__PVT__cmdq_src0_CompDBIDResp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7636782823818293679ull);
    vlSelf->__PVT__cmdq_src0_DBIDResp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4751571147117878823ull);
    vlSelf->__PVT__cmdq_src0_CompAckResp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12223347162956955645ull);
    vlSelf->__PVT__cmdq_src0_Comp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13766101096483285229ull);
    vlSelf->__PVT__cmdq_src0_RetryAck_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7933898012397667052ull);
    vlSelf->__PVT__cmdq_src0_PCrdGrant_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6683027405918353790ull);
    vlSelf->__PVT__cmdq_src0_CompCMO_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1663350156312515437ull);
    vlSelf->__PVT__cmdvalid_ph4_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7217976864987500108ull);
    vlSelf->__PVT__cmdvalid_ph4_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8996474609913129992ull);
    vlSelf->__PVT__cmdis_req_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2819771132610708168ull);
    vlSelf->__PVT__cmdis_resp_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3552736468508560803ull);
    vlSelf->__PVT__wrindex_req_ph4 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6553429263876007221ull);
    vlSelf->__PVT__orig_pshare_cnt_ph4 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 157563047234885847ull);
    vlSelf->__PVT__cachehit_vector_ph4 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17498610482248713738ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__cmd_ph4_req_s, __VscopeHash, 2563475615727406874ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__cmd_ph4_rsp, __VscopeHash, 10332410492586172348ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__cmd_ph4_rsp_s, __VscopeHash, 7366150544915537797ull);
    vlSelf->__PVT__rddata_cache_ph4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3214118821339937948ull);
    vlSelf->__PVT__req_cache_st_ph3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 250198532077453744ull);
    vlSelf->__PVT__ownerp_id_ph3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7062105632729232217ull);
    vlSelf->__PVT__req_share_vect_ph3 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 11841012590220535150ull);
    vlSelf->__PVT__req_cache_st_ph2 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10295887851215011452ull);
    vlSelf->__PVT__ownerp_id_ph2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 844541192749654867ull);
    vlSelf->__PVT__req_share_vect_ph2 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 18322520608738985495ull);
    vlSelf->__PVT__req_src_pid_ph3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12495514348307355704ull);
    vlSelf->__PVT__resp_outcompdata_req_ph3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 393892958382089144ull);
    vlSelf->__PVT__reqid_matches_ownerpid_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14987317416203108325ull);
    vlSelf->__PVT__req_src_clstid_ph3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 447689737107557758ull);
    vlSelf->__PVT__pendingq_index_resp_ph3 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16356249835565618411ull);
    vlSelf->__PVT__reqid_matches_ownerpid_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3098280718272651670ull);
    vlSelf->__PVT__req_is_anyrd_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5347179012580269620ull);
    vlSelf->__PVT__req_is_anywr_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13199468204310001845ull);
    vlSelf->__PVT__snpattr_req_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6285726054487903474ull);
    vlSelf->__PVT__req_atmo_ph3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1631519428972786400ull);
    vlSelf->__PVT__req_atmo_ph4 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8223244778799610669ull);
    vlSelf->__PVT__itis_stage2_atmo_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18122540560349418153ull);
    vlSelf->__PVT__itis_stage2_atmo_read_nosnoop_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5238425481498394233ull);
    vlSelf->__PVT__itis_stage2_atmo_read_nosnoop_req_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13760299796955951913ull);
    vlSelf->__PVT__itis_stage2_atmo_read_nosnoop_rsp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10171832975351546976ull);
    vlSelf->__PVT__itis_stage2_atmo_rsp_ptl_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5439088670578018831ull);
    vlSelf->__PVT__itis_stage2_atmo_rsp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11460300422465618507ull);
    vlSelf->__PVT__itis_stage2_atmo_fetch_txndata_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6724897168659358226ull);
    vlSelf->__PVT__itis_stage2_atmo_complete_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13078460901830548679ull);
    vlSelf->__PVT__req_is_read_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12502941602582762972ull);
    vlSelf->__PVT__req_is_anydct_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10173531779850608287ull);
    vlSelf->__PVT__req_is_anydwt_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 292453329424042888ull);
    vlSelf->__PVT__dn_sm_req_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8062665018099262671ull);
    vlSelf->__PVT__req_is_evict_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10970084809310416823ull);
    vlSelf->__PVT__req_is_atom_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5068273943177562376ull);
    vlSelf->__PVT__req_is_rdnosnp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5528062542927927598ull);
    vlSelf->__PVT__req_is_read_o_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15698301879515273720ull);
    vlSelf->__PVT__req_is_read_c_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1108473230489785779ull);
    vlSelf->__PVT__req_is_read_s_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10568512556541193104ull);
    vlSelf->__PVT__req_is_read_u_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7304063669224305664ull);
    vlSelf->__PVT__req_is_read_notsd_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17157439813729706220ull);
    vlSelf->__PVT__req_is_makeread_u_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6682668165109063802ull);
    vlSelf->__PVT__req_is_read_pu_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5436211998664074357ull);
    vlSelf->__PVT__req_is_clean_u_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9913529091132844596ull);
    vlSelf->__PVT__req_is_clean_s_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14873938448577263702ull);
    vlSelf->__PVT__req_is_clean_i_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8231758163760757835ull);
    vlSelf->__PVT__req_is_make_u_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8653952472511416692ull);
    vlSelf->__PVT__req_is_make_i_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9842980269350567799ull);
    vlSelf->__PVT__req_is_clean_si_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5554970085932968467ull);
    vlSelf->__PVT__req_is_wrnosnpfull_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15961976780154162291ull);
    vlSelf->__PVT__req_is_wrnosnpptl_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10367833888511834493ull);
    vlSelf->__PVT__req_is_wrbackptl_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4566824950968714270ull);
    vlSelf->__PVT__req_is_wruniqueptl_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15561341328577733081ull);
    vlSelf->__PVT__req_is_wruniquefl_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15973752039220265437ull);
    vlSelf->__PVT__req_is_wrunique_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10365231401588654862ull);
    vlSelf->__PVT__req_is_wrnosnpzero_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3842739656237761587ull);
    vlSelf->__PVT__req_is_wruniquezero_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2432573326796460687ull);
    vlSelf->__PVT__dataless_xfrdata_tomem_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17868569002139160891ull);
    vlSelf->__PVT__snoopable_cmo_sendresp_req_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1952188802655672216ull);
    vlSelf->__PVT__req_is_wrnosnpfl_clean_i_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2000996124850762704ull);
    vlSelf->__PVT__req_is_wrnosnpfl_clean_s_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14911282034935592081ull);
    vlSelf->__PVT__req_is_wrnosnpptl_clean_i_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3225009516078752496ull);
    vlSelf->__PVT__req_is_wrnosnpptl_clean_s_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1236607892892826940ull);
    vlSelf->__PVT__req_is_wruniquefl_clean_s_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7165983853349771385ull);
    vlSelf->__PVT__req_is_wruniqueptl_clean_s_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13399816594856702733ull);
    vlSelf->__PVT__req_is_wrbackfl_clean_i_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1231191804719239368ull);
    vlSelf->__PVT__req_is_wrbackfl_clean_s_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7657173186477296818ull);
    vlSelf->__PVT__req_is_wrcleanfl_clean_s_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10245255545160475332ull);
    vlSelf->__PVT__req_is_writecmo_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9136768138599388395ull);
    vlSelf->__PVT__req_is_writefull_clean_i_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8992236031060811605ull);
    vlSelf->__PVT__req_is_writefull_clean_s_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5008520012106863193ull);
    vlSelf->__PVT__req_is_writenosnpptl_clean_si_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11932608406156442994ull);
    vlSelf->__PVT__req_is_writenosnp_clean_si_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9396347442317143370ull);
    vlSelf->__PVT__dataless_xfrdata_tomem_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15637517406863080689ull);
    vlSelf->__PVT__req_read_oc_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1710034659971233203ull);
    vlSelf->__PVT__req_read_oc_notsd_in_ucudsd_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11833337743645861176ull);
    vlSelf->__PVT__itis_lastresp_ph3_nonwr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5943728503337460437ull);
    vlSelf->__PVT__itis_lastresp_atom_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7927812253359366797ull);
    vlSelf->__PVT__itis_prelastresp_dataless_xfr_tomem_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15805050470642007330ull);
    vlSelf->__PVT__itis_lastresp_dataless_xfr_tomem_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10128025839726975902ull);
    vlSelf->__PVT__itis_lastresp_comp_ph3_wr_nosnp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17680556489013333055ull);
    vlSelf->__PVT__itis_prelastresp_comp_is_last_ph3_wr_nosnp_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5332205191802239052ull);
    vlSelf->__PVT__itis_prelastresp_comp_is_last_ph3_wr_nosnp_ptl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8694272180757138409ull);
    vlSelf->__PVT__itis_prelastresp_comp_is_last_ph3_wr_nosnp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13206289636628547877ull);
    vlSelf->__PVT__itis_prelastresp_without_comp_ph3_wr_nosnp_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8518987808931929465ull);
    vlSelf->__PVT__itis_prelastresp_without_comp_ph3_wr_nosnp_ptl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13056242269514349746ull);
    vlSelf->__PVT__itis_prelastresp_without_comp_ph3_wr_nosnp_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17573989032656355015ull);
    vlSelf->__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14120206368981697195ull);
    vlSelf->__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp_ptl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16457258478779964988ull);
    vlSelf->__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13152209211702448111ull);
    vlSelf->__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17583538511895909115ull);
    vlSelf->__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15193536798303566854ull);
    vlSelf->__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp_ptl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4081344096016412573ull);
    vlSelf->__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6095572091702464053ull);
    vlSelf->__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4028546691122208793ull);
    vlSelf->__PVT__itis_prelastresp_ph3_wr_nosnp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16421405529558562252ull);
    vlSelf->__PVT__itis_wrnosnpptl_send_wr_data_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7546502245465073292ull);
    vlSelf->__PVT__itis_wrnosnpfull_send_wr_data_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7943873716783836ull);
    vlSelf->__PVT__itis_wrnosnp_send_wr_data_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5027333261003103708ull);
    vlSelf->__PVT__itis_req_retry_2nd_pcrdgrant = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16734141354482947951ull);
    vlSelf->__PVT__pcrdgrant_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11683807621382353197ull);
    vlSelf->__PVT__itis_req_retry_2nd_retryack = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2048432505928271635ull);
    vlSelf->__PVT__retryack_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5666183563820765823ull);
    vlSelf->__PVT__clr_pcrdt_entry = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9634643387240076833ull);
    vlSelf->__PVT__wren_retry_prio = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3231751373732259589ull);
    vlSelf->__PVT__itis_req_retry_pcrdmatch_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4783979011730677506ull);
    vlSelf->__PVT__retry_shared_txnid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2921006829510693746ull);
    vlSelf->__PVT__muxed_id = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4729075650727336344ull);
    vlSelf->__PVT__itis_lastresp_ph3_wr_cb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1392831169102462347ull);
    vlSelf->__PVT__itis_lastresp_ph3_wr_uniq_fl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15046036037826407234ull);
    vlSelf->__PVT__it_maybe_lastresp_ph3_wr_uniq_ptl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10666116032946717060ull);
    vlSelf->__PVT__itis_lastresp_ph3_wr_uniq_ptl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12972311885713546853ull);
    vlSelf->__PVT__itis_lastresp_ph3_wr_uniq_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7230387604917511859ull);
    vlSelf->__PVT__itis_lastresp_ph3_wr_all = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13313096566611077006ull);
    vlSelf->__PVT__itis_lastresp_ph3_wr_invalid_addr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2816042284200624763ull);
    vlSelf->__PVT__itis_lastresp_nonsnp_excl_store_fail_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8397361918624343591ull);
    vlSelf->__PVT__drop_write_data_to_slc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12044622696513822229ull);
    vlSelf->__PVT__itis_lastresp_ph3_wr_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16677546957118401742ull);
    vlSelf->__PVT__ic_resp_cnt_ph3_from_respreg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 55645850165884084ull);
    vlSelf->__PVT__ic_resp_cnt_ph3_from_reqreg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5673563643710976884ull);
    vlSelf->__PVT__ic_resp_cnt_ph3 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15025012066440633923ull);
    vlSelf->__PVT__first_resp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4545729610054857260ull);
    vlSelf->__PVT__new_first_resp_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2398279408262290546ull);
    vlSelf->__PVT__new_first_RespErr_ph4_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12756074516514636904ull);
    vlSelf->__PVT__first_RespErr_ph3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18438028298046294376ull);
    vlSelf->__PVT__RespErr_ph3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10849819086464326712ull);
    vlSelf->__PVT__resperr_req_ph3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13460196715384933468ull);
    vlSelf->__PVT__cmd_ph3_dat_resperr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17161555919815356176ull);
    vlSelf->__PVT__final_compcmo_resperr_ph3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17168482730933247151ull);
    vlSelf->__PVT__compcmo_resperr_ph3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17914871353487831292ull);
    vlSelf->__PVT__new_compcmo_resperr_ph4_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13277844598464027765ull);
    vlSelf->__PVT__mmem_resp_cnt_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2370892620443443051ull);
    vlSelf->__PVT__origreq_expcompack_bit_resp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2186816123783745455ull);
    vlSelf->__PVT__origreq_reqid_matches_ownerpid_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16654952824759267958ull);
    vlSelf->__PVT__origreq_reqid_matches_sharevec_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 323562667456258359ull);
    vlSelf->__PVT__cmd_ph4_dat_resp_write_data_nxt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13846510786951729689ull);
    vlSelf->__PVT__new_snpresp_cnt_resp_ph4_nxt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5114524383927852340ull);
    vlSelf->__PVT__new_mmemresp_cnt_resp_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4058075290269883152ull);
    vlSelf->__PVT__new_wrdata_cnt_resp_ph4_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13628957406366084732ull);
    vlSelf->__PVT__new_compdbid_cnt_ph4_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16404714110582365195ull);
    vlSelf->__PVT__new_dbid_cnt_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6468352277125492909ull);
    vlSelf->__PVT__new_got_compack_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1080506836451141660ull);
    vlSelf->__PVT__new_compfifo_index_mm_ph4_nxt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13297728971147421466ull);
    vlSelf->__PVT__cmd_ph4_dat_opcode_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16829234384312424772ull);
    vlSelf->__PVT__new_last_read_snp_sent_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14831917959426491258ull);
    vlSelf->__PVT__new_compfifo_index_ic_data_ph4_nxt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 808739194837183425ull);
    vlSelf->__PVT__new_compfifo_index_ic_ph4_nxt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3937851891848786259ull);
    vlSelf->__PVT__new_respfield_ic_src2or4_ph4_nxt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4650339085656783625ull);
    vlSelf->__PVT__new_gotresp_earlier_ic_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3238025733238678459ull);
    vlSelf->__PVT__new_gotwrdata_earlier_ic_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 792924839839278237ull);
    vlSelf->__PVT__new_got_snpdata_earlier_ic_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16010219762831173647ull);
    vlSelf->__PVT__new_gotptldata_earlier_ic_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8563268012512307988ull);
    vlSelf->__PVT__new_dbid_from_slavemem_ph4_nxt = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12417071788384655408ull);
    vlSelf->__PVT__new_dbid_from_slc_ph4_nxt = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4555528796262107031ull);
    vlSelf->__PVT__new_pcrdtype_from_mem_ph4_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10152032458353207174ull);
    vlSelf->__PVT__new_pkt_already_forwarded_snp_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3343274112501689328ull);
    vlSelf->__PVT__new_pkt_already_forwarded_mem_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12262268242524658135ull);
    vlSelf->__PVT__new_was_prelastresp_read_snp_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2205223711136923021ull);
    vlSelf->__PVT__new_was_prelastresp_wr_uniq_ptl_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14861519142718881503ull);
    vlSelf->__PVT__new_was_lastresp_dataless_snpdataptl_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11474107057261476522ull);
    vlSelf->__PVT__was_lastresp_dataless_snpdataptl_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9958713868653053315ull);
    vlSelf->__PVT__was_prelastresp_wr_uniq_ptl_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16465817998074554822ull);
    vlSelf->__PVT__was_prelastresp_read_snp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4037549989362909303ull);
    vlSelf->__PVT__itis_prelastresp_check_cacheline_ph3_cmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4304271123367428050ull);
    vlSelf->__PVT__was_prelastresp_check_cacheline_ph3_cmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4877251035310631966ull);
    vlSelf->__PVT__was_prelastresp_check_cacheline_ph4_cmo_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10993853361197879980ull);
    vlSelf->__PVT__itis_prelastresp_write_compdbid_ph3_cmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1214552865540759721ull);
    vlSelf->__PVT__was_prelastresp_write_compdbid_ph3_cmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14104186045272536351ull);
    vlSelf->__PVT__was_prelastresp_write_compdbid_ph4_cmo_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6276382534322828426ull);
    vlSelf->__PVT__itis_prelastresp_write_dbid_ph3_cmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4268407254620502636ull);
    vlSelf->__PVT__was_prelastresp_write_dbid_ph3_cmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5258513996586281043ull);
    vlSelf->__PVT__was_prelastresp_write_dbid_ph4_cmo_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6622579020343885366ull);
    vlSelf->__PVT__itis_prelastresp_write_comp_ph3_cmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5282064507410462449ull);
    vlSelf->__PVT__was_prelastresp_write_comp_ph3_cmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6967231257222513552ull);
    vlSelf->__PVT__was_prelastresp_write_comp_ph4_cmo_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18265951625010586351ull);
    vlSelf->__PVT__itis_lastresp_ph3_cmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13934940238097356800ull);
    vlSelf->__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17401497757736068738ull);
    vlSelf->__PVT__was_prelastresp_before_sending_wrreq_ph3_wrcmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17709367927951500741ull);
    vlSelf->__PVT__was_prelastresp_before_sending_wrreq_ph4_wrcmo_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12150710650869009881ull);
    vlSelf->__PVT__itis_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15461434345946579155ull);
    vlSelf->__PVT__was_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2927213936902391430ull);
    vlSelf->__PVT__was_prelastresp_before_sending_cacheable_wrdat_ph4_wrcmo_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7140832142850492892ull);
    vlSelf->__PVT__itis_prelastresp_before_sending_noncachealbe_wrdat_ph3_wrcmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4441877356509231573ull);
    vlSelf->__PVT__was_prelastresp_before_sending_noncachealbe_wrdat_ph3_wrcmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1194411012016321527ull);
    vlSelf->__PVT__was_prelastresp_before_sending_noncachealbe_wrdat_ph4_wrcmo_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 780499180483007693ull);
    vlSelf->__PVT__itis_lastresp_ph3_wrcmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 447197267345170998ull);
    vlSelf->__PVT__has_sent_comp_ph3_wrcmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11617667091897842338ull);
    vlSelf->__PVT__has_sent_comp_ph4_wrcmo_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13892752659431625689ull);
    vlSelf->__PVT__send_comp_wrcmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5471462518776625577ull);
    vlSelf->__PVT__has_sent_compcmo_ph3_wrcmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11370078667698417868ull);
    vlSelf->__PVT__has_sent_compcmo_ph4_wrcmo_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4390946997999241311ull);
    vlSelf->__PVT__send_compcmo_wrcmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6274243277947255721ull);
    vlSelf->__PVT__snp_resp_stored_ph3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2752523847627414103ull);
    vlSelf->__PVT__cmd_ph4_snp_resp_nxt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11270982034195158438ull);
    vlSelf->__PVT__got_mem_data_earlier_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9484781444109842608ull);
    vlSelf->__PVT__new_got_mem_data_earlier_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7948963693190774891ull);
    vlSelf->__PVT__dat_opcode_write_data_ph3 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4915091976581608164ull);
    vlSelf->__PVT__dat_resp_write_data_ph3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11950827896827962502ull);
    vlSelf->__PVT__compfifo_index_mm_ph3 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7470220178688408619ull);
    vlSelf->__PVT__compfifo_index_ic_data_ph3 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13119265082995823655ull);
    vlSelf->__PVT__compfifo_index_ic_ph3 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12657027735727122416ull);
    vlSelf->__PVT__respfield_ic_src2or4_ph3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4377326530925941385ull);
    vlSelf->__PVT__gotwrdata_earlier_ic_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14984362538251803961ull);
    vlSelf->__PVT__got_snpdata_earlier_ic_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16733697256998657843ull);
    vlSelf->__PVT__gotptldata_earlier_ic_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12003886344562468466ull);
    vlSelf->__PVT__pkt_already_forwarded_snp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2814331507374895304ull);
    vlSelf->__PVT__pkt_already_forwarded_mem_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13986127641614993631ull);
    vlSelf->__PVT__gotresp_earlier_ic_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12773210991314686957ull);
    vlSelf->__PVT__origreq_got_mem_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13867307609209777164ull);
    vlSelf->__PVT__origreq_got_snpresp_ic = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14436547015169778100ull);
    vlSelf->__PVT__origreq_got_snpdata_ic = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3506445364449680594ull);
    vlSelf->__PVT__origreq_got_snpptldata_ic = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6195475264462905937ull);
    vlSelf->__PVT__origreq_got_copybackwrdata_invalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11084758945067740588ull);
    vlSelf->__PVT__origreq_ccid_ph3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4875335398681144756ull);
    vlSelf->__PVT__origreq_src_id_ph3 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3066108916525114920ull);
    vlSelf->__PVT__origreq_txnid_ph3 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5801072233470424214ull);
    vlSelf->__PVT__origreq_qos_ph3 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7049576668096721390ull);
    vlSelf->__PVT__origreq_size_ph3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16844992753956492632ull);
    vlSelf->__PVT__origreq_invalid_addr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16510823581334518618ull);
    vlSelf->__PVT__origreq_excl_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5335011488157494613ull);
    vlSelf->__PVT__origreq_ns_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2787730352036426765ull);
    vlSelf->__PVT__origreq_memattr_ph3 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16881169444978369072ull);
    vlSelf->__PVT__origreq_excl_pass_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9834806445100291221ull);
    vlSelf->__PVT__origreq_lpid_ph3 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16013210847091485081ull);
    vlSelf->__PVT__resp_outcompdata_resp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5286515161489853783ull);
    vlSelf->__PVT__outcompfifo_index = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16577541394853626273ull);
    vlSelf->__PVT__outcompfifo_index_2nd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15134077525584218899ull);
    vlSelf->__PVT__origreq_need_dataxfr_toic = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11115466877298478310ull);
    vlSelf->__PVT__origreq_need_dataxfr_tomm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10824054296866352670ull);
    vlSelf->__PVT__origreq_mayneed_dataxfr_tomm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8168205884990875860ull);
    vlSelf->__PVT__origreq_no_dataxfr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10266827629856735876ull);
    vlSelf->__PVT__read_notsd_has_data_to_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13350593705093998910ull);
    vlSelf->__PVT__pd_bit_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10127336935579046050ull);
    vlSelf->__PVT__pkt_forwarded_bit_snp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 265207846733303721ull);
    vlSelf->__PVT__pkt_forwarded_bit_mem_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14343584374170157371ull);
    vlSelf->__PVT__origreq_invalidate_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16081802082198932713ull);
    vlSelf->__PVT__origreq_opcode_ph3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16251062519214066463ull);
    vlSelf->__PVT__orig_cachest_ph3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1552749161910972430ull);
    vlSelf->__PVT__orig_cachest_dirty_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14913542712392873801ull);
    vlSelf->__PVT__orig_cachest_inv_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1591891329015099750ull);
    vlSelf->__PVT__orig_cachest_uc_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1041076196199270362ull);
    vlSelf->__PVT__orig_cachest_ud_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14697626292824044213ull);
    vlSelf->__PVT__orig_cachest_sc_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16835301430538184816ull);
    vlSelf->__PVT__orig_cachest_sd_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7316957311458420447ull);
    vlSelf->__PVT__opcode_any_snoop_response_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3832740341308667740ull);
    vlSelf->__PVT__opcode_snprespdata_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4758581154200618805ull);
    vlSelf->__PVT__cmd_ph3_pkt_forwarded_bit98 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6348207661780262166ull);
    vlSelf->__PVT__opcode_snprespptldata_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11776730132971991441ull);
    vlSelf->__PVT__opcode_compack_resp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17629761156338903986ull);
    vlSelf->__PVT__opcode_snprespdata_ptldata_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7781172372307553040ull);
    vlSelf->__PVT__opcode_readreceipt_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3175287017458325011ull);
    vlSelf->__PVT__opcode_snprespdatafwd_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9670687457142183077ull);
    vlSelf->__PVT__cmdq_src0_SnpResp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11639117649875812038ull);
    vlSelf->__PVT__cmdq_src0_SnpRespFwd_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6065693457715969436ull);
    vlSelf->__PVT__cmdq_src0_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7312439894327420391ull);
    vlSelf->__PVT__cmdq_src1_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6285863879814413804ull);
    vlSelf->__PVT__cmdq_src2_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6698799708573227124ull);
    vlSelf->__PVT__cmdq_src0snpresp_or_src2_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11317990299209894842ull);
    vlSelf->__PVT__orig_read_o_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11303135095882562607ull);
    vlSelf->__PVT__orig_read_c_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14385592373612148961ull);
    vlSelf->__PVT__orig_read_s_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4132910973718138804ull);
    vlSelf->__PVT__orig_read_u_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10967989724595179057ull);
    vlSelf->__PVT__orig_read_nosnp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11837003287629170417ull);
    vlSelf->__PVT__orig_read_notsd_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17189070648417306197ull);
    vlSelf->__PVT__orig_makeread_u_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13945143924899602878ull);
    vlSelf->__PVT__orig_read_pu_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1229253188981438240ull);
    vlSelf->__PVT__orig_clean_u_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14256143260601844947ull);
    vlSelf->__PVT__orig_clean_s_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13355365316753902878ull);
    vlSelf->__PVT__orig_clean_i_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7516816982990047716ull);
    vlSelf->__PVT__orig_make_u_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17500515958590113263ull);
    vlSelf->__PVT__orig_make_i_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11446443152957129221ull);
    vlSelf->__PVT__orig_req_cmo_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3117339846163462677ull);
    vlSelf->__PVT__orig_req_wr_snp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8679211822156644316ull);
    vlSelf->__PVT__orig_req_wr_nosnp_full_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1428046411314003708ull);
    vlSelf->__PVT__orig_req_wr_nosnp_ptl_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9525392924588895570ull);
    vlSelf->__PVT__orig_req_wr_nosnp_zero_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14397530471738168716ull);
    vlSelf->__PVT__orig_req_wr_nosnp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15032758542130734679ull);
    vlSelf->__PVT__orig_req_wr_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1489521042455392943ull);
    vlSelf->__PVT__orig_req_wrback_wrcln_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14022680735646174945ull);
    vlSelf->__PVT__orig_req_wruniq_full_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8258115491096474033ull);
    vlSelf->__PVT__orig_req_wruniq_ptl_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2213399813221475981ull);
    vlSelf->__PVT__orig_req_wruniq_zero_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14174135078624918618ull);
    vlSelf->__PVT__orig_req_wr_cb_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11148699521245373685ull);
    vlSelf->__PVT__orig_req_read_ocsu_notsd_pu_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5843431111201029715ull);
    vlSelf->__PVT__orig_req_atom_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3684250222706667969ull);
    vlSelf->__PVT__orig_req_wrnosnpfl_clean_i_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17476171128563348667ull);
    vlSelf->__PVT__orig_req_wrnosnpfl_clean_s_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14862658560909901056ull);
    vlSelf->__PVT__orig_req_wrnosnpptl_clean_i_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9983660867753680615ull);
    vlSelf->__PVT__orig_req_wrnosnpptl_clean_s_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18225723905600784711ull);
    vlSelf->__PVT__orig_req_wruniquefl_clean_s_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3330825206711163398ull);
    vlSelf->__PVT__orig_req_wruniqueptl_clean_s_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8731227597291543121ull);
    vlSelf->__PVT__orig_req_wrbackfl_clean_i_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 86025835602915107ull);
    vlSelf->__PVT__orig_req_wrbackfl_clean_s_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 102410419236933262ull);
    vlSelf->__PVT__orig_req_wrcleanfl_clean_s_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 452370105748341256ull);
    vlSelf->__PVT__orig_req_writefull_cmo_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7927554225648459583ull);
    vlSelf->__PVT__orig_req_writenosnp_cmo_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2490129834650243498ull);
    vlSelf->__PVT__orig_req_writecopyback_cmo_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3056714663316025108ull);
    vlSelf->__PVT__orig_req_write_cmo_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12726200438717164448ull);
    vlSelf->__PVT__wrdata_cache_ph4_rsp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4532038746629377684ull);
    vlSelf->__PVT__wrdata_cache_ph5_rsp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4977253144974168305ull);
    vlSelf->__PVT__wrdata_cache_ph6_rsp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7209237494385498550ull);
    vlSelf->__PVT__wrdata_cache_ph6final_rsp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2823845639943847191ull);
    vlSelf->__PVT__wren_cache_vector_ph4_rsp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10215310210315203229ull);
    vlSelf->__PVT__wren_cache_vector_ph4_rsp_nxt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15531574591299673479ull);
    vlSelf->__PVT__wren_cache_vector_ph5_rsp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4520399468665248919ull);
    vlSelf->__PVT__wren_cache_vector_ph6rsp_nxt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15439367623380377174ull);
    vlSelf->__PVT__wren_cache_vector_ph6rsp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15059597047987501685ull);
    vlSelf->__PVT__wrdata_cache_ph4_req = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17189502656786852125ull);
    vlSelf->__PVT__wrdata_cache_ph5_req = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7627475840350769843ull);
    vlSelf->__PVT__wrdata_cache_ph6_req = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4151193749873530685ull);
    vlSelf->__PVT__wrdata_cache_ph6final_req = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17424131615985606948ull);
    vlSelf->__PVT__wrdata_cache_ph7final_req = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7901667672213990379ull);
    vlSelf->__PVT__wren_cache_vector_ph4_req = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4313111779722030664ull);
    vlSelf->__PVT__wren_cache_vector_ph4_req_nxt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6741262014073860544ull);
    vlSelf->__PVT__wren_cache_vector_ph5_req = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13180689931860144401ull);
    vlSelf->__PVT__wren_cache_vector_ph6_req = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3582832053100894992ull);
    vlSelf->__PVT__wren_cache_vector_ph7_req = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17122239754118121436ull);
    vlSelf->__PVT__cmd_ph4_23_18_rsp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13795951126223990437ull);
    vlSelf->__PVT__cmd_ph4_23_18_rsp_nxt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3991921468126769967ull);
    vlSelf->__PVT__cmd_ph5_23_18_rsp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8744427466859590008ull);
    vlSelf->__PVT__cmd_ph4_23_18_req = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15816697628547710178ull);
    vlSelf->__PVT__cmd_ph4_23_18_req_nxt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13200104242457380311ull);
    vlSelf->__PVT__cmd_ph5_23_18_req = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11679412359554712984ull);
    vlSelf->__PVT__cmd_ph6_23_18_req = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9423796532434273563ull);
    vlSelf->__PVT__pshare_cnt_ph5_rsp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5614313724510208920ull);
    vlSelf->__PVT__pshare_cnt_ph6_rsp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14291799367680022009ull);
    vlSelf->__PVT__ownerp_id_ph6_rsp = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7313004377417117062ull);
    vlSelf->__PVT__ownerp_id_ph6_rsp_nxt = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8814987814232669365ull);
    vlSelf->__PVT__pshare_cnt_ph5_req = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4718214610733597854ull);
    vlSelf->__PVT__pshare_cnt_ph6_req = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12130117333531808371ull);
    vlSelf->__PVT__ownerp_id_ph6_req = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1199912857410098363ull);
    vlSelf->__PVT__ownerp_id_ph6_req_nxt = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1055408086842411077ull);
    vlSelf->__PVT__wren_stat_req_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16141999427793068727ull);
    vlSelf->__PVT__wren_stat_req_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 388757551572353921ull);
    vlSelf->__PVT__wraddr_stat_req_ph4 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17645340827266851032ull);
    vlSelf->__PVT__wraddr_stat_req_ph3 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15619595434931224937ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__PVT__wrdata_stat_req_ph4, __VscopeHash, 14967932717243664180ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->__PVT__wrdata_stat_common_ph3_req, __VscopeHash, 4908998285098564259ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->__PVT__wrdata_stat_common_ph3_rsp, __VscopeHash, 12868175764486056815ull);
    vlSelf->__PVT__wren_stat_rsp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1377695102640870501ull);
    vlSelf->__PVT__wraddr_stat_rsp_ph3 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2537052254941515125ull);
    VL_SCOPED_RAND_RESET_W(3456, vlSelf->__PVT__status_field_req, __VscopeHash, 8507171958967289731ull);
    VL_SCOPED_RAND_RESET_W(3456, vlSelf->__PVT__status_field_req_nxt, __VscopeHash, 13643966532029460942ull);
    VL_SCOPED_RAND_RESET_W(4352, vlSelf->__PVT__status_field_common, __VscopeHash, 1655361065366586585ull);
    VL_SCOPED_RAND_RESET_W(4352, vlSelf->__PVT__status_field_common_nxt, __VscopeHash, 371108348905183650ull);
    vlSelf->__PVT__new_ownerp_id_ph3_req = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7710112616633751804ull);
    vlSelf->__PVT__new_ownerp_id_ph3_rsp = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1554529456353008654ull);
    vlSelf->__PVT__new_cache_st_ph3_req = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10447568789114111238ull);
    vlSelf->__PVT__new_cache_st_ph3_rsp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10139710070548507252ull);
    vlSelf->__PVT__new_cache_st_1_ph3_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6911120175309866811ull);
    vlSelf->__PVT__new_cache_st_1_ph3_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9543805218125420288ull);
    vlSelf->__PVT__new_share_vect_ph3_req = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 5038531175131897613ull);
    vlSelf->__PVT__new_share_vect_ph3_rsp = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16201739720661921468ull);
    vlSelf->__PVT__cache_index_wr_rsp_nxt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3257338567979003735ull);
    vlSelf->__PVT__cache_index_wr_rsp = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3800247263724977513ull);
    vlSelf->__PVT__cache_tag_wr_rsp = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 3100035711721917542ull);
    vlSelf->__PVT__cache_tag_wr_rsp_nxt = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 11303908000812560938ull);
    vlSelf->__PVT__cache_index_wr_req_nxt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4682920999041263274ull);
    vlSelf->__PVT__cache_index_wr_req = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5165627925687685419ull);
    vlSelf->__PVT__cache_tag_wr_req = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 15195293182372657346ull);
    vlSelf->__PVT__cache_tag_wr_req_nxt = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 1658132864546190777ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__PVT__rddata_statreg_req_ph3, __VscopeHash, 10676510904860931878ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__PVT__rddata_statreg_req_ph4, __VscopeHash, 7846116978584901555ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->__PVT__rddata_statcommon_rsp_ph3, __VscopeHash, 8978066770204531910ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->__PVT__rddata_statcommon_rsp_ph4, __VscopeHash, 14678526652644043578ull);
    vlSelf->__PVT__new_snpresp_cnt_req_ph4 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2372199720583340336ull);
    vlSelf->__PVT__req_st_valid_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15693465716074236819ull);
    vlSelf->__PVT__orig_st_uniq_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7626144128747224578ull);
    vlSelf->__PVT__new_mmemresp_cnt_req_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13382996890077516844ull);
    vlSelf->__PVT__new_dbid_cnt_req_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3883929348106513168ull);
    vlSelf->__PVT__new_compdbid_cnt_req_ph3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9814694445391584152ull);
    vlSelf->__PVT__req_st_notdirty_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2704381817679993100ull);
    vlSelf->__PVT__req_st_dirty_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4890996664313161271ull);
    vlSelf->__PVT__dn_sm_req_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8219547017759070088ull);
    vlSelf->__PVT__new_wrdata_cnt_req_ph3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8899211738106543226ull);
    vlSelf->__PVT__new_compack_cnt_req_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13934499251546192838ull);
    vlSelf->__PVT__new_comp_cnt_req_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3711651844031185972ull);
    vlSelf->__PVT__new_readreceipt_cnt_req_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15154535579772848833ull);
    vlSelf->__PVT__compack_cnt_resp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13210103739351081479ull);
    vlSelf->__PVT__comp_cnt_resp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18260536590067421179ull);
    vlSelf->__PVT__comp_slc_cnt_resp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17759798593195048685ull);
    vlSelf->__PVT__readreceipt_cnt_resp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3235904471204992284ull);
    vlSelf->__PVT__new_compack_cnt_resp_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16537316944667525395ull);
    vlSelf->__PVT__new_comp_cnt_resp_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12040069037053217821ull);
    vlSelf->__PVT__new_comp_slc_cnt_resp_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8467444842132062856ull);
    vlSelf->__PVT__new_readreceipt_cnt_resp_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6469870477115884020ull);
    vlSelf->__PVT__atmo_state_ph3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 503646098057237186ull);
    vlSelf->__PVT__new_atmo_state_req_ph3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13596482241592308483ull);
    vlSelf->__PVT__new_atmo_state_ph4_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7321310775431300397ull);
    vlSelf->__PVT__new_compcmo_cnt_req_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8865768919641743323ull);
    vlSelf->__PVT__new_compcmo_cnt_resp_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14961147989253174529ull);
    vlSelf->__PVT__compcmo_cnt_resp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4125703144538805511ull);
    vlSelf->__PVT__req_share_vect_ph4 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17294832958874914622ull);
    vlSelf->__PVT__cmdq_src_ph4_rsp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2110098880302662930ull);
    vlSelf->__PVT__cmdq_snpresp_or_dataresp_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12355544561769021229ull);
    vlSelf->__PVT__cmdq_src0_SnpResp_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15120155487506388386ull);
    vlSelf->__PVT__cmdq_srcdata_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12916440787004747375ull);
    vlSelf->__PVT__origreq_opcode_ph4 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14395224022053772022ull);
    vlSelf->__PVT__orig_st_sd_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10424895610664818910ull);
    vlSelf->__PVT__orig_st_uc_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6803574599199822684ull);
    vlSelf->__PVT__req_st_invalid_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4478771327424925701ull);
    vlSelf->__PVT__orig_st_invalid_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14562023626232296801ull);
    vlSelf->__PVT__orig_cache_st_ph4 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5595887542652197638ull);
    vlSelf->__PVT__orig_st_dirty_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4325706780943493611ull);
    vlSelf->__PVT__req_st_invalid_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6886945641511264165ull);
    vlSelf->__PVT__snp_resp_state_inv_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15079912459727357688ull);
    vlSelf->__PVT__orig_pshare_cnt_ph3 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13560353145794952763ull);
    vlSelf->__PVT__snp_resp_ph3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14206617564123985001ull);
    vlSelf->__PVT__new_share_vect_req_m_ph3 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 4222965854118560742ull);
    vlSelf->__PVT__new_share_vect_rsp_m_ph3 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9378339052296321330ull);
    vlSelf->__PVT__req_share_vect_m_ph3 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 9531487579525620779ull);
    vlSelf->__PVT__req_share_vect_m_qual_ph3 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2504873371353896274ull);
    vlSelf->__PVT__moving_share_vect_m_ph3 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6463767399727625771ull);
    vlSelf->__PVT__moving_share_vect_m_qual_ph3 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14628331474457060465ull);
    vlSelf->__PVT__itis_finalcompack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2851730814159992080ull);
    vlSelf->__PVT__wren_cmq_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12131863869674883690ull);
    vlSelf->__PVT__req_cache_st_ph4 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14219273245079313335ull);
    vlSelf->__PVT__req_is_read_o_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11664145424931667154ull);
    vlSelf->__PVT__req_is_read_c_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2310461174918174811ull);
    vlSelf->__PVT__req_is_read_s_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3110039148690172828ull);
    vlSelf->__PVT__req_is_read_u_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6142247688787913698ull);
    vlSelf->__PVT__req_is_read_notsd_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8210050515645121866ull);
    vlSelf->__PVT__req_is_makeread_u_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3675604072955490170ull);
    vlSelf->__PVT__req_is_read_pu_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9446808220552769264ull);
    vlSelf->__PVT__req_is_clean_u_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14251170554859210025ull);
    vlSelf->__PVT__req_is_clean_i_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16517483556491433670ull);
    vlSelf->__PVT__req_is_clean_s_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11340666744810448794ull);
    vlSelf->__PVT__req_is_make_u_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10521870329580428793ull);
    vlSelf->__PVT__req_is_make_i_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7661649446648068856ull);
    vlSelf->__PVT__req_is_evict_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16425729305597045660ull);
    vlSelf->__PVT__req_is_read_ocs_notsd_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9994269598292482257ull);
    vlSelf->__PVT__req_is_clean_ui_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15456882054110981588ull);
    vlSelf->__PVT__req_is_make_ui_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6859816954997486419ull);
    vlSelf->__PVT__req_is_read_s_notsd_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1088846684823378093ull);
    vlSelf->__PVT__req_is_dataless_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8160177394060948560ull);
    vlSelf->__PVT__req_is_wr_uniq_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12346256821019936595ull);
    vlSelf->__PVT__snpattr_req_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3982626205702635580ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__cmd_req_ph2_pre, __VscopeHash, 7623718977204551545ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__cmd_req_ph2_pre_s, __VscopeHash, 5188053339505730475ull);
    vlSelf->__PVT__cmd_addr_ph2_pre = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 1038659282416276336ull);
    vlSelf->__PVT__cmd_addr_ph2 = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 16092479556761187642ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__cm_cmdvalid_evict_pre, __VscopeHash, 11620295227324043108ull);
    vlSelf->__PVT__cmdq_srcis_cachemiss_ph2_pre = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17786193049103562976ull);
    vlSelf->__PVT__cmdq_srcis_colln_ph2_pre = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12622815937022452955ull);
    vlSelf->__PVT__cmdq_srcis_newreq_ph2_pre = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9133105099194339857ull);
    vlSelf->__PVT__cmdis_invalidate_ph2_pre = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14307085550647835659ull);
    vlSelf->__PVT__snpattr_req_ph2_pre = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8225070619129800951ull);
    vlSelf->__PVT__snpattr_req_ph2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8778740584969310818ull);
    vlSelf->__PVT__req_is_read_ocsu_notsd_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12875482850206218615ull);
    vlSelf->__PVT__req_is_read_ocs_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7955811261095865686ull);
    vlSelf->__PVT__req_is_read_ocsu_notsd_pu_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1605354040041461875ull);
    vlSelf->__PVT__req_is_read_csu_notsd_pu_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15102572125603670458ull);
    vlSelf->__PVT__req_is_read_su_notsd_pu_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5240109577188581767ull);
    vlSelf->__PVT__req_is_read_cs_notsd_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8917538916371301778ull);
    vlSelf->__PVT__orig_read_o_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8041786293585857708ull);
    vlSelf->__PVT__orig_read_c_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 391484536581287797ull);
    vlSelf->__PVT__orig_read_s_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13868030668495066606ull);
    vlSelf->__PVT__orig_read_u_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6169795098936287800ull);
    vlSelf->__PVT__orig_read_nosnp_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10100500677354945222ull);
    vlSelf->__PVT__orig_read_notsd_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14800813607675471767ull);
    vlSelf->__PVT__orig_clean_u_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6210233591193889546ull);
    vlSelf->__PVT__orig_clean_s_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9112587523433398712ull);
    vlSelf->__PVT__orig_clean_i_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6781947678665875721ull);
    vlSelf->__PVT__orig_make_u_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 933239195851503838ull);
    vlSelf->__PVT__orig_make_i_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7068691868549407214ull);
    vlSelf->__PVT__orig_evict_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8253917173956292294ull);
    vlSelf->__PVT__orig_wr_cl_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10369544900351258864ull);
    vlSelf->__PVT__orig_wr_copyback_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2718794741818502431ull);
    vlSelf->__PVT__orig_wr_cl_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2627128340629488459ull);
    vlSelf->__PVT__orig_read_su_pu_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1861618702621985056ull);
    vlSelf->__PVT__moving_share_vect_ph4 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14120961559191848794ull);
    vlSelf->__PVT__moving_share_vect_ph3 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1698281999861436031ull);
    vlSelf->__PVT__moving_ownerp_id_ph3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17274859207787401052ull);
    vlSelf->__PVT__moving_ownerp_id_ph4 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14412584209079341904ull);
    vlSelf->__PVT__moving_cache_st_ph3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2125255160718462835ull);
    vlSelf->__PVT__moving_cache_st_ph4 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5872011926886705529ull);
    vlSelf->__PVT__wrdata_cnt_resp_ph3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4893861390766440591ull);
    vlSelf->__PVT__wrdata_cnt_resp_ph4 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12229724276588956733ull);
    vlSelf->__PVT__compdbid_cnt_ph3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6423235790168550769ull);
    vlSelf->__PVT__dbid_cnt_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4898802320755654003ull);
    vlSelf->__PVT__got_compack_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16936829914541195505ull);
    vlSelf->__PVT__last_read_snp_sent_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3590208922335116084ull);
    vlSelf->__PVT__addr_clln_clearing = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 15474858266658361811ull);
    vlSelf->__PVT__addr_clln_clearing_nxt = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 6158407280480682183ull);
    vlSelf->__PVT__seq_num_all = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12325148260085762159ull);
    vlSelf->__PVT__seq_num_all_nxt = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4087074364147344659ull);
    vlSelf->__PVT__seq_num = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14348413887918754256ull);
    vlSelf->__PVT__seq_num_nxt = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9623325497309012778ull);
    vlSelf->__PVT__seq_num_atom = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1977156910426257134ull);
    vlSelf->__PVT__seq_num_atom_nxt = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7488831956494377115ull);
    vlSelf->__PVT__seq_num_all_atom = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10693829115862301228ull);
    vlSelf->__PVT__seq_num_all_atom_nxt = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8214001221868200936ull);
    vlSelf->__PVT__wren_collnq_valid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3896281471951050523ull);
    vlSelf->__PVT__wren_collnq_vld_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15380833199483317848ull);
    vlSelf->__PVT__clr_collnq_valid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15139282836908619324ull);
    vlSelf->__PVT__colln_empty = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14768784914573029251ull);
    vlSelf->__PVT__colln_empty_nxt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13834154924949130176ull);
    vlSelf->__PVT__colln_cmd_invalidate = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2870345735148228427ull);
    vlSelf->__PVT__colln_cmd_invalidate_nxt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7110440787901177213ull);
    vlSelf->__PVT__highest_seq_is4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13970902094550615671ull);
    vlSelf->__PVT__highest_seq_is3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6306281593926103516ull);
    vlSelf->__PVT__highest_seq_is2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5931306970404755878ull);
    vlSelf->__PVT__highest_seq_is1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2669958168108040467ull);
    vlSelf->__PVT__highest_seq_is0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5313757540345657926ull);
    vlSelf->__PVT__highest_seq_is4_atom = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 735687632092785942ull);
    vlSelf->__PVT__highest_seq_is3_atom = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17430096947536241795ull);
    vlSelf->__PVT__highest_seq_is2_atom = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12983751937529097055ull);
    vlSelf->__PVT__highest_seq_is1_atom = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15683041131408480151ull);
    vlSelf->__PVT__highest_seq_is0_atom = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14315278057129150236ull);
    vlSelf->__PVT__any_highest_seq_is4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 910736253438979528ull);
    vlSelf->__PVT__any_highest_seq_is3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4769872964038152615ull);
    vlSelf->__PVT__any_highest_seq_is2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9493944670641737444ull);
    vlSelf->__PVT__any_highest_seq_is1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9189447588079674109ull);
    vlSelf->__PVT__any_highest_seq_is0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17351667536328308995ull);
    vlSelf->__PVT__any_highest_seq_is4_atom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15022876313516496298ull);
    vlSelf->__PVT__any_highest_seq_is3_atom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11164899076249211297ull);
    vlSelf->__PVT__any_highest_seq_is2_atom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13443736993520909054ull);
    vlSelf->__PVT__any_highest_seq_is1_atom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4838834829878238798ull);
    vlSelf->__PVT__any_highest_seq_is0_atom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12516428044181079512ull);
    vlSelf->__PVT__colln_newentry_addr_clr_addr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7980688387967340628ull);
    vlSelf->__PVT__colln_newentry_atom_clr_atom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6081572113830410067ull);
    vlSelf->__PVT__highest_seqnum_is4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2803584535140596382ull);
    vlSelf->__PVT__highest_seqnum_is3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3002344826277567818ull);
    vlSelf->__PVT__highest_seqnum_is2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8519316778503551852ull);
    vlSelf->__PVT__highest_seqnum_is1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6165184097864929482ull);
    vlSelf->__PVT__highest_seqnum_is0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1061493969067730769ull);
    vlSelf->__PVT__highest_seqnum_is4_atom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13403629689948620647ull);
    vlSelf->__PVT__highest_seqnum_is3_atom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16638543588723580745ull);
    vlSelf->__PVT__highest_seqnum_is2_atom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8689455390847443845ull);
    vlSelf->__PVT__highest_seqnum_is1_atom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18014608440979483540ull);
    vlSelf->__PVT__highest_seqnum_is0_atom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9167719269488148561ull);
    vlSelf->__PVT__en_clr_collnreg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6683525206103855339ull);
    vlSelf->__PVT__en_clr_collnreg_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13864674533578791237ull);
    vlSelf->__PVT__en_clr_atom_rd_collnreg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14781325184546724625ull);
    vlSelf->__PVT__en_clr_atom_rd_collnreg_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6089690671278592383ull);
    vlSelf->__PVT__colln_clr_addr_match = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3450204689376251279ull);
    vlSelf->__PVT__colln_clr_no_atom_outstand = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9172357373566931458ull);
    vlSelf->__PVT__decrement_seq_num_atom = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7827013021315075115ull);
    vlSelf->__PVT__set_colln_rdy = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2906570416502073122ull);
    vlSelf->__PVT__clr_colln_rdy = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7957976646667175163ull);
    vlSelf->__PVT__colln_rdy_for_proc = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10145329504635520850ull);
    vlSelf->__PVT__colln_rdy_for_proc_nxt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4455149167664656418ull);
    vlSelf->__PVT__atom_block_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11887529634594673432ull);
    vlSelf->__PVT__colln_rdy_atom_block_rd = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1504904257301515946ull);
    vlSelf->__PVT__colln_rdy_atom_block_rd_nxt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2122994801335493998ull);
    vlSelf->__PVT__colln_rdy_for_proc_lock = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1963742122494322180ull);
    vlSelf->__PVT__colln_rdy_for_proc_lock_nxt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2917101817933771872ull);
    VL_SCOPED_RAND_RESET_W(1240, vlSelf->__PVT__colln_cmd_field, __VscopeHash, 7913940472170134908ull);
    VL_SCOPED_RAND_RESET_W(1240, vlSelf->__PVT__colln_cmd_field_nxt, __VscopeHash, 17037514856448551950ull);
    vlSelf->__PVT__colln_cmd_addr_invalid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 776843299661851310ull);
    vlSelf->__PVT__colln_cmd_addr_invalid_nxt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14344699519750276086ull);
    VL_SCOPED_RAND_RESET_W(416, vlSelf->__PVT__colln_cmd_field_addr, __VscopeHash, 3646095895390842058ull);
    VL_SCOPED_RAND_RESET_W(224, vlSelf->__PVT__colln_cmd, __VscopeHash, 17157996915837961926ull);
    VL_SCOPED_RAND_RESET_W(224, vlSelf->__PVT__colln_cmd_nxt, __VscopeHash, 10118498995524204644ull);
    vlSelf->__PVT__colln_cmd_isatmo_wr_nxt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9519967630372287628ull);
    vlSelf->__PVT__colln_cmd_isatmo_wr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6729743890450456477ull);
    vlSelf->__PVT__colln_cmd_isatmo_rd_nxt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3160879125506457621ull);
    vlSelf->__PVT__colln_cmd_isatmo_rd = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14110625198529608897ull);
    vlSelf->__PVT__collnq_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13852054873918472533ull);
    vlSelf->__PVT__sel_winner_collq = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11773182446568922286ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__winner_colln_entry, __VscopeHash, 14976528335671400077ull);
    vlSelf->__PVT__winner_colln_addr_invalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14192997920680763943ull);
    vlSelf->__PVT__winner_colln_invalidate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12483953073086659381ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__sel_winner_entry, __VscopeHash, 2297147248865466444ull);
    vlSelf->__PVT__sel_winner_addr_invalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7710244291674409644ull);
    vlSelf->__PVT__sel_winner_invalidate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11052233678141593437ull);
    vlSelf->__PVT__colln_detected_outstq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13732270557893347804ull);
    vlSelf->__PVT__colln_detected_collnq = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8713940638725415859ull);
    vlSelf->__PVT__colln_detected_ph2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 393658741378406008ull);
    vlSelf->__PVT__colln_detected_ph3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5647400518003329039ull);
    vlSelf->__PVT__colln_atom_detected_collnq = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2517867011335153569ull);
    vlSelf->__PVT__colln_atom_detected_ph2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8309559119267406193ull);
    vlSelf->__PVT__colln_atom_detected_ph3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 677301253303086673ull);
    vlSelf->__PVT__colln_atom_detected_outstq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16843218247845126965ull);
    vlSelf->__PVT__colln_det_collnq_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16056703863721901663ull);
    vlSelf->__PVT__colln_detected_in_outstq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4280667469658054164ull);
    vlSelf->__PVT__colln_detected_in_collnq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14209515441114200197ull);
    vlSelf->__PVT__colln_atom_detected_in_outstq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7115623525565976288ull);
    vlSelf->__PVT__colln_atom_detected_in_collnq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8588080130377972837ull);
    vlSelf->__PVT__colln_detected_outstq_or_collnq_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10037200054442844445ull);
    vlSelf->__PVT__rddata_reqcmdq_addr = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 9009203561679867570ull);
    vlSelf->__PVT__rddata_cmq_addr = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 9148259484634837841ull);
    vlSelf->__PVT__blockreqq_dueto_highestseqnum_incollnq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11141306650692798565ull);
    vlSelf->__PVT__blockcmq_dueto_highestseqnum_incollnq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3306195916297822846ull);
    vlSelf->__PVT__colln_detected_reqcmdq = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16300576654783576428ull);
    vlSelf->__PVT__colln_detected_cmq = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15543594591296872388ull);
    vlSelf->__PVT__highest_seq_reqcmdq_is3_or_more = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12993214245938270998ull);
    vlSelf->__PVT__highest_seq_cmq_is3_or_more = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4999937243474663933ull);
    vlSelf->__PVT__cmdq_srcis_cachemiss_ph2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12392795971730175716ull);
    vlSelf->__PVT__cmdq_srcis_colln_ph2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15582048205824544199ull);
    vlSelf->__PVT__cmdq_srcis_newreq_ph2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 224863232553716240ull);
    vlSelf->__PVT__cmdq_srcis_resp_ph2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5556346473077048083ull);
    vlSelf->__PVT__cmdq_srcis_mem_ph2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16042787944458448118ull);
    vlSelf->__PVT__cmdq_srcis_data_ph2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14496833692811836028ull);
    vlSelf->__PVT__cmdq_srcis_cachemiss_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5812762583385283408ull);
    vlSelf->__PVT__cmdq_srcis_colln_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5092866444794830344ull);
    vlSelf->__PVT__cmdq_srcis_newreq_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12619001475201479729ull);
    vlSelf->__PVT__num_emptyloc_outstandq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6924457227940912689ull);
    vlSelf->__PVT__num_emptyloc_outstandq_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 412856487948372149ull);
    vlSelf->__PVT__num_emptyloc_collnq = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10833810272407765127ull);
    vlSelf->__PVT__num_emptyloc_collnq_nxt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13484093657772816854ull);
    vlSelf->__PVT__req_collnq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8747051228606524810ull);
    vlSelf->__PVT__req_collnq_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8889954266915677245ull);
    vlSelf->__PVT__collnreq_st = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4611956723022408188ull);
    vlSelf->__PVT__collnreq_st_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15720735537226474846ull);
    vlSelf->__PVT__colln_match_check_for_inpendingq = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7872867094829115324ull);
    vlSelf->__PVT__block_reqcmdq_dueto_eviction = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5545148207650448685ull);
    vlSelf->__PVT__sel_cmq_path_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17729650065241111407ull);
    vlSelf->__PVT__block_cmqfull = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16086424549190764441ull);
    vlSelf->__PVT__reqid_matches_sharevec_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4155744278354068107ull);
    vlSelf->__PVT__reqid_matches_sharevec_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6309339004476168156ull);
    vlSelf->__PVT__block_reqcmdq_rd_cache = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1795337839596484859ull);
    vlSelf->__PVT__block_collnq_rd_cache = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 704946280594650846ull);
    vlSelf->__PVT__block_cmq_rd_cache = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17904647361004228995ull);
    vlSelf->__PVT__noncm_tgt_sn_supports_dmt_ph2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17054518295190344254ull);
    vlSelf->__PVT__noncm_tgt_sn_supports_dmt_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10026759569909853128ull);
    vlSelf->__PVT__cm_tgt_sn_supports_dmt_ph2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11219171012255688734ull);
    vlSelf->__PVT__cm_tgt_sn_supports_dmt_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8327417910932723498ull);
    vlSelf->__PVT__cmd_ph3_apply_dmt_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5201571779697722444ull);
    vlSelf->__PVT__cmd_ph4_apply_dmt_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7904278208295521326ull);
    vlSelf->__PVT__cmd_ph3_apply_dmt_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11092220879262914544ull);
    vlSelf->__PVT__origreq_apply_dmt_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13460780568077997022ull);
    vlSelf->__PVT__cmd_ph3_nonexcl_read_dct_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16912210677597388343ull);
    vlSelf->__PVT__cmd_ph4_nonexcl_read_dct_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12609259450805680327ull);
    vlSelf->__PVT__cmd_ph3_snprespfwded_dct_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2726280649332445418ull);
    vlSelf->__PVT__cmd_ph3_snprespdatafwded_dct_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7850570454782727289ull);
    vlSelf->__PVT__origreq_may_apply_dct_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16464424827595902893ull);
    vlSelf->__PVT__opcode_any_snpfwded_response_dct_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4112889777414672301ull);
    vlSelf->__PVT__invalid_requester_state_after_dct_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12606901850303448499ull);
    vlSelf->__PVT__snoop_response_fwdstate_ph3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2666537590848009566ull);
    vlSelf->__PVT__cm_flit_addr_sliced_pm_ph1 = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 18079904750092977947ull);
    vlSelf->__PVT__cm_addr_match_pm_ph1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9463891719625551870ull);
    vlSelf->__PVT__cm_addr_match_pm_ph2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5631618828744651861ull);
    vlSelf->__PVT__cm_tgtid_pm_ph2 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10883102073676782824ull);
    vlSelf->__PVT__cm_homeaddr_base_pm = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 12692101677330705775ull);
    vlSelf->__PVT__cm_homeaddr_limit_pm = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 17735155170828469581ull);
    vlSelf->__PVT__cm_activated_pm = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7746307622250343239ull);
    vlSelf->__PVT__cm_homeaddr_base_sliced_pm = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 18148095541045974775ull);
    vlSelf->__PVT__cm_homeaddr_limit_sliced_pm = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 14997308441713714548ull);
    vlSelf->__PVT__nodeid_pm_2d = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16104315166656760477ull);
    vlSelf->__PVT__noncm_flit_addr_sliced_pm_ph1 = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 515135217087420794ull);
    vlSelf->__PVT__noncm_addr_match_pm_ph1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2842324549831532605ull);
    vlSelf->__PVT__noncm_addr_match_pm_ph2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17206808691362053993ull);
    vlSelf->__PVT__noncm_tgtid_pm_ph2 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4505101842790574660ull);
    vlSelf->__PVT__noncm_homeaddr_base_pm = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 16999465568878583337ull);
    vlSelf->__PVT__noncm_homeaddr_limit_pm = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 8778621161790776053ull);
    vlSelf->__PVT__noncm_activated_pm = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4947697557670439230ull);
    vlSelf->__PVT__noncm_homeaddr_base_sliced_pm = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 4614785104305072709ull);
    vlSelf->__PVT__noncm_homeaddr_limit_sliced_pm = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 4709328469465250998ull);
    vlSelf->__PVT__req_is_invalid_resperr_ph1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17354840207307291132ull);
    vlSelf->__PVT__req_is_invalid_resperr_ph2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10345634961238274533ull);
    vlSelf->__PVT__req_is_invalid_resperr_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15525538538469763413ull);
    vlSelf->__PVT__req_is_invalid_resperr_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2429203627994842389ull);
    vlSelf->__PVT__tgt_id_ph2 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2596097225768588025ull);
    vlSelf->__PVT__tgt_id_ph3 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10746762244766851508ull);
    vlSelf->__PVT__tgt_id_ph4 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12369500436065116194ull);
    vlSelf->__PVT__origreq_tgt_id_ph3 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16255072333178090774ull);
    vlSelf->__PVT__origreq_order_ph3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3284516658372670684ull);
    vlSelf->__PVT__origreq_cacheable_bit_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9424842740021297357ull);
    vlSelf->__PVT__origreq_snpattr_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12383476393348367846ull);
    vlSelf->__PVT__origreq_ordered_write_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7799539380671255068ull);
    vlSelf->__PVT__stored_dbid_from_slavemem_ph3 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8213355322331619956ull);
    vlSelf->__PVT__dbid_from_slavemem_ph3 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11583782743253058083ull);
    vlSelf->__PVT__stored_dbid_from_slc_ph3 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3642804485010879652ull);
    vlSelf->__PVT__dbid_from_slc_ph3 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9651117496046955872ull);
    vlSelf->__PVT__stored_pcrdtype_from_mem_ph3 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14799933764096782718ull);
    vlSelf->__PVT__share_vec_ph3 = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7244466095960999132ull);
    vlSelf->__PVT__share_vec_src_cluster_ph3 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11139913335415861419ull);
    vlSelf->__PVT__cmd_timeout_flag = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 629301579401360712ull);
    vlSelf->__PVT__cmd_timeout_flag_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 853492139098007478ull);
    VL_SCOPED_RAND_RESET_W(576, vlSelf->__PVT__cmd_timeoutctr, __VscopeHash, 4019756189003372041ull);
    VL_SCOPED_RAND_RESET_W(576, vlSelf->__PVT__cmd_timeoutctr_nxt, __VscopeHash, 8429566618586343223ull);
    vlSelf->__PVT__service_timeout_flag = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4013087990390640165ull);
    vlSelf->__PVT__any_timeout_flag_true = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10377062055202039650ull);
    vlSelf->__PVT__winner_timeout_index_B0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17089544118546831709ull);
    vlSelf->__PVT__winner_timeout_index_B1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3550308879414225329ull);
    vlSelf->__PVT__winner_timeout_index_B2 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7059008087001796384ull);
    vlSelf->__PVT__winner_timeout_index_B3 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2351830037920293657ull);
    vlSelf->__PVT__winner_timeout_index = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17761155284244306527ull);
    vlSelf->__PVT__service_timeout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15719725595125409769ull);
    vlSelf->__PVT__sharevec_ph5_rsp = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 6888820557714911721ull);
    vlSelf->__PVT__sharevec_ph5_req = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 8510640488522268415ull);
    vlSelf->__PVT__new_share_vect_ph4_rsp = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16833020535030028708ull);
    vlSelf->__PVT__new_ownerp_id_ph4_rsp = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17453820707880418193ull);
    vlSelf->__PVT__new_cache_st_ph4_rsp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16792710644384733951ull);
    vlSelf->__PVT__new_share_vect_ph4_req = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17889870903857341521ull);
    vlSelf->__PVT__new_ownerp_id_ph4_req = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2385714126366522569ull);
    vlSelf->__PVT__new_cache_st_ph4_req = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9926761881952234953ull);
    vlSelf->__PVT__determine_ownerp_id_atreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1645716024178594987ull);
    vlSelf->__PVT__determine_st_atreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4556541556383855947ull);
    vlSelf->__PVT__clr_outstand_cmd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5374427970708754084ull);
    vlSelf->__PVT__clr_outstand_cmd_is_atom_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12420872827987774273ull);
    vlSelf->__PVT__rddata_cache_sel_ph3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4479021204783835580ull);
    vlSelf->__PVT__itis_prelastresp_read_snp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 755911062193152732ull);
    vlSelf->__PVT__itis_lastresp_read_snp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1239581656325305772ull);
    vlSelf->__PVT__itis_lastresp_dataless_snpdataptl_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14926237997763774385ull);
    vlSelf->__PVT__compbuff_num_1st_ph3 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14515704265620327002ull);
    vlSelf->__PVT__compbuff_num_2nd_ph3 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11492745793058760728ull);
    vlSelf->__PVT__vld_compbuff_num_2nd_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1032834122395170377ull);
    vlSelf->__PVT__block_rsp_proc_dueto_dn_sm_req_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4622668722376423349ull);
    vlSelf->__PVT__flit_dwt_en_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4701251245188669000ull);
    vlSelf->__PVT__new_retry_pending_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14799854205062226463ull);
    vlSelf->__PVT__retry_pending_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13384766386809569600ull);
    vlSelf->__PVT__new_retry_pcrdtype_ph4_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7468194370650985050ull);
    vlSelf->__PVT__retry_pcrdtype_ph3 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5213790715108825631ull);
    vlSelf->__PVT__new_comp_resperr_ph4_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18406878084298172971ull);
    vlSelf->__PVT__comp_resperr_ph3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14194401761842911699ull);
    vlSelf->__PVT__itis_atom_txn_data_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1210815647046693860ull);
    vlSelf->__PVT__itis_atom_init_data_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3625035379155551277ull);
    vlSelf->__PVT__itis_atom_comp_rsp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 821249273720874858ull);
    vlSelf->__PVT__itis_atom_res_data_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3907154808675788560ull);
    vlSelf->__PVT__itis_atom_ini_data_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2132853900307405883ull);
    vlSelf->__PVT__itis_atom_clr_buff_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18050578330075178234ull);
    vlSelf->__PVT__itis_lastresp_atom_comp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3306709872121225690ull);
    vlSelf->__PVT__itis_lastresp_ph3_atom_clr_buffer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16075614151627804939ull);
    vlSelf->__PVT__itis_prelastresp_atom_wr_result_p1_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5378035327532559293ull);
    vlSelf->__PVT__was_prelastresp_atom_wr_result_p1_ph4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6792464884949148080ull);
    vlSelf->__PVT__was_prelastresp_atom_wr_result_p1_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4584450940543925419ull);
    vlSelf->__PVT__itis_lastresp_atom_wr_result_p2_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13631465040697585724ull);
    vlSelf->__PVT__itis_prelastresp_atom_wr_result_p2_ph3_comp_is_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17829901383297519744ull);
    vlSelf->__PVT__itis_lastresp_atom_wr_result_p2_ph3_comp_is_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5031706161918173263ull);
    vlSelf->__PVT__itis_lastresp_atom_inidata_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3437289231955300940ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__rddata_respcmdq_s, __VscopeHash, 1042677223953693578ull);
    vlSelf->__PVT__cmd_ph5_req_addr_nxt = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 17691547975237635261ull);
    vlSelf->__PVT__cmd_ph5_req_addr = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 9737480126718137227ull);
    vlSelf->__PVT__cmd_ph6_req_addr = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 16337969097859811976ull);
    vlSelf->__PVT__block_b2b_resp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11741913925414360553ull);
    vlSelf->__PVT__p = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14074675935524643836ull);
    vlSelf->__PVT__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8861071527689086543ull);
    vlSelf->__PVT__reqfifo_bypass_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12946138910791710795ull);
    vlSelf->__PVT__wren_reqcmdq_withbypass = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15562608158354548126ull);
    vlSelf->__PVT__rden_reqcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15143718797018510425ull);
    vlSelf->__PVT__serv_history_req = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7052862552794977591ull);
    vlSelf->__PVT__serv_history_req_nxt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3317292036926221972ull);
    vlSelf->__PVT__gnt_requests_req = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1032717229330691882ull);
    vlSelf->__PVT__req_all_req = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7299004906028754613ull);
    vlSelf->__PVT__serv_history_rsp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 425794931498201579ull);
    vlSelf->__PVT__serv_history_rsp_nxt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7382283105215550029ull);
    vlSelf->__PVT__gnt_requests_rsp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10216029026036833766ull);
    vlSelf->__PVT__req_all_rsp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18392577082721975989ull);
    vlSelf->__PVT__block_b2b_resp_respcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12985105078546534227ull);
    vlSelf->__PVT__block_b2b_resp_memrespcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14577192136543714051ull);
    vlSelf->__PVT__block_b2b_resp_drespcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15557864349234805724ull);
    vlSelf->__PVT__any_resp_selected = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3389049414676614707ull);
    vlSelf->__PVT__resp_block_cnt_0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11688206735835415478ull);
    vlSelf->__PVT__resp_block_cnt_0_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1768992513112008237ull);
    vlSelf->__PVT__resp_block_cnt_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9859690041446430809ull);
    vlSelf->__PVT__resp_block_cnt_1_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1069831059627674952ull);
    vlSelf->__PVT__resp_block_cnt_2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 177026406568554389ull);
    vlSelf->__PVT__resp_block_cnt_2_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7403758956547810191ull);
    vlSelf->__PVT__resp_block_cnt_3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16132884841324272475ull);
    vlSelf->__PVT__resp_block_cnt_3_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2278999118053563679ull);
    vlSelf->__PVT__resp_block_cnt_4 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8481671449036853711ull);
    vlSelf->__PVT__resp_block_cnt_4_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3209868333979347408ull);
    vlSelf->__PVT__sel_blkcnt_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12838212831594167044ull);
    vlSelf->__PVT__sel_blkcnt_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10734184583690464518ull);
    vlSelf->__PVT__sel_blkcnt_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12130645327117338820ull);
    vlSelf->__PVT__sel_blkcnt_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16512694665182734620ull);
    vlSelf->__PVT__sel_blkcnt_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12356497836022491053ull);
    vlSelf->__PVT__last_resp_index_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12351968570996204585ull);
    vlSelf->__PVT__last_resp_index_0_nxt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14038010495016887126ull);
    vlSelf->__PVT__last_resp_index_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1048266222916388016ull);
    vlSelf->__PVT__last_resp_index_1_nxt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10346762706391627302ull);
    vlSelf->__PVT__last_resp_index_2 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13790963709606366466ull);
    vlSelf->__PVT__last_resp_index_2_nxt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7941379187379730454ull);
    vlSelf->__PVT__last_resp_index_3 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4009511930278729833ull);
    vlSelf->__PVT__last_resp_index_3_nxt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5512282916832102788ull);
    vlSelf->__PVT__last_resp_index_4 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8519687354825410785ull);
    vlSelf->__PVT__last_resp_index_4_nxt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12889148425093174929ull);
    vlSelf->__PVT__occupied_last_resp_index_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16606832152949872847ull);
    vlSelf->__PVT__occupied_last_resp_index_0_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5964113138395849644ull);
    vlSelf->__PVT__occupied_last_resp_index_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7168443776414642780ull);
    vlSelf->__PVT__occupied_last_resp_index_1_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12293024866586217365ull);
    vlSelf->__PVT__occupied_last_resp_index_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6833908940685382839ull);
    vlSelf->__PVT__occupied_last_resp_index_2_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9355069047366827735ull);
    vlSelf->__PVT__occupied_last_resp_index_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13286791862929267287ull);
    vlSelf->__PVT__occupied_last_resp_index_3_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3588635408460347642ull);
    vlSelf->__PVT__occupied_last_resp_index_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17733923297295304634ull);
    vlSelf->__PVT__occupied_last_resp_index_4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13111562691384584842ull);
    vlSelf->__PVT__cmd_ph3_dat_opcode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5058988063799176327ull);
    vlSelf->__Vcellinp__sig_countones_0__share_vec = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1570341230750075270ull);
    vlSelf->__PVT__read_req_requires_non_inv_snoop_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 857313085412057615ull);
    vlSelf->__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7488592934900087694ull);
    vlSelf->__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 584551644765415388ull);
    vlSelf->__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 140244404680763276ull);
    vlSelf->__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17856321949920027593ull);
    vlSelf->__PVT__live_RespErr_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18140806754205089260ull);
    vlSelf->__PVT__index_pendingq_clr_outstand_cmd = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13034040900142042910ull);
    vlSelf->__PVT__select_req_datapath = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10851380336057679947ull);
    vlSelf->__PVT__select_rsp_datapath = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8344776497632178737ull);
    vlSelf->__Vcellinp__sig_countones_post_rsp__share_vec = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8921741865443143550ull);
    vlSelf->__Vcellinp__sig_countones_post_req__share_vec = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12167141442433599544ull);
    vlSelf->__PVT__ucie_sam_activated = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7038262109888111340ull);
    vlSelf->__PVT__ucie_addr_match_vec_ph1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18028673708484929112ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__ucie_sliced_base_addresses[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14433036143133693612ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__ucie_sliced_limit_addresses[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 845801705858527489ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__ucie_flit_sliced_addr_ph1[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16911291690645241140ull);
    }
    vlSelf->__PVT__ucie_tgtid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8828797769421887623ull);
    vlSelf->__PVT__cc_inactive_st = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16759811854226771061ull);
    vlSelf->__PVT__cc_inactive_st_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10968158210337599927ull);
    vlSelf->__PVT__outstand_cmd_invalid_allones = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 735434383502619582ull);
    vlSelf->__PVT__cc_is_inactive_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15836515663427350905ull);
    vlSelf->__PVT__inactive_ctr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15534789971832056132ull);
    vlSelf->__PVT__inactive_ctr_nxt = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 799127975112807135ull);
    vlSelf->__PVT__unused_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2568504964857157653ull);
    vlSelf->__PVT__cmdq_srcis_resp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18291467348669569545ull);
    vlSelf->__PVT__cmdq_srcis_mem_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18371850855581294942ull);
    vlSelf->__PVT__cmdq_srcis_data_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14571141198209635022ull);
    vlSelf->__PVT__cmdvalid_ph4_req_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12930217406637617374ull);
    vlSelf->__PVT__wren_outcompfifo_excl_fail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10534761440225021240ull);
    vlSelf->__PVT__origreq_excl_ld_snp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10544131014360425115ull);
    vlSelf->__PVT__origreq_excl_ld_nonsnp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5847272028610358953ull);
    vlSelf->__PVT__req_is_wrbackfl_clean_i_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9579049669619233681ull);
    vlSelf->__PVT__req_is_wrbackfl_clean_s_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2051179415049801614ull);
    vlSelf->__PVT__req_is_wrcleanfl_clean_s_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5596922774678667331ull);
    vlSelf->__PVT__new_comp_slc_cnt_req_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2672892790899452971ull);
    vlSelf->__PVT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11372531115521842849ull);
    vlSelf->__PVT__unnamedblk2__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5645876689224235493ull);
    vlSelf->__PVT__unnamedblk3__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13479957047404373258ull);
    vlSelf->__PVT__unnamedblk4__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6351183901042616846ull);
    vlSelf->__PVT__unnamedblk5__DOT__i = 0;
    vlSelf->__PVT__unnamedblk6__DOT__i = 0;
    vlSelf->__Vdly__respbuff_avail = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17705184779195666501ull);
    vlSelf->__Vdly__resp_block_cnt_0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18406260480359491450ull);
    vlSelf->__Vdly__resp_block_cnt_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15972429621980000934ull);
    vlSelf->__Vdly__resp_block_cnt_2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17820723252681879786ull);
    vlSelf->__Vdly__resp_block_cnt_3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2504372087767825760ull);
    vlSelf->__Vdly__resp_block_cnt_4 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9227905677622638590ull);
    vlSelf->__Vdly__last_resp_index_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1948016972091097356ull);
    vlSelf->__Vdly__last_resp_index_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1828677579493243074ull);
    vlSelf->__Vdly__last_resp_index_2 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12269110336127529847ull);
    vlSelf->__Vdly__last_resp_index_3 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9650205434342050650ull);
    vlSelf->__Vdly__last_resp_index_4 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17311766309132953879ull);
    vlSelf->__Vdly__occupied_last_resp_index_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 847962922561256691ull);
    vlSelf->__Vdly__occupied_last_resp_index_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17844771771905354219ull);
    vlSelf->__Vdly__occupied_last_resp_index_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7092897166938694321ull);
    vlSelf->__Vdly__occupied_last_resp_index_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5372720619540975584ull);
    vlSelf->__Vdly__occupied_last_resp_index_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17118349413872638212ull);
    vlSelf->__Vdly__cmdvalid_ph2_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10494725596750443757ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__Vdly__cmd_ph2_req, __VscopeHash, 9458273878653223859ull);
    vlSelf->__Vdly__cmdq_src_ph2_req = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4953580708989803990ull);
    vlSelf->__Vdly__cmdq_src_ph3_req = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3105514523180517322ull);
    vlSelf->__Vdly__cmdis_req_ph2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16011180684779893805ull);
    vlSelf->__Vdly__req_collnq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16236606749607881144ull);
    vlSelf->__Vdly__collnreq_st = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11029401147750208801ull);
    vlSelf->__Vdly__cmdis_invalidate_ph2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10508139548733219703ull);
    vlSelf->__Vdly__cmdis_invalidate_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10580285600726339182ull);
    vlSelf->__Vdly__cmdis_invalidate_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6270608280850618958ull);
    vlSelf->__Vdly__serv_history_req = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12784900477154896406ull);
    vlSelf->__Vdly__serv_history_rsp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10292046620580107360ull);
    vlSelf->__Vdly__cmdvalid_ph3_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13861273067023646585ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__Vdly__cmd_ph3_req, __VscopeHash, 8387157807930581470ull);
    vlSelf->__Vdly__cmdvalid_ph3_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2696746356013494796ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__Vdly__cmd_ph3_rsp, __VscopeHash, 9419888636192984902ull);
    vlSelf->__Vdly__cmdq_src_ph3_rsp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18044954363336902943ull);
    vlSelf->__Vdly__cmdis_req_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12447014920664479686ull);
    vlSelf->__Vdly__cmdis_resp_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2202850442012388141ull);
    vlSelf->__Vdly__rddata_cache_ph4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2141640699844852017ull);
    vlSelf->__Vdly__reqid_matches_sharevec_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7248098962658049622ull);
    vlSelf->__Vdly__index_statusreg_ph3 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8303547127087110801ull);
    vlSelf->__Vdly__excl_pass_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13485912271404475292ull);
    vlSelf->__Vdly__cmd_ph4_apply_dmt_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8891797239934434364ull);
    vlSelf->__Vdly__cmd_ph4_nonexcl_read_dct_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8964268776798248521ull);
    vlSelf->__Vdly__snpattr_req_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1483138571686185552ull);
    vlSelf->__Vdly__cmdq_srcis_cachemiss_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15779937584674869280ull);
    vlSelf->__Vdly__cmdq_srcis_colln_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11996409500422709896ull);
    vlSelf->__Vdly__cmdq_srcis_newreq_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8130941294407873590ull);
    vlSelf->__Vdly__cmdvalid_ph4_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6845722942325858014ull);
    vlSelf->__Vdly__cmdvalid_ph4_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13933500964871043359ull);
    vlSelf->__Vdly__cmdis_req_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1251545571360026591ull);
    vlSelf->__Vdly__cmdis_resp_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17088128018038907546ull);
    vlSelf->__Vdly__wrindex_req_ph4 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12787169166011983015ull);
    vlSelf->__Vdly__cachehit_vector_ph4 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6697453219140573395ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__Vdly__cmd_ph4_req, __VscopeHash, 14833246537653866563ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__Vdly__cmd_ph4_rsp, __VscopeHash, 15261494732615182307ull);
    vlSelf->__Vdly__wren_cmq_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4917233806808401591ull);
    vlSelf->__Vdly__req_atmo_ph4 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5613412228980623024ull);
    vlSelf->__Vdly__cmd_isatmo_wr_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1610854223494638771ull);
    vlSelf->__Vdly__cmd_isatmo_rd_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2986124561488304439ull);
    vlSelf->__Vdly__cmd_isatmo_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5394468324484382261ull);
    vlSelf->__Vdly__addr_clln_clearing = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 14217367937756913713ull);
    vlSelf->__Vdly__reqid_matches_ownerpid_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16758082119081561482ull);
    vlSelf->__Vdly__dataless_xfrdata_tomem_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6157273483686459980ull);
    VL_SCOPED_RAND_RESET_W(4352, vlSelf->__Vdly__status_field_common, __VscopeHash, 13046815862095630109ull);
    VL_SCOPED_RAND_RESET_W(3456, vlSelf->__Vdly__status_field_req, __VscopeHash, 11258417127908057883ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__Vdly__status_field_retry_ph3, __VscopeHash, 17919154840944560760ull);
    vlSelf->__Vdly__cmdq_src_ph4_rsp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13102096442802728528ull);
    vlSelf->__Vdly__dn_sm_req_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18336366692792387660ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__Vdly__rddata_statreg_req_ph4, __VscopeHash, 13216089201762312489ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->__Vdly__rddata_statcommon_rsp_ph4, __VscopeHash, 3107814218175072879ull);
    vlSelf->__Vdly__cache_index_wr_rsp = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16300793583570553729ull);
    vlSelf->__Vdly__cache_tag_wr_rsp = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 3592251752571769081ull);
    vlSelf->__Vdly__cache_index_wr_req = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9497263129448335265ull);
    vlSelf->__Vdly__cache_tag_wr_req = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 2424192579182972624ull);
    vlSelf->__Vdly__wrdata_cache_ph5_rsp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14736656028942659516ull);
    vlSelf->__Vdly__wrdata_cache_ph6_rsp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15735170738347314296ull);
    vlSelf->__Vdly__wrdata_cache_ph5_req = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6043663570895946998ull);
    vlSelf->__Vdly__wrdata_cache_ph6_req = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2608186701032940517ull);
    vlSelf->__Vdly__wrdata_cache_ph7final_req = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9021006228440983440ull);
    vlSelf->__Vdly__wren_cache_vector_ph4_rsp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16490313110645871295ull);
    vlSelf->__Vdly__wren_cache_vector_ph5_rsp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13016699165162075621ull);
    vlSelf->__Vdly__wren_cache_vector_ph6rsp = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4617038193114418891ull);
    vlSelf->__Vdly__wren_cache_vector_ph4_req = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5870568043871676385ull);
    vlSelf->__Vdly__wren_cache_vector_ph5_req = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8858857488711611293ull);
    vlSelf->__Vdly__wren_cache_vector_ph6_req = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6090040489391248768ull);
    vlSelf->__Vdly__wren_cache_vector_ph7_req = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5336494346426261557ull);
    vlSelf->__Vdly__cmd_ph4_23_18_rsp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7606258117563370763ull);
    vlSelf->__Vdly__cmd_ph5_23_18_rsp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18070783679433072086ull);
    vlSelf->__Vdly__cmd_ph4_23_18_req = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8496110549117362269ull);
    vlSelf->__Vdly__cmd_ph5_23_18_req = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12332623977576647792ull);
    vlSelf->__Vdly__cmd_ph6_23_18_req = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18367553411976727465ull);
    vlSelf->__Vdly__ownerp_id_ph6_req = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5764992976440098080ull);
    vlSelf->__Vdly__ownerp_id_ph6_rsp = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17641292065652686497ull);
    vlSelf->__Vdly__index_statusreg_ph4 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8580656712777207290ull);
    vlSelf->__Vdly__new_share_vect_ph4_rsp = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 14454480487097953102ull);
    vlSelf->__Vdly__new_ownerp_id_ph4_rsp = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4412780668877398472ull);
    vlSelf->__Vdly__new_cache_st_ph4_rsp = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14310247335888959631ull);
    vlSelf->__Vdly__new_share_vect_ph4_req = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 2358529659901120691ull);
    vlSelf->__Vdly__new_ownerp_id_ph4_req = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13658277920153968706ull);
    vlSelf->__Vdly__new_cache_st_ph4_req = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10821991497759093315ull);
    vlSelf->__Vdly__cmd_ph5_req_addr = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 7734361417210670296ull);
    vlSelf->__Vdly__cmd_ph6_req_addr = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 3866769784421543453ull);
    vlSelf->__Vdly__pshare_cnt_ph6_req = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14222659210556321111ull);
    vlSelf->__Vdly__pshare_cnt_ph6_rsp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17475766354341918089ull);
    vlSelf->__Vdly__colln_detected_ph3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16888413863767403381ull);
    vlSelf->__Vdly__colln_atom_detected_ph3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17514285188272290198ull);
    VL_SCOPED_RAND_RESET_W(1664, vlSelf->__Vdly__outstand_cmd_addr, __VscopeHash, 14052117039095046668ull);
    vlSelf->__Vdly__outstand_req_atmo_wr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7553457121818381789ull);
    vlSelf->__Vdly__outstand_req_atmo_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3164279141615107537ull);
    VL_SCOPED_RAND_RESET_W(768, vlSelf->__Vdly__outstand_cmd, __VscopeHash, 12943397279029001227ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->__Vdly__outstand_cmd_buffnum_1st, __VscopeHash, 5593230731209935826ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->__Vdly__outstand_cmd_buffnum_2nd, __VscopeHash, 12288107034877323641ull);
    vlSelf->__Vdly__vld_store_to_bn2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7555678387243832337ull);
    vlSelf->__Vdly__vld_store_compbuf_2nd_for_snpdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12927721792494975190ull);
    vlSelf->__Vdly__outstand_cmd_invalid = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7338576711906416102ull);
    vlSelf->__Vdly__num_emptyloc_outstandq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3166006189832205447ull);
    vlSelf->__Vdly__outstand_prep_valid = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16730493267560870317ull);
    vlSelf->__Vdly__outstand_atmo_rd_alloc_then_wr_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10551976938043547264ull);
    VL_SCOPED_RAND_RESET_W(576, vlSelf->__Vdly__cmd_timeoutctr, __VscopeHash, 3075303666795225712ull);
    vlSelf->__Vdly__cmd_timeout_flag = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14430740966970650827ull);
    vlSelf->__Vdly__colln_empty = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15970327795439498610ull);
    vlSelf->__Vdly__colln_cmd_invalidate = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5883660059953256679ull);
    vlSelf->__Vdly__colln_rdy_for_proc = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10237234038122998550ull);
    vlSelf->__Vdly__colln_rdy_atom_block_rd = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13793102551239715940ull);
    vlSelf->__Vdly__colln_rdy_for_proc_lock = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3935558604149361908ull);
    VL_SCOPED_RAND_RESET_W(1240, vlSelf->__Vdly__colln_cmd_field, __VscopeHash, 8486701268374301971ull);
    VL_SCOPED_RAND_RESET_W(224, vlSelf->__Vdly__colln_cmd, __VscopeHash, 17215491390294767100ull);
    vlSelf->__Vdly__colln_cmd_addr_invalid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12731018463111094933ull);
    vlSelf->__Vdly__colln_cmd_isatmo_rd = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13394587540823220469ull);
    vlSelf->__Vdly__colln_cmd_isatmo_wr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16724451646995207167ull);
    vlSelf->__Vdly__seq_num_all = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11479919590239061649ull);
    vlSelf->__Vdly__seq_num_all_atom = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7993474259189039703ull);
    vlSelf->__Vdly__en_clr_collnreg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3911271431513629501ull);
    vlSelf->__Vdly__en_clr_atom_rd_collnreg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4320494427405375860ull);
    vlSelf->__Vdly__num_emptyloc_collnq = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2386889141059368231ull);
    vlSelf->__Vdly__tgt_id_ph3 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8806507344983213891ull);
    vlSelf->__Vdly__tgt_id_ph4 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1294279055330187844ull);
    vlSelf->__Vdly__req_is_invalid_resperr_ph2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10686254900565338995ull);
    vlSelf->__Vdly__req_is_invalid_resperr_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7818073339665245210ull);
    vlSelf->__Vdly__req_is_invalid_resperr_ph4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5650391973248255463ull);
    vlSelf->__Vdly__cm_addr_match_pm_ph2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18439462476953253014ull);
    vlSelf->__Vdly__noncm_addr_match_pm_ph2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12625229555113749164ull);
    vlSelf->__Vdly__noncm_tgt_sn_supports_dmt_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1382514879692214418ull);
    vlSelf->__Vdly__cm_tgt_sn_supports_dmt_ph3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16180638575063114741ull);
    vlSelf->__Vdly__cc_inactive_st = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5444618468398640979ull);
    vlSelf->__Vdly__inactive_ctr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13826938613153294328ull);
    vlSelf->__Vdly__cc_is_inactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6876420140695151102ull);
}
