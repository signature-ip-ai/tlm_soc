// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cnoc_atomic_processor_data_in_interface.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cnoc_atomic_processor_data_in_interface___ctor_var_reset(Vsig_topology_top_sig_cnoc_atomic_processor_data_in_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cnoc_atomic_processor_data_in_interface___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__dat_txn, __VscopeHash, 164258247337727386ull);
    vlSelf->__PVT__dat_txn_be = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12953196555134334609ull);
    vlSelf->__PVT__dat_txn_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5950222604310961828ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__dat_init, __VscopeHash, 4560479368892868933ull);
    vlSelf->__PVT__dat_init_dirty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6738463907413073868ull);
    vlSelf->__PVT__dat_init_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6394151873650670918ull);
}
