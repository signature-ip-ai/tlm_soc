// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_ID_TRANSLATOR_RN_REQ__PI57_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_ID_TRANSLATOR_RN_REQ__PI57_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_id_translator_rn_req__pi57 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst_n,0,0);
        VL_IN8(__PVT__tx_rsp_v,0,0);
        VL_IN8(__PVT__tx_rsp_opcode,4,0);
        VL_IN8(__PVT__tx_dat_v,0,0);
        VL_IN8(__PVT__ic_rx_req_v,0,0);
        VL_IN8(__PVT__ic_rx_req_opcode,6,0);
        VL_IN8(__PVT__ic_rx_req_lkly_shared,0,0);
        VL_IN8(__PVT__ic_rx_req_expcompack,0,0);
        VL_IN8(__PVT__vc0_rx_rsp_v,0,0);
        VL_IN8(__PVT__vc1_rx_rsp_v,0,0);
        VL_IN8(__PVT__vc0_rx_dat_v,0,0);
        VL_IN8(__PVT__vc0_rx_dat_opcode,3,0);
        VL_IN8(__PVT__vc1_rx_dat_v,0,0);
        VL_IN8(__PVT__vc1_rx_dat_opcode,3,0);
        VL_OUT8(__PVT__id_translator_full,0,0);
        VL_OUT8(__PVT__id_translator_hs_pending_txn,0,0);
        VL_OUT8(__PVT__id_translator_req_empty,0,0);
        CData/*0:0*/ __PVT__expcompack_from_rsp_dbid;
        CData/*0:0*/ __PVT__expcompack_from_dat_dbid;
        CData/*0:0*/ __PVT__writezero_from_rsp_dbid;
        CData/*0:0*/ __PVT__timeout_cback_wrdata;
        CData/*0:0*/ __PVT__is_vc0_rx_COMPDATA;
        CData/*0:0*/ __PVT__is_vc1_rx_COMPDATA;
        CData/*0:0*/ __PVT__is_vc0_rx_NCBWRDATACOMPACK;
        CData/*0:0*/ __PVT__is_vc1_rx_NCBWRDATACOMPACK;
        CData/*0:0*/ __PVT__id_translator_full_nxt;
        CData/*0:0*/ __PVT__assert_wren;
        CData/*0:0*/ __PVT__req_is_read;
        CData/*0:0*/ __PVT__req_is_ncb_write;
        CData/*0:0*/ __PVT__req_is_cb_write;
        CData/*0:0*/ __PVT__req_is_write_zero;
        CData/*0:0*/ __PVT__req_is_dataless;
        CData/*0:0*/ __PVT__req_is_writeevictorevict;
        CData/*0:0*/ __PVT__req_is_atom;
        CData/*0:0*/ __PVT__req_is_wrcmo;
        CData/*0:0*/ __PVT__tx_rsp_is_compcmo;
        CData/*0:0*/ __Vconcswap_1_h7f0f28a2__0;
        CData/*5:0*/ __Vconcswap_1_h7eebd197__0;
        CData/*0:0*/ __PVT__unused_signal_block__DOT__unused_signal;
        CData/*0:0*/ __PVT__unused_signal_block__DOT__unused_signal_nxt;
        CData/*4:0*/ __Vfunc_clog2_index__0__Vfuncout;
        CData/*4:0*/ __Vfunc_clog2_index__1__Vfuncout;
        CData/*5:0*/ __Vfunc_all_bits_sum_up__2__Vfuncout;
        CData/*0:0*/ __Vfunc_all_bits_sum_up__2__tmp_overflow;
        CData/*4:0*/ __Vfunc_clog2_index__3__Vfuncout;
        CData/*4:0*/ __Vfunc_clog2_index__4__Vfuncout;
        CData/*5:0*/ __Vfunc_all_bits_sum_up__5__Vfuncout;
        CData/*0:0*/ __Vfunc_all_bits_sum_up__5__tmp_overflow;
        CData/*0:0*/ __Vdly__id_translator_full;
        CData/*0:0*/ __Vdly__unused_signal_block__DOT__unused_signal;
        VL_IN16(__PVT__tx_rsp_dbid_from_hn,11,0);
        VL_IN16(__PVT__tx_rsp_txnid_from_hn,11,0);
        VL_OUT16(__PVT__tx_rsp_dbid_to_rn,11,0);
        VL_IN16(__PVT__tx_dat_dbid_from_hn,11,0);
        VL_IN16(__PVT__tx_dat_txnid_from_hn,11,0);
        VL_OUT16(__PVT__tx_dat_dbid_to_rn,11,0);
        VL_IN16(__PVT__ic_rx_req_txnid_from_rn,11,0);
        VL_IN16(__PVT__vc0_rx_rsp_txnid_from_rn,11,0);
        VL_OUT16(__PVT__vc0_rx_rsp_txnid_to_hn,11,0);
        VL_IN16(__PVT__vc1_rx_rsp_txnid_from_rn,11,0);
        VL_OUT16(__PVT__vc1_rx_rsp_txnid_to_hn,11,0);
        VL_IN16(__PVT__vc0_rx_dat_txnid_from_rn,11,0);
        VL_IN16(__PVT__vc0_rx_dat_dbid_from_rn,11,0);
    };
    struct {
        VL_OUT16(__PVT__vc0_rx_dat_txnid_to_hn,11,0);
        VL_OUT16(__PVT__vc0_rx_dat_dbid_to_hn,11,0);
        VL_IN16(__PVT__vc1_rx_dat_txnid_from_rn,11,0);
        VL_IN16(__PVT__vc1_rx_dat_dbid_from_rn,11,0);
        VL_OUT16(__PVT__vc1_rx_dat_txnid_to_hn,11,0);
        VL_OUT16(__PVT__vc1_rx_dat_dbid_to_hn,11,0);
        SData/*11:0*/ __PVT__unmasked_tx_rsp_dbid_from_hn;
        SData/*11:0*/ __PVT__unmasked_tx_dat_dbid_from_hn;
        SData/*11:0*/ __PVT__tx_actual_rsp_dbid_to_rn;
        SData/*11:0*/ __PVT__tx_actual_dat_dbid_to_rn;
        VlWide<28>/*895:0*/ __PVT__id_buffer;
        VlWide<28>/*895:0*/ __PVT__id_buffer_nxt;
        IData/*31:0*/ __PVT__wren_id_buffer;
        IData/*31:0*/ __PVT__rsp_txnid_entry_match;
        IData/*31:0*/ __PVT__dat_txnid_entry_match;
        IData/*31:0*/ __PVT__empty_valid_buffer;
        IData/*31:0*/ __PVT__id_buffer_valid;
        IData/*31:0*/ __PVT__id_buffer_valid_nxt;
        IData/*31:0*/ __Vfunc_clog2_index__0__set_bit_location;
        IData/*31:0*/ __Vfunc_clog2_index__0__unnamedblk1__DOT__i;
        IData/*31:0*/ __Vfunc_clog2_index__1__set_bit_location;
        IData/*31:0*/ __Vfunc_clog2_index__1__unnamedblk1__DOT__i;
        IData/*31:0*/ __Vfunc_all_bits_sum_up__2__set_bit_location;
        IData/*31:0*/ __Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i;
        IData/*31:0*/ __Vfunc_clog2_index__3__set_bit_location;
        IData/*31:0*/ __Vfunc_clog2_index__3__unnamedblk1__DOT__i;
        IData/*31:0*/ __Vfunc_clog2_index__4__set_bit_location;
        IData/*31:0*/ __Vfunc_clog2_index__4__unnamedblk1__DOT__i;
        IData/*31:0*/ __Vfunc_all_bits_sum_up__5__set_bit_location;
        IData/*31:0*/ __Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i;
        VlWide<28>/*895:0*/ __Vdly__id_buffer;
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_id_translator_rn_req__pi57(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_id_translator_rn_req__pi57();
    VL_UNCOPYABLE(Vsig_topology_top_sig_id_translator_rn_req__pi57);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
