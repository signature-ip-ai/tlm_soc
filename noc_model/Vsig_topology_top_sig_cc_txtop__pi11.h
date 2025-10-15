// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CC_TXTOP__PI11_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CC_TXTOP__PI11_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_cc_dattxflit_top__pi32;
class Vsig_topology_top_sig_cc_reqtxflit_top__pi31;
class Vsig_topology_top_sig_cc_rsptxflit_top__F3;
class Vsig_topology_top_sig_ic_crdt_recv;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_cc_txtop__pi11 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_cc_reqtxflit_top__pi31* __PVT__sig_cc_reqtxflit_top_0;
    Vsig_topology_top_sig_cc_rsptxflit_top__F3* __PVT__sig_cc_rsptxflit_top_0;
    Vsig_topology_top_sig_cc_dattxflit_top__pi32* __PVT__sig_cc_dattxflit_top_0;
    Vsig_topology_top_sig_ic_crdt_recv* __PVT__sig_ic_crdt_recv_req;
    Vsig_topology_top_sig_ic_crdt_recv* __PVT__sig_ic_crdt_recv_rsp;
    Vsig_topology_top_sig_ic_crdt_recv* __PVT__sig_ic_crdt_recv_dat;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__ic_clk,0,0);
    VL_IN8(__PVT__ic_gclk,0,0);
    VL_IN8(__PVT__rstb_ic_clk,0,0);
    VL_OUT8(__PVT__flitv_out_req,0,0);
    VL_OUT8(__PVT__flitv_out_rsp,0,0);
    VL_OUT8(__PVT__flitv_out_dat,0,0);
    VL_IN8(__PVT__reqlcrdv,0,0);
    VL_IN8(__PVT__rsplcrdv,0,0);
    VL_IN8(__PVT__datlcrdv,0,0);
    VL_IN8(__PVT__porthas_datgnt_fromcc,0,0);
    VL_IN8(__PVT__porthas_rspgnt_fromcc,0,0);
    CData/*0:0*/ __PVT__porthas_credits_req;
    CData/*0:0*/ __PVT__porthas_credits_rsp;
    CData/*0:0*/ __PVT__porthas_credits_dat;
    CData/*3:0*/ __PVT__available_credits_req;
    CData/*3:0*/ __PVT__available_credits_rsp;
    CData/*3:0*/ __PVT__available_credits_dat;
    CData/*0:0*/ __PVT__consumed_crdt_req;
    CData/*0:0*/ __PVT__consumed_crdt_rsp;
    CData/*0:0*/ __PVT__consumed_crdt_dat;
    VL_IN16(__PVT__req_vec_req_vc0,9,0);
    VL_IN16(__PVT__end_req_vec_req_vc0,9,0);
    VL_IN16(__PVT__req_vec_req_vc1,9,0);
    VL_IN16(__PVT__end_req_vec_req_vc1,9,0);
    VL_OUT16(__PVT__gnt_vec_req_vc0,9,0);
    VL_OUT16(__PVT__gnt_vec_req_vc1,9,0);
    VL_IN16(__PVT__req_vec_rsp_vc0,9,0);
    VL_IN16(__PVT__end_req_vec_rsp_vc0,9,0);
    VL_IN16(__PVT__req_vec_rsp_vc1,9,0);
    VL_IN16(__PVT__end_req_vec_rsp_vc1,9,0);
    VL_OUT16(__PVT__gnt_vec_rsp_vc0,9,0);
    VL_OUT16(__PVT__gnt_vec_rsp_vc1,9,0);
    VL_IN16(__PVT__req_vec_dat_vc0,9,0);
    VL_IN16(__PVT__end_req_vec_dat_vc0,9,0);
    VL_IN16(__PVT__req_vec_dat_vc1,9,0);
    VL_IN16(__PVT__end_req_vec_dat_vc1,9,0);
    VL_OUT16(__PVT__gnt_vec_dat_vc0,9,0);
    VL_OUT16(__PVT__gnt_vec_dat_vc1,9,0);
    VL_IN16(__PVT__valid_req_vec_dat_vc0,9,0);
    VL_IN16(__PVT__valid_req_vec_dat_vc1,9,0);
    VL_IN16(__PVT__valid_req_vec_req_vc0,9,0);
    VL_IN16(__PVT__valid_req_vec_req_vc1,9,0);
    VL_INW(__PVT__flit_all_req_vc0,1609,0,51);
    VL_INW(__PVT__flit_all_req_vc1,1609,0,51);
    VL_INW(__PVT__flit_all_rsp_vc0,789,0,25);
    VL_INW(__PVT__flit_all_rsp_vc1,789,0,25);
    VL_INW(__PVT__flit_all_dat_vc0,6859,0,215);
    VL_INW(__PVT__flit_all_dat_vc1,6859,0,215);
    VL_OUTW(__PVT__flit_out_req,150,0,5);
    VL_OUTW(__PVT__flit_out_rsp,72,0,3);
    VL_OUTW(__PVT__flit_out_dat,679,0,22);

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_cc_txtop__pi11(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_cc_txtop__pi11();
    VL_UNCOPYABLE(Vsig_topology_top_sig_cc_txtop__pi11);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
