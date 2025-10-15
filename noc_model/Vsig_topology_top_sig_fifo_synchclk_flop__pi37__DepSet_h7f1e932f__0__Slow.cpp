// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop__pi37.h"

VL_ATTR_COLD void Vsig_topology_top_sig_fifo_synchclk_flop__pi37___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__reqflit_fifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop__pi37* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__pi37___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__reqflit_fifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(154,vlSelfRef.__PVT__fifo_rddata, vlSelfRef.__PVT__fifo_loc
                [vlSelfRef.__PVT__rd_ptr]);
}

VL_ATTR_COLD void Vsig_topology_top_sig_fifo_synchclk_flop__pi37___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__reqflit_fifo_0__0(Vsig_topology_top_sig_fifo_synchclk_flop__pi37* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__pi37___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__reqflit_fifo_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_ptr_nxt = vlSelfRef.__PVT__rd_ptr;
    if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__rd_ptr_nxt = (1U & ((~ (IData)(vlSelfRef.__PVT__rd_ptr)) 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__rd_ptr))));
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_fifo_synchclk_flop__pi37___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__reqflit_fifo_0__1(Vsig_topology_top_sig_fifo_synchclk_flop__pi37* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__pi37___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__reqflit_fifo_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_ptr_nxt = vlSelfRef.__PVT__wr_ptr;
    if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__wr_ptr_nxt = (1U & ((~ (IData)(vlSelfRef.__PVT__wr_ptr)) 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__wr_ptr))));
    }
    vlSelfRef.__PVT__num_entries_nxt = vlSelfRef.__PVT__num_entries;
    if (((IData)(vlSelfRef.__PVT__fifo_wren) & (IData)(vlSelfRef.__PVT__fifo_rden))) {
        vlSelfRef.__PVT__num_entries_nxt = vlSelfRef.__PVT__num_entries;
    } else if (vlSelfRef.__PVT__fifo_wren) {
        vlSelfRef.__PVT__num_entries_nxt = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__num_entries)));
    } else if (vlSelfRef.__PVT__fifo_rden) {
        vlSelfRef.__PVT__num_entries_nxt = (3U & ((IData)(vlSelfRef.__PVT__num_entries) 
                                                  - (IData)(1U)));
    }
    vlSelfRef.__PVT__fifo_full_nxt = (2U == (IData)(vlSelfRef.__PVT__num_entries_nxt));
    vlSelfRef.__PVT__fifo_empty_nxt = (0U == (IData)(vlSelfRef.__PVT__num_entries_nxt));
    vlSelfRef.__PVT__fiforoom_atlst3_nxt = (2ULL < 
                                            (0x3ffffffffULL 
                                             & (2ULL 
                                                - VL_EXTEND_QI(34,2, (IData)(vlSelfRef.__PVT__num_entries_nxt)))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_fifo_synchclk_flop__pi37___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__reqflit_fifo_0__2(Vsig_topology_top_sig_fifo_synchclk_flop__pi37* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__pi37___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__reqflit_fifo_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    // Body
    __Vtemp_1 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (~ (IData)(vlSelfRef.__PVT__wr_ptr)));
    VL_COND_WIWW(154, __Vtemp_2, __Vtemp_1, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[0U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__fifo_loc_nxt[0U], __Vtemp_2);
    __Vtemp_3 = ((IData)(vlSelfRef.__PVT__fifo_wren) 
                 & (IData)(vlSelfRef.__PVT__wr_ptr));
    VL_COND_WIWW(154, __Vtemp_4, __Vtemp_3, vlSelfRef.__PVT__fifo_wrdata, 
                 vlSelfRef.__PVT__fifo_loc[1U]);
    VL_ASSIGN_W(154,vlSelfRef.__PVT__fifo_loc_nxt[1U], __Vtemp_4);
}

VL_ATTR_COLD void Vsig_topology_top_sig_fifo_synchclk_flop__pi37___ctor_var_reset(Vsig_topology_top_sig_fifo_synchclk_flop__pi37* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__pi37___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__fifo_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14453550134765673388ull);
    vlSelf->__PVT__rstb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10656648699027260015ull);
    vlSelf->__PVT__fifo_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4740109576381753218ull);
    VL_SCOPED_RAND_RESET_W(154, vlSelf->__PVT__fifo_wrdata, __VscopeHash, 13735560909582501842ull);
    vlSelf->__PVT__fifo_rden = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13760157769081611964ull);
    VL_SCOPED_RAND_RESET_W(154, vlSelf->__PVT__fifo_rddata, __VscopeHash, 9356019634320357306ull);
    vlSelf->__PVT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4782710040797492827ull);
    vlSelf->__PVT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7130728548526110812ull);
    vlSelf->__PVT__fiforoom_atlst3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13846935472589770243ull);
    vlSelf->__PVT__wr_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12436053222651956031ull);
    vlSelf->__PVT__wr_ptr_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2114357389562483315ull);
    vlSelf->__PVT__rd_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8582113012353463185ull);
    vlSelf->__PVT__rd_ptr_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6890153477909643289ull);
    vlSelf->__PVT__num_entries = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2911896340747684444ull);
    vlSelf->__PVT__num_entries_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12630470525648990042ull);
    vlSelf->__PVT__fifo_full_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11673352283834452618ull);
    vlSelf->__PVT__fifo_empty_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16914632481779406981ull);
    vlSelf->__PVT__fiforoom_atlst3_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12866151257643375225ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(154, vlSelf->__PVT__fifo_loc_nxt[__Vi0], __VscopeHash, 13221930881648868120ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(154, vlSelf->__PVT__fifo_loc[__Vi0], __VscopeHash, 12988781385847939524ull);
    }
    vlSelf->__Vdly__wr_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6265375712968675170ull);
    vlSelf->__Vdly__rd_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1296402517236374361ull);
    vlSelf->__Vdly__num_entries = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1853319490332428688ull);
    vlSelf->__Vdly__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5442610800307487797ull);
    vlSelf->__Vdly__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9011185115827397552ull);
    vlSelf->__Vdly__fiforoom_atlst3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8650109249305084758ull);
    VL_SCOPED_RAND_RESET_W(154, vlSelf->__VdlyVal__fifo_loc__v0, __VscopeHash, 13255051178611793530ull);
    vlSelf->__VdlySet__fifo_loc__v0 = 0;
    VL_SCOPED_RAND_RESET_W(154, vlSelf->__VdlyVal__fifo_loc__v1, __VscopeHash, 11885904708264626788ull);
    vlSelf->__VdlySet__fifo_loc__v1 = 0;
}
