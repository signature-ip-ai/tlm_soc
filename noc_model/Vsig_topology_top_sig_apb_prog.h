// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_APB_PROG_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_APB_PROG_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_apb_prog final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__PCLK_prog,0,0);
    VL_IN8(__PVT__PRESETn_prog,0,0);
    VL_IN8(__PVT__PSEL_prog,0,0);
    VL_IN8(__PVT__PENABLE_prog,0,0);
    VL_IN8(__PVT__PWRITE_prog,0,0);
    VL_IN8(__PVT__PSTRB_prog,3,0);
    VL_OUT8(__PVT__PREADY_prog,0,0);
    VL_OUT8(__PVT__PSLVERR_prog,0,0);
    VL_OUT8(__PVT__reg_wren_prog,0,0);
    VL_OUT8(__PVT__reg_wrstrb_prog,3,0);
    VL_IN8(__PVT__wrdata_rdy_prog,0,0);
    VL_OUT8(__PVT__reg_rden_prog,0,0);
    VL_IN8(__PVT__reg_rddata_valid_prog,0,0);
    CData/*2:0*/ __PVT__apb_st;
    CData/*2:0*/ __PVT__apb_st_nxt;
    CData/*2:0*/ __Vdly__apb_st;
    VL_IN(__PVT__PADDR_prog,31,0);
    VL_IN(__PVT__PWDATA_prog,31,0);
    VL_OUT(__PVT__PRDATA_prog,31,0);
    VL_OUT(__PVT__reg_address_prog,31,0);
    VL_OUT(__PVT__reg_wrdata_prog,31,0);
    VL_IN(__PVT__reg_rddata_prog,31,0);
    IData/*31:0*/ __PVT__PRDATA_prog_nxt;
    IData/*31:0*/ __Vdly__PRDATA_prog;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_apb_prog(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_apb_prog();
    VL_UNCOPYABLE(Vsig_topology_top_sig_apb_prog);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
