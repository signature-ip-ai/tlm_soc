// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_lnkactive_xmt.h"
#include "Vsig_topology_top_sig_node_snptxflit_top__pi58.h"
#include "Vsig_topology_top_sig_node_txtop__pi43.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_txtop__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__2(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(73,vlSelfRef.__PVT__rddata_snprsp_flit_fifo_tx_snp, vlSelf->__PVT__sig_node_snptxflit_top_0->__PVT__rddata_snprsp_flit_fifo);
    vlSelfRef.__PVT__enter_deactivate = ((IData)(vlSelfRef.__PVT__port_is_inactive) 
                                         & (IData)(vlSelfRef.__PVT__rx_req_port_is_inactive));
    vlSelf->__PVT__lnkactive_xmt_sync_gen__DOT__u_sig_lnkactive_xmt->__PVT__enter_deactivate 
        = vlSelfRef.__PVT__enter_deactivate;
}
