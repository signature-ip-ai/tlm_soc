// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_LINEARIZE_NODEID_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_LINEARIZE_NODEID_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_linearize_nodeid final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst_n,0,0);
        VL_IN8(__PVT__i_rcv_reqproc_nodeid_valid,0,0);
        VL_IN8(__PVT__i_xmt_compdata_nodeid_valid,0,0);
        VL_IN8(__PVT__i_xmt_resp_nodeid_valid,0,0);
        CData/*4:0*/ __PVT__next_available_idx;
        CData/*4:0*/ __PVT__rcv_reqproc_match_idx;
        CData/*0:0*/ __PVT__rcv_reqproc_node_id_found;
        CData/*4:0*/ __PVT__rcv_reqproc_final_linear_rn_idx;
        CData/*0:0*/ __PVT__rcv_reqproc_perform_allocation;
        CData/*4:0*/ __PVT__xmt_snpreq_input_linear_tgt_idx;
        CData/*4:0*/ __PVT__xmt_snpreq_input_linear_src_idx;
        CData/*4:0*/ __PVT__xmt_compdata_input_linear_rn_idx;
        CData/*4:0*/ __PVT__xmt_resp_input_linear_rn_idx;
        CData/*0:0*/ __Vlvbound_hb67d7372__0;
        CData/*0:0*/ __Vlvbound_h381e0c0f__0;
        CData/*0:0*/ __Vlvbound_h096faaac__0;
        CData/*0:0*/ __Vlvbound_h314b9366__0;
        CData/*4:0*/ __Vfunc_find_first_set__0__Vfuncout;
        CData/*4:0*/ __Vfunc_find_first_set__1__Vfuncout;
        CData/*4:0*/ __Vdly__next_available_idx;
        CData/*4:0*/ __VdlyDim0__linear_rn_nodeid_lut__v0;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v0;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v1;
        CData/*4:0*/ __VdlyDim0__linear_rn_nodeid_lut__v1;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v1;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v2;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v2;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v3;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v4;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v4;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v5;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v6;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v6;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v7;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v8;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v8;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v9;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v10;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v10;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v11;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v12;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v12;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v13;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v14;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v14;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v15;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v16;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v16;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v17;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v18;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v18;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v19;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v20;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v20;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v21;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v22;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v22;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v23;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v24;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v24;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v25;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v26;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v26;
    };
    struct {
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v27;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v28;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v28;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v29;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v30;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v30;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v31;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v32;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v32;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v33;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v34;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v34;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v35;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v36;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v36;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v37;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v38;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v38;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v39;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v40;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v40;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v41;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v42;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v42;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v43;
        CData/*0:0*/ __VdlyVal__linear_rn_nodeid_lut__v44;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v44;
        CData/*0:0*/ __VdlySet__linear_rn_nodeid_lut__v45;
        VL_IN16(__PVT__i_rcv_reqproc_full_node_id,10,0);
        VL_OUT16(__PVT__o_rcv_reqproc_linear_nodeid,10,0);
        VL_IN16(__PVT__i_rcv_rsp_dat_srcid,10,0);
        VL_OUT16(__PVT__o_rcv_rsp_dat_linear_srcid,10,0);
        VL_IN16(__PVT__i_xmt_snpreq_linear_tgtid,10,0);
        VL_OUT16(__PVT__o_xmt_snpreq_full_tgtid,10,0);
        VL_IN16(__PVT__i_xmt_snpreq_linear_srcid,10,0);
        VL_OUT16(__PVT__o_xmt_snpreq_full_srcid,10,0);
        VL_IN16(__PVT__i_xmt_compdata_linear_nodeid,10,0);
        VL_OUT16(__PVT__o_xmt_compdata_full_node_id,10,0);
        VL_IN16(__PVT__i_xmt_resp_linear_nodeid,10,0);
        VL_OUT16(__PVT__o_xmt_resp_full_node_id,10,0);
        SData/*10:0*/ __Vlvbound_h6b879fa4__0;
        SData/*10:0*/ __Vlvbound_hc860e4cb__0;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v0;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v3;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v5;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v7;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v9;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v11;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v13;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v15;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v17;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v19;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v21;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v23;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v25;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v27;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v29;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v31;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v33;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v35;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v37;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v39;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v41;
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v43;
    };
    struct {
        SData/*10:0*/ __VdlyVal__linear_rn_nodeid_lut__v45;
        IData/*21:0*/ __PVT__rcv_reqproc_match_vector;
        IData/*21:0*/ __PVT__rcv_rsp_dat_nodeid_match_vector;
        IData/*31:0*/ __PVT__unnamedblk2__DOT__i;
        IData/*31:0*/ __PVT__unnamedblk3__DOT__i;
        IData/*31:0*/ __PVT__unnamedblk4__DOT__i;
        IData/*21:0*/ __Vfunc_find_first_set__0__bit_vector;
        IData/*31:0*/ __Vfunc_find_first_set__0__unnamedblk1__DOT__i;
        IData/*21:0*/ __Vfunc_find_first_set__1__bit_vector;
        IData/*31:0*/ __Vfunc_find_first_set__1__unnamedblk1__DOT__i;
        VlUnpacked<SData/*11:0*/, 22> __PVT__linear_rn_nodeid_lut;
    };

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_linearize_nodeid(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_linearize_nodeid();
    VL_UNCOPYABLE(Vsig_topology_top_sig_linearize_nodeid);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
