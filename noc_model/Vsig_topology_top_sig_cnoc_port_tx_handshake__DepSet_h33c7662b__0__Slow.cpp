// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cnoc_port_tx_handshake.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cnoc_port_tx_handshake___ctor_var_reset(Vsig_topology_top_sig_cnoc_port_tx_handshake* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_cnoc_port_tx_handshake___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__req_send = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 965351612617565921ull);
    vlSelf->__PVT__send_gnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9689833362457852788ull);
    vlSelf->__PVT__vld_send = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10425098440460226401ull);
    vlSelf->__PVT__end_send = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8973094005147290042ull);
}
