// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_SRAM_MODEL__FA_FB45_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_SRAM_MODEL__FA_FB45_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_sram_model__Fa_FB45 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__wrclk,0,0);
    VL_IN8(__PVT__rdclk,0,0);
    VL_IN8(__PVT__wren,0,0);
    VL_IN8(__PVT__rden,0,0);
    CData/*0:0*/ __VdlySet__ram__v0;
    VL_IN16(__PVT__wrptr,9,0);
    VL_IN16(__PVT__rdptr,9,0);
    SData/*9:0*/ __VdlyDim0__ram__v0;
    VL_INW(__PVT__wrdata,68,0,3);
    VL_OUTW(__PVT__rddata,68,0,3);
    VlWide<3>/*68:0*/ __Vdly__rddata;
    VlWide<3>/*68:0*/ __VdlyVal__ram__v0;
    VlUnpacked<VlWide<3>/*68:0*/, 1024> __PVT__ram;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_sram_model__Fa_FB45(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_sram_model__Fa_FB45();
    VL_UNCOPYABLE(Vsig_topology_top_sig_sram_model__Fa_FB45);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
