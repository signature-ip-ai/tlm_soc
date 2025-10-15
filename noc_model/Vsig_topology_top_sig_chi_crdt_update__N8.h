// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CHI_CRDT_UPDATE__N8_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CHI_CRDT_UPDATE__N8_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_chi_crdt_update__N8 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__cc_clk,0,0);
    VL_IN8(__PVT__rstb_cc_clk,0,0);
    VL_IN8(__PVT__enable_init_update,0,0);
    VL_IN8(__PVT__send_working_update,0,0);
    VL_OUT8(__PVT__drive_xLCRDV,0,0);
    CData/*4:0*/ __PVT__init_crdt_ctr;
    CData/*4:0*/ __PVT__init_crdt_ctr_nxt;
    CData/*0:0*/ __PVT__req_init_update;
    CData/*0:0*/ __PVT__gnt_init_update;
    CData/*3:0*/ __PVT__init_update_ctr;
    CData/*3:0*/ __PVT__init_update_ctr_nxt;
    CData/*4:0*/ __Vdly__init_crdt_ctr;
    CData/*3:0*/ __Vdly__init_update_ctr;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_chi_crdt_update__N8(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_chi_crdt_update__N8();
    VL_UNCOPYABLE(Vsig_topology_top_sig_chi_crdt_update__N8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
