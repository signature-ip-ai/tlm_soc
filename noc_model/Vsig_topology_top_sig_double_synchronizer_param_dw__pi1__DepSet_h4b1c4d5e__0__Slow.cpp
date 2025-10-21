// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_double_synchronizer_param_dw__pi1.h"

VL_ATTR_COLD void Vsig_topology_top_sig_double_synchronizer_param_dw__pi1___ctor_var_reset(Vsig_topology_top_sig_double_synchronizer_param_dw__pi1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vsig_topology_top_sig_double_synchronizer_param_dw__pi1___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clkdest = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9359194532665294662ull);
    vlSelf->__PVT__resetb_clkdest = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8140154983613047961ull);
    vlSelf->__PVT__sig_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15738869025502432341ull);
    vlSelf->__PVT__sig_dest = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4743835199175965177ull);
}
