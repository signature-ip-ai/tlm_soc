// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_L3_RXTOP__PI22_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_L3_RXTOP__PI22_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_ic_initcrdt_enable;
class Vsig_topology_top_sig_l3_rx_datproc__pi41;
class Vsig_topology_top_sig_l3_rx_reqproc__pi40;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_l3_rxtop__pi22 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_l3_rx_reqproc__pi40* __PVT__sig_l3_rx_reqproc_0;
    Vsig_topology_top_sig_l3_rx_datproc__pi41* __PVT__sig_l3_rx_datproc_0;
    Vsig_topology_top_sig_ic_initcrdt_enable* __PVT__sig_ic_initcrdt_enable_0;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__ic_clk,0,0);
    VL_IN8(__PVT__ic_gclk,0,0);
    VL_IN8(__PVT__rstb_ic_clk,0,0);
    VL_IN8(__PVT__mycluster_id,7,0);
    VL_IN8(__PVT__myproc_id,2,0);
    VL_IN8(__PVT__ic_RX_SNPFLITPEND,0,0);
    VL_IN8(__PVT__ic_RX_SNPFLITV,0,0);
    VL_OUT8(__PVT__ic_RX_SNPLCRDV,0,0);
    VL_IN8(__PVT__ic_RX_DATFLITPEND,0,0);
    VL_IN8(__PVT__ic_RX_DATFLITV,0,0);
    VL_OUT8(__PVT__ic_RX_DATLCRDV,0,0);
    VL_IN8(__PVT__gnt_reqf_vc0,0,0);
    VL_IN8(__PVT__gnt_datf_vc0,0,0);
    VL_IN8(__PVT__gnt_reqf_vc1,0,0);
    VL_IN8(__PVT__gnt_datf_vc1,0,0);
    VL_OUT8(__PVT__end_flit_out_reqf_vc0,0,0);
    VL_OUT8(__PVT__end_flit_out_datf_vc0,0,0);
    VL_OUT8(__PVT__end_flit_out_reqf_vc1,0,0);
    VL_OUT8(__PVT__end_flit_out_datf_vc1,0,0);
    VL_OUT8(__PVT__valid_flit_out_datf_vc0,0,0);
    VL_OUT8(__PVT__valid_flit_out_datf_vc1,0,0);
    VL_OUT8(__PVT__valid_flit_out_reqf_vc0,0,0);
    VL_OUT8(__PVT__valid_flit_out_reqf_vc1,0,0);
    VL_IN8(__PVT__icx_exist_req,3,0);
    VL_IN8(__PVT__icx_exist_rsp,3,0);
    VL_IN8(__PVT__icx_exist_dat,3,0);
    VL_IN8(__PVT__enable_balanced_routing,0,0);
    CData/*0:0*/ __PVT__enable_init_update;
    VL_OUT16(__PVT__req_reqf_vc0,9,0);
    VL_OUT16(__PVT__req_datf_vc0,9,0);
    VL_OUT16(__PVT__req_reqf_vc1,9,0);
    VL_OUT16(__PVT__req_datf_vc1,9,0);
    VL_INW(__PVT__ic_RX_SNPFLIT,151,0,5);
    VL_INW(__PVT__ic_RX_DATFLIT,679,0,22);
    VL_OUTW(__PVT__flit_out_reqf_vc0,160,0,6);
    VL_OUTW(__PVT__flit_out_datf_vc0,685,0,22);
    VL_OUTW(__PVT__flit_out_reqf_vc1,160,0,6);
    VL_OUTW(__PVT__flit_out_datf_vc1,685,0,22);
    VL_IN16(__PVT__i_ucie_bridge_locations[1],10,0);

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_l3_rxtop__pi22(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_l3_rxtop__pi22();
    VL_UNCOPYABLE(Vsig_topology_top_sig_l3_rxtop__pi22);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
