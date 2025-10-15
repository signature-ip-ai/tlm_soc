// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_syn_sram_flop_512bit__F90.h"

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__0__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__1__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__2__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__3__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__4__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__5__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__6__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__7__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__8__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__9__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__10__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__11__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__12__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__13__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__14__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__15__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__16__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__17__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__18__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__19__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__20__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__21__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__22__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__23__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__24__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__25__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__26__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__27__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__28__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__29__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__30__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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
    vlSelfRef.__PVT__empty = (0U == (IData)(vlSelfRef.__PVT__valid_location));
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__0(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__1(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc0_nxt, (IData)(vlSelfRef.__PVT__wren_0), vlSelfRef.__PVT__wrdata_0, vlSelfRef.__PVT__fifo_loc0);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc1_nxt, (IData)(vlSelfRef.__PVT__wren_1), vlSelfRef.__PVT__wrdata_1, vlSelfRef.__PVT__fifo_loc1);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc2_nxt, (IData)(vlSelfRef.__PVT__wren_2), vlSelfRef.__PVT__wrdata_2, vlSelfRef.__PVT__fifo_loc2);
    VL_COND_WIWW(144, vlSelfRef.__PVT__fifo_loc3_nxt, (IData)(vlSelfRef.__PVT__wren_3), vlSelfRef.__PVT__wrdata_3, vlSelfRef.__PVT__fifo_loc3);
}

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__2(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_compbuff_top_0__NUM_COMP_BUFF_TOP__BRA__31__KET____DOT__sig_syn_sram_flop_512bit_u__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_syn_sram_flop_512bit__F90___ctor_var_reset(Vsig_topology_top_sig_syn_sram_flop_512bit__F90* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_syn_sram_flop_512bit__F90___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__fifo_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14453550134765673388ull);
    vlSelf->__PVT__rstb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10656648699027260015ull);
    vlSelf->__PVT__wren_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9152654254873876544ull);
    vlSelf->__PVT__wren_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3867572468232618613ull);
    vlSelf->__PVT__wren_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14880240990725140733ull);
    vlSelf->__PVT__wren_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17501992039939111049ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__wrdata_0, __VscopeHash, 12621942478460562444ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__wrdata_1, __VscopeHash, 1043198932145103018ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__wrdata_2, __VscopeHash, 219667149508292980ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__wrdata_3, __VscopeHash, 15247239247418941440ull);
    vlSelf->__PVT__rden_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17026528490454982028ull);
    vlSelf->__PVT__rden_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18194764362630458384ull);
    vlSelf->__PVT__rden_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9691385090215720862ull);
    vlSelf->__PVT__rden_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7278630230092614594ull);
    vlSelf->__PVT__read_compbuf_datareuse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17976615381618503863ull);
    vlSelf->__PVT__dealloc_compfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12445131521815885622ull);
    vlSelf->__PVT__dealloc_unused_compbuf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15400609914466745207ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__rddata, __VscopeHash, 11450147673608844305ull);
    vlSelf->__PVT__rdbe = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4647118687447779133ull);
    vlSelf->__PVT__valid_location = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11727546928537498072ull);
    vlSelf->__PVT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3016723684638320966ull);
    vlSelf->__PVT__allocated_compbuf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7237931405911008832ull);
    vlSelf->__PVT__buff_avail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4003695141261043830ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__fifo_loc0, __VscopeHash, 15768508694911218248ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__fifo_loc0_nxt, __VscopeHash, 9154083782081207011ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__fifo_loc1, __VscopeHash, 15796287834957194797ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__fifo_loc1_nxt, __VscopeHash, 12498725823331923412ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__fifo_loc2, __VscopeHash, 8514613665733318569ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__fifo_loc2_nxt, __VscopeHash, 2357305591989834309ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__fifo_loc3, __VscopeHash, 15964861793734489923ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__PVT__fifo_loc3_nxt, __VscopeHash, 14998472599159212261ull);
    vlSelf->__PVT__valid_location_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11905043922700407626ull);
    vlSelf->__PVT__clr_valid_location = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16585601696257876556ull);
    vlSelf->__PVT__wren_0123 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3099110629221794462ull);
    vlSelf->__PVT__rden_0123 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8076921008655757257ull);
    vlSelf->__PVT__buff_avail_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17347354827141212695ull);
    vlSelf->__PVT__got_wr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4733722865543715337ull);
    vlSelf->__PVT__got_wr_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15167710750924255685ull);
    vlSelf->__PVT__got_wrrd = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10109685516720171983ull);
    vlSelf->__PVT__got_wrrd_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2392185446126322492ull);
    vlSelf->__PVT__got_wrrd_all = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17216338128658576054ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__Vdly__fifo_loc0, __VscopeHash, 18333251325647561105ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__Vdly__fifo_loc1, __VscopeHash, 16796195848805610179ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__Vdly__fifo_loc2, __VscopeHash, 5806414537129658892ull);
    VL_SCOPED_RAND_RESET_W(144, vlSelf->__Vdly__fifo_loc3, __VscopeHash, 6010078517206989959ull);
    vlSelf->__Vdly__valid_location = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6754626326998123159ull);
    vlSelf->__Vdly__got_wr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8081666119291410368ull);
    vlSelf->__Vdly__got_wrrd = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4325689805535183057ull);
    vlSelf->__Vdly__buff_avail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8752634219942649803ull);
}
