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
    vlSelf->recv_req = 0;
    vlSelf->recv_vld = 0;
}
