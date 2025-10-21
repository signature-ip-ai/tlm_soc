// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_NODE_TXFLIT_MUX__FA1_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_NODE_TXFLIT_MUX__FA1_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_node_txflit_mux__Fa1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__ic_clk,0,0);
    VL_IN8(__PVT__rstb_ic_clk,0,0);
    VL_OUT8(__PVT__flitv_out,0,0);
    CData/*0:0*/ __PVT__flitv_out_nxt;
    CData/*0:0*/ __PVT__any_gnt_vc0;
    CData/*0:0*/ __PVT__any_gnt_vc1;
    CData/*0:0*/ __Vdly__flitv_out;
    VL_IN16(__PVT__gnt_vec_vc0,9,0);
    VL_IN16(__PVT__gnt_vec_vc1,9,0);
    VL_IN16(__PVT__valid_flit_vc0,9,0);
    VL_IN16(__PVT__valid_flit_vc1,9,0);
    SData/*9:0*/ __PVT__gnt_vec_eithervc;
    SData/*9:0*/ __PVT__gnt_qual_valid_vc0;
    SData/*9:0*/ __PVT__gnt_qual_valid_vc1;
    VL_INW(__PVT__flit_all_vc0,1609,0,51);
    VL_INW(__PVT__flit_all_vc1,1609,0,51);
    VL_OUTW(__PVT__flit_out,160,0,6);
    VlWide<6>/*160:0*/ __PVT__flit_out_nxt;
    IData/*31:0*/ __PVT__i;
    VlWide<6>/*160:0*/ __Vdly__flit_out;
    VlUnpacked<VlWide<6>/*160:0*/, 10> __PVT__flit_in_vc0;
    VlUnpacked<VlWide<6>/*160:0*/, 10> __PVT__flit_in_vc1;
    VlUnpacked<VlWide<6>/*160:0*/, 10> __PVT__flit_in_eithervc;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_node_txflit_mux__Fa1(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_node_txflit_mux__Fa1();
    VL_UNCOPYABLE(Vsig_topology_top_sig_node_txflit_mux__Fa1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
