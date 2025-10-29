// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CNOC_ATOMIC_PROCESSOR_META_IN_INTERFACE_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CNOC_ATOMIC_PROCESSOR_META_IN_INTERFACE_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_cnoc_atomic_processor_meta_in_interface final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ valid;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_cnoc_atomic_processor_meta_in_interface(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_cnoc_atomic_processor_meta_in_interface();
    VL_UNCOPYABLE(Vsig_topology_top_sig_cnoc_atomic_processor_meta_in_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vsig_topology_top_sig_cnoc_atomic_processor_meta_in_interface* obj);

#endif  // guard
