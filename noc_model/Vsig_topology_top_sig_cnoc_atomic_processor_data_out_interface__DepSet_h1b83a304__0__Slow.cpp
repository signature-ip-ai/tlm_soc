// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cnoc_atomic_processor_data_out_interface.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cnoc_atomic_processor_data_out_interface___ctor_var_reset(Vsig_topology_top_sig_cnoc_atomic_processor_data_out_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cnoc_atomic_processor_data_out_interface___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clr_collnreg_sending_ini = 0;
    vlSelf->atom_done = 0;
    vlSelf->need_trsf = 0;
    vlSelf->ready = 0;
    VL_ZERO_RESET_W(512, vlSelf->dat);
    vlSelf->dat_be = 0;
    vlSelf->txnid = 0;
}
