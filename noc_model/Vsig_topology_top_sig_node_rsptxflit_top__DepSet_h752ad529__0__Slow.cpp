// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_node_arbtop.h"
#include "Vsig_topology_top_sig_node_rsptxflit_top.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_rsptxflit_top___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__1(Vsig_topology_top_sig_node_rsptxflit_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rsptxflit_top___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_txtop_0__sig_node_rsptxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_node_arbtop_0__end_req_vec_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_rx_hs.__PVT__recv_end;
    vlSelfRef.__Vcellinp__sig_node_arbtop_0__end_req_vec_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_rx_hs.__PVT__recv_end;
    vlSelfRef.__Vcellinp__sig_node_arbtop_0__req_vec_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_rx_hs.__PVT__recv_req;
    vlSelfRef.__Vcellinp__sig_node_arbtop_0__req_vec_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_rx_hs.__PVT__recv_req;
    vlSelf->__PVT__sig_node_arbtop_0->__PVT__end_req_vec_vc0 
        = vlSelfRef.__Vcellinp__sig_node_arbtop_0__end_req_vec_vc0;
    vlSelf->__PVT__sig_node_arbtop_0->__PVT__end_req_vec_vc1 
        = vlSelfRef.__Vcellinp__sig_node_arbtop_0__end_req_vec_vc1;
    vlSelf->__PVT__sig_node_arbtop_0->__PVT__req_vec_vc0 
        = vlSelfRef.__Vcellinp__sig_node_arbtop_0__req_vec_vc0;
    vlSelf->__PVT__sig_node_arbtop_0->__PVT__req_vec_vc1 
        = vlSelfRef.__Vcellinp__sig_node_arbtop_0__req_vec_vc1;
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rsptxflit_top___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__1(Vsig_topology_top_sig_node_rsptxflit_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rsptxflit_top___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_txtop_0__sig_node_rsptxflit_top_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__sig_node_arbtop_0__end_req_vec_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_rx_hs.__PVT__recv_end;
    vlSelfRef.__Vcellinp__sig_node_arbtop_0__end_req_vec_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_rx_hs.__PVT__recv_end;
    vlSelfRef.__Vcellinp__sig_node_arbtop_0__req_vec_vc0 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_rx_hs.__PVT__recv_req;
    vlSelfRef.__Vcellinp__sig_node_arbtop_0__req_vec_vc1 
        = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_rx_hs.__PVT__recv_req;
    vlSelf->__PVT__sig_node_arbtop_0->__PVT__end_req_vec_vc0 
        = vlSelfRef.__Vcellinp__sig_node_arbtop_0__end_req_vec_vc0;
    vlSelf->__PVT__sig_node_arbtop_0->__PVT__end_req_vec_vc1 
        = vlSelfRef.__Vcellinp__sig_node_arbtop_0__end_req_vec_vc1;
    vlSelf->__PVT__sig_node_arbtop_0->__PVT__req_vec_vc0 
        = vlSelfRef.__Vcellinp__sig_node_arbtop_0__req_vec_vc0;
    vlSelf->__PVT__sig_node_arbtop_0->__PVT__req_vec_vc1 
        = vlSelfRef.__Vcellinp__sig_node_arbtop_0__req_vec_vc1;
}
