// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_lnkactive_rcv.h"

VL_ATTR_COLD void Vsig_topology_top_sig_lnkactive_rcv___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__1(Vsig_topology_top_sig_lnkactive_rcv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_rcv___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lnkstate_nxt = vlSelfRef.__PVT__lnkstate;
    vlSelfRef.__PVT__RXLINKACTIVEACK_nxt = vlSelfRef.__PVT__RXLINKACTIVEACK;
    vlSelfRef.__PVT__rcvr_can_send_crdt = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if (vlSelfRef.__PVT__RXLINKACTIVEREQ_sync) {
            vlSelfRef.__PVT__lnkstate_nxt = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if (vlSelfRef.__PVT__TXLINKACTIVEREQ) {
            vlSelfRef.__PVT__lnkstate_nxt = 3U;
            vlSelfRef.__PVT__RXLINKACTIVEACK_nxt = 1U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        vlSelfRef.__PVT__lnkstate_nxt = ((IData)(vlSelfRef.__PVT__i_timeout_or_recovery_mode)
                                          ? 0U : 2U);
    } else if ((2U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if (vlSelfRef.__PVT__RXLINKACTIVEREQ_sync) {
            vlSelfRef.__PVT__rcvr_can_send_crdt = 1U;
        } else {
            vlSelfRef.__PVT__lnkstate_nxt = 4U;
            vlSelfRef.__PVT__rcvr_can_send_crdt = 0U;
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if (((~ (IData)(vlSelfRef.__PVT__TXLINKACTIVEREQ)) 
                    & (IData)(vlSelfRef.__PVT__credits_backto_full_sync))) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
            vlSelfRef.__PVT__RXLINKACTIVEACK_nxt = 0U;
        }
    } else {
        vlSelfRef.__PVT__lnkstate_nxt = 0U;
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_lnkactive_rcv___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__1(Vsig_topology_top_sig_lnkactive_rcv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_rcv___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__lnkactive_rcv_sync_port_gen__DOT__sig_lnkactive_rcv_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__lnkstate_nxt = vlSelfRef.__PVT__lnkstate;
    vlSelfRef.__PVT__RXLINKACTIVEACK_nxt = vlSelfRef.__PVT__RXLINKACTIVEACK;
    vlSelfRef.__PVT__rcvr_can_send_crdt = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if (vlSelfRef.__PVT__RXLINKACTIVEREQ_sync) {
            vlSelfRef.__PVT__lnkstate_nxt = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if (vlSelfRef.__PVT__TXLINKACTIVEREQ) {
            vlSelfRef.__PVT__lnkstate_nxt = 3U;
            vlSelfRef.__PVT__RXLINKACTIVEACK_nxt = 1U;
        }
    } else if ((3U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        vlSelfRef.__PVT__lnkstate_nxt = ((IData)(vlSelfRef.__PVT__i_timeout_or_recovery_mode)
                                          ? 0U : 2U);
    } else if ((2U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if (vlSelfRef.__PVT__RXLINKACTIVEREQ_sync) {
            vlSelfRef.__PVT__rcvr_can_send_crdt = 1U;
        } else {
            vlSelfRef.__PVT__lnkstate_nxt = 4U;
            vlSelfRef.__PVT__rcvr_can_send_crdt = 0U;
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__lnkstate))) {
        if (vlSelfRef.__PVT__i_timeout_or_recovery_mode) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
        } else if (((~ (IData)(vlSelfRef.__PVT__TXLINKACTIVEREQ)) 
                    & (IData)(vlSelfRef.__PVT__credits_backto_full_sync))) {
            vlSelfRef.__PVT__lnkstate_nxt = 0U;
            vlSelfRef.__PVT__RXLINKACTIVEACK_nxt = 0U;
        }
    } else {
        vlSelfRef.__PVT__lnkstate_nxt = 0U;
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_lnkactive_rcv___ctor_var_reset(Vsig_topology_top_sig_lnkactive_rcv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_lnkactive_rcv___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rstb_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2569248715865955248ull);
    vlSelf->__PVT__i_timeout_or_recovery_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17777484362480875309ull);
    vlSelf->__PVT__credits_backto_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 58441542743280763ull);
    vlSelf->__PVT__TXLINKACTIVEREQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17939883516025711207ull);
    vlSelf->__PVT__RXLINKACTIVEREQ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7545723119328454961ull);
    vlSelf->__PVT__RXLINKACTIVEACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4580910665070587771ull);
    vlSelf->__PVT__rcvr_can_send_crdt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13837892261923136218ull);
    vlSelf->__PVT__lnkstate = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2195006897467025125ull);
    vlSelf->__PVT__lnkstate_nxt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 205266847837255651ull);
    vlSelf->__PVT__RXLINKACTIVEREQ_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13506509723413192311ull);
    vlSelf->__PVT__RXLINKACTIVEACK_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12145557359126008875ull);
    vlSelf->__PVT__credits_backto_full_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12721280538126377425ull);
    vlSelf->__Vdly__lnkstate = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3990032053756974428ull);
    vlSelf->__Vdly__RXLINKACTIVEACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8470741027802045984ull);
}
