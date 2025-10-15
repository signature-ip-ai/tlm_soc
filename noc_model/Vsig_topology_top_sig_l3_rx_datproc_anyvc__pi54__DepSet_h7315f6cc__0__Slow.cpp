// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi54.h"
#include "Vsig_topology_top_sig_routing_policy.h"

VL_ATTR_COLD void Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi54___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__2(Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi54* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi54___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__my_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__mycluster_id), 0U, 4));
    vlSelfRef.__PVT__my_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__mycluster_id), 4U, 4));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__icx_exist_i 
        = vlSelfRef.__PVT__icx_exist;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__my_x_i 
        = vlSelfRef.__PVT__my_cluster_x;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__my_y_i 
        = vlSelfRef.__PVT__my_cluster_y;
}

VL_ATTR_COLD void Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi54___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__2(Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi54* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi54___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__2\n"); );
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
    vlSelfRef.__PVT__req_vc = 0U;
    if (vlSelfRef.__PVT__assert_req) {
        if (vlSelfRef.__PVT__exit_network) {
            if ((0U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                VL_ASSIGNBIT_IO(2U, vlSelfRef.__PVT__req_vc);
            } else if ((1U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                VL_ASSIGNBIT_IO(3U, vlSelfRef.__PVT__req_vc);
            } else if ((2U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__req_vc);
            } else if ((3U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                VL_ASSIGNBIT_IO(5U, vlSelfRef.__PVT__req_vc);
            }
        } else {
            VL_ASSIGNSEL_II(10,2,6U, vlSelfRef.__PVT__req_vc, 
                            VL_CONCAT_III(2,1,1, ((IData)(vlSelfRef.__PVT__select_xfirst)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__route_east_xfirst) 
                                                   & (IData)(vlSelfRef.__PVT__stayin_network))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__route_east_yfirst) 
                                                   & (IData)(vlSelfRef.__PVT__stayin_network))), 
                                          ((IData)(vlSelfRef.__PVT__select_xfirst)
                                            ? ((IData)(vlSelfRef.__PVT__route_north_xfirst) 
                                               & (IData)(vlSelfRef.__PVT__stayin_network))
                                            : ((IData)(vlSelfRef.__PVT__route_north_yfirst) 
                                               & (IData)(vlSelfRef.__PVT__stayin_network)))));
            VL_ASSIGNSEL_II(10,2,8U, vlSelfRef.__PVT__req_vc, 
                            VL_CONCAT_III(2,1,1, ((IData)(vlSelfRef.__PVT__select_xfirst)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__route_west_xfirst) 
                                                   & (IData)(vlSelfRef.__PVT__stayin_network))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__route_west_yfirst) 
                                                   & (IData)(vlSelfRef.__PVT__stayin_network))), 
                                          ((IData)(vlSelfRef.__PVT__select_xfirst)
                                            ? ((IData)(vlSelfRef.__PVT__route_south_xfirst) 
                                               & (IData)(vlSelfRef.__PVT__stayin_network))
                                            : ((IData)(vlSelfRef.__PVT__route_south_yfirst) 
                                               & (IData)(vlSelfRef.__PVT__stayin_network)))));
        }
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi54___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__2(Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi54* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi54___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__my_cluster_x = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__mycluster_id), 0U, 4));
    vlSelfRef.__PVT__my_cluster_y = (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__mycluster_id), 4U, 4));
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__icx_exist_i 
        = vlSelfRef.__PVT__icx_exist;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__my_x_i 
        = vlSelfRef.__PVT__my_cluster_x;
    vlSelf->__PVT__inst_sig_routing_policy->__PVT__my_y_i 
        = vlSelfRef.__PVT__my_cluster_y;
}

VL_ATTR_COLD void Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi54___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__2(Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi54* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_l3_rx_datproc_anyvc__pi54___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__2\n"); );
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
    vlSelfRef.__PVT__req_vc = 0U;
    if (vlSelfRef.__PVT__assert_req) {
        if (vlSelfRef.__PVT__exit_network) {
            if ((0U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                VL_ASSIGNBIT_IO(2U, vlSelfRef.__PVT__req_vc);
            } else if ((1U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                VL_ASSIGNBIT_IO(3U, vlSelfRef.__PVT__req_vc);
            } else if ((2U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__req_vc);
            } else if ((3U == (IData)(vlSelfRef.__PVT__tgt_portid_fifoout))) {
                VL_ASSIGNBIT_IO(5U, vlSelfRef.__PVT__req_vc);
            }
        } else {
            VL_ASSIGNSEL_II(10,2,6U, vlSelfRef.__PVT__req_vc, 
                            VL_CONCAT_III(2,1,1, ((IData)(vlSelfRef.__PVT__select_xfirst)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__route_east_xfirst) 
                                                   & (IData)(vlSelfRef.__PVT__stayin_network))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__route_east_yfirst) 
                                                   & (IData)(vlSelfRef.__PVT__stayin_network))), 
                                          ((IData)(vlSelfRef.__PVT__select_xfirst)
                                            ? ((IData)(vlSelfRef.__PVT__route_north_xfirst) 
                                               & (IData)(vlSelfRef.__PVT__stayin_network))
                                            : ((IData)(vlSelfRef.__PVT__route_north_yfirst) 
                                               & (IData)(vlSelfRef.__PVT__stayin_network)))));
            VL_ASSIGNSEL_II(10,2,8U, vlSelfRef.__PVT__req_vc, 
                            VL_CONCAT_III(2,1,1, ((IData)(vlSelfRef.__PVT__select_xfirst)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__route_west_xfirst) 
                                                   & (IData)(vlSelfRef.__PVT__stayin_network))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__route_west_yfirst) 
                                                   & (IData)(vlSelfRef.__PVT__stayin_network))), 
                                          ((IData)(vlSelfRef.__PVT__select_xfirst)
                                            ? ((IData)(vlSelfRef.__PVT__route_south_xfirst) 
                                               & (IData)(vlSelfRef.__PVT__stayin_network))
                                            : ((IData)(vlSelfRef.__PVT__route_south_yfirst) 
                                               & (IData)(vlSelfRef.__PVT__stayin_network)))));
        }
    }
}
