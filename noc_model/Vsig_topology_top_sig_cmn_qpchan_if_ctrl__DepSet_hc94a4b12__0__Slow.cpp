// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cmn_qpchan_if_ctrl.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cmn_qpchan_if_ctrl___eval_initial__TOP__sig_topology_top__i_sig_cmn_qpchan_if_ctrl(Vsig_topology_top_sig_cmn_qpchan_if_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cmn_qpchan_if_ctrl___eval_initial__TOP__sig_topology_top__i_sig_cmn_qpchan_if_ctrl\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__qacceptn = 0U;
    vlSelfRef.__PVT__qdeny = 0U;
    vlSelfRef.__PVT__qactive = 0U;
    vlSelfRef.__PVT__qin_quiescence = 0U;
    vlSelfRef.__PVT__paccept = 0U;
    vlSelfRef.__PVT__pdeny = 0U;
    vlSelfRef.__PVT__pactive = 0U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_cmn_qpchan_if_ctrl___ctor_var_reset(Vsig_topology_top_sig_cmn_qpchan_if_ctrl* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsig_topology_top_sig_cmn_qpchan_if_ctrl___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->__PVT__is_idle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3211328539867950095ull);
    vlSelf->__PVT__qreqn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11775565873081530239ull);
    vlSelf->__PVT__qacceptn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11446997399270137270ull);
    vlSelf->__PVT__qdeny = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12253734335779669162ull);
    vlSelf->__PVT__qactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3954170982902127988ull);
    vlSelf->__PVT__qin_quiescence = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6114833606088053617ull);
    vlSelf->__PVT__pstate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6918955583165594308ull);
    vlSelf->__PVT__preq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13517127927829356383ull);
    vlSelf->__PVT__paccept = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17067914849730411368ull);
    vlSelf->__PVT__pdeny = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16555932130167813006ull);
    vlSelf->__PVT__pactive = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10489544803603440108ull);
}
