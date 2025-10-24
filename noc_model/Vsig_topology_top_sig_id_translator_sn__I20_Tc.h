// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_ID_TRANSLATOR_SN__I20_TC_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_ID_TRANSLATOR_SN__I20_TC_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_id_translator_sn__I20_Tc final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst_n,0,0);
        VL_IN8(__PVT__tx_req_v,0,0);
        VL_IN8(__PVT__tx_req_opcode,6,0);
        VL_IN8(__PVT__tx_req_order,1,0);
        VL_IN8(__PVT__tx_req_apply_dmt_from_hn,0,0);
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
        CData/*0:0*/ __PVT__is_tx_READNOSNP;
        CData/*0:0*/ __PVT__is_tx_WRITENOSNP;
        CData/*0:0*/ __PVT__is_tx_WRITENOSP_CMO;
        CData/*0:0*/ __PVT__is_tx_WRITENOSNPZERO;
        CData/*0:0*/ __PVT__is_tx_CMO;
        CData/*0:0*/ __PVT__is_vc0_rx_COMPDATA;
        CData/*0:0*/ __PVT__is_vc0_rx_Comp_or_DBIDRESP;
        CData/*0:0*/ __PVT__is_vc0_rx_COMPDBIDRESP;
        CData/*0:0*/ __PVT__is_vc0_rx_READRECEIPT;
        CData/*0:0*/ __PVT__is_vc0_rx_RETRYACK;
        CData/*0:0*/ __PVT__is_vc0_rx_CompCMO;
        CData/*0:0*/ __PVT__is_vc1_rx_COMPDATA;
        CData/*0:0*/ __PVT__is_vc1_rx_Comp_or_DBIDRESP;
        CData/*0:0*/ __PVT__is_vc1_rx_COMPDBIDRESP;
        CData/*0:0*/ __PVT__is_vc1_rx_READRECEIPT;
        CData/*0:0*/ __PVT__is_vc1_rx_RETRYACK;
        CData/*0:0*/ __PVT__is_vc1_rx_CompCMO;
        CData/*0:0*/ __PVT__id_translator_full_nxt;
        CData/*0:0*/ __PVT__assert_wren_req;
        CData/*1:0*/ __PVT__allocate_rsp_cntr_num;
        CData/*0:0*/ __PVT__down_1_vc0_rsp_cntr;
        CData/*0:0*/ __PVT__down_1_vc1_rsp_cntr;
        CData/*0:0*/ __PVT__down_1_vc0_dat_cntr;
        CData/*0:0*/ __PVT__down_1_vc1_dat_cntr;
        CData/*0:0*/ __PVT__down_2_vc0_rsp_cntr;
        CData/*0:0*/ __PVT__down_2_vc1_rsp_cntr;
        CData/*0:0*/ __PVT__down_2_vc0_vc1_rsp_cntr;
        CData/*0:0*/ __PVT__down_3_vc0_vc1_rsp_cntr;
        CData/*0:0*/ __PVT__vc0_rx_data_from_sn_has_dmt_enabled;
        CData/*0:0*/ __PVT__vc1_rx_data_from_sn_has_dmt_enabled;
        CData/*0:0*/ __PVT__down_2_vc0_dat_rsp_cntr;
        CData/*0:0*/ __PVT__down_2_vc1_dat_rsp_cntr;
        CData/*0:0*/ __Vconcswap_1_h7f0f28a2__0;
        CData/*5:0*/ __Vconcswap_1_h7eebd197__0;
        CData/*4:0*/ __Vfunc_clog2_index__0__Vfuncout;
        CData/*5:0*/ __Vfunc_all_bits_sum_up__1__Vfuncout;
        CData/*0:0*/ __Vfunc_all_bits_sum_up__1__tmp_overflow;
        CData/*0:0*/ __Vdly__id_translator_full;
        CData/*0:0*/ __VdlySet__id_buffer__v0;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v0;
        CData/*0:0*/ __VdlySet__rsp_cntr__v0;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v1;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v2;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v3;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v4;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v5;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v6;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v7;
    };
    struct {
        CData/*1:0*/ __VdlyVal__rsp_cntr__v8;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v9;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v10;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v11;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v12;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v13;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v14;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v15;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v16;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v17;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v18;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v19;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v20;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v21;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v22;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v23;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v24;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v25;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v26;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v27;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v28;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v29;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v30;
        CData/*1:0*/ __VdlyVal__rsp_cntr__v31;
        CData/*0:0*/ __VdlySet__id_buffer__v32;
        CData/*0:0*/ __VdlySet__id_buffer__v33;
        CData/*0:0*/ __VdlySet__id_buffer__v34;
        CData/*0:0*/ __VdlySet__id_buffer__v35;
        CData/*0:0*/ __VdlySet__id_buffer__v36;
        CData/*0:0*/ __VdlySet__id_buffer__v37;
        CData/*0:0*/ __VdlySet__id_buffer__v38;
        CData/*0:0*/ __VdlySet__id_buffer__v39;
        CData/*0:0*/ __VdlySet__id_buffer__v40;
        CData/*0:0*/ __VdlySet__id_buffer__v41;
        CData/*0:0*/ __VdlySet__id_buffer__v42;
        CData/*0:0*/ __VdlySet__id_buffer__v43;
        CData/*0:0*/ __VdlySet__id_buffer__v44;
        CData/*0:0*/ __VdlySet__id_buffer__v45;
        CData/*0:0*/ __VdlySet__id_buffer__v46;
        CData/*0:0*/ __VdlySet__id_buffer__v47;
        CData/*0:0*/ __VdlySet__id_buffer__v48;
        CData/*0:0*/ __VdlySet__id_buffer__v49;
        CData/*0:0*/ __VdlySet__id_buffer__v50;
        CData/*0:0*/ __VdlySet__id_buffer__v51;
        CData/*0:0*/ __VdlySet__id_buffer__v52;
        CData/*0:0*/ __VdlySet__id_buffer__v53;
        CData/*0:0*/ __VdlySet__id_buffer__v54;
        CData/*0:0*/ __VdlySet__id_buffer__v55;
        CData/*0:0*/ __VdlySet__id_buffer__v56;
        CData/*0:0*/ __VdlySet__id_buffer__v57;
        CData/*0:0*/ __VdlySet__id_buffer__v58;
        CData/*0:0*/ __VdlySet__id_buffer__v59;
        CData/*0:0*/ __VdlySet__id_buffer__v60;
        CData/*0:0*/ __VdlySet__id_buffer__v61;
        CData/*0:0*/ __VdlySet__id_buffer__v62;
        CData/*0:0*/ __VdlySet__id_buffer__v63;
        VL_IN16(__PVT__tx_req_txnid_from_hn,11,0);
        VL_IN16(__PVT__tx_req_returntxnid_from_hn,11,0);
        VL_OUT16(__PVT__tx_req_txnid_to_sn,11,0);
        VL_OUT16(__PVT__tx_req_returntxnid_to_sn,11,0);
        VL_IN16(__PVT__vc0_rx_rsp_txnid_from_sn,11,0);
        VL_OUT16(__PVT__vc0_rx_rsp_txnid_to_hn,11,0);
        VL_IN16(__PVT__vc1_rx_rsp_txnid_from_sn,11,0);
        VL_OUT16(__PVT__vc1_rx_rsp_txnid_to_hn,11,0);
    };
    struct {
        VL_IN16(__PVT__vc0_rx_dat_txnid_from_sn,11,0);
        VL_IN16(__PVT__vc0_rx_dat_dbid_from_sn,11,0);
        VL_OUT16(__PVT__vc0_rx_dat_txnid_to_hn,11,0);
        VL_OUT16(__PVT__vc0_rx_dat_dbid_to_hn,11,0);
        VL_IN16(__PVT__vc1_rx_dat_txnid_from_sn,11,0);
        VL_IN16(__PVT__vc1_rx_dat_dbid_from_sn,11,0);
        VL_OUT16(__PVT__vc1_rx_dat_txnid_to_hn,11,0);
        VL_OUT16(__PVT__vc1_rx_dat_dbid_to_hn,11,0);
        SData/*11:0*/ __PVT__vc0_rx_dat_idx_to_clr;
        SData/*11:0*/ __PVT__vc1_rx_dat_idx_to_clr;
        SData/*11:0*/ __VdlyVal__id_buffer__v0;
        SData/*11:0*/ __VdlyVal__id_buffer__v1;
        SData/*11:0*/ __VdlyVal__id_buffer__v2;
        SData/*11:0*/ __VdlyVal__id_buffer__v3;
        SData/*11:0*/ __VdlyVal__id_buffer__v4;
        SData/*11:0*/ __VdlyVal__id_buffer__v5;
        SData/*11:0*/ __VdlyVal__id_buffer__v6;
        SData/*11:0*/ __VdlyVal__id_buffer__v7;
        SData/*11:0*/ __VdlyVal__id_buffer__v8;
        SData/*11:0*/ __VdlyVal__id_buffer__v9;
        SData/*11:0*/ __VdlyVal__id_buffer__v10;
        SData/*11:0*/ __VdlyVal__id_buffer__v11;
        SData/*11:0*/ __VdlyVal__id_buffer__v12;
        SData/*11:0*/ __VdlyVal__id_buffer__v13;
        SData/*11:0*/ __VdlyVal__id_buffer__v14;
        SData/*11:0*/ __VdlyVal__id_buffer__v15;
        SData/*11:0*/ __VdlyVal__id_buffer__v16;
        SData/*11:0*/ __VdlyVal__id_buffer__v17;
        SData/*11:0*/ __VdlyVal__id_buffer__v18;
        SData/*11:0*/ __VdlyVal__id_buffer__v19;
        SData/*11:0*/ __VdlyVal__id_buffer__v20;
        SData/*11:0*/ __VdlyVal__id_buffer__v21;
        SData/*11:0*/ __VdlyVal__id_buffer__v22;
        SData/*11:0*/ __VdlyVal__id_buffer__v23;
        SData/*11:0*/ __VdlyVal__id_buffer__v24;
        SData/*11:0*/ __VdlyVal__id_buffer__v25;
        SData/*11:0*/ __VdlyVal__id_buffer__v26;
        SData/*11:0*/ __VdlyVal__id_buffer__v27;
        SData/*11:0*/ __VdlyVal__id_buffer__v28;
        SData/*11:0*/ __VdlyVal__id_buffer__v29;
        SData/*11:0*/ __VdlyVal__id_buffer__v30;
        SData/*11:0*/ __VdlyVal__id_buffer__v31;
        IData/*31:0*/ __PVT__wren_id_buffer;
        IData/*31:0*/ __PVT__valid_buffer;
        IData/*31:0*/ __PVT__valid_buffer_nxt;
        IData/*31:0*/ __PVT__empty_valid_buffer;
        IData/*31:0*/ __PVT__valid_entry_match;
        IData/*31:0*/ __PVT__readnosnp_with_dmt_vec;
        IData/*31:0*/ __PVT__readnosnp_with_dmt_vec_nxt;
        IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
        IData/*31:0*/ __Vfunc_clog2_index__0__set_bit_location;
        IData/*31:0*/ __Vfunc_clog2_index__0__unnamedblk2__DOT__i;
        IData/*31:0*/ __Vfunc_all_bits_sum_up__1__set_bit_location;
        IData/*31:0*/ __Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i;
        IData/*31:0*/ __Vdly__valid_buffer;
        IData/*31:0*/ __Vdly__readnosnp_with_dmt_vec;
        VlUnpacked<SData/*11:0*/, 32> __PVT__id_buffer;
        VlUnpacked<SData/*11:0*/, 32> __PVT__id_buffer_nxt;
        VlUnpacked<CData/*1:0*/, 32> __PVT__rsp_cntr;
        VlUnpacked<CData/*1:0*/, 32> __PVT__rsp_cntr_nxt;
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_id_translator_sn__I20_Tc(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_id_translator_sn__I20_Tc();
    VL_UNCOPYABLE(Vsig_topology_top_sig_id_translator_sn__I20_Tc);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
