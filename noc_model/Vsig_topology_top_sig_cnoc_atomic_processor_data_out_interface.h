// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsig_topology_top.h for the primary calling header

#ifndef VERILATED_VSIG_TOPOLOGY_TOP_SIG_CNOC_ATOMIC_PROCESSOR_DATA_OUT_INTERFACE_H_
#define VERILATED_VSIG_TOPOLOGY_TOP_SIG_CNOC_ATOMIC_PROCESSOR_DATA_OUT_INTERFACE_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vsig_topology_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsig_topology_top_sig_cnoc_atomic_processor_data_out_interface final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clr_collnreg_sending_ini;
    CData/*1:0*/ atom_done;
    CData/*1:0*/ need_trsf;
    CData/*0:0*/ ready;
    SData/*11:0*/ txnid;
    VlWide<16>/*511:0*/ dat;
    QData/*63:0*/ dat_be;

    // INTERNAL VARIABLES
    Vsig_topology_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsig_topology_top_sig_cnoc_atomic_processor_data_out_interface(Vsig_topology_top__Syms* symsp, const char* v__name);
    ~Vsig_topology_top_sig_cnoc_atomic_processor_data_out_interface();
    VL_UNCOPYABLE(Vsig_topology_top_sig_cnoc_atomic_processor_data_out_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vsig_topology_top_sig_cnoc_atomic_processor_data_out_interface* obj);

#endif  // guard
