// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CC_DATTXFLIT_TOP__PI33_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CC_DATTXFLIT_TOP__PI33_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_cc_arbtop;
class Vsig_topology_top_sig_cc_txflit_mux__F2ae;
class Vsig_topology_top_sig_fifo_synchclk_flop__pi52;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_cc_dattxflit_top__pi33 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_cc_arbtop* __PVT__sig_cc_arbtop_0;
    Vsig_topology_top_sig_cc_txflit_mux__F2ae* __PVT__sig_cc_txflit_mux_0;
    Vsig_topology_top_sig_fifo_synchclk_flop__pi52* __PVT__flit_store_fifo_0;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__ic_gclk,0,0);
    VL_IN8(__PVT__rstb_ic_clk,0,0);
    VL_IN8(__PVT__ic_clk,0,0);
    VL_OUT8(__PVT__flitv_out,0,0);
    VL_IN8(__PVT__porthas_credits,0,0);
    VL_IN8(__PVT__porthas_datgnt_fromcc,0,0);
    CData/*0:0*/ __PVT__wren_flit_store_fifo;
    CData/*0:0*/ __PVT__flitv_out_mux;
    CData/*4:0*/ __PVT__available_fiforoom;
    CData/*4:0*/ __PVT__available_fiforoom_nxt;
    CData/*0:0*/ __PVT__consumed_fiforoom;
    CData/*0:0*/ __PVT__read_en_credit_fifo;
    CData/*2:0*/ __PVT__flit_storefifo_has_space;
    CData/*0:0*/ __PVT__empty_flit_store_fifo;
    CData/*0:0*/ __PVT__rden_storefifo;
    CData/*1:0*/ __PVT__dataid;
    CData/*1:0*/ __PVT__dataid_nxt;
    CData/*0:0*/ __PVT__opened_fiforoom;
    CData/*0:0*/ __PVT__store_fifo_full;
    CData/*1:0*/ __PVT__data_beats;
    CData/*1:0*/ __PVT__data_beats_nxt;
    CData/*0:0*/ __PVT__full_credit_fifo;
    CData/*0:0*/ __PVT__rden_storefifo_bypass;
    CData/*4:0*/ __Vdly__available_fiforoom;
    VL_IN16(__PVT__req_vec_vc0,9,0);
    VL_IN16(__PVT__end_req_vec_vc0,9,0);
    VL_IN16(__PVT__req_vec_vc1,9,0);
    VL_IN16(__PVT__end_req_vec_vc1,9,0);
    VL_OUT16(__PVT__gnt_vec_vc0,9,0);
    VL_OUT16(__PVT__gnt_vec_vc1,9,0);
    VL_IN16(__PVT__valid_req_vec_vc0,9,0);
    VL_IN16(__PVT__valid_req_vec_vc1,9,0);
    VL_INW(__PVT__flit_all_vc0,6859,0,215);
    VL_INW(__PVT__flit_all_vc1,6859,0,215);
    VL_OUTW(__PVT__flit_out,679,0,22);
    VlWide<22>/*685:0*/ __PVT__flit_out_mux;
    VlWide<22>/*679:0*/ __PVT__write_data_fifo;
    VlWide<22>/*679:0*/ __PVT__readdata_storefifo;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_cc_dattxflit_top__pi33(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_cc_dattxflit_top__pi33();
    VL_UNCOPYABLE(Vsig_topology_top_sig_cc_dattxflit_top__pi33);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
