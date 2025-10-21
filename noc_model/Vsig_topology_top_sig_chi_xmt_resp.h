// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CHI_XMT_RESP_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CHI_XMT_RESP_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_chi_crdt_recv;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_chi_xmt_resp final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_chi_crdt_recv* __PVT__sig_chi_crdt_recv_0;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__cc_gclk,0,0);
    VL_IN8(__PVT__rstb_cc_clk,0,0);
    VL_IN8(__PVT__cc_clk,0,0);
    VL_OUT8(__PVT__ic_TX_RSPFLITPEND,0,0);
    VL_OUT8(__PVT__ic_TX_RSPFLITV,0,0);
    VL_IN8(__PVT__ic_TX_RSPLCRDV,0,0);
    VL_IN8(__PVT__req_resp_snpreq,0,0);
    VL_IN8(__PVT__req_resp_compdata,0,0);
    VL_IN8(__PVT__req_retry_ack,0,0);
    VL_IN8(__PVT__req_pcrd_grant,0,0);
    VL_IN8(__PVT__req_readreceipt,0,0);
    VL_OUT8(__PVT__o_xmt_resp_nodeid_valid,0,0);
    VL_OUT8(__PVT__grant_resp,4,0);
    CData/*0:0*/ __PVT__ic_TX_RSPFLITV_nxt;
    CData/*0:0*/ __PVT__consumed_crdt;
    CData/*3:0*/ __PVT__available_credits;
    CData/*0:0*/ __PVT__link_crdt_avlble;
    CData/*4:0*/ __PVT__req_all;
    CData/*0:0*/ __PVT__rev_xform_linear_to_actual;
    CData/*0:0*/ __Vdly__ic_TX_RSPFLITV;
    VL_OUT16(__PVT__o_xmt_resp_linear_nodeid,10,0);
    VL_IN16(__PVT__i_xmt_resp_full_node_id,10,0);
    SData/*10:0*/ __PVT__tgt_nodeid_grid;
    SData/*10:0*/ __PVT__final_tgt_id;
    VL_OUTW(__PVT__ic_TX_RSPFLIT,72,0,3);
    VL_INW(__PVT__respbody_snpreq,73,0,3);
    VL_INW(__PVT__respbody_compdata,73,0,3);
    VL_INW(__PVT__respbody_rdrcpt,73,0,3);
    VL_INW(__PVT__respbody_retryack,73,0,3);
    VL_INW(__PVT__respbody_pcrdgnt,73,0,3);
    VlWide<3>/*73:0*/ __PVT__ic_TX_RSPFLIT_s;
    VlWide<3>/*72:0*/ __Vdly__ic_TX_RSPFLIT;
    VlWide<3>/*72:0*/ __PVT__ic_TX_RSPFLIT_nxt;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_chi_xmt_resp(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_chi_xmt_resp();
    VL_UNCOPYABLE(Vsig_topology_top_sig_chi_xmt_resp);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
