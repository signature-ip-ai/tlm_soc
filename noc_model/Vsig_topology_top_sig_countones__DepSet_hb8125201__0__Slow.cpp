// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_countones.h"

VL_ATTR_COLD void Vsig_topology_top_sig_countones___ctor_var_reset(Vsig_topology_top_sig_countones* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_countones___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10522366009035690765ull);
    vlSelf->__PVT__rstb_cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8322896653826704470ull);
    vlSelf->__PVT__share_vec = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8498180863847266602ull);
    vlSelf->__PVT__ones_count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15654643926043583494ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__onescount[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 693621280075340495ull);
    }
    vlSelf->__PVT__ones_count_12 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11047034848415687899ull);
    vlSelf->__Vcellout__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__onescount_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5357511001461106046ull);
    vlSelf->__Vcellinp__gen_countones_8__BRA__0__KET____DOT__sig_countones_8_u__sharevec = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6257077598854660552ull);
    vlSelf->__Vcellout__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__onescount_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13201659035121738375ull);
    vlSelf->__Vcellinp__gen_countones_8__BRA__1__KET____DOT__sig_countones_8_u__sharevec = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2444519338140665875ull);
    vlSelf->__Vcellout__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__onescount_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14891673433072560201ull);
    vlSelf->__Vcellinp__gen_countones_8__BRA__2__KET____DOT__sig_countones_8_u__sharevec = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17787652509592256015ull);
}
