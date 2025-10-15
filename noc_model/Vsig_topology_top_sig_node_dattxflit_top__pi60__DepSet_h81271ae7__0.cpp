// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_node_dattxflit_top__pi60.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__11(Vsig_topology_top_sig_node_dattxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_dattxflit_top_0__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__consumed_fiforoom = ((0U != (VL_EXTEND_II(32,10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_rx_hs.__PVT__gnt_recv)) 
                                                  & VL_EXTEND_II(32,10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc0_rx_hs.__PVT__recv_vld)))) 
                                          | (0U != 
                                             (VL_EXTEND_II(32,10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_rx_hs.__PVT__gnt_recv)) 
                                              & VL_EXTEND_II(32,10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_dat_vc1_rx_hs.__PVT__recv_vld)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__11(Vsig_topology_top_sig_node_dattxflit_top__pi60* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_dattxflit_top__pi60___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_dattxflit_top_0__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__consumed_fiforoom = ((0U != (VL_EXTEND_II(32,10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_rx_hs.__PVT__gnt_recv)) 
                                                  & VL_EXTEND_II(32,10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc0_rx_hs.__PVT__recv_vld)))) 
                                          | (0U != 
                                             (VL_EXTEND_II(32,10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_rx_hs.__PVT__gnt_recv)) 
                                              & VL_EXTEND_II(32,10, (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_dat_vc1_rx_hs.__PVT__recv_vld)))));
}
