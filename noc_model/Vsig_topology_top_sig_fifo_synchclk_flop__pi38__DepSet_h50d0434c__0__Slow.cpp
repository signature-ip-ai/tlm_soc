// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop__pi38.h"

VL_ATTR_COLD void Vsig_topology_top_sig_fifo_synchclk_flop__pi38___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo__0(Vsig_topology_top_sig_fifo_synchclk_flop__pi38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__pi38___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__fifo_rddata = vlSelfRef.__PVT__fifo_loc
        [vlSelfRef.__PVT__rd_ptr];
}

VL_ATTR_COLD void Vsig_topology_top_sig_fifo_synchclk_flop__pi38___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo__1(Vsig_topology_top_sig_fifo_synchclk_flop__pi38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__pi38___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    vlSelfRef.__PVT__fifo_loc_nxt[0U] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                          & (0U == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                          ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                          : vlSelfRef.__PVT__fifo_loc
                                         [0U]);
    vlSelfRef.__PVT__fifo_loc_nxt[1U] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                          & (1U == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                          ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                          : vlSelfRef.__PVT__fifo_loc
                                         [1U]);
    vlSelfRef.__PVT__fifo_loc_nxt[2U] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                          & (2U == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                          ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                          : vlSelfRef.__PVT__fifo_loc
                                         [2U]);
    vlSelfRef.__PVT__fifo_loc_nxt[3U] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                          & (3U == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                          ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                          : vlSelfRef.__PVT__fifo_loc
                                         [3U]);
    vlSelfRef.__PVT__fifo_loc_nxt[4U] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                          & (4U == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                          ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                          : vlSelfRef.__PVT__fifo_loc
                                         [4U]);
    vlSelfRef.__PVT__fifo_loc_nxt[5U] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                          & (5U == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                          ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                          : vlSelfRef.__PVT__fifo_loc
                                         [5U]);
    vlSelfRef.__PVT__fifo_loc_nxt[6U] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                          & (6U == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                          ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                          : vlSelfRef.__PVT__fifo_loc
                                         [6U]);
    vlSelfRef.__PVT__fifo_loc_nxt[7U] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                          & (7U == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                          ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                          : vlSelfRef.__PVT__fifo_loc
                                         [7U]);
    vlSelfRef.__PVT__fifo_loc_nxt[8U] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                          & (8U == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                          ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                          : vlSelfRef.__PVT__fifo_loc
                                         [8U]);
    vlSelfRef.__PVT__fifo_loc_nxt[9U] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                          & (9U == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                          ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                          : vlSelfRef.__PVT__fifo_loc
                                         [9U]);
    vlSelfRef.__PVT__fifo_loc_nxt[0xaU] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                            & (0xaU 
                                               == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                            ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                            : vlSelfRef.__PVT__fifo_loc
                                           [0xaU]);
    vlSelfRef.__PVT__fifo_loc_nxt[0xbU] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                            & (0xbU 
                                               == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                            ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                            : vlSelfRef.__PVT__fifo_loc
                                           [0xbU]);
    vlSelfRef.__PVT__fifo_loc_nxt[0xcU] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                            & (0xcU 
                                               == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                            ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                            : vlSelfRef.__PVT__fifo_loc
                                           [0xcU]);
    vlSelfRef.__PVT__fifo_loc_nxt[0xdU] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                            & (0xdU 
                                               == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                            ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                            : vlSelfRef.__PVT__fifo_loc
                                           [0xdU]);
    vlSelfRef.__PVT__fifo_loc_nxt[0xeU] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                            & (0xeU 
                                               == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                            ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                            : vlSelfRef.__PVT__fifo_loc
                                           [0xeU]);
    vlSelfRef.__PVT__fifo_loc_nxt[0xfU] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                            & (0xfU 
                                               == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                            ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                            : vlSelfRef.__PVT__fifo_loc
                                           [0xfU]);
    vlSelfRef.__PVT__fifo_loc_nxt[0x10U] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                             & (0x10U 
                                                == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                             ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                             : vlSelfRef.__PVT__fifo_loc
                                            [0x10U]);
    vlSelfRef.__PVT__fifo_loc_nxt[0x11U] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                             & (0x11U 
                                                == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                             ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                             : vlSelfRef.__PVT__fifo_loc
                                            [0x11U]);
    vlSelfRef.__PVT__fifo_loc_nxt[0x12U] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                             & (0x12U 
                                                == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                             ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                             : vlSelfRef.__PVT__fifo_loc
                                            [0x12U]);
    vlSelfRef.__PVT__fifo_loc_nxt[0x13U] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                             & (0x13U 
                                                == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                             ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                             : vlSelfRef.__PVT__fifo_loc
                                            [0x13U]);
    vlSelfRef.__PVT__fifo_loc_nxt[0x14U] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                             & (0x14U 
                                                == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                             ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                             : vlSelfRef.__PVT__fifo_loc
                                            [0x14U]);
    vlSelfRef.__PVT__fifo_loc_nxt[0x15U] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                             & (0x15U 
                                                == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                             ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                             : vlSelfRef.__PVT__fifo_loc
                                            [0x15U]);
    vlSelfRef.__PVT__fifo_loc_nxt[0x16U] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                             & (0x16U 
                                                == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                             ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                             : vlSelfRef.__PVT__fifo_loc
                                            [0x16U]);
    vlSelfRef.__PVT__fifo_loc_nxt[0x17U] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                             & (0x17U 
                                                == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                             ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                             : vlSelfRef.__PVT__fifo_loc
                                            [0x17U]);
    vlSelfRef.__PVT__fifo_loc_nxt[0x18U] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                             & (0x18U 
                                                == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                             ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                             : vlSelfRef.__PVT__fifo_loc
                                            [0x18U]);
    vlSelfRef.__PVT__fifo_loc_nxt[0x19U] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                             & (0x19U 
                                                == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                             ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                             : vlSelfRef.__PVT__fifo_loc
                                            [0x19U]);
    vlSelfRef.__PVT__fifo_loc_nxt[0x1aU] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                             & (0x1aU 
                                                == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                             ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                             : vlSelfRef.__PVT__fifo_loc
                                            [0x1aU]);
    vlSelfRef.__PVT__fifo_loc_nxt[0x1bU] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                             & (0x1bU 
                                                == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                             ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                             : vlSelfRef.__PVT__fifo_loc
                                            [0x1bU]);
    vlSelfRef.__PVT__fifo_loc_nxt[0x1cU] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                             & (0x1cU 
                                                == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                             ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                             : vlSelfRef.__PVT__fifo_loc
                                            [0x1cU]);
    vlSelfRef.__PVT__fifo_loc_nxt[0x1dU] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                             & (0x1dU 
                                                == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                             ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                             : vlSelfRef.__PVT__fifo_loc
                                            [0x1dU]);
    vlSelfRef.__PVT__fifo_loc_nxt[0x1eU] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                             & (0x1eU 
                                                == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                             ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                             : vlSelfRef.__PVT__fifo_loc
                                            [0x1eU]);
    vlSelfRef.__PVT__fifo_loc_nxt[0x1fU] = (((IData)(vlSelfRef.__PVT__fifo_wren) 
                                             & (0x1fU 
                                                == (IData)(vlSelfRef.__PVT__wr_ptr)))
                                             ? (IData)(vlSelfRef.__PVT__fifo_wrdata)
                                             : vlSelfRef.__PVT__fifo_loc
                                            [0x1fU]);
}

