// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cnoc_atomic_processor_meta_in_interface.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cnoc_atomic_processor_meta_in_interface___ctor_var_reset(Vsig_topology_top_sig_cnoc_atomic_processor_meta_in_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_cnoc_atomic_processor_meta_in_interface___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4944192500720994163ull);
    vlSelf->__PVT__full_apfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15002965969940736906ull);
    vlSelf->__PVT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17409787017080135397ull);
    vlSelf->__PVT__addr = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 14934084843038794831ull);
    vlSelf->__PVT__size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7387879788838415890ull);
    vlSelf->__PVT__endian = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 515145776175590143ull);
    vlSelf->__PVT__txnid = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15900677118656389850ull);
}
