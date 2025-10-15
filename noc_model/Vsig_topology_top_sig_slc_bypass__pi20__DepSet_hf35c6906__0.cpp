// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_slc_bypass__pi20.h"

extern const VlWide<16>/*511:0*/ Vsig_topology_top__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi20___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__0(Vsig_topology_top_sig_slc_bypass__pi20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi20___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__0\n"); );
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
    VlWide<5>/*159:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_12;
    VlWide<5>/*159:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_14;
    VlWide<5>/*159:0*/ __Vtemp_15;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_17;
    VlWide<5>/*159:0*/ __Vtemp_18;
    VlWide<5>/*159:0*/ __Vtemp_19;
    VlWide<5>/*159:0*/ __Vtemp_20;
    VlWide<5>/*159:0*/ __Vtemp_21;
    VlWide<5>/*159:0*/ __Vtemp_22;
    VlWide<5>/*159:0*/ __Vtemp_23;
    VlWide<5>/*159:0*/ __Vtemp_24;
    VlWide<5>/*159:0*/ __Vtemp_25;
    VlWide<5>/*159:0*/ __Vtemp_26;
    VlWide<5>/*159:0*/ __Vtemp_27;
    VlWide<5>/*159:0*/ __Vtemp_28;
    VlWide<5>/*159:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_30;
    VlWide<5>/*159:0*/ __Vtemp_31;
    VlWide<5>/*159:0*/ __Vtemp_32;
    VlWide<5>/*159:0*/ __Vtemp_33;
    VlWide<5>/*159:0*/ __Vtemp_34;
    // Body
    vlSelfRef.__VdlySet__wr_dbid_index_buffer__v0 = 0U;
    vlSelfRef.__VdlySet__wr_dbid_index_buffer__v16 = 0U;
    vlSelfRef.__VdlySet__wr_dbid_index_buffer__v17 = 0U;
    vlSelfRef.__VdlySet__wr_dbid_index_buffer__v18 = 0U;
    vlSelfRef.__VdlySet__wr_dbid_index_buffer__v19 = 0U;
    vlSelfRef.__VdlySet__wr_dbid_index_buffer__v20 = 0U;
    vlSelfRef.__VdlySet__wr_dbid_index_buffer__v21 = 0U;
    vlSelfRef.__VdlySet__wr_dbid_index_buffer__v22 = 0U;
    vlSelfRef.__VdlySet__wr_dbid_index_buffer__v23 = 0U;
    vlSelfRef.__VdlySet__wr_dbid_index_buffer__v24 = 0U;
    vlSelfRef.__VdlySet__wr_dbid_index_buffer__v25 = 0U;
    vlSelfRef.__VdlySet__wr_dbid_index_buffer__v26 = 0U;
    vlSelfRef.__VdlySet__wr_dbid_index_buffer__v27 = 0U;
    vlSelfRef.__VdlySet__wr_dbid_index_buffer__v28 = 0U;
    vlSelfRef.__VdlySet__wr_dbid_index_buffer__v29 = 0U;
    vlSelfRef.__VdlySet__wr_dbid_index_buffer__v30 = 0U;
    vlSelfRef.__VdlySet__wr_dbid_index_buffer__v31 = 0U;
    vlSelfRef.__VdlySet__rd_txnid_buffer__v0 = 0U;
    vlSelfRef.__VdlySet__rd_txnid_buffer__v16 = 0U;
    vlSelfRef.__VdlySet__rd_txnid_buffer__v17 = 0U;
    vlSelfRef.__VdlySet__rd_txnid_buffer__v18 = 0U;
    vlSelfRef.__VdlySet__rd_txnid_buffer__v19 = 0U;
    vlSelfRef.__VdlySet__rd_txnid_buffer__v20 = 0U;
    vlSelfRef.__VdlySet__rd_txnid_buffer__v21 = 0U;
    vlSelfRef.__VdlySet__rd_txnid_buffer__v22 = 0U;
    vlSelfRef.__VdlySet__rd_txnid_buffer__v23 = 0U;
    vlSelfRef.__VdlySet__rd_txnid_buffer__v24 = 0U;
    vlSelfRef.__VdlySet__rd_txnid_buffer__v25 = 0U;
    vlSelfRef.__VdlySet__rd_txnid_buffer__v26 = 0U;
    vlSelfRef.__VdlySet__rd_txnid_buffer__v27 = 0U;
    vlSelfRef.__VdlySet__rd_txnid_buffer__v28 = 0U;
    vlSelfRef.__VdlySet__rd_txnid_buffer__v29 = 0U;
    vlSelfRef.__VdlySet__rd_txnid_buffer__v30 = 0U;
    vlSelfRef.__VdlySet__rd_txnid_buffer__v31 = 0U;
    vlSelfRef.__VdlySet__rd_reqf_buffer__v0 = 0U;
    vlSelfRef.__VdlySet__rd_reqf_buffer__v16 = 0U;
    vlSelfRef.__VdlySet__rd_reqf_buffer__v17 = 0U;
    vlSelfRef.__VdlySet__rd_reqf_buffer__v18 = 0U;
    vlSelfRef.__VdlySet__rd_reqf_buffer__v19 = 0U;
    vlSelfRef.__VdlySet__rd_reqf_buffer__v20 = 0U;
    vlSelfRef.__VdlySet__rd_reqf_buffer__v21 = 0U;
    vlSelfRef.__VdlySet__rd_reqf_buffer__v22 = 0U;
    vlSelfRef.__VdlySet__rd_reqf_buffer__v23 = 0U;
    vlSelfRef.__VdlySet__rd_reqf_buffer__v24 = 0U;
    vlSelfRef.__VdlySet__rd_reqf_buffer__v25 = 0U;
    vlSelfRef.__VdlySet__rd_reqf_buffer__v26 = 0U;
    vlSelfRef.__VdlySet__rd_reqf_buffer__v27 = 0U;
    vlSelfRef.__VdlySet__rd_reqf_buffer__v28 = 0U;
    vlSelfRef.__VdlySet__rd_reqf_buffer__v29 = 0U;
    vlSelfRef.__VdlySet__rd_reqf_buffer__v30 = 0U;
    vlSelfRef.__VdlySet__rd_reqf_buffer__v31 = 0U;
    vlSelfRef.__VdlySet__wr_data_index_buffer__v0 = 0U;
    vlSelfRef.__VdlySet__wr_data_index_buffer__v16 = 0U;
    vlSelfRef.__VdlySet__wr_data_index_buffer__v17 = 0U;
    vlSelfRef.__VdlySet__wr_data_index_buffer__v18 = 0U;
    vlSelfRef.__VdlySet__wr_data_index_buffer__v19 = 0U;
    vlSelfRef.__VdlySet__wr_data_index_buffer__v20 = 0U;
    vlSelfRef.__VdlySet__wr_data_index_buffer__v21 = 0U;
    vlSelfRef.__VdlySet__wr_data_index_buffer__v22 = 0U;
    vlSelfRef.__VdlySet__wr_data_index_buffer__v23 = 0U;
    vlSelfRef.__VdlySet__wr_data_index_buffer__v24 = 0U;
    vlSelfRef.__VdlySet__wr_data_index_buffer__v25 = 0U;
    vlSelfRef.__VdlySet__wr_data_index_buffer__v26 = 0U;
    vlSelfRef.__VdlySet__wr_data_index_buffer__v27 = 0U;
    vlSelfRef.__VdlySet__wr_data_index_buffer__v28 = 0U;
    vlSelfRef.__VdlySet__wr_data_index_buffer__v29 = 0U;
    vlSelfRef.__VdlySet__wr_data_index_buffer__v30 = 0U;
    vlSelfRef.__VdlySet__wr_data_index_buffer__v31 = 0U;
    vlSelfRef.__VdlySet__wr_addr_buffer__v0 = 0U;
    vlSelfRef.__VdlySet__wr_addr_buffer__v16 = 0U;
    vlSelfRef.__VdlySet__wr_addr_buffer__v17 = 0U;
    vlSelfRef.__VdlySet__wr_addr_buffer__v18 = 0U;
    vlSelfRef.__VdlySet__wr_addr_buffer__v19 = 0U;
    vlSelfRef.__VdlySet__wr_addr_buffer__v20 = 0U;
    vlSelfRef.__VdlySet__wr_addr_buffer__v21 = 0U;
    vlSelfRef.__VdlySet__wr_addr_buffer__v22 = 0U;
    vlSelfRef.__VdlySet__wr_addr_buffer__v23 = 0U;
    vlSelfRef.__VdlySet__wr_addr_buffer__v24 = 0U;
    vlSelfRef.__VdlySet__wr_addr_buffer__v25 = 0U;
    vlSelfRef.__VdlySet__wr_addr_buffer__v26 = 0U;
    vlSelfRef.__VdlySet__wr_addr_buffer__v27 = 0U;
    vlSelfRef.__VdlySet__wr_addr_buffer__v28 = 0U;
    vlSelfRef.__VdlySet__wr_addr_buffer__v29 = 0U;
    vlSelfRef.__VdlySet__wr_addr_buffer__v30 = 0U;
    vlSelfRef.__VdlySet__wr_addr_buffer__v31 = 0U;
    vlSelfRef.__VdlySet__memrdretry_buf__v0 = 0U;
    vlSelfRef.__VdlySet__rdretryack_buf__v0 = 0U;
    vlSelfRef.__VdlySet__wrretryack_buf__v0 = 0U;
    vlSelfRef.__VdlySet__wrretryack_buf__v16 = 0U;
    vlSelfRef.__VdlySet__wrretryack_buf__v17 = 0U;
    vlSelfRef.__VdlySet__wrretryack_buf__v18 = 0U;
    vlSelfRef.__VdlySet__wrretryack_buf__v19 = 0U;
    vlSelfRef.__VdlySet__wrretryack_buf__v20 = 0U;
    vlSelfRef.__VdlySet__wrretryack_buf__v21 = 0U;
    vlSelfRef.__VdlySet__wrretryack_buf__v22 = 0U;
    vlSelfRef.__VdlySet__wrretryack_buf__v23 = 0U;
    vlSelfRef.__VdlySet__wrretryack_buf__v24 = 0U;
    vlSelfRef.__VdlySet__wrretryack_buf__v25 = 0U;
    vlSelfRef.__VdlySet__wrretryack_buf__v26 = 0U;
    vlSelfRef.__VdlySet__wrretryack_buf__v27 = 0U;
    vlSelfRef.__VdlySet__wrretryack_buf__v28 = 0U;
    vlSelfRef.__VdlySet__wrretryack_buf__v29 = 0U;
    vlSelfRef.__VdlySet__wrretryack_buf__v30 = 0U;
    vlSelfRef.__VdlySet__wrretryack_buf__v31 = 0U;
    vlSelfRef.__VdlySet__rdretryack_buf__v16 = 0U;
    vlSelfRef.__VdlySet__rdretryack_buf__v17 = 0U;
    vlSelfRef.__VdlySet__rdretryack_buf__v18 = 0U;
    vlSelfRef.__VdlySet__rdretryack_buf__v19 = 0U;
    vlSelfRef.__VdlySet__rdretryack_buf__v20 = 0U;
    vlSelfRef.__VdlySet__rdretryack_buf__v21 = 0U;
    vlSelfRef.__VdlySet__rdretryack_buf__v22 = 0U;
    vlSelfRef.__VdlySet__rdretryack_buf__v23 = 0U;
    vlSelfRef.__VdlySet__rdretryack_buf__v24 = 0U;
    vlSelfRef.__VdlySet__rdretryack_buf__v25 = 0U;
    vlSelfRef.__VdlySet__rdretryack_buf__v26 = 0U;
    vlSelfRef.__VdlySet__rdretryack_buf__v27 = 0U;
    vlSelfRef.__VdlySet__rdretryack_buf__v28 = 0U;
    vlSelfRef.__VdlySet__rdretryack_buf__v29 = 0U;
    vlSelfRef.__VdlySet__rdretryack_buf__v30 = 0U;
    vlSelfRef.__VdlySet__rdretryack_buf__v31 = 0U;
    vlSelfRef.__Vdly__cmdproc_st = vlSelfRef.__PVT__cmdproc_st;
    vlSelfRef.__Vdly__rd_txnid_buffer_selected = vlSelfRef.__PVT__rd_txnid_buffer_selected;
    vlSelfRef.__Vdly__rd_txnid_buffer_bit_available 
        = vlSelfRef.__PVT__rd_txnid_buffer_bit_available;
    vlSelfRef.__Vdly__wr_dbid_index_buffer_bit = vlSelfRef.__PVT__wr_dbid_index_buffer_bit;
    vlSelfRef.__Vdly__wr_req_sent = vlSelfRef.__PVT__wr_req_sent;
    vlSelfRef.__Vdly__store_outstanding_rd_reqf_buffer_pointer 
        = vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer;
    vlSelfRef.__Vdly__rd_reqf_buffer_bit_available 
        = vlSelfRef.__PVT__rd_reqf_buffer_bit_available;
    vlSelfRef.__Vdly__select_outstanding_rd_reqf_buffer_pointer 
        = vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer;
    vlSelfRef.__Vdly__store_wr_data_index_buffer_pointer 
        = vlSelfRef.__PVT__store_wr_data_index_buffer_pointer;
    vlSelfRef.__Vdly__wr_data_index_buffer_bit = vlSelfRef.__PVT__wr_data_index_buffer_bit;
    vlSelfRef.__Vdly__select_wr_data_index_buffer_pointer 
        = vlSelfRef.__PVT__select_wr_data_index_buffer_pointer;
    vlSelfRef.__Vdly__wr_sent_data_bit = vlSelfRef.__PVT__wr_sent_data_bit;
    vlSelfRef.__Vdly__wr_received_sn_comp_bit = vlSelfRef.__PVT__wr_received_sn_comp_bit;
    vlSelfRef.__Vdly__wr_addr_buffer_selected = vlSelfRef.__PVT__wr_addr_buffer_selected;
    vlSelfRef.__Vdly__wr_received_dbid_bit = vlSelfRef.__PVT__wr_received_dbid_bit;
    vlSelfRef.__Vdly__wr_addr_buffer_bit_available 
        = vlSelfRef.__PVT__wr_addr_buffer_bit_available;
    vlSelfRef.__Vdly__wr_zero_buffer = vlSelfRef.__PVT__wr_zero_buffer;
    vlSelfRef.__Vdly__wrretryack_bufv = vlSelfRef.__PVT__wrretryack_bufv;
    vlSelfRef.__Vdly__rdretryack_bufv = vlSelfRef.__PVT__rdretryack_bufv;
    vlSelfRef.__Vdly__cmdproc_st = ((IData)(vlSelfRef.__PVT__rstb_slc_bypass_clk)
                                     ? (IData)(vlSelfRef.__PVT__cmdproc_st_nxt)
                                     : 0U);
    if (vlSelfRef.__PVT__rstb_slc_bypass_clk) {
        vlSelfRef.__Vdly__rd_txnid_buffer_selected 
            = vlSelfRef.__PVT__rd_txnid_buffer_selected_nxt;
        vlSelfRef.__VdlyVal__rd_txnid_buffer__v0 = 
            vlSelfRef.__PVT__rd_txnid_buffer_nxt[0U];
        vlSelfRef.__VdlySet__rd_txnid_buffer__v0 = 1U;
        vlSelfRef.__VdlyVal__rd_txnid_buffer__v1 = 
            vlSelfRef.__PVT__rd_txnid_buffer_nxt[1U];
        vlSelfRef.__VdlyVal__rd_txnid_buffer__v2 = 
            vlSelfRef.__PVT__rd_txnid_buffer_nxt[2U];
        vlSelfRef.__VdlyVal__rd_txnid_buffer__v3 = 
            vlSelfRef.__PVT__rd_txnid_buffer_nxt[3U];
        vlSelfRef.__VdlyVal__rd_txnid_buffer__v4 = 
            vlSelfRef.__PVT__rd_txnid_buffer_nxt[4U];
        vlSelfRef.__VdlyVal__rd_txnid_buffer__v5 = 
            vlSelfRef.__PVT__rd_txnid_buffer_nxt[5U];
        vlSelfRef.__VdlyVal__rd_txnid_buffer__v6 = 
            vlSelfRef.__PVT__rd_txnid_buffer_nxt[6U];
        vlSelfRef.__VdlyVal__rd_txnid_buffer__v7 = 
            vlSelfRef.__PVT__rd_txnid_buffer_nxt[7U];
        vlSelfRef.__VdlyVal__rd_txnid_buffer__v8 = 
            vlSelfRef.__PVT__rd_txnid_buffer_nxt[8U];
        vlSelfRef.__VdlyVal__rd_txnid_buffer__v9 = 
            vlSelfRef.__PVT__rd_txnid_buffer_nxt[9U];
        vlSelfRef.__VdlyVal__rd_txnid_buffer__v10 = 
            vlSelfRef.__PVT__rd_txnid_buffer_nxt[0xaU];
        vlSelfRef.__VdlyVal__rd_txnid_buffer__v11 = 
            vlSelfRef.__PVT__rd_txnid_buffer_nxt[0xbU];
        vlSelfRef.__VdlyVal__rd_txnid_buffer__v12 = 
            vlSelfRef.__PVT__rd_txnid_buffer_nxt[0xcU];
        vlSelfRef.__VdlyVal__rd_txnid_buffer__v13 = 
            vlSelfRef.__PVT__rd_txnid_buffer_nxt[0xdU];
        vlSelfRef.__VdlyVal__rd_txnid_buffer__v14 = 
            vlSelfRef.__PVT__rd_txnid_buffer_nxt[0xeU];
        vlSelfRef.__VdlyVal__rd_txnid_buffer__v15 = 
            vlSelfRef.__PVT__rd_txnid_buffer_nxt[0xfU];
        vlSelfRef.__Vdly__rd_txnid_buffer_bit_available 
            = vlSelfRef.__PVT__rd_txnid_buffer_bit_available_nxt;
    } else {
        vlSelfRef.__Vdly__rd_txnid_buffer_selected = 0U;
        vlSelfRef.__Vdly__rd_txnid_buffer_bit_available = 0xffffU;
        vlSelfRef.__VdlySet__rd_txnid_buffer__v16 = 1U;
        vlSelfRef.__PVT__rd_txnid_buffer_seq__DOT__unnamedblk2__DOT__i = 1U;
        vlSelfRef.__VdlySet__rd_txnid_buffer__v17 = 1U;
        vlSelfRef.__PVT__rd_txnid_buffer_seq__DOT__unnamedblk2__DOT__i = 2U;
        vlSelfRef.__VdlySet__rd_txnid_buffer__v18 = 1U;
        vlSelfRef.__PVT__rd_txnid_buffer_seq__DOT__unnamedblk2__DOT__i = 3U;
        vlSelfRef.__VdlySet__rd_txnid_buffer__v19 = 1U;
        vlSelfRef.__PVT__rd_txnid_buffer_seq__DOT__unnamedblk2__DOT__i = 4U;
        vlSelfRef.__VdlySet__rd_txnid_buffer__v20 = 1U;
        vlSelfRef.__PVT__rd_txnid_buffer_seq__DOT__unnamedblk2__DOT__i = 5U;
        vlSelfRef.__VdlySet__rd_txnid_buffer__v21 = 1U;
        vlSelfRef.__PVT__rd_txnid_buffer_seq__DOT__unnamedblk2__DOT__i = 6U;
        vlSelfRef.__VdlySet__rd_txnid_buffer__v22 = 1U;
        vlSelfRef.__PVT__rd_txnid_buffer_seq__DOT__unnamedblk2__DOT__i = 7U;
        vlSelfRef.__VdlySet__rd_txnid_buffer__v23 = 1U;
        vlSelfRef.__PVT__rd_txnid_buffer_seq__DOT__unnamedblk2__DOT__i = 8U;
        vlSelfRef.__VdlySet__rd_txnid_buffer__v24 = 1U;
        vlSelfRef.__PVT__rd_txnid_buffer_seq__DOT__unnamedblk2__DOT__i = 9U;
        vlSelfRef.__VdlySet__rd_txnid_buffer__v25 = 1U;
        vlSelfRef.__PVT__rd_txnid_buffer_seq__DOT__unnamedblk2__DOT__i = 0xaU;
        vlSelfRef.__VdlySet__rd_txnid_buffer__v26 = 1U;
        vlSelfRef.__PVT__rd_txnid_buffer_seq__DOT__unnamedblk2__DOT__i = 0xbU;
        vlSelfRef.__VdlySet__rd_txnid_buffer__v27 = 1U;
        vlSelfRef.__PVT__rd_txnid_buffer_seq__DOT__unnamedblk2__DOT__i = 0xcU;
        vlSelfRef.__VdlySet__rd_txnid_buffer__v28 = 1U;
        vlSelfRef.__PVT__rd_txnid_buffer_seq__DOT__unnamedblk2__DOT__i = 0xdU;
        vlSelfRef.__VdlySet__rd_txnid_buffer__v29 = 1U;
        vlSelfRef.__PVT__rd_txnid_buffer_seq__DOT__unnamedblk2__DOT__i = 0xeU;
        vlSelfRef.__VdlySet__rd_txnid_buffer__v30 = 1U;
        vlSelfRef.__PVT__rd_txnid_buffer_seq__DOT__unnamedblk2__DOT__i = 0xfU;
        vlSelfRef.__VdlySet__rd_txnid_buffer__v31 = 1U;
        vlSelfRef.__PVT__rd_txnid_buffer_seq__DOT__unnamedblk2__DOT__i = 0x10U;
    }
    if (vlSelfRef.__PVT__rstb_slc_bypass_clk) {
        vlSelfRef.__Vdly__wr_dbid_index_buffer_bit 
            = vlSelfRef.__PVT__wr_dbid_index_buffer_bit_nxt;
        vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v0 
            = vlSelfRef.__PVT__wr_dbid_index_buffer_nxt
            [0U];
        vlSelfRef.__VdlySet__wr_dbid_index_buffer__v0 = 1U;
        vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v1 
            = vlSelfRef.__PVT__wr_dbid_index_buffer_nxt
            [1U];
        vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v2 
            = vlSelfRef.__PVT__wr_dbid_index_buffer_nxt
            [2U];
        vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v3 
            = vlSelfRef.__PVT__wr_dbid_index_buffer_nxt
            [3U];
        vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v4 
            = vlSelfRef.__PVT__wr_dbid_index_buffer_nxt
            [4U];
        vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v5 
            = vlSelfRef.__PVT__wr_dbid_index_buffer_nxt
            [5U];
        vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v6 
            = vlSelfRef.__PVT__wr_dbid_index_buffer_nxt
            [6U];
        vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v7 
            = vlSelfRef.__PVT__wr_dbid_index_buffer_nxt
            [7U];
        vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v8 
            = vlSelfRef.__PVT__wr_dbid_index_buffer_nxt
            [8U];
        vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v9 
            = vlSelfRef.__PVT__wr_dbid_index_buffer_nxt
            [9U];
        vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v10 
            = vlSelfRef.__PVT__wr_dbid_index_buffer_nxt
            [0xaU];
        vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v11 
            = vlSelfRef.__PVT__wr_dbid_index_buffer_nxt
            [0xbU];
        vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v12 
            = vlSelfRef.__PVT__wr_dbid_index_buffer_nxt
            [0xcU];
        vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v13 
            = vlSelfRef.__PVT__wr_dbid_index_buffer_nxt
            [0xdU];
        vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v14 
            = vlSelfRef.__PVT__wr_dbid_index_buffer_nxt
            [0xeU];
        vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v15 
            = vlSelfRef.__PVT__wr_dbid_index_buffer_nxt
            [0xfU];
        vlSelfRef.__VdlyVal__wr_dbid_buffer__v0 = vlSelfRef.__PVT__wr_dbid_buffer_nxt
            [0U];
        vlSelfRef.__VdlyVal__wr_dbid_buffer__v1 = vlSelfRef.__PVT__wr_dbid_buffer_nxt
            [1U];
        vlSelfRef.__VdlyVal__wr_dbid_buffer__v2 = vlSelfRef.__PVT__wr_dbid_buffer_nxt
            [2U];
        vlSelfRef.__VdlyVal__wr_dbid_buffer__v3 = vlSelfRef.__PVT__wr_dbid_buffer_nxt
            [3U];
        vlSelfRef.__VdlyVal__wr_dbid_buffer__v4 = vlSelfRef.__PVT__wr_dbid_buffer_nxt
            [4U];
        vlSelfRef.__VdlyVal__wr_dbid_buffer__v5 = vlSelfRef.__PVT__wr_dbid_buffer_nxt
            [5U];
        vlSelfRef.__VdlyVal__wr_dbid_buffer__v6 = vlSelfRef.__PVT__wr_dbid_buffer_nxt
            [6U];
        vlSelfRef.__VdlyVal__wr_dbid_buffer__v7 = vlSelfRef.__PVT__wr_dbid_buffer_nxt
            [7U];
        vlSelfRef.__VdlyVal__wr_dbid_buffer__v8 = vlSelfRef.__PVT__wr_dbid_buffer_nxt
            [8U];
        vlSelfRef.__VdlyVal__wr_dbid_buffer__v9 = vlSelfRef.__PVT__wr_dbid_buffer_nxt
            [9U];
        vlSelfRef.__VdlyVal__wr_dbid_buffer__v10 = 
            vlSelfRef.__PVT__wr_dbid_buffer_nxt[0xaU];
        vlSelfRef.__VdlyVal__wr_dbid_buffer__v11 = 
            vlSelfRef.__PVT__wr_dbid_buffer_nxt[0xbU];
        vlSelfRef.__VdlyVal__wr_dbid_buffer__v12 = 
            vlSelfRef.__PVT__wr_dbid_buffer_nxt[0xcU];
        vlSelfRef.__VdlyVal__wr_dbid_buffer__v13 = 
            vlSelfRef.__PVT__wr_dbid_buffer_nxt[0xdU];
        vlSelfRef.__VdlyVal__wr_dbid_buffer__v14 = 
            vlSelfRef.__PVT__wr_dbid_buffer_nxt[0xeU];
        vlSelfRef.__VdlyVal__wr_dbid_buffer__v15 = 
            vlSelfRef.__PVT__wr_dbid_buffer_nxt[0xfU];
    } else {
        vlSelfRef.__Vdly__wr_dbid_index_buffer_bit = 0U;
        vlSelfRef.__VdlySet__wr_dbid_index_buffer__v16 = 1U;
        vlSelfRef.__PVT__wr_dbid_buffer_seq__DOT__unnamedblk7__DOT__i = 1U;
        vlSelfRef.__VdlySet__wr_dbid_index_buffer__v17 = 1U;
        vlSelfRef.__PVT__wr_dbid_buffer_seq__DOT__unnamedblk7__DOT__i = 2U;
        vlSelfRef.__VdlySet__wr_dbid_index_buffer__v18 = 1U;
        vlSelfRef.__PVT__wr_dbid_buffer_seq__DOT__unnamedblk7__DOT__i = 3U;
        vlSelfRef.__VdlySet__wr_dbid_index_buffer__v19 = 1U;
        vlSelfRef.__PVT__wr_dbid_buffer_seq__DOT__unnamedblk7__DOT__i = 4U;
        vlSelfRef.__VdlySet__wr_dbid_index_buffer__v20 = 1U;
        vlSelfRef.__PVT__wr_dbid_buffer_seq__DOT__unnamedblk7__DOT__i = 5U;
        vlSelfRef.__VdlySet__wr_dbid_index_buffer__v21 = 1U;
        vlSelfRef.__PVT__wr_dbid_buffer_seq__DOT__unnamedblk7__DOT__i = 6U;
        vlSelfRef.__VdlySet__wr_dbid_index_buffer__v22 = 1U;
        vlSelfRef.__PVT__wr_dbid_buffer_seq__DOT__unnamedblk7__DOT__i = 7U;
        vlSelfRef.__VdlySet__wr_dbid_index_buffer__v23 = 1U;
        vlSelfRef.__PVT__wr_dbid_buffer_seq__DOT__unnamedblk7__DOT__i = 8U;
        vlSelfRef.__VdlySet__wr_dbid_index_buffer__v24 = 1U;
        vlSelfRef.__PVT__wr_dbid_buffer_seq__DOT__unnamedblk7__DOT__i = 9U;
        vlSelfRef.__VdlySet__wr_dbid_index_buffer__v25 = 1U;
        vlSelfRef.__PVT__wr_dbid_buffer_seq__DOT__unnamedblk7__DOT__i = 0xaU;
        vlSelfRef.__VdlySet__wr_dbid_index_buffer__v26 = 1U;
        vlSelfRef.__PVT__wr_dbid_buffer_seq__DOT__unnamedblk7__DOT__i = 0xbU;
        vlSelfRef.__VdlySet__wr_dbid_index_buffer__v27 = 1U;
        vlSelfRef.__PVT__wr_dbid_buffer_seq__DOT__unnamedblk7__DOT__i = 0xcU;
        vlSelfRef.__VdlySet__wr_dbid_index_buffer__v28 = 1U;
        vlSelfRef.__PVT__wr_dbid_buffer_seq__DOT__unnamedblk7__DOT__i = 0xdU;
        vlSelfRef.__VdlySet__wr_dbid_index_buffer__v29 = 1U;
        vlSelfRef.__PVT__wr_dbid_buffer_seq__DOT__unnamedblk7__DOT__i = 0xeU;
        vlSelfRef.__VdlySet__wr_dbid_index_buffer__v30 = 1U;
        vlSelfRef.__PVT__wr_dbid_buffer_seq__DOT__unnamedblk7__DOT__i = 0xfU;
        vlSelfRef.__VdlySet__wr_dbid_index_buffer__v31 = 1U;
        vlSelfRef.__PVT__wr_dbid_buffer_seq__DOT__unnamedblk7__DOT__i = 0x10U;
    }
    vlSelfRef.__Vdly__wr_req_sent = ((IData)(vlSelfRef.__PVT__rstb_slc_bypass_clk)
                                      ? (IData)(vlSelfRef.__PVT__wr_req_sent_nxt)
                                      : 0U);
    if (vlSelfRef.__PVT__rstb_slc_bypass_clk) {
        vlSelfRef.__Vdly__store_outstanding_rd_reqf_buffer_pointer 
            = vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer_nxt;
        vlSelfRef.__Vdly__select_outstanding_rd_reqf_buffer_pointer 
            = vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer_nxt;
        vlSelfRef.__Vdly__rd_reqf_buffer_bit_available 
            = vlSelfRef.__PVT__rd_reqf_buffer_bit_available_nxt;
        VL_ASSIGN_W(154,vlSelfRef.__VdlyVal__rd_reqf_buffer__v0, 
                    vlSelfRef.__PVT__rd_reqf_buffer_nxt
                    [0U]);
        vlSelfRef.__VdlySet__rd_reqf_buffer__v0 = 1U;
        VL_ASSIGN_W(154,vlSelfRef.__VdlyVal__rd_reqf_buffer__v1, 
                    vlSelfRef.__PVT__rd_reqf_buffer_nxt
                    [1U]);
        VL_ASSIGN_W(154,vlSelfRef.__VdlyVal__rd_reqf_buffer__v2, 
                    vlSelfRef.__PVT__rd_reqf_buffer_nxt
                    [2U]);
        VL_ASSIGN_W(154,vlSelfRef.__VdlyVal__rd_reqf_buffer__v3, 
                    vlSelfRef.__PVT__rd_reqf_buffer_nxt
                    [3U]);
        VL_ASSIGN_W(154,vlSelfRef.__VdlyVal__rd_reqf_buffer__v4, 
                    vlSelfRef.__PVT__rd_reqf_buffer_nxt
                    [4U]);
        VL_ASSIGN_W(154,vlSelfRef.__VdlyVal__rd_reqf_buffer__v5, 
                    vlSelfRef.__PVT__rd_reqf_buffer_nxt
                    [5U]);
        VL_ASSIGN_W(154,vlSelfRef.__VdlyVal__rd_reqf_buffer__v6, 
                    vlSelfRef.__PVT__rd_reqf_buffer_nxt
                    [6U]);
        VL_ASSIGN_W(154,vlSelfRef.__VdlyVal__rd_reqf_buffer__v7, 
                    vlSelfRef.__PVT__rd_reqf_buffer_nxt
                    [7U]);
        VL_ASSIGN_W(154,vlSelfRef.__VdlyVal__rd_reqf_buffer__v8, 
                    vlSelfRef.__PVT__rd_reqf_buffer_nxt
                    [8U]);
        VL_ASSIGN_W(154,vlSelfRef.__VdlyVal__rd_reqf_buffer__v9, 
                    vlSelfRef.__PVT__rd_reqf_buffer_nxt
                    [9U]);
        VL_ASSIGN_W(154,vlSelfRef.__VdlyVal__rd_reqf_buffer__v10, 
                    vlSelfRef.__PVT__rd_reqf_buffer_nxt
                    [0xaU]);
        VL_ASSIGN_W(154,vlSelfRef.__VdlyVal__rd_reqf_buffer__v11, 
                    vlSelfRef.__PVT__rd_reqf_buffer_nxt
                    [0xbU]);
        VL_ASSIGN_W(154,vlSelfRef.__VdlyVal__rd_reqf_buffer__v12, 
                    vlSelfRef.__PVT__rd_reqf_buffer_nxt
                    [0xcU]);
        VL_ASSIGN_W(154,vlSelfRef.__VdlyVal__rd_reqf_buffer__v13, 
                    vlSelfRef.__PVT__rd_reqf_buffer_nxt
                    [0xdU]);
        VL_ASSIGN_W(154,vlSelfRef.__VdlyVal__rd_reqf_buffer__v14, 
                    vlSelfRef.__PVT__rd_reqf_buffer_nxt
                    [0xeU]);
        VL_ASSIGN_W(154,vlSelfRef.__VdlyVal__rd_reqf_buffer__v15, 
                    vlSelfRef.__PVT__rd_reqf_buffer_nxt
                    [0xfU]);
    } else {
        vlSelfRef.__Vdly__store_outstanding_rd_reqf_buffer_pointer = 0U;
        vlSelfRef.__Vdly__select_outstanding_rd_reqf_buffer_pointer = 0U;
        vlSelfRef.__Vdly__rd_reqf_buffer_bit_available = 0xffffU;
        vlSelfRef.__VdlySet__rd_reqf_buffer__v16 = 1U;
        vlSelfRef.__PVT__rd_reqf_buffer_seq__DOT__unnamedblk5__DOT__i = 1U;
        vlSelfRef.__VdlySet__rd_reqf_buffer__v17 = 1U;
        vlSelfRef.__PVT__rd_reqf_buffer_seq__DOT__unnamedblk5__DOT__i = 2U;
        vlSelfRef.__VdlySet__rd_reqf_buffer__v18 = 1U;
        vlSelfRef.__PVT__rd_reqf_buffer_seq__DOT__unnamedblk5__DOT__i = 3U;
        vlSelfRef.__VdlySet__rd_reqf_buffer__v19 = 1U;
        vlSelfRef.__PVT__rd_reqf_buffer_seq__DOT__unnamedblk5__DOT__i = 4U;
        vlSelfRef.__VdlySet__rd_reqf_buffer__v20 = 1U;
        vlSelfRef.__PVT__rd_reqf_buffer_seq__DOT__unnamedblk5__DOT__i = 5U;
        vlSelfRef.__VdlySet__rd_reqf_buffer__v21 = 1U;
        vlSelfRef.__PVT__rd_reqf_buffer_seq__DOT__unnamedblk5__DOT__i = 6U;
        vlSelfRef.__VdlySet__rd_reqf_buffer__v22 = 1U;
        vlSelfRef.__PVT__rd_reqf_buffer_seq__DOT__unnamedblk5__DOT__i = 7U;
        vlSelfRef.__VdlySet__rd_reqf_buffer__v23 = 1U;
        vlSelfRef.__PVT__rd_reqf_buffer_seq__DOT__unnamedblk5__DOT__i = 8U;
        vlSelfRef.__VdlySet__rd_reqf_buffer__v24 = 1U;
        vlSelfRef.__PVT__rd_reqf_buffer_seq__DOT__unnamedblk5__DOT__i = 9U;
        vlSelfRef.__VdlySet__rd_reqf_buffer__v25 = 1U;
        vlSelfRef.__PVT__rd_reqf_buffer_seq__DOT__unnamedblk5__DOT__i = 0xaU;
        vlSelfRef.__VdlySet__rd_reqf_buffer__v26 = 1U;
        vlSelfRef.__PVT__rd_reqf_buffer_seq__DOT__unnamedblk5__DOT__i = 0xbU;
        vlSelfRef.__VdlySet__rd_reqf_buffer__v27 = 1U;
        vlSelfRef.__PVT__rd_reqf_buffer_seq__DOT__unnamedblk5__DOT__i = 0xcU;
        vlSelfRef.__VdlySet__rd_reqf_buffer__v28 = 1U;
        vlSelfRef.__PVT__rd_reqf_buffer_seq__DOT__unnamedblk5__DOT__i = 0xdU;
        vlSelfRef.__VdlySet__rd_reqf_buffer__v29 = 1U;
        vlSelfRef.__PVT__rd_reqf_buffer_seq__DOT__unnamedblk5__DOT__i = 0xeU;
        vlSelfRef.__VdlySet__rd_reqf_buffer__v30 = 1U;
        vlSelfRef.__PVT__rd_reqf_buffer_seq__DOT__unnamedblk5__DOT__i = 0xfU;
        vlSelfRef.__VdlySet__rd_reqf_buffer__v31 = 1U;
        vlSelfRef.__PVT__rd_reqf_buffer_seq__DOT__unnamedblk5__DOT__i = 0x10U;
    }
    if (vlSelfRef.__PVT__rstb_slc_bypass_clk) {
        vlSelfRef.__Vdly__store_wr_data_index_buffer_pointer 
            = vlSelfRef.__PVT__store_wr_data_index_buffer_pointer_nxt;
        vlSelfRef.__Vdly__select_wr_data_index_buffer_pointer 
            = vlSelfRef.__PVT__select_wr_data_index_buffer_pointer_nxt;
        vlSelfRef.__Vdly__wr_data_index_buffer_bit 
            = vlSelfRef.__PVT__wr_data_index_buffer_bit_nxt;
        vlSelfRef.__VdlyVal__wr_data_index_buffer__v0 
            = vlSelfRef.__PVT__wr_data_index_buffer_nxt
            [0U];
        vlSelfRef.__VdlySet__wr_data_index_buffer__v0 = 1U;
        vlSelfRef.__VdlyVal__wr_data_index_buffer__v1 
            = vlSelfRef.__PVT__wr_data_index_buffer_nxt
            [1U];
        vlSelfRef.__VdlyVal__wr_data_index_buffer__v2 
            = vlSelfRef.__PVT__wr_data_index_buffer_nxt
            [2U];
        vlSelfRef.__VdlyVal__wr_data_index_buffer__v3 
            = vlSelfRef.__PVT__wr_data_index_buffer_nxt
            [3U];
        vlSelfRef.__VdlyVal__wr_data_index_buffer__v4 
            = vlSelfRef.__PVT__wr_data_index_buffer_nxt
            [4U];
        vlSelfRef.__VdlyVal__wr_data_index_buffer__v5 
            = vlSelfRef.__PVT__wr_data_index_buffer_nxt
            [5U];
        vlSelfRef.__VdlyVal__wr_data_index_buffer__v6 
            = vlSelfRef.__PVT__wr_data_index_buffer_nxt
            [6U];
        vlSelfRef.__VdlyVal__wr_data_index_buffer__v7 
            = vlSelfRef.__PVT__wr_data_index_buffer_nxt
            [7U];
        vlSelfRef.__VdlyVal__wr_data_index_buffer__v8 
            = vlSelfRef.__PVT__wr_data_index_buffer_nxt
            [8U];
        vlSelfRef.__VdlyVal__wr_data_index_buffer__v9 
            = vlSelfRef.__PVT__wr_data_index_buffer_nxt
            [9U];
        vlSelfRef.__VdlyVal__wr_data_index_buffer__v10 
            = vlSelfRef.__PVT__wr_data_index_buffer_nxt
            [0xaU];
        vlSelfRef.__VdlyVal__wr_data_index_buffer__v11 
            = vlSelfRef.__PVT__wr_data_index_buffer_nxt
            [0xbU];
        vlSelfRef.__VdlyVal__wr_data_index_buffer__v12 
            = vlSelfRef.__PVT__wr_data_index_buffer_nxt
            [0xcU];
        vlSelfRef.__VdlyVal__wr_data_index_buffer__v13 
            = vlSelfRef.__PVT__wr_data_index_buffer_nxt
            [0xdU];
        vlSelfRef.__VdlyVal__wr_data_index_buffer__v14 
            = vlSelfRef.__PVT__wr_data_index_buffer_nxt
            [0xeU];
        vlSelfRef.__VdlyVal__wr_data_index_buffer__v15 
            = vlSelfRef.__PVT__wr_data_index_buffer_nxt
            [0xfU];
        VL_ASSIGN_W(512,vlSelfRef.__VdlyVal__wr_data_buffer__v0, 
                    vlSelfRef.__PVT__wr_data_buffer_nxt
                    [0U]);
        VL_ASSIGN_W(512,vlSelfRef.__VdlyVal__wr_data_buffer__v1, 
                    vlSelfRef.__PVT__wr_data_buffer_nxt
                    [1U]);
        VL_ASSIGN_W(512,vlSelfRef.__VdlyVal__wr_data_buffer__v2, 
                    vlSelfRef.__PVT__wr_data_buffer_nxt
                    [2U]);
        VL_ASSIGN_W(512,vlSelfRef.__VdlyVal__wr_data_buffer__v3, 
                    vlSelfRef.__PVT__wr_data_buffer_nxt
                    [3U]);
        VL_ASSIGN_W(512,vlSelfRef.__VdlyVal__wr_data_buffer__v4, 
                    vlSelfRef.__PVT__wr_data_buffer_nxt
                    [4U]);
        VL_ASSIGN_W(512,vlSelfRef.__VdlyVal__wr_data_buffer__v5, 
                    vlSelfRef.__PVT__wr_data_buffer_nxt
                    [5U]);
        VL_ASSIGN_W(512,vlSelfRef.__VdlyVal__wr_data_buffer__v6, 
                    vlSelfRef.__PVT__wr_data_buffer_nxt
                    [6U]);
        VL_ASSIGN_W(512,vlSelfRef.__VdlyVal__wr_data_buffer__v7, 
                    vlSelfRef.__PVT__wr_data_buffer_nxt
                    [7U]);
        VL_ASSIGN_W(512,vlSelfRef.__VdlyVal__wr_data_buffer__v8, 
                    vlSelfRef.__PVT__wr_data_buffer_nxt
                    [8U]);
        VL_ASSIGN_W(512,vlSelfRef.__VdlyVal__wr_data_buffer__v9, 
                    vlSelfRef.__PVT__wr_data_buffer_nxt
                    [9U]);
        VL_ASSIGN_W(512,vlSelfRef.__VdlyVal__wr_data_buffer__v10, 
                    vlSelfRef.__PVT__wr_data_buffer_nxt
                    [0xaU]);
        VL_ASSIGN_W(512,vlSelfRef.__VdlyVal__wr_data_buffer__v11, 
                    vlSelfRef.__PVT__wr_data_buffer_nxt
                    [0xbU]);
        VL_ASSIGN_W(512,vlSelfRef.__VdlyVal__wr_data_buffer__v12, 
                    vlSelfRef.__PVT__wr_data_buffer_nxt
                    [0xcU]);
        VL_ASSIGN_W(512,vlSelfRef.__VdlyVal__wr_data_buffer__v13, 
                    vlSelfRef.__PVT__wr_data_buffer_nxt
                    [0xdU]);
        VL_ASSIGN_W(512,vlSelfRef.__VdlyVal__wr_data_buffer__v14, 
                    vlSelfRef.__PVT__wr_data_buffer_nxt
                    [0xeU]);
        VL_ASSIGN_W(512,vlSelfRef.__VdlyVal__wr_data_buffer__v15, 
                    vlSelfRef.__PVT__wr_data_buffer_nxt
                    [0xfU]);
        vlSelfRef.__VdlyVal__wr_be_buffer__v0 = vlSelfRef.__PVT__wr_be_buffer_nxt
            [0U];
        vlSelfRef.__VdlyVal__wr_be_buffer__v1 = vlSelfRef.__PVT__wr_be_buffer_nxt
            [1U];
        vlSelfRef.__VdlyVal__wr_be_buffer__v2 = vlSelfRef.__PVT__wr_be_buffer_nxt
            [2U];
        vlSelfRef.__VdlyVal__wr_be_buffer__v3 = vlSelfRef.__PVT__wr_be_buffer_nxt
            [3U];
        vlSelfRef.__VdlyVal__wr_be_buffer__v4 = vlSelfRef.__PVT__wr_be_buffer_nxt
            [4U];
        vlSelfRef.__VdlyVal__wr_be_buffer__v5 = vlSelfRef.__PVT__wr_be_buffer_nxt
            [5U];
        vlSelfRef.__VdlyVal__wr_be_buffer__v6 = vlSelfRef.__PVT__wr_be_buffer_nxt
            [6U];
        vlSelfRef.__VdlyVal__wr_be_buffer__v7 = vlSelfRef.__PVT__wr_be_buffer_nxt
            [7U];
        vlSelfRef.__VdlyVal__wr_be_buffer__v8 = vlSelfRef.__PVT__wr_be_buffer_nxt
            [8U];
        vlSelfRef.__VdlyVal__wr_be_buffer__v9 = vlSelfRef.__PVT__wr_be_buffer_nxt
            [9U];
        vlSelfRef.__VdlyVal__wr_be_buffer__v10 = vlSelfRef.__PVT__wr_be_buffer_nxt
            [0xaU];
        vlSelfRef.__VdlyVal__wr_be_buffer__v11 = vlSelfRef.__PVT__wr_be_buffer_nxt
            [0xbU];
        vlSelfRef.__VdlyVal__wr_be_buffer__v12 = vlSelfRef.__PVT__wr_be_buffer_nxt
            [0xcU];
        vlSelfRef.__VdlyVal__wr_be_buffer__v13 = vlSelfRef.__PVT__wr_be_buffer_nxt
            [0xdU];
        vlSelfRef.__VdlyVal__wr_be_buffer__v14 = vlSelfRef.__PVT__wr_be_buffer_nxt
            [0xeU];
        vlSelfRef.__VdlyVal__wr_be_buffer__v15 = vlSelfRef.__PVT__wr_be_buffer_nxt
            [0xfU];
    } else {
        vlSelfRef.__Vdly__store_wr_data_index_buffer_pointer = 0U;
        vlSelfRef.__Vdly__select_wr_data_index_buffer_pointer = 0U;
        vlSelfRef.__Vdly__wr_data_index_buffer_bit = 0U;
        vlSelfRef.__VdlySet__wr_data_index_buffer__v16 = 1U;
        vlSelfRef.__PVT__wr_data_buffer_seq__DOT__unnamedblk6__DOT__i = 1U;
        vlSelfRef.__VdlySet__wr_data_index_buffer__v17 = 1U;
        vlSelfRef.__PVT__wr_data_buffer_seq__DOT__unnamedblk6__DOT__i = 2U;
        vlSelfRef.__VdlySet__wr_data_index_buffer__v18 = 1U;
        vlSelfRef.__PVT__wr_data_buffer_seq__DOT__unnamedblk6__DOT__i = 3U;
        vlSelfRef.__VdlySet__wr_data_index_buffer__v19 = 1U;
        vlSelfRef.__PVT__wr_data_buffer_seq__DOT__unnamedblk6__DOT__i = 4U;
        vlSelfRef.__VdlySet__wr_data_index_buffer__v20 = 1U;
        vlSelfRef.__PVT__wr_data_buffer_seq__DOT__unnamedblk6__DOT__i = 5U;
        vlSelfRef.__VdlySet__wr_data_index_buffer__v21 = 1U;
        vlSelfRef.__PVT__wr_data_buffer_seq__DOT__unnamedblk6__DOT__i = 6U;
        vlSelfRef.__VdlySet__wr_data_index_buffer__v22 = 1U;
        vlSelfRef.__PVT__wr_data_buffer_seq__DOT__unnamedblk6__DOT__i = 7U;
        vlSelfRef.__VdlySet__wr_data_index_buffer__v23 = 1U;
        vlSelfRef.__PVT__wr_data_buffer_seq__DOT__unnamedblk6__DOT__i = 8U;
        vlSelfRef.__VdlySet__wr_data_index_buffer__v24 = 1U;
        vlSelfRef.__PVT__wr_data_buffer_seq__DOT__unnamedblk6__DOT__i = 9U;
        vlSelfRef.__VdlySet__wr_data_index_buffer__v25 = 1U;
        vlSelfRef.__PVT__wr_data_buffer_seq__DOT__unnamedblk6__DOT__i = 0xaU;
        vlSelfRef.__VdlySet__wr_data_index_buffer__v26 = 1U;
        vlSelfRef.__PVT__wr_data_buffer_seq__DOT__unnamedblk6__DOT__i = 0xbU;
        vlSelfRef.__VdlySet__wr_data_index_buffer__v27 = 1U;
        vlSelfRef.__PVT__wr_data_buffer_seq__DOT__unnamedblk6__DOT__i = 0xcU;
        vlSelfRef.__VdlySet__wr_data_index_buffer__v28 = 1U;
        vlSelfRef.__PVT__wr_data_buffer_seq__DOT__unnamedblk6__DOT__i = 0xdU;
        vlSelfRef.__VdlySet__wr_data_index_buffer__v29 = 1U;
        vlSelfRef.__PVT__wr_data_buffer_seq__DOT__unnamedblk6__DOT__i = 0xeU;
        vlSelfRef.__VdlySet__wr_data_index_buffer__v30 = 1U;
        vlSelfRef.__PVT__wr_data_buffer_seq__DOT__unnamedblk6__DOT__i = 0xfU;
        vlSelfRef.__VdlySet__wr_data_index_buffer__v31 = 1U;
        vlSelfRef.__PVT__wr_data_buffer_seq__DOT__unnamedblk6__DOT__i = 0x10U;
    }
    if (vlSelfRef.__PVT__rstb_slc_bypass_clk) {
        vlSelfRef.__Vdly__wr_addr_buffer_selected = vlSelfRef.__PVT__wr_addr_buffer_selected_nxt;
        vlSelfRef.__VdlyVal__wr_addr_buffer__v0 = vlSelfRef.__PVT__wr_addr_buffer_nxt
            [0U];
        vlSelfRef.__VdlySet__wr_addr_buffer__v0 = 1U;
        vlSelfRef.__VdlyVal__wr_addr_buffer__v1 = vlSelfRef.__PVT__wr_addr_buffer_nxt
            [1U];
        vlSelfRef.__VdlyVal__wr_addr_buffer__v2 = vlSelfRef.__PVT__wr_addr_buffer_nxt
            [2U];
        vlSelfRef.__VdlyVal__wr_addr_buffer__v3 = vlSelfRef.__PVT__wr_addr_buffer_nxt
            [3U];
        vlSelfRef.__VdlyVal__wr_addr_buffer__v4 = vlSelfRef.__PVT__wr_addr_buffer_nxt
            [4U];
        vlSelfRef.__VdlyVal__wr_addr_buffer__v5 = vlSelfRef.__PVT__wr_addr_buffer_nxt
            [5U];
        vlSelfRef.__VdlyVal__wr_addr_buffer__v6 = vlSelfRef.__PVT__wr_addr_buffer_nxt
            [6U];
        vlSelfRef.__VdlyVal__wr_addr_buffer__v7 = vlSelfRef.__PVT__wr_addr_buffer_nxt
            [7U];
        vlSelfRef.__VdlyVal__wr_addr_buffer__v8 = vlSelfRef.__PVT__wr_addr_buffer_nxt
            [8U];
        vlSelfRef.__VdlyVal__wr_addr_buffer__v9 = vlSelfRef.__PVT__wr_addr_buffer_nxt
            [9U];
        vlSelfRef.__VdlyVal__wr_addr_buffer__v10 = 
            vlSelfRef.__PVT__wr_addr_buffer_nxt[0xaU];
        vlSelfRef.__VdlyVal__wr_addr_buffer__v11 = 
            vlSelfRef.__PVT__wr_addr_buffer_nxt[0xbU];
        vlSelfRef.__VdlyVal__wr_addr_buffer__v12 = 
            vlSelfRef.__PVT__wr_addr_buffer_nxt[0xcU];
        vlSelfRef.__VdlyVal__wr_addr_buffer__v13 = 
            vlSelfRef.__PVT__wr_addr_buffer_nxt[0xdU];
        vlSelfRef.__VdlyVal__wr_addr_buffer__v14 = 
            vlSelfRef.__PVT__wr_addr_buffer_nxt[0xeU];
        vlSelfRef.__VdlyVal__wr_addr_buffer__v15 = 
            vlSelfRef.__PVT__wr_addr_buffer_nxt[0xfU];
        vlSelfRef.__VdlyVal__wr_qos_buffer__v0 = vlSelfRef.__PVT__wr_qos_buffer_nxt
            [0U];
        vlSelfRef.__VdlyVal__wr_qos_buffer__v1 = vlSelfRef.__PVT__wr_qos_buffer_nxt
            [1U];
        vlSelfRef.__VdlyVal__wr_qos_buffer__v2 = vlSelfRef.__PVT__wr_qos_buffer_nxt
            [2U];
        vlSelfRef.__VdlyVal__wr_qos_buffer__v3 = vlSelfRef.__PVT__wr_qos_buffer_nxt
            [3U];
        vlSelfRef.__VdlyVal__wr_qos_buffer__v4 = vlSelfRef.__PVT__wr_qos_buffer_nxt
            [4U];
        vlSelfRef.__VdlyVal__wr_qos_buffer__v5 = vlSelfRef.__PVT__wr_qos_buffer_nxt
            [5U];
        vlSelfRef.__VdlyVal__wr_qos_buffer__v6 = vlSelfRef.__PVT__wr_qos_buffer_nxt
            [6U];
        vlSelfRef.__VdlyVal__wr_qos_buffer__v7 = vlSelfRef.__PVT__wr_qos_buffer_nxt
            [7U];
        vlSelfRef.__VdlyVal__wr_qos_buffer__v8 = vlSelfRef.__PVT__wr_qos_buffer_nxt
            [8U];
        vlSelfRef.__VdlyVal__wr_qos_buffer__v9 = vlSelfRef.__PVT__wr_qos_buffer_nxt
            [9U];
        vlSelfRef.__VdlyVal__wr_qos_buffer__v10 = vlSelfRef.__PVT__wr_qos_buffer_nxt
            [0xaU];
        vlSelfRef.__VdlyVal__wr_qos_buffer__v11 = vlSelfRef.__PVT__wr_qos_buffer_nxt
            [0xbU];
        vlSelfRef.__VdlyVal__wr_qos_buffer__v12 = vlSelfRef.__PVT__wr_qos_buffer_nxt
            [0xcU];
        vlSelfRef.__VdlyVal__wr_qos_buffer__v13 = vlSelfRef.__PVT__wr_qos_buffer_nxt
            [0xdU];
        vlSelfRef.__VdlyVal__wr_qos_buffer__v14 = vlSelfRef.__PVT__wr_qos_buffer_nxt
            [0xeU];
        vlSelfRef.__VdlyVal__wr_qos_buffer__v15 = vlSelfRef.__PVT__wr_qos_buffer_nxt
            [0xfU];
        vlSelfRef.__VdlyVal__wr_tgtid_buffer__v0 = 
            vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0U];
        vlSelfRef.__VdlyVal__wr_tgtid_buffer__v1 = 
            vlSelfRef.__PVT__wr_tgtid_buffer_nxt[1U];
        vlSelfRef.__VdlyVal__wr_tgtid_buffer__v2 = 
            vlSelfRef.__PVT__wr_tgtid_buffer_nxt[2U];
        vlSelfRef.__VdlyVal__wr_tgtid_buffer__v3 = 
            vlSelfRef.__PVT__wr_tgtid_buffer_nxt[3U];
        vlSelfRef.__VdlyVal__wr_tgtid_buffer__v4 = 
            vlSelfRef.__PVT__wr_tgtid_buffer_nxt[4U];
        vlSelfRef.__VdlyVal__wr_tgtid_buffer__v5 = 
            vlSelfRef.__PVT__wr_tgtid_buffer_nxt[5U];
        vlSelfRef.__VdlyVal__wr_tgtid_buffer__v6 = 
            vlSelfRef.__PVT__wr_tgtid_buffer_nxt[6U];
        vlSelfRef.__VdlyVal__wr_tgtid_buffer__v7 = 
            vlSelfRef.__PVT__wr_tgtid_buffer_nxt[7U];
        vlSelfRef.__VdlyVal__wr_tgtid_buffer__v8 = 
            vlSelfRef.__PVT__wr_tgtid_buffer_nxt[8U];
        vlSelfRef.__VdlyVal__wr_tgtid_buffer__v9 = 
            vlSelfRef.__PVT__wr_tgtid_buffer_nxt[9U];
        vlSelfRef.__VdlyVal__wr_tgtid_buffer__v10 = 
            vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0xaU];
        vlSelfRef.__VdlyVal__wr_tgtid_buffer__v11 = 
            vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0xbU];
        vlSelfRef.__VdlyVal__wr_tgtid_buffer__v12 = 
            vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0xcU];
        vlSelfRef.__VdlyVal__wr_tgtid_buffer__v13 = 
            vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0xdU];
        vlSelfRef.__VdlyVal__wr_tgtid_buffer__v14 = 
            vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0xeU];
        vlSelfRef.__VdlyVal__wr_tgtid_buffer__v15 = 
            vlSelfRef.__PVT__wr_tgtid_buffer_nxt[0xfU];
        vlSelfRef.__VdlyVal__wr_txnid_buffer__v0 = 
            vlSelfRef.__PVT__wr_txnid_buffer_nxt[0U];
        vlSelfRef.__VdlyVal__wr_txnid_buffer__v1 = 
            vlSelfRef.__PVT__wr_txnid_buffer_nxt[1U];
        vlSelfRef.__VdlyVal__wr_txnid_buffer__v2 = 
            vlSelfRef.__PVT__wr_txnid_buffer_nxt[2U];
        vlSelfRef.__VdlyVal__wr_txnid_buffer__v3 = 
            vlSelfRef.__PVT__wr_txnid_buffer_nxt[3U];
        vlSelfRef.__VdlyVal__wr_txnid_buffer__v4 = 
            vlSelfRef.__PVT__wr_txnid_buffer_nxt[4U];
        vlSelfRef.__VdlyVal__wr_txnid_buffer__v5 = 
            vlSelfRef.__PVT__wr_txnid_buffer_nxt[5U];
        vlSelfRef.__VdlyVal__wr_txnid_buffer__v6 = 
            vlSelfRef.__PVT__wr_txnid_buffer_nxt[6U];
        vlSelfRef.__VdlyVal__wr_txnid_buffer__v7 = 
            vlSelfRef.__PVT__wr_txnid_buffer_nxt[7U];
        vlSelfRef.__VdlyVal__wr_txnid_buffer__v8 = 
            vlSelfRef.__PVT__wr_txnid_buffer_nxt[8U];
        vlSelfRef.__VdlyVal__wr_txnid_buffer__v9 = 
            vlSelfRef.__PVT__wr_txnid_buffer_nxt[9U];
        vlSelfRef.__VdlyVal__wr_txnid_buffer__v10 = 
            vlSelfRef.__PVT__wr_txnid_buffer_nxt[0xaU];
        vlSelfRef.__VdlyVal__wr_txnid_buffer__v11 = 
            vlSelfRef.__PVT__wr_txnid_buffer_nxt[0xbU];
        vlSelfRef.__VdlyVal__wr_txnid_buffer__v12 = 
            vlSelfRef.__PVT__wr_txnid_buffer_nxt[0xcU];
        vlSelfRef.__VdlyVal__wr_txnid_buffer__v13 = 
            vlSelfRef.__PVT__wr_txnid_buffer_nxt[0xdU];
        vlSelfRef.__VdlyVal__wr_txnid_buffer__v14 = 
            vlSelfRef.__PVT__wr_txnid_buffer_nxt[0xeU];
        vlSelfRef.__VdlyVal__wr_txnid_buffer__v15 = 
            vlSelfRef.__PVT__wr_txnid_buffer_nxt[0xfU];
        vlSelfRef.__VdlyVal__wr_ns_buffer__v0 = vlSelfRef.__PVT__wr_ns_buffer_nxt
            [0U];
        vlSelfRef.__VdlyVal__wr_ns_buffer__v1 = vlSelfRef.__PVT__wr_ns_buffer_nxt
            [1U];
        vlSelfRef.__VdlyVal__wr_ns_buffer__v2 = vlSelfRef.__PVT__wr_ns_buffer_nxt
            [2U];
        vlSelfRef.__VdlyVal__wr_ns_buffer__v3 = vlSelfRef.__PVT__wr_ns_buffer_nxt
            [3U];
        vlSelfRef.__VdlyVal__wr_ns_buffer__v4 = vlSelfRef.__PVT__wr_ns_buffer_nxt
            [4U];
        vlSelfRef.__VdlyVal__wr_ns_buffer__v5 = vlSelfRef.__PVT__wr_ns_buffer_nxt
            [5U];
        vlSelfRef.__VdlyVal__wr_ns_buffer__v6 = vlSelfRef.__PVT__wr_ns_buffer_nxt
            [6U];
        vlSelfRef.__VdlyVal__wr_ns_buffer__v7 = vlSelfRef.__PVT__wr_ns_buffer_nxt
            [7U];
        vlSelfRef.__VdlyVal__wr_ns_buffer__v8 = vlSelfRef.__PVT__wr_ns_buffer_nxt
            [8U];
        vlSelfRef.__VdlyVal__wr_ns_buffer__v9 = vlSelfRef.__PVT__wr_ns_buffer_nxt
            [9U];
        vlSelfRef.__VdlyVal__wr_ns_buffer__v10 = vlSelfRef.__PVT__wr_ns_buffer_nxt
            [0xaU];
        vlSelfRef.__VdlyVal__wr_ns_buffer__v11 = vlSelfRef.__PVT__wr_ns_buffer_nxt
            [0xbU];
        vlSelfRef.__VdlyVal__wr_ns_buffer__v12 = vlSelfRef.__PVT__wr_ns_buffer_nxt
            [0xcU];
        vlSelfRef.__VdlyVal__wr_ns_buffer__v13 = vlSelfRef.__PVT__wr_ns_buffer_nxt
            [0xdU];
        vlSelfRef.__VdlyVal__wr_ns_buffer__v14 = vlSelfRef.__PVT__wr_ns_buffer_nxt
            [0xeU];
        vlSelfRef.__VdlyVal__wr_ns_buffer__v15 = vlSelfRef.__PVT__wr_ns_buffer_nxt
            [0xfU];
        vlSelfRef.__VdlyVal__wr_memattr_buffer__v0 
            = vlSelfRef.__PVT__wr_memattr_buffer_nxt
            [0U];
        vlSelfRef.__VdlyVal__wr_memattr_buffer__v1 
            = vlSelfRef.__PVT__wr_memattr_buffer_nxt
            [1U];
        vlSelfRef.__VdlyVal__wr_memattr_buffer__v2 
            = vlSelfRef.__PVT__wr_memattr_buffer_nxt
            [2U];
        vlSelfRef.__VdlyVal__wr_memattr_buffer__v3 
            = vlSelfRef.__PVT__wr_memattr_buffer_nxt
            [3U];
        vlSelfRef.__VdlyVal__wr_memattr_buffer__v4 
            = vlSelfRef.__PVT__wr_memattr_buffer_nxt
            [4U];
        vlSelfRef.__VdlyVal__wr_memattr_buffer__v5 
            = vlSelfRef.__PVT__wr_memattr_buffer_nxt
            [5U];
        vlSelfRef.__VdlyVal__wr_memattr_buffer__v6 
            = vlSelfRef.__PVT__wr_memattr_buffer_nxt
            [6U];
        vlSelfRef.__VdlyVal__wr_memattr_buffer__v7 
            = vlSelfRef.__PVT__wr_memattr_buffer_nxt
            [7U];
        vlSelfRef.__VdlyVal__wr_memattr_buffer__v8 
            = vlSelfRef.__PVT__wr_memattr_buffer_nxt
            [8U];
        vlSelfRef.__VdlyVal__wr_memattr_buffer__v9 
            = vlSelfRef.__PVT__wr_memattr_buffer_nxt
            [9U];
        vlSelfRef.__VdlyVal__wr_memattr_buffer__v10 
            = vlSelfRef.__PVT__wr_memattr_buffer_nxt
            [0xaU];
        vlSelfRef.__VdlyVal__wr_memattr_buffer__v11 
            = vlSelfRef.__PVT__wr_memattr_buffer_nxt
            [0xbU];
        vlSelfRef.__VdlyVal__wr_memattr_buffer__v12 
            = vlSelfRef.__PVT__wr_memattr_buffer_nxt
            [0xcU];
        vlSelfRef.__VdlyVal__wr_memattr_buffer__v13 
            = vlSelfRef.__PVT__wr_memattr_buffer_nxt
            [0xdU];
        vlSelfRef.__VdlyVal__wr_memattr_buffer__v14 
            = vlSelfRef.__PVT__wr_memattr_buffer_nxt
            [0xeU];
        vlSelfRef.__VdlyVal__wr_memattr_buffer__v15 
            = vlSelfRef.__PVT__wr_memattr_buffer_nxt
            [0xfU];
        vlSelfRef.__Vdly__wr_sent_data_bit = vlSelfRef.__PVT__wr_sent_data_bit_nxt;
        vlSelfRef.__Vdly__wr_received_sn_comp_bit = vlSelfRef.__PVT__wr_received_sn_comp_bit_nxt;
        vlSelfRef.__Vdly__wr_addr_buffer_bit_available 
            = vlSelfRef.__PVT__wr_addr_buffer_bit_available_nxt;
        vlSelfRef.__Vdly__wr_received_dbid_bit = vlSelfRef.__PVT__wr_received_dbid_bit_nxt;
        vlSelfRef.__Vdly__wr_zero_buffer = vlSelfRef.__PVT__wr_zero_buffer_nxt;
    } else {
        vlSelfRef.__Vdly__wr_addr_buffer_selected = 0U;
        vlSelfRef.__Vdly__wr_addr_buffer_bit_available = 0xffffU;
        vlSelfRef.__Vdly__wr_received_dbid_bit = 0U;
        vlSelfRef.__Vdly__wr_sent_data_bit = 0U;
        vlSelfRef.__Vdly__wr_received_sn_comp_bit = 0U;
        vlSelfRef.__Vdly__wr_zero_buffer = 0U;
        vlSelfRef.__VdlySet__wr_addr_buffer__v16 = 1U;
        vlSelfRef.__PVT__wr_addr_buffer_seq__DOT__unnamedblk4__DOT__i = 1U;
        vlSelfRef.__VdlySet__wr_addr_buffer__v17 = 1U;
        vlSelfRef.__PVT__wr_addr_buffer_seq__DOT__unnamedblk4__DOT__i = 2U;
        vlSelfRef.__VdlySet__wr_addr_buffer__v18 = 1U;
        vlSelfRef.__PVT__wr_addr_buffer_seq__DOT__unnamedblk4__DOT__i = 3U;
        vlSelfRef.__VdlySet__wr_addr_buffer__v19 = 1U;
        vlSelfRef.__PVT__wr_addr_buffer_seq__DOT__unnamedblk4__DOT__i = 4U;
        vlSelfRef.__VdlySet__wr_addr_buffer__v20 = 1U;
        vlSelfRef.__PVT__wr_addr_buffer_seq__DOT__unnamedblk4__DOT__i = 5U;
        vlSelfRef.__VdlySet__wr_addr_buffer__v21 = 1U;
        vlSelfRef.__PVT__wr_addr_buffer_seq__DOT__unnamedblk4__DOT__i = 6U;
        vlSelfRef.__VdlySet__wr_addr_buffer__v22 = 1U;
        vlSelfRef.__PVT__wr_addr_buffer_seq__DOT__unnamedblk4__DOT__i = 7U;
        vlSelfRef.__VdlySet__wr_addr_buffer__v23 = 1U;
        vlSelfRef.__PVT__wr_addr_buffer_seq__DOT__unnamedblk4__DOT__i = 8U;
        vlSelfRef.__VdlySet__wr_addr_buffer__v24 = 1U;
        vlSelfRef.__PVT__wr_addr_buffer_seq__DOT__unnamedblk4__DOT__i = 9U;
        vlSelfRef.__VdlySet__wr_addr_buffer__v25 = 1U;
        vlSelfRef.__PVT__wr_addr_buffer_seq__DOT__unnamedblk4__DOT__i = 0xaU;
        vlSelfRef.__VdlySet__wr_addr_buffer__v26 = 1U;
        vlSelfRef.__PVT__wr_addr_buffer_seq__DOT__unnamedblk4__DOT__i = 0xbU;
        vlSelfRef.__VdlySet__wr_addr_buffer__v27 = 1U;
        vlSelfRef.__PVT__wr_addr_buffer_seq__DOT__unnamedblk4__DOT__i = 0xcU;
        vlSelfRef.__VdlySet__wr_addr_buffer__v28 = 1U;
        vlSelfRef.__PVT__wr_addr_buffer_seq__DOT__unnamedblk4__DOT__i = 0xdU;
        vlSelfRef.__VdlySet__wr_addr_buffer__v29 = 1U;
        vlSelfRef.__PVT__wr_addr_buffer_seq__DOT__unnamedblk4__DOT__i = 0xeU;
        vlSelfRef.__VdlySet__wr_addr_buffer__v30 = 1U;
        vlSelfRef.__PVT__wr_addr_buffer_seq__DOT__unnamedblk4__DOT__i = 0xfU;
        vlSelfRef.__VdlySet__wr_addr_buffer__v31 = 1U;
        vlSelfRef.__PVT__wr_addr_buffer_seq__DOT__unnamedblk4__DOT__i = 0x10U;
    }
    if (vlSelfRef.__PVT__rstb_slc_bypass_clk) {
        vlSelfRef.__VdlyVal__rdretryack_buf__v0 = vlSelfRef.__PVT__rdretryack_buf_nxt
            [0U];
        vlSelfRef.__VdlySet__rdretryack_buf__v0 = 1U;
        vlSelfRef.__VdlyVal__rdretryack_buf__v1 = vlSelfRef.__PVT__rdretryack_buf_nxt
            [1U];
        vlSelfRef.__VdlyVal__rdretryack_buf__v2 = vlSelfRef.__PVT__rdretryack_buf_nxt
            [2U];
        vlSelfRef.__VdlyVal__rdretryack_buf__v3 = vlSelfRef.__PVT__rdretryack_buf_nxt
            [3U];
        vlSelfRef.__VdlyVal__rdretryack_buf__v4 = vlSelfRef.__PVT__rdretryack_buf_nxt
            [4U];
        vlSelfRef.__VdlyVal__rdretryack_buf__v5 = vlSelfRef.__PVT__rdretryack_buf_nxt
            [5U];
        vlSelfRef.__VdlyVal__rdretryack_buf__v6 = vlSelfRef.__PVT__rdretryack_buf_nxt
            [6U];
        vlSelfRef.__VdlyVal__rdretryack_buf__v7 = vlSelfRef.__PVT__rdretryack_buf_nxt
            [7U];
        vlSelfRef.__VdlyVal__rdretryack_buf__v8 = vlSelfRef.__PVT__rdretryack_buf_nxt
            [8U];
        vlSelfRef.__VdlyVal__rdretryack_buf__v9 = vlSelfRef.__PVT__rdretryack_buf_nxt
            [9U];
        vlSelfRef.__VdlyVal__rdretryack_buf__v10 = 
            vlSelfRef.__PVT__rdretryack_buf_nxt[0xaU];
        vlSelfRef.__VdlyVal__rdretryack_buf__v11 = 
            vlSelfRef.__PVT__rdretryack_buf_nxt[0xbU];
        vlSelfRef.__VdlyVal__rdretryack_buf__v12 = 
            vlSelfRef.__PVT__rdretryack_buf_nxt[0xcU];
        vlSelfRef.__VdlyVal__rdretryack_buf__v13 = 
            vlSelfRef.__PVT__rdretryack_buf_nxt[0xdU];
        vlSelfRef.__VdlyVal__rdretryack_buf__v14 = 
            vlSelfRef.__PVT__rdretryack_buf_nxt[0xeU];
        vlSelfRef.__VdlyVal__rdretryack_buf__v15 = 
            vlSelfRef.__PVT__rdretryack_buf_nxt[0xfU];
        vlSelfRef.__Vdly__rdretryack_bufv = vlSelfRef.__PVT__rdretryack_bufv_nxt;
        vlSelfRef.__VdlyVal__wrretryack_buf__v0 = vlSelfRef.__PVT__wrretryack_buf_nxt
            [0U];
        vlSelfRef.__VdlySet__wrretryack_buf__v0 = 1U;
        vlSelfRef.__VdlyVal__wrretryack_buf__v1 = vlSelfRef.__PVT__wrretryack_buf_nxt
            [1U];
        vlSelfRef.__VdlyVal__wrretryack_buf__v2 = vlSelfRef.__PVT__wrretryack_buf_nxt
            [2U];
        vlSelfRef.__VdlyVal__wrretryack_buf__v3 = vlSelfRef.__PVT__wrretryack_buf_nxt
            [3U];
        vlSelfRef.__VdlyVal__wrretryack_buf__v4 = vlSelfRef.__PVT__wrretryack_buf_nxt
            [4U];
        vlSelfRef.__VdlyVal__wrretryack_buf__v5 = vlSelfRef.__PVT__wrretryack_buf_nxt
            [5U];
        vlSelfRef.__VdlyVal__wrretryack_buf__v6 = vlSelfRef.__PVT__wrretryack_buf_nxt
            [6U];
        vlSelfRef.__VdlyVal__wrretryack_buf__v7 = vlSelfRef.__PVT__wrretryack_buf_nxt
            [7U];
        vlSelfRef.__VdlyVal__wrretryack_buf__v8 = vlSelfRef.__PVT__wrretryack_buf_nxt
            [8U];
        vlSelfRef.__VdlyVal__wrretryack_buf__v9 = vlSelfRef.__PVT__wrretryack_buf_nxt
            [9U];
        vlSelfRef.__VdlyVal__wrretryack_buf__v10 = 
            vlSelfRef.__PVT__wrretryack_buf_nxt[0xaU];
        vlSelfRef.__VdlyVal__wrretryack_buf__v11 = 
            vlSelfRef.__PVT__wrretryack_buf_nxt[0xbU];
        vlSelfRef.__VdlyVal__wrretryack_buf__v12 = 
            vlSelfRef.__PVT__wrretryack_buf_nxt[0xcU];
        vlSelfRef.__VdlyVal__wrretryack_buf__v13 = 
            vlSelfRef.__PVT__wrretryack_buf_nxt[0xdU];
        vlSelfRef.__VdlyVal__wrretryack_buf__v14 = 
            vlSelfRef.__PVT__wrretryack_buf_nxt[0xeU];
        vlSelfRef.__VdlyVal__wrretryack_buf__v15 = 
            vlSelfRef.__PVT__wrretryack_buf_nxt[0xfU];
        vlSelfRef.__Vdly__wrretryack_bufv = vlSelfRef.__PVT__wrretryack_bufv_nxt;
        VL_ASSIGN_W(151,vlSelfRef.__VdlyVal__memrdretry_buf__v0, 
                    vlSelfRef.__PVT__memrdretry_buf_nxt
                    [0U]);
        vlSelfRef.__VdlySet__memrdretry_buf__v0 = 1U;
        VL_ASSIGN_W(151,vlSelfRef.__VdlyVal__memrdretry_buf__v1, 
                    vlSelfRef.__PVT__memrdretry_buf_nxt
                    [1U]);
        VL_ASSIGN_W(151,vlSelfRef.__VdlyVal__memrdretry_buf__v2, 
                    vlSelfRef.__PVT__memrdretry_buf_nxt
                    [2U]);
        VL_ASSIGN_W(151,vlSelfRef.__VdlyVal__memrdretry_buf__v3, 
                    vlSelfRef.__PVT__memrdretry_buf_nxt
                    [3U]);
        VL_ASSIGN_W(151,vlSelfRef.__VdlyVal__memrdretry_buf__v4, 
                    vlSelfRef.__PVT__memrdretry_buf_nxt
                    [4U]);
        VL_ASSIGN_W(151,vlSelfRef.__VdlyVal__memrdretry_buf__v5, 
                    vlSelfRef.__PVT__memrdretry_buf_nxt
                    [5U]);
        VL_ASSIGN_W(151,vlSelfRef.__VdlyVal__memrdretry_buf__v6, 
                    vlSelfRef.__PVT__memrdretry_buf_nxt
                    [6U]);
        VL_ASSIGN_W(151,vlSelfRef.__VdlyVal__memrdretry_buf__v7, 
                    vlSelfRef.__PVT__memrdretry_buf_nxt
                    [7U]);
        VL_ASSIGN_W(151,vlSelfRef.__VdlyVal__memrdretry_buf__v8, 
                    vlSelfRef.__PVT__memrdretry_buf_nxt
                    [8U]);
        VL_ASSIGN_W(151,vlSelfRef.__VdlyVal__memrdretry_buf__v9, 
                    vlSelfRef.__PVT__memrdretry_buf_nxt
                    [9U]);
        VL_ASSIGN_W(151,vlSelfRef.__VdlyVal__memrdretry_buf__v10, 
                    vlSelfRef.__PVT__memrdretry_buf_nxt
                    [0xaU]);
        VL_ASSIGN_W(151,vlSelfRef.__VdlyVal__memrdretry_buf__v11, 
                    vlSelfRef.__PVT__memrdretry_buf_nxt
                    [0xbU]);
        VL_ASSIGN_W(151,vlSelfRef.__VdlyVal__memrdretry_buf__v12, 
                    vlSelfRef.__PVT__memrdretry_buf_nxt
                    [0xcU]);
        VL_ASSIGN_W(151,vlSelfRef.__VdlyVal__memrdretry_buf__v13, 
                    vlSelfRef.__PVT__memrdretry_buf_nxt
                    [0xdU]);
        VL_ASSIGN_W(151,vlSelfRef.__VdlyVal__memrdretry_buf__v14, 
                    vlSelfRef.__PVT__memrdretry_buf_nxt
                    [0xeU]);
        VL_ASSIGN_W(151,vlSelfRef.__VdlyVal__memrdretry_buf__v15, 
                    vlSelfRef.__PVT__memrdretry_buf_nxt
                    [0xfU]);
    } else {
        vlSelfRef.__Vdly__rdretryack_bufv = 0U;
        vlSelfRef.__Vdly__wrretryack_bufv = 0U;
        vlSelfRef.__VdlySet__rdretryack_buf__v16 = 1U;
        vlSelfRef.__PVT__unnamedblk11__DOT__i = 1U;
        vlSelfRef.__VdlySet__rdretryack_buf__v17 = 1U;
        vlSelfRef.__PVT__unnamedblk11__DOT__i = 2U;
        vlSelfRef.__VdlySet__rdretryack_buf__v18 = 1U;
        vlSelfRef.__PVT__unnamedblk11__DOT__i = 3U;
        vlSelfRef.__VdlySet__rdretryack_buf__v19 = 1U;
        vlSelfRef.__PVT__unnamedblk11__DOT__i = 4U;
        vlSelfRef.__VdlySet__rdretryack_buf__v20 = 1U;
        vlSelfRef.__PVT__unnamedblk11__DOT__i = 5U;
        vlSelfRef.__VdlySet__rdretryack_buf__v21 = 1U;
        vlSelfRef.__PVT__unnamedblk11__DOT__i = 6U;
        vlSelfRef.__VdlySet__rdretryack_buf__v22 = 1U;
        vlSelfRef.__PVT__unnamedblk11__DOT__i = 7U;
        vlSelfRef.__VdlySet__rdretryack_buf__v23 = 1U;
        vlSelfRef.__PVT__unnamedblk11__DOT__i = 8U;
        vlSelfRef.__VdlySet__rdretryack_buf__v24 = 1U;
        vlSelfRef.__PVT__unnamedblk11__DOT__i = 9U;
        vlSelfRef.__VdlySet__rdretryack_buf__v25 = 1U;
        vlSelfRef.__PVT__unnamedblk11__DOT__i = 0xaU;
        vlSelfRef.__VdlySet__rdretryack_buf__v26 = 1U;
        vlSelfRef.__PVT__unnamedblk11__DOT__i = 0xbU;
        vlSelfRef.__VdlySet__rdretryack_buf__v27 = 1U;
        vlSelfRef.__PVT__unnamedblk11__DOT__i = 0xcU;
        vlSelfRef.__VdlySet__rdretryack_buf__v28 = 1U;
        vlSelfRef.__PVT__unnamedblk11__DOT__i = 0xdU;
        vlSelfRef.__VdlySet__rdretryack_buf__v29 = 1U;
        vlSelfRef.__PVT__unnamedblk11__DOT__i = 0xeU;
        vlSelfRef.__VdlySet__rdretryack_buf__v30 = 1U;
        vlSelfRef.__PVT__unnamedblk11__DOT__i = 0xfU;
        vlSelfRef.__VdlySet__rdretryack_buf__v31 = 1U;
        vlSelfRef.__PVT__unnamedblk11__DOT__i = 0x10U;
        vlSelfRef.__VdlySet__wrretryack_buf__v16 = 1U;
        vlSelfRef.__PVT__unnamedblk12__DOT__i = 1U;
        vlSelfRef.__VdlySet__wrretryack_buf__v17 = 1U;
        vlSelfRef.__PVT__unnamedblk12__DOT__i = 2U;
        vlSelfRef.__VdlySet__wrretryack_buf__v18 = 1U;
        vlSelfRef.__PVT__unnamedblk12__DOT__i = 3U;
        vlSelfRef.__VdlySet__wrretryack_buf__v19 = 1U;
        vlSelfRef.__PVT__unnamedblk12__DOT__i = 4U;
        vlSelfRef.__VdlySet__wrretryack_buf__v20 = 1U;
        vlSelfRef.__PVT__unnamedblk12__DOT__i = 5U;
        vlSelfRef.__VdlySet__wrretryack_buf__v21 = 1U;
        vlSelfRef.__PVT__unnamedblk12__DOT__i = 6U;
        vlSelfRef.__VdlySet__wrretryack_buf__v22 = 1U;
        vlSelfRef.__PVT__unnamedblk12__DOT__i = 7U;
        vlSelfRef.__VdlySet__wrretryack_buf__v23 = 1U;
        vlSelfRef.__PVT__unnamedblk12__DOT__i = 8U;
        vlSelfRef.__VdlySet__wrretryack_buf__v24 = 1U;
        vlSelfRef.__PVT__unnamedblk12__DOT__i = 9U;
        vlSelfRef.__VdlySet__wrretryack_buf__v25 = 1U;
        vlSelfRef.__PVT__unnamedblk12__DOT__i = 0xaU;
        vlSelfRef.__VdlySet__wrretryack_buf__v26 = 1U;
        vlSelfRef.__PVT__unnamedblk12__DOT__i = 0xbU;
        vlSelfRef.__VdlySet__wrretryack_buf__v27 = 1U;
        vlSelfRef.__PVT__unnamedblk12__DOT__i = 0xcU;
        vlSelfRef.__VdlySet__wrretryack_buf__v28 = 1U;
        vlSelfRef.__PVT__unnamedblk12__DOT__i = 0xdU;
        vlSelfRef.__VdlySet__wrretryack_buf__v29 = 1U;
        vlSelfRef.__PVT__unnamedblk12__DOT__i = 0xeU;
        vlSelfRef.__VdlySet__wrretryack_buf__v30 = 1U;
        vlSelfRef.__PVT__unnamedblk12__DOT__i = 0xfU;
        vlSelfRef.__VdlySet__wrretryack_buf__v31 = 1U;
        vlSelfRef.__PVT__unnamedblk12__DOT__i = 0x10U;
    }
    vlSelfRef.__PVT__cmdproc_st = vlSelfRef.__Vdly__cmdproc_st;
    vlSelfRef.__PVT__rd_txnid_buffer_selected = vlSelfRef.__Vdly__rd_txnid_buffer_selected;
    if (vlSelfRef.__VdlySet__rd_txnid_buffer__v0) {
        vlSelfRef.__PVT__rd_txnid_buffer[0U] = vlSelfRef.__VdlyVal__rd_txnid_buffer__v0;
        vlSelfRef.__PVT__rd_txnid_buffer[1U] = vlSelfRef.__VdlyVal__rd_txnid_buffer__v1;
        vlSelfRef.__PVT__rd_txnid_buffer[2U] = vlSelfRef.__VdlyVal__rd_txnid_buffer__v2;
        vlSelfRef.__PVT__rd_txnid_buffer[3U] = vlSelfRef.__VdlyVal__rd_txnid_buffer__v3;
        vlSelfRef.__PVT__rd_txnid_buffer[4U] = vlSelfRef.__VdlyVal__rd_txnid_buffer__v4;
        vlSelfRef.__PVT__rd_txnid_buffer[5U] = vlSelfRef.__VdlyVal__rd_txnid_buffer__v5;
        vlSelfRef.__PVT__rd_txnid_buffer[6U] = vlSelfRef.__VdlyVal__rd_txnid_buffer__v6;
        vlSelfRef.__PVT__rd_txnid_buffer[7U] = vlSelfRef.__VdlyVal__rd_txnid_buffer__v7;
        vlSelfRef.__PVT__rd_txnid_buffer[8U] = vlSelfRef.__VdlyVal__rd_txnid_buffer__v8;
        vlSelfRef.__PVT__rd_txnid_buffer[9U] = vlSelfRef.__VdlyVal__rd_txnid_buffer__v9;
        vlSelfRef.__PVT__rd_txnid_buffer[0xaU] = vlSelfRef.__VdlyVal__rd_txnid_buffer__v10;
        vlSelfRef.__PVT__rd_txnid_buffer[0xbU] = vlSelfRef.__VdlyVal__rd_txnid_buffer__v11;
        vlSelfRef.__PVT__rd_txnid_buffer[0xcU] = vlSelfRef.__VdlyVal__rd_txnid_buffer__v12;
        vlSelfRef.__PVT__rd_txnid_buffer[0xdU] = vlSelfRef.__VdlyVal__rd_txnid_buffer__v13;
        vlSelfRef.__PVT__rd_txnid_buffer[0xeU] = vlSelfRef.__VdlyVal__rd_txnid_buffer__v14;
        vlSelfRef.__PVT__rd_txnid_buffer[0xfU] = vlSelfRef.__VdlyVal__rd_txnid_buffer__v15;
    }
    if (vlSelfRef.__VdlySet__rd_txnid_buffer__v16) {
        vlSelfRef.__PVT__rd_txnid_buffer[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rd_txnid_buffer__v17) {
        vlSelfRef.__PVT__rd_txnid_buffer[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rd_txnid_buffer__v18) {
        vlSelfRef.__PVT__rd_txnid_buffer[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rd_txnid_buffer__v19) {
        vlSelfRef.__PVT__rd_txnid_buffer[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rd_txnid_buffer__v20) {
        vlSelfRef.__PVT__rd_txnid_buffer[4U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rd_txnid_buffer__v21) {
        vlSelfRef.__PVT__rd_txnid_buffer[5U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rd_txnid_buffer__v22) {
        vlSelfRef.__PVT__rd_txnid_buffer[6U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rd_txnid_buffer__v23) {
        vlSelfRef.__PVT__rd_txnid_buffer[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rd_txnid_buffer__v24) {
        vlSelfRef.__PVT__rd_txnid_buffer[8U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rd_txnid_buffer__v25) {
        vlSelfRef.__PVT__rd_txnid_buffer[9U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rd_txnid_buffer__v26) {
        vlSelfRef.__PVT__rd_txnid_buffer[0xaU] = 0U;
    }
    if (vlSelfRef.__VdlySet__rd_txnid_buffer__v27) {
        vlSelfRef.__PVT__rd_txnid_buffer[0xbU] = 0U;
    }
    if (vlSelfRef.__VdlySet__rd_txnid_buffer__v28) {
        vlSelfRef.__PVT__rd_txnid_buffer[0xcU] = 0U;
    }
    if (vlSelfRef.__VdlySet__rd_txnid_buffer__v29) {
        vlSelfRef.__PVT__rd_txnid_buffer[0xdU] = 0U;
    }
    if (vlSelfRef.__VdlySet__rd_txnid_buffer__v30) {
        vlSelfRef.__PVT__rd_txnid_buffer[0xeU] = 0U;
    }
    if (vlSelfRef.__VdlySet__rd_txnid_buffer__v31) {
        vlSelfRef.__PVT__rd_txnid_buffer[0xfU] = 0U;
    }
    vlSelfRef.__PVT__rd_txnid_buffer_bit_available 
        = vlSelfRef.__Vdly__rd_txnid_buffer_bit_available;
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v0) {
        vlSelfRef.__PVT__wr_dbid_index_buffer[0U] = vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v0;
        vlSelfRef.__PVT__wr_dbid_index_buffer[1U] = vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v1;
        vlSelfRef.__PVT__wr_dbid_index_buffer[2U] = vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v2;
        vlSelfRef.__PVT__wr_dbid_index_buffer[3U] = vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v3;
        vlSelfRef.__PVT__wr_dbid_index_buffer[4U] = vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v4;
        vlSelfRef.__PVT__wr_dbid_index_buffer[5U] = vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v5;
        vlSelfRef.__PVT__wr_dbid_index_buffer[6U] = vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v6;
        vlSelfRef.__PVT__wr_dbid_index_buffer[7U] = vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v7;
        vlSelfRef.__PVT__wr_dbid_index_buffer[8U] = vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v8;
        vlSelfRef.__PVT__wr_dbid_index_buffer[9U] = vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v9;
        vlSelfRef.__PVT__wr_dbid_index_buffer[0xaU] 
            = vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v10;
        vlSelfRef.__PVT__wr_dbid_index_buffer[0xbU] 
            = vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v11;
        vlSelfRef.__PVT__wr_dbid_index_buffer[0xcU] 
            = vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v12;
        vlSelfRef.__PVT__wr_dbid_index_buffer[0xdU] 
            = vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v13;
        vlSelfRef.__PVT__wr_dbid_index_buffer[0xeU] 
            = vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v14;
        vlSelfRef.__PVT__wr_dbid_index_buffer[0xfU] 
            = vlSelfRef.__VdlyVal__wr_dbid_index_buffer__v15;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v16) {
        vlSelfRef.__PVT__wr_dbid_index_buffer[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v17) {
        vlSelfRef.__PVT__wr_dbid_index_buffer[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v18) {
        vlSelfRef.__PVT__wr_dbid_index_buffer[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v19) {
        vlSelfRef.__PVT__wr_dbid_index_buffer[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v20) {
        vlSelfRef.__PVT__wr_dbid_index_buffer[4U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v21) {
        vlSelfRef.__PVT__wr_dbid_index_buffer[5U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v22) {
        vlSelfRef.__PVT__wr_dbid_index_buffer[6U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v23) {
        vlSelfRef.__PVT__wr_dbid_index_buffer[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v24) {
        vlSelfRef.__PVT__wr_dbid_index_buffer[8U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v25) {
        vlSelfRef.__PVT__wr_dbid_index_buffer[9U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v26) {
        vlSelfRef.__PVT__wr_dbid_index_buffer[0xaU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v27) {
        vlSelfRef.__PVT__wr_dbid_index_buffer[0xbU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v28) {
        vlSelfRef.__PVT__wr_dbid_index_buffer[0xcU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v29) {
        vlSelfRef.__PVT__wr_dbid_index_buffer[0xdU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v30) {
        vlSelfRef.__PVT__wr_dbid_index_buffer[0xeU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v31) {
        vlSelfRef.__PVT__wr_dbid_index_buffer[0xfU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v0) {
        vlSelfRef.__PVT__wr_dbid_buffer[0U] = vlSelfRef.__VdlyVal__wr_dbid_buffer__v0;
        vlSelfRef.__PVT__wr_dbid_buffer[1U] = vlSelfRef.__VdlyVal__wr_dbid_buffer__v1;
        vlSelfRef.__PVT__wr_dbid_buffer[2U] = vlSelfRef.__VdlyVal__wr_dbid_buffer__v2;
        vlSelfRef.__PVT__wr_dbid_buffer[3U] = vlSelfRef.__VdlyVal__wr_dbid_buffer__v3;
        vlSelfRef.__PVT__wr_dbid_buffer[4U] = vlSelfRef.__VdlyVal__wr_dbid_buffer__v4;
        vlSelfRef.__PVT__wr_dbid_buffer[5U] = vlSelfRef.__VdlyVal__wr_dbid_buffer__v5;
        vlSelfRef.__PVT__wr_dbid_buffer[6U] = vlSelfRef.__VdlyVal__wr_dbid_buffer__v6;
        vlSelfRef.__PVT__wr_dbid_buffer[7U] = vlSelfRef.__VdlyVal__wr_dbid_buffer__v7;
        vlSelfRef.__PVT__wr_dbid_buffer[8U] = vlSelfRef.__VdlyVal__wr_dbid_buffer__v8;
        vlSelfRef.__PVT__wr_dbid_buffer[9U] = vlSelfRef.__VdlyVal__wr_dbid_buffer__v9;
        vlSelfRef.__PVT__wr_dbid_buffer[0xaU] = vlSelfRef.__VdlyVal__wr_dbid_buffer__v10;
        vlSelfRef.__PVT__wr_dbid_buffer[0xbU] = vlSelfRef.__VdlyVal__wr_dbid_buffer__v11;
        vlSelfRef.__PVT__wr_dbid_buffer[0xcU] = vlSelfRef.__VdlyVal__wr_dbid_buffer__v12;
        vlSelfRef.__PVT__wr_dbid_buffer[0xdU] = vlSelfRef.__VdlyVal__wr_dbid_buffer__v13;
        vlSelfRef.__PVT__wr_dbid_buffer[0xeU] = vlSelfRef.__VdlyVal__wr_dbid_buffer__v14;
        vlSelfRef.__PVT__wr_dbid_buffer[0xfU] = vlSelfRef.__VdlyVal__wr_dbid_buffer__v15;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v16) {
        vlSelfRef.__PVT__wr_dbid_buffer[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v17) {
        vlSelfRef.__PVT__wr_dbid_buffer[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v18) {
        vlSelfRef.__PVT__wr_dbid_buffer[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v19) {
        vlSelfRef.__PVT__wr_dbid_buffer[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v20) {
        vlSelfRef.__PVT__wr_dbid_buffer[4U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v21) {
        vlSelfRef.__PVT__wr_dbid_buffer[5U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v22) {
        vlSelfRef.__PVT__wr_dbid_buffer[6U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v23) {
        vlSelfRef.__PVT__wr_dbid_buffer[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v24) {
        vlSelfRef.__PVT__wr_dbid_buffer[8U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v25) {
        vlSelfRef.__PVT__wr_dbid_buffer[9U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v26) {
        vlSelfRef.__PVT__wr_dbid_buffer[0xaU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v27) {
        vlSelfRef.__PVT__wr_dbid_buffer[0xbU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v28) {
        vlSelfRef.__PVT__wr_dbid_buffer[0xcU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v29) {
        vlSelfRef.__PVT__wr_dbid_buffer[0xdU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v30) {
        vlSelfRef.__PVT__wr_dbid_buffer[0xeU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_dbid_index_buffer__v31) {
        vlSelfRef.__PVT__wr_dbid_buffer[0xfU] = 0U;
    }
    vlSelfRef.__PVT__wr_dbid_index_buffer_bit = vlSelfRef.__Vdly__wr_dbid_index_buffer_bit;
    vlSelfRef.__PVT__wr_req_sent = vlSelfRef.__Vdly__wr_req_sent;
    vlSelfRef.__PVT__store_outstanding_rd_reqf_buffer_pointer 
        = vlSelfRef.__Vdly__store_outstanding_rd_reqf_buffer_pointer;
    vlSelfRef.__PVT__rd_reqf_buffer_bit_available = vlSelfRef.__Vdly__rd_reqf_buffer_bit_available;
    if (vlSelfRef.__VdlySet__rd_reqf_buffer__v0) {
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [0U], vlSelfRef.__VdlyVal__rd_reqf_buffer__v0);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [1U], vlSelfRef.__VdlyVal__rd_reqf_buffer__v1);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [2U], vlSelfRef.__VdlyVal__rd_reqf_buffer__v2);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [3U], vlSelfRef.__VdlyVal__rd_reqf_buffer__v3);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [4U], vlSelfRef.__VdlyVal__rd_reqf_buffer__v4);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [5U], vlSelfRef.__VdlyVal__rd_reqf_buffer__v5);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [6U], vlSelfRef.__VdlyVal__rd_reqf_buffer__v6);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [7U], vlSelfRef.__VdlyVal__rd_reqf_buffer__v7);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [8U], vlSelfRef.__VdlyVal__rd_reqf_buffer__v8);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [9U], vlSelfRef.__VdlyVal__rd_reqf_buffer__v9);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [0xaU], vlSelfRef.__VdlyVal__rd_reqf_buffer__v10);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [0xbU], vlSelfRef.__VdlyVal__rd_reqf_buffer__v11);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [0xcU], vlSelfRef.__VdlyVal__rd_reqf_buffer__v12);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [0xdU], vlSelfRef.__VdlyVal__rd_reqf_buffer__v13);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [0xeU], vlSelfRef.__VdlyVal__rd_reqf_buffer__v14);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [0xfU], vlSelfRef.__VdlyVal__rd_reqf_buffer__v15);
    }
    if (vlSelfRef.__VdlySet__rd_reqf_buffer__v16) {
        VL_CONST_W_1X(154,__Vtemp_1,0x00000000);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [0U], __Vtemp_1);
    }
    if (vlSelfRef.__VdlySet__rd_reqf_buffer__v17) {
        VL_CONST_W_1X(154,__Vtemp_2,0x00000000);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [1U], __Vtemp_2);
    }
    if (vlSelfRef.__VdlySet__rd_reqf_buffer__v18) {
        VL_CONST_W_1X(154,__Vtemp_3,0x00000000);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [2U], __Vtemp_3);
    }
    if (vlSelfRef.__VdlySet__rd_reqf_buffer__v19) {
        VL_CONST_W_1X(154,__Vtemp_4,0x00000000);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [3U], __Vtemp_4);
    }
    if (vlSelfRef.__VdlySet__rd_reqf_buffer__v20) {
        VL_CONST_W_1X(154,__Vtemp_5,0x00000000);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [4U], __Vtemp_5);
    }
    if (vlSelfRef.__VdlySet__rd_reqf_buffer__v21) {
        VL_CONST_W_1X(154,__Vtemp_6,0x00000000);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [5U], __Vtemp_6);
    }
    if (vlSelfRef.__VdlySet__rd_reqf_buffer__v22) {
        VL_CONST_W_1X(154,__Vtemp_7,0x00000000);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [6U], __Vtemp_7);
    }
    if (vlSelfRef.__VdlySet__rd_reqf_buffer__v23) {
        VL_CONST_W_1X(154,__Vtemp_8,0x00000000);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [7U], __Vtemp_8);
    }
    if (vlSelfRef.__VdlySet__rd_reqf_buffer__v24) {
        VL_CONST_W_1X(154,__Vtemp_9,0x00000000);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [8U], __Vtemp_9);
    }
    if (vlSelfRef.__VdlySet__rd_reqf_buffer__v25) {
        VL_CONST_W_1X(154,__Vtemp_10,0x00000000);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [9U], __Vtemp_10);
    }
    if (vlSelfRef.__VdlySet__rd_reqf_buffer__v26) {
        VL_CONST_W_1X(154,__Vtemp_11,0x00000000);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [0xaU], __Vtemp_11);
    }
    if (vlSelfRef.__VdlySet__rd_reqf_buffer__v27) {
        VL_CONST_W_1X(154,__Vtemp_12,0x00000000);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [0xbU], __Vtemp_12);
    }
    if (vlSelfRef.__VdlySet__rd_reqf_buffer__v28) {
        VL_CONST_W_1X(154,__Vtemp_13,0x00000000);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [0xcU], __Vtemp_13);
    }
    if (vlSelfRef.__VdlySet__rd_reqf_buffer__v29) {
        VL_CONST_W_1X(154,__Vtemp_14,0x00000000);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [0xdU], __Vtemp_14);
    }
    if (vlSelfRef.__VdlySet__rd_reqf_buffer__v30) {
        VL_CONST_W_1X(154,__Vtemp_15,0x00000000);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [0xeU], __Vtemp_15);
    }
    if (vlSelfRef.__VdlySet__rd_reqf_buffer__v31) {
        VL_CONST_W_1X(154,__Vtemp_16,0x00000000);
        VL_ASSIGN_W(154,vlSelfRef.__PVT__rd_reqf_buffer
                    [0xfU], __Vtemp_16);
    }
    vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer 
        = vlSelfRef.__Vdly__select_outstanding_rd_reqf_buffer_pointer;
    vlSelfRef.__PVT__store_wr_data_index_buffer_pointer 
        = vlSelfRef.__Vdly__store_wr_data_index_buffer_pointer;
    vlSelfRef.__PVT__wr_data_index_buffer_bit = vlSelfRef.__Vdly__wr_data_index_buffer_bit;
    vlSelfRef.__PVT__select_wr_data_index_buffer_pointer 
        = vlSelfRef.__Vdly__select_wr_data_index_buffer_pointer;
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v0) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [0U], vlSelfRef.__VdlyVal__wr_data_buffer__v0);
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [1U], vlSelfRef.__VdlyVal__wr_data_buffer__v1);
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [2U], vlSelfRef.__VdlyVal__wr_data_buffer__v2);
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [3U], vlSelfRef.__VdlyVal__wr_data_buffer__v3);
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [4U], vlSelfRef.__VdlyVal__wr_data_buffer__v4);
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [5U], vlSelfRef.__VdlyVal__wr_data_buffer__v5);
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [6U], vlSelfRef.__VdlyVal__wr_data_buffer__v6);
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [7U], vlSelfRef.__VdlyVal__wr_data_buffer__v7);
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [8U], vlSelfRef.__VdlyVal__wr_data_buffer__v8);
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [9U], vlSelfRef.__VdlyVal__wr_data_buffer__v9);
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [0xaU], vlSelfRef.__VdlyVal__wr_data_buffer__v10);
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [0xbU], vlSelfRef.__VdlyVal__wr_data_buffer__v11);
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [0xcU], vlSelfRef.__VdlyVal__wr_data_buffer__v12);
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [0xdU], vlSelfRef.__VdlyVal__wr_data_buffer__v13);
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [0xeU], vlSelfRef.__VdlyVal__wr_data_buffer__v14);
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [0xfU], vlSelfRef.__VdlyVal__wr_data_buffer__v15);
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v16) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [0U], Vsig_topology_top__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v17) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [1U], Vsig_topology_top__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v18) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [2U], Vsig_topology_top__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v19) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [3U], Vsig_topology_top__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v20) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [4U], Vsig_topology_top__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v21) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [5U], Vsig_topology_top__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v22) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [6U], Vsig_topology_top__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v23) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [7U], Vsig_topology_top__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v24) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [8U], Vsig_topology_top__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v25) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [9U], Vsig_topology_top__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v26) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [0xaU], Vsig_topology_top__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v27) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [0xbU], Vsig_topology_top__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v28) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [0xcU], Vsig_topology_top__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v29) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [0xdU], Vsig_topology_top__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v30) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [0xeU], Vsig_topology_top__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v31) {
        VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_buffer
                    [0xfU], Vsig_topology_top__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v0) {
        vlSelfRef.__PVT__wr_be_buffer[0U] = vlSelfRef.__VdlyVal__wr_be_buffer__v0;
        vlSelfRef.__PVT__wr_be_buffer[1U] = vlSelfRef.__VdlyVal__wr_be_buffer__v1;
        vlSelfRef.__PVT__wr_be_buffer[2U] = vlSelfRef.__VdlyVal__wr_be_buffer__v2;
        vlSelfRef.__PVT__wr_be_buffer[3U] = vlSelfRef.__VdlyVal__wr_be_buffer__v3;
        vlSelfRef.__PVT__wr_be_buffer[4U] = vlSelfRef.__VdlyVal__wr_be_buffer__v4;
        vlSelfRef.__PVT__wr_be_buffer[5U] = vlSelfRef.__VdlyVal__wr_be_buffer__v5;
        vlSelfRef.__PVT__wr_be_buffer[6U] = vlSelfRef.__VdlyVal__wr_be_buffer__v6;
        vlSelfRef.__PVT__wr_be_buffer[7U] = vlSelfRef.__VdlyVal__wr_be_buffer__v7;
        vlSelfRef.__PVT__wr_be_buffer[8U] = vlSelfRef.__VdlyVal__wr_be_buffer__v8;
        vlSelfRef.__PVT__wr_be_buffer[9U] = vlSelfRef.__VdlyVal__wr_be_buffer__v9;
        vlSelfRef.__PVT__wr_be_buffer[0xaU] = vlSelfRef.__VdlyVal__wr_be_buffer__v10;
        vlSelfRef.__PVT__wr_be_buffer[0xbU] = vlSelfRef.__VdlyVal__wr_be_buffer__v11;
        vlSelfRef.__PVT__wr_be_buffer[0xcU] = vlSelfRef.__VdlyVal__wr_be_buffer__v12;
        vlSelfRef.__PVT__wr_be_buffer[0xdU] = vlSelfRef.__VdlyVal__wr_be_buffer__v13;
        vlSelfRef.__PVT__wr_be_buffer[0xeU] = vlSelfRef.__VdlyVal__wr_be_buffer__v14;
        vlSelfRef.__PVT__wr_be_buffer[0xfU] = vlSelfRef.__VdlyVal__wr_be_buffer__v15;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v16) {
        vlSelfRef.__PVT__wr_be_buffer[0U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v17) {
        vlSelfRef.__PVT__wr_be_buffer[1U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v18) {
        vlSelfRef.__PVT__wr_be_buffer[2U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v19) {
        vlSelfRef.__PVT__wr_be_buffer[3U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v20) {
        vlSelfRef.__PVT__wr_be_buffer[4U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v21) {
        vlSelfRef.__PVT__wr_be_buffer[5U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v22) {
        vlSelfRef.__PVT__wr_be_buffer[6U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v23) {
        vlSelfRef.__PVT__wr_be_buffer[7U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v24) {
        vlSelfRef.__PVT__wr_be_buffer[8U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v25) {
        vlSelfRef.__PVT__wr_be_buffer[9U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v26) {
        vlSelfRef.__PVT__wr_be_buffer[0xaU] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v27) {
        vlSelfRef.__PVT__wr_be_buffer[0xbU] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v28) {
        vlSelfRef.__PVT__wr_be_buffer[0xcU] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v29) {
        vlSelfRef.__PVT__wr_be_buffer[0xdU] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v30) {
        vlSelfRef.__PVT__wr_be_buffer[0xeU] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v31) {
        vlSelfRef.__PVT__wr_be_buffer[0xfU] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v0) {
        vlSelfRef.__PVT__wr_data_index_buffer[0U] = vlSelfRef.__VdlyVal__wr_data_index_buffer__v0;
        vlSelfRef.__PVT__wr_data_index_buffer[1U] = vlSelfRef.__VdlyVal__wr_data_index_buffer__v1;
        vlSelfRef.__PVT__wr_data_index_buffer[2U] = vlSelfRef.__VdlyVal__wr_data_index_buffer__v2;
        vlSelfRef.__PVT__wr_data_index_buffer[3U] = vlSelfRef.__VdlyVal__wr_data_index_buffer__v3;
        vlSelfRef.__PVT__wr_data_index_buffer[4U] = vlSelfRef.__VdlyVal__wr_data_index_buffer__v4;
        vlSelfRef.__PVT__wr_data_index_buffer[5U] = vlSelfRef.__VdlyVal__wr_data_index_buffer__v5;
        vlSelfRef.__PVT__wr_data_index_buffer[6U] = vlSelfRef.__VdlyVal__wr_data_index_buffer__v6;
        vlSelfRef.__PVT__wr_data_index_buffer[7U] = vlSelfRef.__VdlyVal__wr_data_index_buffer__v7;
        vlSelfRef.__PVT__wr_data_index_buffer[8U] = vlSelfRef.__VdlyVal__wr_data_index_buffer__v8;
        vlSelfRef.__PVT__wr_data_index_buffer[9U] = vlSelfRef.__VdlyVal__wr_data_index_buffer__v9;
        vlSelfRef.__PVT__wr_data_index_buffer[0xaU] 
            = vlSelfRef.__VdlyVal__wr_data_index_buffer__v10;
        vlSelfRef.__PVT__wr_data_index_buffer[0xbU] 
            = vlSelfRef.__VdlyVal__wr_data_index_buffer__v11;
        vlSelfRef.__PVT__wr_data_index_buffer[0xcU] 
            = vlSelfRef.__VdlyVal__wr_data_index_buffer__v12;
        vlSelfRef.__PVT__wr_data_index_buffer[0xdU] 
            = vlSelfRef.__VdlyVal__wr_data_index_buffer__v13;
        vlSelfRef.__PVT__wr_data_index_buffer[0xeU] 
            = vlSelfRef.__VdlyVal__wr_data_index_buffer__v14;
        vlSelfRef.__PVT__wr_data_index_buffer[0xfU] 
            = vlSelfRef.__VdlyVal__wr_data_index_buffer__v15;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v16) {
        vlSelfRef.__PVT__wr_data_index_buffer[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v17) {
        vlSelfRef.__PVT__wr_data_index_buffer[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v18) {
        vlSelfRef.__PVT__wr_data_index_buffer[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v19) {
        vlSelfRef.__PVT__wr_data_index_buffer[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v20) {
        vlSelfRef.__PVT__wr_data_index_buffer[4U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v21) {
        vlSelfRef.__PVT__wr_data_index_buffer[5U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v22) {
        vlSelfRef.__PVT__wr_data_index_buffer[6U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v23) {
        vlSelfRef.__PVT__wr_data_index_buffer[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v24) {
        vlSelfRef.__PVT__wr_data_index_buffer[8U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v25) {
        vlSelfRef.__PVT__wr_data_index_buffer[9U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v26) {
        vlSelfRef.__PVT__wr_data_index_buffer[0xaU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v27) {
        vlSelfRef.__PVT__wr_data_index_buffer[0xbU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v28) {
        vlSelfRef.__PVT__wr_data_index_buffer[0xcU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v29) {
        vlSelfRef.__PVT__wr_data_index_buffer[0xdU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v30) {
        vlSelfRef.__PVT__wr_data_index_buffer[0xeU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_data_index_buffer__v31) {
        vlSelfRef.__PVT__wr_data_index_buffer[0xfU] = 0U;
    }
    vlSelfRef.__PVT__wr_sent_data_bit = vlSelfRef.__Vdly__wr_sent_data_bit;
    vlSelfRef.__PVT__wr_received_sn_comp_bit = vlSelfRef.__Vdly__wr_received_sn_comp_bit;
    vlSelfRef.__PVT__wr_addr_buffer_selected = vlSelfRef.__Vdly__wr_addr_buffer_selected;
    vlSelfRef.__PVT__wr_received_dbid_bit = vlSelfRef.__Vdly__wr_received_dbid_bit;
    vlSelfRef.__PVT__wr_addr_buffer_bit_available = vlSelfRef.__Vdly__wr_addr_buffer_bit_available;
    vlSelfRef.__PVT__wr_zero_buffer = vlSelfRef.__Vdly__wr_zero_buffer;
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v0) {
        vlSelfRef.__PVT__wr_tgtid_buffer[0U] = vlSelfRef.__VdlyVal__wr_tgtid_buffer__v0;
        vlSelfRef.__PVT__wr_tgtid_buffer[1U] = vlSelfRef.__VdlyVal__wr_tgtid_buffer__v1;
        vlSelfRef.__PVT__wr_tgtid_buffer[2U] = vlSelfRef.__VdlyVal__wr_tgtid_buffer__v2;
        vlSelfRef.__PVT__wr_tgtid_buffer[3U] = vlSelfRef.__VdlyVal__wr_tgtid_buffer__v3;
        vlSelfRef.__PVT__wr_tgtid_buffer[4U] = vlSelfRef.__VdlyVal__wr_tgtid_buffer__v4;
        vlSelfRef.__PVT__wr_tgtid_buffer[5U] = vlSelfRef.__VdlyVal__wr_tgtid_buffer__v5;
        vlSelfRef.__PVT__wr_tgtid_buffer[6U] = vlSelfRef.__VdlyVal__wr_tgtid_buffer__v6;
        vlSelfRef.__PVT__wr_tgtid_buffer[7U] = vlSelfRef.__VdlyVal__wr_tgtid_buffer__v7;
        vlSelfRef.__PVT__wr_tgtid_buffer[8U] = vlSelfRef.__VdlyVal__wr_tgtid_buffer__v8;
        vlSelfRef.__PVT__wr_tgtid_buffer[9U] = vlSelfRef.__VdlyVal__wr_tgtid_buffer__v9;
        vlSelfRef.__PVT__wr_tgtid_buffer[0xaU] = vlSelfRef.__VdlyVal__wr_tgtid_buffer__v10;
        vlSelfRef.__PVT__wr_tgtid_buffer[0xbU] = vlSelfRef.__VdlyVal__wr_tgtid_buffer__v11;
        vlSelfRef.__PVT__wr_tgtid_buffer[0xcU] = vlSelfRef.__VdlyVal__wr_tgtid_buffer__v12;
        vlSelfRef.__PVT__wr_tgtid_buffer[0xdU] = vlSelfRef.__VdlyVal__wr_tgtid_buffer__v13;
        vlSelfRef.__PVT__wr_tgtid_buffer[0xeU] = vlSelfRef.__VdlyVal__wr_tgtid_buffer__v14;
        vlSelfRef.__PVT__wr_tgtid_buffer[0xfU] = vlSelfRef.__VdlyVal__wr_tgtid_buffer__v15;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v16) {
        vlSelfRef.__PVT__wr_tgtid_buffer[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v17) {
        vlSelfRef.__PVT__wr_tgtid_buffer[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v18) {
        vlSelfRef.__PVT__wr_tgtid_buffer[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v19) {
        vlSelfRef.__PVT__wr_tgtid_buffer[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v20) {
        vlSelfRef.__PVT__wr_tgtid_buffer[4U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v21) {
        vlSelfRef.__PVT__wr_tgtid_buffer[5U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v22) {
        vlSelfRef.__PVT__wr_tgtid_buffer[6U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v23) {
        vlSelfRef.__PVT__wr_tgtid_buffer[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v24) {
        vlSelfRef.__PVT__wr_tgtid_buffer[8U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v25) {
        vlSelfRef.__PVT__wr_tgtid_buffer[9U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v26) {
        vlSelfRef.__PVT__wr_tgtid_buffer[0xaU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v27) {
        vlSelfRef.__PVT__wr_tgtid_buffer[0xbU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v28) {
        vlSelfRef.__PVT__wr_tgtid_buffer[0xcU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v29) {
        vlSelfRef.__PVT__wr_tgtid_buffer[0xdU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v30) {
        vlSelfRef.__PVT__wr_tgtid_buffer[0xeU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v31) {
        vlSelfRef.__PVT__wr_tgtid_buffer[0xfU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v0) {
        vlSelfRef.__PVT__wr_txnid_buffer[0U] = vlSelfRef.__VdlyVal__wr_txnid_buffer__v0;
        vlSelfRef.__PVT__wr_txnid_buffer[1U] = vlSelfRef.__VdlyVal__wr_txnid_buffer__v1;
        vlSelfRef.__PVT__wr_txnid_buffer[2U] = vlSelfRef.__VdlyVal__wr_txnid_buffer__v2;
        vlSelfRef.__PVT__wr_txnid_buffer[3U] = vlSelfRef.__VdlyVal__wr_txnid_buffer__v3;
        vlSelfRef.__PVT__wr_txnid_buffer[4U] = vlSelfRef.__VdlyVal__wr_txnid_buffer__v4;
        vlSelfRef.__PVT__wr_txnid_buffer[5U] = vlSelfRef.__VdlyVal__wr_txnid_buffer__v5;
        vlSelfRef.__PVT__wr_txnid_buffer[6U] = vlSelfRef.__VdlyVal__wr_txnid_buffer__v6;
        vlSelfRef.__PVT__wr_txnid_buffer[7U] = vlSelfRef.__VdlyVal__wr_txnid_buffer__v7;
        vlSelfRef.__PVT__wr_txnid_buffer[8U] = vlSelfRef.__VdlyVal__wr_txnid_buffer__v8;
        vlSelfRef.__PVT__wr_txnid_buffer[9U] = vlSelfRef.__VdlyVal__wr_txnid_buffer__v9;
        vlSelfRef.__PVT__wr_txnid_buffer[0xaU] = vlSelfRef.__VdlyVal__wr_txnid_buffer__v10;
        vlSelfRef.__PVT__wr_txnid_buffer[0xbU] = vlSelfRef.__VdlyVal__wr_txnid_buffer__v11;
        vlSelfRef.__PVT__wr_txnid_buffer[0xcU] = vlSelfRef.__VdlyVal__wr_txnid_buffer__v12;
        vlSelfRef.__PVT__wr_txnid_buffer[0xdU] = vlSelfRef.__VdlyVal__wr_txnid_buffer__v13;
        vlSelfRef.__PVT__wr_txnid_buffer[0xeU] = vlSelfRef.__VdlyVal__wr_txnid_buffer__v14;
        vlSelfRef.__PVT__wr_txnid_buffer[0xfU] = vlSelfRef.__VdlyVal__wr_txnid_buffer__v15;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v16) {
        vlSelfRef.__PVT__wr_txnid_buffer[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v17) {
        vlSelfRef.__PVT__wr_txnid_buffer[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v18) {
        vlSelfRef.__PVT__wr_txnid_buffer[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v19) {
        vlSelfRef.__PVT__wr_txnid_buffer[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v20) {
        vlSelfRef.__PVT__wr_txnid_buffer[4U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v21) {
        vlSelfRef.__PVT__wr_txnid_buffer[5U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v22) {
        vlSelfRef.__PVT__wr_txnid_buffer[6U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v23) {
        vlSelfRef.__PVT__wr_txnid_buffer[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v24) {
        vlSelfRef.__PVT__wr_txnid_buffer[8U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v25) {
        vlSelfRef.__PVT__wr_txnid_buffer[9U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v26) {
        vlSelfRef.__PVT__wr_txnid_buffer[0xaU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v27) {
        vlSelfRef.__PVT__wr_txnid_buffer[0xbU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v28) {
        vlSelfRef.__PVT__wr_txnid_buffer[0xcU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v29) {
        vlSelfRef.__PVT__wr_txnid_buffer[0xdU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v30) {
        vlSelfRef.__PVT__wr_txnid_buffer[0xeU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v31) {
        vlSelfRef.__PVT__wr_txnid_buffer[0xfU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v0) {
        vlSelfRef.__PVT__wr_ns_buffer[0U] = vlSelfRef.__VdlyVal__wr_ns_buffer__v0;
        vlSelfRef.__PVT__wr_ns_buffer[1U] = vlSelfRef.__VdlyVal__wr_ns_buffer__v1;
        vlSelfRef.__PVT__wr_ns_buffer[2U] = vlSelfRef.__VdlyVal__wr_ns_buffer__v2;
        vlSelfRef.__PVT__wr_ns_buffer[3U] = vlSelfRef.__VdlyVal__wr_ns_buffer__v3;
        vlSelfRef.__PVT__wr_ns_buffer[4U] = vlSelfRef.__VdlyVal__wr_ns_buffer__v4;
        vlSelfRef.__PVT__wr_ns_buffer[5U] = vlSelfRef.__VdlyVal__wr_ns_buffer__v5;
        vlSelfRef.__PVT__wr_ns_buffer[6U] = vlSelfRef.__VdlyVal__wr_ns_buffer__v6;
        vlSelfRef.__PVT__wr_ns_buffer[7U] = vlSelfRef.__VdlyVal__wr_ns_buffer__v7;
        vlSelfRef.__PVT__wr_ns_buffer[8U] = vlSelfRef.__VdlyVal__wr_ns_buffer__v8;
        vlSelfRef.__PVT__wr_ns_buffer[9U] = vlSelfRef.__VdlyVal__wr_ns_buffer__v9;
        vlSelfRef.__PVT__wr_ns_buffer[0xaU] = vlSelfRef.__VdlyVal__wr_ns_buffer__v10;
        vlSelfRef.__PVT__wr_ns_buffer[0xbU] = vlSelfRef.__VdlyVal__wr_ns_buffer__v11;
        vlSelfRef.__PVT__wr_ns_buffer[0xcU] = vlSelfRef.__VdlyVal__wr_ns_buffer__v12;
        vlSelfRef.__PVT__wr_ns_buffer[0xdU] = vlSelfRef.__VdlyVal__wr_ns_buffer__v13;
        vlSelfRef.__PVT__wr_ns_buffer[0xeU] = vlSelfRef.__VdlyVal__wr_ns_buffer__v14;
        vlSelfRef.__PVT__wr_ns_buffer[0xfU] = vlSelfRef.__VdlyVal__wr_ns_buffer__v15;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v16) {
        vlSelfRef.__PVT__wr_ns_buffer[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v17) {
        vlSelfRef.__PVT__wr_ns_buffer[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v18) {
        vlSelfRef.__PVT__wr_ns_buffer[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v19) {
        vlSelfRef.__PVT__wr_ns_buffer[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v20) {
        vlSelfRef.__PVT__wr_ns_buffer[4U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v21) {
        vlSelfRef.__PVT__wr_ns_buffer[5U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v22) {
        vlSelfRef.__PVT__wr_ns_buffer[6U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v23) {
        vlSelfRef.__PVT__wr_ns_buffer[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v24) {
        vlSelfRef.__PVT__wr_ns_buffer[8U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v25) {
        vlSelfRef.__PVT__wr_ns_buffer[9U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v26) {
        vlSelfRef.__PVT__wr_ns_buffer[0xaU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v27) {
        vlSelfRef.__PVT__wr_ns_buffer[0xbU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v28) {
        vlSelfRef.__PVT__wr_ns_buffer[0xcU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v29) {
        vlSelfRef.__PVT__wr_ns_buffer[0xdU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v30) {
        vlSelfRef.__PVT__wr_ns_buffer[0xeU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v31) {
        vlSelfRef.__PVT__wr_ns_buffer[0xfU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v0) {
        vlSelfRef.__PVT__wr_qos_buffer[0U] = vlSelfRef.__VdlyVal__wr_qos_buffer__v0;
        vlSelfRef.__PVT__wr_qos_buffer[1U] = vlSelfRef.__VdlyVal__wr_qos_buffer__v1;
        vlSelfRef.__PVT__wr_qos_buffer[2U] = vlSelfRef.__VdlyVal__wr_qos_buffer__v2;
        vlSelfRef.__PVT__wr_qos_buffer[3U] = vlSelfRef.__VdlyVal__wr_qos_buffer__v3;
        vlSelfRef.__PVT__wr_qos_buffer[4U] = vlSelfRef.__VdlyVal__wr_qos_buffer__v4;
        vlSelfRef.__PVT__wr_qos_buffer[5U] = vlSelfRef.__VdlyVal__wr_qos_buffer__v5;
        vlSelfRef.__PVT__wr_qos_buffer[6U] = vlSelfRef.__VdlyVal__wr_qos_buffer__v6;
        vlSelfRef.__PVT__wr_qos_buffer[7U] = vlSelfRef.__VdlyVal__wr_qos_buffer__v7;
        vlSelfRef.__PVT__wr_qos_buffer[8U] = vlSelfRef.__VdlyVal__wr_qos_buffer__v8;
        vlSelfRef.__PVT__wr_qos_buffer[9U] = vlSelfRef.__VdlyVal__wr_qos_buffer__v9;
        vlSelfRef.__PVT__wr_qos_buffer[0xaU] = vlSelfRef.__VdlyVal__wr_qos_buffer__v10;
        vlSelfRef.__PVT__wr_qos_buffer[0xbU] = vlSelfRef.__VdlyVal__wr_qos_buffer__v11;
        vlSelfRef.__PVT__wr_qos_buffer[0xcU] = vlSelfRef.__VdlyVal__wr_qos_buffer__v12;
        vlSelfRef.__PVT__wr_qos_buffer[0xdU] = vlSelfRef.__VdlyVal__wr_qos_buffer__v13;
        vlSelfRef.__PVT__wr_qos_buffer[0xeU] = vlSelfRef.__VdlyVal__wr_qos_buffer__v14;
        vlSelfRef.__PVT__wr_qos_buffer[0xfU] = vlSelfRef.__VdlyVal__wr_qos_buffer__v15;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v16) {
        vlSelfRef.__PVT__wr_qos_buffer[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v17) {
        vlSelfRef.__PVT__wr_qos_buffer[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v18) {
        vlSelfRef.__PVT__wr_qos_buffer[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v19) {
        vlSelfRef.__PVT__wr_qos_buffer[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v20) {
        vlSelfRef.__PVT__wr_qos_buffer[4U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v21) {
        vlSelfRef.__PVT__wr_qos_buffer[5U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v22) {
        vlSelfRef.__PVT__wr_qos_buffer[6U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v23) {
        vlSelfRef.__PVT__wr_qos_buffer[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v24) {
        vlSelfRef.__PVT__wr_qos_buffer[8U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v25) {
        vlSelfRef.__PVT__wr_qos_buffer[9U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v26) {
        vlSelfRef.__PVT__wr_qos_buffer[0xaU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v27) {
        vlSelfRef.__PVT__wr_qos_buffer[0xbU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v28) {
        vlSelfRef.__PVT__wr_qos_buffer[0xcU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v29) {
        vlSelfRef.__PVT__wr_qos_buffer[0xdU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v30) {
        vlSelfRef.__PVT__wr_qos_buffer[0xeU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v31) {
        vlSelfRef.__PVT__wr_qos_buffer[0xfU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v0) {
        vlSelfRef.__PVT__wr_memattr_buffer[0U] = vlSelfRef.__VdlyVal__wr_memattr_buffer__v0;
        vlSelfRef.__PVT__wr_memattr_buffer[1U] = vlSelfRef.__VdlyVal__wr_memattr_buffer__v1;
        vlSelfRef.__PVT__wr_memattr_buffer[2U] = vlSelfRef.__VdlyVal__wr_memattr_buffer__v2;
        vlSelfRef.__PVT__wr_memattr_buffer[3U] = vlSelfRef.__VdlyVal__wr_memattr_buffer__v3;
        vlSelfRef.__PVT__wr_memattr_buffer[4U] = vlSelfRef.__VdlyVal__wr_memattr_buffer__v4;
        vlSelfRef.__PVT__wr_memattr_buffer[5U] = vlSelfRef.__VdlyVal__wr_memattr_buffer__v5;
        vlSelfRef.__PVT__wr_memattr_buffer[6U] = vlSelfRef.__VdlyVal__wr_memattr_buffer__v6;
        vlSelfRef.__PVT__wr_memattr_buffer[7U] = vlSelfRef.__VdlyVal__wr_memattr_buffer__v7;
        vlSelfRef.__PVT__wr_memattr_buffer[8U] = vlSelfRef.__VdlyVal__wr_memattr_buffer__v8;
        vlSelfRef.__PVT__wr_memattr_buffer[9U] = vlSelfRef.__VdlyVal__wr_memattr_buffer__v9;
        vlSelfRef.__PVT__wr_memattr_buffer[0xaU] = vlSelfRef.__VdlyVal__wr_memattr_buffer__v10;
        vlSelfRef.__PVT__wr_memattr_buffer[0xbU] = vlSelfRef.__VdlyVal__wr_memattr_buffer__v11;
        vlSelfRef.__PVT__wr_memattr_buffer[0xcU] = vlSelfRef.__VdlyVal__wr_memattr_buffer__v12;
        vlSelfRef.__PVT__wr_memattr_buffer[0xdU] = vlSelfRef.__VdlyVal__wr_memattr_buffer__v13;
        vlSelfRef.__PVT__wr_memattr_buffer[0xeU] = vlSelfRef.__VdlyVal__wr_memattr_buffer__v14;
        vlSelfRef.__PVT__wr_memattr_buffer[0xfU] = vlSelfRef.__VdlyVal__wr_memattr_buffer__v15;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v16) {
        vlSelfRef.__PVT__wr_memattr_buffer[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v17) {
        vlSelfRef.__PVT__wr_memattr_buffer[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v18) {
        vlSelfRef.__PVT__wr_memattr_buffer[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v19) {
        vlSelfRef.__PVT__wr_memattr_buffer[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v20) {
        vlSelfRef.__PVT__wr_memattr_buffer[4U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v21) {
        vlSelfRef.__PVT__wr_memattr_buffer[5U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v22) {
        vlSelfRef.__PVT__wr_memattr_buffer[6U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v23) {
        vlSelfRef.__PVT__wr_memattr_buffer[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v24) {
        vlSelfRef.__PVT__wr_memattr_buffer[8U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v25) {
        vlSelfRef.__PVT__wr_memattr_buffer[9U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v26) {
        vlSelfRef.__PVT__wr_memattr_buffer[0xaU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v27) {
        vlSelfRef.__PVT__wr_memattr_buffer[0xbU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v28) {
        vlSelfRef.__PVT__wr_memattr_buffer[0xcU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v29) {
        vlSelfRef.__PVT__wr_memattr_buffer[0xdU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v30) {
        vlSelfRef.__PVT__wr_memattr_buffer[0xeU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v31) {
        vlSelfRef.__PVT__wr_memattr_buffer[0xfU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v0) {
        vlSelfRef.__PVT__wr_addr_buffer[0U] = vlSelfRef.__VdlyVal__wr_addr_buffer__v0;
        vlSelfRef.__PVT__wr_addr_buffer[1U] = vlSelfRef.__VdlyVal__wr_addr_buffer__v1;
        vlSelfRef.__PVT__wr_addr_buffer[2U] = vlSelfRef.__VdlyVal__wr_addr_buffer__v2;
        vlSelfRef.__PVT__wr_addr_buffer[3U] = vlSelfRef.__VdlyVal__wr_addr_buffer__v3;
        vlSelfRef.__PVT__wr_addr_buffer[4U] = vlSelfRef.__VdlyVal__wr_addr_buffer__v4;
        vlSelfRef.__PVT__wr_addr_buffer[5U] = vlSelfRef.__VdlyVal__wr_addr_buffer__v5;
        vlSelfRef.__PVT__wr_addr_buffer[6U] = vlSelfRef.__VdlyVal__wr_addr_buffer__v6;
        vlSelfRef.__PVT__wr_addr_buffer[7U] = vlSelfRef.__VdlyVal__wr_addr_buffer__v7;
        vlSelfRef.__PVT__wr_addr_buffer[8U] = vlSelfRef.__VdlyVal__wr_addr_buffer__v8;
        vlSelfRef.__PVT__wr_addr_buffer[9U] = vlSelfRef.__VdlyVal__wr_addr_buffer__v9;
        vlSelfRef.__PVT__wr_addr_buffer[0xaU] = vlSelfRef.__VdlyVal__wr_addr_buffer__v10;
        vlSelfRef.__PVT__wr_addr_buffer[0xbU] = vlSelfRef.__VdlyVal__wr_addr_buffer__v11;
        vlSelfRef.__PVT__wr_addr_buffer[0xcU] = vlSelfRef.__VdlyVal__wr_addr_buffer__v12;
        vlSelfRef.__PVT__wr_addr_buffer[0xdU] = vlSelfRef.__VdlyVal__wr_addr_buffer__v13;
        vlSelfRef.__PVT__wr_addr_buffer[0xeU] = vlSelfRef.__VdlyVal__wr_addr_buffer__v14;
        vlSelfRef.__PVT__wr_addr_buffer[0xfU] = vlSelfRef.__VdlyVal__wr_addr_buffer__v15;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v16) {
        vlSelfRef.__PVT__wr_addr_buffer[0U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v17) {
        vlSelfRef.__PVT__wr_addr_buffer[1U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v18) {
        vlSelfRef.__PVT__wr_addr_buffer[2U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v19) {
        vlSelfRef.__PVT__wr_addr_buffer[3U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v20) {
        vlSelfRef.__PVT__wr_addr_buffer[4U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v21) {
        vlSelfRef.__PVT__wr_addr_buffer[5U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v22) {
        vlSelfRef.__PVT__wr_addr_buffer[6U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v23) {
        vlSelfRef.__PVT__wr_addr_buffer[7U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v24) {
        vlSelfRef.__PVT__wr_addr_buffer[8U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v25) {
        vlSelfRef.__PVT__wr_addr_buffer[9U] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v26) {
        vlSelfRef.__PVT__wr_addr_buffer[0xaU] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v27) {
        vlSelfRef.__PVT__wr_addr_buffer[0xbU] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v28) {
        vlSelfRef.__PVT__wr_addr_buffer[0xcU] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v29) {
        vlSelfRef.__PVT__wr_addr_buffer[0xdU] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v30) {
        vlSelfRef.__PVT__wr_addr_buffer[0xeU] = 0ULL;
    }
    if (vlSelfRef.__VdlySet__wr_addr_buffer__v31) {
        vlSelfRef.__PVT__wr_addr_buffer[0xfU] = 0ULL;
    }
    vlSelfRef.__PVT__wrretryack_bufv = vlSelfRef.__Vdly__wrretryack_bufv;
    if (vlSelfRef.__VdlySet__wrretryack_buf__v0) {
        vlSelfRef.__PVT__wrretryack_buf[0U] = vlSelfRef.__VdlyVal__wrretryack_buf__v0;
        vlSelfRef.__PVT__wrretryack_buf[1U] = vlSelfRef.__VdlyVal__wrretryack_buf__v1;
        vlSelfRef.__PVT__wrretryack_buf[2U] = vlSelfRef.__VdlyVal__wrretryack_buf__v2;
        vlSelfRef.__PVT__wrretryack_buf[3U] = vlSelfRef.__VdlyVal__wrretryack_buf__v3;
        vlSelfRef.__PVT__wrretryack_buf[4U] = vlSelfRef.__VdlyVal__wrretryack_buf__v4;
        vlSelfRef.__PVT__wrretryack_buf[5U] = vlSelfRef.__VdlyVal__wrretryack_buf__v5;
        vlSelfRef.__PVT__wrretryack_buf[6U] = vlSelfRef.__VdlyVal__wrretryack_buf__v6;
        vlSelfRef.__PVT__wrretryack_buf[7U] = vlSelfRef.__VdlyVal__wrretryack_buf__v7;
        vlSelfRef.__PVT__wrretryack_buf[8U] = vlSelfRef.__VdlyVal__wrretryack_buf__v8;
        vlSelfRef.__PVT__wrretryack_buf[9U] = vlSelfRef.__VdlyVal__wrretryack_buf__v9;
        vlSelfRef.__PVT__wrretryack_buf[0xaU] = vlSelfRef.__VdlyVal__wrretryack_buf__v10;
        vlSelfRef.__PVT__wrretryack_buf[0xbU] = vlSelfRef.__VdlyVal__wrretryack_buf__v11;
        vlSelfRef.__PVT__wrretryack_buf[0xcU] = vlSelfRef.__VdlyVal__wrretryack_buf__v12;
        vlSelfRef.__PVT__wrretryack_buf[0xdU] = vlSelfRef.__VdlyVal__wrretryack_buf__v13;
        vlSelfRef.__PVT__wrretryack_buf[0xeU] = vlSelfRef.__VdlyVal__wrretryack_buf__v14;
        vlSelfRef.__PVT__wrretryack_buf[0xfU] = vlSelfRef.__VdlyVal__wrretryack_buf__v15;
    }
    if (vlSelfRef.__VdlySet__wrretryack_buf__v16) {
        vlSelfRef.__PVT__wrretryack_buf[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wrretryack_buf__v17) {
        vlSelfRef.__PVT__wrretryack_buf[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wrretryack_buf__v18) {
        vlSelfRef.__PVT__wrretryack_buf[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wrretryack_buf__v19) {
        vlSelfRef.__PVT__wrretryack_buf[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wrretryack_buf__v20) {
        vlSelfRef.__PVT__wrretryack_buf[4U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wrretryack_buf__v21) {
        vlSelfRef.__PVT__wrretryack_buf[5U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wrretryack_buf__v22) {
        vlSelfRef.__PVT__wrretryack_buf[6U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wrretryack_buf__v23) {
        vlSelfRef.__PVT__wrretryack_buf[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wrretryack_buf__v24) {
        vlSelfRef.__PVT__wrretryack_buf[8U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wrretryack_buf__v25) {
        vlSelfRef.__PVT__wrretryack_buf[9U] = 0U;
    }
    if (vlSelfRef.__VdlySet__wrretryack_buf__v26) {
        vlSelfRef.__PVT__wrretryack_buf[0xaU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wrretryack_buf__v27) {
        vlSelfRef.__PVT__wrretryack_buf[0xbU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wrretryack_buf__v28) {
        vlSelfRef.__PVT__wrretryack_buf[0xcU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wrretryack_buf__v29) {
        vlSelfRef.__PVT__wrretryack_buf[0xdU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wrretryack_buf__v30) {
        vlSelfRef.__PVT__wrretryack_buf[0xeU] = 0U;
    }
    if (vlSelfRef.__VdlySet__wrretryack_buf__v31) {
        vlSelfRef.__PVT__wrretryack_buf[0xfU] = 0U;
    }
    if (vlSelfRef.__VdlySet__memrdretry_buf__v0) {
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [0U], vlSelfRef.__VdlyVal__memrdretry_buf__v0);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [1U], vlSelfRef.__VdlyVal__memrdretry_buf__v1);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [2U], vlSelfRef.__VdlyVal__memrdretry_buf__v2);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [3U], vlSelfRef.__VdlyVal__memrdretry_buf__v3);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [4U], vlSelfRef.__VdlyVal__memrdretry_buf__v4);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [5U], vlSelfRef.__VdlyVal__memrdretry_buf__v5);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [6U], vlSelfRef.__VdlyVal__memrdretry_buf__v6);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [7U], vlSelfRef.__VdlyVal__memrdretry_buf__v7);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [8U], vlSelfRef.__VdlyVal__memrdretry_buf__v8);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [9U], vlSelfRef.__VdlyVal__memrdretry_buf__v9);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [0xaU], vlSelfRef.__VdlyVal__memrdretry_buf__v10);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [0xbU], vlSelfRef.__VdlyVal__memrdretry_buf__v11);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [0xcU], vlSelfRef.__VdlyVal__memrdretry_buf__v12);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [0xdU], vlSelfRef.__VdlyVal__memrdretry_buf__v13);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [0xeU], vlSelfRef.__VdlyVal__memrdretry_buf__v14);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [0xfU], vlSelfRef.__VdlyVal__memrdretry_buf__v15);
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v16) {
        VL_CONST_W_1X(151,__Vtemp_17,0x00000000);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [0U], __Vtemp_17);
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v17) {
        VL_CONST_W_1X(151,__Vtemp_18,0x00000000);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [1U], __Vtemp_18);
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v18) {
        VL_CONST_W_1X(151,__Vtemp_19,0x00000000);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [2U], __Vtemp_19);
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v19) {
        VL_CONST_W_1X(151,__Vtemp_20,0x00000000);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [3U], __Vtemp_20);
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v20) {
        VL_CONST_W_1X(151,__Vtemp_21,0x00000000);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [4U], __Vtemp_21);
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v21) {
        VL_CONST_W_1X(151,__Vtemp_22,0x00000000);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [5U], __Vtemp_22);
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v22) {
        VL_CONST_W_1X(151,__Vtemp_23,0x00000000);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [6U], __Vtemp_23);
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v23) {
        VL_CONST_W_1X(151,__Vtemp_24,0x00000000);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [7U], __Vtemp_24);
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v24) {
        VL_CONST_W_1X(151,__Vtemp_25,0x00000000);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [8U], __Vtemp_25);
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v25) {
        VL_CONST_W_1X(151,__Vtemp_26,0x00000000);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [9U], __Vtemp_26);
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v26) {
        VL_CONST_W_1X(151,__Vtemp_27,0x00000000);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [0xaU], __Vtemp_27);
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v27) {
        VL_CONST_W_1X(151,__Vtemp_28,0x00000000);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [0xbU], __Vtemp_28);
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v28) {
        VL_CONST_W_1X(151,__Vtemp_29,0x00000000);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [0xcU], __Vtemp_29);
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v29) {
        VL_CONST_W_1X(151,__Vtemp_30,0x00000000);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [0xdU], __Vtemp_30);
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v30) {
        VL_CONST_W_1X(151,__Vtemp_31,0x00000000);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [0xeU], __Vtemp_31);
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v31) {
        VL_CONST_W_1X(151,__Vtemp_32,0x00000000);
        VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf
                    [0xfU], __Vtemp_32);
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v0) {
        vlSelfRef.__PVT__rdretryack_buf[0U] = vlSelfRef.__VdlyVal__rdretryack_buf__v0;
        vlSelfRef.__PVT__rdretryack_buf[1U] = vlSelfRef.__VdlyVal__rdretryack_buf__v1;
        vlSelfRef.__PVT__rdretryack_buf[2U] = vlSelfRef.__VdlyVal__rdretryack_buf__v2;
        vlSelfRef.__PVT__rdretryack_buf[3U] = vlSelfRef.__VdlyVal__rdretryack_buf__v3;
        vlSelfRef.__PVT__rdretryack_buf[4U] = vlSelfRef.__VdlyVal__rdretryack_buf__v4;
        vlSelfRef.__PVT__rdretryack_buf[5U] = vlSelfRef.__VdlyVal__rdretryack_buf__v5;
        vlSelfRef.__PVT__rdretryack_buf[6U] = vlSelfRef.__VdlyVal__rdretryack_buf__v6;
        vlSelfRef.__PVT__rdretryack_buf[7U] = vlSelfRef.__VdlyVal__rdretryack_buf__v7;
        vlSelfRef.__PVT__rdretryack_buf[8U] = vlSelfRef.__VdlyVal__rdretryack_buf__v8;
        vlSelfRef.__PVT__rdretryack_buf[9U] = vlSelfRef.__VdlyVal__rdretryack_buf__v9;
        vlSelfRef.__PVT__rdretryack_buf[0xaU] = vlSelfRef.__VdlyVal__rdretryack_buf__v10;
        vlSelfRef.__PVT__rdretryack_buf[0xbU] = vlSelfRef.__VdlyVal__rdretryack_buf__v11;
        vlSelfRef.__PVT__rdretryack_buf[0xcU] = vlSelfRef.__VdlyVal__rdretryack_buf__v12;
        vlSelfRef.__PVT__rdretryack_buf[0xdU] = vlSelfRef.__VdlyVal__rdretryack_buf__v13;
        vlSelfRef.__PVT__rdretryack_buf[0xeU] = vlSelfRef.__VdlyVal__rdretryack_buf__v14;
        vlSelfRef.__PVT__rdretryack_buf[0xfU] = vlSelfRef.__VdlyVal__rdretryack_buf__v15;
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v16) {
        vlSelfRef.__PVT__rdretryack_buf[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v17) {
        vlSelfRef.__PVT__rdretryack_buf[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v18) {
        vlSelfRef.__PVT__rdretryack_buf[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v19) {
        vlSelfRef.__PVT__rdretryack_buf[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v20) {
        vlSelfRef.__PVT__rdretryack_buf[4U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v21) {
        vlSelfRef.__PVT__rdretryack_buf[5U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v22) {
        vlSelfRef.__PVT__rdretryack_buf[6U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v23) {
        vlSelfRef.__PVT__rdretryack_buf[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v24) {
        vlSelfRef.__PVT__rdretryack_buf[8U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v25) {
        vlSelfRef.__PVT__rdretryack_buf[9U] = 0U;
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v26) {
        vlSelfRef.__PVT__rdretryack_buf[0xaU] = 0U;
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v27) {
        vlSelfRef.__PVT__rdretryack_buf[0xbU] = 0U;
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v28) {
        vlSelfRef.__PVT__rdretryack_buf[0xcU] = 0U;
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v29) {
        vlSelfRef.__PVT__rdretryack_buf[0xdU] = 0U;
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v30) {
        vlSelfRef.__PVT__rdretryack_buf[0xeU] = 0U;
    }
    if (vlSelfRef.__VdlySet__rdretryack_buf__v31) {
        vlSelfRef.__PVT__rdretryack_buf[0xfU] = 0U;
    }
    vlSelfRef.__PVT__rdretryack_bufv = vlSelfRef.__Vdly__rdretryack_bufv;
    vlSelfRef.__PVT__rd_txnid_buff_full = (0U == (IData)(vlSelfRef.__PVT__rd_txnid_buffer_bit_available));
    vlSelfRef.__PVT__wr_dbid_index_buffer_bit_select 
        = (((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__wr_dbid_index_buffer_bit))) 
           & (IData)(vlSelfRef.__PVT__wr_dbid_index_buffer_bit));
    vlSelfRef.__PVT__outstanding_rd_reqf_bit = (0xffffU 
                                                != (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available));
    vlSelfRef.__PVT__rd_reqf_buff_full = (0U == (IData)(vlSelfRef.__PVT__rd_reqf_buffer_bit_available));
    VL_ASSIGN_W(154,vlSelfRef.__PVT__outstanding_rd_reqf, 
                vlSelfRef.__PVT__rd_reqf_buffer[vlSelfRef.__PVT__select_outstanding_rd_reqf_buffer_pointer]);
    vlSelfRef.__PVT__slc_wrdatabuf_hasroom = (0xffffU 
                                              != (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit));
    vlSelfRef.__PVT__clear_wr_buffer = ((IData)(vlSelfRef.__PVT__wr_sent_data_bit) 
                                        & (IData)(vlSelfRef.__PVT__wr_received_sn_comp_bit));
    vlSelfRef.__PVT__wr_addr_buff_full = (0U == (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available));
    vlSelfRef.__PVT__wrretrybuf_full = VL_REDAND_II(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv));
    vlSelfRef.__PVT__rdretrybuf_full = VL_REDAND_II(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv));
    vlSelfRef.__PVT__wr_buffer_index = (VL_REDOR_I((IData)(vlSelfRef.__PVT__wr_dbid_index_buffer_bit))
                                         ? ([&]() {
                vlSelfRef.__Vfunc_clog2_addr__4__set_bit_location 
                    = vlSelfRef.__PVT__wr_dbid_index_buffer_bit_select;
                vlSelf->__Vfunc_clog2_addr__4__unnamedblk3__DOT__i = 0;
                const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                vlSelf->__Vfunc_clog2_addr__4__clog2_addr_temp_mul = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11645976795372251425ull);
                vlSelf->__Vfunc_clog2_addr__4__clog2_addr_temp_add = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 4559349454408815887ull);
                vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout = 0U;
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul = 0U;
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__4__unnamedblk3__DOT__i = 1U;
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul 
                    = VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__set_bit_location), 1U)));
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__4__unnamedblk3__DOT__i = 2U;
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul 
                    = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__set_bit_location), 2U))), 1U);
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__4__unnamedblk3__DOT__i = 3U;
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul 
                    = ((IData)(3U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__set_bit_location), 3U))));
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__4__unnamedblk3__DOT__i = 4U;
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul 
                    = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__set_bit_location), 4U))), 2U);
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__4__unnamedblk3__DOT__i = 5U;
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul 
                    = ((IData)(5U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__set_bit_location), 5U))));
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__4__unnamedblk3__DOT__i = 6U;
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul 
                    = ((IData)(6U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__set_bit_location), 6U))));
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__4__unnamedblk3__DOT__i = 7U;
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul 
                    = ((IData)(7U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__set_bit_location), 7U))));
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__4__unnamedblk3__DOT__i = 8U;
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul 
                    = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__set_bit_location), 8U))), 3U);
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__4__unnamedblk3__DOT__i = 9U;
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul 
                    = ((IData)(9U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__set_bit_location), 9U))));
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__4__unnamedblk3__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul 
                    = ((IData)(0xaU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__set_bit_location), 0xaU))));
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__4__unnamedblk3__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul 
                    = ((IData)(0xbU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__set_bit_location), 0xbU))));
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__4__unnamedblk3__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul 
                    = ((IData)(0xcU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__set_bit_location), 0xcU))));
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__4__unnamedblk3__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul 
                    = ((IData)(0xdU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__set_bit_location), 0xdU))));
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__4__unnamedblk3__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul 
                    = ((IData)(0xeU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__set_bit_location), 0xeU))));
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__4__unnamedblk3__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul 
                    = ((IData)(0xfU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__set_bit_location), 0xfU))));
                vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__4__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__4__unnamedblk3__DOT__i = 0x10U;
            }(), (IData)(vlSelfRef.__Vfunc_clog2_addr__4__Vfuncout))
                                         : 0U);
    VL_CONST_W_5X(160,__Vtemp_33,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 154, __Vtemp_34, vlSelfRef.__PVT__outstanding_rd_reqf, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__outstanding_rd_reqf_s, __Vtemp_33, __Vtemp_34);
    VL_ASSIGN_W(512,vlSelfRef.__PVT__wr_data_tx_datf, 
                vlSelfRef.__PVT__wr_data_buffer[vlSelfRef.__PVT__wr_buffer_index]);
    vlSelfRef.__PVT__wr_be_tx_datf = vlSelfRef.__PVT__wr_be_buffer
        [vlSelfRef.__PVT__wr_buffer_index];
    vlSelfRef.__PVT__wr_qos_tx_datf = vlSelfRef.__PVT__wr_qos_buffer
        [vlSelfRef.__PVT__wr_buffer_index];
    vlSelfRef.__PVT__wr_dbid_tx_datf = vlSelfRef.__PVT__wr_dbid_buffer
        [vlSelfRef.__PVT__wr_buffer_index];
    vlSelfRef.__PVT__wr_addr_for_tx_datf = vlSelfRef.__PVT__wr_addr_buffer
        [vlSelfRef.__PVT__wr_buffer_index];
    vlSelfRef.__PVT__is_wr_zero_dat = (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), (IData)(vlSelfRef.__PVT__wr_buffer_index)));
    vlSelfRef.__PVT__outstand_req_cmo = (((0xaU == 
                                           (0x7fU & 
                                            VL_SEL_IWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x3eU, 7))) 
                                          | (9U == 
                                             (0x7fU 
                                              & VL_SEL_IWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x3eU, 7)))) 
                                         | (8U == (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x3eU, 7))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__outstanding_wr_match_outstanding_rd, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [0U], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0U) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0U))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__outstanding_wr_match_outstanding_rd, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 1U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [1U], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 1U) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 1U))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__outstanding_wr_match_outstanding_rd, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 2U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [2U], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 2U) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 2U))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__outstanding_wr_match_outstanding_rd, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 3U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [3U], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 3U) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 3U))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__outstanding_wr_match_outstanding_rd, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 4U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [4U], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 4U) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 4U))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__outstanding_wr_match_outstanding_rd, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 5U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [5U], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 5U) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 5U))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__outstanding_wr_match_outstanding_rd, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 6U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [6U], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 6U) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 6U))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__outstanding_wr_match_outstanding_rd, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 7U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [7U], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 7U) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 7U))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__outstanding_wr_match_outstanding_rd, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 8U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [8U], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 8U) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 8U))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__outstanding_wr_match_outstanding_rd, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 9U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [9U], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 9U) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 9U))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__outstanding_wr_match_outstanding_rd, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xaU)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [0xaU], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xaU) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xaU))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__outstanding_wr_match_outstanding_rd, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xbU)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [0xbU], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xbU) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xbU))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__outstanding_wr_match_outstanding_rd, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xcU)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [0xcU], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xcU) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xcU))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__outstanding_wr_match_outstanding_rd, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xdU)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [0xdU], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xdU) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xdU))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__outstanding_wr_match_outstanding_rd, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xeU)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [0xeU], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xeU) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xeU))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__outstanding_wr_match_outstanding_rd, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xfU)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [0xfU], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__outstanding_rd_reqf_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xfU) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xfU))));
    vlSelfRef.__PVT__outstanding_rd_reqf_ready = (0U 
                                                  == (IData)(vlSelfRef.__PVT__outstanding_wr_match_outstanding_rd));
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi20___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__3(Vsig_topology_top_sig_slc_bypass__pi20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi20___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ic_RX_RSPLCRDV = vlSelfRef.__PVT__ic_RX_RSPLCRDV;
    vlSelfRef.__Vdly__ic_RX_DATLCRDV = vlSelfRef.__PVT__ic_RX_DATLCRDV;
    if (vlSelfRef.__PVT__rstb_slc_bypass_clk) {
        vlSelfRef.__Vdly__ic_RX_RSPLCRDV = vlSelfRef.__PVT__drive_xLCRDV_rsp;
        vlSelfRef.__Vdly__ic_RX_DATLCRDV = vlSelfRef.__PVT__drive_xLCRDV_dat;
    } else {
        vlSelfRef.__Vdly__ic_RX_RSPLCRDV = 0U;
        vlSelfRef.__Vdly__ic_RX_DATLCRDV = 0U;
    }
    vlSelfRef.__PVT__ic_RX_RSPLCRDV = vlSelfRef.__Vdly__ic_RX_RSPLCRDV;
    vlSelfRef.__PVT__ic_RX_DATLCRDV = vlSelfRef.__Vdly__ic_RX_DATLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__0(Vsig_topology_top_sig_slc_bypass__pi20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__outstanding_wr_addr_match, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [0U], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0U) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0U))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__outstanding_wr_addr_match, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 1U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [1U], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 1U) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 1U))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__outstanding_wr_addr_match, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 2U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [2U], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 2U) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 2U))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__outstanding_wr_addr_match, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 3U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [3U], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 3U) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 3U))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__outstanding_wr_addr_match, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 4U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [4U], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 4U) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 4U))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__outstanding_wr_addr_match, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 5U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [5U], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 5U) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 5U))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__outstanding_wr_addr_match, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 6U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [6U], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 6U) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 6U))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__outstanding_wr_addr_match, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 7U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [7U], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 7U) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 7U))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__outstanding_wr_addr_match, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 8U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [8U], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 8U) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 8U))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__outstanding_wr_addr_match, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 9U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [9U], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 9U) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 9U))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__outstanding_wr_addr_match, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xaU)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [0xaU], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xaU) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xaU))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__outstanding_wr_addr_match, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xbU)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [0xbU], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xbU) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xbU))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__outstanding_wr_addr_match, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xcU)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [0xcU], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xcU) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xcU))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__outstanding_wr_addr_match, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xdU)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [0xdU], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xdU) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xdU))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__outstanding_wr_addr_match, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xeU)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [0xeU], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xeU) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xeU))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__outstanding_wr_addr_match, 
                    (((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_addr_buffer_bit_available), 0xfU)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, 
                                                          vlSelfRef.__PVT__wr_addr_buffer
                                                          [0xfU], 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqflit_fifo_s, 0x4eU, 46)))) 
                     & (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xfU) 
                        | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), 0xfU))));
    vlSelfRef.__Vfunc_clog2_addr__2__set_bit_location 
        = vlSelfRef.__PVT__outstanding_wr_addr_match;
    vlSelf->__Vfunc_clog2_addr__2__unnamedblk3__DOT__i = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_clog2_addr__2__clog2_addr_temp_mul = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10435286699025179151ull);
    vlSelf->__Vfunc_clog2_addr__2__clog2_addr_temp_add = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 12299664142516486782ull);
    vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout = 0U;
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul = 0U;
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__2__unnamedblk3__DOT__i = 1U;
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul 
        = VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__set_bit_location), 1U)));
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__2__unnamedblk3__DOT__i = 2U;
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul 
        = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                               (1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__set_bit_location), 2U))), 1U);
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__2__unnamedblk3__DOT__i = 3U;
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul 
        = ((IData)(3U) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__set_bit_location), 3U))));
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__2__unnamedblk3__DOT__i = 4U;
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul 
        = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                               (1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__set_bit_location), 4U))), 2U);
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__2__unnamedblk3__DOT__i = 5U;
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul 
        = ((IData)(5U) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__set_bit_location), 5U))));
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__2__unnamedblk3__DOT__i = 6U;
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul 
        = ((IData)(6U) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__set_bit_location), 6U))));
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__2__unnamedblk3__DOT__i = 7U;
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul 
        = ((IData)(7U) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__set_bit_location), 7U))));
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__2__unnamedblk3__DOT__i = 8U;
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul 
        = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                               (1U 
                                                & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__set_bit_location), 8U))), 3U);
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__2__unnamedblk3__DOT__i = 9U;
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul 
        = ((IData)(9U) * VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__set_bit_location), 9U))));
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__2__unnamedblk3__DOT__i = 0xaU;
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul 
        = ((IData)(0xaU) * VL_EXTEND_II(32,1, (1U & 
                                               VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__set_bit_location), 0xaU))));
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__2__unnamedblk3__DOT__i = 0xbU;
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul 
        = ((IData)(0xbU) * VL_EXTEND_II(32,1, (1U & 
                                               VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__set_bit_location), 0xbU))));
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__2__unnamedblk3__DOT__i = 0xcU;
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul 
        = ((IData)(0xcU) * VL_EXTEND_II(32,1, (1U & 
                                               VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__set_bit_location), 0xcU))));
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__2__unnamedblk3__DOT__i = 0xdU;
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul 
        = ((IData)(0xdU) * VL_EXTEND_II(32,1, (1U & 
                                               VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__set_bit_location), 0xdU))));
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__2__unnamedblk3__DOT__i = 0xeU;
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul 
        = ((IData)(0xeU) * VL_EXTEND_II(32,1, (1U & 
                                               VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__set_bit_location), 0xeU))));
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__2__unnamedblk3__DOT__i = 0xfU;
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul 
        = ((IData)(0xfU) * VL_EXTEND_II(32,1, (1U & 
                                               VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__set_bit_location), 0xfU))));
    vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add 
        = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout)) 
                             + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_mul)));
    vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout = (0xfU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__2__clog2_addr_temp_add, 0U, 4));
    vlSelfRef.__Vfunc_clog2_addr__2__unnamedblk3__DOT__i = 0x10U;
    vlSelfRef.__PVT__rd_reqf_matched_wr_index = vlSelfRef.__Vfunc_clog2_addr__2__Vfuncout;
    vlSelfRef.__PVT__outstanding_wr_addr_matched = 
        (0U != (IData)(vlSelfRef.__PVT__outstanding_wr_addr_match));
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__1(Vsig_topology_top_sig_slc_bypass__pi20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__rd_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0U)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__rdretryack_buf
                        [0U])));
    vlSelfRef.__PVT__unnamedblk9__DOT__rd_i = 1U;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__rd_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 1U)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__rdretryack_buf
                        [1U])));
    vlSelfRef.__PVT__unnamedblk9__DOT__rd_i = 2U;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__rd_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 2U)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__rdretryack_buf
                        [2U])));
    vlSelfRef.__PVT__unnamedblk9__DOT__rd_i = 3U;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__rd_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 3U)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__rdretryack_buf
                        [3U])));
    vlSelfRef.__PVT__unnamedblk9__DOT__rd_i = 4U;
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__rd_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 4U)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__rdretryack_buf
                        [4U])));
    vlSelfRef.__PVT__unnamedblk9__DOT__rd_i = 5U;
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__rd_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 5U)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__rdretryack_buf
                        [5U])));
    vlSelfRef.__PVT__unnamedblk9__DOT__rd_i = 6U;
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__rd_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 6U)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__rdretryack_buf
                        [6U])));
    vlSelfRef.__PVT__unnamedblk9__DOT__rd_i = 7U;
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__rd_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 7U)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__rdretryack_buf
                        [7U])));
    vlSelfRef.__PVT__unnamedblk9__DOT__rd_i = 8U;
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__rd_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 8U)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__rdretryack_buf
                        [8U])));
    vlSelfRef.__PVT__unnamedblk9__DOT__rd_i = 9U;
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__rd_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 9U)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__rdretryack_buf
                        [9U])));
    vlSelfRef.__PVT__unnamedblk9__DOT__rd_i = 0xaU;
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__rd_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0xaU)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__rdretryack_buf
                        [0xaU])));
    vlSelfRef.__PVT__unnamedblk9__DOT__rd_i = 0xbU;
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__rd_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0xbU)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__rdretryack_buf
                        [0xbU])));
    vlSelfRef.__PVT__unnamedblk9__DOT__rd_i = 0xcU;
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__rd_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0xcU)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__rdretryack_buf
                        [0xcU])));
    vlSelfRef.__PVT__unnamedblk9__DOT__rd_i = 0xdU;
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__rd_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0xdU)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__rdretryack_buf
                        [0xdU])));
    vlSelfRef.__PVT__unnamedblk9__DOT__rd_i = 0xeU;
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__rd_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0xeU)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__rdretryack_buf
                        [0xeU])));
    vlSelfRef.__PVT__unnamedblk9__DOT__rd_i = 0xfU;
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__rd_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__rdretryack_bufv), 0xfU)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__rdretryack_buf
                        [0xfU])));
    vlSelfRef.__PVT__unnamedblk9__DOT__rd_i = 0x10U;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wr_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0U)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__wrretryack_buf
                        [0U])));
    vlSelfRef.__PVT__unnamedblk9__DOT__wr_i = 1U;
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wr_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 1U)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__wrretryack_buf
                        [1U])));
    vlSelfRef.__PVT__unnamedblk9__DOT__wr_i = 2U;
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wr_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 2U)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__wrretryack_buf
                        [2U])));
    vlSelfRef.__PVT__unnamedblk9__DOT__wr_i = 3U;
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wr_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 3U)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__wrretryack_buf
                        [3U])));
    vlSelfRef.__PVT__unnamedblk9__DOT__wr_i = 4U;
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wr_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 4U)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__wrretryack_buf
                        [4U])));
    vlSelfRef.__PVT__unnamedblk9__DOT__wr_i = 5U;
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wr_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 5U)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__wrretryack_buf
                        [5U])));
    vlSelfRef.__PVT__unnamedblk9__DOT__wr_i = 6U;
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wr_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 6U)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__wrretryack_buf
                        [6U])));
    vlSelfRef.__PVT__unnamedblk9__DOT__wr_i = 7U;
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wr_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 7U)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__wrretryack_buf
                        [7U])));
    vlSelfRef.__PVT__unnamedblk9__DOT__wr_i = 8U;
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wr_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 8U)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__wrretryack_buf
                        [8U])));
    vlSelfRef.__PVT__unnamedblk9__DOT__wr_i = 9U;
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wr_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 9U)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__wrretryack_buf
                        [9U])));
    vlSelfRef.__PVT__unnamedblk9__DOT__wr_i = 0xaU;
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wr_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0xaU)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__wrretryack_buf
                        [0xaU])));
    vlSelfRef.__PVT__unnamedblk9__DOT__wr_i = 0xbU;
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wr_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0xbU)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__wrretryack_buf
                        [0xbU])));
    vlSelfRef.__PVT__unnamedblk9__DOT__wr_i = 0xcU;
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wr_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0xcU)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__wrretryack_buf
                        [0xcU])));
    vlSelfRef.__PVT__unnamedblk9__DOT__wr_i = 0xdU;
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wr_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0xdU)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__wrretryack_buf
                        [0xdU])));
    vlSelfRef.__PVT__unnamedblk9__DOT__wr_i = 0xeU;
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wr_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0xeU)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__wrretryack_buf
                        [0xeU])));
    vlSelfRef.__PVT__unnamedblk9__DOT__wr_i = 0xfU;
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wr_pcredithit, 
                    (((~ (IData)(vlSelfRef.__PVT__empty_pcredit_fifo)) 
                      & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wrretryack_bufv), 0xfU)) 
                     & ((IData)(vlSelfRef.__PVT__rddata_pcredit_fifo) 
                        == vlSelfRef.__PVT__wrretryack_buf
                        [0xfU])));
    vlSelfRef.__PVT__unnamedblk9__DOT__wr_i = 0x10U;
    vlSelfRef.__PVT__rdretrytxn_avail = VL_REDOR_I((IData)(vlSelfRef.__PVT__rd_pcredithit));
    vlSelfRef.__PVT__wrretrytxn_avail = VL_REDOR_I((IData)(vlSelfRef.__PVT__wr_pcredithit));
    vlSelfRef.__PVT__rd_pcredithit_select = ((IData)(vlSelfRef.__PVT__rdretrytxn_avail)
                                              ? (((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelfRef.__PVT__rd_pcredithit))) 
                                                 & (IData)(vlSelfRef.__PVT__rd_pcredithit))
                                              : 0U);
    vlSelfRef.__PVT__wr_pcredithit_select = ((IData)(vlSelfRef.__PVT__wrretrytxn_avail)
                                              ? (((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelfRef.__PVT__wr_pcredithit))) 
                                                 & (IData)(vlSelfRef.__PVT__wr_pcredithit))
                                              : 0U);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_cmd_s, 
                vlSelfRef.__PVT__memrdretry_buf[([&]() {
                vlSelfRef.__Vfunc_clog2_txnid__5__set_bit_location 
                    = vlSelfRef.__PVT__rd_pcredithit_select;
                vlSelf->__Vfunc_clog2_txnid__5__unnamedblk1__DOT__i = 0;
                const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                vlSelf->__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10404122928394735268ull);
                vlSelf->__Vfunc_clog2_txnid__5__clog2_txnid_temp_add = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10236838084449142575ull);
                vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout = 0U;
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul = 0U;
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__5__unnamedblk1__DOT__i = 1U;
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul 
                    = VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__set_bit_location), 1U)));
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__5__unnamedblk1__DOT__i = 2U;
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul 
                    = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__set_bit_location), 2U))), 1U);
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__5__unnamedblk1__DOT__i = 3U;
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul 
                    = ((IData)(3U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__set_bit_location), 3U))));
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__5__unnamedblk1__DOT__i = 4U;
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul 
                    = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__set_bit_location), 4U))), 2U);
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__5__unnamedblk1__DOT__i = 5U;
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul 
                    = ((IData)(5U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__set_bit_location), 5U))));
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__5__unnamedblk1__DOT__i = 6U;
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul 
                    = ((IData)(6U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__set_bit_location), 6U))));
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__5__unnamedblk1__DOT__i = 7U;
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul 
                    = ((IData)(7U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__set_bit_location), 7U))));
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__5__unnamedblk1__DOT__i = 8U;
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul 
                    = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__set_bit_location), 8U))), 3U);
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__5__unnamedblk1__DOT__i = 9U;
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul 
                    = ((IData)(9U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__set_bit_location), 9U))));
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__5__unnamedblk1__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul 
                    = ((IData)(0xaU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__set_bit_location), 0xaU))));
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__5__unnamedblk1__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul 
                    = ((IData)(0xbU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__set_bit_location), 0xbU))));
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__5__unnamedblk1__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul 
                    = ((IData)(0xcU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__set_bit_location), 0xcU))));
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__5__unnamedblk1__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul 
                    = ((IData)(0xdU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__set_bit_location), 0xdU))));
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__5__unnamedblk1__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul 
                    = ((IData)(0xeU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__set_bit_location), 0xeU))));
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__5__unnamedblk1__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul 
                    = ((IData)(0xfU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__set_bit_location), 0xfU))));
                vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_mul)));
                vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_txnid__5__clog2_txnid_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_txnid__5__unnamedblk1__DOT__i = 0x10U;
            }(), (IData)(vlSelfRef.__Vfunc_clog2_txnid__5__Vfuncout))]);
    vlSelfRef.__PVT__wr_data_buffer_index = ((IData)(vlSelfRef.__PVT__wrretrytxn_avail)
                                              ? ([&]() {
                vlSelfRef.__Vfunc_clog2_addr__3__set_bit_location 
                    = vlSelfRef.__PVT__wr_pcredithit_select;
                vlSelf->__Vfunc_clog2_addr__3__unnamedblk3__DOT__i = 0;
                const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                vlSelf->__Vfunc_clog2_addr__3__clog2_addr_temp_mul = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17333513675502855445ull);
                vlSelf->__Vfunc_clog2_addr__3__clog2_addr_temp_add = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 17379098090301226750ull);
                vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout = 0U;
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul = 0U;
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__3__unnamedblk3__DOT__i = 1U;
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul 
                    = VL_EXTEND_II(32,1, (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__set_bit_location), 1U)));
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__3__unnamedblk3__DOT__i = 2U;
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul 
                    = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__set_bit_location), 2U))), 1U);
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__3__unnamedblk3__DOT__i = 3U;
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul 
                    = ((IData)(3U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__set_bit_location), 3U))));
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__3__unnamedblk3__DOT__i = 4U;
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul 
                    = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__set_bit_location), 4U))), 2U);
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__3__unnamedblk3__DOT__i = 5U;
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul 
                    = ((IData)(5U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__set_bit_location), 5U))));
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__3__unnamedblk3__DOT__i = 6U;
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul 
                    = ((IData)(6U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__set_bit_location), 6U))));
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__3__unnamedblk3__DOT__i = 7U;
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul 
                    = ((IData)(7U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__set_bit_location), 7U))));
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__3__unnamedblk3__DOT__i = 8U;
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul 
                    = VL_SHIFTL_III(32,32,32, VL_EXTEND_II(32,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__set_bit_location), 8U))), 3U);
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__3__unnamedblk3__DOT__i = 9U;
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul 
                    = ((IData)(9U) * VL_EXTEND_II(32,1, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__set_bit_location), 9U))));
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__3__unnamedblk3__DOT__i = 0xaU;
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul 
                    = ((IData)(0xaU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__set_bit_location), 0xaU))));
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__3__unnamedblk3__DOT__i = 0xbU;
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul 
                    = ((IData)(0xbU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__set_bit_location), 0xbU))));
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__3__unnamedblk3__DOT__i = 0xcU;
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul 
                    = ((IData)(0xcU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__set_bit_location), 0xcU))));
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__3__unnamedblk3__DOT__i = 0xdU;
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul 
                    = ((IData)(0xdU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__set_bit_location), 0xdU))));
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__3__unnamedblk3__DOT__i = 0xeU;
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul 
                    = ((IData)(0xeU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__set_bit_location), 0xeU))));
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__3__unnamedblk3__DOT__i = 0xfU;
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul 
                    = ((IData)(0xfU) * VL_EXTEND_II(32,1, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__set_bit_location), 0xfU))));
                vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add 
                    = (0x1ffffffffULL & (VL_EXTEND_QI(33,4, (IData)(vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout)) 
                                         + VL_EXTEND_QI(33,32, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_mul)));
                vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout 
                    = (0xfU & VL_SEL_IQII(33, vlSelfRef.__Vfunc_clog2_addr__3__clog2_addr_temp_add, 0U, 4));
                vlSelfRef.__Vfunc_clog2_addr__3__unnamedblk3__DOT__i = 0x10U;
            }(), (IData)(vlSelfRef.__Vfunc_clog2_addr__3__Vfuncout))
                                              : vlSelfRef.__PVT__wr_data_index_buffer
                                             [vlSelfRef.__PVT__select_wr_data_index_buffer_pointer]);
    vlSelfRef.__PVT__wr_mem_qos = vlSelfRef.__PVT__wr_qos_buffer
        [vlSelfRef.__PVT__wr_data_buffer_index];
    vlSelfRef.__PVT__wr_mem_ns = vlSelfRef.__PVT__wr_ns_buffer
        [vlSelfRef.__PVT__wr_data_buffer_index];
    vlSelfRef.__PVT__wr_mem_memattr = vlSelfRef.__PVT__wr_memattr_buffer
        [vlSelfRef.__PVT__wr_data_buffer_index];
    vlSelfRef.__PVT__is_wr_zero_req = (1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_zero_buffer), (IData)(vlSelfRef.__PVT__wr_data_buffer_index)));
    vlSelfRef.__PVT__wr_mem_addr = vlSelfRef.__PVT__wr_addr_buffer
        [vlSelfRef.__PVT__wr_data_buffer_index];
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__match_inpending_wr, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 0U) 
                     & (vlSelfRef.__PVT__wr_mem_addr 
                        == vlSelfRef.__PVT__wr_addr_buffer
                        [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__match_inpending_wr, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 1U) 
                     & (vlSelfRef.__PVT__wr_mem_addr 
                        == vlSelfRef.__PVT__wr_addr_buffer
                        [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__match_inpending_wr, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 2U) 
                     & (vlSelfRef.__PVT__wr_mem_addr 
                        == vlSelfRef.__PVT__wr_addr_buffer
                        [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__match_inpending_wr, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 3U) 
                     & (vlSelfRef.__PVT__wr_mem_addr 
                        == vlSelfRef.__PVT__wr_addr_buffer
                        [3U])));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__match_inpending_wr, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 4U) 
                     & (vlSelfRef.__PVT__wr_mem_addr 
                        == vlSelfRef.__PVT__wr_addr_buffer
                        [4U])));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__match_inpending_wr, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 5U) 
                     & (vlSelfRef.__PVT__wr_mem_addr 
                        == vlSelfRef.__PVT__wr_addr_buffer
                        [5U])));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__match_inpending_wr, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 6U) 
                     & (vlSelfRef.__PVT__wr_mem_addr 
                        == vlSelfRef.__PVT__wr_addr_buffer
                        [6U])));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__match_inpending_wr, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 7U) 
                     & (vlSelfRef.__PVT__wr_mem_addr 
                        == vlSelfRef.__PVT__wr_addr_buffer
                        [7U])));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__match_inpending_wr, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 8U) 
                     & (vlSelfRef.__PVT__wr_mem_addr 
                        == vlSelfRef.__PVT__wr_addr_buffer
                        [8U])));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__match_inpending_wr, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 9U) 
                     & (vlSelfRef.__PVT__wr_mem_addr 
                        == vlSelfRef.__PVT__wr_addr_buffer
                        [9U])));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__match_inpending_wr, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 0xaU) 
                     & (vlSelfRef.__PVT__wr_mem_addr 
                        == vlSelfRef.__PVT__wr_addr_buffer
                        [0xaU])));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__match_inpending_wr, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 0xbU) 
                     & (vlSelfRef.__PVT__wr_mem_addr 
                        == vlSelfRef.__PVT__wr_addr_buffer
                        [0xbU])));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__match_inpending_wr, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 0xcU) 
                     & (vlSelfRef.__PVT__wr_mem_addr 
                        == vlSelfRef.__PVT__wr_addr_buffer
                        [0xcU])));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__match_inpending_wr, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 0xdU) 
                     & (vlSelfRef.__PVT__wr_mem_addr 
                        == vlSelfRef.__PVT__wr_addr_buffer
                        [0xdU])));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__match_inpending_wr, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 0xeU) 
                     & (vlSelfRef.__PVT__wr_mem_addr 
                        == vlSelfRef.__PVT__wr_addr_buffer
                        [0xeU])));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__match_inpending_wr, 
                    (VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 0xfU) 
                     & (vlSelfRef.__PVT__wr_mem_addr 
                        == vlSelfRef.__PVT__wr_addr_buffer
                        [0xfU])));
    vlSelfRef.__PVT__matched_inpending_wr = VL_REDOR_I((IData)(vlSelfRef.__PVT__match_inpending_wr));
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__2(Vsig_topology_top_sig_slc_bypass__pi20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cm_homeaddr_base_pm[0U] = vlSelfRef.__PVT__cm_homeaddr_base_all_pm;
    vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm[0U] 
        = vlSelfRef.__PVT__cm_homeaddr_base_pm[0U];
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__3(Vsig_topology_top_sig_slc_bypass__pi20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cm_activated_pm = (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0x1cU));
    vlSelfRef.__PVT__cm_homeaddr_limit_pm[0U] = (0x1fffffffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_EXTEND_II(29,28, 
                                                                 (0xfffffffU 
                                                                  & VL_SEL_IIII(29, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0U, 28)))));
    vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm[0U] 
        = vlSelfRef.__PVT__cm_homeaddr_limit_pm[0U];
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__6(Vsig_topology_top_sig_slc_bypass__pi20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__xy_coord_pm[0U] = vlSelfRef.__PVT__xy_coord_all_pm;
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__8(Vsig_topology_top_sig_slc_bypass__pi20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__assert_memwr_req = (((IData)(vlSelfRef.__PVT__port_has_xmt_req_crdt) 
                                          & (~ (IData)(vlSelfRef.__PVT__ic_TX_DATFLITV))) 
                                         & (((~ (IData)(vlSelfRef.__PVT__matched_inpending_wr)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__wr_data_index_buffer_bit))) 
                                            | (IData)(vlSelfRef.__PVT__wrretrytxn_avail)));
    vlSelfRef.__PVT__select_wr_data_index_buffer_pointer_nxt 
        = (0xfU & ((((~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail)) 
                     & (IData)(vlSelfRef.__PVT__assert_memwr_req)) 
                    & (0xfU == (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer)))
                    ? 0U : (((~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail)) 
                             & (IData)(vlSelfRef.__PVT__assert_memwr_req))
                             ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer))
                             : (IData)(vlSelfRef.__PVT__select_wr_data_index_buffer_pointer))));
    vlSelfRef.__PVT__clr_wrretryack_bufv = ((IData)(vlSelfRef.__PVT__assert_memwr_req)
                                             ? (IData)(vlSelfRef.__PVT__wr_pcredithit_select)
                                             : 0U);
    vlSelfRef.__PVT__rst_wr_data_index_buffer = ((~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail)) 
                                                 & (IData)(vlSelfRef.__PVT__assert_memwr_req));
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__10(Vsig_topology_top_sig_slc_bypass__pi20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wr_received_sn_comp_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_comp_buff) 
                            & (0U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_sn_comp_bit), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wr_received_sn_comp_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_comp_buff) 
                            & (1U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 1U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_sn_comp_bit), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wr_received_sn_comp_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_comp_buff) 
                            & (2U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 2U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_sn_comp_bit), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wr_received_sn_comp_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_comp_buff) 
                            & (3U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 3U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_sn_comp_bit), 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wr_received_sn_comp_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_comp_buff) 
                            & (4U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 4U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_sn_comp_bit), 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wr_received_sn_comp_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_comp_buff) 
                            & (5U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 5U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_sn_comp_bit), 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wr_received_sn_comp_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_comp_buff) 
                            & (6U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 6U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_sn_comp_bit), 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wr_received_sn_comp_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_comp_buff) 
                            & (7U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 7U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_sn_comp_bit), 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wr_received_sn_comp_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_comp_buff) 
                            & (8U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 8U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_sn_comp_bit), 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wr_received_sn_comp_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_comp_buff) 
                            & (9U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 9U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_sn_comp_bit), 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wr_received_sn_comp_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_comp_buff) 
                            & (0xaU == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xaU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_sn_comp_bit), 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wr_received_sn_comp_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_comp_buff) 
                            & (0xbU == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xbU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_sn_comp_bit), 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wr_received_sn_comp_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_comp_buff) 
                            & (0xcU == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xcU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_sn_comp_bit), 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wr_received_sn_comp_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_comp_buff) 
                            & (0xdU == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xdU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_sn_comp_bit), 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wr_received_sn_comp_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_comp_buff) 
                            & (0xeU == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xeU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_sn_comp_bit), 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wr_received_sn_comp_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_comp_buff) 
                            & (0xfU == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xfU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_sn_comp_bit), 0xfU)))));
    vlSelfRef.__PVT__wr_dbid_buffer_nxt[0U] = (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))
                                                ? (IData)(vlSelfRef.__PVT__dbid_from_slavemem)
                                                : vlSelfRef.__PVT__wr_dbid_buffer
                                               [0U]);
    vlSelfRef.__PVT__wr_dbid_buffer_nxt[1U] = (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                                                & (1U 
                                                   == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))
                                                ? (IData)(vlSelfRef.__PVT__dbid_from_slavemem)
                                                : vlSelfRef.__PVT__wr_dbid_buffer
                                               [1U]);
    vlSelfRef.__PVT__wr_dbid_buffer_nxt[2U] = (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))
                                                ? (IData)(vlSelfRef.__PVT__dbid_from_slavemem)
                                                : vlSelfRef.__PVT__wr_dbid_buffer
                                               [2U]);
    vlSelfRef.__PVT__wr_dbid_buffer_nxt[3U] = (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                                                & (3U 
                                                   == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))
                                                ? (IData)(vlSelfRef.__PVT__dbid_from_slavemem)
                                                : vlSelfRef.__PVT__wr_dbid_buffer
                                               [3U]);
    vlSelfRef.__PVT__wr_dbid_buffer_nxt[4U] = (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                                                & (4U 
                                                   == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))
                                                ? (IData)(vlSelfRef.__PVT__dbid_from_slavemem)
                                                : vlSelfRef.__PVT__wr_dbid_buffer
                                               [4U]);
    vlSelfRef.__PVT__wr_dbid_buffer_nxt[5U] = (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                                                & (5U 
                                                   == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))
                                                ? (IData)(vlSelfRef.__PVT__dbid_from_slavemem)
                                                : vlSelfRef.__PVT__wr_dbid_buffer
                                               [5U]);
    vlSelfRef.__PVT__wr_dbid_buffer_nxt[6U] = (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                                                & (6U 
                                                   == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))
                                                ? (IData)(vlSelfRef.__PVT__dbid_from_slavemem)
                                                : vlSelfRef.__PVT__wr_dbid_buffer
                                               [6U]);
    vlSelfRef.__PVT__wr_dbid_buffer_nxt[7U] = (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                                                & (7U 
                                                   == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))
                                                ? (IData)(vlSelfRef.__PVT__dbid_from_slavemem)
                                                : vlSelfRef.__PVT__wr_dbid_buffer
                                               [7U]);
    vlSelfRef.__PVT__wr_dbid_buffer_nxt[8U] = (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                                                & (8U 
                                                   == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))
                                                ? (IData)(vlSelfRef.__PVT__dbid_from_slavemem)
                                                : vlSelfRef.__PVT__wr_dbid_buffer
                                               [8U]);
    vlSelfRef.__PVT__wr_dbid_buffer_nxt[9U] = (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                                                & (9U 
                                                   == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))
                                                ? (IData)(vlSelfRef.__PVT__dbid_from_slavemem)
                                                : vlSelfRef.__PVT__wr_dbid_buffer
                                               [9U]);
    vlSelfRef.__PVT__wr_dbid_buffer_nxt[0xaU] = (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                                                  & (0xaU 
                                                     == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))
                                                  ? (IData)(vlSelfRef.__PVT__dbid_from_slavemem)
                                                  : 
                                                 vlSelfRef.__PVT__wr_dbid_buffer
                                                 [0xaU]);
    vlSelfRef.__PVT__wr_dbid_buffer_nxt[0xbU] = (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                                                  & (0xbU 
                                                     == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))
                                                  ? (IData)(vlSelfRef.__PVT__dbid_from_slavemem)
                                                  : 
                                                 vlSelfRef.__PVT__wr_dbid_buffer
                                                 [0xbU]);
    vlSelfRef.__PVT__wr_dbid_buffer_nxt[0xcU] = (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                                                  & (0xcU 
                                                     == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))
                                                  ? (IData)(vlSelfRef.__PVT__dbid_from_slavemem)
                                                  : 
                                                 vlSelfRef.__PVT__wr_dbid_buffer
                                                 [0xcU]);
    vlSelfRef.__PVT__wr_dbid_buffer_nxt[0xdU] = (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                                                  & (0xdU 
                                                     == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))
                                                  ? (IData)(vlSelfRef.__PVT__dbid_from_slavemem)
                                                  : 
                                                 vlSelfRef.__PVT__wr_dbid_buffer
                                                 [0xdU]);
    vlSelfRef.__PVT__wr_dbid_buffer_nxt[0xeU] = (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                                                  & (0xeU 
                                                     == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))
                                                  ? (IData)(vlSelfRef.__PVT__dbid_from_slavemem)
                                                  : 
                                                 vlSelfRef.__PVT__wr_dbid_buffer
                                                 [0xeU]);
    vlSelfRef.__PVT__wr_dbid_buffer_nxt[0xfU] = (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                                                  & (0xfU 
                                                     == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))
                                                  ? (IData)(vlSelfRef.__PVT__dbid_from_slavemem)
                                                  : 
                                                 vlSelfRef.__PVT__wr_dbid_buffer
                                                 [0xfU]);
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__11(Vsig_topology_top_sig_slc_bypass__pi20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wr_dbid_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                            & (0U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_buff) 
                                  & (0U == (IData)(vlSelfRef.__PVT__wr_buffer_index)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_dbid_index_buffer_bit), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wr_dbid_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                            & (1U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_buff) 
                                  & (1U == (IData)(vlSelfRef.__PVT__wr_buffer_index)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_dbid_index_buffer_bit), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wr_dbid_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                            & (2U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_buff) 
                                  & (2U == (IData)(vlSelfRef.__PVT__wr_buffer_index)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_dbid_index_buffer_bit), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wr_dbid_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                            & (3U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_buff) 
                                  & (3U == (IData)(vlSelfRef.__PVT__wr_buffer_index)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_dbid_index_buffer_bit), 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wr_dbid_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                            & (4U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_buff) 
                                  & (4U == (IData)(vlSelfRef.__PVT__wr_buffer_index)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_dbid_index_buffer_bit), 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wr_dbid_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                            & (5U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_buff) 
                                  & (5U == (IData)(vlSelfRef.__PVT__wr_buffer_index)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_dbid_index_buffer_bit), 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wr_dbid_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                            & (6U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_buff) 
                                  & (6U == (IData)(vlSelfRef.__PVT__wr_buffer_index)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_dbid_index_buffer_bit), 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wr_dbid_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                            & (7U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_buff) 
                                  & (7U == (IData)(vlSelfRef.__PVT__wr_buffer_index)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_dbid_index_buffer_bit), 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wr_dbid_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                            & (8U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_buff) 
                                  & (8U == (IData)(vlSelfRef.__PVT__wr_buffer_index)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_dbid_index_buffer_bit), 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wr_dbid_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                            & (9U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_buff) 
                                  & (9U == (IData)(vlSelfRef.__PVT__wr_buffer_index)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_dbid_index_buffer_bit), 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wr_dbid_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                            & (0xaU == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_buff) 
                                  & (0xaU == (IData)(vlSelfRef.__PVT__wr_buffer_index)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_dbid_index_buffer_bit), 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wr_dbid_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                            & (0xbU == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_buff) 
                                  & (0xbU == (IData)(vlSelfRef.__PVT__wr_buffer_index)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_dbid_index_buffer_bit), 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wr_dbid_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                            & (0xcU == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_buff) 
                                  & (0xcU == (IData)(vlSelfRef.__PVT__wr_buffer_index)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_dbid_index_buffer_bit), 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wr_dbid_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                            & (0xdU == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_buff) 
                                  & (0xdU == (IData)(vlSelfRef.__PVT__wr_buffer_index)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_dbid_index_buffer_bit), 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wr_dbid_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                            & (0xeU == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_buff) 
                                  & (0xeU == (IData)(vlSelfRef.__PVT__wr_buffer_index)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_dbid_index_buffer_bit), 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wr_dbid_index_buffer_bit_nxt, 
                    (1U & (((IData)(vlSelfRef.__PVT__allocate_wr_dbid_buff) 
                            & (0xfU == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem))) 
                           | ((~ ((IData)(vlSelfRef.__PVT__rst_wr_buff) 
                                  & (0xfU == (IData)(vlSelfRef.__PVT__wr_buffer_index)))) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_dbid_index_buffer_bit), 0xfU)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__12(Vsig_topology_top_sig_slc_bypass__pi20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__send_late_comp_resp = ((~ VL_BITSEL_IIII(4, 
                                                              vlSelfRef.__PVT__wr_memattr_buffer
                                                              [vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem], 0U)) 
                                            & (((IData)(vlSelfRef.__PVT__ic_RX_RSPFLITV) 
                                                & ((4U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0x26U, 5))) 
                                                   | (5U 
                                                      == 
                                                      (0x1fU 
                                                       & VL_SEL_IWII(73, vlSelfRef.__PVT__ic_RX_RSPFLIT_s, 0x26U, 5))))) 
                                               | (IData)(vlSelfRef.__PVT__slc_drop_wrdata)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__13(Vsig_topology_top_sig_slc_bypass__pi20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__13\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__comptxnid_tocc = VL_EXTEND_II(13,12, 
                                                   vlSelfRef.__PVT__rd_txnid_buffer
                                                   [vlSelfRef.__PVT__index_rd_txnid_buff_rx_datf]);
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__15(Vsig_topology_top_sig_slc_bypass__pi20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__15\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wr_req_sent_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__got_dbidresp) 
                               & (0U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))) 
                           & ((((IData)(vlSelfRef.__PVT__assert_memwr_req) 
                                & (~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail))) 
                               & (0U == (IData)(vlSelfRef.__PVT__wr_data_buffer_index))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wr_req_sent_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__got_dbidresp) 
                               & (1U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))) 
                           & ((((IData)(vlSelfRef.__PVT__assert_memwr_req) 
                                & (~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail))) 
                               & (1U == (IData)(vlSelfRef.__PVT__wr_data_buffer_index))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wr_req_sent_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__got_dbidresp) 
                               & (2U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))) 
                           & ((((IData)(vlSelfRef.__PVT__assert_memwr_req) 
                                & (~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail))) 
                               & (2U == (IData)(vlSelfRef.__PVT__wr_data_buffer_index))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wr_req_sent_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__got_dbidresp) 
                               & (3U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))) 
                           & ((((IData)(vlSelfRef.__PVT__assert_memwr_req) 
                                & (~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail))) 
                               & (3U == (IData)(vlSelfRef.__PVT__wr_data_buffer_index))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wr_req_sent_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__got_dbidresp) 
                               & (4U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))) 
                           & ((((IData)(vlSelfRef.__PVT__assert_memwr_req) 
                                & (~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail))) 
                               & (4U == (IData)(vlSelfRef.__PVT__wr_data_buffer_index))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wr_req_sent_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__got_dbidresp) 
                               & (5U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))) 
                           & ((((IData)(vlSelfRef.__PVT__assert_memwr_req) 
                                & (~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail))) 
                               & (5U == (IData)(vlSelfRef.__PVT__wr_data_buffer_index))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wr_req_sent_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__got_dbidresp) 
                               & (6U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))) 
                           & ((((IData)(vlSelfRef.__PVT__assert_memwr_req) 
                                & (~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail))) 
                               & (6U == (IData)(vlSelfRef.__PVT__wr_data_buffer_index))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wr_req_sent_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__got_dbidresp) 
                               & (7U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))) 
                           & ((((IData)(vlSelfRef.__PVT__assert_memwr_req) 
                                & (~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail))) 
                               & (7U == (IData)(vlSelfRef.__PVT__wr_data_buffer_index))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wr_req_sent_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__got_dbidresp) 
                               & (8U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))) 
                           & ((((IData)(vlSelfRef.__PVT__assert_memwr_req) 
                                & (~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail))) 
                               & (8U == (IData)(vlSelfRef.__PVT__wr_data_buffer_index))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wr_req_sent_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__got_dbidresp) 
                               & (9U == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))) 
                           & ((((IData)(vlSelfRef.__PVT__assert_memwr_req) 
                                & (~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail))) 
                               & (9U == (IData)(vlSelfRef.__PVT__wr_data_buffer_index))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wr_req_sent_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__got_dbidresp) 
                               & (0xaU == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))) 
                           & ((((IData)(vlSelfRef.__PVT__assert_memwr_req) 
                                & (~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail))) 
                               & (0xaU == (IData)(vlSelfRef.__PVT__wr_data_buffer_index))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wr_req_sent_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__got_dbidresp) 
                               & (0xbU == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))) 
                           & ((((IData)(vlSelfRef.__PVT__assert_memwr_req) 
                                & (~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail))) 
                               & (0xbU == (IData)(vlSelfRef.__PVT__wr_data_buffer_index))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wr_req_sent_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__got_dbidresp) 
                               & (0xcU == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))) 
                           & ((((IData)(vlSelfRef.__PVT__assert_memwr_req) 
                                & (~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail))) 
                               & (0xcU == (IData)(vlSelfRef.__PVT__wr_data_buffer_index))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wr_req_sent_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__got_dbidresp) 
                               & (0xdU == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))) 
                           & ((((IData)(vlSelfRef.__PVT__assert_memwr_req) 
                                & (~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail))) 
                               & (0xdU == (IData)(vlSelfRef.__PVT__wr_data_buffer_index))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wr_req_sent_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__got_dbidresp) 
                               & (0xeU == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))) 
                           & ((((IData)(vlSelfRef.__PVT__assert_memwr_req) 
                                & (~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail))) 
                               & (0xeU == (IData)(vlSelfRef.__PVT__wr_data_buffer_index))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wr_req_sent_nxt, 
                    (1U & ((~ ((IData)(vlSelfRef.__PVT__got_dbidresp) 
                               & (0xfU == (IData)(vlSelfRef.__PVT__wr_dbid_buffer_index_from_slavemem)))) 
                           & ((((IData)(vlSelfRef.__PVT__assert_memwr_req) 
                                & (~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail))) 
                               & (0xfU == (IData)(vlSelfRef.__PVT__wr_data_buffer_index))) 
                              | VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_req_sent), 0xfU)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__16(Vsig_topology_top_sig_slc_bypass__pi20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__16\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__drop_wr_addr = ((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                                     & (IData)(vlSelfRef.__PVT__slc_drop_wrdata));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (0U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (1U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 1U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (2U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 2U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (3U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 3U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (4U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 4U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (5U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 5U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (6U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 6U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (7U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 7U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (8U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 8U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (9U == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 9U)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (0xaU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xaU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (0xbU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xbU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (0xcU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xcU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (0xdU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xdU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (0xeU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xeU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wr_received_dbid_bit_nxt, 
                    (1U & ((((IData)(vlSelfRef.__PVT__slc_wrdata_valid) 
                             & (~ (IData)(vlSelfRef.__PVT__drop_wr_addr))) 
                            & (0xfU == (IData)(vlSelfRef.__PVT__dbid_from_slc))) 
                           | ((~ VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__clear_wr_buffer), 0xfU)) 
                              & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__wr_received_dbid_bit), 0xfU)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__19(Vsig_topology_top_sig_slc_bypass__pi20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__19\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cm_addr_match_pm = (((IData)(vlSelfRef.__PVT__cm_activated_pm) 
                                          & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                             [0U] >= 
                                             vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                                             [0U])) 
                                         & (VL_EXTEND_II(29,28, 
                                                         vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                         [0U]) 
                                            < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                            [0U]));
}

extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_he95d9d6c_0;

VL_INLINE_OPT void Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__20(Vsig_topology_top_sig_slc_bypass__pi20* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_slc_bypass__pi20___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_L3top_bypass_0__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__20\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    CData/*31:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    CData/*31:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    CData/*31:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_7;
    CData/*31:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_9;
    CData/*31:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_11;
    CData/*31:0*/ __Vtemp_12;
    VlWide<5>/*159:0*/ __Vtemp_13;
    CData/*31:0*/ __Vtemp_14;
    VlWide<5>/*159:0*/ __Vtemp_15;
    CData/*31:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_17;
    CData/*31:0*/ __Vtemp_18;
    VlWide<5>/*159:0*/ __Vtemp_19;
    CData/*31:0*/ __Vtemp_20;
    VlWide<5>/*159:0*/ __Vtemp_21;
    CData/*31:0*/ __Vtemp_22;
    VlWide<5>/*159:0*/ __Vtemp_23;
    CData/*31:0*/ __Vtemp_24;
    VlWide<5>/*159:0*/ __Vtemp_25;
    CData/*31:0*/ __Vtemp_26;
    VlWide<5>/*159:0*/ __Vtemp_27;
    CData/*31:0*/ __Vtemp_28;
    VlWide<5>/*159:0*/ __Vtemp_29;
    CData/*31:0*/ __Vtemp_30;
    VlWide<5>/*159:0*/ __Vtemp_31;
    CData/*31:0*/ __Vtemp_32;
    VlWide<5>/*159:0*/ __Vtemp_33;
    // Body
    vlSelfRef.__PVT__tgt_pm_node_id = 0U;
    if (vlSelfRef.__PVT__cm_addr_match_pm) {
        vlSelfRef.__PVT__tgt_pm_node_id = vlSelfRef.__PVT__xy_coord_pm
            [0U];
    }
    vlSelfRef.__PVT__tgt_map_cmb__DOT__unnamedblk13__DOT__p = 1U;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT_s, Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    VL_ASSIGNSEL_WQ(680,38,0U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 
                    VL_CONCAT_QII(38,12,26, (IData)(vlSelfRef.__PVT__wr_dbid_tx_datf), 
                                  VL_CONCAT_III(26,11,15, 
                                                VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 5U), 
                                                VL_CONCAT_III(15,11,4, (IData)(vlSelfRef.__PVT__tgt_pm_node_id), (IData)(vlSelfRef.__PVT__wr_qos_tx_datf)))));
    VL_ASSIGNSEL_WI(680,24,0x26U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 0x1800U);
    VL_ASSIGNSEL_WI(680,16,0x41U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 
                    VL_EXTEND_II(16,14, VL_CONCAT_III(14,2,12, 
                                                      (3U 
                                                       & VL_SEL_IQII(52, vlSelfRef.__PVT__wr_addr_for_tx_datf, 4U, 2)), 0U)));
    VL_CONCAT_WQI(65,64,1, __Vtemp_1, vlSelfRef.__PVT__wr_be_tx_datf, 0U);
    VL_ASSIGNSEL_WW(680,65,0x67U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, __Vtemp_1);
    VL_ASSIGNSEL_WI(680,3,0x3eU, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 0U);
    VL_ASSIGNSEL_WI(680,22,0x51U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, 0U);
    VL_ASSIGNSEL_WW(680,512,0xa8U, vlSelfRef.__PVT__ic_TX_DATFLIT_s, vlSelfRef.__PVT__wr_data_tx_datf);
    VL_ASSIGNSEL_WI(151,30,0U, vlSelfRef.__PVT__memwr_req_s, 
                    VL_CONCAT_III(30,15,15, VL_CONCAT_III(15,4,11, (IData)(vlSelfRef.__PVT__wr_data_buffer_index), 
                                                          VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 5U)), 
                                  VL_CONCAT_III(15,11,4, (IData)(vlSelfRef.__PVT__tgt_pm_node_id), (IData)(vlSelfRef.__PVT__wr_mem_qos))));
    VL_ASSIGNSEL_WQ(151,39,0x1eU, vlSelfRef.__PVT__memwr_req_s, 
                    VL_CONCAT_QII(39,7,32, ((IData)(vlSelfRef.__PVT__is_wr_zero_req)
                                             ? 0x44U
                                             : 0x1cU), 0xcU));
    VL_ASSIGNSEL_WI(151,9,0x89U, vlSelfRef.__PVT__memwr_req_s, 0U);
    VL_ASSIGNSEL_WI(151,2,0x94U, vlSelfRef.__PVT__memwr_req_s, 0U);
    VL_ASSIGNSEL_WQ(151,57,0x45U, vlSelfRef.__PVT__memwr_req_s, 
                    VL_CONCAT_QQI(57,54,3, VL_EXTEND_QQ(54,53, 
                                                        VL_CONCAT_QIQ(53,1,52, (IData)(vlSelfRef.__PVT__wr_mem_ns), vlSelfRef.__PVT__wr_mem_addr)), 6U));
    VL_ASSIGNSEL_WI(151,7,0x7eU, vlSelfRef.__PVT__memwr_req_s, 
                    VL_CONCAT_III(7,4,3, (0xfU & ((IData)(vlSelfRef.__PVT__wrretrytxn_avail)
                                                   ? 
                                                  VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__rddata_pcredit_fifo), 0U, 4)
                                                   : 0U)), 
                                  VL_EXTEND_II(3,1, 
                                               (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__wrretrytxn_avail))))));
    VL_ASSIGNSEL_WI(151,4,0x85U, vlSelfRef.__PVT__memwr_req_s, vlSelfRef.__PVT__wr_mem_memattr);
    VL_ASSIGNSEL_WI(151,2,0x92U, vlSelfRef.__PVT__memwr_req_s, 0U);
    VL_ASSIGNBIT_WI(0x96U, vlSelfRef.__PVT__memwr_req_s, 0U);
    VL_ASSIGNSEL_WI(151,15,0U, vlSelfRef.__PVT__memrd_req_s, 
                    VL_CONCAT_III(15,11,4, (IData)(vlSelfRef.__PVT__tgt_pm_node_id), 
                                  (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0U, 4))));
    VL_ASSIGNBIT_WI(0x31U, vlSelfRef.__PVT__memrd_req_s, 
                    (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x31U)));
    VL_ASSIGNSEL_WI(151,7,0x3eU, vlSelfRef.__PVT__memrd_req_s, 4U);
    VL_ASSIGNBIT_WI(0x7eU, vlSelfRef.__PVT__memrd_req_s, 
                    (1U & ((0U != (IData)(vlSelfRef.__PVT__cmdproc_st)) 
                           | (~ (IData)(vlSelfRef.__PVT__rdretrytxn_avail)))));
    VL_ASSIGNSEL_WQ(151,52,0x48U, vlSelfRef.__PVT__memrd_req_s, 
                    VL_CONCAT_QQI(52,46,6, (0x3fffffffffffULL 
                                            & VL_SEL_QWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x4eU, 46)), 0U));
    VL_ASSIGNSEL_WI(151,4,0x81U, vlSelfRef.__PVT__memrd_req_s, 
                    (0xfU & (((IData)(vlSelfRef.__PVT__rdretrytxn_avail) 
                              & (0U == (IData)(vlSelfRef.__PVT__cmdproc_st)))
                              ? VL_SEL_IIII(15, (IData)(vlSelfRef.__PVT__rddata_pcredit_fifo), 0U, 4)
                              : 0U)));
    VL_ASSIGNSEL_WI(151,3,0x45U, vlSelfRef.__PVT__memrd_req_s, 6U);
    VL_ASSIGNSEL_WI(151,2,0x7cU, vlSelfRef.__PVT__memrd_req_s, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x7dU)), 
                                  (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x7cU))));
    VL_ASSIGNSEL_WI(151,2,0x7fU, vlSelfRef.__PVT__memrd_req_s, 
                    (3U & VL_SEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x7fU, 2)));
    VL_ASSIGNSEL_WI(151,4,0x85U, vlSelfRef.__PVT__memrd_req_s, 
                    (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x85U, 4)));
    VL_ASSIGNSEL_WI(151,2,0x92U, vlSelfRef.__PVT__memrd_req_s, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x93U)), 
                                  (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x92U))));
    VL_ASSIGNBIT_WI(0x96U, vlSelfRef.__PVT__memrd_req_s, 
                    (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x96U)));
    VL_ASSIGNSEL_WI(151,9,0x89U, vlSelfRef.__PVT__memrd_req_s, 
                    VL_CONCAT_III(9,8,1, (0xffU & VL_SEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x8aU, 8)), 
                                  (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x89U))));
    VL_ASSIGNSEL_WI(151,2,0x94U, vlSelfRef.__PVT__memrd_req_s, 
                    (3U & VL_SEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x94U, 2)));
    if (vlSelfRef.__PVT__flit_dmt_en) {
        VL_ASSIGNSEL_WQ(151,34,0xfU, vlSelfRef.__PVT__memrd_req_s, 
                        VL_CONCAT_QII(34,11,23, (0x7ffU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x26U, 11)), 
                                      VL_CONCAT_III(23,12,11, 
                                                    (0xfffU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x1aU, 12)), 
                                                    VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 4U))));
        VL_ASSIGNSEL_WI(151,12,0x32U, vlSelfRef.__PVT__memrd_req_s, 
                        (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x32U, 12)));
    } else {
        VL_ASSIGNSEL_WI(151,11,0xfU, vlSelfRef.__PVT__memrd_req_s, 
                        VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 5U));
        VL_ASSIGNSEL_WI(151,12,0x1aU, vlSelfRef.__PVT__memrd_req_s, 
                        (0xfffU & (((IData)(vlSelfRef.__PVT__rdretrytxn_avail) 
                                    & (0U == (IData)(vlSelfRef.__PVT__cmdproc_st)))
                                    ? VL_SEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x1aU, 12)
                                    : VL_CONCAT_III(12,8,4, 8U, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_selected)))));
        VL_ASSIGNSEL_WI(151,11,0x26U, vlSelfRef.__PVT__memrd_req_s, 
                        VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 5U));
        VL_ASSIGNSEL_WI(151,12,0x32U, vlSelfRef.__PVT__memrd_req_s, 
                        (0xfffU & (((IData)(vlSelfRef.__PVT__rdretrytxn_avail) 
                                    & (0U == (IData)(vlSelfRef.__PVT__cmdproc_st)))
                                    ? VL_SEL_IWII(151, vlSelfRef.__PVT__rd_reqf_s, 0x32U, 12)
                                    : VL_CONCAT_III(12,8,4, 8U, (IData)(vlSelfRef.__PVT__rd_txnid_buffer_selected)))));
    }
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT, vlSelfRef.__PVT__ic_TX_DATFLIT_s);
    __Vtemp_2 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                  & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                 & (0U == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_3, __Vtemp_2, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[0U]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [0U], __Vtemp_3);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 1U;
    __Vtemp_4 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                  & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                 & (1U == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_5, __Vtemp_4, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[1U]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [1U], __Vtemp_5);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 2U;
    __Vtemp_6 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                  & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                 & (2U == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_7, __Vtemp_6, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[2U]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [2U], __Vtemp_7);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 3U;
    __Vtemp_8 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                  & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                 & (3U == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_9, __Vtemp_8, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[3U]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [3U], __Vtemp_9);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 4U;
    __Vtemp_10 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (4U == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_11, __Vtemp_10, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[4U]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [4U], __Vtemp_11);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 5U;
    __Vtemp_12 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (5U == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_13, __Vtemp_12, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[5U]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [5U], __Vtemp_13);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 6U;
    __Vtemp_14 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (6U == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_15, __Vtemp_14, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[6U]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [6U], __Vtemp_15);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 7U;
    __Vtemp_16 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (7U == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_17, __Vtemp_16, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[7U]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [7U], __Vtemp_17);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 8U;
    __Vtemp_18 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (8U == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_19, __Vtemp_18, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[8U]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [8U], __Vtemp_19);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 9U;
    __Vtemp_20 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (9U == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_21, __Vtemp_20, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[9U]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [9U], __Vtemp_21);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 0xaU;
    __Vtemp_22 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (0xaU == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_23, __Vtemp_22, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[0xaU]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [0xaU], __Vtemp_23);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 0xbU;
    __Vtemp_24 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (0xbU == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_25, __Vtemp_24, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[0xbU]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [0xbU], __Vtemp_25);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 0xcU;
    __Vtemp_26 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (0xcU == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_27, __Vtemp_26, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[0xcU]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [0xcU], __Vtemp_27);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 0xdU;
    __Vtemp_28 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (0xdU == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_29, __Vtemp_28, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[0xdU]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [0xdU], __Vtemp_29);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 0xeU;
    __Vtemp_30 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (0xeU == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_31, __Vtemp_30, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[0xeU]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [0xeU], __Vtemp_31);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 0xfU;
    __Vtemp_32 = (((IData)(vlSelfRef.__PVT__assert_memrd_req) 
                   & (0U != (IData)(vlSelfRef.__PVT__cmdproc_st))) 
                  & (0xfU == (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__memrd_req_s, 0x1aU, 4))));
    VL_COND_WIWW(151, __Vtemp_33, __Vtemp_32, vlSelfRef.__PVT__memrd_req_s, 
                 vlSelfRef.__PVT__memrdretry_buf[0xfU]);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__memrdretry_buf_nxt
                [0xfU], __Vtemp_33);
    vlSelfRef.__PVT__unnamedblk8__DOT__i = 0x10U;
    VL_COND_WIWW(151, vlSelfRef.__PVT__ic_TX_REQFLIT, (IData)(vlSelfRef.__PVT__assert_memwr_req), vlSelfRef.__PVT__memwr_req_s, vlSelfRef.__PVT__memrd_req_s);
}
