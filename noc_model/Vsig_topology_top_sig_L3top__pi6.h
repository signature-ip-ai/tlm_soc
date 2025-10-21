// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_L3TOP__PI6_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_L3TOP__PI6_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_slc_bypass__pi20;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_L3top__pi6 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_slc_bypass__pi20* __PVT__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__cc_clk,0,0);
    VL_IN8(__PVT__cc_gclk,0,0);
    VL_IN8(__PVT__rstb_cc_clk,0,0);
    VL_IN8(__PVT__L3clk,0,0);
    VL_IN8(__PVT__L3gclk,0,0);
    VL_IN8(__PVT__rstb_L3clk,0,0);
    VL_IN8(__PVT__flush_cache,0,0);
    VL_OUT8(__PVT__flush_cache_done,0,0);
    VL_IN8(__PVT__cc_reqflit_valid,0,0);
    VL_OUT8(__PVT__l3reqflit_fifo_full,0,0);
    VL_OUT8(__PVT__l3_rspvalid,0,0);
    VL_IN8(__PVT__l3_wrdata_valid,0,0);
    VL_OUT8(__PVT__l3_wrdatabuf_hasroom,0,0);
    VL_IN8(__PVT__l3_drop_wrdata,0,0);
    VL_OUT8(__PVT__compdata_valid,0,0);
    VL_OUT8(__PVT__compresperr_tocc,1,0);
    VL_OUT8(__PVT__L3_TX_REQFLITPEND,0,0);
    VL_OUT8(__PVT__L3_TX_REQFLITV,0,0);
    VL_IN8(__PVT__L3_TX_REQLCRDV,0,0);
    VL_IN8(__PVT__L3_RX_DATFLITPEND,0,0);
    VL_IN8(__PVT__L3_RX_DATFLITV,0,0);
    VL_OUT8(__PVT__L3_RX_DATLCRDV,0,0);
    VL_IN8(__PVT__L3_RX_RSPFLITPEND,0,0);
    VL_IN8(__PVT__L3_RX_RSPFLITV,0,0);
    VL_OUT8(__PVT__L3_RX_RSPLCRDV,0,0);
    VL_OUT8(__PVT__L3_TX_DATFLITPEND,0,0);
    VL_OUT8(__PVT__L3_TX_DATFLITV,0,0);
    VL_IN8(__PVT__L3_TX_DATLCRDV,0,0);
    VL_IN8(__PVT__mycluster_id,7,0);
    VL_OUT8(__PVT__slc_init_complete,0,0);
    CData/*0:0*/ __Vcellout__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__ic_TX_REQFLIT_snp_or_req_bit;
    CData/*2:0*/ __Vcellinp__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__cc_reqflit_metadata;
    VL_IN16(__PVT__dbid_from_l3,11,0);
    VL_OUT16(__PVT__comptxnid_tocc,12,0);
    VL_IN16(__PVT__xy_coord_all_pm,10,0);
    VL_INW(__PVT__cc_reqflit,153,0,5);
    VL_OUTW(__PVT__l3_rspflit,72,0,3);
    VL_INW(__PVT__l3_wrdata,511,0,16);
    VL_OUTW(__PVT__compdata_tocc,511,0,16);
    VL_OUTW(__PVT__L3_TX_REQFLIT,151,0,5);
    VL_INW(__PVT__L3_RX_DATFLIT,679,0,22);
    VL_INW(__PVT__L3_RX_RSPFLIT,72,0,3);
    VL_OUTW(__PVT__L3_TX_DATFLIT,679,0,22);
    VL_IN(__PVT__cm_homeaddr_base_all_pm,27,0);
    VL_IN(__PVT__cm_homeaddr_limit_all_pm,28,0);
    VlWide<16>/*511:0*/ __PVT__l3_wrdata_int;
    VlWide<16>/*511:0*/ __PVT__compdata_int_tocc;
    VlWide<5>/*150:0*/ __Vcellout__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__ic_TX_REQFLIT;
    VlWide<5>/*150:0*/ __Vcellinp__sig_slc_bypass_gen_blk__DOT__sig_slc_bypass_0__cc_reqflit;
    VL_IN64(__PVT__l3_wrbe,63,0);

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_L3top__pi6(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_L3top__pi6();
    VL_UNCOPYABLE(Vsig_topology_top_sig_L3top__pi6);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
