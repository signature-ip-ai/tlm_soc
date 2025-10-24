// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop__pi33.h"

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop__pi33___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__pi33___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    CData/*31:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    CData/*31:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    CData/*31:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    CData/*31:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    CData/*31:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    CData/*31:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    CData/*31:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    CData/*31:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    CData/*31:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    CData/*31:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    CData/*31:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    CData/*31:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    CData/*31:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    CData/*31:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_40;
    CData/*31:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_42;
    CData/*31:0*/ __Vtemp_43;
    VlWide<3>/*95:0*/ __Vtemp_44;
    CData/*31:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_46;
    CData/*31:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_48;
    CData/*31:0*/ __Vtemp_49;
    VlWide<3>/*95:0*/ __Vtemp_50;
    CData/*31:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_52;
    CData/*31:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_54;
    CData/*31:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_56;
    CData/*31:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_58;
    CData/*31:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_60;
    CData/*31:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_62;
    CData/*31:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_64;
    // Body
    vlSelfRef.__PVT__wr_ptr_nxt = vlSelfRef.__PVT__wr_ptr;
    if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__wr_ptr_nxt = (0x1fU & ((0x1fU 
                                                 == (IData)(vlSelfRef.__PVT__wr_ptr))
                                                 ? 0U
                                                 : 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__wr_ptr))));
    }
    vlSelfRef.__PVT__num_entries_nxt = vlSelfRef.__PVT__num_entries;
    if (((IData)(vlSelfRef.__PVT__fifo_wren) & (IData)(vlSelfRef.__PVT__fifo_rden))) {
        vlSelfRef.__PVT__num_entries_nxt = vlSelfRef.__PVT__num_entries;
    } else if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__num_entries_nxt = (0x3fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__num_entries)));
    } else if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__num_entries_nxt = (0x3fU & 
                                            ((IData)(vlSelfRef.__PVT__num_entries) 
                                             - (IData)(1U)));
    }
    __Vtemp_1 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (0U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_2, __Vtemp_1, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0U], __Vtemp_2);
    __Vtemp_3 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (1U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_4, __Vtemp_3, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[1U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[1U], __Vtemp_4);
    __Vtemp_5 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (2U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_6, __Vtemp_5, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[2U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[2U], __Vtemp_6);
    __Vtemp_7 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (3U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[3U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[3U], __Vtemp_8);
    __Vtemp_9 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (4U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_10, __Vtemp_9, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[4U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[4U], __Vtemp_10);
    __Vtemp_11 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (5U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_12, __Vtemp_11, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[5U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[5U], __Vtemp_12);
    __Vtemp_13 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (6U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[6U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[6U], __Vtemp_14);
    __Vtemp_15 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (7U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_16, __Vtemp_15, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[7U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[7U], __Vtemp_16);
    __Vtemp_17 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (8U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_18, __Vtemp_17, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[8U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[8U], __Vtemp_18);
    __Vtemp_19 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (9U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_20, __Vtemp_19, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[9U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[9U], __Vtemp_20);
    __Vtemp_21 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0xaU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_22, __Vtemp_21, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0xaU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0xaU], __Vtemp_22);
    __Vtemp_23 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0xbU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_24, __Vtemp_23, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0xbU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0xbU], __Vtemp_24);
    __Vtemp_25 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0xcU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_26, __Vtemp_25, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0xcU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0xcU], __Vtemp_26);
    __Vtemp_27 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0xdU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_28, __Vtemp_27, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0xdU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0xdU], __Vtemp_28);
    __Vtemp_29 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0xeU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_30, __Vtemp_29, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0xeU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0xeU], __Vtemp_30);
    __Vtemp_31 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0xfU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_32, __Vtemp_31, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0xfU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0xfU], __Vtemp_32);
    __Vtemp_33 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x10U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_34, __Vtemp_33, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x10U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x10U], __Vtemp_34);
    __Vtemp_35 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x11U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_36, __Vtemp_35, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x11U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x11U], __Vtemp_36);
    __Vtemp_37 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x12U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_38, __Vtemp_37, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x12U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x12U], __Vtemp_38);
    __Vtemp_39 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x13U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_40, __Vtemp_39, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x13U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x13U], __Vtemp_40);
    __Vtemp_41 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x14U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_42, __Vtemp_41, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x14U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x14U], __Vtemp_42);
    __Vtemp_43 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x15U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_44, __Vtemp_43, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x15U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x15U], __Vtemp_44);
    __Vtemp_45 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x16U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_46, __Vtemp_45, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x16U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x16U], __Vtemp_46);
    __Vtemp_47 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x17U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_48, __Vtemp_47, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x17U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x17U], __Vtemp_48);
    __Vtemp_49 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x18U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_50, __Vtemp_49, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x18U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x18U], __Vtemp_50);
    __Vtemp_51 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x19U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_52, __Vtemp_51, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x19U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x19U], __Vtemp_52);
    __Vtemp_53 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x1aU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_54, __Vtemp_53, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x1aU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x1aU], __Vtemp_54);
    __Vtemp_55 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x1bU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_56, __Vtemp_55, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x1bU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x1bU], __Vtemp_56);
    __Vtemp_57 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x1cU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_58, __Vtemp_57, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x1cU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x1cU], __Vtemp_58);
    __Vtemp_59 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x1dU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_60, __Vtemp_59, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x1dU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x1dU], __Vtemp_60);
    __Vtemp_61 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x1eU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_62, __Vtemp_61, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x1eU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x1eU], __Vtemp_62);
    __Vtemp_63 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x1fU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_64, __Vtemp_63, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x1fU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x1fU], __Vtemp_64);
    vlSelfRef.__PVT__fifo_full_nxt = (0x20U == (IData)(vlSelfRef.__PVT__num_entries_nxt));
    vlSelfRef.__PVT__fifo_empty_nxt = (0U == (IData)(vlSelfRef.__PVT__num_entries_nxt));
    vlSelfRef.__PVT__fiforoom_atlst3_nxt = (2ULL < 
                                            (0x3ffffffffULL 
                                             & (0x20ULL 
                                                - VL_EXTEND_QI(34,6, (IData)(vlSelfRef.__PVT__num_entries_nxt)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop__pi33___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__pi33___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
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
    vlSelfRef.__VdlySet__fifo_loc__v16 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v17 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v18 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v19 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v20 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v21 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v22 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v23 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v24 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v25 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v26 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v27 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v28 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v29 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v30 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v31 = 0U;
    vlSelfRef.__Vdly__fiforoom_atlst3 = vlSelfRef.__PVT__fiforoom_atlst3;
    vlSelfRef.__Vdly__fifo_full = vlSelfRef.__PVT__fifo_full;
    vlSelfRef.__Vdly__num_entries = vlSelfRef.__PVT__num_entries;
    vlSelfRef.__Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    vlSelfRef.__Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    vlSelfRef.__Vdly__fifo_empty = vlSelfRef.__PVT__fifo_empty;
    VL_CONST_W_1X(74,__Vtemp_1,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v0, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0U], __Vtemp_1);
    vlSelfRef.__VdlySet__fifo_loc__v0 = 1U;
    VL_CONST_W_1X(74,__Vtemp_2,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v1, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[1U], __Vtemp_2);
    vlSelfRef.__VdlySet__fifo_loc__v1 = 1U;
    VL_CONST_W_1X(74,__Vtemp_3,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v2, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[2U], __Vtemp_3);
    vlSelfRef.__VdlySet__fifo_loc__v2 = 1U;
    VL_CONST_W_1X(74,__Vtemp_4,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v3, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[3U], __Vtemp_4);
    vlSelfRef.__VdlySet__fifo_loc__v3 = 1U;
    VL_CONST_W_1X(74,__Vtemp_5,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v4, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[4U], __Vtemp_5);
    vlSelfRef.__VdlySet__fifo_loc__v4 = 1U;
    VL_CONST_W_1X(74,__Vtemp_6,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v5, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[5U], __Vtemp_6);
    vlSelfRef.__VdlySet__fifo_loc__v5 = 1U;
    VL_CONST_W_1X(74,__Vtemp_7,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v6, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[6U], __Vtemp_7);
    vlSelfRef.__VdlySet__fifo_loc__v6 = 1U;
    VL_CONST_W_1X(74,__Vtemp_8,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v7, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[7U], __Vtemp_8);
    vlSelfRef.__VdlySet__fifo_loc__v7 = 1U;
    VL_CONST_W_1X(74,__Vtemp_9,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v8, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[8U], __Vtemp_9);
    vlSelfRef.__VdlySet__fifo_loc__v8 = 1U;
    VL_CONST_W_1X(74,__Vtemp_10,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v9, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[9U], __Vtemp_10);
    vlSelfRef.__VdlySet__fifo_loc__v9 = 1U;
    VL_CONST_W_1X(74,__Vtemp_11,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v10, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0xaU], __Vtemp_11);
    vlSelfRef.__VdlySet__fifo_loc__v10 = 1U;
    VL_CONST_W_1X(74,__Vtemp_12,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v11, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0xbU], __Vtemp_12);
    vlSelfRef.__VdlySet__fifo_loc__v11 = 1U;
    VL_CONST_W_1X(74,__Vtemp_13,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v12, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0xcU], __Vtemp_13);
    vlSelfRef.__VdlySet__fifo_loc__v12 = 1U;
    VL_CONST_W_1X(74,__Vtemp_14,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v13, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0xdU], __Vtemp_14);
    vlSelfRef.__VdlySet__fifo_loc__v13 = 1U;
    VL_CONST_W_1X(74,__Vtemp_15,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v14, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0xeU], __Vtemp_15);
    vlSelfRef.__VdlySet__fifo_loc__v14 = 1U;
    VL_CONST_W_1X(74,__Vtemp_16,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v15, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0xfU], __Vtemp_16);
    vlSelfRef.__VdlySet__fifo_loc__v15 = 1U;
    VL_CONST_W_1X(74,__Vtemp_17,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v16, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0x10U], __Vtemp_17);
    vlSelfRef.__VdlySet__fifo_loc__v16 = 1U;
    VL_CONST_W_1X(74,__Vtemp_18,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v17, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0x11U], __Vtemp_18);
    vlSelfRef.__VdlySet__fifo_loc__v17 = 1U;
    VL_CONST_W_1X(74,__Vtemp_19,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v18, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0x12U], __Vtemp_19);
    vlSelfRef.__VdlySet__fifo_loc__v18 = 1U;
    VL_CONST_W_1X(74,__Vtemp_20,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v19, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0x13U], __Vtemp_20);
    vlSelfRef.__VdlySet__fifo_loc__v19 = 1U;
    VL_CONST_W_1X(74,__Vtemp_21,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v20, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0x14U], __Vtemp_21);
    vlSelfRef.__VdlySet__fifo_loc__v20 = 1U;
    VL_CONST_W_1X(74,__Vtemp_22,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v21, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0x15U], __Vtemp_22);
    vlSelfRef.__VdlySet__fifo_loc__v21 = 1U;
    VL_CONST_W_1X(74,__Vtemp_23,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v22, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0x16U], __Vtemp_23);
    vlSelfRef.__VdlySet__fifo_loc__v22 = 1U;
    VL_CONST_W_1X(74,__Vtemp_24,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v23, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0x17U], __Vtemp_24);
    vlSelfRef.__VdlySet__fifo_loc__v23 = 1U;
    VL_CONST_W_1X(74,__Vtemp_25,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v24, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0x18U], __Vtemp_25);
    vlSelfRef.__VdlySet__fifo_loc__v24 = 1U;
    VL_CONST_W_1X(74,__Vtemp_26,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v25, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0x19U], __Vtemp_26);
    vlSelfRef.__VdlySet__fifo_loc__v25 = 1U;
    VL_CONST_W_1X(74,__Vtemp_27,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v26, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0x1aU], __Vtemp_27);
    vlSelfRef.__VdlySet__fifo_loc__v26 = 1U;
    VL_CONST_W_1X(74,__Vtemp_28,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v27, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0x1bU], __Vtemp_28);
    vlSelfRef.__VdlySet__fifo_loc__v27 = 1U;
    VL_CONST_W_1X(74,__Vtemp_29,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v28, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0x1cU], __Vtemp_29);
    vlSelfRef.__VdlySet__fifo_loc__v28 = 1U;
    VL_CONST_W_1X(74,__Vtemp_30,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v29, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0x1dU], __Vtemp_30);
    vlSelfRef.__VdlySet__fifo_loc__v29 = 1U;
    VL_CONST_W_1X(74,__Vtemp_31,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v30, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0x1eU], __Vtemp_31);
    vlSelfRef.__VdlySet__fifo_loc__v30 = 1U;
    VL_CONST_W_1X(74,__Vtemp_32,0x00000000);
    VL_COND_WIWW(74, vlSelfRef.__VdlyVal__fifo_loc__v31, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0x1fU], __Vtemp_32);
    vlSelfRef.__VdlySet__fifo_loc__v31 = 1U;
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
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0U], vlSelfRef.__VdlyVal__fifo_loc__v0);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v1) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[1U], vlSelfRef.__VdlyVal__fifo_loc__v1);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v2) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[2U], vlSelfRef.__VdlyVal__fifo_loc__v2);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v3) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[3U], vlSelfRef.__VdlyVal__fifo_loc__v3);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v4) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[4U], vlSelfRef.__VdlyVal__fifo_loc__v4);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v5) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[5U], vlSelfRef.__VdlyVal__fifo_loc__v5);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v6) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[6U], vlSelfRef.__VdlyVal__fifo_loc__v6);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v7) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[7U], vlSelfRef.__VdlyVal__fifo_loc__v7);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v8) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[8U], vlSelfRef.__VdlyVal__fifo_loc__v8);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v9) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[9U], vlSelfRef.__VdlyVal__fifo_loc__v9);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v10) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0xaU], vlSelfRef.__VdlyVal__fifo_loc__v10);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v11) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0xbU], vlSelfRef.__VdlyVal__fifo_loc__v11);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v12) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0xcU], vlSelfRef.__VdlyVal__fifo_loc__v12);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v13) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0xdU], vlSelfRef.__VdlyVal__fifo_loc__v13);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v14) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0xeU], vlSelfRef.__VdlyVal__fifo_loc__v14);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v15) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0xfU], vlSelfRef.__VdlyVal__fifo_loc__v15);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v16) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0x10U], vlSelfRef.__VdlyVal__fifo_loc__v16);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v17) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0x11U], vlSelfRef.__VdlyVal__fifo_loc__v17);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v18) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0x12U], vlSelfRef.__VdlyVal__fifo_loc__v18);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v19) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0x13U], vlSelfRef.__VdlyVal__fifo_loc__v19);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v20) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0x14U], vlSelfRef.__VdlyVal__fifo_loc__v20);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v21) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0x15U], vlSelfRef.__VdlyVal__fifo_loc__v21);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v22) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0x16U], vlSelfRef.__VdlyVal__fifo_loc__v22);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v23) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0x17U], vlSelfRef.__VdlyVal__fifo_loc__v23);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v24) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0x18U], vlSelfRef.__VdlyVal__fifo_loc__v24);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v25) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0x19U], vlSelfRef.__VdlyVal__fifo_loc__v25);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v26) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0x1aU], vlSelfRef.__VdlyVal__fifo_loc__v26);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v27) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0x1bU], vlSelfRef.__VdlyVal__fifo_loc__v27);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v28) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0x1cU], vlSelfRef.__VdlyVal__fifo_loc__v28);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v29) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0x1dU], vlSelfRef.__VdlyVal__fifo_loc__v29);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v30) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0x1eU], vlSelfRef.__VdlyVal__fifo_loc__v30);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v31) {
        VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc[0x1fU], vlSelfRef.__VdlyVal__fifo_loc__v31);
    }
    vlSelfRef.__PVT__fiforoom_atlst3 = vlSelfRef.__Vdly__fiforoom_atlst3;
    vlSelfRef.__PVT__fifo_full = vlSelfRef.__Vdly__fifo_full;
    vlSelfRef.__PVT__num_entries = vlSelfRef.__Vdly__num_entries;
    vlSelfRef.__PVT__wr_ptr = vlSelfRef.__Vdly__wr_ptr;
    vlSelfRef.__PVT__rd_ptr = vlSelfRef.__Vdly__rd_ptr;
    vlSelfRef.__PVT__fifo_empty = vlSelfRef.__Vdly__fifo_empty;
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_rddata, vlSelfRef.__PVT__fifo_loc
                [vlSelfRef.__PVT__rd_ptr]);
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_ptr_nxt = vlSelfRef.__PVT__rd_ptr;
    if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__rd_ptr_nxt = (0x1fU & ((0x1fU 
                                                 == (IData)(vlSelfRef.__PVT__rd_ptr))
                                                 ? 0U
                                                 : 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__rd_ptr))));
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0__1(Vsig_topology_top_sig_fifo_synchclk_flop__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    CData/*31:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    CData/*31:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    CData/*31:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    CData/*31:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    CData/*31:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    CData/*31:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    CData/*31:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    CData/*31:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    CData/*31:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    CData/*31:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    CData/*31:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    CData/*31:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    CData/*31:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    CData/*31:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_40;
    CData/*31:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_42;
    CData/*31:0*/ __Vtemp_43;
    VlWide<3>/*95:0*/ __Vtemp_44;
    CData/*31:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_46;
    CData/*31:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_48;
    CData/*31:0*/ __Vtemp_49;
    VlWide<3>/*95:0*/ __Vtemp_50;
    CData/*31:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_52;
    CData/*31:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_54;
    CData/*31:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_56;
    CData/*31:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_58;
    CData/*31:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_60;
    CData/*31:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_62;
    CData/*31:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_64;
    // Body
    vlSelfRef.__PVT__wr_ptr_nxt = vlSelfRef.__PVT__wr_ptr;
    if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__wr_ptr_nxt = (0x1fU & ((0x1fU 
                                                 == (IData)(vlSelfRef.__PVT__wr_ptr))
                                                 ? 0U
                                                 : 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__wr_ptr))));
    }
    __Vtemp_1 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (0U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_2, __Vtemp_1, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0U], __Vtemp_2);
    __Vtemp_3 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (1U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_4, __Vtemp_3, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[1U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[1U], __Vtemp_4);
    __Vtemp_5 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (2U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_6, __Vtemp_5, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[2U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[2U], __Vtemp_6);
    __Vtemp_7 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (3U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[3U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[3U], __Vtemp_8);
    __Vtemp_9 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (4U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_10, __Vtemp_9, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[4U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[4U], __Vtemp_10);
    __Vtemp_11 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (5U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_12, __Vtemp_11, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[5U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[5U], __Vtemp_12);
    __Vtemp_13 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (6U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[6U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[6U], __Vtemp_14);
    __Vtemp_15 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (7U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_16, __Vtemp_15, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[7U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[7U], __Vtemp_16);
    __Vtemp_17 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (8U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_18, __Vtemp_17, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[8U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[8U], __Vtemp_18);
    __Vtemp_19 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (9U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_20, __Vtemp_19, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[9U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[9U], __Vtemp_20);
    __Vtemp_21 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0xaU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_22, __Vtemp_21, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0xaU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0xaU], __Vtemp_22);
    __Vtemp_23 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0xbU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_24, __Vtemp_23, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0xbU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0xbU], __Vtemp_24);
    __Vtemp_25 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0xcU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_26, __Vtemp_25, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0xcU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0xcU], __Vtemp_26);
    __Vtemp_27 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0xdU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_28, __Vtemp_27, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0xdU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0xdU], __Vtemp_28);
    __Vtemp_29 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0xeU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_30, __Vtemp_29, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0xeU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0xeU], __Vtemp_30);
    __Vtemp_31 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0xfU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_32, __Vtemp_31, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0xfU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0xfU], __Vtemp_32);
    __Vtemp_33 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x10U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_34, __Vtemp_33, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x10U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x10U], __Vtemp_34);
    __Vtemp_35 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x11U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_36, __Vtemp_35, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x11U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x11U], __Vtemp_36);
    __Vtemp_37 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x12U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_38, __Vtemp_37, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x12U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x12U], __Vtemp_38);
    __Vtemp_39 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x13U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_40, __Vtemp_39, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x13U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x13U], __Vtemp_40);
    __Vtemp_41 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x14U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_42, __Vtemp_41, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x14U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x14U], __Vtemp_42);
    __Vtemp_43 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x15U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_44, __Vtemp_43, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x15U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x15U], __Vtemp_44);
    __Vtemp_45 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x16U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_46, __Vtemp_45, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x16U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x16U], __Vtemp_46);
    __Vtemp_47 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x17U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_48, __Vtemp_47, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x17U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x17U], __Vtemp_48);
    __Vtemp_49 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x18U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_50, __Vtemp_49, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x18U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x18U], __Vtemp_50);
    __Vtemp_51 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x19U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_52, __Vtemp_51, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x19U]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x19U], __Vtemp_52);
    __Vtemp_53 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x1aU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_54, __Vtemp_53, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x1aU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x1aU], __Vtemp_54);
    __Vtemp_55 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x1bU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_56, __Vtemp_55, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x1bU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x1bU], __Vtemp_56);
    __Vtemp_57 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x1cU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_58, __Vtemp_57, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x1cU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x1cU], __Vtemp_58);
    __Vtemp_59 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x1dU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_60, __Vtemp_59, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x1dU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x1dU], __Vtemp_60);
    __Vtemp_61 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x1eU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_62, __Vtemp_61, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x1eU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x1eU], __Vtemp_62);
    __Vtemp_63 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (0x1fU == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(74, __Vtemp_64, __Vtemp_63, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0x1fU]);
    VL_ASSIGN_W(74,vlSelfRef.__PVT__fifo_loc_nxt[0x1fU], __Vtemp_64);
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0__2(Vsig_topology_top_sig_fifo_synchclk_flop__pi33* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__pi33___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__num_entries_nxt = vlSelfRef.__PVT__num_entries;
    if (((IData)(vlSelfRef.__PVT__fifo_wren) & (IData)(vlSelfRef.__PVT__fifo_rden))) {
        vlSelfRef.__PVT__num_entries_nxt = vlSelfRef.__PVT__num_entries;
    } else if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__num_entries_nxt = (0x3fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__num_entries)));
    } else if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__num_entries_nxt = (0x3fU & 
                                            ((IData)(vlSelfRef.__PVT__num_entries) 
                                             - (IData)(1U)));
    }
    vlSelfRef.__PVT__fifo_full_nxt = (0x20U == (IData)(vlSelfRef.__PVT__num_entries_nxt));
    vlSelfRef.__PVT__fifo_empty_nxt = (0U == (IData)(vlSelfRef.__PVT__num_entries_nxt));
    vlSelfRef.__PVT__fiforoom_atlst3_nxt = (2ULL < 
                                            (0x3ffffffffULL 
                                             & (0x20ULL 
                                                - VL_EXTEND_QI(34,6, (IData)(vlSelfRef.__PVT__num_entries_nxt)))));
}
