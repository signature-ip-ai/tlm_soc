// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_dattxflit_top__pi59.h"
#include "Vsig_topology_top_sig_node_rsptxflit_top.h"
#include "Vsig_topology_top_sig_node_txtop__pi43.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__2(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_txtop__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__2(Vsig_topology_top_sig_node_txtop__pi43* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_node_txtop__pi43___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_rsp_vc0);
    VL_ASSIGN_W(790,vlSelf->__PVT__sig_node_rsptxflit_top_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_rsp_vc1);
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flit_all_vc0, vlSelfRef.__PVT__flit_all_dat_vc0);
    VL_ASSIGN_W(6860,vlSelf->__PVT__sig_node_dattxflit_top_0->__PVT__flit_all_vc1, vlSelfRef.__PVT__flit_all_dat_vc1);
}
