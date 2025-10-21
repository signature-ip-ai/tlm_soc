// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_chi_initcrdt_enable.h"

VL_INLINE_OPT void Vsig_topology_top_sig_chi_initcrdt_enable___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_initcrdt_enable_0__0(Vsig_topology_top_sig_chi_initcrdt_enable* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_initcrdt_enable___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_initcrdt_enable_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__init_update_ctr = vlSelfRef.__PVT__init_update_ctr;
    vlSelfRef.__Vdly__init_update_ctr = ((IData)(vlSelfRef.__PVT__rstb_cc_clk)
                                          ? (IData)(vlSelfRef.__PVT__init_update_ctr_nxt)
                                          : 0U);
    vlSelfRef.__PVT__init_update_ctr = vlSelfRef.__Vdly__init_update_ctr;
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
