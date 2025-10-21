// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_L3_RSPTXFLIT_TOP__F3_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_L3_RSPTXFLIT_TOP__F3_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_fifo_synchclk_flop__pi50;
class Vsig_topology_top_sig_l3_arbtop;
class Vsig_topology_top_sig_l3_txflit_mux__F4f;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_l3_rsptxflit_top__F3 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_l3_arbtop* __PVT__sig_l3_arbtop_0;
    Vsig_topology_top_sig_l3_txflit_mux__F4f* __PVT__sig_l3_txflit_mux_0;
    Vsig_topology_top_sig_fifo_synchclk_flop__pi50* __PVT__flit_store_fifo_0;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__ic_gclk,0,0);
    VL_IN8(__PVT__rstb_ic_clk,0,0);
    VL_IN8(__PVT__ic_clk,0,0);
    VL_OUT8(__PVT__flitv_out,0,0);
    VL_IN8(__PVT__porthas_credits,0,0);
    CData/*0:0*/ __PVT__wren_flit_store_fifo;
    CData/*0:0*/ __PVT__flitv_out_mux;
    CData/*4:0*/ __PVT__available_fiforoom;
    CData/*4:0*/ __PVT__available_fiforoom_nxt;
    CData/*0:0*/ __PVT__consumed_fiforoom;
    CData/*2:0*/ __PVT__flit_storefifo_has_space;
    CData/*0:0*/ __PVT__full_flit_store_fifo;
    CData/*0:0*/ __PVT__empty_flit_store_fifo;
    CData/*0:0*/ __PVT__rden_storefifo;
    CData/*0:0*/ __PVT__opened_fiforoom;
    CData/*0:0*/ __PVT__rden_storefifo_bypass;
    CData/*0:0*/ __PVT__full_credit_fifo;
    CData/*4:0*/ __Vdly__available_fiforoom;
    VL_IN16(__PVT__req_vec_vc0,9,0);
    VL_IN16(__PVT__end_req_vec_vc0,9,0);
    VL_IN16(__PVT__req_vec_vc1,9,0);
    VL_IN16(__PVT__end_req_vec_vc1,9,0);
    VL_OUT16(__PVT__gnt_vec_vc0,9,0);
    VL_OUT16(__PVT__gnt_vec_vc1,9,0);
    VL_INW(__PVT__flit_all_vc0,789,0,25);
    VL_INW(__PVT__flit_all_vc1,789,0,25);
    VL_OUTW(__PVT__flit_out,72,0,3);
    VlWide<3>/*78:0*/ __PVT__flit_out_mux;
    VlWide<3>/*72:0*/ __PVT__write_data_fifo;
    VlWide<3>/*72:0*/ __PVT__readdata_storefifo;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_l3_rsptxflit_top__F3(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_l3_rsptxflit_top__F3();
    VL_UNCOPYABLE(Vsig_topology_top_sig_l3_rsptxflit_top__F3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
