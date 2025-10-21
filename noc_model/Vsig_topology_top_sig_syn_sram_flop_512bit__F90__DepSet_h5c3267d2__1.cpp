// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_syn_sram_flop_512bit__F90.h"

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<12>/*383:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr;
    vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3);
    vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail;
    vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location;
    if (vlSelfRef.__PVT__rstb) {
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3_nxt);
        vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location_nxt;
        vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr_nxt;
        vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd_nxt;
        vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail_nxt;
    } else {
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc0,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc1,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc2,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc3,0x00000000);
        vlSelfRef.__Vdly__valid_location = 0U;
        vlSelfRef.__Vdly__got_wr = 0U;
        vlSelfRef.__Vdly__got_wrrd = 0U;
        vlSelfRef.__Vdly__buff_avail = 1U;
    }
    vlSelfRef.__PVT__got_wr = vlSelfRef.__Vdly__got_wr;
    vlSelfRef.__PVT__got_wrrd = vlSelfRef.__Vdly__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc0, vlSelfRef.__Vdly__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc1, vlSelfRef.__Vdly__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc2, vlSelfRef.__Vdly__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc3, vlSelfRef.__Vdly__fifo_loc3);
    vlSelfRef.__PVT__buff_avail = vlSelfRef.__Vdly__buff_avail;
    vlSelfRef.__PVT__valid_location = vlSelfRef.__Vdly__valid_location;
    vlSelfRef.__PVT__got_wrrd_all = (0xfU == (IData)(vlSelfRef.__PVT__got_wrrd));
    VL_SEL_WWII(128, 144, __Vtemp_1, vlSelfRef.__PVT__fifo_loc2, 0U, 128);
    VL_SEL_WWII(128, 144, __Vtemp_2, vlSelfRef.__PVT__fifo_loc1, 0U, 128);
    VL_CONCAT_WWW(256,128,128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_SEL_WWII(128, 144, __Vtemp_4, vlSelfRef.__PVT__fifo_loc0, 0U, 128);
    VL_CONCAT_WWW(384,256,128, __Vtemp_5, __Vtemp_3, __Vtemp_4);
    VL_ASSIGNSEL_WW(512,384,0U, vlSelfRef.__PVT__rddata, __Vtemp_5);
    VL_SEL_WWII(128, 144, __Vtemp_6, vlSelfRef.__PVT__fifo_loc3, 0U, 128);
    VL_ASSIGNSEL_WW(512,128,0x180U, vlSelfRef.__PVT__rddata, __Vtemp_6);
    vlSelfRef.__PVT__rdbe = VL_CONCAT_QII(64,32,32, 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc3, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc2, 0x80U, 16))), 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc1, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc0, 0x80U, 16))));
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__3(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__4(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__5(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<12>/*383:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr;
    vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3);
    vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail;
    vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location;
    if (vlSelfRef.__PVT__rstb) {
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3_nxt);
        vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location_nxt;
        vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr_nxt;
        vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd_nxt;
        vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail_nxt;
    } else {
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc0,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc1,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc2,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc3,0x00000000);
        vlSelfRef.__Vdly__valid_location = 0U;
        vlSelfRef.__Vdly__got_wr = 0U;
        vlSelfRef.__Vdly__got_wrrd = 0U;
        vlSelfRef.__Vdly__buff_avail = 1U;
    }
    vlSelfRef.__PVT__got_wr = vlSelfRef.__Vdly__got_wr;
    vlSelfRef.__PVT__got_wrrd = vlSelfRef.__Vdly__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc0, vlSelfRef.__Vdly__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc1, vlSelfRef.__Vdly__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc2, vlSelfRef.__Vdly__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc3, vlSelfRef.__Vdly__fifo_loc3);
    vlSelfRef.__PVT__buff_avail = vlSelfRef.__Vdly__buff_avail;
    vlSelfRef.__PVT__valid_location = vlSelfRef.__Vdly__valid_location;
    vlSelfRef.__PVT__got_wrrd_all = (0xfU == (IData)(vlSelfRef.__PVT__got_wrrd));
    VL_SEL_WWII(128, 144, __Vtemp_1, vlSelfRef.__PVT__fifo_loc2, 0U, 128);
    VL_SEL_WWII(128, 144, __Vtemp_2, vlSelfRef.__PVT__fifo_loc1, 0U, 128);
    VL_CONCAT_WWW(256,128,128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_SEL_WWII(128, 144, __Vtemp_4, vlSelfRef.__PVT__fifo_loc0, 0U, 128);
    VL_CONCAT_WWW(384,256,128, __Vtemp_5, __Vtemp_3, __Vtemp_4);
    VL_ASSIGNSEL_WW(512,384,0U, vlSelfRef.__PVT__rddata, __Vtemp_5);
    VL_SEL_WWII(128, 144, __Vtemp_6, vlSelfRef.__PVT__fifo_loc3, 0U, 128);
    VL_ASSIGNSEL_WW(512,128,0x180U, vlSelfRef.__PVT__rddata, __Vtemp_6);
    vlSelfRef.__PVT__rdbe = VL_CONCAT_QII(64,32,32, 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc3, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc2, 0x80U, 16))), 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc1, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc0, 0x80U, 16))));
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__3(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__4(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__5(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<12>/*383:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr;
    vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3);
    vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail;
    vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location;
    if (vlSelfRef.__PVT__rstb) {
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3_nxt);
        vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location_nxt;
        vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr_nxt;
        vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd_nxt;
        vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail_nxt;
    } else {
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc0,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc1,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc2,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc3,0x00000000);
        vlSelfRef.__Vdly__valid_location = 0U;
        vlSelfRef.__Vdly__got_wr = 0U;
        vlSelfRef.__Vdly__got_wrrd = 0U;
        vlSelfRef.__Vdly__buff_avail = 1U;
    }
    vlSelfRef.__PVT__got_wr = vlSelfRef.__Vdly__got_wr;
    vlSelfRef.__PVT__got_wrrd = vlSelfRef.__Vdly__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc0, vlSelfRef.__Vdly__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc1, vlSelfRef.__Vdly__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc2, vlSelfRef.__Vdly__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc3, vlSelfRef.__Vdly__fifo_loc3);
    vlSelfRef.__PVT__buff_avail = vlSelfRef.__Vdly__buff_avail;
    vlSelfRef.__PVT__valid_location = vlSelfRef.__Vdly__valid_location;
    vlSelfRef.__PVT__got_wrrd_all = (0xfU == (IData)(vlSelfRef.__PVT__got_wrrd));
    VL_SEL_WWII(128, 144, __Vtemp_1, vlSelfRef.__PVT__fifo_loc2, 0U, 128);
    VL_SEL_WWII(128, 144, __Vtemp_2, vlSelfRef.__PVT__fifo_loc1, 0U, 128);
    VL_CONCAT_WWW(256,128,128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_SEL_WWII(128, 144, __Vtemp_4, vlSelfRef.__PVT__fifo_loc0, 0U, 128);
    VL_CONCAT_WWW(384,256,128, __Vtemp_5, __Vtemp_3, __Vtemp_4);
    VL_ASSIGNSEL_WW(512,384,0U, vlSelfRef.__PVT__rddata, __Vtemp_5);
    VL_SEL_WWII(128, 144, __Vtemp_6, vlSelfRef.__PVT__fifo_loc3, 0U, 128);
    VL_ASSIGNSEL_WW(512,128,0x180U, vlSelfRef.__PVT__rddata, __Vtemp_6);
    vlSelfRef.__PVT__rdbe = VL_CONCAT_QII(64,32,32, 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc3, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc2, 0x80U, 16))), 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc1, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc0, 0x80U, 16))));
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__3(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__4(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__5(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<12>/*383:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr;
    vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3);
    vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail;
    vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location;
    if (vlSelfRef.__PVT__rstb) {
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3_nxt);
        vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location_nxt;
        vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr_nxt;
        vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd_nxt;
        vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail_nxt;
    } else {
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc0,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc1,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc2,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc3,0x00000000);
        vlSelfRef.__Vdly__valid_location = 0U;
        vlSelfRef.__Vdly__got_wr = 0U;
        vlSelfRef.__Vdly__got_wrrd = 0U;
        vlSelfRef.__Vdly__buff_avail = 1U;
    }
    vlSelfRef.__PVT__got_wr = vlSelfRef.__Vdly__got_wr;
    vlSelfRef.__PVT__got_wrrd = vlSelfRef.__Vdly__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc0, vlSelfRef.__Vdly__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc1, vlSelfRef.__Vdly__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc2, vlSelfRef.__Vdly__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc3, vlSelfRef.__Vdly__fifo_loc3);
    vlSelfRef.__PVT__buff_avail = vlSelfRef.__Vdly__buff_avail;
    vlSelfRef.__PVT__valid_location = vlSelfRef.__Vdly__valid_location;
    vlSelfRef.__PVT__got_wrrd_all = (0xfU == (IData)(vlSelfRef.__PVT__got_wrrd));
    VL_SEL_WWII(128, 144, __Vtemp_1, vlSelfRef.__PVT__fifo_loc2, 0U, 128);
    VL_SEL_WWII(128, 144, __Vtemp_2, vlSelfRef.__PVT__fifo_loc1, 0U, 128);
    VL_CONCAT_WWW(256,128,128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_SEL_WWII(128, 144, __Vtemp_4, vlSelfRef.__PVT__fifo_loc0, 0U, 128);
    VL_CONCAT_WWW(384,256,128, __Vtemp_5, __Vtemp_3, __Vtemp_4);
    VL_ASSIGNSEL_WW(512,384,0U, vlSelfRef.__PVT__rddata, __Vtemp_5);
    VL_SEL_WWII(128, 144, __Vtemp_6, vlSelfRef.__PVT__fifo_loc3, 0U, 128);
    VL_ASSIGNSEL_WW(512,128,0x180U, vlSelfRef.__PVT__rddata, __Vtemp_6);
    vlSelfRef.__PVT__rdbe = VL_CONCAT_QII(64,32,32, 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc3, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc2, 0x80U, 16))), 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc1, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc0, 0x80U, 16))));
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__3(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__4(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__5(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<12>/*383:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr;
    vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3);
    vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail;
    vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location;
    if (vlSelfRef.__PVT__rstb) {
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3_nxt);
        vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location_nxt;
        vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr_nxt;
        vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd_nxt;
        vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail_nxt;
    } else {
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc0,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc1,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc2,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc3,0x00000000);
        vlSelfRef.__Vdly__valid_location = 0U;
        vlSelfRef.__Vdly__got_wr = 0U;
        vlSelfRef.__Vdly__got_wrrd = 0U;
        vlSelfRef.__Vdly__buff_avail = 1U;
    }
    vlSelfRef.__PVT__got_wr = vlSelfRef.__Vdly__got_wr;
    vlSelfRef.__PVT__got_wrrd = vlSelfRef.__Vdly__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc0, vlSelfRef.__Vdly__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc1, vlSelfRef.__Vdly__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc2, vlSelfRef.__Vdly__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc3, vlSelfRef.__Vdly__fifo_loc3);
    vlSelfRef.__PVT__buff_avail = vlSelfRef.__Vdly__buff_avail;
    vlSelfRef.__PVT__valid_location = vlSelfRef.__Vdly__valid_location;
    vlSelfRef.__PVT__got_wrrd_all = (0xfU == (IData)(vlSelfRef.__PVT__got_wrrd));
    VL_SEL_WWII(128, 144, __Vtemp_1, vlSelfRef.__PVT__fifo_loc2, 0U, 128);
    VL_SEL_WWII(128, 144, __Vtemp_2, vlSelfRef.__PVT__fifo_loc1, 0U, 128);
    VL_CONCAT_WWW(256,128,128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_SEL_WWII(128, 144, __Vtemp_4, vlSelfRef.__PVT__fifo_loc0, 0U, 128);
    VL_CONCAT_WWW(384,256,128, __Vtemp_5, __Vtemp_3, __Vtemp_4);
    VL_ASSIGNSEL_WW(512,384,0U, vlSelfRef.__PVT__rddata, __Vtemp_5);
    VL_SEL_WWII(128, 144, __Vtemp_6, vlSelfRef.__PVT__fifo_loc3, 0U, 128);
    VL_ASSIGNSEL_WW(512,128,0x180U, vlSelfRef.__PVT__rddata, __Vtemp_6);
    vlSelfRef.__PVT__rdbe = VL_CONCAT_QII(64,32,32, 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc3, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc2, 0x80U, 16))), 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc1, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc0, 0x80U, 16))));
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__3(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__4(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__5(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<12>/*383:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr;
    vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3);
    vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail;
    vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location;
    if (vlSelfRef.__PVT__rstb) {
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3_nxt);
        vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location_nxt;
        vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr_nxt;
        vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd_nxt;
        vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail_nxt;
    } else {
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc0,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc1,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc2,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc3,0x00000000);
        vlSelfRef.__Vdly__valid_location = 0U;
        vlSelfRef.__Vdly__got_wr = 0U;
        vlSelfRef.__Vdly__got_wrrd = 0U;
        vlSelfRef.__Vdly__buff_avail = 1U;
    }
    vlSelfRef.__PVT__got_wr = vlSelfRef.__Vdly__got_wr;
    vlSelfRef.__PVT__got_wrrd = vlSelfRef.__Vdly__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc0, vlSelfRef.__Vdly__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc1, vlSelfRef.__Vdly__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc2, vlSelfRef.__Vdly__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc3, vlSelfRef.__Vdly__fifo_loc3);
    vlSelfRef.__PVT__buff_avail = vlSelfRef.__Vdly__buff_avail;
    vlSelfRef.__PVT__valid_location = vlSelfRef.__Vdly__valid_location;
    vlSelfRef.__PVT__got_wrrd_all = (0xfU == (IData)(vlSelfRef.__PVT__got_wrrd));
    VL_SEL_WWII(128, 144, __Vtemp_1, vlSelfRef.__PVT__fifo_loc2, 0U, 128);
    VL_SEL_WWII(128, 144, __Vtemp_2, vlSelfRef.__PVT__fifo_loc1, 0U, 128);
    VL_CONCAT_WWW(256,128,128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_SEL_WWII(128, 144, __Vtemp_4, vlSelfRef.__PVT__fifo_loc0, 0U, 128);
    VL_CONCAT_WWW(384,256,128, __Vtemp_5, __Vtemp_3, __Vtemp_4);
    VL_ASSIGNSEL_WW(512,384,0U, vlSelfRef.__PVT__rddata, __Vtemp_5);
    VL_SEL_WWII(128, 144, __Vtemp_6, vlSelfRef.__PVT__fifo_loc3, 0U, 128);
    VL_ASSIGNSEL_WW(512,128,0x180U, vlSelfRef.__PVT__rddata, __Vtemp_6);
    vlSelfRef.__PVT__rdbe = VL_CONCAT_QII(64,32,32, 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc3, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc2, 0x80U, 16))), 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc1, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc0, 0x80U, 16))));
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__3(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__4(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__5(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<12>/*383:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr;
    vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3);
    vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail;
    vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location;
    if (vlSelfRef.__PVT__rstb) {
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3_nxt);
        vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location_nxt;
        vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr_nxt;
        vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd_nxt;
        vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail_nxt;
    } else {
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc0,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc1,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc2,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc3,0x00000000);
        vlSelfRef.__Vdly__valid_location = 0U;
        vlSelfRef.__Vdly__got_wr = 0U;
        vlSelfRef.__Vdly__got_wrrd = 0U;
        vlSelfRef.__Vdly__buff_avail = 1U;
    }
    vlSelfRef.__PVT__got_wr = vlSelfRef.__Vdly__got_wr;
    vlSelfRef.__PVT__got_wrrd = vlSelfRef.__Vdly__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc0, vlSelfRef.__Vdly__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc1, vlSelfRef.__Vdly__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc2, vlSelfRef.__Vdly__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc3, vlSelfRef.__Vdly__fifo_loc3);
    vlSelfRef.__PVT__buff_avail = vlSelfRef.__Vdly__buff_avail;
    vlSelfRef.__PVT__valid_location = vlSelfRef.__Vdly__valid_location;
    vlSelfRef.__PVT__got_wrrd_all = (0xfU == (IData)(vlSelfRef.__PVT__got_wrrd));
    VL_SEL_WWII(128, 144, __Vtemp_1, vlSelfRef.__PVT__fifo_loc2, 0U, 128);
    VL_SEL_WWII(128, 144, __Vtemp_2, vlSelfRef.__PVT__fifo_loc1, 0U, 128);
    VL_CONCAT_WWW(256,128,128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_SEL_WWII(128, 144, __Vtemp_4, vlSelfRef.__PVT__fifo_loc0, 0U, 128);
    VL_CONCAT_WWW(384,256,128, __Vtemp_5, __Vtemp_3, __Vtemp_4);
    VL_ASSIGNSEL_WW(512,384,0U, vlSelfRef.__PVT__rddata, __Vtemp_5);
    VL_SEL_WWII(128, 144, __Vtemp_6, vlSelfRef.__PVT__fifo_loc3, 0U, 128);
    VL_ASSIGNSEL_WW(512,128,0x180U, vlSelfRef.__PVT__rddata, __Vtemp_6);
    vlSelfRef.__PVT__rdbe = VL_CONCAT_QII(64,32,32, 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc3, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc2, 0x80U, 16))), 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc1, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc0, 0x80U, 16))));
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__3(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__4(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__5(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<12>/*383:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr;
    vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3);
    vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail;
    vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location;
    if (vlSelfRef.__PVT__rstb) {
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3_nxt);
        vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location_nxt;
        vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr_nxt;
        vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd_nxt;
        vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail_nxt;
    } else {
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc0,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc1,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc2,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc3,0x00000000);
        vlSelfRef.__Vdly__valid_location = 0U;
        vlSelfRef.__Vdly__got_wr = 0U;
        vlSelfRef.__Vdly__got_wrrd = 0U;
        vlSelfRef.__Vdly__buff_avail = 1U;
    }
    vlSelfRef.__PVT__got_wr = vlSelfRef.__Vdly__got_wr;
    vlSelfRef.__PVT__got_wrrd = vlSelfRef.__Vdly__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc0, vlSelfRef.__Vdly__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc1, vlSelfRef.__Vdly__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc2, vlSelfRef.__Vdly__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc3, vlSelfRef.__Vdly__fifo_loc3);
    vlSelfRef.__PVT__buff_avail = vlSelfRef.__Vdly__buff_avail;
    vlSelfRef.__PVT__valid_location = vlSelfRef.__Vdly__valid_location;
    vlSelfRef.__PVT__got_wrrd_all = (0xfU == (IData)(vlSelfRef.__PVT__got_wrrd));
    VL_SEL_WWII(128, 144, __Vtemp_1, vlSelfRef.__PVT__fifo_loc2, 0U, 128);
    VL_SEL_WWII(128, 144, __Vtemp_2, vlSelfRef.__PVT__fifo_loc1, 0U, 128);
    VL_CONCAT_WWW(256,128,128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_SEL_WWII(128, 144, __Vtemp_4, vlSelfRef.__PVT__fifo_loc0, 0U, 128);
    VL_CONCAT_WWW(384,256,128, __Vtemp_5, __Vtemp_3, __Vtemp_4);
    VL_ASSIGNSEL_WW(512,384,0U, vlSelfRef.__PVT__rddata, __Vtemp_5);
    VL_SEL_WWII(128, 144, __Vtemp_6, vlSelfRef.__PVT__fifo_loc3, 0U, 128);
    VL_ASSIGNSEL_WW(512,128,0x180U, vlSelfRef.__PVT__rddata, __Vtemp_6);
    vlSelfRef.__PVT__rdbe = VL_CONCAT_QII(64,32,32, 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc3, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc2, 0x80U, 16))), 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc1, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc0, 0x80U, 16))));
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__3(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__4(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__5(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<12>/*383:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr;
    vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3);
    vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail;
    vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location;
    if (vlSelfRef.__PVT__rstb) {
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3_nxt);
        vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location_nxt;
        vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr_nxt;
        vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd_nxt;
        vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail_nxt;
    } else {
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc0,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc1,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc2,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc3,0x00000000);
        vlSelfRef.__Vdly__valid_location = 0U;
        vlSelfRef.__Vdly__got_wr = 0U;
        vlSelfRef.__Vdly__got_wrrd = 0U;
        vlSelfRef.__Vdly__buff_avail = 1U;
    }
    vlSelfRef.__PVT__got_wr = vlSelfRef.__Vdly__got_wr;
    vlSelfRef.__PVT__got_wrrd = vlSelfRef.__Vdly__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc0, vlSelfRef.__Vdly__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc1, vlSelfRef.__Vdly__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc2, vlSelfRef.__Vdly__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc3, vlSelfRef.__Vdly__fifo_loc3);
    vlSelfRef.__PVT__buff_avail = vlSelfRef.__Vdly__buff_avail;
    vlSelfRef.__PVT__valid_location = vlSelfRef.__Vdly__valid_location;
    vlSelfRef.__PVT__got_wrrd_all = (0xfU == (IData)(vlSelfRef.__PVT__got_wrrd));
    VL_SEL_WWII(128, 144, __Vtemp_1, vlSelfRef.__PVT__fifo_loc2, 0U, 128);
    VL_SEL_WWII(128, 144, __Vtemp_2, vlSelfRef.__PVT__fifo_loc1, 0U, 128);
    VL_CONCAT_WWW(256,128,128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_SEL_WWII(128, 144, __Vtemp_4, vlSelfRef.__PVT__fifo_loc0, 0U, 128);
    VL_CONCAT_WWW(384,256,128, __Vtemp_5, __Vtemp_3, __Vtemp_4);
    VL_ASSIGNSEL_WW(512,384,0U, vlSelfRef.__PVT__rddata, __Vtemp_5);
    VL_SEL_WWII(128, 144, __Vtemp_6, vlSelfRef.__PVT__fifo_loc3, 0U, 128);
    VL_ASSIGNSEL_WW(512,128,0x180U, vlSelfRef.__PVT__rddata, __Vtemp_6);
    vlSelfRef.__PVT__rdbe = VL_CONCAT_QII(64,32,32, 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc3, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc2, 0x80U, 16))), 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc1, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc0, 0x80U, 16))));
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__3(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__4(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__5(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<12>/*383:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr;
    vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3);
    vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail;
    vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location;
    if (vlSelfRef.__PVT__rstb) {
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3_nxt);
        vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location_nxt;
        vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr_nxt;
        vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd_nxt;
        vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail_nxt;
    } else {
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc0,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc1,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc2,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc3,0x00000000);
        vlSelfRef.__Vdly__valid_location = 0U;
        vlSelfRef.__Vdly__got_wr = 0U;
        vlSelfRef.__Vdly__got_wrrd = 0U;
        vlSelfRef.__Vdly__buff_avail = 1U;
    }
    vlSelfRef.__PVT__got_wr = vlSelfRef.__Vdly__got_wr;
    vlSelfRef.__PVT__got_wrrd = vlSelfRef.__Vdly__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc0, vlSelfRef.__Vdly__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc1, vlSelfRef.__Vdly__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc2, vlSelfRef.__Vdly__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc3, vlSelfRef.__Vdly__fifo_loc3);
    vlSelfRef.__PVT__buff_avail = vlSelfRef.__Vdly__buff_avail;
    vlSelfRef.__PVT__valid_location = vlSelfRef.__Vdly__valid_location;
    vlSelfRef.__PVT__got_wrrd_all = (0xfU == (IData)(vlSelfRef.__PVT__got_wrrd));
    VL_SEL_WWII(128, 144, __Vtemp_1, vlSelfRef.__PVT__fifo_loc2, 0U, 128);
    VL_SEL_WWII(128, 144, __Vtemp_2, vlSelfRef.__PVT__fifo_loc1, 0U, 128);
    VL_CONCAT_WWW(256,128,128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_SEL_WWII(128, 144, __Vtemp_4, vlSelfRef.__PVT__fifo_loc0, 0U, 128);
    VL_CONCAT_WWW(384,256,128, __Vtemp_5, __Vtemp_3, __Vtemp_4);
    VL_ASSIGNSEL_WW(512,384,0U, vlSelfRef.__PVT__rddata, __Vtemp_5);
    VL_SEL_WWII(128, 144, __Vtemp_6, vlSelfRef.__PVT__fifo_loc3, 0U, 128);
    VL_ASSIGNSEL_WW(512,128,0x180U, vlSelfRef.__PVT__rddata, __Vtemp_6);
    vlSelfRef.__PVT__rdbe = VL_CONCAT_QII(64,32,32, 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc3, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc2, 0x80U, 16))), 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc1, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc0, 0x80U, 16))));
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__3(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__4(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__5(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<12>/*383:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr;
    vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3);
    vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail;
    vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location;
    if (vlSelfRef.__PVT__rstb) {
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3_nxt);
        vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location_nxt;
        vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr_nxt;
        vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd_nxt;
        vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail_nxt;
    } else {
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc0,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc1,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc2,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc3,0x00000000);
        vlSelfRef.__Vdly__valid_location = 0U;
        vlSelfRef.__Vdly__got_wr = 0U;
        vlSelfRef.__Vdly__got_wrrd = 0U;
        vlSelfRef.__Vdly__buff_avail = 1U;
    }
    vlSelfRef.__PVT__got_wr = vlSelfRef.__Vdly__got_wr;
    vlSelfRef.__PVT__got_wrrd = vlSelfRef.__Vdly__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc0, vlSelfRef.__Vdly__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc1, vlSelfRef.__Vdly__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc2, vlSelfRef.__Vdly__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc3, vlSelfRef.__Vdly__fifo_loc3);
    vlSelfRef.__PVT__buff_avail = vlSelfRef.__Vdly__buff_avail;
    vlSelfRef.__PVT__valid_location = vlSelfRef.__Vdly__valid_location;
    vlSelfRef.__PVT__got_wrrd_all = (0xfU == (IData)(vlSelfRef.__PVT__got_wrrd));
    VL_SEL_WWII(128, 144, __Vtemp_1, vlSelfRef.__PVT__fifo_loc2, 0U, 128);
    VL_SEL_WWII(128, 144, __Vtemp_2, vlSelfRef.__PVT__fifo_loc1, 0U, 128);
    VL_CONCAT_WWW(256,128,128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_SEL_WWII(128, 144, __Vtemp_4, vlSelfRef.__PVT__fifo_loc0, 0U, 128);
    VL_CONCAT_WWW(384,256,128, __Vtemp_5, __Vtemp_3, __Vtemp_4);
    VL_ASSIGNSEL_WW(512,384,0U, vlSelfRef.__PVT__rddata, __Vtemp_5);
    VL_SEL_WWII(128, 144, __Vtemp_6, vlSelfRef.__PVT__fifo_loc3, 0U, 128);
    VL_ASSIGNSEL_WW(512,128,0x180U, vlSelfRef.__PVT__rddata, __Vtemp_6);
    vlSelfRef.__PVT__rdbe = VL_CONCAT_QII(64,32,32, 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc3, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc2, 0x80U, 16))), 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc1, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc0, 0x80U, 16))));
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__3(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__4(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__5(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<12>/*383:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr;
    vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3);
    vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail;
    vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location;
    if (vlSelfRef.__PVT__rstb) {
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3_nxt);
        vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location_nxt;
        vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr_nxt;
        vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd_nxt;
        vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail_nxt;
    } else {
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc0,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc1,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc2,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc3,0x00000000);
        vlSelfRef.__Vdly__valid_location = 0U;
        vlSelfRef.__Vdly__got_wr = 0U;
        vlSelfRef.__Vdly__got_wrrd = 0U;
        vlSelfRef.__Vdly__buff_avail = 1U;
    }
    vlSelfRef.__PVT__got_wr = vlSelfRef.__Vdly__got_wr;
    vlSelfRef.__PVT__got_wrrd = vlSelfRef.__Vdly__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc0, vlSelfRef.__Vdly__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc1, vlSelfRef.__Vdly__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc2, vlSelfRef.__Vdly__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc3, vlSelfRef.__Vdly__fifo_loc3);
    vlSelfRef.__PVT__buff_avail = vlSelfRef.__Vdly__buff_avail;
    vlSelfRef.__PVT__valid_location = vlSelfRef.__Vdly__valid_location;
    vlSelfRef.__PVT__got_wrrd_all = (0xfU == (IData)(vlSelfRef.__PVT__got_wrrd));
    VL_SEL_WWII(128, 144, __Vtemp_1, vlSelfRef.__PVT__fifo_loc2, 0U, 128);
    VL_SEL_WWII(128, 144, __Vtemp_2, vlSelfRef.__PVT__fifo_loc1, 0U, 128);
    VL_CONCAT_WWW(256,128,128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_SEL_WWII(128, 144, __Vtemp_4, vlSelfRef.__PVT__fifo_loc0, 0U, 128);
    VL_CONCAT_WWW(384,256,128, __Vtemp_5, __Vtemp_3, __Vtemp_4);
    VL_ASSIGNSEL_WW(512,384,0U, vlSelfRef.__PVT__rddata, __Vtemp_5);
    VL_SEL_WWII(128, 144, __Vtemp_6, vlSelfRef.__PVT__fifo_loc3, 0U, 128);
    VL_ASSIGNSEL_WW(512,128,0x180U, vlSelfRef.__PVT__rddata, __Vtemp_6);
    vlSelfRef.__PVT__rdbe = VL_CONCAT_QII(64,32,32, 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc3, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc2, 0x80U, 16))), 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc1, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc0, 0x80U, 16))));
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__3(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__4(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__5(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<12>/*383:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr;
    vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3);
    vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail;
    vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location;
    if (vlSelfRef.__PVT__rstb) {
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc0, vlSelfRef.__PVT__fifo_loc0_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc1, vlSelfRef.__PVT__fifo_loc1_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc2, vlSelfRef.__PVT__fifo_loc2_nxt);
        VL_ASSIGN_W(144,vlSelfRef.__Vdly__fifo_loc3, vlSelfRef.__PVT__fifo_loc3_nxt);
        vlSelfRef.__Vdly__valid_location = vlSelfRef.__PVT__valid_location_nxt;
        vlSelfRef.__Vdly__got_wr = vlSelfRef.__PVT__got_wr_nxt;
        vlSelfRef.__Vdly__got_wrrd = vlSelfRef.__PVT__got_wrrd_nxt;
        vlSelfRef.__Vdly__buff_avail = vlSelfRef.__PVT__buff_avail_nxt;
    } else {
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc0,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc1,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc2,0x00000000);
        VL_CONST_W_1X(144,vlSelfRef.__Vdly__fifo_loc3,0x00000000);
        vlSelfRef.__Vdly__valid_location = 0U;
        vlSelfRef.__Vdly__got_wr = 0U;
        vlSelfRef.__Vdly__got_wrrd = 0U;
        vlSelfRef.__Vdly__buff_avail = 1U;
    }
    vlSelfRef.__PVT__got_wr = vlSelfRef.__Vdly__got_wr;
    vlSelfRef.__PVT__got_wrrd = vlSelfRef.__Vdly__got_wrrd;
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc0, vlSelfRef.__Vdly__fifo_loc0);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc1, vlSelfRef.__Vdly__fifo_loc1);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc2, vlSelfRef.__Vdly__fifo_loc2);
    VL_ASSIGN_W(144,vlSelfRef.__PVT__fifo_loc3, vlSelfRef.__Vdly__fifo_loc3);
    vlSelfRef.__PVT__buff_avail = vlSelfRef.__Vdly__buff_avail;
    vlSelfRef.__PVT__valid_location = vlSelfRef.__Vdly__valid_location;
    vlSelfRef.__PVT__got_wrrd_all = (0xfU == (IData)(vlSelfRef.__PVT__got_wrrd));
    VL_SEL_WWII(128, 144, __Vtemp_1, vlSelfRef.__PVT__fifo_loc2, 0U, 128);
    VL_SEL_WWII(128, 144, __Vtemp_2, vlSelfRef.__PVT__fifo_loc1, 0U, 128);
    VL_CONCAT_WWW(256,128,128, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    VL_SEL_WWII(128, 144, __Vtemp_4, vlSelfRef.__PVT__fifo_loc0, 0U, 128);
    VL_CONCAT_WWW(384,256,128, __Vtemp_5, __Vtemp_3, __Vtemp_4);
    VL_ASSIGNSEL_WW(512,384,0U, vlSelfRef.__PVT__rddata, __Vtemp_5);
    VL_SEL_WWII(128, 144, __Vtemp_6, vlSelfRef.__PVT__fifo_loc3, 0U, 128);
    VL_ASSIGNSEL_WW(512,128,0x180U, vlSelfRef.__PVT__rddata, __Vtemp_6);
    vlSelfRef.__PVT__rdbe = VL_CONCAT_QII(64,32,32, 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc3, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc2, 0x80U, 16))), 
                                          VL_CONCAT_III(32,16,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc1, 0x80U, 16)), 
                                                        (0xffffU 
                                                         & VL_SEL_IWII(144, vlSelfRef.__PVT__fifo_loc0, 0x80U, 16))));
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_0) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_1) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_2) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clr_valid_location, 
                    (((IData)(vlSelfRef.__PVT__rden_3) 
                      & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                     | (IData)(vlSelfRef.__PVT__dealloc_compfifo)));
    vlSelfRef.__PVT__rden_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_3) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_2) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))), 
                                               VL_CONCAT_III(2,1,1, 
                                                             (((IData)(vlSelfRef.__PVT__rden_1) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo)), 
                                                             (((IData)(vlSelfRef.__PVT__rden_0) 
                                                               & (~ (IData)(vlSelfRef.__PVT__read_compbuf_datareuse))) 
                                                              | (IData)(vlSelfRef.__PVT__dealloc_compfifo))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_0123 = VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_3), (IData)(vlSelfRef.__PVT__wren_2)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__wren_1), (IData)(vlSelfRef.__PVT__wren_0)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_0) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_1) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_2) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_location_nxt, 
                    (1U & ((IData)(vlSelfRef.__PVT__wren_3) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clr_valid_location), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_location), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__3(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__buff_avail_nxt = vlSelfRef.__PVT__buff_avail;
    if (vlSelfRef.__PVT__allocated_compbuf) {
        vlSelfRef.__PVT__buff_avail_nxt = 0U;
    } else if (vlSelfRef.__PVT__got_wrrd_all) {
        vlSelfRef.__PVT__buff_avail_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 0U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 1U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 2U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wrrd_nxt, 
                    (1U & (((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U) 
                             & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__rden_0123), 3U)) 
                            | (IData)(vlSelfRef.__PVT__dealloc_unused_compbuf)) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wrrd), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__4(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 0U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 1U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 2U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__got_wr_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_0123), 3U) 
                           | ((~ ((IData)(vlSelfRef.__PVT__got_wrrd_all) 
                                  | (IData)(vlSelfRef.__PVT__allocated_compbuf))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__got_wr), 3U)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__5(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}
