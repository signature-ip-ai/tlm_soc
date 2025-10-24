// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi64.h"
#include "Vsig_topology_top_sig_routing_policy.h"

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi64___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__2(Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi64___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_north_yfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_north_yfirst_o;
    vlSelfRef.__PVT__route_east_xfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_east_xfirst_o;
    vlSelfRef.__PVT__route_south_yfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_south_yfirst_o;
    vlSelfRef.__PVT__route_west_xfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_west_xfirst_o;
    vlSelfRef.__PVT__route_east_yfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_east_yfirst_o;
    vlSelfRef.__PVT__route_north_xfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_north_xfirst_o;
    vlSelfRef.__PVT__route_west_yfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_west_yfirst_o;
    vlSelfRef.__PVT__route_south_xfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_south_xfirst_o;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send = 0U;
    if (vlSelfRef.__PVT__assert_req) {
        if (vlSelfRef.__PVT__exit_network) {
            if ((0U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send = 4U;
            } else if ((1U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send = 8U;
            } else if ((2U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send = 0x10U;
            } else if ((3U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send = 0x20U;
            } else if ((4U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send = 1U;
            } else if ((5U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send = 2U;
            }
        } else if (vlSelfRef.__PVT__select_xfirst) {
            if ((1U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_xfirst), (IData)(vlSelfRef.__PVT__route_north_xfirst)), 
                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_xfirst), (IData)(vlSelfRef.__PVT__route_east_xfirst))))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send = 0x80U;
            } else if ((2U == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_xfirst), (IData)(vlSelfRef.__PVT__route_north_xfirst)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_xfirst), (IData)(vlSelfRef.__PVT__route_east_xfirst))))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send = 0x200U;
            } else if ((4U == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_xfirst), (IData)(vlSelfRef.__PVT__route_north_xfirst)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_xfirst), (IData)(vlSelfRef.__PVT__route_east_xfirst))))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send = 0x40U;
            } else if ((8U == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_xfirst), (IData)(vlSelfRef.__PVT__route_north_xfirst)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_xfirst), (IData)(vlSelfRef.__PVT__route_east_xfirst))))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send = 0x100U;
            }
        } else if ((1U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_yfirst), (IData)(vlSelfRef.__PVT__route_east_yfirst)), 
                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_yfirst), (IData)(vlSelfRef.__PVT__route_north_yfirst))))) {
            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send = 0x40U;
        } else if ((2U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_yfirst), (IData)(vlSelfRef.__PVT__route_east_yfirst)), 
                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_yfirst), (IData)(vlSelfRef.__PVT__route_north_yfirst))))) {
            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send = 0x100U;
        } else if ((4U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_yfirst), (IData)(vlSelfRef.__PVT__route_east_yfirst)), 
                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_yfirst), (IData)(vlSelfRef.__PVT__route_north_yfirst))))) {
            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send = 0x80U;
        } else if ((8U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_yfirst), (IData)(vlSelfRef.__PVT__route_east_yfirst)), 
                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_yfirst), (IData)(vlSelfRef.__PVT__route_north_yfirst))))) {
            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send = 0x200U;
        }
    } else {
        vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc0_tx_hs.__PVT__req_send = 0U;
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi64___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__2(Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi64___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_north_yfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_north_yfirst_o;
    vlSelfRef.__PVT__route_east_xfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_east_xfirst_o;
    vlSelfRef.__PVT__route_south_yfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_south_yfirst_o;
    vlSelfRef.__PVT__route_west_xfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_west_xfirst_o;
    vlSelfRef.__PVT__route_east_yfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_east_yfirst_o;
    vlSelfRef.__PVT__route_north_xfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_north_xfirst_o;
    vlSelfRef.__PVT__route_west_yfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_west_yfirst_o;
    vlSelfRef.__PVT__route_south_xfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_south_xfirst_o;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send = 0U;
    if (vlSelfRef.__PVT__assert_req) {
        if (vlSelfRef.__PVT__exit_network) {
            if ((0U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send = 4U;
            } else if ((1U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send = 8U;
            } else if ((2U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send = 0x10U;
            } else if ((3U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send = 0x20U;
            } else if ((4U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send = 1U;
            } else if ((5U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send = 2U;
            }
        } else if (vlSelfRef.__PVT__select_xfirst) {
            if ((1U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_xfirst), (IData)(vlSelfRef.__PVT__route_north_xfirst)), 
                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_xfirst), (IData)(vlSelfRef.__PVT__route_east_xfirst))))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send = 0x80U;
            } else if ((2U == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_xfirst), (IData)(vlSelfRef.__PVT__route_north_xfirst)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_xfirst), (IData)(vlSelfRef.__PVT__route_east_xfirst))))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send = 0x200U;
            } else if ((4U == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_xfirst), (IData)(vlSelfRef.__PVT__route_north_xfirst)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_xfirst), (IData)(vlSelfRef.__PVT__route_east_xfirst))))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send = 0x40U;
            } else if ((8U == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_xfirst), (IData)(vlSelfRef.__PVT__route_north_xfirst)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_xfirst), (IData)(vlSelfRef.__PVT__route_east_xfirst))))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send = 0x100U;
            }
        } else if ((1U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_yfirst), (IData)(vlSelfRef.__PVT__route_east_yfirst)), 
                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_yfirst), (IData)(vlSelfRef.__PVT__route_north_yfirst))))) {
            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send = 0x40U;
        } else if ((2U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_yfirst), (IData)(vlSelfRef.__PVT__route_east_yfirst)), 
                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_yfirst), (IData)(vlSelfRef.__PVT__route_north_yfirst))))) {
            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send = 0x100U;
        } else if ((4U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_yfirst), (IData)(vlSelfRef.__PVT__route_east_yfirst)), 
                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_yfirst), (IData)(vlSelfRef.__PVT__route_north_yfirst))))) {
            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send = 0x80U;
        } else if ((8U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_yfirst), (IData)(vlSelfRef.__PVT__route_east_yfirst)), 
                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_yfirst), (IData)(vlSelfRef.__PVT__route_north_yfirst))))) {
            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send = 0x200U;
        }
    } else {
        vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n1_port_rsp_vc1_tx_hs.__PVT__req_send = 0U;
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi64___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__2(Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi64___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_north_yfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_north_yfirst_o;
    vlSelfRef.__PVT__route_east_xfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_east_xfirst_o;
    vlSelfRef.__PVT__route_south_yfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_south_yfirst_o;
    vlSelfRef.__PVT__route_west_xfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_west_xfirst_o;
    vlSelfRef.__PVT__route_east_yfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_east_yfirst_o;
    vlSelfRef.__PVT__route_north_xfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_north_xfirst_o;
    vlSelfRef.__PVT__route_west_yfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_west_yfirst_o;
    vlSelfRef.__PVT__route_south_xfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_south_xfirst_o;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send = 0U;
    if (vlSelfRef.__PVT__assert_req) {
        if (vlSelfRef.__PVT__exit_network) {
            if ((0U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send = 4U;
            } else if ((1U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send = 8U;
            } else if ((2U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send = 0x10U;
            } else if ((3U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send = 0x20U;
            } else if ((4U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send = 1U;
            } else if ((5U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send = 2U;
            }
        } else if (vlSelfRef.__PVT__select_xfirst) {
            if ((1U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_xfirst), (IData)(vlSelfRef.__PVT__route_north_xfirst)), 
                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_xfirst), (IData)(vlSelfRef.__PVT__route_east_xfirst))))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send = 0x80U;
            } else if ((2U == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_xfirst), (IData)(vlSelfRef.__PVT__route_north_xfirst)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_xfirst), (IData)(vlSelfRef.__PVT__route_east_xfirst))))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send = 0x200U;
            } else if ((4U == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_xfirst), (IData)(vlSelfRef.__PVT__route_north_xfirst)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_xfirst), (IData)(vlSelfRef.__PVT__route_east_xfirst))))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send = 0x40U;
            } else if ((8U == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_xfirst), (IData)(vlSelfRef.__PVT__route_north_xfirst)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_xfirst), (IData)(vlSelfRef.__PVT__route_east_xfirst))))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send = 0x100U;
            }
        } else if ((1U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_yfirst), (IData)(vlSelfRef.__PVT__route_east_yfirst)), 
                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_yfirst), (IData)(vlSelfRef.__PVT__route_north_yfirst))))) {
            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send = 0x40U;
        } else if ((2U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_yfirst), (IData)(vlSelfRef.__PVT__route_east_yfirst)), 
                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_yfirst), (IData)(vlSelfRef.__PVT__route_north_yfirst))))) {
            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send = 0x100U;
        } else if ((4U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_yfirst), (IData)(vlSelfRef.__PVT__route_east_yfirst)), 
                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_yfirst), (IData)(vlSelfRef.__PVT__route_north_yfirst))))) {
            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send = 0x80U;
        } else if ((8U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_yfirst), (IData)(vlSelfRef.__PVT__route_east_yfirst)), 
                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_yfirst), (IData)(vlSelfRef.__PVT__route_north_yfirst))))) {
            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send = 0x200U;
        }
    } else {
        vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc0_tx_hs.__PVT__req_send = 0U;
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi64___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__2(Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsig_topology_top_sig_node_rx_rspproc_anyvc__pi64___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__route_north_yfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_north_yfirst_o;
    vlSelfRef.__PVT__route_east_xfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_east_xfirst_o;
    vlSelfRef.__PVT__route_south_yfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_south_yfirst_o;
    vlSelfRef.__PVT__route_west_xfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_west_xfirst_o;
    vlSelfRef.__PVT__route_east_yfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_east_yfirst_o;
    vlSelfRef.__PVT__route_north_xfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_north_xfirst_o;
    vlSelfRef.__PVT__route_west_yfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_west_yfirst_o;
    vlSelfRef.__PVT__route_south_xfirst = vlSelf->__PVT__inst_sig_routing_policy->__PVT__route_south_xfirst_o;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send = 0U;
    if (vlSelfRef.__PVT__assert_req) {
        if (vlSelfRef.__PVT__exit_network) {
            if ((0U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send = 4U;
            } else if ((1U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send = 8U;
            } else if ((2U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send = 0x10U;
            } else if ((3U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send = 0x20U;
            } else if ((4U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send = 1U;
            } else if ((5U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send = 2U;
            }
        } else if (vlSelfRef.__PVT__select_xfirst) {
            if ((1U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_xfirst), (IData)(vlSelfRef.__PVT__route_north_xfirst)), 
                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_xfirst), (IData)(vlSelfRef.__PVT__route_east_xfirst))))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send = 0x80U;
            } else if ((2U == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_xfirst), (IData)(vlSelfRef.__PVT__route_north_xfirst)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_xfirst), (IData)(vlSelfRef.__PVT__route_east_xfirst))))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send = 0x200U;
            } else if ((4U == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_xfirst), (IData)(vlSelfRef.__PVT__route_north_xfirst)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_xfirst), (IData)(vlSelfRef.__PVT__route_east_xfirst))))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send = 0x40U;
            } else if ((8U == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_xfirst), (IData)(vlSelfRef.__PVT__route_north_xfirst)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_xfirst), (IData)(vlSelfRef.__PVT__route_east_xfirst))))) {
                vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send = 0x100U;
            }
        } else if ((1U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_yfirst), (IData)(vlSelfRef.__PVT__route_east_yfirst)), 
                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_yfirst), (IData)(vlSelfRef.__PVT__route_north_yfirst))))) {
            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send = 0x40U;
        } else if ((2U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_yfirst), (IData)(vlSelfRef.__PVT__route_east_yfirst)), 
                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_yfirst), (IData)(vlSelfRef.__PVT__route_north_yfirst))))) {
            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send = 0x100U;
        } else if ((4U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_yfirst), (IData)(vlSelfRef.__PVT__route_east_yfirst)), 
                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_yfirst), (IData)(vlSelfRef.__PVT__route_north_yfirst))))) {
            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send = 0x80U;
        } else if ((8U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_west_yfirst), (IData)(vlSelfRef.__PVT__route_east_yfirst)), 
                                        VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__route_south_yfirst), (IData)(vlSelfRef.__PVT__route_north_yfirst))))) {
            vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send = 0x200U;
        }
    } else {
        vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__n3_port_rsp_vc1_tx_hs.__PVT__req_send = 0U;
    }
}
