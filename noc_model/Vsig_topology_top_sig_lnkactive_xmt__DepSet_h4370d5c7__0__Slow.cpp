// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_lnkactive_xmt.h"

VL_ATTR_COLD void Vsig_topology_top_sig_lnkactive_xmt___ctor_var_reset(Vsig_topology_top_sig_lnkactive_xmt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_xmt___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rstb_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2569248715865955248ull);
    vlSelf->__PVT__enable_xmt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8656032351994292809ull);
    vlSelf->__PVT__all_cache_init_complete = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3192120307074908864ull);
    vlSelf->__PVT__i_timeout_or_recovery_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17777484362480875309ull);
    vlSelf->__PVT__RXLINKACTIVEREQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7545723119328454961ull);
    vlSelf->__PVT__RXLINKACTIVEACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4580910665070587771ull);
    vlSelf->__PVT__TXLINKACTIVEREQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17939883516025711207ull);
    vlSelf->__PVT__TXLINKACTIVEACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5058666305656838044ull);
    vlSelf->__PVT__enter_deactivate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13056046345568184098ull);
    vlSelf->__PVT__xmtr_cansend_flits = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1636758649356649624ull);
    vlSelf->__PVT__return_linkcrdt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4055845121182950496ull);
    vlSelf->__PVT__lnkstate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2195006897467025125ull);
    vlSelf->__PVT__lnkstate_nxt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 205266847837255651ull);
    vlSelf->__PVT__TXLINKACTIVEREQ_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4560935930778945218ull);
    vlSelf->__PVT__enable_xmt_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4656505000728435416ull);
    vlSelf->__PVT__TXLINKACTIVEACK_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10010986781041420724ull);
    vlSelf->__PVT__xmtr_cansend_flits_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3028085378291658206ull);
    vlSelf->__PVT__enter_deactivate_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9381275043792301281ull);
    vlSelf->__PVT__return_linkcrdt_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15147917145113494182ull);
    vlSelf->__PVT__RXLINKACTIVEREQ_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13506509723413192311ull);
    vlSelf->__PVT__all_cache_init_complete_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13185700962968064196ull);
    vlSelf->__Vdly__lnkstate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3990032053756974428ull);
    vlSelf->__Vdly__TXLINKACTIVEREQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2460185104160401535ull);
    vlSelf->__Vdly__xmtr_cansend_flits = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14289579563059900787ull);
    vlSelf->__Vdly__return_linkcrdt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8199403978721282715ull);
}
