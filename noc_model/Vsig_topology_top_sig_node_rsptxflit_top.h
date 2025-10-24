// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_NODE_RSPTXFLIT_TOP_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_NODE_RSPTXFLIT_TOP_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_fifo_synchclk_flop__pi67;
class Vsig_topology_top_sig_node_arbtop;
class Vsig_topology_top_sig_node_txflit_mux__F4f;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_node_rsptxflit_top final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_node_arbtop* __PVT__sig_node_arbtop_0;
    Vsig_topology_top_sig_node_txflit_mux__F4f* __PVT__sig_node_txflit_mux_0;
    Vsig_topology_top_sig_fifo_synchclk_flop__pi67* __PVT__sync_fifo_gen__DOT__flit_store_fifo_0;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__ic_clk,0,0);
    VL_IN8(__PVT__rstb_ic_clk,0,0);
    VL_IN8(__PVT__intfrx_clk,0,0);
    VL_IN8(__PVT__rstb_intfrx_clk,0,0);
    VL_OUT8(__PVT__flitv_out,0,0);
    VL_IN8(__PVT__porthas_credits,0,0);
    VL_OUT8(__PVT__empty_flit_store_fifo,0,0);
    VL_OUT8(__PVT__flitv_to_id_translator,0,0);
    VL_IN8(__PVT__id_translator_full,0,0);
    CData/*0:0*/ __PVT__wren_flit_store_fifo;
    CData/*0:0*/ __PVT__flitv_out_mux;
    CData/*4:0*/ __PVT__available_fiforoom;
    CData/*4:0*/ __PVT__available_fiforoom_nxt;
    CData/*0:0*/ __PVT__consumed_fiforoom;
    CData/*2:0*/ __PVT__flit_storefifo_has_space;
    CData/*0:0*/ __PVT__rden_storefifo;
    CData/*0:0*/ __PVT__opened_fiforoom;
    CData/*0:0*/ __PVT__full_credit_fifo;
    CData/*0:0*/ __PVT__rden_storefifo_bypass;
    CData/*4:0*/ __Vdly__available_fiforoom;
    SData/*9:0*/ __PVT__flit_handshake_vc0_if_gnt_recv;
    SData/*9:0*/ __PVT__flit_handshake_vc1_if_gnt_recv;
    SData/*9:0*/ __Vcellinp__sig_node_arbtop_0__end_req_vec_vc1;
    SData/*9:0*/ __Vcellinp__sig_node_arbtop_0__req_vec_vc1;
    SData/*9:0*/ __Vcellinp__sig_node_arbtop_0__end_req_vec_vc0;
    SData/*9:0*/ __Vcellinp__sig_node_arbtop_0__req_vec_vc0;
    VL_INW(__PVT__flit_all_vc0,789,0,25);
    VL_INW(__PVT__flit_all_vc1,789,0,25);
    VL_OUTW(__PVT__flit_out,72,0,3);
    VL_OUTW(__PVT__flit_to_id_translator,72,0,3);
    VL_INW(__PVT__flit_from_id_translator,72,0,3);
    VlWide<3>/*78:0*/ __PVT__flit_out_mux;
    VlWide<3>/*72:0*/ __PVT__write_data_fifo;
    VlWide<3>/*72:0*/ __PVT__readdata_storefifo;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_node_rsptxflit_top(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_node_rsptxflit_top();
    VL_UNCOPYABLE(Vsig_topology_top_sig_node_rsptxflit_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