VL_ATTR_COLD void Vsig_topology_top_sig_fifo_synchclk_flop__pi38___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo__0(Vsig_topology_top_sig_fifo_synchclk_flop__pi38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__pi38___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_fifo_synchclk_flop__pi38___ctor_var_reset(Vsig_topology_top_sig_fifo_synchclk_flop__pi38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__pi38___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__fifo_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14453550134765673388ull);
    vlSelf->__PVT__rstb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10656648699027260015ull);
    vlSelf->__PVT__fifo_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4740109576381753218ull);
    vlSelf->__PVT__fifo_wrdata = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 13735560909582501842ull);
    vlSelf->__PVT__fifo_rden = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13760157769081611964ull);
    vlSelf->__PVT__fifo_rddata = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 9356019634320357306ull);
    vlSelf->__PVT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4782710040797492827ull);
    vlSelf->__PVT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7130728548526110812ull);
    vlSelf->__PVT__fiforoom_atlst3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13846935472589770243ull);
    vlSelf->__PVT__wr_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12436053222651956031ull);
    vlSelf->__PVT__wr_ptr_nxt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2114357389562483315ull);
    vlSelf->__PVT__rd_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8582113012353463185ull);
    vlSelf->__PVT__rd_ptr_nxt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6890153477909643289ull);
    vlSelf->__PVT__num_entries = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2911896340747684444ull);
    vlSelf->__PVT__num_entries_nxt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12630470525648990042ull);
    vlSelf->__PVT__fifo_full_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11673352283834452618ull);
    vlSelf->__PVT__fifo_empty_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16914632481779406981ull);
    vlSelf->__PVT__fiforoom_atlst3_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12866151257643375225ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__fifo_loc_nxt[__Vi0] = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 13221930881648868120ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__fifo_loc[__Vi0] = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12988781385847939524ull);
    }
    vlSelf->__Vdly__wr_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6265375712968675170ull);
    vlSelf->__Vdly__rd_ptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1296402517236374361ull);
    vlSelf->__Vdly__num_entries = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1853319490332428688ull);
    vlSelf->__Vdly__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5442610800307487797ull);
    vlSelf->__Vdly__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9011185115827397552ull);
    vlSelf->__Vdly__fiforoom_atlst3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8650109249305084758ull);
    vlSelf->__VdlyVal__fifo_loc__v0 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 13255051178611793530ull);
    vlSelf->__VdlySet__fifo_loc__v0 = 0;
    vlSelf->__VdlyVal__fifo_loc__v1 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 11885904708264626788ull);
    vlSelf->__VdlySet__fifo_loc__v1 = 0;
    vlSelf->__VdlyVal__fifo_loc__v2 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16414715005339778905ull);
    vlSelf->__VdlySet__fifo_loc__v2 = 0;
    vlSelf->__VdlyVal__fifo_loc__v3 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 13091504067066968602ull);
    vlSelf->__VdlySet__fifo_loc__v3 = 0;
    vlSelf->__VdlyVal__fifo_loc__v4 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17888153163750944362ull);
    vlSelf->__VdlySet__fifo_loc__v4 = 0;
    vlSelf->__VdlyVal__fifo_loc__v5 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 1762205089603743507ull);
    vlSelf->__VdlySet__fifo_loc__v5 = 0;
    vlSelf->__VdlyVal__fifo_loc__v6 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7018656539517626646ull);
    vlSelf->__VdlySet__fifo_loc__v6 = 0;
    vlSelf->__VdlyVal__fifo_loc__v7 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17724606052206057034ull);
    vlSelf->__VdlySet__fifo_loc__v7 = 0;
    vlSelf->__VdlyVal__fifo_loc__v8 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15000717801455077974ull);
    vlSelf->__VdlySet__fifo_loc__v8 = 0;
    vlSelf->__VdlyVal__fifo_loc__v9 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 13631571331107881384ull);
    vlSelf->__VdlySet__fifo_loc__v9 = 0;
    vlSelf->__VdlyVal__fifo_loc__v10 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3798089390520844516ull);
    vlSelf->__VdlySet__fifo_loc__v10 = 0;
    vlSelf->__VdlyVal__fifo_loc__v11 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14826111779468860541ull);
    vlSelf->__VdlySet__fifo_loc__v11 = 0;
    vlSelf->__VdlyVal__fifo_loc__v12 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 1355725619468181139ull);
    vlSelf->__VdlySet__fifo_loc__v12 = 0;
    vlSelf->__VdlyVal__fifo_loc__v13 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2305537642393937335ull);
    vlSelf->__VdlySet__fifo_loc__v13 = 0;
    vlSelf->__VdlyVal__fifo_loc__v14 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 1847716903597710865ull);
    vlSelf->__VdlySet__fifo_loc__v14 = 0;
    vlSelf->__VdlyVal__fifo_loc__v15 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16025953050227364059ull);
    vlSelf->__VdlySet__fifo_loc__v15 = 0;
    vlSelf->__VdlyVal__fifo_loc__v16 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15180725330309287446ull);
    vlSelf->__VdlySet__fifo_loc__v16 = 0;
    vlSelf->__VdlyVal__fifo_loc__v17 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16180012390742856546ull);
    vlSelf->__VdlySet__fifo_loc__v17 = 0;
    vlSelf->__VdlyVal__fifo_loc__v18 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 510758436235179611ull);
    vlSelf->__VdlySet__fifo_loc__v18 = 0;
    vlSelf->__VdlyVal__fifo_loc__v19 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7942174071642545093ull);
    vlSelf->__VdlySet__fifo_loc__v19 = 0;
    vlSelf->__VdlyVal__fifo_loc__v20 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 3670030020961205877ull);
    vlSelf->__VdlySet__fifo_loc__v20 = 0;
    vlSelf->__VdlyVal__fifo_loc__v21 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 837003629825695438ull);
    vlSelf->__VdlySet__fifo_loc__v21 = 0;
    vlSelf->__VdlyVal__fifo_loc__v22 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2863429904228810512ull);
    vlSelf->__VdlySet__fifo_loc__v22 = 0;
    vlSelf->__VdlyVal__fifo_loc__v23 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 8694266773200347329ull);
    vlSelf->__VdlySet__fifo_loc__v23 = 0;
    vlSelf->__VdlyVal__fifo_loc__v24 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14958795536552752481ull);
    vlSelf->__VdlySet__fifo_loc__v24 = 0;
    vlSelf->__VdlyVal__fifo_loc__v25 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 1220537916727534992ull);
    vlSelf->__VdlySet__fifo_loc__v25 = 0;
    vlSelf->__VdlyVal__fifo_loc__v26 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 5643025906530954697ull);
    vlSelf->__VdlySet__fifo_loc__v26 = 0;
    vlSelf->__VdlyVal__fifo_loc__v27 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 2607713925440384994ull);
    vlSelf->__VdlySet__fifo_loc__v27 = 0;
    vlSelf->__VdlyVal__fifo_loc__v28 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 13246369552630323827ull);
    vlSelf->__VdlySet__fifo_loc__v28 = 0;
    vlSelf->__VdlyVal__fifo_loc__v29 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14316570720551352513ull);
    vlSelf->__VdlySet__fifo_loc__v29 = 0;
    vlSelf->__VdlyVal__fifo_loc__v30 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7948091400350062825ull);
    vlSelf->__VdlySet__fifo_loc__v30 = 0;
    vlSelf->__VdlyVal__fifo_loc__v31 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 5568956195380015654ull);
    vlSelf->__VdlySet__fifo_loc__v31 = 0;
}
