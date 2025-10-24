// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_fifo_synchclk_flop__pi37.h"

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop__pi37___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo__0(Vsig_topology_top_sig_fifo_synchclk_flop__pi37* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__pi37___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop__pi37___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo__0(Vsig_topology_top_sig_fifo_synchclk_flop__pi37* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__pi37___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo__0\n"); );
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
    vlSelfRef.__Vdly__fifo_empty = vlSelfRef.__PVT__fifo_empty;
    vlSelfRef.__Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    vlSelfRef.__VdlyVal__fifo_loc__v0 = ((IData)(vlSelfRef.__PVT__rstb)
                                          ? vlSelfRef.__PVT__fifo_loc_nxt
                                         [0U] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v0 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v1 = ((IData)(vlSelfRef.__PVT__rstb)
                                          ? vlSelfRef.__PVT__fifo_loc_nxt
                                         [1U] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v1 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v2 = ((IData)(vlSelfRef.__PVT__rstb)
                                          ? vlSelfRef.__PVT__fifo_loc_nxt
                                         [2U] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v2 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v3 = ((IData)(vlSelfRef.__PVT__rstb)
                                          ? vlSelfRef.__PVT__fifo_loc_nxt
                                         [3U] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v3 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v4 = ((IData)(vlSelfRef.__PVT__rstb)
                                          ? vlSelfRef.__PVT__fifo_loc_nxt
                                         [4U] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v4 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v5 = ((IData)(vlSelfRef.__PVT__rstb)
                                          ? vlSelfRef.__PVT__fifo_loc_nxt
                                         [5U] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v5 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v6 = ((IData)(vlSelfRef.__PVT__rstb)
                                          ? vlSelfRef.__PVT__fifo_loc_nxt
                                         [6U] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v6 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v7 = ((IData)(vlSelfRef.__PVT__rstb)
                                          ? vlSelfRef.__PVT__fifo_loc_nxt
                                         [7U] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v7 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v8 = ((IData)(vlSelfRef.__PVT__rstb)
                                          ? vlSelfRef.__PVT__fifo_loc_nxt
                                         [8U] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v8 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v9 = ((IData)(vlSelfRef.__PVT__rstb)
                                          ? vlSelfRef.__PVT__fifo_loc_nxt
                                         [9U] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v9 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v10 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0xaU] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v10 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v11 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0xbU] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v11 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v12 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0xcU] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v12 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v13 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0xdU] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v13 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v14 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0xeU] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v14 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v15 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0xfU] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v15 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v16 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0x10U] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v16 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v17 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0x11U] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v17 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v18 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0x12U] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v18 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v19 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0x13U] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v19 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v20 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0x14U] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v20 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v21 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0x15U] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v21 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v22 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0x16U] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v22 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v23 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0x17U] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v23 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v24 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0x18U] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v24 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v25 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0x19U] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v25 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v26 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0x1aU] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v26 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v27 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0x1bU] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v27 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v28 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0x1cU] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v28 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v29 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0x1dU] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v29 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v30 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0x1eU] : 0U);
    vlSelfRef.__VdlySet__fifo_loc__v30 = 1U;
    vlSelfRef.__VdlyVal__fifo_loc__v31 = ((IData)(vlSelfRef.__PVT__rstb)
                                           ? vlSelfRef.__PVT__fifo_loc_nxt
                                          [0x1fU] : 0U);
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
        vlSelfRef.__PVT__fifo_loc[0U] = vlSelfRef.__VdlyVal__fifo_loc__v0;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v1) {
        vlSelfRef.__PVT__fifo_loc[1U] = vlSelfRef.__VdlyVal__fifo_loc__v1;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v2) {
        vlSelfRef.__PVT__fifo_loc[2U] = vlSelfRef.__VdlyVal__fifo_loc__v2;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v3) {
        vlSelfRef.__PVT__fifo_loc[3U] = vlSelfRef.__VdlyVal__fifo_loc__v3;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v4) {
        vlSelfRef.__PVT__fifo_loc[4U] = vlSelfRef.__VdlyVal__fifo_loc__v4;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v5) {
        vlSelfRef.__PVT__fifo_loc[5U] = vlSelfRef.__VdlyVal__fifo_loc__v5;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v6) {
        vlSelfRef.__PVT__fifo_loc[6U] = vlSelfRef.__VdlyVal__fifo_loc__v6;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v7) {
        vlSelfRef.__PVT__fifo_loc[7U] = vlSelfRef.__VdlyVal__fifo_loc__v7;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v8) {
        vlSelfRef.__PVT__fifo_loc[8U] = vlSelfRef.__VdlyVal__fifo_loc__v8;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v9) {
        vlSelfRef.__PVT__fifo_loc[9U] = vlSelfRef.__VdlyVal__fifo_loc__v9;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v10) {
        vlSelfRef.__PVT__fifo_loc[0xaU] = vlSelfRef.__VdlyVal__fifo_loc__v10;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v11) {
        vlSelfRef.__PVT__fifo_loc[0xbU] = vlSelfRef.__VdlyVal__fifo_loc__v11;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v12) {
        vlSelfRef.__PVT__fifo_loc[0xcU] = vlSelfRef.__VdlyVal__fifo_loc__v12;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v13) {
        vlSelfRef.__PVT__fifo_loc[0xdU] = vlSelfRef.__VdlyVal__fifo_loc__v13;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v14) {
        vlSelfRef.__PVT__fifo_loc[0xeU] = vlSelfRef.__VdlyVal__fifo_loc__v14;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v15) {
        vlSelfRef.__PVT__fifo_loc[0xfU] = vlSelfRef.__VdlyVal__fifo_loc__v15;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v16) {
        vlSelfRef.__PVT__fifo_loc[0x10U] = vlSelfRef.__VdlyVal__fifo_loc__v16;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v17) {
        vlSelfRef.__PVT__fifo_loc[0x11U] = vlSelfRef.__VdlyVal__fifo_loc__v17;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v18) {
        vlSelfRef.__PVT__fifo_loc[0x12U] = vlSelfRef.__VdlyVal__fifo_loc__v18;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v19) {
        vlSelfRef.__PVT__fifo_loc[0x13U] = vlSelfRef.__VdlyVal__fifo_loc__v19;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v20) {
        vlSelfRef.__PVT__fifo_loc[0x14U] = vlSelfRef.__VdlyVal__fifo_loc__v20;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v21) {
        vlSelfRef.__PVT__fifo_loc[0x15U] = vlSelfRef.__VdlyVal__fifo_loc__v21;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v22) {
        vlSelfRef.__PVT__fifo_loc[0x16U] = vlSelfRef.__VdlyVal__fifo_loc__v22;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v23) {
        vlSelfRef.__PVT__fifo_loc[0x17U] = vlSelfRef.__VdlyVal__fifo_loc__v23;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v24) {
        vlSelfRef.__PVT__fifo_loc[0x18U] = vlSelfRef.__VdlyVal__fifo_loc__v24;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v25) {
        vlSelfRef.__PVT__fifo_loc[0x19U] = vlSelfRef.__VdlyVal__fifo_loc__v25;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v26) {
        vlSelfRef.__PVT__fifo_loc[0x1aU] = vlSelfRef.__VdlyVal__fifo_loc__v26;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v27) {
        vlSelfRef.__PVT__fifo_loc[0x1bU] = vlSelfRef.__VdlyVal__fifo_loc__v27;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v28) {
        vlSelfRef.__PVT__fifo_loc[0x1cU] = vlSelfRef.__VdlyVal__fifo_loc__v28;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v29) {
        vlSelfRef.__PVT__fifo_loc[0x1dU] = vlSelfRef.__VdlyVal__fifo_loc__v29;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v30) {
        vlSelfRef.__PVT__fifo_loc[0x1eU] = vlSelfRef.__VdlyVal__fifo_loc__v30;
    }
    if (vlSelfRef.__VdlySet__fifo_loc__v31) {
        vlSelfRef.__PVT__fifo_loc[0x1fU] = vlSelfRef.__VdlyVal__fifo_loc__v31;
    }
    vlSelfRef.__PVT__fiforoom_atlst3 = vlSelfRef.__Vdly__fiforoom_atlst3;
    vlSelfRef.__PVT__fifo_full = vlSelfRef.__Vdly__fifo_full;
    vlSelfRef.__PVT__num_entries = vlSelfRef.__Vdly__num_entries;
    vlSelfRef.__PVT__wr_ptr = vlSelfRef.__Vdly__wr_ptr;
    vlSelfRef.__PVT__fifo_empty = vlSelfRef.__Vdly__fifo_empty;
    vlSelfRef.__PVT__rd_ptr = vlSelfRef.__Vdly__rd_ptr;
    vlSelfRef.__PVT__fifo_rddata = vlSelfRef.__PVT__fifo_loc
        [vlSelfRef.__PVT__rd_ptr];
}

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop__pi37___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo__0(Vsig_topology_top_sig_fifo_synchclk_flop__pi37* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__pi37___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_fifo_synchclk_flop__pi37___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo__1(Vsig_topology_top_sig_fifo_synchclk_flop__pi37* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_fifo_synchclk_flop__pi37___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__pcredit_fifo__1\n"); );
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
