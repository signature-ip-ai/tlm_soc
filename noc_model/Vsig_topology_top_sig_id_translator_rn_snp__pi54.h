// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_ID_TRANSLATOR_RN_SNP__PI54_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_ID_TRANSLATOR_RN_SNP__PI54_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_id_translator_rn_snp__pi54 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst_n,0,0);
        VL_IN8(__PVT__tx_snp_v,0,0);
        VL_IN8(__PVT__tx_snp_opcode,4,0);
        VL_IN8(__PVT__vc0_rx_rsp_v,0,0);
        VL_IN8(__PVT__vc0_rx_rsp_opcode,4,0);
        VL_IN8(__PVT__vc1_rx_rsp_v,0,0);
        VL_IN8(__PVT__vc1_rx_rsp_opcode,4,0);
        VL_IN8(__PVT__vc0_rx_dat_v,0,0);
        VL_IN8(__PVT__vc0_rx_dat_opcode,3,0);
        VL_IN8(__PVT__vc1_rx_dat_v,0,0);
        VL_IN8(__PVT__vc1_rx_dat_opcode,3,0);
        VL_OUT8(__PVT__id_translator_full,0,0);
        VL_OUT8(__PVT__id_translator_hs_pending_txn,0,0);
        VL_OUT8(__PVT__id_translator_snp_empty,0,0);
        CData/*0:0*/ __PVT__timeout_snprespdata_i_pd;
        CData/*0:0*/ __PVT__is_tx_SNPFWD;
        CData/*0:0*/ __PVT__is_vc0_rx_COMPDATA;
        CData/*0:0*/ __PVT__is_vc1_rx_COMPDATA;
        CData/*3:0*/ __PVT__wren_id_buffer;
        CData/*3:0*/ __PVT__clear_valid;
        CData/*3:0*/ __PVT__valid_buffer;
        CData/*3:0*/ __PVT__valid_buffer_nxt;
        CData/*3:0*/ __PVT__waiting_for_first_rsp;
        CData/*3:0*/ __PVT__waiting_for_first_rsp_nxt;
        CData/*3:0*/ __PVT__empty_valid_buffer;
        CData/*0:0*/ __PVT__id_translator_full_nxt;
        CData/*0:0*/ __PVT__assert_cntr_snp;
        CData/*0:0*/ __PVT__clear_vc0_rsp;
        CData/*0:0*/ __PVT__clear_vc1_rsp;
        CData/*0:0*/ __PVT__clear_vc0_snpdata;
        CData/*0:0*/ __PVT__clear_vc1_snpdata;
        CData/*0:0*/ __PVT__clear_vc0_compdata;
        CData/*0:0*/ __PVT__clear_vc1_compdata;
        CData/*0:0*/ __PVT__clear_vc0_both_rsp_dat;
        CData/*0:0*/ __PVT__clear_vc1_both_rsp_dat;
        CData/*0:0*/ __PVT__clear_vc0_rsp_vc1_dat;
        CData/*0:0*/ __PVT__clear_vc1_rsp_vc0_dat;
        CData/*0:0*/ __PVT__is_vc0_rx_SNPRESP;
        CData/*0:0*/ __PVT__is_vc1_rx_SNPRESP;
        CData/*0:0*/ __PVT__is_vc0_rx_SNPRESPFWDED;
        CData/*0:0*/ __PVT__is_vc1_rx_SNPRESPFWDED;
        CData/*0:0*/ __PVT__is_vc0_rx_SNPRESPDATA;
        CData/*0:0*/ __PVT__is_vc1_rx_SNPRESPDATA;
        CData/*0:0*/ __PVT__is_vc0_rx_SNPRESPDATAPTL;
        CData/*0:0*/ __PVT__is_vc1_rx_SNPRESPDATAPTL;
        CData/*0:0*/ __PVT__is_vc0_rx_SNPRESPDATAFWDED;
        CData/*0:0*/ __PVT__is_vc1_rx_SNPRESPDATAFWDED;
        CData/*0:0*/ __PVT__is_vc0_rx_ANYSNPRESPDATA;
        CData/*0:0*/ __PVT__is_vc1_rx_ANYSNPRESPDATA;
        CData/*0:0*/ __Vconcswap_1_h7268aae5__0;
        CData/*2:0*/ __Vconcswap_1_h720f3981__0;
        CData/*0:0*/ __PVT__unused_signal_block__DOT__unused_signal;
        CData/*0:0*/ __PVT__unused_signal_block__DOT__unused_signal_nxt;
        CData/*1:0*/ __Vfunc_clog2_index__0__Vfuncout;
        CData/*3:0*/ __Vfunc_clog2_index__0__set_bit_location;
        CData/*2:0*/ __Vfunc_all_bits_sum_up__1__Vfuncout;
        CData/*3:0*/ __Vfunc_all_bits_sum_up__1__set_bit_location;
        CData/*0:0*/ __Vfunc_all_bits_sum_up__1__tmp_overflow;
        CData/*3:0*/ __Vdly__valid_buffer;
        CData/*3:0*/ __Vdly__waiting_for_first_rsp;
        CData/*0:0*/ __Vdly__id_translator_full;
        CData/*0:0*/ __Vdly__unused_signal_block__DOT__unused_signal;
        CData/*0:0*/ __VdlySet__id_buffer__v0;
    };
    struct {
        CData/*0:0*/ __VdlySet__id_buffer__v4;
        CData/*0:0*/ __VdlySet__id_buffer__v5;
        CData/*0:0*/ __VdlySet__id_buffer__v6;
        CData/*0:0*/ __VdlySet__id_buffer__v7;
        VL_IN16(__PVT__tx_snp_txnid_from_hn,11,0);
        VL_OUT16(__PVT__tx_snp_txnid_to_rn,11,0);
        VL_IN16(__PVT__vc0_rx_rsp_txnid_from_rn,11,0);
        VL_OUT16(__PVT__vc0_rx_rsp_txnid_to_hn,11,0);
        VL_IN16(__PVT__vc1_rx_rsp_txnid_from_rn,11,0);
        VL_OUT16(__PVT__vc1_rx_rsp_txnid_to_hn,11,0);
        VL_IN16(__PVT__vc0_rx_dat_txnid_from_rn,11,0);
        VL_IN16(__PVT__vc0_rx_dat_dbid_from_rn,11,0);
        VL_OUT16(__PVT__vc0_rx_dat_txnid_to_hn,11,0);
        VL_OUT16(__PVT__vc0_rx_dat_dbid_to_hn,11,0);
        VL_IN16(__PVT__vc1_rx_dat_txnid_from_rn,11,0);
        VL_IN16(__PVT__vc1_rx_dat_dbid_from_rn,11,0);
        VL_OUT16(__PVT__vc1_rx_dat_txnid_to_hn,11,0);
        VL_OUT16(__PVT__vc1_rx_dat_dbid_to_hn,11,0);
        SData/*11:0*/ __PVT__tx_actual_snp_txnid_to_rn;
        SData/*11:0*/ __VdlyVal__id_buffer__v0;
        SData/*11:0*/ __VdlyVal__id_buffer__v1;
        SData/*11:0*/ __VdlyVal__id_buffer__v2;
        SData/*11:0*/ __VdlyVal__id_buffer__v3;
        IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
        IData/*31:0*/ __Vfunc_clog2_index__0__unnamedblk2__DOT__i;
        IData/*31:0*/ __Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i;
        VlUnpacked<SData/*11:0*/, 4> __PVT__id_buffer;
        VlUnpacked<SData/*11:0*/, 4> __PVT__id_buffer_nxt;
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_id_translator_rn_snp__pi54(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_id_translator_rn_snp__pi54();
    VL_UNCOPYABLE(Vsig_topology_top_sig_id_translator_rn_snp__pi54);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
