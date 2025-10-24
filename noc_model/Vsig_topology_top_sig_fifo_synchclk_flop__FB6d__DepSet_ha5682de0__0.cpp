// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop__FB6d.h"

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop__FB6d___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop__FB6d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__FB6d___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_16;
    // Body
    vlSelfRef.__VdlySet__fifo_loc__v0 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v1 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v2 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v3 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v4 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v5 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v6 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v7 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v8 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v9 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v10 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v11 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v12 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v13 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v14 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v15 = 0U;
    vlSelfRef.__Vdly__fiforoom_atlst3 = vlSelfRef.__PVT__fiforoom_atlst3;
    vlSelfRef.__Vdly__fifo_full = vlSelfRef.__PVT__fifo_full;
    vlSelfRef.__Vdly__num_entries = vlSelfRef.__PVT__num_entries;
    vlSelfRef.__Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    vlSelfRef.__Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    vlSelfRef.__Vdly__fifo_empty = vlSelfRef.__PVT__fifo_empty;
    VL_CONST_W_1X(109,__Vtemp_1,0x00000000);
    VL_COND_WIWW(109, vlSelfRef.__VdlyVal__fifo_loc__v0, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0U], __Vtemp_1);
    vlSelfRef.__VdlySet__fifo_loc__v0 = 1U;
    VL_CONST_W_1X(109,__Vtemp_2,0x00000000);
    VL_COND_WIWW(109, vlSelfRef.__VdlyVal__fifo_loc__v1, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[1U], __Vtemp_2);
    vlSelfRef.__VdlySet__fifo_loc__v1 = 1U;
    VL_CONST_W_1X(109,__Vtemp_3,0x00000000);
    VL_COND_WIWW(109, vlSelfRef.__VdlyVal__fifo_loc__v2, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[2U], __Vtemp_3);
    vlSelfRef.__VdlySet__fifo_loc__v2 = 1U;
    VL_CONST_W_1X(109,__Vtemp_4,0x00000000);
    VL_COND_WIWW(109, vlSelfRef.__VdlyVal__fifo_loc__v3, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[3U], __Vtemp_4);
    vlSelfRef.__VdlySet__fifo_loc__v3 = 1U;
    VL_CONST_W_1X(109,__Vtemp_5,0x00000000);
    VL_COND_WIWW(109, vlSelfRef.__VdlyVal__fifo_loc__v4, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[4U], __Vtemp_5);
    vlSelfRef.__VdlySet__fifo_loc__v4 = 1U;
    VL_CONST_W_1X(109,__Vtemp_6,0x00000000);
    VL_COND_WIWW(109, vlSelfRef.__VdlyVal__fifo_loc__v5, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[5U], __Vtemp_6);
    vlSelfRef.__VdlySet__fifo_loc__v5 = 1U;
    VL_CONST_W_1X(109,__Vtemp_7,0x00000000);
    VL_COND_WIWW(109, vlSelfRef.__VdlyVal__fifo_loc__v6, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[6U], __Vtemp_7);
    vlSelfRef.__VdlySet__fifo_loc__v6 = 1U;
    VL_CONST_W_1X(109,__Vtemp_8,0x00000000);
    VL_COND_WIWW(109, vlSelfRef.__VdlyVal__fifo_loc__v7, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[7U], __Vtemp_8);
    vlSelfRef.__VdlySet__fifo_loc__v7 = 1U;
    VL_CONST_W_1X(109,__Vtemp_9,0x00000000);
    VL_COND_WIWW(109, vlSelfRef.__VdlyVal__fifo_loc__v8, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[8U], __Vtemp_9);
    vlSelfRef.__VdlySet__fifo_loc__v8 = 1U;
    VL_CONST_W_1X(109,__Vtemp_10,0x00000000);
    VL_COND_WIWW(109, vlSelfRef.__VdlyVal__fifo_loc__v9, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[9U], __Vtemp_10);
    vlSelfRef.__VdlySet__fifo_loc__v9 = 1U;
    VL_CONST_W_1X(109,__Vtemp_11,0x00000000);
    VL_COND_WIWW(109, vlSelfRef.__VdlyVal__fifo_loc__v10, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0xaU], __Vtemp_11);
    vlSelfRef.__VdlySet__fifo_loc__v10 = 1U;
    VL_CONST_W_1X(109,__Vtemp_12,0x00000000);
    VL_COND_WIWW(109, vlSelfRef.__VdlyVal__fifo_loc__v11, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0xbU], __Vtemp_12);
    vlSelfRef.__VdlySet__fifo_loc__v11 = 1U;
    VL_CONST_W_1X(109,__Vtemp_13,0x00000000);
    VL_COND_WIWW(109, vlSelfRef.__VdlyVal__fifo_loc__v12, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0xcU], __Vtemp_13);
    vlSelfRef.__VdlySet__fifo_loc__v12 = 1U;
    VL_CONST_W_1X(109,__Vtemp_14,0x00000000);
    VL_COND_WIWW(109, vlSelfRef.__VdlyVal__fifo_loc__v13, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0xdU], __Vtemp_14);
    vlSelfRef.__VdlySet__fifo_loc__v13 = 1U;
    VL_CONST_W_1X(109,__Vtemp_15,0x00000000);
    VL_COND_WIWW(109, vlSelfRef.__VdlyVal__fifo_loc__v14, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0xeU], __Vtemp_15);
    vlSelfRef.__VdlySet__fifo_loc__v14 = 1U;
    VL_CONST_W_1X(109,__Vtemp_16,0x00000000);
    VL_COND_WIWW(109, vlSelfRef.__VdlyVal__fifo_loc__v15, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0xfU], __Vtemp_16);
    vlSelfRef.__VdlySet__fifo_loc__v15 = 1U;
    if (vlSelfRef.__PVT__rstb) {
        vlSelfRef.__Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr_nxt;
        vlSelfRef.__Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr_nxt;
        vlSelfRef.__Vdly__num_entries = vlSelfRef.__PVT__num_entries_nxt;
        vlSelfRef.__Vdly__fifo_full = vlSelfRef.__PVT__fifo_full_nxt;
        vlSelfRef.__Vdly__fifo_empty = vlSelfRef.__PVT__fifo_empty_nxt;
        vlSelfRef.__Vdly__fiforoom_atlst3 = vlSelfRef.__PVT__fiforoom_atlst3_nxt;
    } else {
        vlSelfRef.__Vdly__wr_ptr = 0U;
        vlSelfRef.__Vdly__rd_ptr = 0U;
        vlSelfRef.__Vdly__num_entries = 0U;
        vlSelfRef.__Vdly__fifo_full = 0U;
        vlSelfRef.__Vdly__fifo_empty = 1U;
        vlSelfRef.__Vdly__fiforoom_atlst3 = 1U;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v0) {
        VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc[0U], vlSelfRef.__VdlyVal__fifo_loc__v0);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v1) {
        VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc[1U], vlSelfRef.__VdlyVal__fifo_loc__v1);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v2) {
        VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc[2U], vlSelfRef.__VdlyVal__fifo_loc__v2);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v3) {
        VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc[3U], vlSelfRef.__VdlyVal__fifo_loc__v3);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v4) {
        VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc[4U], vlSelfRef.__VdlyVal__fifo_loc__v4);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v5) {
        VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc[5U], vlSelfRef.__VdlyVal__fifo_loc__v5);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v6) {
        VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc[6U], vlSelfRef.__VdlyVal__fifo_loc__v6);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v7) {
        VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc[7U], vlSelfRef.__VdlyVal__fifo_loc__v7);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v8) {
        VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc[8U], vlSelfRef.__VdlyVal__fifo_loc__v8);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v9) {
        VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc[9U], vlSelfRef.__VdlyVal__fifo_loc__v9);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v10) {
        VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc[0xaU], vlSelfRef.__VdlyVal__fifo_loc__v10);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v11) {
        VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc[0xbU], vlSelfRef.__VdlyVal__fifo_loc__v11);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v12) {
        VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc[0xcU], vlSelfRef.__VdlyVal__fifo_loc__v12);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v13) {
        VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc[0xdU], vlSelfRef.__VdlyVal__fifo_loc__v13);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v14) {
        VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc[0xeU], vlSelfRef.__VdlyVal__fifo_loc__v14);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v15) {
        VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc[0xfU], vlSelfRef.__VdlyVal__fifo_loc__v15);
    }
    vlSelfRef.__PVT__fiforoom_atlst3 = vlSelfRef.__Vdly__fiforoom_atlst3;
    vlSelfRef.__PVT__fifo_full = vlSelfRef.__Vdly__fifo_full;
    vlSelfRef.__PVT__num_entries = vlSelfRef.__Vdly__num_entries;
    vlSelfRef.__PVT__wr_ptr = vlSelfRef.__Vdly__wr_ptr;
    vlSelfRef.__PVT__rd_ptr = vlSelfRef.__Vdly__rd_ptr;
    vlSelfRef.__PVT__fifo_empty = vlSelfRef.__Vdly__fifo_empty;
    VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_rddata, vlSelfRef.__PVT__fifo_loc
                [vlSelfRef.__PVT__rd_ptr]);
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop__FB6d___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop__FB6d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__FB6d___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_ptr_nxt = vlSelfRef.__PVT__wr_ptr;
    if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__wr_ptr_nxt = (0xfU & ((0xfU 
                                                == (IData)(vlSelfRef.__PVT__wr_ptr))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__wr_ptr))));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop__FB6d___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0__1(Vsig_topology_top_sig_fifo_synchclk_flop__FB6d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__FB6d___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    CData/*31:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    CData/*31:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_16;
    CData/*31:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_18;
    CData/*31:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_20;
    CData/*31:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_22;
    CData/*31:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    CData/*31:0*/ __Vtemp_25;
    VlWide<4>/*127:0*/ __Vtemp_26;
    CData/*31:0*/ __Vtemp_27;
    VlWide<4>/*127:0*/ __Vtemp_28;
    CData/*31:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_30;
    CData/*31:0*/ __Vtemp_31;
    VlWide<4>/*127:0*/ __Vtemp_32;
    // Body
    __Vtemp_1 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (0U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(109, __Vtemp_2, __Vtemp_1, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0U]);
    VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc_nxt[0U], __Vtemp_2);
    __Vtemp_3 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (1U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(109, __Vtemp_4, __Vtemp_3, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[1U]);
    VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc_nxt[1U], __Vtemp_4);
    __Vtemp_5 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (2U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(109, __Vtemp_6, __Vtemp_5, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[2U]);
    VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc_nxt[2U], __Vtemp_6);
    __Vtemp_7 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (3U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(109, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[3U]);
    VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc_nxt[3U], __Vtemp_8);
    __Vtemp_9 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (4U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(109, __Vtemp_10, __Vtemp_9, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[4U]);
    VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc_nxt[4U], __Vtemp_10);
    __Vtemp_11 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (5U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(109, __Vtemp_12, __Vtemp_11, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[5U]);
    VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc_nxt[5U], __Vtemp_12);
    __Vtemp_13 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (6U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(109, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[6U]);
    VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc_nxt[6U], __Vtemp_14);
    __Vtemp_15 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (7U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(109, __Vtemp_16, __Vtemp_15, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[7U]);
    VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc_nxt[7U], __Vtemp_16);
    __Vtemp_17 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (8U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(109, __Vtemp_18, __Vtemp_17, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[8U]);
    VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc_nxt[8U], __Vtemp_18);
    __Vtemp_19 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (9U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(109, __Vtemp_20, __Vtemp_19, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[9U]);
    VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc_nxt[9U], __Vtemp_20);
    __Vtemp_21 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0xaU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(109, __Vtemp_22, __Vtemp_21, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0xaU]);
    VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc_nxt[0xaU], __Vtemp_22);
    __Vtemp_23 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0xbU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(109, __Vtemp_24, __Vtemp_23, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0xbU]);
    VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc_nxt[0xbU], __Vtemp_24);
    __Vtemp_25 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0xcU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(109, __Vtemp_26, __Vtemp_25, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0xcU]);
    VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc_nxt[0xcU], __Vtemp_26);
    __Vtemp_27 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0xdU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(109, __Vtemp_28, __Vtemp_27, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0xdU]);
    VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc_nxt[0xdU], __Vtemp_28);
    __Vtemp_29 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0xeU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(109, __Vtemp_30, __Vtemp_29, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0xeU]);
    VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc_nxt[0xeU], __Vtemp_30);
    __Vtemp_31 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0xfU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(109, __Vtemp_32, __Vtemp_31, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0xfU]);
    VL_ASSIGN_W(109,vlSelfRef.__PVT__fifo_loc_nxt[0xfU], __Vtemp_32);
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop__FB6d___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0__2(Vsig_topology_top_sig_fifo_synchclk_flop__FB6d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__FB6d___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_ptr_nxt = vlSelfRef.__PVT__rd_ptr;
    if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__rd_ptr_nxt = (0xfU & ((0xfU 
                                                == (IData)(vlSelfRef.__PVT__rd_ptr))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__rd_ptr))));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop__FB6d___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0__3(Vsig_topology_top_sig_fifo_synchclk_flop__FB6d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__FB6d___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__num_entries_nxt = vlSelfRef.__PVT__num_entries;
    if (((IData)(vlSelfRef.__PVT__fifo_wren) & (IData)(vlSelfRef.__PVT__fifo_rden))) {
        vlSelfRef.__PVT__num_entries_nxt = vlSelfRef.__PVT__num_entries;
    } else if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__num_entries_nxt = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__num_entries)));
    } else if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__num_entries_nxt = (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__num_entries) 
                                             - (IData)(1U)));
    }
    vlSelfRef.__PVT__fifo_full_nxt = (0x10U == (IData)(vlSelfRef.__PVT__num_entries_nxt));
    vlSelfRef.__PVT__fifo_empty_nxt = (0U == (IData)(vlSelfRef.__PVT__num_entries_nxt));
    vlSelfRef.__PVT__fiforoom_atlst3_nxt = (2ULL < 
                                            (0x3ffffffffULL 
                                             & (0x10ULL 
                                                - VL_EXTEND_QI(34,5, (IData)(vlSelfRef.__PVT__num_entries_nxt)))));
}
