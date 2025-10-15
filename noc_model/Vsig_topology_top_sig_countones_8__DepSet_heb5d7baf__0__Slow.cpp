// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_countones_8.h"

VL_ATTR_COLD void Vsig_topology_top_sig_countones_8___ctor_var_reset(Vsig_topology_top_sig_countones_8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_countones_8___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10522366009035690765ull);
    vlSelf->__PVT__rstb_cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8322896653826704470ull);
    vlSelf->__PVT__sharevec = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5444033838869824753ull);
    vlSelf->__PVT__onescount_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8591723423080385295ull);
    vlSelf->__PVT__onescount_out_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9501631409094979811ull);
    vlSelf->__PVT__onescount1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16335026046920233118ull);
    vlSelf->__PVT__onescount2 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14946150147805472957ull);
    vlSelf->__Vcellinp__sig_countones_4_0__sharevec = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14278258687717757002ull);
    vlSelf->__Vcellinp__sig_countones_4_1__sharevec = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6147805146532009655ull);
    vlSelf->__Vdly__onescount_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4252664739012045479ull);
}
