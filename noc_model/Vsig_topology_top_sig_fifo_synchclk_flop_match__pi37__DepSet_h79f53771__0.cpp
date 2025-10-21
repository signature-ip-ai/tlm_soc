// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop_match__pi37.h"

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop_match__pi37___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop_match__pi37* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_fifo_synchclk_flop_match__pi37___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_ptr_nxt = vlSelfRef.__PVT__rd_ptr;
    if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__rd_ptr_nxt = (7U & ((7U == (IData)(vlSelfRef.__PVT__rd_ptr))
                                              ? 0U : 
                                             ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__rd_ptr))));
    }
    vlSelfRef.__PVT__num_entries_nxt = vlSelfRef.__PVT__num_entries;
    if (((IData)(vlSelfRef.__PVT__fifo_wren) & (IData)(vlSelfRef.__PVT__fifo_rden))) {
        vlSelfRef.__PVT__num_entries_nxt = vlSelfRef.__PVT__num_entries;
    } else if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__num_entries_nxt = (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__num_entries)));
    } else if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__num_entries_nxt = (0xfU & 
                                            ((IData)(vlSelfRef.__PVT__num_entries) 
                                             - (IData)(1U)));
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__fifo_loc_valid_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__fifo_wren) 
                            & (0U == (IData)(vlSelfRef.__PVT__wr_ptr))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__fifo_rden) 
                                  & (0U == (IData)(vlSelfRef.__PVT__rd_ptr)))) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__fifo_loc_valid_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__fifo_wren) 
                            & (1U == (IData)(vlSelfRef.__PVT__wr_ptr))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__fifo_rden) 
                                  & (1U == (IData)(vlSelfRef.__PVT__rd_ptr)))) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__fifo_loc_valid_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__fifo_wren) 
                            & (2U == (IData)(vlSelfRef.__PVT__wr_ptr))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__fifo_rden) 
                                  & (2U == (IData)(vlSelfRef.__PVT__rd_ptr)))) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__fifo_loc_valid_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__fifo_wren) 
                            & (3U == (IData)(vlSelfRef.__PVT__wr_ptr))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__fifo_rden) 
                                  & (3U == (IData)(vlSelfRef.__PVT__rd_ptr)))) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__fifo_loc_valid_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__fifo_wren) 
                            & (4U == (IData)(vlSelfRef.__PVT__wr_ptr))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__fifo_rden) 
                                  & (4U == (IData)(vlSelfRef.__PVT__rd_ptr)))) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__fifo_loc_valid_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__fifo_wren) 
                            & (5U == (IData)(vlSelfRef.__PVT__wr_ptr))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__fifo_rden) 
                                  & (5U == (IData)(vlSelfRef.__PVT__rd_ptr)))) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__fifo_loc_valid_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__fifo_wren) 
                            & (6U == (IData)(vlSelfRef.__PVT__wr_ptr))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__fifo_rden) 
                                  & (6U == (IData)(vlSelfRef.__PVT__rd_ptr)))) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__fifo_loc_valid_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__fifo_wren) 
                            & (7U == (IData)(vlSelfRef.__PVT__wr_ptr))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__fifo_rden) 
                                  & (7U == (IData)(vlSelfRef.__PVT__rd_ptr)))) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 7U)))));
    vlSelfRef.__PVT__num_room_nxt = vlSelfRef.__PVT__num_room;
    if (((IData)(vlSelfRef.__PVT__fifo_wren) & (IData)(vlSelfRef.__PVT__fifo_rden))) {
        vlSelfRef.__PVT__num_room_nxt = vlSelfRef.__PVT__num_room;
    } else if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__num_room_nxt = (0xfU & ((IData)(vlSelfRef.__PVT__num_room) 
                                                 - (IData)(1U)));
    } else if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__num_room_nxt = (0xfU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__num_room)));
    }
    vlSelfRef.__PVT__fifo_full_nxt = (8U == (IData)(vlSelfRef.__PVT__num_entries_nxt));
    vlSelfRef.__PVT__fifo_empty_nxt = (0U == (IData)(vlSelfRef.__PVT__num_entries_nxt));
    vlSelfRef.__PVT__fiforoom_atlst4_nxt = (3U < (IData)(vlSelfRef.__PVT__num_room_nxt));
    vlSelfRef.__PVT__fifohas_1room_nxt = (1U == (IData)(vlSelfRef.__PVT__num_room_nxt));
    vlSelfRef.__PVT__fifohas_2room_nxt = (2U == (IData)(vlSelfRef.__PVT__num_room_nxt));
    vlSelfRef.__PVT__fifohas_3room_nxt = (3U == (IData)(vlSelfRef.__PVT__num_room_nxt));
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop_match__pi37___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop_match__pi37* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_fifo_synchclk_flop_match__pi37___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0__0\n"); );
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
    // Body
    vlSelfRef.__VdlySet__fifo_loc__v0 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v1 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v2 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v3 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v4 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v5 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v6 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v7 = 0U;
    vlSelfRef.__Vdly__fifo_full = vlSelfRef.__PVT__fifo_full;
    vlSelfRef.__Vdly__fifohas_1room = vlSelfRef.__PVT__fifohas_1room;
    vlSelfRef.__Vdly__fifohas_2room = vlSelfRef.__PVT__fifohas_2room;
    vlSelfRef.__Vdly__fifohas_3room = vlSelfRef.__PVT__fifohas_3room;
    vlSelfRef.__Vdly__num_entries = vlSelfRef.__PVT__num_entries;
    vlSelfRef.__Vdly__num_room = vlSelfRef.__PVT__num_room;
    vlSelfRef.__Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    vlSelfRef.__Vdly__fiforoom_atlst4 = vlSelfRef.__PVT__fiforoom_atlst4;
    vlSelfRef.__Vdly__fifo_empty = vlSelfRef.__PVT__fifo_empty;
    vlSelfRef.__Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    vlSelfRef.__Vdly__fifo_loc_valid = vlSelfRef.__PVT__fifo_loc_valid;
    VL_CONST_W_1X(155,__Vtemp_1,0x00000000);
    VL_COND_WIWW(155, vlSelfRef.__VdlyVal__fifo_loc__v0, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0U], __Vtemp_1);
    vlSelfRef.__VdlySet__fifo_loc__v0 = 1U;
    VL_CONST_W_1X(155,__Vtemp_2,0x00000000);
    VL_COND_WIWW(155, vlSelfRef.__VdlyVal__fifo_loc__v1, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[1U], __Vtemp_2);
    vlSelfRef.__VdlySet__fifo_loc__v1 = 1U;
    VL_CONST_W_1X(155,__Vtemp_3,0x00000000);
    VL_COND_WIWW(155, vlSelfRef.__VdlyVal__fifo_loc__v2, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[2U], __Vtemp_3);
    vlSelfRef.__VdlySet__fifo_loc__v2 = 1U;
    VL_CONST_W_1X(155,__Vtemp_4,0x00000000);
    VL_COND_WIWW(155, vlSelfRef.__VdlyVal__fifo_loc__v3, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[3U], __Vtemp_4);
    vlSelfRef.__VdlySet__fifo_loc__v3 = 1U;
    VL_CONST_W_1X(155,__Vtemp_5,0x00000000);
    VL_COND_WIWW(155, vlSelfRef.__VdlyVal__fifo_loc__v4, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[4U], __Vtemp_5);
    vlSelfRef.__VdlySet__fifo_loc__v4 = 1U;
    VL_CONST_W_1X(155,__Vtemp_6,0x00000000);
    VL_COND_WIWW(155, vlSelfRef.__VdlyVal__fifo_loc__v5, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[5U], __Vtemp_6);
    vlSelfRef.__VdlySet__fifo_loc__v5 = 1U;
    VL_CONST_W_1X(155,__Vtemp_7,0x00000000);
    VL_COND_WIWW(155, vlSelfRef.__VdlyVal__fifo_loc__v6, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[6U], __Vtemp_7);
    vlSelfRef.__VdlySet__fifo_loc__v6 = 1U;
    VL_CONST_W_1X(155,__Vtemp_8,0x00000000);
    VL_COND_WIWW(155, vlSelfRef.__VdlyVal__fifo_loc__v7, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[7U], __Vtemp_8);
    vlSelfRef.__VdlySet__fifo_loc__v7 = 1U;
    if (vlSelfRef.__PVT__rstb) {
        vlSelfRef.__Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr_nxt;
        vlSelfRef.__Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr_nxt;
        vlSelfRef.__Vdly__num_entries = vlSelfRef.__PVT__num_entries_nxt;
        vlSelfRef.__Vdly__num_room = vlSelfRef.__PVT__num_room_nxt;
        vlSelfRef.__Vdly__fifo_full = vlSelfRef.__PVT__fifo_full_nxt;
        vlSelfRef.__Vdly__fifo_empty = vlSelfRef.__PVT__fifo_empty_nxt;
        vlSelfRef.__Vdly__fiforoom_atlst4 = vlSelfRef.__PVT__fiforoom_atlst4_nxt;
        vlSelfRef.__Vdly__fifo_loc_valid = vlSelfRef.__PVT__fifo_loc_valid_nxt;
        vlSelfRef.__Vdly__fifohas_1room = vlSelfRef.__PVT__fifohas_1room_nxt;
        vlSelfRef.__Vdly__fifohas_2room = vlSelfRef.__PVT__fifohas_2room_nxt;
        vlSelfRef.__Vdly__fifohas_3room = vlSelfRef.__PVT__fifohas_3room_nxt;
    } else {
        vlSelfRef.__Vdly__wr_ptr = 0U;
        vlSelfRef.__Vdly__rd_ptr = 0U;
        vlSelfRef.__Vdly__num_entries = 0U;
        vlSelfRef.__Vdly__num_room = 8U;
        vlSelfRef.__Vdly__fifo_full = 0U;
        vlSelfRef.__Vdly__fifo_empty = 1U;
        vlSelfRef.__Vdly__fiforoom_atlst4 = 1U;
        vlSelfRef.__Vdly__fifo_loc_valid = 0U;
        vlSelfRef.__Vdly__fifohas_1room = 0U;
        vlSelfRef.__Vdly__fifohas_2room = 0U;
        vlSelfRef.__Vdly__fifohas_3room = 0U;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v0) {
        VL_ASSIGN_W(155,vlSelfRef.__PVT__fifo_loc[0U], vlSelfRef.__VdlyVal__fifo_loc__v0);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v1) {
        VL_ASSIGN_W(155,vlSelfRef.__PVT__fifo_loc[1U], vlSelfRef.__VdlyVal__fifo_loc__v1);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v2) {
        VL_ASSIGN_W(155,vlSelfRef.__PVT__fifo_loc[2U], vlSelfRef.__VdlyVal__fifo_loc__v2);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v3) {
        VL_ASSIGN_W(155,vlSelfRef.__PVT__fifo_loc[3U], vlSelfRef.__VdlyVal__fifo_loc__v3);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v4) {
        VL_ASSIGN_W(155,vlSelfRef.__PVT__fifo_loc[4U], vlSelfRef.__VdlyVal__fifo_loc__v4);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v5) {
        VL_ASSIGN_W(155,vlSelfRef.__PVT__fifo_loc[5U], vlSelfRef.__VdlyVal__fifo_loc__v5);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v6) {
        VL_ASSIGN_W(155,vlSelfRef.__PVT__fifo_loc[6U], vlSelfRef.__VdlyVal__fifo_loc__v6);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v7) {
        VL_ASSIGN_W(155,vlSelfRef.__PVT__fifo_loc[7U], vlSelfRef.__VdlyVal__fifo_loc__v7);
    }
    vlSelfRef.__PVT__fifo_full = vlSelfRef.__Vdly__fifo_full;
    vlSelfRef.__PVT__fifohas_1room = vlSelfRef.__Vdly__fifohas_1room;
    vlSelfRef.__PVT__fifohas_2room = vlSelfRef.__Vdly__fifohas_2room;
    vlSelfRef.__PVT__fifohas_3room = vlSelfRef.__Vdly__fifohas_3room;
    vlSelfRef.__PVT__num_entries = vlSelfRef.__Vdly__num_entries;
    vlSelfRef.__PVT__num_room = vlSelfRef.__Vdly__num_room;
    vlSelfRef.__PVT__wr_ptr = vlSelfRef.__Vdly__wr_ptr;
    vlSelfRef.__PVT__fiforoom_atlst4 = vlSelfRef.__Vdly__fiforoom_atlst4;
    vlSelfRef.__PVT__fifo_empty = vlSelfRef.__Vdly__fifo_empty;
    vlSelfRef.__PVT__rd_ptr = vlSelfRef.__Vdly__rd_ptr;
    vlSelfRef.__PVT__fifo_loc_valid = vlSelfRef.__Vdly__fifo_loc_valid;
    vlSelfRef.__PVT__fifo_loc_match_field[0U] = (0x3fffffffffffULL 
                                                 & VL_SEL_QWII(155, 
                                                               vlSelfRef.__PVT__fifo_loc
                                                               [0U], 0x4eU, 46));
    vlSelfRef.__PVT__fifo_loc_match_field[1U] = (0x3fffffffffffULL 
                                                 & VL_SEL_QWII(155, 
                                                               vlSelfRef.__PVT__fifo_loc
                                                               [1U], 0x4eU, 46));
    vlSelfRef.__PVT__fifo_loc_match_field[2U] = (0x3fffffffffffULL 
                                                 & VL_SEL_QWII(155, 
                                                               vlSelfRef.__PVT__fifo_loc
                                                               [2U], 0x4eU, 46));
    vlSelfRef.__PVT__fifo_loc_match_field[3U] = (0x3fffffffffffULL 
                                                 & VL_SEL_QWII(155, 
                                                               vlSelfRef.__PVT__fifo_loc
                                                               [3U], 0x4eU, 46));
    vlSelfRef.__PVT__fifo_loc_match_field[4U] = (0x3fffffffffffULL 
                                                 & VL_SEL_QWII(155, 
                                                               vlSelfRef.__PVT__fifo_loc
                                                               [4U], 0x4eU, 46));
    vlSelfRef.__PVT__fifo_loc_match_field[5U] = (0x3fffffffffffULL 
                                                 & VL_SEL_QWII(155, 
                                                               vlSelfRef.__PVT__fifo_loc
                                                               [5U], 0x4eU, 46));
    vlSelfRef.__PVT__fifo_loc_match_field[6U] = (0x3fffffffffffULL 
                                                 & VL_SEL_QWII(155, 
                                                               vlSelfRef.__PVT__fifo_loc
                                                               [6U], 0x4eU, 46));
    vlSelfRef.__PVT__fifo_loc_match_field[7U] = (0x3fffffffffffULL 
                                                 & VL_SEL_QWII(155, 
                                                               vlSelfRef.__PVT__fifo_loc
                                                               [7U], 0x4eU, 46));
    VL_ASSIGN_W(155,vlSelfRef.__PVT__fifo_rddata, vlSelfRef.__PVT__fifo_loc
                [vlSelfRef.__PVT__rd_ptr]);
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop_match__pi37___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop_match__pi37* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_fifo_synchclk_flop_match__pi37___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    CData/*31:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    CData/*31:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<5>/*159:0*/ __Vtemp_16;
    // Body
    vlSelfRef.__PVT__wr_ptr_nxt = vlSelfRef.__PVT__wr_ptr;
    if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__wr_ptr_nxt = (7U & ((7U == (IData)(vlSelfRef.__PVT__wr_ptr))
                                              ? 0U : 
                                             ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__wr_ptr))));
    }
    __Vtemp_1 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (0U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(155, __Vtemp_2, __Vtemp_1, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0U]);
    VL_ASSIGN_W(155,vlSelfRef.__PVT__fifo_loc_nxt[0U], __Vtemp_2);
    __Vtemp_3 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (1U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(155, __Vtemp_4, __Vtemp_3, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[1U]);
    VL_ASSIGN_W(155,vlSelfRef.__PVT__fifo_loc_nxt[1U], __Vtemp_4);
    __Vtemp_5 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (2U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(155, __Vtemp_6, __Vtemp_5, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[2U]);
    VL_ASSIGN_W(155,vlSelfRef.__PVT__fifo_loc_nxt[2U], __Vtemp_6);
    __Vtemp_7 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (3U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(155, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[3U]);
    VL_ASSIGN_W(155,vlSelfRef.__PVT__fifo_loc_nxt[3U], __Vtemp_8);
    __Vtemp_9 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (4U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(155, __Vtemp_10, __Vtemp_9, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[4U]);
    VL_ASSIGN_W(155,vlSelfRef.__PVT__fifo_loc_nxt[4U], __Vtemp_10);
    __Vtemp_11 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (5U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(155, __Vtemp_12, __Vtemp_11, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[5U]);
    VL_ASSIGN_W(155,vlSelfRef.__PVT__fifo_loc_nxt[5U], __Vtemp_12);
    __Vtemp_13 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (6U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(155, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[6U]);
    VL_ASSIGN_W(155,vlSelfRef.__PVT__fifo_loc_nxt[6U], __Vtemp_14);
    __Vtemp_15 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (7U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(155, __Vtemp_16, __Vtemp_15, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[7U]);
    VL_ASSIGN_W(155,vlSelfRef.__PVT__fifo_loc_nxt[7U], __Vtemp_16);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__match_loc_all, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 0U) 
                     & (vlSelfRef.__PVT__match_data_in 
                        == vlSelfRef.__PVT__fifo_loc_match_field
                        [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__match_loc_all, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 1U) 
                     & (vlSelfRef.__PVT__match_data_in 
                        == vlSelfRef.__PVT__fifo_loc_match_field
                        [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__match_loc_all, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 2U) 
                     & (vlSelfRef.__PVT__match_data_in 
                        == vlSelfRef.__PVT__fifo_loc_match_field
                        [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__match_loc_all, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 3U) 
                     & (vlSelfRef.__PVT__match_data_in 
                        == vlSelfRef.__PVT__fifo_loc_match_field
                        [3U])));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__match_loc_all, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 4U) 
                     & (vlSelfRef.__PVT__match_data_in 
                        == vlSelfRef.__PVT__fifo_loc_match_field
                        [4U])));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__match_loc_all, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 5U) 
                     & (vlSelfRef.__PVT__match_data_in 
                        == vlSelfRef.__PVT__fifo_loc_match_field
                        [5U])));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__match_loc_all, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 6U) 
                     & (vlSelfRef.__PVT__match_data_in 
                        == vlSelfRef.__PVT__fifo_loc_match_field
                        [6U])));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__match_loc_all, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 7U) 
                     & (vlSelfRef.__PVT__match_data_in 
                        == vlSelfRef.__PVT__fifo_loc_match_field
                        [7U])));
    vlSelfRef.__PVT__itis_a_match = (0U != (IData)(vlSelfRef.__PVT__match_loc_all));
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop_match__pi37___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0__1(Vsig_topology_top_sig_fifo_synchclk_flop_match__pi37* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_fifo_synchclk_flop_match__pi37___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_ptr_nxt = vlSelfRef.__PVT__rd_ptr;
    if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__rd_ptr_nxt = (7U & ((7U == (IData)(vlSelfRef.__PVT__rd_ptr))
                                              ? 0U : 
                                             ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__rd_ptr))));
    }
    vlSelfRef.__PVT__num_entries_nxt = vlSelfRef.__PVT__num_entries;
    if (((IData)(vlSelfRef.__PVT__fifo_wren) & (IData)(vlSelfRef.__PVT__fifo_rden))) {
        vlSelfRef.__PVT__num_entries_nxt = vlSelfRef.__PVT__num_entries;
    } else if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__num_entries_nxt = (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__num_entries)));
    } else if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__num_entries_nxt = (0xfU & 
                                            ((IData)(vlSelfRef.__PVT__num_entries) 
                                             - (IData)(1U)));
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__fifo_loc_valid_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__fifo_wren) 
                            & (0U == (IData)(vlSelfRef.__PVT__wr_ptr))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__fifo_rden) 
                                  & (0U == (IData)(vlSelfRef.__PVT__rd_ptr)))) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__fifo_loc_valid_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__fifo_wren) 
                            & (1U == (IData)(vlSelfRef.__PVT__wr_ptr))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__fifo_rden) 
                                  & (1U == (IData)(vlSelfRef.__PVT__rd_ptr)))) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__fifo_loc_valid_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__fifo_wren) 
                            & (2U == (IData)(vlSelfRef.__PVT__wr_ptr))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__fifo_rden) 
                                  & (2U == (IData)(vlSelfRef.__PVT__rd_ptr)))) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__fifo_loc_valid_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__fifo_wren) 
                            & (3U == (IData)(vlSelfRef.__PVT__wr_ptr))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__fifo_rden) 
                                  & (3U == (IData)(vlSelfRef.__PVT__rd_ptr)))) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__fifo_loc_valid_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__fifo_wren) 
                            & (4U == (IData)(vlSelfRef.__PVT__wr_ptr))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__fifo_rden) 
                                  & (4U == (IData)(vlSelfRef.__PVT__rd_ptr)))) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__fifo_loc_valid_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__fifo_wren) 
                            & (5U == (IData)(vlSelfRef.__PVT__wr_ptr))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__fifo_rden) 
                                  & (5U == (IData)(vlSelfRef.__PVT__rd_ptr)))) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__fifo_loc_valid_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__fifo_wren) 
                            & (6U == (IData)(vlSelfRef.__PVT__wr_ptr))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__fifo_rden) 
                                  & (6U == (IData)(vlSelfRef.__PVT__rd_ptr)))) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__fifo_loc_valid_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__fifo_wren) 
                            & (7U == (IData)(vlSelfRef.__PVT__wr_ptr))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__fifo_rden) 
                                  & (7U == (IData)(vlSelfRef.__PVT__rd_ptr)))) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__fifo_loc_valid), 7U)))));
    vlSelfRef.__PVT__num_room_nxt = vlSelfRef.__PVT__num_room;
    if (((IData)(vlSelfRef.__PVT__fifo_wren) & (IData)(vlSelfRef.__PVT__fifo_rden))) {
        vlSelfRef.__PVT__num_room_nxt = vlSelfRef.__PVT__num_room;
    } else if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__num_room_nxt = (0xfU & ((IData)(vlSelfRef.__PVT__num_room) 
                                                 - (IData)(1U)));
    } else if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__num_room_nxt = (0xfU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__num_room)));
    }
    vlSelfRef.__PVT__fifo_full_nxt = (8U == (IData)(vlSelfRef.__PVT__num_entries_nxt));
    vlSelfRef.__PVT__fifo_empty_nxt = (0U == (IData)(vlSelfRef.__PVT__num_entries_nxt));
    vlSelfRef.__PVT__fiforoom_atlst4_nxt = (3U < (IData)(vlSelfRef.__PVT__num_room_nxt));
    vlSelfRef.__PVT__fifohas_1room_nxt = (1U == (IData)(vlSelfRef.__PVT__num_room_nxt));
    vlSelfRef.__PVT__fifohas_2room_nxt = (2U == (IData)(vlSelfRef.__PVT__num_room_nxt));
    vlSelfRef.__PVT__fifohas_3room_nxt = (3U == (IData)(vlSelfRef.__PVT__num_room_nxt));
}
