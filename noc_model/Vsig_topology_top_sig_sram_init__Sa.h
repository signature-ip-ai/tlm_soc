// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_SRAM_INIT__SA_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_SRAM_INIT__SA_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_sram_init__Sa final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_n_i,0,0);
    VL_OUT8(__PVT__sram_init_en_o,0,0);
    VL_OUT8(__PVT__sram_init_complete_o,0,0);
    CData/*0:0*/ __PVT__sram_init_state;
    CData/*0:0*/ __PVT__sram_init_state_nxt;
    CData/*0:0*/ __PVT__sram_init_en_nxt;
    CData/*0:0*/ __PVT__sram_ptr_hit_max_value;
    CData/*0:0*/ __Vdly__sram_init_state;
    CData/*0:0*/ __Vdly__sram_init_en_o;
    CData/*0:0*/ __Vdly__sram_init_complete_o;
    VL_OUT16(__PVT__sram_ptr_o,9,0);
    SData/*9:0*/ __Vdly__sram_ptr_o;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_sram_init__Sa(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_sram_init__Sa();
    VL_UNCOPYABLE(Vsig_topology_top_sig_sram_init__Sa);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
