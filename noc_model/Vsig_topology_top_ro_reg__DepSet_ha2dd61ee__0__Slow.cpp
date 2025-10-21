// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_ro_reg.h"

VL_ATTR_COLD void Vsig_topology_top_ro_reg___ctor_var_reset(Vsig_topology_top_ro_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_ro_reg___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__i_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15925868812496733354ull);
    vlSelf->__PVT__i_rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4084054307081237675ull);
    vlSelf->__PVT__in_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4057622023130387117ull);
    vlSelf->__PVT__o_rddata_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5182081199382821743ull);
    vlSelf->__Vdly__o_rddata_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1414656593067154805ull);
}
