// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP___024UNIT_H_
#define VERILATED_VSIG_TOPOLOGY_TOP___024UNIT_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top___024unit(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top___024unit();
    VL_UNCOPYABLE(Vsig_topology_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
