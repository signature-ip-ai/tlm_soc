// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_coherency_ctrlr__pi14.h"

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__0(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_reqcmdq = (1U & ((~ (IData)(vlSelfRef.__PVT__empty_reqcmdq)) 
                                          | (((IData)(vlSelfRef.__PVT__empty_reqcmdq) 
                                              & (IData)(vlSelfRef.__PVT__wren_reqcmdq)) 
                                             & (IData)(vlSelfRef.__PVT__reqfifo_bypass_en))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__1(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__1\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__3(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__3\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__1(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__1\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__3(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__3\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__4(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__4\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__5(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__5\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__6(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__block_cmqfull = (1U & (~ (IData)(vlSelfRef.__PVT__fiforoom_atlst4_cmq)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__7(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__cc_inactive_st = vlSelfRef.__PVT__cc_inactive_st;
    vlSelfRef.__Vdly__inactive_ctr = vlSelfRef.__PVT__inactive_ctr;
    vlSelfRef.__Vdly__cc_is_inactive = vlSelfRef.__PVT__cc_is_inactive;
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__cc_inactive_st = vlSelfRef.__PVT__cc_inactive_st_nxt;
        vlSelfRef.__Vdly__inactive_ctr = vlSelfRef.__PVT__inactive_ctr_nxt;
        vlSelfRef.__Vdly__cc_is_inactive = vlSelfRef.__PVT__cc_is_inactive_nxt;
    } else {
        vlSelfRef.__Vdly__cc_inactive_st = 0U;
        vlSelfRef.__Vdly__inactive_ctr = 0U;
        vlSelfRef.__Vdly__cc_is_inactive = 1U;
    }
    vlSelfRef.__PVT__cc_inactive_st = vlSelfRef.__Vdly__cc_inactive_st;
    vlSelfRef.__PVT__inactive_ctr = vlSelfRef.__Vdly__inactive_ctr;
    vlSelfRef.__PVT__cc_is_inactive = vlSelfRef.__Vdly__cc_is_inactive;
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__9(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__block_reqcmdq_dueto_eviction = vlSelfRef.__PVT__en_blocking_reqcmdq;
    vlSelfRef.__PVT__req_cmq = ((IData)(vlSelfRef.__PVT__cm_cmdvalid) 
                                | (IData)(vlSelfRef.__PVT__cm_cmdvalid_evict));
    vlSelfRef.__PVT__rddata_cmq_addr = (0xfffffffffffffULL 
                                        & VL_SEL_QWII(155, vlSelfRef.__PVT__cm_cmd, 0x48U, 52));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__0(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__block_b2b_resp_drespcmdq = ((~ (IData)(vlSelfRef.__PVT__empty_drespcmdq)) 
                                                 & (((((((0x3fU 
                                                          & VL_SEL_IWII(109, vlSelfRef.__PVT__rddata_drespcmdq, 0x1aU, 6)) 
                                                         == (IData)(vlSelfRef.__PVT__last_resp_index_0)) 
                                                        & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_0)) 
                                                       | (((0x3fU 
                                                            & VL_SEL_IWII(109, vlSelfRef.__PVT__rddata_drespcmdq, 0x1aU, 6)) 
                                                           == (IData)(vlSelfRef.__PVT__last_resp_index_1)) 
                                                          & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_1))) 
                                                      | (((0x3fU 
                                                           & VL_SEL_IWII(109, vlSelfRef.__PVT__rddata_drespcmdq, 0x1aU, 6)) 
                                                          == (IData)(vlSelfRef.__PVT__last_resp_index_2)) 
                                                         & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_2))) 
                                                     | (((0x3fU 
                                                          & VL_SEL_IWII(109, vlSelfRef.__PVT__rddata_drespcmdq, 0x1aU, 6)) 
                                                         == (IData)(vlSelfRef.__PVT__last_resp_index_3)) 
                                                        & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_3))) 
                                                    | (((0x3fU 
                                                         & VL_SEL_IWII(109, vlSelfRef.__PVT__rddata_drespcmdq, 0x1aU, 6)) 
                                                        == (IData)(vlSelfRef.__PVT__last_resp_index_4)) 
                                                       & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_4))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__1(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__block_b2b_resp_respcmdq = ((~ (IData)(vlSelfRef.__PVT__empty_respcmdq)) 
                                                & (((((((0x3fU 
                                                         & VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_respcmdq_s, 0x1aU, 6)) 
                                                        == (IData)(vlSelfRef.__PVT__last_resp_index_0)) 
                                                       & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_0)) 
                                                      | (((0x3fU 
                                                           & VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_respcmdq_s, 0x1aU, 6)) 
                                                          == (IData)(vlSelfRef.__PVT__last_resp_index_1)) 
                                                         & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_1))) 
                                                     | (((0x3fU 
                                                          & VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_respcmdq_s, 0x1aU, 6)) 
                                                         == (IData)(vlSelfRef.__PVT__last_resp_index_2)) 
                                                        & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_2))) 
                                                    | (((0x3fU 
                                                         & VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_respcmdq_s, 0x1aU, 6)) 
                                                        == (IData)(vlSelfRef.__PVT__last_resp_index_3)) 
                                                       & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_3))) 
                                                   | (((0x3fU 
                                                        & VL_SEL_IWII(73, vlSelfRef.__PVT__rddata_respcmdq_s, 0x1aU, 6)) 
                                                       == (IData)(vlSelfRef.__PVT__last_resp_index_4)) 
                                                      & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_4))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__2(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__block_b2b_resp_memrespcmdq = (
                                                   (~ (IData)(vlSelfRef.__PVT__empty_memrespcmdq)) 
                                                   & (((((((0x3fU 
                                                            & VL_SEL_IWII(109, vlSelfRef.__PVT__rddata_memrespcmdq_prepped, 0x1aU, 6)) 
                                                           == (IData)(vlSelfRef.__PVT__last_resp_index_0)) 
                                                          & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_0)) 
                                                         | (((0x3fU 
                                                              & VL_SEL_IWII(109, vlSelfRef.__PVT__rddata_memrespcmdq_prepped, 0x1aU, 6)) 
                                                             == (IData)(vlSelfRef.__PVT__last_resp_index_1)) 
                                                            & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_1))) 
                                                        | (((0x3fU 
                                                             & VL_SEL_IWII(109, vlSelfRef.__PVT__rddata_memrespcmdq_prepped, 0x1aU, 6)) 
                                                            == (IData)(vlSelfRef.__PVT__last_resp_index_2)) 
                                                           & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_2))) 
                                                       | (((0x3fU 
                                                            & VL_SEL_IWII(109, vlSelfRef.__PVT__rddata_memrespcmdq_prepped, 0x1aU, 6)) 
                                                           == (IData)(vlSelfRef.__PVT__last_resp_index_3)) 
                                                          & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_3))) 
                                                      | (((0x3fU 
                                                           & VL_SEL_IWII(109, vlSelfRef.__PVT__rddata_memrespcmdq_prepped, 0x1aU, 6)) 
                                                          == (IData)(vlSelfRef.__PVT__last_resp_index_4)) 
                                                         & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_4))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__3(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__3\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__4(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid = vlSelfRef.__PVT__i_rcv_rsp_dat_linear_srcid;
    vlSelfRef.__PVT__new_ownerp_id_ph3_rsp = vlSelfRef.__PVT__moving_ownerp_id_ph3;
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        vlSelfRef.__PVT__new_ownerp_id_ph3_rsp = (0x7fU 
                                                  & (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                                                      & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3)))
                                                      ? 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__snoop_response_fwdstate_ph3))
                                                       ? 
                                                      VL_SEL_IIII(11, 
                                                                  (0x7ffU 
                                                                   & ((3U 
                                                                       == (IData)(vlSelfRef.__PVT__snp_resp_ph3))
                                                                       ? 
                                                                      VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                                                       : 
                                                                      VL_EXTEND_II(11,7, 
                                                                                (0x7fU 
                                                                                & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__origreq_src_id_ph3), 0U, 7))))), 0U, 7)
                                                       : 
                                                      VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__origreq_src_id_ph3), 0U, 7))
                                                      : 
                                                     (((VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__snp_resp_ph3), 2U) 
                                                        & (IData)(vlSelfRef.__PVT__orig_read_su_pu_ph3)) 
                                                       | ((4U 
                                                           == (IData)(vlSelfRef.__PVT__snp_resp_ph3)) 
                                                          & (IData)(vlSelfRef.__PVT__orig_read_notsd_ph3)))
                                                       ? 
                                                      VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__origreq_src_id_ph3), 0U, 7)
                                                       : 
                                                      (((3U 
                                                         == (IData)(vlSelfRef.__PVT__snp_resp_ph3)) 
                                                        | (2U 
                                                           == (IData)(vlSelfRef.__PVT__snp_resp_ph3)))
                                                        ? 
                                                       VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid), 0U, 7)
                                                        : (IData)(vlSelfRef.__PVT__moving_ownerp_id_ph3)))));
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0U)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (0U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (0U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (0U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 1U)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (1U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (1U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (1U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 2U)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (2U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (2U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (2U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 3U)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (3U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (3U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (3U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 4U)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (4U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (4U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (4U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 5U)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (5U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (5U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (5U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 6U)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (6U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (6U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (6U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 7U)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (7U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (7U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (7U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 8U)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (8U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (8U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (8U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 9U)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (9U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (9U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (9U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0xaU)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (0xaU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (0xaU == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (0xaU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0xbU)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (0xbU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (0xbU == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (0xbU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0xcU)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (0xcU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (0xcU == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (0xcU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0xdU)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (0xdU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (0xdU == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (0xdU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0xeU)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (0xeU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (0xeU == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (0xeU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0xfU)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (0xfU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (0xfU == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (0xfU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0x10U)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (0x10U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (0x10U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (0x10U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0x11U)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (0x11U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (0x11U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (0x11U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0x12U)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (0x12U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (0x12U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (0x12U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0x13U)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (0x13U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (0x13U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (0x13U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0x14U)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (0x14U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (0x14U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (0x14U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0x15U)));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
             & (0x15U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                    & (0x15U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
            VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                            (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
        }
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
              | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                 & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
             & (0x15U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
            VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
        }
    }
    vlSelfRef.__PVT__new_share_vect_ph3_rsp = vlSelfRef.__PVT__new_share_vect_rsp_m_ph3;
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__5(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_outcompfifo_retry = ((~ (IData)(vlSelfRef.__PVT__full_outcompfifo)) 
                                               & (IData)(vlSelfRef.__PVT__itis_req_retry_pcrdmatch_ph3));
    vlSelfRef.__PVT__wren_outcompfifo_excl_fail = (
                                                   (~ (IData)(vlSelfRef.__PVT__full_outcompfifo)) 
                                                   & (IData)(vlSelfRef.__PVT__itis_lastresp_nonsnp_excl_store_fail_ph3));
    vlSelfRef.__PVT__wren_outcompfifo_compack = 0U;
    if ((((~ (IData)(vlSelfRef.__PVT__full_outcompfifo)) 
          & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
         & ((IData)(vlSelfRef.__PVT__opcode_compack_resp_ph3) 
            | ((IData)(vlSelfRef.__PVT__opcode_readreceipt_ph3) 
               & ((0U == (IData)(vlSelfRef.__PVT__origreq_order_ph3)) 
                  & (~ (IData)(vlSelfRef.__PVT__origreq_expcompack_bit_resp_ph3))))))) {
        vlSelfRef.__PVT__wren_outcompfifo_compack = 
            (((IData)(vlSelfRef.__PVT__orig_req_read_ocsu_notsd_pu_ph3) 
              | ((IData)(vlSelfRef.__PVT__orig_makeread_u_ph3) 
                 & (~ (((IData)(vlSelfRef.__PVT__orig_cachest_uc_ph3) 
                        | (IData)(vlSelfRef.__PVT__orig_cachest_ud_ph3)) 
                       & (IData)(vlSelfRef.__PVT__origreq_reqid_matches_ownerpid_ph3)))))
              ? (((IData)(vlSelfRef.__PVT__last_read_snp_sent_ph3) 
                  | (IData)(vlSelfRef.__PVT__origreq_apply_dmt_ph3)) 
                 | (IData)(vlSelfRef.__PVT__origreq_invalid_addr))
              : ((1U & (~ ((((((((((0x1dU == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3)) 
                                   | (0x1cU == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                  | (0x44U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                 | (0x43U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                | (0x51U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                               | (0x50U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                              | (0x61U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                             | (0x60U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                            | (0x54U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                           | (0x64U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))))) 
                 && ((1U & (~ ((0x19U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3)) 
                               | (0x18U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))))) 
                     || (1U & (~ (IData)(vlSelfRef.__PVT__origreq_ordered_write_ph3))))));
    }
    vlSelfRef.__PVT__wren_outcompfifo_wr_all = ((~ (IData)(vlSelfRef.__PVT__full_outcompfifo)) 
                                                & ((((((((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wr_all) 
                                                         | (IData)(vlSelfRef.__PVT__itis_prelastresp_ph3_wr_nosnp)) 
                                                        | (IData)(vlSelfRef.__PVT__itis_atom_txn_data_ph3)) 
                                                       | (IData)(vlSelfRef.__PVT__itis_lastresp_atom_wr_result_p2_ph3)) 
                                                      | (IData)(vlSelfRef.__PVT__itis_prelastresp_atom_wr_result_p2_ph3_comp_is_last)) 
                                                     | (IData)(vlSelfRef.__PVT__itis_lastresp_atom_wr_result_p2_ph3_comp_is_last)) 
                                                    | (IData)(vlSelfRef.__PVT__itis_prelastresp_comp_is_last_ph3_wr_nosnp)) 
                                                   | (IData)(vlSelfRef.__PVT__itis_wrnosnp_send_wr_data_ph3)));
    vlSelfRef.__PVT__wren_outcompfifo_resp = ((~ (IData)(vlSelfRef.__PVT__full_outcompfifo)) 
                                              & ((((((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_nonwr) 
                                                     | (IData)(vlSelfRef.__PVT__itis_lastresp_dataless_xfr_tomem_ph3)) 
                                                    | (IData)(vlSelfRef.__PVT__itis_lastresp_atom_ph3)) 
                                                   & ((((((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                                                          | (IData)(vlSelfRef.__PVT__origreq_need_dataxfr_toic)) 
                                                         | (IData)(vlSelfRef.__PVT__origreq_need_dataxfr_tomm)) 
                                                        | (IData)(vlSelfRef.__PVT__origreq_mayneed_dataxfr_tomm)) 
                                                       | (IData)(vlSelfRef.__PVT__origreq_no_dataxfr)) 
                                                      | (IData)(vlSelfRef.__PVT__origreq_invalidate_ph3))) 
                                                  | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_cmo)) 
                                                 | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wrcmo)));
    vlSelfRef.__PVT__wren_outcompfifo_prelastresp = 
        ((~ (IData)(vlSelfRef.__PVT__full_outcompfifo)) 
         & (((((((((((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                     | (IData)(vlSelfRef.__PVT__itis_atom_init_data_ph3)) 
                    | (IData)(vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo)) 
                   | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_compdbid_ph3_cmo)) 
                  | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_dbid_ph3_cmo)) 
                 | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_comp_ph3_cmo)) 
                | (IData)(vlSelfRef.__PVT__itis_lastresp_dataless_snpdataptl_ph3)) 
               | (IData)(vlSelfRef.__PVT__itis_prelastresp_dataless_xfr_tomem_ph3)) 
              | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo)) 
             | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo)) 
            | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_noncachealbe_wrdat_ph3_wrcmo)));
    vlSelfRef.__PVT__itis_finalcompack = vlSelfRef.__PVT__wren_outcompfifo_compack;
    vlSelfRef.__PVT__wren_outcompfifo = (((((((IData)(vlSelfRef.__PVT__wren_outcompfifo_resp) 
                                              | (IData)(vlSelfRef.__PVT__wren_outcompfifo_prelastresp)) 
                                             | (IData)(vlSelfRef.__PVT__wren_outcompfifo_compack)) 
                                            | (IData)(vlSelfRef.__PVT__wren_outcompfifo_wr_all)) 
                                           | (IData)(vlSelfRef.__PVT__wren_outcompfifo_retry)) 
                                          | (IData)(vlSelfRef.__PVT__wren_outcompfifo_excl_fail)) 
                                         | (IData)(vlSelfRef.__PVT__wren_outcompfifo_atom));
    vlSelfRef.__PVT__RespErr_ph3 = (3U & ((IData)(vlSelfRef.__PVT__origreq_invalid_addr)
                                           ? 3U : (
                                                   ((IData)(vlSelfRef.__PVT__wren_outcompfifo) 
                                                    & ((IData)(vlSelfRef.__PVT__origreq_excl_ld_snp_ph3) 
                                                       | (((IData)(vlSelfRef.__PVT__orig_clean_u_ph3) 
                                                           & (IData)(vlSelfRef.__PVT__origreq_excl_ph3)) 
                                                          & (IData)(vlSelfRef.__PVT__origreq_excl_pass_ph3))))
                                                    ? 1U
                                                    : 
                                                   (((IData)(vlSelfRef.__PVT__wren_outcompfifo) 
                                                     & ((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
                                                        | (IData)(vlSelfRef.__PVT__cmdq_src0_Comp_ph3)))
                                                     ? 
                                                    VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x2bU, 2)
                                                     : 
                                                    ((((IData)(vlSelfRef.__PVT__wren_outcompfifo) 
                                                       & (((IData)(vlSelfRef.__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp) 
                                                           | (IData)(vlSelfRef.__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp)) 
                                                          | ((IData)(vlSelfRef.__PVT__itis_prelastresp_ph3_wr_nosnp) 
                                                             & (IData)(vlSelfRef.__PVT__origreq_expcompack_bit_resp_ph3)))) 
                                                      & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL) 
                                                           | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                          | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                         | (IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3)))
                                                      ? (IData)(vlSelfRef.__PVT__comp_resperr_ph3)
                                                      : 
                                                     (((IData)(vlSelfRef.__PVT__wren_outcompfifo) 
                                                       & ((IData)(vlSelfRef.__PVT__live_RespErr_active) 
                                                          | (IData)(vlSelfRef.__PVT__origreq_excl_ld_nonsnp_ph3)))
                                                       ? 
                                                      VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x35U, 2)
                                                       : 
                                                      (((IData)(vlSelfRef.__PVT__wren_outcompfifo) 
                                                        & (IData)(vlSelfRef.__PVT__cmdq_src1_ph3))
                                                        ? (IData)(vlSelfRef.__PVT__cmd_ph3_dat_resperr)
                                                        : (IData)(vlSelfRef.__PVT__first_RespErr_ph3))))))));
    VL_ASSIGNSEL_WI(181,9,0xacU, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(9,5,4, VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__final_compcmo_resperr_ph3), (IData)(vlSelfRef.__PVT__origreq_got_copybackwrdata_invalid)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__send_compcmo_wrcmo), (IData)(vlSelfRef.__PVT__send_comp_wrcmo))), 
                                  VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wrcmo), (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_noncachealbe_wrdat_ph3_wrcmo)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo), (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo)))));
    VL_ASSIGNSEL_WI(181,4,0xa8U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__origreq_got_snpresp_ic), (IData)(vlSelfRef.__PVT__origreq_got_mem_data)), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_cmo), (IData)(vlSelfRef.__PVT__itis_prelastresp_write_comp_ph3_cmo))));
    VL_ASSIGNSEL_WI(181,7,0xa1U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(7,1,6, (IData)(vlSelfRef.__PVT__itis_prelastresp_write_dbid_ph3_cmo), 
                                  VL_CONCAT_III(6,1,5, (IData)(vlSelfRef.__PVT__itis_prelastresp_write_compdbid_ph3_cmo), 
                                                VL_CONCAT_III(5,1,4, (IData)(vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo), (IData)(vlSelfRef.__PVT__origreq_memattr_ph3)))));
    VL_ASSIGNSEL_WI(181,4,0x9dU, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(4,1,3, (IData)(vlSelfRef.__PVT__origreq_ns_ph3), 
                                  VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__itis_wrnosnp_send_wr_data_ph3), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_lastresp_dataless_xfr_tomem_ph3), (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wr_invalid_addr)))));
    VL_ASSIGNSEL_WI(181,4,0x99U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_prelastresp_dataless_xfr_tomem_ph3), (IData)(vlSelfRef.__PVT__itis_lastresp_dataless_snpdataptl_ph3)), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__cmd_ph3_apply_dmt_rsp), (IData)(vlSelfRef.__PVT__cmd_ph3_snprespfwded_dct_rsp))));
    VL_ASSIGNSEL_WI(181,6,0x93U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(6,1,5, (IData)(vlSelfRef.__PVT__cmd_ph3_snprespdatafwded_dct_rsp), 
                                  VL_CONCAT_III(5,3,2, (IData)(vlSelfRef.__PVT__origreq_size_ph3), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__origreq_excl_ph3), (IData)(vlSelfRef.__PVT__itis_req_retry_pcrdmatch_ph3)))));
    VL_ASSIGNSEL_WI(181,7,0x8cU, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(7,1,6, (IData)(vlSelfRef.__PVT__was_prelastresp_atom_wr_result_p1_ph3), 
                                  VL_CONCAT_III(6,1,5, (IData)(vlSelfRef.__PVT__itis_lastresp_nonsnp_excl_store_fail_ph3), 
                                                VL_EXTEND_II(5,1, (IData)(vlSelfRef.__PVT__was_prelastresp_wr_uniq_ptl_ph3)))));
    VL_ASSIGNSEL_WI(181,8,0x84U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(8,4,4, VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_stage2_atmo_rsp_ptl_ph3), (IData)(vlSelfRef.__PVT__itis_prelastresp_atom_wr_result_p1_ph3)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_rsp_ph3), (IData)(vlSelfRef.__PVT__itis_lastresp_comp_ph3_wr_nosnp))), 
                                  VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp), (IData)(vlSelfRef.__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_prelastresp_ph3_wr_nosnp), (IData)(vlSelfRef.__PVT__origreq_cacheable_bit_ph3)))));
    VL_ASSIGNSEL_WI(181,8,0x7cU, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.__PVT__dat_opcode_write_data_ph3), 
                                  VL_CONCAT_III(4,2,2, (IData)(vlSelfRef.__PVT__RespErr_ph3), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__origreq_invalid_addr), (IData)(vlSelfRef.__PVT__itis_atom_clr_buff_ph3)))));
    VL_ASSIGNSEL_WI(181,4,0x78U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, 
                                                       (1U 
                                                        & VL_BITSEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x6cU)), (IData)(vlSelfRef.__PVT__itis_atom_ini_data_ph3)), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_atom_res_data_ph3), (IData)(vlSelfRef.__PVT__itis_prelastresp_atom_wr_result_p2_ph3_comp_is_last))));
    VL_ASSIGNSEL_WI(181,3,0x75U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__itis_lastresp_atom_wr_result_p2_ph3_comp_is_last), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_atom_comp_rsp_ph3), 
                                                ((IData)(vlSelfRef.__PVT__itis_stage2_atmo_rsp_ph3) 
                                                 | (IData)(vlSelfRef.__PVT__origreq_got_snpptldata_ic)))));
    VL_ASSIGNSEL_WI(181,8,0x6dU, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(8,4,4, VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_atom_init_data_ph3), (IData)(vlSelfRef.__PVT__itis_atom_txn_data_ph3)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3), (IData)(vlSelfRef.__PVT__origreq_invalidate_ph3))), 
                                  VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__pkt_forwarded_bit_mem_ph3), (IData)(vlSelfRef.__PVT__pkt_forwarded_bit_snp_ph3)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__got_compack_ph3), (IData)(vlSelfRef.__PVT__pd_bit_ph3)))));
    VL_ASSIGNSEL_WQ(181,36,0x49U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_QII(36,12,24, (IData)(vlSelfRef.__PVT__dbid_from_slc_ph3), 
                                  VL_CONCAT_III(24,12,12, (IData)(vlSelfRef.__PVT__dbid_from_slavemem_ph3), 
                                                VL_CONCAT_III(12,11,1, (IData)(vlSelfRef.__PVT__origreq_tgt_id_ph3), (IData)(vlSelfRef.__PVT__origreq_got_snpptldata_ic)))));
    VL_ASSIGNSEL_WI(181,12,0x3dU, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(12,1,11, (IData)(vlSelfRef.__PVT__origreq_reqid_matches_ownerpid_ph3), 
                                  VL_CONCAT_III(11,7,4, (IData)(vlSelfRef.__PVT__origreq_opcode_ph3), 
                                                VL_CONCAT_III(4,3,1, (IData)(vlSelfRef.__PVT__orig_cachest_ph3), (IData)(vlSelfRef.__PVT__orig_wr_evict_full_ph3)))));
    VL_ASSIGNSEL_WI(181,13,0x30U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(13,4,9, VL_CONCAT_III(4,2,2, 
                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_outcompfifo_wr_all), (IData)(vlSelfRef.__PVT__itis_finalcompack)), 
                                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__drop_write_data_to_slc), (IData)(vlSelfRef.__PVT__read_notsd_has_data_to_mem))), 
                                  VL_CONCAT_III(9,3,6, 
                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__origreq_expcompack_bit_resp_ph3), (IData)(vlSelfRef.__PVT__origreq_order_ph3)), 
                                                VL_CONCAT_III(6,5,1, (IData)(vlSelfRef.__PVT__outcompfifo_index_2nd), (IData)(vlSelfRef.__PVT__origreq_no_dataxfr)))));
    VL_ASSIGNSEL_WI(181,9,0x27U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_III(9,2,7, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__orig_cachest_uc_ph3), (IData)(vlSelfRef.__PVT__origreq_got_snpdata_ic)), 
                                  VL_CONCAT_III(7,6,1, (IData)(vlSelfRef.__PVT__pendingq_index_resp_ph3), 0U)));
    VL_ASSIGNSEL_WQ(181,39,0U, vlSelfRef.__PVT__wrdata_outcompfifo, 
                    VL_CONCAT_QII(39,9,30, VL_CONCAT_III(9,2,7, 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__origreq_need_dataxfr_tomm), (IData)(vlSelfRef.__PVT__origreq_mayneed_dataxfr_tomm)), 
                                                         VL_CONCAT_III(7,5,2, (IData)(vlSelfRef.__PVT__outcompfifo_index), (IData)(vlSelfRef.__PVT__origreq_ccid_ph3))), 
                                  VL_CONCAT_III(30,15,15, 
                                                VL_CONCAT_III(15,3,12, (IData)(vlSelfRef.__PVT__resp_outcompdata_resp), (IData)(vlSelfRef.__PVT__origreq_txnid_ph3)), 
                                                VL_CONCAT_III(15,11,4, (IData)(vlSelfRef.__PVT__origreq_src_id_ph3), (IData)(vlSelfRef.__PVT__origreq_qos_ph3)))));
    if (((IData)(vlSelfRef.__PVT__itis_req_retry_pcrdmatch_ph3) 
         | (IData)(vlSelfRef.__PVT__retryack_match))) {
        VL_ASSIGNSEL_WI(181,4,0x8dU, vlSelfRef.__PVT__wrdata_outcompfifo, 
                        (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)));
        VL_ASSIGNBIT_WI(0x27U, vlSelfRef.__PVT__wrdata_outcompfifo, 0U);
    } else {
        VL_ASSIGNBIT_WI(0x27U, vlSelfRef.__PVT__wrdata_outcompfifo, vlSelfRef.__PVT__origreq_need_dataxfr_toic);
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__8(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cc_inactive_st_nxt = vlSelfRef.__PVT__cc_inactive_st;
    vlSelfRef.__PVT__inactive_ctr_nxt = 0U;
    vlSelfRef.__PVT__cc_is_inactive_nxt = vlSelfRef.__PVT__cc_is_inactive;
    if ((0U == (IData)(vlSelfRef.__PVT__cc_inactive_st))) {
        if (vlSelfRef.__PVT__outstand_cmd_invalid_allones) {
            vlSelfRef.__PVT__inactive_ctr_nxt = 0U;
            vlSelfRef.__PVT__cc_inactive_st_nxt = 1U;
        } else {
            vlSelfRef.__PVT__cc_is_inactive_nxt = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__cc_inactive_st))) {
        if (vlSelfRef.__PVT__outstand_cmd_invalid_allones) {
            if ((0x64U == (IData)(vlSelfRef.__PVT__inactive_ctr))) {
                vlSelfRef.__PVT__cc_inactive_st_nxt = 2U;
                vlSelfRef.__PVT__cc_is_inactive_nxt = 1U;
            } else {
                vlSelfRef.__PVT__inactive_ctr_nxt = 
                    (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__inactive_ctr)));
            }
        } else {
            vlSelfRef.__PVT__cc_inactive_st_nxt = 0U;
            vlSelfRef.__PVT__cc_is_inactive_nxt = 0U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__cc_inactive_st))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__outstand_cmd_invalid_allones)))) {
            vlSelfRef.__PVT__cc_inactive_st_nxt = 0U;
            vlSelfRef.__PVT__cc_is_inactive_nxt = 0U;
        }
    } else {
        vlSelfRef.__PVT__cc_inactive_st_nxt = vlSelfRef.__PVT__cc_inactive_st;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__10(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__noncm_homeaddr_base_pm = vlSelfRef.__PVT__noncm_homeaddr_base_all_pm;
    vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_base_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__11(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__noncm_activated_pm = (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0x1cU));
    vlSelfRef.__PVT__noncm_homeaddr_limit_pm = (0x1fffffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_EXTEND_II(29,28, 
                                                                (0xfffffffU 
                                                                 & VL_SEL_IIII(29, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0U, 28)))));
    vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__12(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cm_homeaddr_base_pm = vlSelfRef.__PVT__cm_homeaddr_base_all_pm;
    vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm = vlSelfRef.__PVT__cm_homeaddr_base_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__13(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_detected_cmq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_cmq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 6U, 46)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_detected_cmq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 1U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_cmq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x3aU, 46)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_detected_cmq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 2U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_cmq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x6eU, 46)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_detected_cmq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 3U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_cmq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0xa2U, 46)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_detected_cmq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 4U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_cmq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0xd6U, 46)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_detected_cmq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 5U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_cmq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x10aU, 46)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_detected_cmq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 6U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_cmq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x13eU, 46)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_detected_cmq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 7U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_cmq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x172U, 46)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__highest_seq_cmq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_cmq), 0U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0U, 3)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__highest_seq_cmq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_cmq), 1U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 3U, 3)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__highest_seq_cmq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_cmq), 2U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 6U, 3)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__highest_seq_cmq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_cmq), 3U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 9U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__highest_seq_cmq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_cmq), 4U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xcU, 3)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__highest_seq_cmq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_cmq), 5U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xfU, 3)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__highest_seq_cmq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_cmq), 6U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x12U, 3)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__highest_seq_cmq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_cmq), 7U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x15U, 3)))));
    vlSelfRef.__PVT__blockcmq_dueto_highestseqnum_incollnq 
        = (0U != (IData)(vlSelfRef.__PVT__highest_seq_cmq_is3_or_more));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__14(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__14\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cm_activated_pm = (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0x1cU));
    vlSelfRef.__PVT__cm_homeaddr_limit_pm = (0x1fffffffU 
                                             & ((IData)(1U) 
                                                + VL_EXTEND_II(29,28, 
                                                               (0xfffffffU 
                                                                & VL_SEL_IIII(29, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0U, 28)))));
    vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm = vlSelfRef.__PVT__cm_homeaddr_limit_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__15(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__15\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__index_pendingq_clr_outstand_cmd 
        = (VL_REDOR_I(vlSelfRef.__PVT__clr_outstand_cmd_compdata)
            ? (IData)(vlSelfRef.__PVT__index_pendingq_clr_outstand_cmd_compdata)
            : (VL_REDOR_I(vlSelfRef.__PVT__clr_outstand_cmd_snpreq)
                ? (IData)(vlSelfRef.__PVT__index_pendingq_clr_outstand_cmd_snpreq)
                : 0U));
    vlSelfRef.__PVT__clr_outstand_cmd = (VL_REDOR_I(vlSelfRef.__PVT__clr_outstand_cmd_compdata)
                                          ? vlSelfRef.__PVT__clr_outstand_cmd_compdata
                                          : (VL_REDOR_I(vlSelfRef.__PVT__clr_outstand_cmd_snpreq)
                                              ? vlSelfRef.__PVT__clr_outstand_cmd_snpreq
                                              : 0U));
    vlSelfRef.__PVT__en_clr_collnreg_nxt = (((0U != vlSelfRef.__PVT__clr_outstand_cmd) 
                                             & (~ (IData)(vlSelfRef.__PVT__clr_collnreg_sending_ini_compdata))) 
                                            & (~ (IData)(vlSelfRef.__PVT__avoid_clr_colln_snpreq)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__16(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__16\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nodeid_pm_2d = vlSelfRef.__PVT__xy_coord_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__17(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__17\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__block_b2b_resp = (((IData)(vlSelfRef.__PVT__block_b2b_resp_respcmdq) 
                                        | (IData)(vlSelfRef.__PVT__block_b2b_resp_memrespcmdq)) 
                                       | (IData)(vlSelfRef.__PVT__block_b2b_resp_drespcmdq));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__18(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__18\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__excl_load_reqv = (((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                          & (IData)(vlSelfRef.__PVT__orig_read_nosnp_ph3)) 
                                         & (~ (IData)(vlSelfRef.__PVT__buffer_full))) 
                                        & (IData)(vlSelfRef.__PVT__origreq_excl_ph3)) 
                                       & (1U == (IData)(vlSelfRef.__PVT__RespErr_ph3)));
    vlSelfRef.__PVT__excl_load_srcid = ((IData)(vlSelfRef.__PVT__excl_load_reqv)
                                         ? (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)
                                         : 0U);
    vlSelfRef.__PVT__excl_load_lpid = ((IData)(vlSelfRef.__PVT__excl_load_reqv)
                                        ? (IData)(vlSelfRef.__PVT__origreq_lpid_ph3)
                                        : 0U);
    vlSelfRef.__PVT__excl_load_size = ((IData)(vlSelfRef.__PVT__excl_load_reqv)
                                        ? (IData)(vlSelfRef.__PVT__origreq_size_ph3)
                                        : 0U);
    vlSelfRef.__PVT__excl_load_addr = (0x3fffffffffffULL 
                                       & ((IData)(vlSelfRef.__PVT__excl_load_reqv)
                                           ? ((0x67fU 
                                               >= (0x7ffU 
                                                   & ((IData)(6U) 
                                                      + 
                                                      VL_SEL_IIII(32, 
                                                                  ((IData)(0x34U) 
                                                                   * 
                                                                   VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__pendingq_index_resp_ph3), 0U, 5)))), 0U, 11))))
                                               ? VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 
                                                             (0x7ffU 
                                                              & ((IData)(6U) 
                                                                 + 
                                                                 VL_SEL_IIII(32, 
                                                                             ((IData)(0x34U) 
                                                                              * 
                                                                              VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__pendingq_index_resp_ph3), 0U, 5)))), 0U, 11))), 46)
                                               : 0ULL)
                                           : 0ULL));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__19(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__19\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    CData/*31:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_17;
    CData/*31:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_22;
    CData/*31:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_25;
    VlWide<4>/*127:0*/ __Vtemp_26;
    VlWide<4>/*127:0*/ __Vtemp_27;
    CData/*31:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_30;
    VlWide<4>/*127:0*/ __Vtemp_31;
    VlWide<4>/*127:0*/ __Vtemp_32;
    CData/*31:0*/ __Vtemp_33;
    VlWide<4>/*127:0*/ __Vtemp_34;
    VlWide<4>/*127:0*/ __Vtemp_35;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_37;
    CData/*31:0*/ __Vtemp_38;
    VlWide<4>/*127:0*/ __Vtemp_39;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_41;
    VlWide<4>/*127:0*/ __Vtemp_42;
    CData/*31:0*/ __Vtemp_43;
    VlWide<4>/*127:0*/ __Vtemp_44;
    VlWide<4>/*127:0*/ __Vtemp_45;
    VlWide<4>/*127:0*/ __Vtemp_46;
    VlWide<4>/*127:0*/ __Vtemp_47;
    CData/*31:0*/ __Vtemp_48;
    VlWide<4>/*127:0*/ __Vtemp_49;
    VlWide<4>/*127:0*/ __Vtemp_50;
    VlWide<4>/*127:0*/ __Vtemp_51;
    VlWide<4>/*127:0*/ __Vtemp_52;
    CData/*31:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_55;
    VlWide<4>/*127:0*/ __Vtemp_56;
    VlWide<4>/*127:0*/ __Vtemp_57;
    CData/*31:0*/ __Vtemp_58;
    VlWide<4>/*127:0*/ __Vtemp_59;
    VlWide<4>/*127:0*/ __Vtemp_60;
    VlWide<4>/*127:0*/ __Vtemp_61;
    VlWide<4>/*127:0*/ __Vtemp_62;
    CData/*31:0*/ __Vtemp_63;
    VlWide<4>/*127:0*/ __Vtemp_64;
    VlWide<4>/*127:0*/ __Vtemp_65;
    VlWide<4>/*127:0*/ __Vtemp_66;
    VlWide<4>/*127:0*/ __Vtemp_67;
    CData/*31:0*/ __Vtemp_68;
    VlWide<4>/*127:0*/ __Vtemp_69;
    VlWide<4>/*127:0*/ __Vtemp_70;
    VlWide<4>/*127:0*/ __Vtemp_71;
    VlWide<4>/*127:0*/ __Vtemp_72;
    CData/*31:0*/ __Vtemp_73;
    VlWide<4>/*127:0*/ __Vtemp_74;
    VlWide<4>/*127:0*/ __Vtemp_75;
    VlWide<4>/*127:0*/ __Vtemp_76;
    VlWide<4>/*127:0*/ __Vtemp_77;
    CData/*31:0*/ __Vtemp_78;
    VlWide<4>/*127:0*/ __Vtemp_79;
    VlWide<4>/*127:0*/ __Vtemp_80;
    VlWide<4>/*127:0*/ __Vtemp_81;
    VlWide<4>/*127:0*/ __Vtemp_82;
    CData/*31:0*/ __Vtemp_83;
    VlWide<4>/*127:0*/ __Vtemp_84;
    VlWide<4>/*127:0*/ __Vtemp_85;
    VlWide<4>/*127:0*/ __Vtemp_86;
    VlWide<4>/*127:0*/ __Vtemp_87;
    CData/*31:0*/ __Vtemp_88;
    VlWide<4>/*127:0*/ __Vtemp_89;
    VlWide<4>/*127:0*/ __Vtemp_90;
    VlWide<4>/*127:0*/ __Vtemp_91;
    VlWide<4>/*127:0*/ __Vtemp_92;
    CData/*31:0*/ __Vtemp_93;
    VlWide<4>/*127:0*/ __Vtemp_94;
    VlWide<4>/*127:0*/ __Vtemp_95;
    VlWide<4>/*127:0*/ __Vtemp_96;
    VlWide<4>/*127:0*/ __Vtemp_97;
    CData/*31:0*/ __Vtemp_98;
    VlWide<4>/*127:0*/ __Vtemp_99;
    VlWide<4>/*127:0*/ __Vtemp_100;
    VlWide<4>/*127:0*/ __Vtemp_101;
    VlWide<4>/*127:0*/ __Vtemp_102;
    CData/*31:0*/ __Vtemp_103;
    VlWide<4>/*127:0*/ __Vtemp_104;
    VlWide<4>/*127:0*/ __Vtemp_105;
    VlWide<4>/*127:0*/ __Vtemp_106;
    VlWide<4>/*127:0*/ __Vtemp_107;
    CData/*31:0*/ __Vtemp_108;
    VlWide<4>/*127:0*/ __Vtemp_109;
    VlWide<4>/*127:0*/ __Vtemp_110;
    VlWide<4>/*127:0*/ __Vtemp_111;
    VlWide<4>/*127:0*/ __Vtemp_112;
    CData/*31:0*/ __Vtemp_113;
    VlWide<4>/*127:0*/ __Vtemp_114;
    VlWide<4>/*127:0*/ __Vtemp_115;
    VlWide<4>/*127:0*/ __Vtemp_116;
    VlWide<4>/*127:0*/ __Vtemp_117;
    CData/*31:0*/ __Vtemp_118;
    VlWide<4>/*127:0*/ __Vtemp_119;
    VlWide<4>/*127:0*/ __Vtemp_120;
    VlWide<4>/*127:0*/ __Vtemp_121;
    VlWide<4>/*127:0*/ __Vtemp_122;
    CData/*31:0*/ __Vtemp_123;
    VlWide<4>/*127:0*/ __Vtemp_124;
    VlWide<4>/*127:0*/ __Vtemp_125;
    VlWide<4>/*127:0*/ __Vtemp_126;
    VlWide<4>/*127:0*/ __Vtemp_127;
    CData/*31:0*/ __Vtemp_128;
    VlWide<4>/*127:0*/ __Vtemp_129;
    VlWide<4>/*127:0*/ __Vtemp_130;
    VlWide<4>/*127:0*/ __Vtemp_131;
    VlWide<4>/*127:0*/ __Vtemp_132;
    CData/*31:0*/ __Vtemp_133;
    VlWide<4>/*127:0*/ __Vtemp_134;
    VlWide<4>/*127:0*/ __Vtemp_135;
    VlWide<4>/*127:0*/ __Vtemp_136;
    VlWide<4>/*127:0*/ __Vtemp_137;
    CData/*31:0*/ __Vtemp_138;
    VlWide<4>/*127:0*/ __Vtemp_139;
    VlWide<4>/*127:0*/ __Vtemp_140;
    VlWide<4>/*127:0*/ __Vtemp_141;
    VlWide<4>/*127:0*/ __Vtemp_142;
    CData/*31:0*/ __Vtemp_143;
    VlWide<4>/*127:0*/ __Vtemp_144;
    VlWide<4>/*127:0*/ __Vtemp_145;
    VlWide<4>/*127:0*/ __Vtemp_146;
    VlWide<4>/*127:0*/ __Vtemp_147;
    CData/*31:0*/ __Vtemp_148;
    VlWide<4>/*127:0*/ __Vtemp_149;
    VlWide<4>/*127:0*/ __Vtemp_150;
    VlWide<4>/*127:0*/ __Vtemp_151;
    VlWide<4>/*127:0*/ __Vtemp_152;
    CData/*31:0*/ __Vtemp_153;
    VlWide<4>/*127:0*/ __Vtemp_154;
    VlWide<4>/*127:0*/ __Vtemp_155;
    VlWide<4>/*127:0*/ __Vtemp_156;
    VlWide<4>/*127:0*/ __Vtemp_157;
    CData/*31:0*/ __Vtemp_158;
    VlWide<4>/*127:0*/ __Vtemp_159;
    VlWide<4>/*127:0*/ __Vtemp_160;
    // Body
    vlSelfRef.__PVT__pshare_forsnp_ph4 = (0x1fU & (
                                                   (1U 
                                                    & (((2U 
                                                         == (IData)(vlSelfRef.__PVT__req_atmo_ph4)) 
                                                        | (~ (IData)(vlSelfRef.__PVT__reqid_matches_sharevec_ph4))) 
                                                       | (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph4)))
                                                    ? (IData)(vlSelfRef.__PVT__pshare_ph4)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__pshare_ph4) 
                                                    - (IData)(1U))));
    vlSelfRef.__PVT__new_snpresp_cnt_req_ph4 = 0U;
    if (((IData)(vlSelfRef.__PVT__req_is_read_ocs_notsd_ph4) 
         & ((IData)(vlSelfRef.__PVT__req_st_invalid_ph4) 
            | (5U == (IData)(vlSelfRef.__PVT__req_cache_st_ph4))))) {
        vlSelfRef.__PVT__new_snpresp_cnt_req_ph4 = 0U;
    } else if (((IData)(vlSelfRef.__PVT__req_is_read_ocs_notsd_ph4) 
                & (1U == (IData)(vlSelfRef.__PVT__req_cache_st_ph4)))) {
        vlSelfRef.__PVT__new_snpresp_cnt_req_ph4 = vlSelfRef.__PVT__pshare_forsnp_ph4;
    } else if (((((((IData)(vlSelfRef.__PVT__req_is_clean_s_ph4) 
                    & (IData)(vlSelfRef.__PVT__snpattr_req_ph4)) 
                   | (IData)(vlSelfRef.__PVT__req_is_wrbackfl_clean_s_ph4)) 
                  | (IData)(vlSelfRef.__PVT__req_is_wrcleanfl_clean_s_ph4)) 
                 & (IData)(vlSelfRef.__PVT__req_st_dirty_ph4)) 
                & (~ (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph4)))) {
        vlSelfRef.__PVT__new_snpresp_cnt_req_ph4 = 1U;
    } else if ((((((IData)(vlSelfRef.__PVT__req_is_clean_s_ph4) 
                   & (IData)(vlSelfRef.__PVT__snpattr_req_ph4)) 
                  | (IData)(vlSelfRef.__PVT__req_is_wrbackfl_clean_s_ph4)) 
                 | (IData)(vlSelfRef.__PVT__req_is_wrcleanfl_clean_s_ph4)) 
                & (1U == (IData)(vlSelfRef.__PVT__req_cache_st_ph4)))) {
        vlSelfRef.__PVT__new_snpresp_cnt_req_ph4 = vlSelfRef.__PVT__pshare_forsnp_ph4;
    } else if ((((IData)(vlSelfRef.__PVT__req_is_read_ocs_notsd_ph4) 
                 & (IData)(vlSelfRef.__PVT__req_st_dirty_ph4)) 
                & (~ (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph4)))) {
        vlSelfRef.__PVT__new_snpresp_cnt_req_ph4 = 1U;
    } else if (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph4) 
                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph4)) 
                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph4)) 
                  | (IData)(vlSelfRef.__PVT__req_is_wrbackfl_clean_i_ph4)) 
                 | ((IData)(vlSelfRef.__PVT__req_is_dataless_ph4) 
                    & (IData)(vlSelfRef.__PVT__snpattr_req_ph4))) 
                & (IData)(vlSelfRef.__PVT__req_st_valid_ph4))) {
        vlSelfRef.__PVT__new_snpresp_cnt_req_ph4 = vlSelfRef.__PVT__pshare_forsnp_ph4;
    } else if (vlSelfRef.__PVT__req_is_wr_uniq_ph4) {
        vlSelfRef.__PVT__new_snpresp_cnt_req_ph4 = vlSelfRef.__PVT__pshare_forsnp_ph4;
    } else if (((0U != (IData)(vlSelfRef.__PVT__req_atmo_ph4)) 
                & (IData)(vlSelfRef.__PVT__snpattr_req_ph4))) {
        vlSelfRef.__PVT__new_snpresp_cnt_req_ph4 = vlSelfRef.__PVT__pshare_forsnp_ph4;
    } else if (vlSelfRef.__PVT__cmdis_invalidate_ph4) {
        vlSelfRef.__PVT__new_snpresp_cnt_req_ph4 = vlSelfRef.__PVT__pshare_forsnp_ph4;
    }
    VL_ASSIGNSEL_WI(108,32,0U, vlSelfRef.__PVT__wrdata_stat_req_ph4, 
                    VL_CONCAT_III(32,12,20, (0xfffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x1aU, 12)), 
                                  VL_CONCAT_III(20,11,9, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0xfU, 11)), 
                                                VL_CONCAT_III(9,7,2, 
                                                              (0x7fU 
                                                               & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)), 
                                                              (3U 
                                                               & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x4cU, 2))))));
    VL_ASSIGNSEL_WI(108,19,0x20U, vlSelfRef.__PVT__wrdata_stat_req_ph4, 
                    VL_CONCAT_III(19,6,13, VL_CONCAT_III(6,4,2, 
                                                         (0xfU 
                                                          & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0U, 4)), 
                                                         VL_CONCAT_III(2,1,1, 
                                                                       (1U 
                                                                        & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x89U)), 
                                                                       (1U 
                                                                        & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x87U)))), 
                                  VL_CONCAT_III(13,11,2, (IData)(vlSelfRef.__PVT__tgt_id_ph4), 
                                                (3U 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x7fU, 2)))));
    VL_ASSIGNSEL_WI(108,19,0x33U, vlSelfRef.__PVT__wrdata_stat_req_ph4, 
                    VL_CONCAT_III(19,5,14, (IData)(vlSelfRef.__PVT__new_snpresp_cnt_req_ph4), 
                                  VL_CONCAT_III(14,5,9, (IData)(vlSelfRef.__PVT__pshare_ph4), 
                                                VL_CONCAT_III(9,3,6, (IData)(vlSelfRef.__PVT__req_cache_st_ph4), (IData)(vlSelfRef.__PVT__wrindex_req_ph4)))));
    VL_ASSIGNSEL_WI(108,20,0x46U, vlSelfRef.__PVT__wrdata_stat_req_ph4, 
                    VL_CONCAT_III(20,10,10, VL_CONCAT_III(10,4,6, 
                                                          (0xfU 
                                                           & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x85U, 4)), 
                                                          VL_CONCAT_III(6,1,5, 
                                                                        (1U 
                                                                         & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x7cU)), 
                                                                        (0x1fU 
                                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x8aU, 5)))), 
                                  VL_CONCAT_III(10,3,7, 
                                                VL_CONCAT_III(3,1,2, 
                                                              (1U 
                                                               & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x92U)), 
                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__excl_pass_ph4), (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph4))), 
                                                VL_CONCAT_III(7,4,3, 
                                                              VL_CONCAT_III(4,3,1, 
                                                                            (7U 
                                                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x45U, 3)), (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph4)), 
                                                              VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__reqid_matches_sharevec_ph4), 
                                                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph4), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x93U))))))));
    VL_ASSIGNSEL_WI(108,18,0x5aU, vlSelfRef.__PVT__wrdata_stat_req_ph4, 
                    VL_CONCAT_III(18,16,2, (IData)(vlSelfRef.__PVT__cachehit_vector_ph4), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__cmd_ph4_nonexcl_read_dct_req), (IData)(vlSelfRef.__PVT__cmd_ph4_apply_dmt_req))));
    VL_CONST_W_4X(128,__Vtemp_1,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_2, vlSelfRef.__PVT__status_field_req, 0U, 108);
    __Vtemp_3 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                 & (0U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_4, __Vtemp_3, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_2);
    VL_AND_W(4, __Vtemp_5, __Vtemp_1, __Vtemp_4);
    VL_ASSIGNSEL_WW(3456,108,0U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_5);
    VL_CONST_W_4X(128,__Vtemp_6,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_7, vlSelfRef.__PVT__status_field_req, 0x6cU, 108);
    __Vtemp_8 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                 & (1U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_9, __Vtemp_8, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_7);
    VL_AND_W(4, __Vtemp_10, __Vtemp_6, __Vtemp_9);
    VL_ASSIGNSEL_WW(3456,108,0x6cU, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_10);
    VL_CONST_W_4X(128,__Vtemp_11,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_12, vlSelfRef.__PVT__status_field_req, 0xd8U, 108);
    __Vtemp_13 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (2U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_12);
    VL_AND_W(4, __Vtemp_15, __Vtemp_11, __Vtemp_14);
    VL_ASSIGNSEL_WW(3456,108,0xd8U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_15);
    VL_CONST_W_4X(128,__Vtemp_16,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_17, vlSelfRef.__PVT__status_field_req, 0x144U, 108);
    __Vtemp_18 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (3U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_19, __Vtemp_18, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_17);
    VL_AND_W(4, __Vtemp_20, __Vtemp_16, __Vtemp_19);
    VL_ASSIGNSEL_WW(3456,108,0x144U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_20);
    VL_CONST_W_4X(128,__Vtemp_21,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_22, vlSelfRef.__PVT__status_field_req, 0x1b0U, 108);
    __Vtemp_23 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (4U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_24, __Vtemp_23, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_22);
    VL_AND_W(4, __Vtemp_25, __Vtemp_21, __Vtemp_24);
    VL_ASSIGNSEL_WW(3456,108,0x1b0U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_25);
    VL_CONST_W_4X(128,__Vtemp_26,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_27, vlSelfRef.__PVT__status_field_req, 0x21cU, 108);
    __Vtemp_28 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (5U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_29, __Vtemp_28, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_27);
    VL_AND_W(4, __Vtemp_30, __Vtemp_26, __Vtemp_29);
    VL_ASSIGNSEL_WW(3456,108,0x21cU, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_30);
    VL_CONST_W_4X(128,__Vtemp_31,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_32, vlSelfRef.__PVT__status_field_req, 0x288U, 108);
    __Vtemp_33 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (6U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_34, __Vtemp_33, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_32);
    VL_AND_W(4, __Vtemp_35, __Vtemp_31, __Vtemp_34);
    VL_ASSIGNSEL_WW(3456,108,0x288U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_35);
    VL_CONST_W_4X(128,__Vtemp_36,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_37, vlSelfRef.__PVT__status_field_req, 0x2f4U, 108);
    __Vtemp_38 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (7U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_39, __Vtemp_38, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_37);
    VL_AND_W(4, __Vtemp_40, __Vtemp_36, __Vtemp_39);
    VL_ASSIGNSEL_WW(3456,108,0x2f4U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_40);
    VL_CONST_W_4X(128,__Vtemp_41,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_42, vlSelfRef.__PVT__status_field_req, 0x360U, 108);
    __Vtemp_43 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (8U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_44, __Vtemp_43, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_42);
    VL_AND_W(4, __Vtemp_45, __Vtemp_41, __Vtemp_44);
    VL_ASSIGNSEL_WW(3456,108,0x360U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_45);
    VL_CONST_W_4X(128,__Vtemp_46,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_47, vlSelfRef.__PVT__status_field_req, 0x3ccU, 108);
    __Vtemp_48 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (9U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_49, __Vtemp_48, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_47);
    VL_AND_W(4, __Vtemp_50, __Vtemp_46, __Vtemp_49);
    VL_ASSIGNSEL_WW(3456,108,0x3ccU, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_50);
    VL_CONST_W_4X(128,__Vtemp_51,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_52, vlSelfRef.__PVT__status_field_req, 0x438U, 108);
    __Vtemp_53 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (0xaU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_54, __Vtemp_53, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_52);
    VL_AND_W(4, __Vtemp_55, __Vtemp_51, __Vtemp_54);
    VL_ASSIGNSEL_WW(3456,108,0x438U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_55);
    VL_CONST_W_4X(128,__Vtemp_56,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_57, vlSelfRef.__PVT__status_field_req, 0x4a4U, 108);
    __Vtemp_58 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (0xbU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_59, __Vtemp_58, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_57);
    VL_AND_W(4, __Vtemp_60, __Vtemp_56, __Vtemp_59);
    VL_ASSIGNSEL_WW(3456,108,0x4a4U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_60);
    VL_CONST_W_4X(128,__Vtemp_61,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_62, vlSelfRef.__PVT__status_field_req, 0x510U, 108);
    __Vtemp_63 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (0xcU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_64, __Vtemp_63, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_62);
    VL_AND_W(4, __Vtemp_65, __Vtemp_61, __Vtemp_64);
    VL_ASSIGNSEL_WW(3456,108,0x510U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_65);
    VL_CONST_W_4X(128,__Vtemp_66,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_67, vlSelfRef.__PVT__status_field_req, 0x57cU, 108);
    __Vtemp_68 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (0xdU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_69, __Vtemp_68, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_67);
    VL_AND_W(4, __Vtemp_70, __Vtemp_66, __Vtemp_69);
    VL_ASSIGNSEL_WW(3456,108,0x57cU, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_70);
    VL_CONST_W_4X(128,__Vtemp_71,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_72, vlSelfRef.__PVT__status_field_req, 0x5e8U, 108);
    __Vtemp_73 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (0xeU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_74, __Vtemp_73, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_72);
    VL_AND_W(4, __Vtemp_75, __Vtemp_71, __Vtemp_74);
    VL_ASSIGNSEL_WW(3456,108,0x5e8U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_75);
    VL_CONST_W_4X(128,__Vtemp_76,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_77, vlSelfRef.__PVT__status_field_req, 0x654U, 108);
    __Vtemp_78 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (0xfU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_79, __Vtemp_78, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_77);
    VL_AND_W(4, __Vtemp_80, __Vtemp_76, __Vtemp_79);
    VL_ASSIGNSEL_WW(3456,108,0x654U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_80);
    VL_CONST_W_4X(128,__Vtemp_81,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_82, vlSelfRef.__PVT__status_field_req, 0x6c0U, 108);
    __Vtemp_83 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (0x10U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_84, __Vtemp_83, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_82);
    VL_AND_W(4, __Vtemp_85, __Vtemp_81, __Vtemp_84);
    VL_ASSIGNSEL_WW(3456,108,0x6c0U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_85);
    VL_CONST_W_4X(128,__Vtemp_86,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_87, vlSelfRef.__PVT__status_field_req, 0x72cU, 108);
    __Vtemp_88 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (0x11U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_89, __Vtemp_88, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_87);
    VL_AND_W(4, __Vtemp_90, __Vtemp_86, __Vtemp_89);
    VL_ASSIGNSEL_WW(3456,108,0x72cU, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_90);
    VL_CONST_W_4X(128,__Vtemp_91,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_92, vlSelfRef.__PVT__status_field_req, 0x798U, 108);
    __Vtemp_93 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (0x12U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_94, __Vtemp_93, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_92);
    VL_AND_W(4, __Vtemp_95, __Vtemp_91, __Vtemp_94);
    VL_ASSIGNSEL_WW(3456,108,0x798U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_95);
    VL_CONST_W_4X(128,__Vtemp_96,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_97, vlSelfRef.__PVT__status_field_req, 0x804U, 108);
    __Vtemp_98 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                  & (0x13U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_99, __Vtemp_98, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_97);
    VL_AND_W(4, __Vtemp_100, __Vtemp_96, __Vtemp_99);
    VL_ASSIGNSEL_WW(3456,108,0x804U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_100);
    VL_CONST_W_4X(128,__Vtemp_101,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_102, vlSelfRef.__PVT__status_field_req, 0x870U, 108);
    __Vtemp_103 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x14U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_104, __Vtemp_103, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_102);
    VL_AND_W(4, __Vtemp_105, __Vtemp_101, __Vtemp_104);
    VL_ASSIGNSEL_WW(3456,108,0x870U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_105);
    VL_CONST_W_4X(128,__Vtemp_106,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_107, vlSelfRef.__PVT__status_field_req, 0x8dcU, 108);
    __Vtemp_108 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x15U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_109, __Vtemp_108, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_107);
    VL_AND_W(4, __Vtemp_110, __Vtemp_106, __Vtemp_109);
    VL_ASSIGNSEL_WW(3456,108,0x8dcU, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_110);
    VL_CONST_W_4X(128,__Vtemp_111,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_112, vlSelfRef.__PVT__status_field_req, 0x948U, 108);
    __Vtemp_113 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x16U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_114, __Vtemp_113, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_112);
    VL_AND_W(4, __Vtemp_115, __Vtemp_111, __Vtemp_114);
    VL_ASSIGNSEL_WW(3456,108,0x948U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_115);
    VL_CONST_W_4X(128,__Vtemp_116,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_117, vlSelfRef.__PVT__status_field_req, 0x9b4U, 108);
    __Vtemp_118 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x17U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_119, __Vtemp_118, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_117);
    VL_AND_W(4, __Vtemp_120, __Vtemp_116, __Vtemp_119);
    VL_ASSIGNSEL_WW(3456,108,0x9b4U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_120);
    VL_CONST_W_4X(128,__Vtemp_121,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_122, vlSelfRef.__PVT__status_field_req, 0xa20U, 108);
    __Vtemp_123 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x18U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_124, __Vtemp_123, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_122);
    VL_AND_W(4, __Vtemp_125, __Vtemp_121, __Vtemp_124);
    VL_ASSIGNSEL_WW(3456,108,0xa20U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_125);
    VL_CONST_W_4X(128,__Vtemp_126,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_127, vlSelfRef.__PVT__status_field_req, 0xa8cU, 108);
    __Vtemp_128 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x19U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_129, __Vtemp_128, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_127);
    VL_AND_W(4, __Vtemp_130, __Vtemp_126, __Vtemp_129);
    VL_ASSIGNSEL_WW(3456,108,0xa8cU, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_130);
    VL_CONST_W_4X(128,__Vtemp_131,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_132, vlSelfRef.__PVT__status_field_req, 0xaf8U, 108);
    __Vtemp_133 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x1aU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_134, __Vtemp_133, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_132);
    VL_AND_W(4, __Vtemp_135, __Vtemp_131, __Vtemp_134);
    VL_ASSIGNSEL_WW(3456,108,0xaf8U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_135);
    VL_CONST_W_4X(128,__Vtemp_136,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_137, vlSelfRef.__PVT__status_field_req, 0xb64U, 108);
    __Vtemp_138 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x1bU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_139, __Vtemp_138, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_137);
    VL_AND_W(4, __Vtemp_140, __Vtemp_136, __Vtemp_139);
    VL_ASSIGNSEL_WW(3456,108,0xb64U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_140);
    VL_CONST_W_4X(128,__Vtemp_141,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_142, vlSelfRef.__PVT__status_field_req, 0xbd0U, 108);
    __Vtemp_143 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x1cU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_144, __Vtemp_143, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_142);
    VL_AND_W(4, __Vtemp_145, __Vtemp_141, __Vtemp_144);
    VL_ASSIGNSEL_WW(3456,108,0xbd0U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_145);
    VL_CONST_W_4X(128,__Vtemp_146,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_147, vlSelfRef.__PVT__status_field_req, 0xc3cU, 108);
    __Vtemp_148 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x1dU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_149, __Vtemp_148, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_147);
    VL_AND_W(4, __Vtemp_150, __Vtemp_146, __Vtemp_149);
    VL_ASSIGNSEL_WW(3456,108,0xc3cU, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_150);
    VL_CONST_W_4X(128,__Vtemp_151,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_152, vlSelfRef.__PVT__status_field_req, 0xca8U, 108);
    __Vtemp_153 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x1eU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_154, __Vtemp_153, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_152);
    VL_AND_W(4, __Vtemp_155, __Vtemp_151, __Vtemp_154);
    VL_ASSIGNSEL_WW(3456,108,0xca8U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_155);
    VL_CONST_W_4X(128,__Vtemp_156,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_157, vlSelfRef.__PVT__status_field_req, 0xd14U, 108);
    __Vtemp_158 = ((IData)(vlSelfRef.__PVT__wren_stat_req_ph4) 
                   & (0x1fU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph4), 0U, 5))));
    VL_COND_WIWW(108, __Vtemp_159, __Vtemp_158, vlSelfRef.__PVT__wrdata_stat_req_ph4, __Vtemp_157);
    VL_AND_W(4, __Vtemp_160, __Vtemp_156, __Vtemp_159);
    VL_ASSIGNSEL_WW(3456,108,0xd14U, vlSelfRef.__PVT__status_field_req_nxt, __Vtemp_160);
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__20(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__20\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    // Body
    VL_EXTEND_WI(72,32, __Vtemp_1, VL_SEL_IWII(84, vlSelfRef.__PVT__evict_details, 0U, 32));
    VL_CONCAT_WQW(124,52,72, __Vtemp_2, (0xfffffffffffffULL 
                                         & VL_SEL_QWII(84, vlSelfRef.__PVT__evict_details, 0x20U, 52)), __Vtemp_1);
    VL_CONCAT_WIW(155,31,124, __Vtemp_3, (0x7fffffffU 
                                          & VL_SEL_IWII(155, vlSelfRef.__PVT__cm_cmd, 0x7cU, 31)), __Vtemp_2);
    VL_COND_WIWW(155, vlSelfRef.__PVT__cm_cmdvalid_evict_pre, (IData)(vlSelfRef.__PVT__cm_cmdvalid_evict), __Vtemp_3, vlSelfRef.__PVT__cm_cmd);
    VL_CONST_W_1X(151,vlSelfRef.__PVT__evict_req_s,0x00000000);
    VL_ASSIGNSEL_WQ(151,52,0x48U, vlSelfRef.__PVT__evict_req_s, 
                    (0xfffffffffffffULL & VL_SEL_QWII(84, vlSelfRef.__PVT__evict_details, 0x20U, 52)));
    VL_ASSIGNBIT_WO(0x85U, vlSelfRef.__PVT__evict_req_s);
    VL_ASSIGNBIT_WO(0x87U, vlSelfRef.__PVT__evict_req_s);
    VL_ASSIGNBIT_WO(0x89U, vlSelfRef.__PVT__evict_req_s);
    VL_CONST_W_5X(160,__Vtemp_4,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 155, __Vtemp_5, vlSelfRef.__PVT__cm_cmd, 0U, 151);
    VL_COND_WIWW(151, __Vtemp_6, (IData)(vlSelfRef.__PVT__cm_cmdvalid_evict), vlSelfRef.__PVT__evict_req_s, __Vtemp_5);
    VL_AND_W(5, vlSelfRef.__PVT__cm_cmd_s, __Vtemp_4, __Vtemp_6);
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__21(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__21\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__addr_outstandq_to_compdata = (0xfffffffffffffULL 
                                                   & ((0x67fU 
                                                       >= 
                                                       (0x7ffU 
                                                        & VL_SEL_IIII(32, 
                                                                      ((IData)(0x34U) 
                                                                       * 
                                                                       VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5)))), 0U, 11)))
                                                       ? 
                                                      VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 
                                                                  (0x7ffU 
                                                                   & VL_SEL_IIII(32, 
                                                                                ((IData)(0x34U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_compdata), 0U, 5)))), 0U, 11)), 52)
                                                       : 0ULL));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__22(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__22\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__addr_clln_clearing_nxt = (0xfffffffffffffULL 
                                               & ((0x67fU 
                                                   >= 
                                                   (0x7ffU 
                                                    & VL_SEL_IIII(32, 
                                                                  ((IData)(0x34U) 
                                                                   * 
                                                                   VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_clr_outstand_cmd), 0U, 5)))), 0U, 11)))
                                                   ? 
                                                  VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 
                                                              (0x7ffU 
                                                               & VL_SEL_IIII(32, 
                                                                             ((IData)(0x34U) 
                                                                              * 
                                                                              VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_pendingq_clr_outstand_cmd), 0U, 5)))), 0U, 11)), 52)
                                                   : 0ULL));
    VL_ASSIGNSEL_II(32,2,0U, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 1U) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 1U))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0U) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0U)))));
    VL_ASSIGNSEL_II(32,2,2U, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 3U) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 3U))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 2U) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 2U)))));
    VL_ASSIGNSEL_II(32,2,4U, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 5U) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 5U))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 4U) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 4U)))));
    VL_ASSIGNSEL_II(32,2,6U, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 7U) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 7U))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 6U) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 6U)))));
    VL_ASSIGNSEL_II(32,2,8U, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 9U) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 9U))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 8U) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 8U)))));
    VL_ASSIGNSEL_II(32,2,0xaU, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xbU) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xbU))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xaU) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xaU)))));
    VL_ASSIGNSEL_II(32,2,0xcU, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xdU) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xdU))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xcU) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xcU)))));
    VL_ASSIGNSEL_II(32,2,0xeU, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xfU) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xfU))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xeU) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xeU)))));
    VL_ASSIGNSEL_II(32,2,0x10U, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x11U) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x11U))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x10U) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x10U)))));
    VL_ASSIGNSEL_II(32,2,0x12U, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x13U) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x13U))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x12U) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x12U)))));
    VL_ASSIGNSEL_II(32,2,0x14U, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x15U) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x15U))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x14U) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x14U)))));
    VL_ASSIGNSEL_II(32,2,0x16U, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x17U) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x17U))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x16U) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x16U)))));
    VL_ASSIGNSEL_II(32,2,0x18U, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x19U) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x19U))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x18U) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x18U)))));
    VL_ASSIGNSEL_II(32,2,0x1aU, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1bU) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1bU))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1aU) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1aU)))));
    VL_ASSIGNSEL_II(32,2,0x1cU, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1dU) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1dU))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1cU) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1cU)))));
    VL_ASSIGNSEL_II(32,2,0x1eU, vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1fU) 
                                                & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1fU))), 
                                  (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1eU) 
                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1eU)))));
    vlSelfRef.__PVT__en_clr_atom_rd_collnreg_nxt = 
        VL_REDOR_I(vlSelfRef.__PVT__clr_outstand_cmd_is_atom_rd);
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__23(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__23\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cm_tgtid_pm_ph2 = 0U;
    vlSelfRef.__PVT__cm_tgt_sn_supports_dmt_ph2 = 0U;
    if (vlSelfRef.__PVT__cm_addr_match_pm_ph2) {
        vlSelfRef.__PVT__cm_tgt_sn_supports_dmt_ph2 
            = vlSelfRef.__PVT__dmt_enable_all_pm_vec;
        vlSelfRef.__PVT__cm_tgtid_pm_ph2 = vlSelfRef.__PVT__nodeid_pm_2d;
    }
    vlSelfRef.__PVT__p = 1U;
    vlSelfRef.__PVT__noncm_tgtid_pm_ph2 = 0U;
    vlSelfRef.__PVT__noncm_tgt_sn_supports_dmt_ph2 = 0U;
    if (vlSelfRef.__PVT__noncm_addr_match_pm_ph2) {
        vlSelfRef.__PVT__noncm_tgt_sn_supports_dmt_ph2 
            = vlSelfRef.__PVT__dmt_enable_all_pm_vec;
        vlSelfRef.__PVT__noncm_tgtid_pm_ph2 = vlSelfRef.__PVT__nodeid_pm_2d;
    }
    vlSelfRef.__PVT__q = 1U;
    vlSelfRef.__PVT__tgt_id_ph2 = ((1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x87U))
                                    ? (IData)(vlSelfRef.__PVT__cm_tgtid_pm_ph2)
                                    : (IData)(vlSelfRef.__PVT__noncm_tgtid_pm_ph2));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__27(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__27\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__outstand_atmo_rd_alloc_then_wr_clr_nxt 
        = ((VL_REDOR_I(vlSelfRef.__PVT__wren_outstand_cmd) 
            & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
           | ((~ VL_REDOR_I((vlSelfRef.__PVT__clr_outstand_cmd 
                             & vlSelfRef.__PVT__outstand_req_atmo_wr))) 
              & (IData)(vlSelfRef.__PVT__outstand_atmo_rd_alloc_then_wr_clr)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 1U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 2U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 3U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 4U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 5U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 6U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 7U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 8U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 9U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xaU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xbU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xcU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xdU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xeU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xfU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xfU)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x10U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x10U)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x11U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x11U)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x12U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x12U)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x13U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x13U)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x14U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x14U)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x15U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x15U)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x16U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x16U)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x17U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x17U)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x18U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x18U)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x19U) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x19U)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1aU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1aU)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1bU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1bU)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1cU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1cU)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1dU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1dU)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1eU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1eU)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__outstand_cmd_invalid_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU)) 
                           & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1fU) 
                              | VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1fU)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 1U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 1U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 1U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 2U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 2U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 2U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 3U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 3U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 3U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 4U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 4U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 4U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 5U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 5U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 5U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 6U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 6U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 6U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 7U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 7U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 7U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 8U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 8U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 8U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 9U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 9U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 9U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xaU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0xaU)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xaU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xbU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0xbU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xbU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xcU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0xcU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xcU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xdU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0xdU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xdU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xeU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0xeU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xeU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xfU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0xfU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0xfU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xfU)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x10U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x10U)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x10U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x10U)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x11U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x11U)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x11U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x11U)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x12U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x12U)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x12U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x12U)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x13U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x13U)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x13U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x13U)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x14U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x14U)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x14U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x14U)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x15U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x15U)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x15U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x15U)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x16U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x16U)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x16U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x16U)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x17U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x17U)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x17U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x17U)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x18U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x18U)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x18U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x18U)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x19U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x19U)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x19U)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x19U)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1aU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x1aU)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1aU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1aU)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1bU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x1bU)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1bU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1bU)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1cU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x1cU)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1cU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1cU)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1dU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x1dU)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1dU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1dU)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1eU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x1eU)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1eU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1eU)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__outstand_req_atmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1fU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_wr, 0x1fU)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__outstand_req_atmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_outstand_cmd, 0x1fU)) 
                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1fU)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__29(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__29\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_snpreqfifo = (((~ (IData)(vlSelfRef.__PVT__full_snpreqfifo)) 
                                         & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd)) 
                                        & ((IData)(vlSelfRef.__PVT__cmdis_req_ph3) 
                                           & (((((IData)(vlSelfRef.__PVT__req_is_anyrd_ph3) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_anywr_ph3)) 
                                                | (IData)(vlSelfRef.__PVT__req_is_writecmo_ph3)) 
                                               | (0U 
                                                  != (IData)(vlSelfRef.__PVT__req_atmo_ph3))) 
                                              | (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__31(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__31\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    CData/*31:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_7;
    CData/*31:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_12;
    VlWide<5>/*159:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_14;
    VlWide<5>/*159:0*/ __Vtemp_15;
    CData/*31:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_17;
    CData/*31:0*/ __Vtemp_18;
    VlWide<5>/*159:0*/ __Vtemp_19;
    VlWide<5>/*159:0*/ __Vtemp_20;
    VlWide<5>/*159:0*/ __Vtemp_21;
    VlWide<5>/*159:0*/ __Vtemp_22;
    VlWide<5>/*159:0*/ __Vtemp_23;
    VlWide<5>/*159:0*/ __Vtemp_24;
    VlWide<5>/*159:0*/ __Vtemp_25;
    CData/*31:0*/ __Vtemp_26;
    VlWide<5>/*159:0*/ __Vtemp_27;
    CData/*31:0*/ __Vtemp_28;
    VlWide<5>/*159:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_30;
    VlWide<5>/*159:0*/ __Vtemp_31;
    VlWide<5>/*159:0*/ __Vtemp_32;
    VlWide<5>/*159:0*/ __Vtemp_33;
    VlWide<5>/*159:0*/ __Vtemp_34;
    VlWide<5>/*159:0*/ __Vtemp_35;
    CData/*31:0*/ __Vtemp_36;
    VlWide<5>/*159:0*/ __Vtemp_37;
    CData/*31:0*/ __Vtemp_38;
    VlWide<5>/*159:0*/ __Vtemp_39;
    VlWide<5>/*159:0*/ __Vtemp_40;
    VlWide<5>/*159:0*/ __Vtemp_41;
    VlWide<5>/*159:0*/ __Vtemp_42;
    VlWide<5>/*159:0*/ __Vtemp_43;
    VlWide<5>/*159:0*/ __Vtemp_44;
    VlWide<5>/*159:0*/ __Vtemp_45;
    CData/*31:0*/ __Vtemp_46;
    VlWide<5>/*159:0*/ __Vtemp_47;
    CData/*31:0*/ __Vtemp_48;
    VlWide<5>/*159:0*/ __Vtemp_49;
    VlWide<5>/*159:0*/ __Vtemp_50;
    VlWide<5>/*159:0*/ __Vtemp_51;
    VlWide<5>/*159:0*/ __Vtemp_52;
    VlWide<5>/*159:0*/ __Vtemp_53;
    VlWide<5>/*159:0*/ __Vtemp_54;
    VlWide<5>/*159:0*/ __Vtemp_55;
    CData/*31:0*/ __Vtemp_56;
    VlWide<5>/*159:0*/ __Vtemp_57;
    CData/*31:0*/ __Vtemp_58;
    VlWide<5>/*159:0*/ __Vtemp_59;
    VlWide<5>/*159:0*/ __Vtemp_60;
    VlWide<5>/*159:0*/ __Vtemp_61;
    VlWide<5>/*159:0*/ __Vtemp_62;
    VlWide<5>/*159:0*/ __Vtemp_63;
    VlWide<5>/*159:0*/ __Vtemp_64;
    VlWide<5>/*159:0*/ __Vtemp_65;
    CData/*31:0*/ __Vtemp_66;
    VlWide<5>/*159:0*/ __Vtemp_67;
    CData/*31:0*/ __Vtemp_68;
    VlWide<5>/*159:0*/ __Vtemp_69;
    VlWide<5>/*159:0*/ __Vtemp_70;
    VlWide<5>/*159:0*/ __Vtemp_71;
    VlWide<5>/*159:0*/ __Vtemp_72;
    VlWide<5>/*159:0*/ __Vtemp_73;
    VlWide<5>/*159:0*/ __Vtemp_74;
    VlWide<5>/*159:0*/ __Vtemp_75;
    CData/*31:0*/ __Vtemp_76;
    VlWide<5>/*159:0*/ __Vtemp_77;
    CData/*31:0*/ __Vtemp_78;
    VlWide<5>/*159:0*/ __Vtemp_79;
    VlWide<5>/*159:0*/ __Vtemp_80;
    VlWide<5>/*159:0*/ __Vtemp_81;
    VlWide<5>/*159:0*/ __Vtemp_82;
    VlWide<5>/*159:0*/ __Vtemp_83;
    VlWide<5>/*159:0*/ __Vtemp_84;
    VlWide<5>/*159:0*/ __Vtemp_85;
    CData/*31:0*/ __Vtemp_86;
    VlWide<5>/*159:0*/ __Vtemp_87;
    CData/*31:0*/ __Vtemp_88;
    VlWide<5>/*159:0*/ __Vtemp_89;
    VlWide<5>/*159:0*/ __Vtemp_90;
    VlWide<5>/*159:0*/ __Vtemp_91;
    VlWide<5>/*159:0*/ __Vtemp_92;
    VlWide<5>/*159:0*/ __Vtemp_93;
    VlWide<5>/*159:0*/ __Vtemp_94;
    VlWide<5>/*159:0*/ __Vtemp_95;
    CData/*31:0*/ __Vtemp_96;
    VlWide<5>/*159:0*/ __Vtemp_97;
    CData/*31:0*/ __Vtemp_98;
    VlWide<5>/*159:0*/ __Vtemp_99;
    VlWide<5>/*159:0*/ __Vtemp_100;
    VlWide<5>/*159:0*/ __Vtemp_101;
    VlWide<5>/*159:0*/ __Vtemp_102;
    VlWide<5>/*159:0*/ __Vtemp_103;
    VlWide<5>/*159:0*/ __Vtemp_104;
    VlWide<5>/*159:0*/ __Vtemp_105;
    CData/*31:0*/ __Vtemp_106;
    VlWide<5>/*159:0*/ __Vtemp_107;
    CData/*31:0*/ __Vtemp_108;
    VlWide<5>/*159:0*/ __Vtemp_109;
    VlWide<5>/*159:0*/ __Vtemp_110;
    VlWide<5>/*159:0*/ __Vtemp_111;
    VlWide<5>/*159:0*/ __Vtemp_112;
    VlWide<5>/*159:0*/ __Vtemp_113;
    VlWide<5>/*159:0*/ __Vtemp_114;
    VlWide<5>/*159:0*/ __Vtemp_115;
    CData/*31:0*/ __Vtemp_116;
    VlWide<5>/*159:0*/ __Vtemp_117;
    CData/*31:0*/ __Vtemp_118;
    VlWide<5>/*159:0*/ __Vtemp_119;
    VlWide<5>/*159:0*/ __Vtemp_120;
    VlWide<5>/*159:0*/ __Vtemp_121;
    VlWide<5>/*159:0*/ __Vtemp_122;
    VlWide<5>/*159:0*/ __Vtemp_123;
    VlWide<5>/*159:0*/ __Vtemp_124;
    VlWide<5>/*159:0*/ __Vtemp_125;
    CData/*31:0*/ __Vtemp_126;
    VlWide<5>/*159:0*/ __Vtemp_127;
    CData/*31:0*/ __Vtemp_128;
    VlWide<5>/*159:0*/ __Vtemp_129;
    VlWide<5>/*159:0*/ __Vtemp_130;
    VlWide<5>/*159:0*/ __Vtemp_131;
    VlWide<5>/*159:0*/ __Vtemp_132;
    VlWide<5>/*159:0*/ __Vtemp_133;
    VlWide<5>/*159:0*/ __Vtemp_134;
    VlWide<5>/*159:0*/ __Vtemp_135;
    CData/*31:0*/ __Vtemp_136;
    VlWide<5>/*159:0*/ __Vtemp_137;
    CData/*31:0*/ __Vtemp_138;
    VlWide<5>/*159:0*/ __Vtemp_139;
    VlWide<5>/*159:0*/ __Vtemp_140;
    VlWide<5>/*159:0*/ __Vtemp_141;
    VlWide<5>/*159:0*/ __Vtemp_142;
    VlWide<5>/*159:0*/ __Vtemp_143;
    VlWide<5>/*159:0*/ __Vtemp_144;
    VlWide<5>/*159:0*/ __Vtemp_145;
    CData/*31:0*/ __Vtemp_146;
    VlWide<5>/*159:0*/ __Vtemp_147;
    CData/*31:0*/ __Vtemp_148;
    VlWide<5>/*159:0*/ __Vtemp_149;
    VlWide<5>/*159:0*/ __Vtemp_150;
    VlWide<5>/*159:0*/ __Vtemp_151;
    VlWide<5>/*159:0*/ __Vtemp_152;
    VlWide<5>/*159:0*/ __Vtemp_153;
    VlWide<5>/*159:0*/ __Vtemp_154;
    VlWide<5>/*159:0*/ __Vtemp_155;
    CData/*31:0*/ __Vtemp_156;
    VlWide<5>/*159:0*/ __Vtemp_157;
    CData/*31:0*/ __Vtemp_158;
    VlWide<5>/*159:0*/ __Vtemp_159;
    VlWide<5>/*159:0*/ __Vtemp_160;
    VlWide<5>/*159:0*/ __Vtemp_161;
    VlWide<5>/*159:0*/ __Vtemp_162;
    VlWide<5>/*159:0*/ __Vtemp_163;
    VlWide<5>/*159:0*/ __Vtemp_164;
    VlWide<5>/*159:0*/ __Vtemp_165;
    CData/*31:0*/ __Vtemp_166;
    VlWide<5>/*159:0*/ __Vtemp_167;
    CData/*31:0*/ __Vtemp_168;
    VlWide<5>/*159:0*/ __Vtemp_169;
    VlWide<5>/*159:0*/ __Vtemp_170;
    VlWide<5>/*159:0*/ __Vtemp_171;
    VlWide<5>/*159:0*/ __Vtemp_172;
    VlWide<5>/*159:0*/ __Vtemp_173;
    VlWide<5>/*159:0*/ __Vtemp_174;
    VlWide<5>/*159:0*/ __Vtemp_175;
    CData/*31:0*/ __Vtemp_176;
    VlWide<5>/*159:0*/ __Vtemp_177;
    CData/*31:0*/ __Vtemp_178;
    VlWide<5>/*159:0*/ __Vtemp_179;
    VlWide<5>/*159:0*/ __Vtemp_180;
    VlWide<5>/*159:0*/ __Vtemp_181;
    VlWide<5>/*159:0*/ __Vtemp_182;
    VlWide<5>/*159:0*/ __Vtemp_183;
    VlWide<5>/*159:0*/ __Vtemp_184;
    VlWide<5>/*159:0*/ __Vtemp_185;
    CData/*31:0*/ __Vtemp_186;
    VlWide<5>/*159:0*/ __Vtemp_187;
    CData/*31:0*/ __Vtemp_188;
    VlWide<5>/*159:0*/ __Vtemp_189;
    VlWide<5>/*159:0*/ __Vtemp_190;
    VlWide<5>/*159:0*/ __Vtemp_191;
    VlWide<5>/*159:0*/ __Vtemp_192;
    VlWide<5>/*159:0*/ __Vtemp_193;
    VlWide<5>/*159:0*/ __Vtemp_194;
    VlWide<5>/*159:0*/ __Vtemp_195;
    CData/*31:0*/ __Vtemp_196;
    VlWide<5>/*159:0*/ __Vtemp_197;
    CData/*31:0*/ __Vtemp_198;
    VlWide<5>/*159:0*/ __Vtemp_199;
    VlWide<5>/*159:0*/ __Vtemp_200;
    VlWide<5>/*159:0*/ __Vtemp_201;
    VlWide<5>/*159:0*/ __Vtemp_202;
    VlWide<5>/*159:0*/ __Vtemp_203;
    VlWide<5>/*159:0*/ __Vtemp_204;
    VlWide<5>/*159:0*/ __Vtemp_205;
    CData/*31:0*/ __Vtemp_206;
    VlWide<5>/*159:0*/ __Vtemp_207;
    CData/*31:0*/ __Vtemp_208;
    VlWide<5>/*159:0*/ __Vtemp_209;
    VlWide<5>/*159:0*/ __Vtemp_210;
    VlWide<5>/*159:0*/ __Vtemp_211;
    VlWide<5>/*159:0*/ __Vtemp_212;
    VlWide<5>/*159:0*/ __Vtemp_213;
    VlWide<5>/*159:0*/ __Vtemp_214;
    VlWide<5>/*159:0*/ __Vtemp_215;
    CData/*31:0*/ __Vtemp_216;
    VlWide<5>/*159:0*/ __Vtemp_217;
    CData/*31:0*/ __Vtemp_218;
    VlWide<5>/*159:0*/ __Vtemp_219;
    VlWide<5>/*159:0*/ __Vtemp_220;
    VlWide<5>/*159:0*/ __Vtemp_221;
    VlWide<5>/*159:0*/ __Vtemp_222;
    VlWide<5>/*159:0*/ __Vtemp_223;
    VlWide<5>/*159:0*/ __Vtemp_224;
    VlWide<5>/*159:0*/ __Vtemp_225;
    CData/*31:0*/ __Vtemp_226;
    VlWide<5>/*159:0*/ __Vtemp_227;
    CData/*31:0*/ __Vtemp_228;
    VlWide<5>/*159:0*/ __Vtemp_229;
    VlWide<5>/*159:0*/ __Vtemp_230;
    VlWide<5>/*159:0*/ __Vtemp_231;
    VlWide<5>/*159:0*/ __Vtemp_232;
    VlWide<5>/*159:0*/ __Vtemp_233;
    VlWide<5>/*159:0*/ __Vtemp_234;
    VlWide<5>/*159:0*/ __Vtemp_235;
    CData/*31:0*/ __Vtemp_236;
    VlWide<5>/*159:0*/ __Vtemp_237;
    CData/*31:0*/ __Vtemp_238;
    VlWide<5>/*159:0*/ __Vtemp_239;
    VlWide<5>/*159:0*/ __Vtemp_240;
    VlWide<5>/*159:0*/ __Vtemp_241;
    VlWide<5>/*159:0*/ __Vtemp_242;
    VlWide<5>/*159:0*/ __Vtemp_243;
    VlWide<5>/*159:0*/ __Vtemp_244;
    VlWide<5>/*159:0*/ __Vtemp_245;
    CData/*31:0*/ __Vtemp_246;
    VlWide<5>/*159:0*/ __Vtemp_247;
    CData/*31:0*/ __Vtemp_248;
    VlWide<5>/*159:0*/ __Vtemp_249;
    VlWide<5>/*159:0*/ __Vtemp_250;
    VlWide<5>/*159:0*/ __Vtemp_251;
    VlWide<5>/*159:0*/ __Vtemp_252;
    VlWide<5>/*159:0*/ __Vtemp_253;
    VlWide<5>/*159:0*/ __Vtemp_254;
    VlWide<5>/*159:0*/ __Vtemp_255;
    CData/*31:0*/ __Vtemp_256;
    VlWide<5>/*159:0*/ __Vtemp_257;
    CData/*31:0*/ __Vtemp_258;
    VlWide<5>/*159:0*/ __Vtemp_259;
    VlWide<5>/*159:0*/ __Vtemp_260;
    VlWide<5>/*159:0*/ __Vtemp_261;
    VlWide<5>/*159:0*/ __Vtemp_262;
    VlWide<5>/*159:0*/ __Vtemp_263;
    VlWide<5>/*159:0*/ __Vtemp_264;
    VlWide<5>/*159:0*/ __Vtemp_265;
    CData/*31:0*/ __Vtemp_266;
    VlWide<5>/*159:0*/ __Vtemp_267;
    CData/*31:0*/ __Vtemp_268;
    VlWide<5>/*159:0*/ __Vtemp_269;
    VlWide<5>/*159:0*/ __Vtemp_270;
    VlWide<5>/*159:0*/ __Vtemp_271;
    VlWide<5>/*159:0*/ __Vtemp_272;
    VlWide<5>/*159:0*/ __Vtemp_273;
    VlWide<5>/*159:0*/ __Vtemp_274;
    VlWide<5>/*159:0*/ __Vtemp_275;
    CData/*31:0*/ __Vtemp_276;
    VlWide<5>/*159:0*/ __Vtemp_277;
    CData/*31:0*/ __Vtemp_278;
    VlWide<5>/*159:0*/ __Vtemp_279;
    VlWide<5>/*159:0*/ __Vtemp_280;
    VlWide<5>/*159:0*/ __Vtemp_281;
    VlWide<5>/*159:0*/ __Vtemp_282;
    VlWide<5>/*159:0*/ __Vtemp_283;
    VlWide<5>/*159:0*/ __Vtemp_284;
    VlWide<5>/*159:0*/ __Vtemp_285;
    CData/*31:0*/ __Vtemp_286;
    VlWide<5>/*159:0*/ __Vtemp_287;
    CData/*31:0*/ __Vtemp_288;
    VlWide<5>/*159:0*/ __Vtemp_289;
    VlWide<5>/*159:0*/ __Vtemp_290;
    VlWide<5>/*159:0*/ __Vtemp_291;
    VlWide<5>/*159:0*/ __Vtemp_292;
    VlWide<5>/*159:0*/ __Vtemp_293;
    VlWide<5>/*159:0*/ __Vtemp_294;
    VlWide<5>/*159:0*/ __Vtemp_295;
    CData/*31:0*/ __Vtemp_296;
    VlWide<5>/*159:0*/ __Vtemp_297;
    CData/*31:0*/ __Vtemp_298;
    VlWide<5>/*159:0*/ __Vtemp_299;
    VlWide<5>/*159:0*/ __Vtemp_300;
    VlWide<5>/*159:0*/ __Vtemp_301;
    VlWide<5>/*159:0*/ __Vtemp_302;
    VlWide<5>/*159:0*/ __Vtemp_303;
    VlWide<5>/*159:0*/ __Vtemp_304;
    VlWide<5>/*159:0*/ __Vtemp_305;
    CData/*31:0*/ __Vtemp_306;
    VlWide<5>/*159:0*/ __Vtemp_307;
    CData/*31:0*/ __Vtemp_308;
    VlWide<5>/*159:0*/ __Vtemp_309;
    VlWide<5>/*159:0*/ __Vtemp_310;
    VlWide<5>/*159:0*/ __Vtemp_311;
    VlWide<5>/*159:0*/ __Vtemp_312;
    VlWide<5>/*159:0*/ __Vtemp_313;
    VlWide<5>/*159:0*/ __Vtemp_314;
    VlWide<5>/*159:0*/ __Vtemp_315;
    CData/*31:0*/ __Vtemp_316;
    VlWide<5>/*159:0*/ __Vtemp_317;
    CData/*31:0*/ __Vtemp_318;
    VlWide<5>/*159:0*/ __Vtemp_319;
    VlWide<5>/*159:0*/ __Vtemp_320;
    // Body
    VL_ASSIGNSEL_WI(136,26,0U, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, 
                    VL_CONCAT_III(26,10,16, VL_CONCAT_III(10,3,7, (IData)(vlSelfRef.__PVT__new_respfield_ic_src2or4_ph4_nxt), 
                                                          VL_CONCAT_III(7,1,6, (IData)(vlSelfRef.__PVT__new_gotwrdata_earlier_ic_ph4_nxt), 
                                                                        VL_CONCAT_III(6,1,5, (IData)(vlSelfRef.__PVT__new_got_snpdata_earlier_ic_ph4_nxt), (IData)(vlSelfRef.__PVT__new_compfifo_index_ic_ph4_nxt)))), 
                                  VL_CONCAT_III(16,5,11, (IData)(vlSelfRef.__PVT__new_compfifo_index_ic_data_ph4_nxt), 
                                                VL_CONCAT_III(11,5,6, (IData)(vlSelfRef.__PVT__new_compfifo_index_mm_ph4_nxt), 
                                                              VL_CONCAT_III(6,5,1, (IData)(vlSelfRef.__PVT__new_snpresp_cnt_resp_ph4_nxt), (IData)(vlSelfRef.__PVT__new_mmemresp_cnt_resp_ph4_nxt))))));
    VL_ASSIGNSEL_WI(136,24,0x1aU, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, 
                    VL_CONCAT_III(24,22,2, vlSelfRef.__PVT__new_share_vect_ph3_rsp, 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__new_gotresp_earlier_ic_ph4_nxt), (IData)(vlSelfRef.__PVT__new_was_prelastresp_read_snp_ph4_nxt))));
    VL_ASSIGNSEL_WI(136,13,0x32U, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, 
                    VL_CONCAT_III(13,2,11, (IData)(vlSelfRef.__PVT__new_wrdata_cnt_resp_ph4_nxt), 
                                  VL_CONCAT_III(11,1,10, (IData)(vlSelfRef.__PVT__new_gotptldata_earlier_ic_ph4_nxt), 
                                                VL_CONCAT_III(10,3,7, (IData)(vlSelfRef.__PVT__new_cache_st_ph3_rsp), (IData)(vlSelfRef.__PVT__new_ownerp_id_ph3_rsp)))));
    VL_ASSIGNSEL_WI(136,12,0x3fU, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, vlSelfRef.__PVT__new_dbid_from_slavemem_ph4_nxt);
    VL_ASSIGNSEL_WI(136,15,0x4bU, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, 
                    VL_CONCAT_III(15,8,7, VL_CONCAT_III(8,4,4, 
                                                        VL_CONCAT_III(4,2,2, 
                                                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__was_prelastresp_atom_wr_result_p1_ph4_nxt), (IData)(vlSelfRef.__PVT__new_comp_slc_cnt_resp_ph4_nxt)), 
                                                                      VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__new_comp_cnt_resp_ph4_nxt), (IData)(vlSelfRef.__PVT__new_readreceipt_cnt_resp_ph4_nxt))), 
                                                        VL_CONCAT_III(4,1,3, (IData)(vlSelfRef.__PVT__new_compack_cnt_resp_ph4_nxt), 
                                                                      VL_CONCAT_III(3,2,1, (IData)(vlSelfRef.__PVT__new_first_RespErr_ph4_nxt), (IData)(vlSelfRef.__PVT__new_first_resp_ph4_nxt)))), 
                                  VL_CONCAT_III(7,4,3, 
                                                VL_CONCAT_III(4,2,2, 
                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__new_pkt_already_forwarded_mem_ph4_nxt), (IData)(vlSelfRef.__PVT__new_pkt_already_forwarded_snp_ph4_nxt)), 
                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__new_last_read_snp_sent_ph4_nxt), (IData)(vlSelfRef.__PVT__new_got_compack_ph4_nxt))), 
                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__new_dbid_cnt_ph4_nxt), (IData)(vlSelfRef.__PVT__new_compdbid_cnt_ph4_nxt)))));
    VL_ASSIGNSEL_WI(136,7,0x5aU, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, 
                    VL_CONCAT_III(7,2,5, (IData)(vlSelfRef.__PVT__new_atmo_state_ph4_nxt), 
                                  VL_CONCAT_III(5,4,1, (IData)(vlSelfRef.__PVT__new_retry_pcrdtype_ph4_nxt), (IData)(vlSelfRef.__PVT__new_retry_pending_ph4_nxt))));
    VL_ASSIGNSEL_WI(136,8,0x61U, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, 
                    VL_CONCAT_III(8,4,4, VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__new_was_lastresp_dataless_snpdataptl_ph4_nxt), (IData)(vlSelfRef.__PVT__new_compcmo_cnt_resp_ph4_nxt)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__new_got_mem_data_earlier_ph4_nxt), (IData)(vlSelfRef.__PVT__was_prelastresp_write_comp_ph4_cmo_nxt))), 
                                  VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__was_prelastresp_write_dbid_ph4_cmo_nxt), (IData)(vlSelfRef.__PVT__was_prelastresp_write_compdbid_ph4_cmo_nxt)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__was_prelastresp_check_cacheline_ph4_cmo_nxt), (IData)(vlSelfRef.__PVT__new_was_prelastresp_wr_uniq_ptl_ph4_nxt)))));
    VL_ASSIGNSEL_WI(136,15,0x69U, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, 
                    VL_CONCAT_III(15,8,7, VL_CONCAT_III(8,2,6, (IData)(vlSelfRef.__PVT__new_compcmo_resperr_ph4_nxt), 
                                                        VL_CONCAT_III(6,3,3, (IData)(vlSelfRef.__PVT__cmd_ph4_snp_resp_nxt), (IData)(vlSelfRef.__PVT__cmd_ph4_dat_resp_write_data_nxt))), 
                                  VL_CONCAT_III(7,4,3, 
                                                VL_CONCAT_III(4,2,2, 
                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__has_sent_compcmo_ph4_wrcmo_nxt), (IData)(vlSelfRef.__PVT__has_sent_comp_ph4_wrcmo_nxt)), 
                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__was_prelastresp_before_sending_noncachealbe_wrdat_ph4_wrcmo_nxt), (IData)(vlSelfRef.__PVT__was_prelastresp_before_sending_cacheable_wrdat_ph4_wrcmo_nxt))), 
                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__was_prelastresp_before_sending_wrreq_ph4_wrcmo_nxt), (IData)(vlSelfRef.__PVT__new_comp_resperr_ph4_nxt)))));
    VL_ASSIGNSEL_WI(136,16,0x78U, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, 
                    VL_CONCAT_III(16,4,12, (IData)(vlSelfRef.__PVT__cmd_ph4_dat_opcode_nxt), (IData)(vlSelfRef.__PVT__new_dbid_from_slc_ph4_nxt)));
    VL_CONST_W_5X(160,__Vtemp_1,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_2, vlSelfRef.__PVT__status_field_common, 0U, 136);
    VL_AND_W(5, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_ASSIGNSEL_WW(4352,136,0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_3);
    VL_CONST_W_5X(160,__Vtemp_4,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_5, vlSelfRef.__PVT__status_field_common, 0U, 136);
    __Vtemp_6 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0U));
    VL_COND_WIWW(136, __Vtemp_7, __Vtemp_6, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_5);
    __Vtemp_8 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0U));
    VL_COND_WIWW(136, __Vtemp_9, __Vtemp_8, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_7);
    VL_AND_W(5, __Vtemp_10, __Vtemp_4, __Vtemp_9);
    VL_ASSIGNSEL_WW(4352,136,0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_10);
    VL_CONST_W_5X(160,__Vtemp_11,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_12, vlSelfRef.__PVT__status_field_common, 0x88U, 136);
    VL_AND_W(5, __Vtemp_13, __Vtemp_11, __Vtemp_12);
    VL_ASSIGNSEL_WW(4352,136,0x88U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_13);
    VL_CONST_W_5X(160,__Vtemp_14,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_15, vlSelfRef.__PVT__status_field_common, 0x88U, 136);
    __Vtemp_16 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 1U));
    VL_COND_WIWW(136, __Vtemp_17, __Vtemp_16, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_15);
    __Vtemp_18 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 1U));
    VL_COND_WIWW(136, __Vtemp_19, __Vtemp_18, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_17);
    VL_AND_W(5, __Vtemp_20, __Vtemp_14, __Vtemp_19);
    VL_ASSIGNSEL_WW(4352,136,0x88U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_20);
    VL_CONST_W_5X(160,__Vtemp_21,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_22, vlSelfRef.__PVT__status_field_common, 0x110U, 136);
    VL_AND_W(5, __Vtemp_23, __Vtemp_21, __Vtemp_22);
    VL_ASSIGNSEL_WW(4352,136,0x110U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_23);
    VL_CONST_W_5X(160,__Vtemp_24,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_25, vlSelfRef.__PVT__status_field_common, 0x110U, 136);
    __Vtemp_26 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 2U));
    VL_COND_WIWW(136, __Vtemp_27, __Vtemp_26, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_25);
    __Vtemp_28 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 2U));
    VL_COND_WIWW(136, __Vtemp_29, __Vtemp_28, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_27);
    VL_AND_W(5, __Vtemp_30, __Vtemp_24, __Vtemp_29);
    VL_ASSIGNSEL_WW(4352,136,0x110U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_30);
    VL_CONST_W_5X(160,__Vtemp_31,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_32, vlSelfRef.__PVT__status_field_common, 0x198U, 136);
    VL_AND_W(5, __Vtemp_33, __Vtemp_31, __Vtemp_32);
    VL_ASSIGNSEL_WW(4352,136,0x198U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_33);
    VL_CONST_W_5X(160,__Vtemp_34,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_35, vlSelfRef.__PVT__status_field_common, 0x198U, 136);
    __Vtemp_36 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 3U));
    VL_COND_WIWW(136, __Vtemp_37, __Vtemp_36, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_35);
    __Vtemp_38 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 3U));
    VL_COND_WIWW(136, __Vtemp_39, __Vtemp_38, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_37);
    VL_AND_W(5, __Vtemp_40, __Vtemp_34, __Vtemp_39);
    VL_ASSIGNSEL_WW(4352,136,0x198U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_40);
    VL_CONST_W_5X(160,__Vtemp_41,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_42, vlSelfRef.__PVT__status_field_common, 0x220U, 136);
    VL_AND_W(5, __Vtemp_43, __Vtemp_41, __Vtemp_42);
    VL_ASSIGNSEL_WW(4352,136,0x220U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_43);
    VL_CONST_W_5X(160,__Vtemp_44,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_45, vlSelfRef.__PVT__status_field_common, 0x220U, 136);
    __Vtemp_46 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 4U));
    VL_COND_WIWW(136, __Vtemp_47, __Vtemp_46, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_45);
    __Vtemp_48 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 4U));
    VL_COND_WIWW(136, __Vtemp_49, __Vtemp_48, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_47);
    VL_AND_W(5, __Vtemp_50, __Vtemp_44, __Vtemp_49);
    VL_ASSIGNSEL_WW(4352,136,0x220U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_50);
    VL_CONST_W_5X(160,__Vtemp_51,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_52, vlSelfRef.__PVT__status_field_common, 0x2a8U, 136);
    VL_AND_W(5, __Vtemp_53, __Vtemp_51, __Vtemp_52);
    VL_ASSIGNSEL_WW(4352,136,0x2a8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_53);
    VL_CONST_W_5X(160,__Vtemp_54,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_55, vlSelfRef.__PVT__status_field_common, 0x2a8U, 136);
    __Vtemp_56 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 5U));
    VL_COND_WIWW(136, __Vtemp_57, __Vtemp_56, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_55);
    __Vtemp_58 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 5U));
    VL_COND_WIWW(136, __Vtemp_59, __Vtemp_58, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_57);
    VL_AND_W(5, __Vtemp_60, __Vtemp_54, __Vtemp_59);
    VL_ASSIGNSEL_WW(4352,136,0x2a8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_60);
    VL_CONST_W_5X(160,__Vtemp_61,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_62, vlSelfRef.__PVT__status_field_common, 0x330U, 136);
    VL_AND_W(5, __Vtemp_63, __Vtemp_61, __Vtemp_62);
    VL_ASSIGNSEL_WW(4352,136,0x330U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_63);
    VL_CONST_W_5X(160,__Vtemp_64,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_65, vlSelfRef.__PVT__status_field_common, 0x330U, 136);
    __Vtemp_66 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 6U));
    VL_COND_WIWW(136, __Vtemp_67, __Vtemp_66, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_65);
    __Vtemp_68 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 6U));
    VL_COND_WIWW(136, __Vtemp_69, __Vtemp_68, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_67);
    VL_AND_W(5, __Vtemp_70, __Vtemp_64, __Vtemp_69);
    VL_ASSIGNSEL_WW(4352,136,0x330U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_70);
    VL_CONST_W_5X(160,__Vtemp_71,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_72, vlSelfRef.__PVT__status_field_common, 0x3b8U, 136);
    VL_AND_W(5, __Vtemp_73, __Vtemp_71, __Vtemp_72);
    VL_ASSIGNSEL_WW(4352,136,0x3b8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_73);
    VL_CONST_W_5X(160,__Vtemp_74,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_75, vlSelfRef.__PVT__status_field_common, 0x3b8U, 136);
    __Vtemp_76 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 7U));
    VL_COND_WIWW(136, __Vtemp_77, __Vtemp_76, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_75);
    __Vtemp_78 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 7U));
    VL_COND_WIWW(136, __Vtemp_79, __Vtemp_78, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_77);
    VL_AND_W(5, __Vtemp_80, __Vtemp_74, __Vtemp_79);
    VL_ASSIGNSEL_WW(4352,136,0x3b8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_80);
    VL_CONST_W_5X(160,__Vtemp_81,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_82, vlSelfRef.__PVT__status_field_common, 0x440U, 136);
    VL_AND_W(5, __Vtemp_83, __Vtemp_81, __Vtemp_82);
    VL_ASSIGNSEL_WW(4352,136,0x440U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_83);
    VL_CONST_W_5X(160,__Vtemp_84,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_85, vlSelfRef.__PVT__status_field_common, 0x440U, 136);
    __Vtemp_86 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 8U));
    VL_COND_WIWW(136, __Vtemp_87, __Vtemp_86, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_85);
    __Vtemp_88 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 8U));
    VL_COND_WIWW(136, __Vtemp_89, __Vtemp_88, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_87);
    VL_AND_W(5, __Vtemp_90, __Vtemp_84, __Vtemp_89);
    VL_ASSIGNSEL_WW(4352,136,0x440U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_90);
    VL_CONST_W_5X(160,__Vtemp_91,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_92, vlSelfRef.__PVT__status_field_common, 0x4c8U, 136);
    VL_AND_W(5, __Vtemp_93, __Vtemp_91, __Vtemp_92);
    VL_ASSIGNSEL_WW(4352,136,0x4c8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_93);
    VL_CONST_W_5X(160,__Vtemp_94,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_95, vlSelfRef.__PVT__status_field_common, 0x4c8U, 136);
    __Vtemp_96 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 9U));
    VL_COND_WIWW(136, __Vtemp_97, __Vtemp_96, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_95);
    __Vtemp_98 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 9U));
    VL_COND_WIWW(136, __Vtemp_99, __Vtemp_98, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_97);
    VL_AND_W(5, __Vtemp_100, __Vtemp_94, __Vtemp_99);
    VL_ASSIGNSEL_WW(4352,136,0x4c8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_100);
    VL_CONST_W_5X(160,__Vtemp_101,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_102, vlSelfRef.__PVT__status_field_common, 0x550U, 136);
    VL_AND_W(5, __Vtemp_103, __Vtemp_101, __Vtemp_102);
    VL_ASSIGNSEL_WW(4352,136,0x550U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_103);
    VL_CONST_W_5X(160,__Vtemp_104,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_105, vlSelfRef.__PVT__status_field_common, 0x550U, 136);
    __Vtemp_106 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0xaU));
    VL_COND_WIWW(136, __Vtemp_107, __Vtemp_106, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_105);
    __Vtemp_108 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0xaU));
    VL_COND_WIWW(136, __Vtemp_109, __Vtemp_108, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_107);
    VL_AND_W(5, __Vtemp_110, __Vtemp_104, __Vtemp_109);
    VL_ASSIGNSEL_WW(4352,136,0x550U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_110);
    VL_CONST_W_5X(160,__Vtemp_111,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_112, vlSelfRef.__PVT__status_field_common, 0x5d8U, 136);
    VL_AND_W(5, __Vtemp_113, __Vtemp_111, __Vtemp_112);
    VL_ASSIGNSEL_WW(4352,136,0x5d8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_113);
    VL_CONST_W_5X(160,__Vtemp_114,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_115, vlSelfRef.__PVT__status_field_common, 0x5d8U, 136);
    __Vtemp_116 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0xbU));
    VL_COND_WIWW(136, __Vtemp_117, __Vtemp_116, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_115);
    __Vtemp_118 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0xbU));
    VL_COND_WIWW(136, __Vtemp_119, __Vtemp_118, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_117);
    VL_AND_W(5, __Vtemp_120, __Vtemp_114, __Vtemp_119);
    VL_ASSIGNSEL_WW(4352,136,0x5d8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_120);
    VL_CONST_W_5X(160,__Vtemp_121,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_122, vlSelfRef.__PVT__status_field_common, 0x660U, 136);
    VL_AND_W(5, __Vtemp_123, __Vtemp_121, __Vtemp_122);
    VL_ASSIGNSEL_WW(4352,136,0x660U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_123);
    VL_CONST_W_5X(160,__Vtemp_124,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_125, vlSelfRef.__PVT__status_field_common, 0x660U, 136);
    __Vtemp_126 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0xcU));
    VL_COND_WIWW(136, __Vtemp_127, __Vtemp_126, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_125);
    __Vtemp_128 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0xcU));
    VL_COND_WIWW(136, __Vtemp_129, __Vtemp_128, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_127);
    VL_AND_W(5, __Vtemp_130, __Vtemp_124, __Vtemp_129);
    VL_ASSIGNSEL_WW(4352,136,0x660U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_130);
    VL_CONST_W_5X(160,__Vtemp_131,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_132, vlSelfRef.__PVT__status_field_common, 0x6e8U, 136);
    VL_AND_W(5, __Vtemp_133, __Vtemp_131, __Vtemp_132);
    VL_ASSIGNSEL_WW(4352,136,0x6e8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_133);
    VL_CONST_W_5X(160,__Vtemp_134,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_135, vlSelfRef.__PVT__status_field_common, 0x6e8U, 136);
    __Vtemp_136 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0xdU));
    VL_COND_WIWW(136, __Vtemp_137, __Vtemp_136, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_135);
    __Vtemp_138 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0xdU));
    VL_COND_WIWW(136, __Vtemp_139, __Vtemp_138, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_137);
    VL_AND_W(5, __Vtemp_140, __Vtemp_134, __Vtemp_139);
    VL_ASSIGNSEL_WW(4352,136,0x6e8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_140);
    VL_CONST_W_5X(160,__Vtemp_141,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_142, vlSelfRef.__PVT__status_field_common, 0x770U, 136);
    VL_AND_W(5, __Vtemp_143, __Vtemp_141, __Vtemp_142);
    VL_ASSIGNSEL_WW(4352,136,0x770U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_143);
    VL_CONST_W_5X(160,__Vtemp_144,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_145, vlSelfRef.__PVT__status_field_common, 0x770U, 136);
    __Vtemp_146 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0xeU));
    VL_COND_WIWW(136, __Vtemp_147, __Vtemp_146, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_145);
    __Vtemp_148 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0xeU));
    VL_COND_WIWW(136, __Vtemp_149, __Vtemp_148, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_147);
    VL_AND_W(5, __Vtemp_150, __Vtemp_144, __Vtemp_149);
    VL_ASSIGNSEL_WW(4352,136,0x770U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_150);
    VL_CONST_W_5X(160,__Vtemp_151,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_152, vlSelfRef.__PVT__status_field_common, 0x7f8U, 136);
    VL_AND_W(5, __Vtemp_153, __Vtemp_151, __Vtemp_152);
    VL_ASSIGNSEL_WW(4352,136,0x7f8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_153);
    VL_CONST_W_5X(160,__Vtemp_154,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_155, vlSelfRef.__PVT__status_field_common, 0x7f8U, 136);
    __Vtemp_156 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0xfU));
    VL_COND_WIWW(136, __Vtemp_157, __Vtemp_156, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_155);
    __Vtemp_158 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0xfU));
    VL_COND_WIWW(136, __Vtemp_159, __Vtemp_158, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_157);
    VL_AND_W(5, __Vtemp_160, __Vtemp_154, __Vtemp_159);
    VL_ASSIGNSEL_WW(4352,136,0x7f8U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_160);
    VL_CONST_W_5X(160,__Vtemp_161,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_162, vlSelfRef.__PVT__status_field_common, 0x880U, 136);
    VL_AND_W(5, __Vtemp_163, __Vtemp_161, __Vtemp_162);
    VL_ASSIGNSEL_WW(4352,136,0x880U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_163);
    VL_CONST_W_5X(160,__Vtemp_164,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_165, vlSelfRef.__PVT__status_field_common, 0x880U, 136);
    __Vtemp_166 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x10U));
    VL_COND_WIWW(136, __Vtemp_167, __Vtemp_166, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_165);
    __Vtemp_168 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x10U));
    VL_COND_WIWW(136, __Vtemp_169, __Vtemp_168, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_167);
    VL_AND_W(5, __Vtemp_170, __Vtemp_164, __Vtemp_169);
    VL_ASSIGNSEL_WW(4352,136,0x880U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_170);
    VL_CONST_W_5X(160,__Vtemp_171,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_172, vlSelfRef.__PVT__status_field_common, 0x908U, 136);
    VL_AND_W(5, __Vtemp_173, __Vtemp_171, __Vtemp_172);
    VL_ASSIGNSEL_WW(4352,136,0x908U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_173);
    VL_CONST_W_5X(160,__Vtemp_174,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_175, vlSelfRef.__PVT__status_field_common, 0x908U, 136);
    __Vtemp_176 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x11U));
    VL_COND_WIWW(136, __Vtemp_177, __Vtemp_176, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_175);
    __Vtemp_178 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x11U));
    VL_COND_WIWW(136, __Vtemp_179, __Vtemp_178, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_177);
    VL_AND_W(5, __Vtemp_180, __Vtemp_174, __Vtemp_179);
    VL_ASSIGNSEL_WW(4352,136,0x908U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_180);
    VL_CONST_W_5X(160,__Vtemp_181,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_182, vlSelfRef.__PVT__status_field_common, 0x990U, 136);
    VL_AND_W(5, __Vtemp_183, __Vtemp_181, __Vtemp_182);
    VL_ASSIGNSEL_WW(4352,136,0x990U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_183);
    VL_CONST_W_5X(160,__Vtemp_184,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_185, vlSelfRef.__PVT__status_field_common, 0x990U, 136);
    __Vtemp_186 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x12U));
    VL_COND_WIWW(136, __Vtemp_187, __Vtemp_186, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_185);
    __Vtemp_188 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x12U));
    VL_COND_WIWW(136, __Vtemp_189, __Vtemp_188, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_187);
    VL_AND_W(5, __Vtemp_190, __Vtemp_184, __Vtemp_189);
    VL_ASSIGNSEL_WW(4352,136,0x990U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_190);
    VL_CONST_W_5X(160,__Vtemp_191,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_192, vlSelfRef.__PVT__status_field_common, 0xa18U, 136);
    VL_AND_W(5, __Vtemp_193, __Vtemp_191, __Vtemp_192);
    VL_ASSIGNSEL_WW(4352,136,0xa18U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_193);
    VL_CONST_W_5X(160,__Vtemp_194,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_195, vlSelfRef.__PVT__status_field_common, 0xa18U, 136);
    __Vtemp_196 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x13U));
    VL_COND_WIWW(136, __Vtemp_197, __Vtemp_196, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_195);
    __Vtemp_198 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x13U));
    VL_COND_WIWW(136, __Vtemp_199, __Vtemp_198, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_197);
    VL_AND_W(5, __Vtemp_200, __Vtemp_194, __Vtemp_199);
    VL_ASSIGNSEL_WW(4352,136,0xa18U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_200);
    VL_CONST_W_5X(160,__Vtemp_201,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_202, vlSelfRef.__PVT__status_field_common, 0xaa0U, 136);
    VL_AND_W(5, __Vtemp_203, __Vtemp_201, __Vtemp_202);
    VL_ASSIGNSEL_WW(4352,136,0xaa0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_203);
    VL_CONST_W_5X(160,__Vtemp_204,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_205, vlSelfRef.__PVT__status_field_common, 0xaa0U, 136);
    __Vtemp_206 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x14U));
    VL_COND_WIWW(136, __Vtemp_207, __Vtemp_206, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_205);
    __Vtemp_208 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x14U));
    VL_COND_WIWW(136, __Vtemp_209, __Vtemp_208, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_207);
    VL_AND_W(5, __Vtemp_210, __Vtemp_204, __Vtemp_209);
    VL_ASSIGNSEL_WW(4352,136,0xaa0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_210);
    VL_CONST_W_5X(160,__Vtemp_211,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_212, vlSelfRef.__PVT__status_field_common, 0xb28U, 136);
    VL_AND_W(5, __Vtemp_213, __Vtemp_211, __Vtemp_212);
    VL_ASSIGNSEL_WW(4352,136,0xb28U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_213);
    VL_CONST_W_5X(160,__Vtemp_214,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_215, vlSelfRef.__PVT__status_field_common, 0xb28U, 136);
    __Vtemp_216 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x15U));
    VL_COND_WIWW(136, __Vtemp_217, __Vtemp_216, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_215);
    __Vtemp_218 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x15U));
    VL_COND_WIWW(136, __Vtemp_219, __Vtemp_218, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_217);
    VL_AND_W(5, __Vtemp_220, __Vtemp_214, __Vtemp_219);
    VL_ASSIGNSEL_WW(4352,136,0xb28U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_220);
    VL_CONST_W_5X(160,__Vtemp_221,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_222, vlSelfRef.__PVT__status_field_common, 0xbb0U, 136);
    VL_AND_W(5, __Vtemp_223, __Vtemp_221, __Vtemp_222);
    VL_ASSIGNSEL_WW(4352,136,0xbb0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_223);
    VL_CONST_W_5X(160,__Vtemp_224,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_225, vlSelfRef.__PVT__status_field_common, 0xbb0U, 136);
    __Vtemp_226 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x16U));
    VL_COND_WIWW(136, __Vtemp_227, __Vtemp_226, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_225);
    __Vtemp_228 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x16U));
    VL_COND_WIWW(136, __Vtemp_229, __Vtemp_228, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_227);
    VL_AND_W(5, __Vtemp_230, __Vtemp_224, __Vtemp_229);
    VL_ASSIGNSEL_WW(4352,136,0xbb0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_230);
    VL_CONST_W_5X(160,__Vtemp_231,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_232, vlSelfRef.__PVT__status_field_common, 0xc38U, 136);
    VL_AND_W(5, __Vtemp_233, __Vtemp_231, __Vtemp_232);
    VL_ASSIGNSEL_WW(4352,136,0xc38U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_233);
    VL_CONST_W_5X(160,__Vtemp_234,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_235, vlSelfRef.__PVT__status_field_common, 0xc38U, 136);
    __Vtemp_236 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x17U));
    VL_COND_WIWW(136, __Vtemp_237, __Vtemp_236, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_235);
    __Vtemp_238 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x17U));
    VL_COND_WIWW(136, __Vtemp_239, __Vtemp_238, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_237);
    VL_AND_W(5, __Vtemp_240, __Vtemp_234, __Vtemp_239);
    VL_ASSIGNSEL_WW(4352,136,0xc38U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_240);
    VL_CONST_W_5X(160,__Vtemp_241,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_242, vlSelfRef.__PVT__status_field_common, 0xcc0U, 136);
    VL_AND_W(5, __Vtemp_243, __Vtemp_241, __Vtemp_242);
    VL_ASSIGNSEL_WW(4352,136,0xcc0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_243);
    VL_CONST_W_5X(160,__Vtemp_244,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_245, vlSelfRef.__PVT__status_field_common, 0xcc0U, 136);
    __Vtemp_246 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x18U));
    VL_COND_WIWW(136, __Vtemp_247, __Vtemp_246, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_245);
    __Vtemp_248 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x18U));
    VL_COND_WIWW(136, __Vtemp_249, __Vtemp_248, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_247);
    VL_AND_W(5, __Vtemp_250, __Vtemp_244, __Vtemp_249);
    VL_ASSIGNSEL_WW(4352,136,0xcc0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_250);
    VL_CONST_W_5X(160,__Vtemp_251,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_252, vlSelfRef.__PVT__status_field_common, 0xd48U, 136);
    VL_AND_W(5, __Vtemp_253, __Vtemp_251, __Vtemp_252);
    VL_ASSIGNSEL_WW(4352,136,0xd48U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_253);
    VL_CONST_W_5X(160,__Vtemp_254,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_255, vlSelfRef.__PVT__status_field_common, 0xd48U, 136);
    __Vtemp_256 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x19U));
    VL_COND_WIWW(136, __Vtemp_257, __Vtemp_256, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_255);
    __Vtemp_258 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x19U));
    VL_COND_WIWW(136, __Vtemp_259, __Vtemp_258, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_257);
    VL_AND_W(5, __Vtemp_260, __Vtemp_254, __Vtemp_259);
    VL_ASSIGNSEL_WW(4352,136,0xd48U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_260);
    VL_CONST_W_5X(160,__Vtemp_261,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_262, vlSelfRef.__PVT__status_field_common, 0xdd0U, 136);
    VL_AND_W(5, __Vtemp_263, __Vtemp_261, __Vtemp_262);
    VL_ASSIGNSEL_WW(4352,136,0xdd0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_263);
    VL_CONST_W_5X(160,__Vtemp_264,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_265, vlSelfRef.__PVT__status_field_common, 0xdd0U, 136);
    __Vtemp_266 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x1aU));
    VL_COND_WIWW(136, __Vtemp_267, __Vtemp_266, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_265);
    __Vtemp_268 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x1aU));
    VL_COND_WIWW(136, __Vtemp_269, __Vtemp_268, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_267);
    VL_AND_W(5, __Vtemp_270, __Vtemp_264, __Vtemp_269);
    VL_ASSIGNSEL_WW(4352,136,0xdd0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_270);
    VL_CONST_W_5X(160,__Vtemp_271,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_272, vlSelfRef.__PVT__status_field_common, 0xe58U, 136);
    VL_AND_W(5, __Vtemp_273, __Vtemp_271, __Vtemp_272);
    VL_ASSIGNSEL_WW(4352,136,0xe58U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_273);
    VL_CONST_W_5X(160,__Vtemp_274,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_275, vlSelfRef.__PVT__status_field_common, 0xe58U, 136);
    __Vtemp_276 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x1bU));
    VL_COND_WIWW(136, __Vtemp_277, __Vtemp_276, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_275);
    __Vtemp_278 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x1bU));
    VL_COND_WIWW(136, __Vtemp_279, __Vtemp_278, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_277);
    VL_AND_W(5, __Vtemp_280, __Vtemp_274, __Vtemp_279);
    VL_ASSIGNSEL_WW(4352,136,0xe58U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_280);
    VL_CONST_W_5X(160,__Vtemp_281,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_282, vlSelfRef.__PVT__status_field_common, 0xee0U, 136);
    VL_AND_W(5, __Vtemp_283, __Vtemp_281, __Vtemp_282);
    VL_ASSIGNSEL_WW(4352,136,0xee0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_283);
    VL_CONST_W_5X(160,__Vtemp_284,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_285, vlSelfRef.__PVT__status_field_common, 0xee0U, 136);
    __Vtemp_286 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x1cU));
    VL_COND_WIWW(136, __Vtemp_287, __Vtemp_286, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_285);
    __Vtemp_288 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x1cU));
    VL_COND_WIWW(136, __Vtemp_289, __Vtemp_288, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_287);
    VL_AND_W(5, __Vtemp_290, __Vtemp_284, __Vtemp_289);
    VL_ASSIGNSEL_WW(4352,136,0xee0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_290);
    VL_CONST_W_5X(160,__Vtemp_291,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_292, vlSelfRef.__PVT__status_field_common, 0xf68U, 136);
    VL_AND_W(5, __Vtemp_293, __Vtemp_291, __Vtemp_292);
    VL_ASSIGNSEL_WW(4352,136,0xf68U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_293);
    VL_CONST_W_5X(160,__Vtemp_294,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_295, vlSelfRef.__PVT__status_field_common, 0xf68U, 136);
    __Vtemp_296 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x1dU));
    VL_COND_WIWW(136, __Vtemp_297, __Vtemp_296, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_295);
    __Vtemp_298 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x1dU));
    VL_COND_WIWW(136, __Vtemp_299, __Vtemp_298, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_297);
    VL_AND_W(5, __Vtemp_300, __Vtemp_294, __Vtemp_299);
    VL_ASSIGNSEL_WW(4352,136,0xf68U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_300);
    VL_CONST_W_5X(160,__Vtemp_301,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_302, vlSelfRef.__PVT__status_field_common, 0xff0U, 136);
    VL_AND_W(5, __Vtemp_303, __Vtemp_301, __Vtemp_302);
    VL_ASSIGNSEL_WW(4352,136,0xff0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_303);
    VL_CONST_W_5X(160,__Vtemp_304,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_305, vlSelfRef.__PVT__status_field_common, 0xff0U, 136);
    __Vtemp_306 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x1eU));
    VL_COND_WIWW(136, __Vtemp_307, __Vtemp_306, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_305);
    __Vtemp_308 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x1eU));
    VL_COND_WIWW(136, __Vtemp_309, __Vtemp_308, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_307);
    VL_AND_W(5, __Vtemp_310, __Vtemp_304, __Vtemp_309);
    VL_ASSIGNSEL_WW(4352,136,0xff0U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_310);
    VL_CONST_W_5X(160,__Vtemp_311,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_312, vlSelfRef.__PVT__status_field_common, 0x1078U, 136);
    VL_AND_W(5, __Vtemp_313, __Vtemp_311, __Vtemp_312);
    VL_ASSIGNSEL_WW(4352,136,0x1078U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_313);
    VL_CONST_W_5X(160,__Vtemp_314,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_315, vlSelfRef.__PVT__status_field_common, 0x1078U, 136);
    __Vtemp_316 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_rsp_datapath, 0x1fU));
    VL_COND_WIWW(136, __Vtemp_317, __Vtemp_316, vlSelfRef.__PVT__wrdata_stat_common_ph3_rsp, __Vtemp_315);
    __Vtemp_318 = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__select_req_datapath, 0x1fU));
    VL_COND_WIWW(136, __Vtemp_319, __Vtemp_318, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_317);
    VL_AND_W(5, __Vtemp_320, __Vtemp_314, __Vtemp_319);
    VL_ASSIGNSEL_WW(4352,136,0x1078U, vlSelfRef.__PVT__status_field_common_nxt, __Vtemp_320);
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__32(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__32\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__excl_pass_ph3 = (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                                       & (IData)(vlSelfRef.__PVT__req_is_excl_str_nsnp_ph3))
                                       ? (IData)(vlSelfRef.__PVT__excl_store_pass)
                                       : (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                                           & (IData)(vlSelfRef.__PVT__req_is_excl_str_snp_ph3))
                                           ? ((IData)(vlSelfRef.__PVT__req_is_clean_u_ph3) 
                                              & (((IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3) 
                                                  & ((1U 
                                                      == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)) 
                                                     | (3U 
                                                        == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)))) 
                                                 | ((IData)(vlSelfRef.__PVT__reqid_matches_sharevec_ph3) 
                                                    & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 2U))))
                                           : (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                                               & (IData)(vlSelfRef.__PVT__req_is_excl_ld_ph3)) 
                                              && (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3))))));
    vlSelfRef.__PVT__resperr_req_ph3 = ((IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)
                                         ? 3U : ((IData)(vlSelfRef.__PVT__excl_pass_ph3)
                                                  ? 1U
                                                  : 0U));
    VL_ASSIGNSEL_WI(191,6,0xb9U, vlSelfRef.__PVT__wrdata_snpreqfifo, 
                    VL_CONCAT_III(6,4,2, (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x85U, 4)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x7cU)), (IData)(vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_req_ph3))));
    VL_ASSIGNSEL_WI(191,6,0xb3U, vlSelfRef.__PVT__wrdata_snpreqfifo, 
                    VL_CONCAT_III(6,1,5, (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x92U)), 
                                  VL_CONCAT_III(5,4,1, 
                                                VL_EXTEND_II(4,3, (IData)(vlSelfRef.__PVT__req_atmo_ph3)), (IData)(vlSelfRef.__PVT__flit_dwt_en_ph3))));
    VL_ASSIGNSEL_WI(191,4,0xafU, vlSelfRef.__PVT__wrdata_snpreqfifo, 
                    VL_CONCAT_III(4,3,1, (IData)(vlSelfRef.__PVT__resp_outcompdata_req_ph3), 
                                  ((~ (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3)) 
                                   & (IData)(vlSelfRef.__PVT__dn_sm_req_ph3))));
    VL_ASSIGNSEL_WI(191,4,0xabU, vlSelfRef.__PVT__wrdata_snpreqfifo, 
                    VL_CONCAT_III(4,1,3, (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3), 
                                  VL_CONCAT_III(3,1,2, 
                                                (1U 
                                                 & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x93U)), 
                                                (3U 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x7fU, 2)))));
    VL_ASSIGNSEL_WI(191,2,0xa9U, vlSelfRef.__PVT__wrdata_snpreqfifo, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelfRef.__PVT__req_is_anywr_ph3) 
                                          & (~ (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3))), (IData)(vlSelfRef.__PVT__reqid_matches_sharevec_ph3)));
    VL_ASSIGNSEL_WQ(191,33,0x88U, vlSelfRef.__PVT__wrdata_snpreqfifo, 
                    VL_CONCAT_QII(33,1,32, (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3), 
                                  VL_CONCAT_III(32,3,29, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 
                                                VL_CONCAT_III(29,22,7, vlSelfRef.__PVT__req_share_vect_ph3, (IData)(vlSelfRef.__PVT__ownerp_id_ph3)))));
    VL_ASSIGNSEL_WI(191,5,0x83U, vlSelfRef.__PVT__wrdata_snpreqfifo, 
                    VL_CONCAT_III(5,2,3, (IData)(vlSelfRef.__PVT__resperr_req_ph3), 
                                  VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3), 
                                                (3U 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x4cU, 2)))));
    VL_ASSIGNSEL_WI(191,4,0x7fU, vlSelfRef.__PVT__wrdata_snpreqfifo, 
                    VL_CONCAT_III(4,1,3, (IData)(vlSelfRef.__PVT__cmd_ph3_apply_dmt_req), 
                                  VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__cmd_ph3_nonexcl_read_dct_req), 
                                                (3U 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x94U, 2)))));
    VL_ASSIGNSEL_WI(191,3,0x7cU, vlSelfRef.__PVT__wrdata_snpreqfifo, 
                    VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__snpattr_req_ph3), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x87U)), 0U)));
    VL_ASSIGNSEL_WQ(191,62,0x3eU, vlSelfRef.__PVT__wrdata_snpreqfifo, 
                    VL_CONCAT_QQI(62,52,10, (0xfffffffffffffULL 
                                             & VL_SEL_QWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x48U, 52)), 
                                  VL_CONCAT_III(10,3,7, 
                                                (7U 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x45U, 3)), 
                                                (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))));
    VL_ASSIGNSEL_WI(191,24,0x26U, vlSelfRef.__PVT__wrdata_snpreqfifo, 
                    VL_CONCAT_III(24,12,12, (0xfffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)), 
                                  VL_EXTEND_II(12,11, 
                                               VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__req_src_clstid_ph3), (IData)(vlSelfRef.__PVT__req_src_pid_ph3)))));
    VL_ASSIGNSEL_WQ(191,34,4U, vlSelfRef.__PVT__wrdata_snpreqfifo, 
                    VL_CONCAT_QII(34,12,22, VL_EXTEND_II(12,6, (IData)(vlSelfRef.__PVT__wrindex_req_ph3)), 
                                  VL_CONCAT_III(22,8,14, (IData)(vlSelfRef.__PVT__mycluster_id), 
                                                VL_CONCAT_III(14,3,11, 4U, (IData)(vlSelfRef.__PVT__tgt_id_ph3)))));
    VL_ASSIGNSEL_WI(191,4,0U, vlSelfRef.__PVT__wrdata_snpreqfifo, 
                    (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0U, 4)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__33(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__33\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    CData/*31:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    // Body
    VL_CONST_W_4X(128,__Vtemp_1,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_2, vlSelfRef.__PVT__status_field_req, 
                (0xfffU & VL_SEL_IIII(32, ((IData)(0x6cU) 
                                           * VL_EXTEND_II(32,5, 
                                                          (0x1fU 
                                                           & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_outq_rcvdata), 0U, 5)))), 0U, 12)), 108);
    VL_CONST_W_1X(108,__Vtemp_3,0x00000000);
    __Vtemp_4 = (0xd7fU >= (0xfffU & VL_SEL_IIII(32, 
                                                 ((IData)(0x6cU) 
                                                  * 
                                                  VL_EXTEND_II(32,5, 
                                                               (0x1fU 
                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_outq_rcvdata), 0U, 5)))), 0U, 12)));
    VL_COND_WIWW(108, __Vtemp_5, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    VL_AND_W(4, vlSelfRef.__PVT__rddata_statreg_req_rcvdatproc, __Vtemp_1, __Vtemp_5);
    vlSelfRef.__PVT__compq_buff_to_rcvdatproc_1st = 
        (0x1fU & ((0x9fU >= (0xffU & VL_SEL_IIII(32, 
                                                 ((IData)(5U) 
                                                  * 
                                                  VL_EXTEND_II(32,5, 
                                                               (0x1fU 
                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_outq_rcvdata), 0U, 5)))), 0U, 8)))
                   ? VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 
                                 (0xffU & VL_SEL_IIII(32, 
                                                      ((IData)(5U) 
                                                       * 
                                                       VL_EXTEND_II(32,5, 
                                                                    (0x1fU 
                                                                     & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_outq_rcvdata), 0U, 5)))), 0U, 8)), 5)
                   : 0U));
    vlSelfRef.__PVT__compq_buff_to_rcvdatproc_2nd = 
        (0x1fU & ((0x9fU >= (0xffU & VL_SEL_IIII(32, 
                                                 ((IData)(5U) 
                                                  * 
                                                  VL_EXTEND_II(32,5, 
                                                               (0x1fU 
                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_outq_rcvdata), 0U, 5)))), 0U, 8)))
                   ? VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 
                                 (0xffU & VL_SEL_IIII(32, 
                                                      ((IData)(5U) 
                                                       * 
                                                       VL_EXTEND_II(32,5, 
                                                                    (0x1fU 
                                                                     & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_outq_rcvdata), 0U, 5)))), 0U, 8)), 5)
                   : 0U));
    vlSelfRef.__PVT__vld_compq_buff_to_rcvdatproc_2nd 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 
                               (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_outq_rcvdata), 0U, 5))));
    vlSelfRef.__PVT__vld_compbuf_2nd_for_snpdata = 
        (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_compbuf_2nd_for_snpdata, 
                             (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_outq_rcvdata), 0U, 5))));
    vlSelfRef.__PVT__invalid_req_rcvdatproc = (1U & 
                                               VL_BITSEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_rcvdatproc, 0x4dU));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__34(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__34\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__block_cmq_rd_cache = ((IData)(vlSelfRef.__PVT__wren_cache_cohc_or_dirc) 
                                           & ((IData)(vlSelfRef.__PVT__cache_index_wr_cohc_or_dirc) 
                                              == (0x3ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cm_cmd_s, 0x4eU, 10))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__36(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__36\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__37(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__37\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__block_collnq_rd_cache = ((IData)(vlSelfRef.__PVT__wren_cache_cohc_or_dirc) 
                                              & ((IData)(vlSelfRef.__PVT__cache_index_wr_cohc_or_dirc) 
                                                 == 
                                                 (0x3ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__sel_winner_entry_s, 0x4eU, 10))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__38(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__38\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_cmq_gated = (((((((~ (IData)(vlSelfRef.__PVT__outstand_cmdq_full)) 
                                           & (~ (IData)(vlSelfRef.__PVT__collnq_full))) 
                                          & (~ (IData)(vlSelfRef.__PVT__blockcmq_dueto_highestseqnum_incollnq))) 
                                         & (IData)(vlSelfRef.__PVT__room_atlst3_snpreqfifo)) 
                                        & (~ (IData)(vlSelfRef.__PVT__block_fetch_cohc))) 
                                       & (~ (IData)(vlSelfRef.__PVT__block_cmq_rd_cache))) 
                                      & (IData)(vlSelfRef.__PVT__req_cmq));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__39(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__39\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__block_reqcmdq_rd_cache = ((IData)(vlSelfRef.__PVT__wren_cache_cohc_or_dirc) 
                                               & ((IData)(vlSelfRef.__PVT__cache_index_wr_cohc_or_dirc) 
                                                  == 
                                                  (0x3ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__rddata_reqcmdq_withbypass_s, 0x4eU, 10))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__40(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__40\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_detected_reqcmdq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_reqcmdq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 6U, 46)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_detected_reqcmdq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 1U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_reqcmdq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x3aU, 46)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_detected_reqcmdq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 2U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_reqcmdq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x6eU, 46)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_detected_reqcmdq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 3U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_reqcmdq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0xa2U, 46)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_detected_reqcmdq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 4U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_reqcmdq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0xd6U, 46)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_detected_reqcmdq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 5U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_reqcmdq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x10aU, 46)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_detected_reqcmdq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 6U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_reqcmdq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x13eU, 46)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_detected_reqcmdq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 7U)) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__rddata_reqcmdq_addr, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x172U, 46)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__highest_seq_reqcmdq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_reqcmdq), 0U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0U, 3)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__highest_seq_reqcmdq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_reqcmdq), 1U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 3U, 3)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__highest_seq_reqcmdq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_reqcmdq), 2U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 6U, 3)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__highest_seq_reqcmdq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_reqcmdq), 3U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 9U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__highest_seq_reqcmdq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_reqcmdq), 4U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xcU, 3)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__highest_seq_reqcmdq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_reqcmdq), 5U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xfU, 3)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__highest_seq_reqcmdq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_reqcmdq), 6U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x12U, 3)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__highest_seq_reqcmdq_is3_or_more, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_reqcmdq), 7U) 
                     & (2U <= (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x15U, 3)))));
    vlSelfRef.__PVT__blockreqq_dueto_highestseqnum_incollnq 
        = (0U != (IData)(vlSelfRef.__PVT__highest_seq_reqcmdq_is3_or_more));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__41(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__41\n"); );
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
