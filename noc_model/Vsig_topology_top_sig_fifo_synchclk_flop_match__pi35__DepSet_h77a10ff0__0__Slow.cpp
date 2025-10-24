// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop_match__pi35.h"

VL_ATTR_COLD void Vsig_topology_top_sig_fifo_synchclk_flop_match__pi35___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop_match__pi35* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_fifo_synchclk_flop_match__pi35___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(155,vlSelfRef.__PVT__fifo_rddata, vlSelfRef.__PVT__fifo_loc
                [vlSelfRef.__PVT__rd_ptr]);
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
}

VL_ATTR_COLD void Vsig_topology_top_sig_fifo_synchclk_flop_match__pi35___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0__1(Vsig_topology_top_sig_fifo_synchclk_flop_match__pi35* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_fifo_synchclk_flop_match__pi35___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0__1\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_fifo_synchclk_flop_match__pi35___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop_match__pi35* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_fifo_synchclk_flop_match__pi35___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_cachedir_ctrlr_0__cmqfifo_0__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_fifo_synchclk_flop_match__pi35___ctor_var_reset(Vsig_topology_top_sig_fifo_synchclk_flop_match__pi35* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_fifo_synchclk_flop_match__pi35___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__fifo_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14453550134765673388ull);
    vlSelf->__PVT__rstb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10656648699027260015ull);
    vlSelf->__PVT__fifo_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4740109576381753218ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__fifo_wrdata, __VscopeHash, 13735560909582501842ull);
    vlSelf->__PVT__fifo_rden = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13760157769081611964ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__fifo_rddata, __VscopeHash, 9356019634320357306ull);
    vlSelf->__PVT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4782710040797492827ull);
    vlSelf->__PVT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7130728548526110812ull);
    vlSelf->__PVT__fiforoom_atlst4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 666873421548137599ull);
    vlSelf->__PVT__fifohas_1room = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3472605202250894011ull);
    vlSelf->__PVT__fifohas_2room = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12344527873606669537ull);
    vlSelf->__PVT__fifohas_3room = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12098390222229679584ull);
    vlSelf->__PVT__match_data_in = VL_SCOPED_RAND_RESET_Q(46, __VscopeHash, 14178392448327493378ull);
    vlSelf->__PVT__itis_a_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17358190669493047700ull);
    vlSelf->__PVT__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12436053222651956031ull);
    vlSelf->__PVT__wr_ptr_nxt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2114357389562483315ull);
    vlSelf->__PVT__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8582113012353463185ull);
    vlSelf->__PVT__rd_ptr_nxt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6890153477909643289ull);
    vlSelf->__PVT__num_entries = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2911896340747684444ull);
    vlSelf->__PVT__num_entries_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12630470525648990042ull);
    vlSelf->__PVT__num_room = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1678245501677482378ull);
    vlSelf->__PVT__num_room_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17318036400034080443ull);
    vlSelf->__PVT__fifo_full_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11673352283834452618ull);
    vlSelf->__PVT__fifo_empty_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16914632481779406981ull);
    vlSelf->__PVT__fiforoom_atlst4_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 510710083035095683ull);
    vlSelf->__PVT__fifohas_1room_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6121138753961833441ull);
    vlSelf->__PVT__fifohas_2room_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6273421442279779392ull);
    vlSelf->__PVT__fifohas_3room_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16578448606514038302ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__fifo_loc_nxt[__Vi0], __VscopeHash, 13221930881648868120ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(155, vlSelf->__PVT__fifo_loc[__Vi0], __VscopeHash, 12988781385847939524ull);
    }
    vlSelf->__PVT__fifo_loc_valid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10147515346916726722ull);
    vlSelf->__PVT__fifo_loc_valid_nxt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7749528739982558997ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__fifo_loc_match_field[__Vi0] = VL_SCOPED_RAND_RESET_Q(46, __VscopeHash, 4178440912062285835ull);
    }
    vlSelf->__PVT__match_loc_all = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13113982675926236731ull);
    vlSelf->__Vdly__wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6265375712968675170ull);
    vlSelf->__Vdly__rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1296402517236374361ull);
    vlSelf->__Vdly__num_entries = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1853319490332428688ull);
    vlSelf->__Vdly__num_room = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11042404887673401313ull);
    vlSelf->__Vdly__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5442610800307487797ull);
    vlSelf->__Vdly__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9011185115827397552ull);
    vlSelf->__Vdly__fiforoom_atlst4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1244377832346992683ull);
    vlSelf->__Vdly__fifo_loc_valid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7614057696813472104ull);
    vlSelf->__Vdly__fifohas_1room = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9381897847101308885ull);
    vlSelf->__Vdly__fifohas_2room = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5500205124489316343ull);
    vlSelf->__Vdly__fifohas_3room = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15674142347790927281ull);
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__VdlyVal__fifo_loc__v0, __VscopeHash, 13255051178611793530ull);
    vlSelf->__VdlySet__fifo_loc__v0 = 0;
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__VdlyVal__fifo_loc__v1, __VscopeHash, 11885904708264626788ull);
    vlSelf->__VdlySet__fifo_loc__v1 = 0;
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__VdlyVal__fifo_loc__v2, __VscopeHash, 16414715005339778905ull);
    vlSelf->__VdlySet__fifo_loc__v2 = 0;
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__VdlyVal__fifo_loc__v3, __VscopeHash, 13091504067066968602ull);
    vlSelf->__VdlySet__fifo_loc__v3 = 0;
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__VdlyVal__fifo_loc__v4, __VscopeHash, 17888153163750944362ull);
    vlSelf->__VdlySet__fifo_loc__v4 = 0;
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__VdlyVal__fifo_loc__v5, __VscopeHash, 1762205089603743507ull);
    vlSelf->__VdlySet__fifo_loc__v5 = 0;
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__VdlyVal__fifo_loc__v6, __VscopeHash, 7018656539517626646ull);
    vlSelf->__VdlySet__fifo_loc__v6 = 0;
    VL_SCOPED_RAND_RESET_W(155, vlSelf->__VdlyVal__fifo_loc__v7, __VscopeHash, 17724606052206057034ull);
    vlSelf->__VdlySet__fifo_loc__v7 = 0;
}
