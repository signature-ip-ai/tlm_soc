// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_chi_initcrdt_enable.h"

VL_ATTR_COLD void Vsig_topology_top_sig_chi_initcrdt_enable___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_initcrdt_enable_0__0(Vsig_topology_top_sig_chi_initcrdt_enable* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_initcrdt_enable___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_initcrdt_enable_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__init_update_ctr_nxt = (0xfU & 
                                            VL_SEL_IIII(32, 
                                                        ((0xfU 
                                                          != (IData)(vlSelfRef.__PVT__init_update_ctr))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + 
                                                          VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__init_update_ctr)))
                                                          : 
                                                         VL_EXTEND_II(32,4, (IData)(vlSelfRef.__PVT__init_update_ctr))), 0U, 4));
    vlSelfRef.__PVT__enable_init_update = (0xfU == (IData)(vlSelfRef.__PVT__init_update_ctr));
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_initcrdt_enable___ctor_var_reset(Vsig_topology_top_sig_chi_initcrdt_enable* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_initcrdt_enable___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10522366009035690765ull);
    vlSelf->__PVT__rstb_cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8322896653826704470ull);
    vlSelf->__PVT__enable_init_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13683977253010121183ull);
    vlSelf->__PVT__init_update_ctr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6178762413062343215ull);
    vlSelf->__PVT__init_update_ctr_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9707033968077232130ull);
    vlSelf->__Vdly__init_update_ctr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8742546379118713175ull);
}
