// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64.h"

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__flit_store_fifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__flit_store_fifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    VlWide<22>/*703:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    VlWide<22>/*703:0*/ __Vtemp_4;
    CData/*31:0*/ __Vtemp_5;
    VlWide<22>/*703:0*/ __Vtemp_6;
    CData/*31:0*/ __Vtemp_7;
    VlWide<22>/*703:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<22>/*703:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<22>/*703:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<22>/*703:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<22>/*703:0*/ __Vtemp_16;
    // Body
    vlSelfRef.__PVT__rd_ptr_wab_nxt = vlSelfRef.__PVT__rd_ptr_wab;
    if (vlSelfRef.__PVT__restore_rdptr) {
        vlSelfRef.__PVT__rd_ptr_wab_nxt = vlSelfRef.__PVT__rd_ptr_wab_snapshot;
    } else if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__rd_ptr_wab_nxt = (0xfU & (
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.__PVT__rd_ptr_wab))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__rd_ptr_wab))));
    }
    vlSelfRef.__PVT__wr_ptr_wab_nxt = vlSelfRef.__PVT__wr_ptr_wab;
    if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__wr_ptr_wab_nxt = (0xfU & (
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.__PVT__wr_ptr_wab))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__wr_ptr_wab))));
    }
    __Vtemp_1 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (0U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_2, __Vtemp_1, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[0U], __Vtemp_2);
    __Vtemp_3 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (1U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_4, __Vtemp_3, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[1U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[1U], __Vtemp_4);
    __Vtemp_5 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (2U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_6, __Vtemp_5, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[2U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[2U], __Vtemp_6);
    __Vtemp_7 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (3U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[3U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[3U], __Vtemp_8);
    __Vtemp_9 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (4U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_10, __Vtemp_9, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[4U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[4U], __Vtemp_10);
    __Vtemp_11 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (5U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_12, __Vtemp_11, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[5U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[5U], __Vtemp_12);
    __Vtemp_13 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (6U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[6U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[6U], __Vtemp_14);
    __Vtemp_15 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (7U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_16, __Vtemp_15, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[7U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[7U], __Vtemp_16);
    vlSelfRef.__PVT__fifo_empty_nxt = ((IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt) 
                                       == (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt));
    vlSelfRef.__PVT__fifo_full_nxt = (((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt), 3U)) 
                                       != (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt), 3U))) 
                                      & ((7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt), 0U, 3)) 
                                         == (7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt), 0U, 3))));
}

extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_he95d9d6c_0;

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__flit_store_fifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__flit_store_fifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    vlSelfRef.__Vdly__data_avail = vlSelfRef.__PVT__data_avail;
    vlSelfRef.__Vdly__rd_ptr_wab_snapshot = vlSelfRef.__PVT__rd_ptr_wab_snapshot;
    vlSelfRef.__Vdly__wr_ptr_wab = vlSelfRef.__PVT__wr_ptr_wab;
    vlSelfRef.__Vdly__fifo_empty = vlSelfRef.__PVT__fifo_empty;
    vlSelfRef.__Vdly__rd_ptr_wab = vlSelfRef.__PVT__rd_ptr_wab;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v0, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v0 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v1, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[1U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v1 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v2, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[2U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v2 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v3, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[3U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v3 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v4, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[4U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v4 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v5, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[5U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v5 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v6, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[6U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v6 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v7, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[7U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v7 = 1U;
    if (vlSelfRef.__PVT__rstb) {
        vlSelfRef.__Vdly__wr_ptr_wab = vlSelfRef.__PVT__wr_ptr_wab_nxt;
        vlSelfRef.__Vdly__rd_ptr_wab = vlSelfRef.__PVT__rd_ptr_wab_nxt;
        vlSelfRef.__Vdly__fifo_full = vlSelfRef.__PVT__fifo_full_nxt;
        vlSelfRef.__Vdly__fifo_empty = vlSelfRef.__PVT__fifo_empty_nxt;
        vlSelfRef.__Vdly__rd_ptr_wab_snapshot = vlSelfRef.__PVT__rd_ptr_wab_snapshot_nxt;
        vlSelfRef.__Vdly__data_avail = vlSelfRef.__PVT__data_avail_nxt;
    } else {
        vlSelfRef.__Vdly__wr_ptr_wab = 0U;
        vlSelfRef.__Vdly__rd_ptr_wab = 0U;
        vlSelfRef.__Vdly__fifo_full = 0U;
        vlSelfRef.__Vdly__fifo_empty = 1U;
        vlSelfRef.__Vdly__rd_ptr_wab_snapshot = 0U;
        vlSelfRef.__Vdly__data_avail = 0U;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v0) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[0U], vlSelfRef.__VdlyVal__fifo_loc__v0);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v1) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[1U], vlSelfRef.__VdlyVal__fifo_loc__v1);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v2) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[2U], vlSelfRef.__VdlyVal__fifo_loc__v2);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v3) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[3U], vlSelfRef.__VdlyVal__fifo_loc__v3);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v4) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[4U], vlSelfRef.__VdlyVal__fifo_loc__v4);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v5) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[5U], vlSelfRef.__VdlyVal__fifo_loc__v5);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v6) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[6U], vlSelfRef.__VdlyVal__fifo_loc__v6);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v7) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[7U], vlSelfRef.__VdlyVal__fifo_loc__v7);
    }
    vlSelfRef.__PVT__fifo_full = vlSelfRef.__Vdly__fifo_full;
    vlSelfRef.__PVT__data_avail = vlSelfRef.__Vdly__data_avail;
    vlSelfRef.__PVT__rd_ptr_wab_snapshot = vlSelfRef.__Vdly__rd_ptr_wab_snapshot;
    vlSelfRef.__PVT__wr_ptr_wab = vlSelfRef.__Vdly__wr_ptr_wab;
    vlSelfRef.__PVT__fifo_empty = vlSelfRef.__Vdly__fifo_empty;
    vlSelfRef.__PVT__rd_ptr_wab = vlSelfRef.__Vdly__rd_ptr_wab;
    vlSelfRef.__PVT__wr_ptr = (7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab), 0U, 3));
    vlSelfRef.__PVT__data_avail_nxt = (0xfU & VL_SEL_IIII(32, 
                                                          (((1U 
                                                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab), 3U)) 
                                                            == 
                                                            (1U 
                                                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab), 3U)))
                                                            ? 
                                                           (VL_EXTEND_II(32,3, 
                                                                         (7U 
                                                                          & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab), 0U, 3))) 
                                                            - 
                                                            VL_EXTEND_II(32,3, 
                                                                         (7U 
                                                                          & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab), 0U, 3))))
                                                            : 
                                                           ((IData)(8U) 
                                                            - 
                                                            VL_EXTEND_II(32,3, 
                                                                         (7U 
                                                                          & (VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab), 0U, 3) 
                                                                             - 
                                                                             VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab), 0U, 3)))))), 0U, 4));
    vlSelfRef.__PVT__rd_ptr_wab_snapshot_nxt = ((IData)(vlSelfRef.__PVT__snapshot_rdptr)
                                                 ? (IData)(vlSelfRef.__PVT__rd_ptr_wab)
                                                 : (IData)(vlSelfRef.__PVT__rd_ptr_wab_snapshot));
    vlSelfRef.__PVT__rd_ptr = (7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab), 0U, 3));
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_rddata, vlSelfRef.__PVT__fifo_loc
                [vlSelfRef.__PVT__rd_ptr]);
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__flit_store_fifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__flit_store_fifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    VlWide<22>/*703:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    VlWide<22>/*703:0*/ __Vtemp_4;
    CData/*31:0*/ __Vtemp_5;
    VlWide<22>/*703:0*/ __Vtemp_6;
    CData/*31:0*/ __Vtemp_7;
    VlWide<22>/*703:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<22>/*703:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<22>/*703:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<22>/*703:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<22>/*703:0*/ __Vtemp_16;
    // Body
    vlSelfRef.__PVT__rd_ptr_wab_nxt = vlSelfRef.__PVT__rd_ptr_wab;
    if (vlSelfRef.__PVT__restore_rdptr) {
        vlSelfRef.__PVT__rd_ptr_wab_nxt = vlSelfRef.__PVT__rd_ptr_wab_snapshot;
    } else if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__rd_ptr_wab_nxt = (0xfU & (
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.__PVT__rd_ptr_wab))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__rd_ptr_wab))));
    }
    vlSelfRef.__PVT__wr_ptr_wab_nxt = vlSelfRef.__PVT__wr_ptr_wab;
    if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__wr_ptr_wab_nxt = (0xfU & (
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.__PVT__wr_ptr_wab))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__wr_ptr_wab))));
    }
    __Vtemp_1 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (0U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_2, __Vtemp_1, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[0U], __Vtemp_2);
    __Vtemp_3 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (1U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_4, __Vtemp_3, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[1U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[1U], __Vtemp_4);
    __Vtemp_5 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (2U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_6, __Vtemp_5, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[2U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[2U], __Vtemp_6);
    __Vtemp_7 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (3U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[3U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[3U], __Vtemp_8);
    __Vtemp_9 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (4U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_10, __Vtemp_9, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[4U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[4U], __Vtemp_10);
    __Vtemp_11 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (5U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_12, __Vtemp_11, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[5U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[5U], __Vtemp_12);
    __Vtemp_13 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (6U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[6U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[6U], __Vtemp_14);
    __Vtemp_15 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (7U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_16, __Vtemp_15, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[7U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[7U], __Vtemp_16);
    vlSelfRef.__PVT__fifo_empty_nxt = ((IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt) 
                                       == (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt));
    vlSelfRef.__PVT__fifo_full_nxt = (((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt), 3U)) 
                                       != (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt), 3U))) 
                                      & ((7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt), 0U, 3)) 
                                         == (7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt), 0U, 3))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__flit_store_fifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__flit_store_fifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    VlWide<22>/*703:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    VlWide<22>/*703:0*/ __Vtemp_4;
    CData/*31:0*/ __Vtemp_5;
    VlWide<22>/*703:0*/ __Vtemp_6;
    CData/*31:0*/ __Vtemp_7;
    VlWide<22>/*703:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<22>/*703:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<22>/*703:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<22>/*703:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<22>/*703:0*/ __Vtemp_16;
    // Body
    vlSelfRef.__PVT__rd_ptr_wab_nxt = vlSelfRef.__PVT__rd_ptr_wab;
    if (vlSelfRef.__PVT__restore_rdptr) {
        vlSelfRef.__PVT__rd_ptr_wab_nxt = vlSelfRef.__PVT__rd_ptr_wab_snapshot;
    } else if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__rd_ptr_wab_nxt = (0xfU & (
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.__PVT__rd_ptr_wab))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__rd_ptr_wab))));
    }
    vlSelfRef.__PVT__wr_ptr_wab_nxt = vlSelfRef.__PVT__wr_ptr_wab;
    if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__wr_ptr_wab_nxt = (0xfU & (
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.__PVT__wr_ptr_wab))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__wr_ptr_wab))));
    }
    __Vtemp_1 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (0U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_2, __Vtemp_1, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[0U], __Vtemp_2);
    __Vtemp_3 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (1U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_4, __Vtemp_3, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[1U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[1U], __Vtemp_4);
    __Vtemp_5 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (2U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_6, __Vtemp_5, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[2U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[2U], __Vtemp_6);
    __Vtemp_7 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (3U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[3U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[3U], __Vtemp_8);
    __Vtemp_9 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (4U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_10, __Vtemp_9, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[4U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[4U], __Vtemp_10);
    __Vtemp_11 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (5U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_12, __Vtemp_11, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[5U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[5U], __Vtemp_12);
    __Vtemp_13 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (6U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[6U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[6U], __Vtemp_14);
    __Vtemp_15 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (7U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_16, __Vtemp_15, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[7U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[7U], __Vtemp_16);
    vlSelfRef.__PVT__fifo_empty_nxt = ((IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt) 
                                       == (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt));
    vlSelfRef.__PVT__fifo_full_nxt = (((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt), 3U)) 
                                       != (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt), 3U))) 
                                      & ((7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt), 0U, 3)) 
                                         == (7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt), 0U, 3))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__flit_store_fifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__flit_store_fifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    vlSelfRef.__Vdly__data_avail = vlSelfRef.__PVT__data_avail;
    vlSelfRef.__Vdly__rd_ptr_wab_snapshot = vlSelfRef.__PVT__rd_ptr_wab_snapshot;
    vlSelfRef.__Vdly__wr_ptr_wab = vlSelfRef.__PVT__wr_ptr_wab;
    vlSelfRef.__Vdly__fifo_empty = vlSelfRef.__PVT__fifo_empty;
    vlSelfRef.__Vdly__rd_ptr_wab = vlSelfRef.__PVT__rd_ptr_wab;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v0, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v0 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v1, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[1U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v1 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v2, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[2U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v2 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v3, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[3U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v3 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v4, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[4U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v4 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v5, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[5U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v5 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v6, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[6U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v6 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v7, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[7U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v7 = 1U;
    if (vlSelfRef.__PVT__rstb) {
        vlSelfRef.__Vdly__wr_ptr_wab = vlSelfRef.__PVT__wr_ptr_wab_nxt;
        vlSelfRef.__Vdly__rd_ptr_wab = vlSelfRef.__PVT__rd_ptr_wab_nxt;
        vlSelfRef.__Vdly__fifo_full = vlSelfRef.__PVT__fifo_full_nxt;
        vlSelfRef.__Vdly__fifo_empty = vlSelfRef.__PVT__fifo_empty_nxt;
        vlSelfRef.__Vdly__rd_ptr_wab_snapshot = vlSelfRef.__PVT__rd_ptr_wab_snapshot_nxt;
        vlSelfRef.__Vdly__data_avail = vlSelfRef.__PVT__data_avail_nxt;
    } else {
        vlSelfRef.__Vdly__wr_ptr_wab = 0U;
        vlSelfRef.__Vdly__rd_ptr_wab = 0U;
        vlSelfRef.__Vdly__fifo_full = 0U;
        vlSelfRef.__Vdly__fifo_empty = 1U;
        vlSelfRef.__Vdly__rd_ptr_wab_snapshot = 0U;
        vlSelfRef.__Vdly__data_avail = 0U;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v0) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[0U], vlSelfRef.__VdlyVal__fifo_loc__v0);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v1) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[1U], vlSelfRef.__VdlyVal__fifo_loc__v1);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v2) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[2U], vlSelfRef.__VdlyVal__fifo_loc__v2);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v3) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[3U], vlSelfRef.__VdlyVal__fifo_loc__v3);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v4) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[4U], vlSelfRef.__VdlyVal__fifo_loc__v4);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v5) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[5U], vlSelfRef.__VdlyVal__fifo_loc__v5);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v6) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[6U], vlSelfRef.__VdlyVal__fifo_loc__v6);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v7) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[7U], vlSelfRef.__VdlyVal__fifo_loc__v7);
    }
    vlSelfRef.__PVT__fifo_full = vlSelfRef.__Vdly__fifo_full;
    vlSelfRef.__PVT__data_avail = vlSelfRef.__Vdly__data_avail;
    vlSelfRef.__PVT__rd_ptr_wab_snapshot = vlSelfRef.__Vdly__rd_ptr_wab_snapshot;
    vlSelfRef.__PVT__wr_ptr_wab = vlSelfRef.__Vdly__wr_ptr_wab;
    vlSelfRef.__PVT__fifo_empty = vlSelfRef.__Vdly__fifo_empty;
    vlSelfRef.__PVT__rd_ptr_wab = vlSelfRef.__Vdly__rd_ptr_wab;
    vlSelfRef.__PVT__wr_ptr = (7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab), 0U, 3));
    vlSelfRef.__PVT__data_avail_nxt = (0xfU & VL_SEL_IIII(32, 
                                                          (((1U 
                                                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab), 3U)) 
                                                            == 
                                                            (1U 
                                                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab), 3U)))
                                                            ? 
                                                           (VL_EXTEND_II(32,3, 
                                                                         (7U 
                                                                          & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab), 0U, 3))) 
                                                            - 
                                                            VL_EXTEND_II(32,3, 
                                                                         (7U 
                                                                          & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab), 0U, 3))))
                                                            : 
                                                           ((IData)(8U) 
                                                            - 
                                                            VL_EXTEND_II(32,3, 
                                                                         (7U 
                                                                          & (VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab), 0U, 3) 
                                                                             - 
                                                                             VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab), 0U, 3)))))), 0U, 4));
    vlSelfRef.__PVT__rd_ptr_wab_snapshot_nxt = ((IData)(vlSelfRef.__PVT__snapshot_rdptr)
                                                 ? (IData)(vlSelfRef.__PVT__rd_ptr_wab)
                                                 : (IData)(vlSelfRef.__PVT__rd_ptr_wab_snapshot));
    vlSelfRef.__PVT__rd_ptr = (7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab), 0U, 3));
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_rddata, vlSelfRef.__PVT__fifo_loc
                [vlSelfRef.__PVT__rd_ptr]);
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__flit_store_fifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__flit_store_fifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    VlWide<22>/*703:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    VlWide<22>/*703:0*/ __Vtemp_4;
    CData/*31:0*/ __Vtemp_5;
    VlWide<22>/*703:0*/ __Vtemp_6;
    CData/*31:0*/ __Vtemp_7;
    VlWide<22>/*703:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<22>/*703:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<22>/*703:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<22>/*703:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<22>/*703:0*/ __Vtemp_16;
    // Body
    vlSelfRef.__PVT__rd_ptr_wab_nxt = vlSelfRef.__PVT__rd_ptr_wab;
    if (vlSelfRef.__PVT__restore_rdptr) {
        vlSelfRef.__PVT__rd_ptr_wab_nxt = vlSelfRef.__PVT__rd_ptr_wab_snapshot;
    } else if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__rd_ptr_wab_nxt = (0xfU & (
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.__PVT__rd_ptr_wab))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__rd_ptr_wab))));
    }
    vlSelfRef.__PVT__wr_ptr_wab_nxt = vlSelfRef.__PVT__wr_ptr_wab;
    if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__wr_ptr_wab_nxt = (0xfU & (
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.__PVT__wr_ptr_wab))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__wr_ptr_wab))));
    }
    __Vtemp_1 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (0U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_2, __Vtemp_1, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[0U], __Vtemp_2);
    __Vtemp_3 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (1U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_4, __Vtemp_3, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[1U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[1U], __Vtemp_4);
    __Vtemp_5 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (2U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_6, __Vtemp_5, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[2U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[2U], __Vtemp_6);
    __Vtemp_7 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (3U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[3U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[3U], __Vtemp_8);
    __Vtemp_9 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (4U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_10, __Vtemp_9, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[4U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[4U], __Vtemp_10);
    __Vtemp_11 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (5U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_12, __Vtemp_11, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[5U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[5U], __Vtemp_12);
    __Vtemp_13 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (6U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[6U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[6U], __Vtemp_14);
    __Vtemp_15 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (7U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_16, __Vtemp_15, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[7U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[7U], __Vtemp_16);
    vlSelfRef.__PVT__fifo_empty_nxt = ((IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt) 
                                       == (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt));
    vlSelfRef.__PVT__fifo_full_nxt = (((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt), 3U)) 
                                       != (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt), 3U))) 
                                      & ((7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt), 0U, 3)) 
                                         == (7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt), 0U, 3))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__flit_store_fifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__flit_store_fifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    VlWide<22>/*703:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    VlWide<22>/*703:0*/ __Vtemp_4;
    CData/*31:0*/ __Vtemp_5;
    VlWide<22>/*703:0*/ __Vtemp_6;
    CData/*31:0*/ __Vtemp_7;
    VlWide<22>/*703:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<22>/*703:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<22>/*703:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<22>/*703:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<22>/*703:0*/ __Vtemp_16;
    // Body
    vlSelfRef.__PVT__rd_ptr_wab_nxt = vlSelfRef.__PVT__rd_ptr_wab;
    if (vlSelfRef.__PVT__restore_rdptr) {
        vlSelfRef.__PVT__rd_ptr_wab_nxt = vlSelfRef.__PVT__rd_ptr_wab_snapshot;
    } else if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__rd_ptr_wab_nxt = (0xfU & (
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.__PVT__rd_ptr_wab))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__rd_ptr_wab))));
    }
    vlSelfRef.__PVT__wr_ptr_wab_nxt = vlSelfRef.__PVT__wr_ptr_wab;
    if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__wr_ptr_wab_nxt = (0xfU & (
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.__PVT__wr_ptr_wab))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__wr_ptr_wab))));
    }
    __Vtemp_1 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (0U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_2, __Vtemp_1, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[0U], __Vtemp_2);
    __Vtemp_3 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (1U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_4, __Vtemp_3, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[1U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[1U], __Vtemp_4);
    __Vtemp_5 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (2U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_6, __Vtemp_5, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[2U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[2U], __Vtemp_6);
    __Vtemp_7 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (3U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[3U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[3U], __Vtemp_8);
    __Vtemp_9 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (4U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_10, __Vtemp_9, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[4U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[4U], __Vtemp_10);
    __Vtemp_11 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (5U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_12, __Vtemp_11, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[5U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[5U], __Vtemp_12);
    __Vtemp_13 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (6U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[6U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[6U], __Vtemp_14);
    __Vtemp_15 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (7U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_16, __Vtemp_15, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[7U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[7U], __Vtemp_16);
    vlSelfRef.__PVT__fifo_empty_nxt = ((IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt) 
                                       == (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt));
    vlSelfRef.__PVT__fifo_full_nxt = (((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt), 3U)) 
                                       != (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt), 3U))) 
                                      & ((7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt), 0U, 3)) 
                                         == (7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt), 0U, 3))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__flit_store_fifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__flit_store_fifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__fifo_loc__v0 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v1 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v2 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v3 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v4 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v5 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v6 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v7 = 0U;
    vlSelfRef.__Vdly__data_avail = vlSelfRef.__PVT__data_avail;
    vlSelfRef.__Vdly__fifo_full = vlSelfRef.__PVT__fifo_full;
    vlSelfRef.__Vdly__rd_ptr_wab_snapshot = vlSelfRef.__PVT__rd_ptr_wab_snapshot;
    vlSelfRef.__Vdly__wr_ptr_wab = vlSelfRef.__PVT__wr_ptr_wab;
    vlSelfRef.__Vdly__fifo_empty = vlSelfRef.__PVT__fifo_empty;
    vlSelfRef.__Vdly__rd_ptr_wab = vlSelfRef.__PVT__rd_ptr_wab;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v0, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v0 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v1, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[1U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v1 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v2, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[2U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v2 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v3, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[3U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v3 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v4, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[4U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v4 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v5, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[5U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v5 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v6, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[6U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v6 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v7, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[7U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v7 = 1U;
    if (vlSelfRef.__PVT__rstb) {
        vlSelfRef.__Vdly__wr_ptr_wab = vlSelfRef.__PVT__wr_ptr_wab_nxt;
        vlSelfRef.__Vdly__rd_ptr_wab = vlSelfRef.__PVT__rd_ptr_wab_nxt;
        vlSelfRef.__Vdly__fifo_full = vlSelfRef.__PVT__fifo_full_nxt;
        vlSelfRef.__Vdly__fifo_empty = vlSelfRef.__PVT__fifo_empty_nxt;
        vlSelfRef.__Vdly__rd_ptr_wab_snapshot = vlSelfRef.__PVT__rd_ptr_wab_snapshot_nxt;
        vlSelfRef.__Vdly__data_avail = vlSelfRef.__PVT__data_avail_nxt;
    } else {
        vlSelfRef.__Vdly__wr_ptr_wab = 0U;
        vlSelfRef.__Vdly__rd_ptr_wab = 0U;
        vlSelfRef.__Vdly__fifo_full = 0U;
        vlSelfRef.__Vdly__fifo_empty = 1U;
        vlSelfRef.__Vdly__rd_ptr_wab_snapshot = 0U;
        vlSelfRef.__Vdly__data_avail = 0U;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v0) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[0U], vlSelfRef.__VdlyVal__fifo_loc__v0);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v1) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[1U], vlSelfRef.__VdlyVal__fifo_loc__v1);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v2) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[2U], vlSelfRef.__VdlyVal__fifo_loc__v2);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v3) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[3U], vlSelfRef.__VdlyVal__fifo_loc__v3);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v4) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[4U], vlSelfRef.__VdlyVal__fifo_loc__v4);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v5) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[5U], vlSelfRef.__VdlyVal__fifo_loc__v5);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v6) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[6U], vlSelfRef.__VdlyVal__fifo_loc__v6);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v7) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[7U], vlSelfRef.__VdlyVal__fifo_loc__v7);
    }
    vlSelfRef.__PVT__data_avail = vlSelfRef.__Vdly__data_avail;
    vlSelfRef.__PVT__fifo_full = vlSelfRef.__Vdly__fifo_full;
    vlSelfRef.__PVT__rd_ptr_wab_snapshot = vlSelfRef.__Vdly__rd_ptr_wab_snapshot;
    vlSelfRef.__PVT__wr_ptr_wab = vlSelfRef.__Vdly__wr_ptr_wab;
    vlSelfRef.__PVT__fifo_empty = vlSelfRef.__Vdly__fifo_empty;
    vlSelfRef.__PVT__rd_ptr_wab = vlSelfRef.__Vdly__rd_ptr_wab;
    vlSelfRef.__PVT__wr_ptr = (7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab), 0U, 3));
    vlSelfRef.__PVT__data_avail_nxt = (0xfU & VL_SEL_IIII(32, 
                                                          (((1U 
                                                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab), 3U)) 
                                                            == 
                                                            (1U 
                                                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab), 3U)))
                                                            ? 
                                                           (VL_EXTEND_II(32,3, 
                                                                         (7U 
                                                                          & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab), 0U, 3))) 
                                                            - 
                                                            VL_EXTEND_II(32,3, 
                                                                         (7U 
                                                                          & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab), 0U, 3))))
                                                            : 
                                                           ((IData)(8U) 
                                                            - 
                                                            VL_EXTEND_II(32,3, 
                                                                         (7U 
                                                                          & (VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab), 0U, 3) 
                                                                             - 
                                                                             VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab), 0U, 3)))))), 0U, 4));
    vlSelfRef.__PVT__rd_ptr_wab_snapshot_nxt = ((IData)(vlSelfRef.__PVT__snapshot_rdptr)
                                                 ? (IData)(vlSelfRef.__PVT__rd_ptr_wab)
                                                 : (IData)(vlSelfRef.__PVT__rd_ptr_wab_snapshot));
    vlSelfRef.__PVT__rd_ptr = (7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab), 0U, 3));
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_rddata, vlSelfRef.__PVT__fifo_loc
                [vlSelfRef.__PVT__rd_ptr]);
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__flit_store_fifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__flit_store_fifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    VlWide<22>/*703:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    VlWide<22>/*703:0*/ __Vtemp_4;
    CData/*31:0*/ __Vtemp_5;
    VlWide<22>/*703:0*/ __Vtemp_6;
    CData/*31:0*/ __Vtemp_7;
    VlWide<22>/*703:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<22>/*703:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<22>/*703:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<22>/*703:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<22>/*703:0*/ __Vtemp_16;
    // Body
    vlSelfRef.__PVT__rd_ptr_wab_nxt = vlSelfRef.__PVT__rd_ptr_wab;
    if (vlSelfRef.__PVT__restore_rdptr) {
        vlSelfRef.__PVT__rd_ptr_wab_nxt = vlSelfRef.__PVT__rd_ptr_wab_snapshot;
    } else if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__rd_ptr_wab_nxt = (0xfU & (
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.__PVT__rd_ptr_wab))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__rd_ptr_wab))));
    }
    vlSelfRef.__PVT__wr_ptr_wab_nxt = vlSelfRef.__PVT__wr_ptr_wab;
    if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__wr_ptr_wab_nxt = (0xfU & (
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.__PVT__wr_ptr_wab))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__wr_ptr_wab))));
    }
    __Vtemp_1 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (0U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_2, __Vtemp_1, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[0U], __Vtemp_2);
    __Vtemp_3 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (1U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_4, __Vtemp_3, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[1U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[1U], __Vtemp_4);
    __Vtemp_5 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (2U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_6, __Vtemp_5, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[2U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[2U], __Vtemp_6);
    __Vtemp_7 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (3U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[3U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[3U], __Vtemp_8);
    __Vtemp_9 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (4U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_10, __Vtemp_9, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[4U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[4U], __Vtemp_10);
    __Vtemp_11 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (5U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_12, __Vtemp_11, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[5U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[5U], __Vtemp_12);
    __Vtemp_13 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (6U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[6U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[6U], __Vtemp_14);
    __Vtemp_15 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (7U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_16, __Vtemp_15, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[7U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[7U], __Vtemp_16);
    vlSelfRef.__PVT__fifo_empty_nxt = ((IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt) 
                                       == (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt));
    vlSelfRef.__PVT__fifo_full_nxt = (((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt), 3U)) 
                                       != (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt), 3U))) 
                                      & ((7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt), 0U, 3)) 
                                         == (7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt), 0U, 3))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__flit_store_fifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__flit_store_fifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    VlWide<22>/*703:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    VlWide<22>/*703:0*/ __Vtemp_4;
    CData/*31:0*/ __Vtemp_5;
    VlWide<22>/*703:0*/ __Vtemp_6;
    CData/*31:0*/ __Vtemp_7;
    VlWide<22>/*703:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<22>/*703:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<22>/*703:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<22>/*703:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<22>/*703:0*/ __Vtemp_16;
    // Body
    vlSelfRef.__PVT__rd_ptr_wab_nxt = vlSelfRef.__PVT__rd_ptr_wab;
    if (vlSelfRef.__PVT__restore_rdptr) {
        vlSelfRef.__PVT__rd_ptr_wab_nxt = vlSelfRef.__PVT__rd_ptr_wab_snapshot;
    } else if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__rd_ptr_wab_nxt = (0xfU & (
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.__PVT__rd_ptr_wab))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__rd_ptr_wab))));
    }
    vlSelfRef.__PVT__wr_ptr_wab_nxt = vlSelfRef.__PVT__wr_ptr_wab;
    if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__wr_ptr_wab_nxt = (0xfU & (
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.__PVT__wr_ptr_wab))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__wr_ptr_wab))));
    }
    __Vtemp_1 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (0U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_2, __Vtemp_1, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[0U], __Vtemp_2);
    __Vtemp_3 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (1U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_4, __Vtemp_3, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[1U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[1U], __Vtemp_4);
    __Vtemp_5 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (2U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_6, __Vtemp_5, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[2U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[2U], __Vtemp_6);
    __Vtemp_7 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (3U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[3U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[3U], __Vtemp_8);
    __Vtemp_9 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (4U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_10, __Vtemp_9, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[4U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[4U], __Vtemp_10);
    __Vtemp_11 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (5U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_12, __Vtemp_11, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[5U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[5U], __Vtemp_12);
    __Vtemp_13 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (6U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[6U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[6U], __Vtemp_14);
    __Vtemp_15 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (7U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_16, __Vtemp_15, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[7U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[7U], __Vtemp_16);
    vlSelfRef.__PVT__fifo_empty_nxt = ((IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt) 
                                       == (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt));
    vlSelfRef.__PVT__fifo_full_nxt = (((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt), 3U)) 
                                       != (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt), 3U))) 
                                      & ((7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt), 0U, 3)) 
                                         == (7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt), 0U, 3))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__flit_store_fifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__flit_store_fifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__fifo_loc__v0 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v1 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v2 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v3 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v4 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v5 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v6 = 0U;
    vlSelfRef.__VdlySet__fifo_loc__v7 = 0U;
    vlSelfRef.__Vdly__data_avail = vlSelfRef.__PVT__data_avail;
    vlSelfRef.__Vdly__fifo_full = vlSelfRef.__PVT__fifo_full;
    vlSelfRef.__Vdly__rd_ptr_wab_snapshot = vlSelfRef.__PVT__rd_ptr_wab_snapshot;
    vlSelfRef.__Vdly__wr_ptr_wab = vlSelfRef.__PVT__wr_ptr_wab;
    vlSelfRef.__Vdly__fifo_empty = vlSelfRef.__PVT__fifo_empty;
    vlSelfRef.__Vdly__rd_ptr_wab = vlSelfRef.__PVT__rd_ptr_wab;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v0, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[0U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v0 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v1, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[1U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v1 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v2, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[2U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v2 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v3, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[3U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v3 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v4, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[4U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v4 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v5, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[5U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v5 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v6, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[6U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v6 = 1U;
    VL_COND_WIWW(680, vlSelfRef.__VdlyVal__fifo_loc__v7, (IData)(vlSelfRef.__PVT__rstb), 
                 vlSelfRef.__PVT__fifo_loc_nxt[7U], Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    vlSelfRef.__VdlySet__fifo_loc__v7 = 1U;
    if (vlSelfRef.__PVT__rstb) {
        vlSelfRef.__Vdly__wr_ptr_wab = vlSelfRef.__PVT__wr_ptr_wab_nxt;
        vlSelfRef.__Vdly__rd_ptr_wab = vlSelfRef.__PVT__rd_ptr_wab_nxt;
        vlSelfRef.__Vdly__fifo_full = vlSelfRef.__PVT__fifo_full_nxt;
        vlSelfRef.__Vdly__fifo_empty = vlSelfRef.__PVT__fifo_empty_nxt;
        vlSelfRef.__Vdly__rd_ptr_wab_snapshot = vlSelfRef.__PVT__rd_ptr_wab_snapshot_nxt;
        vlSelfRef.__Vdly__data_avail = vlSelfRef.__PVT__data_avail_nxt;
    } else {
        vlSelfRef.__Vdly__wr_ptr_wab = 0U;
        vlSelfRef.__Vdly__rd_ptr_wab = 0U;
        vlSelfRef.__Vdly__fifo_full = 0U;
        vlSelfRef.__Vdly__fifo_empty = 1U;
        vlSelfRef.__Vdly__rd_ptr_wab_snapshot = 0U;
        vlSelfRef.__Vdly__data_avail = 0U;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v0) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[0U], vlSelfRef.__VdlyVal__fifo_loc__v0);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v1) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[1U], vlSelfRef.__VdlyVal__fifo_loc__v1);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v2) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[2U], vlSelfRef.__VdlyVal__fifo_loc__v2);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v3) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[3U], vlSelfRef.__VdlyVal__fifo_loc__v3);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v4) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[4U], vlSelfRef.__VdlyVal__fifo_loc__v4);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v5) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[5U], vlSelfRef.__VdlyVal__fifo_loc__v5);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v6) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[6U], vlSelfRef.__VdlyVal__fifo_loc__v6);
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v7) {
        VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc[7U], vlSelfRef.__VdlyVal__fifo_loc__v7);
    }
    vlSelfRef.__PVT__data_avail = vlSelfRef.__Vdly__data_avail;
    vlSelfRef.__PVT__fifo_full = vlSelfRef.__Vdly__fifo_full;
    vlSelfRef.__PVT__rd_ptr_wab_snapshot = vlSelfRef.__Vdly__rd_ptr_wab_snapshot;
    vlSelfRef.__PVT__wr_ptr_wab = vlSelfRef.__Vdly__wr_ptr_wab;
    vlSelfRef.__PVT__fifo_empty = vlSelfRef.__Vdly__fifo_empty;
    vlSelfRef.__PVT__rd_ptr_wab = vlSelfRef.__Vdly__rd_ptr_wab;
    vlSelfRef.__PVT__wr_ptr = (7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab), 0U, 3));
    vlSelfRef.__PVT__data_avail_nxt = (0xfU & VL_SEL_IIII(32, 
                                                          (((1U 
                                                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab), 3U)) 
                                                            == 
                                                            (1U 
                                                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab), 3U)))
                                                            ? 
                                                           (VL_EXTEND_II(32,3, 
                                                                         (7U 
                                                                          & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab), 0U, 3))) 
                                                            - 
                                                            VL_EXTEND_II(32,3, 
                                                                         (7U 
                                                                          & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab), 0U, 3))))
                                                            : 
                                                           ((IData)(8U) 
                                                            - 
                                                            VL_EXTEND_II(32,3, 
                                                                         (7U 
                                                                          & (VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab), 0U, 3) 
                                                                             - 
                                                                             VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab), 0U, 3)))))), 0U, 4));
    vlSelfRef.__PVT__rd_ptr_wab_snapshot_nxt = ((IData)(vlSelfRef.__PVT__snapshot_rdptr)
                                                 ? (IData)(vlSelfRef.__PVT__rd_ptr_wab)
                                                 : (IData)(vlSelfRef.__PVT__rd_ptr_wab_snapshot));
    vlSelfRef.__PVT__rd_ptr = (7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab), 0U, 3));
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_rddata, vlSelfRef.__PVT__fifo_loc
                [vlSelfRef.__PVT__rd_ptr]);
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__flit_store_fifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_fifo_synchclk_flop_rback__pi64___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__flit_store_fifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    VlWide<22>/*703:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    VlWide<22>/*703:0*/ __Vtemp_4;
    CData/*31:0*/ __Vtemp_5;
    VlWide<22>/*703:0*/ __Vtemp_6;
    CData/*31:0*/ __Vtemp_7;
    VlWide<22>/*703:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<22>/*703:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    VlWide<22>/*703:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<22>/*703:0*/ __Vtemp_14;
    CData/*31:0*/ __Vtemp_15;
    VlWide<22>/*703:0*/ __Vtemp_16;
    // Body
    vlSelfRef.__PVT__rd_ptr_wab_nxt = vlSelfRef.__PVT__rd_ptr_wab;
    if (vlSelfRef.__PVT__restore_rdptr) {
        vlSelfRef.__PVT__rd_ptr_wab_nxt = vlSelfRef.__PVT__rd_ptr_wab_snapshot;
    } else if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__rd_ptr_wab_nxt = (0xfU & (
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.__PVT__rd_ptr_wab))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__rd_ptr_wab))));
    }
    vlSelfRef.__PVT__wr_ptr_wab_nxt = vlSelfRef.__PVT__wr_ptr_wab;
    if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__wr_ptr_wab_nxt = (0xfU & (
                                                   (0xfU 
                                                    == (IData)(vlSelfRef.__PVT__wr_ptr_wab))
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__wr_ptr_wab))));
    }
    __Vtemp_1 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (0U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_2, __Vtemp_1, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[0U], __Vtemp_2);
    __Vtemp_3 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (1U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_4, __Vtemp_3, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[1U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[1U], __Vtemp_4);
    __Vtemp_5 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (2U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_6, __Vtemp_5, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[2U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[2U], __Vtemp_6);
    __Vtemp_7 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (3U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[3U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[3U], __Vtemp_8);
    __Vtemp_9 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (4U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_10, __Vtemp_9, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[4U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[4U], __Vtemp_10);
    __Vtemp_11 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (5U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_12, __Vtemp_11, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[5U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[5U], __Vtemp_12);
    __Vtemp_13 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (6U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[6U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[6U], __Vtemp_14);
    __Vtemp_15 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                  & (7U == (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(680, __Vtemp_16, __Vtemp_15, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[7U]);
    VL_ASSIGN_W(680,vlSelfRef.__PVT__fifo_loc_nxt[7U], __Vtemp_16);
    vlSelfRef.__PVT__fifo_empty_nxt = ((IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt) 
                                       == (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt));
    vlSelfRef.__PVT__fifo_full_nxt = (((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt), 3U)) 
                                       != (1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt), 3U))) 
                                      & ((7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__wr_ptr_wab_nxt), 0U, 3)) 
                                         == (7U & VL_SEL_IIII(4, (IData)(vlSelfRef.__PVT__rd_ptr_wab_nxt), 0U, 3))));
}
