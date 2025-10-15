// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_cnoc_port_rx_handshake.h"

VL_ATTR_COLD void Vsig_topology_top_sig_cnoc_port_rx_handshake___ctor_var_reset(Vsig_topology_top_sig_cnoc_port_rx_handshake* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_cnoc_port_rx_handshake___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__recv_req = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16994634384403827732ull);
    vlSelf->__PVT__gnt_recv = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10585487098193673791ull);
    vlSelf->__PVT__recv_vld = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4027003642704935150ull);
    vlSelf->__PVT__recv_end = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12312305461242231754ull);
}
