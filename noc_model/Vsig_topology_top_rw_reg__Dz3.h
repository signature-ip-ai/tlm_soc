// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_RW_REG__DZ3_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_RW_REG__DZ3_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_rw_reg__Dz3 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst_n,0,0);
    VL_IN8(__PVT__i_wr_reg_en,0,0);
    VL_IN8(__PVT__i_strobe,3,0);
    VL_IN(__PVT__i_wr_data,31,0);
    VL_OUT(__PVT__o_rddata_reg,31,0);
    IData/*31:0*/ __PVT__i;
    IData/*31:0*/ __PVT__data_stored;
    IData/*31:0*/ __PVT__data_stored_nxt;
    IData/*31:0*/ __Vdly__data_stored;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_rw_reg__Dz3(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_rw_reg__Dz3();
    VL_UNCOPYABLE(Vsig_topology_top_rw_reg__Dz3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
