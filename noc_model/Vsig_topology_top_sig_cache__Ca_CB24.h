// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CACHE__CA_CB24_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CACHE__CA_CB24_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vsig_topology_top_sig_sram_model__Fa_FB45;


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_cache__Ca_CB24 final : public VerilatedModule {
  public:
    // CELLS
    Vsig_topology_top_sig_sram_model__Fa_FB45* __PVT__sig_sram_valid_tag_data;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__cache_clk,0,0);
    VL_IN8(__PVT__rstb_cache_clk,0,0);
    VL_IN8(__PVT__wren_cache,0,0);
    VL_IN8(__PVT__sel_wren_cohc,0,0);
    VL_IN8(__PVT__wrvalid_cache,0,0);
    VL_IN8(__PVT__inpendingq_matches_collnq,0,0);
    VL_IN8(__PVT__rden_cache,0,0);
    VL_IN8(__PVT__rden_cache_pre,0,0);
    VL_OUT8(__PVT__valid_rddata_cache,0,0);
    VL_OUT8(__PVT__cache_hit,0,0);
    VL_OUT8(__PVT__in_pendingq_cache,0,0);
    CData/*0:0*/ __PVT__rdvalid_cache;
    CData/*0:0*/ __PVT__clr_in_pendingq;
    CData/*0:0*/ __PVT__rden_cache_d1;
    CData/*0:0*/ __PVT__rdvalid_cache_nxt;
    CData/*0:0*/ __Vdly__rden_cache_d1;
    CData/*0:0*/ __Vdly__rdvalid_cache;
    VL_IN16(__PVT__cache_index_wr,9,0);
    VL_IN16(__PVT__cache_index_rd,9,0);
    VL_IN16(__PVT__cache_index_rd_pre,9,0);
    SData/*9:0*/ __PVT__cache_index_rd_d1;
    SData/*9:0*/ __Vdly__cache_index_rd_d1;
    VL_IN(__PVT__wrdata_cache,31,0);
    VL_OUT(__PVT__rddata_cache,31,0);
    VlWide<32>/*1023:0*/ __PVT__in_pendingq;
    VlWide<32>/*1023:0*/ __PVT__in_pendingq_nxt;
    IData/*31:0*/ __PVT__rddata_cache_nxt;
    VlWide<3>/*68:0*/ __Vcellout__sig_sram_valid_tag_data__rddata;
    VlWide<3>/*68:0*/ __Vcellinp__sig_sram_valid_tag_data__wrdata;
    VlWide<32>/*1023:0*/ __Vdly__in_pendingq;
    IData/*31:0*/ __Vdly__rddata_cache;
    VL_IN64(__PVT__cache_tag_wr,35,0);
    VL_IN64(__PVT__cache_tag_rd,35,0);
    VL_OUT64(__PVT__rdout_tag_value,35,0);
    QData/*35:0*/ __PVT__rdtag_cache;
    QData/*35:0*/ __PVT__rdtag_cache_nxt;
    QData/*35:0*/ __Vdly__rdtag_cache;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_cache__Ca_CB24(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_cache__Ca_CB24();
    VL_UNCOPYABLE(Vsig_topology_top_sig_cache__Ca_CB24);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
