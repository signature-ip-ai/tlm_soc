// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_SYSTEM_MONITOR__A2E_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_SYSTEM_MONITOR__A2E_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_system_monitor__A2e final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__aclk,0,0);
    VL_IN8(__PVT__aresetn,0,0);
    VL_IN8(__PVT__i_excl_load_reqv,0,0);
    VL_IN8(__PVT__i_excl_load_lpid,4,0);
    VL_IN8(__PVT__i_excl_load_size,2,0);
    VL_OUT8(__PVT__o_buffer_full,0,0);
    VL_IN8(__PVT__i_excl_store_reqv,1,0);
    VL_IN8(__PVT__i_excl_store_lpid,4,0);
    VL_IN8(__PVT__i_excl_store_size,2,0);
    VL_OUT8(__PVT__o_excl_store_pass,0,0);
    VL_IN8(__PVT__i_atom_res_update,0,0);
    CData/*0:0*/ __PVT__buffer_full;
    VL_IN16(__PVT__i_excl_load_srcid,10,0);
    VL_IN16(__PVT__i_excl_store_srcid,10,0);
    IData/*31:0*/ __PVT__entry_complete;
    IData/*31:0*/ __PVT__entry_complete_nxt;
    IData/*31:0*/ __PVT__entry_valid;
    IData/*31:0*/ __PVT__entry_valid_nxt;
    IData/*31:0*/ __PVT__wren_buffer;
    IData/*31:0*/ __PVT__clr_excl_entry;
    IData/*31:0*/ __PVT__excl_store_pass;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__j;
    IData/*31:0*/ __Vdly__entry_valid;
    IData/*31:0*/ __Vdly__entry_complete;
    VL_IN64(__PVT__i_excl_load_addr,45,0);
    VL_IN64(__PVT__i_excl_store_addr,45,0);
    VL_IN64(__PVT__i_atom_addr,45,0);
    VlWide<65>/*2079:0*/ __PVT__outstd_excl_buffer;
    VlWide<65>/*2079:0*/ __PVT__outstd_excl_buffer_nxt;
    VlWide<65>/*2079:0*/ __Vdly__outstd_excl_buffer;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_system_monitor__A2e(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_system_monitor__A2e();
    VL_UNCOPYABLE(Vsig_topology_top_sig_system_monitor__A2e);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
