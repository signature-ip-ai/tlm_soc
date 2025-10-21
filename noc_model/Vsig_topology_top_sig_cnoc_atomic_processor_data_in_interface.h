// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CNOC_ATOMIC_PROCESSOR_DATA_IN_INTERFACE_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CNOC_ATOMIC_PROCESSOR_DATA_IN_INTERFACE_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_cnoc_atomic_processor_data_in_interface final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__dat_txn_valid;
    CData/*0:0*/ __PVT__dat_init_dirty;
    CData/*0:0*/ __PVT__dat_init_valid;
    QData/*63:0*/ __PVT__dat_txn_be;
    VlWide<16>/*511:0*/ __PVT__dat_txn;
    VlWide<16>/*511:0*/ __PVT__dat_init;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_cnoc_atomic_processor_data_in_interface(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_cnoc_atomic_processor_data_in_interface();
    VL_UNCOPYABLE(Vsig_topology_top_sig_cnoc_atomic_processor_data_in_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vsig_topology_top_sig_cnoc_atomic_processor_data_in_interface* obj);

#endif  // guard
