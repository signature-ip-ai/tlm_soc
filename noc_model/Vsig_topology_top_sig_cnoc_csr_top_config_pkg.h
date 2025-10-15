// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CNOC_CSR_TOP_CONFIG_PKG_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CNOC_CSR_TOP_CONFIG_PKG_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_cnoc_csr_top_config_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_cnoc_csr_top_config_pkg(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_cnoc_csr_top_config_pkg();
    VL_UNCOPYABLE(Vsig_topology_top_sig_cnoc_csr_top_config_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
