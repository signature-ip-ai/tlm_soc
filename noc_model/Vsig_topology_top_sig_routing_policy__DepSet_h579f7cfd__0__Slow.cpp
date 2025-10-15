// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_routing_policy.h"

VL_ATTR_COLD void Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_snpproc_0__sig_cc_rx_snpproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_snpproc_0__sig_cc_rx_snpproc_vc1__inst_sig_routing_policy__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__x_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                       > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                         < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U))));
    vlSelfRef.__PVT__y_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                       > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                         < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U))));
    vlSelfRef.__PVT__route_north_yfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_east_xfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ (IData)(vlSelfRef.__PVT__route_north_yfirst_o))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (IData)(vlSelfRef.__PVT__route_east_xfirst_o))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_east_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                             & (~ ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_north_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                  | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (
                                                   ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                    | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)) 
                                                   | (IData)(vlSelfRef.__PVT__route_east_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ 
                                                 (((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)) 
                                                  | (IData)(vlSelfRef.__PVT__route_north_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc0__inst_sig_routing_policy__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__x_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                       > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                         < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U))));
    vlSelfRef.__PVT__y_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                       > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                         < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U))));
    vlSelfRef.__PVT__route_north_yfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_east_xfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ (IData)(vlSelfRef.__PVT__route_north_yfirst_o))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (IData)(vlSelfRef.__PVT__route_east_xfirst_o))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_east_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                             & (~ ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_north_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                  | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (
                                                   ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                    | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)) 
                                                   | (IData)(vlSelfRef.__PVT__route_east_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ 
                                                 (((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)) 
                                                  | (IData)(vlSelfRef.__PVT__route_north_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc1__inst_sig_routing_policy__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__x_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                       > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                         < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U))));
    vlSelfRef.__PVT__y_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                       > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                         < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U))));
    vlSelfRef.__PVT__route_north_yfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_east_xfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ (IData)(vlSelfRef.__PVT__route_north_yfirst_o))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (IData)(vlSelfRef.__PVT__route_east_xfirst_o))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_east_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                             & (~ ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_north_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                  | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (
                                                   ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                    | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)) 
                                                   | (IData)(vlSelfRef.__PVT__route_east_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ 
                                                 (((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)) 
                                                  | (IData)(vlSelfRef.__PVT__route_north_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__inst_sig_routing_policy__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__x_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                       > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                         < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U))));
    vlSelfRef.__PVT__y_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                       > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                         < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U))));
    vlSelfRef.__PVT__route_north_yfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_east_xfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ (IData)(vlSelfRef.__PVT__route_north_yfirst_o))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (IData)(vlSelfRef.__PVT__route_east_xfirst_o))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_east_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                             & (~ ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_north_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                  | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (
                                                   ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                    | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)) 
                                                   | (IData)(vlSelfRef.__PVT__route_east_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ 
                                                 (((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)) 
                                                  | (IData)(vlSelfRef.__PVT__route_north_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__inst_sig_routing_policy__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__x_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                       > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                         < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U))));
    vlSelfRef.__PVT__y_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                       > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                         < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U))));
    vlSelfRef.__PVT__route_north_yfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_east_xfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ (IData)(vlSelfRef.__PVT__route_north_yfirst_o))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (IData)(vlSelfRef.__PVT__route_east_xfirst_o))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_east_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                             & (~ ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_north_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                  | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (
                                                   ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                    | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)) 
                                                   | (IData)(vlSelfRef.__PVT__route_east_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ 
                                                 (((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)) 
                                                  | (IData)(vlSelfRef.__PVT__route_north_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__x_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                       > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                         < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U))));
    vlSelfRef.__PVT__y_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                       > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                         < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U))));
    vlSelfRef.__PVT__route_north_yfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_east_xfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ (IData)(vlSelfRef.__PVT__route_north_yfirst_o))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (IData)(vlSelfRef.__PVT__route_east_xfirst_o))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_east_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                             & (~ ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_north_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                  | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (
                                                   ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                    | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)) 
                                                   | (IData)(vlSelfRef.__PVT__route_east_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ 
                                                 (((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)) 
                                                  | (IData)(vlSelfRef.__PVT__route_north_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__inst_sig_routing_policy__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__x_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                       > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                         < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U))));
    vlSelfRef.__PVT__y_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                       > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                         < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U))));
    vlSelfRef.__PVT__route_north_yfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_east_xfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ (IData)(vlSelfRef.__PVT__route_north_yfirst_o))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (IData)(vlSelfRef.__PVT__route_east_xfirst_o))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_east_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                             & (~ ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_north_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                  | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (
                                                   ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                    | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)) 
                                                   | (IData)(vlSelfRef.__PVT__route_east_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ 
                                                 (((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)) 
                                                  | (IData)(vlSelfRef.__PVT__route_north_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__inst_sig_routing_policy__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__x_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                       > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                         < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U))));
    vlSelfRef.__PVT__y_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                       > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                         < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U))));
    vlSelfRef.__PVT__route_north_yfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_east_xfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ (IData)(vlSelfRef.__PVT__route_north_yfirst_o))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (IData)(vlSelfRef.__PVT__route_east_xfirst_o))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_east_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                             & (~ ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_north_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                  | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (
                                                   ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                    | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)) 
                                                   | (IData)(vlSelfRef.__PVT__route_east_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ 
                                                 (((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)) 
                                                  | (IData)(vlSelfRef.__PVT__route_north_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__x_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                       > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                         < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U))));
    vlSelfRef.__PVT__y_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                       > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                         < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U))));
    vlSelfRef.__PVT__route_north_yfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_east_xfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ (IData)(vlSelfRef.__PVT__route_north_yfirst_o))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (IData)(vlSelfRef.__PVT__route_east_xfirst_o))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_east_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                             & (~ ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_north_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                  | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (
                                                   ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                    | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)) 
                                                   | (IData)(vlSelfRef.__PVT__route_east_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ 
                                                 (((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)) 
                                                  | (IData)(vlSelfRef.__PVT__route_north_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__inst_sig_routing_policy__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__x_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                       > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                         < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U))));
    vlSelfRef.__PVT__y_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                       > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                         < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U))));
    vlSelfRef.__PVT__route_north_yfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_east_xfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ (IData)(vlSelfRef.__PVT__route_north_yfirst_o))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (IData)(vlSelfRef.__PVT__route_east_xfirst_o))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_east_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                             & (~ ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_north_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                  | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (
                                                   ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                    | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)) 
                                                   | (IData)(vlSelfRef.__PVT__route_east_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ 
                                                 (((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)) 
                                                  | (IData)(vlSelfRef.__PVT__route_north_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__inst_sig_routing_policy__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__x_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                       > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                         < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U))));
    vlSelfRef.__PVT__y_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                       > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                         < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U))));
    vlSelfRef.__PVT__route_north_yfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_east_xfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ (IData)(vlSelfRef.__PVT__route_north_yfirst_o))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (IData)(vlSelfRef.__PVT__route_east_xfirst_o))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_east_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                             & (~ ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_north_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                  | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (
                                                   ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                    | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)) 
                                                   | (IData)(vlSelfRef.__PVT__route_east_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ 
                                                 (((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)) 
                                                  | (IData)(vlSelfRef.__PVT__route_north_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__inst_sig_routing_policy__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__x_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                       > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                         < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U))));
    vlSelfRef.__PVT__y_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                       > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                         < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U))));
    vlSelfRef.__PVT__route_north_yfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_east_xfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ (IData)(vlSelfRef.__PVT__route_north_yfirst_o))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (IData)(vlSelfRef.__PVT__route_east_xfirst_o))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_east_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                             & (~ ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_north_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                  | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (
                                                   ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                    | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)) 
                                                   | (IData)(vlSelfRef.__PVT__route_east_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ 
                                                 (((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)) 
                                                  | (IData)(vlSelfRef.__PVT__route_north_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__inst_sig_routing_policy__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__x_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                       > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                         < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U))));
    vlSelfRef.__PVT__y_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                       > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                         < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U))));
    vlSelfRef.__PVT__route_north_yfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_east_xfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ (IData)(vlSelfRef.__PVT__route_north_yfirst_o))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (IData)(vlSelfRef.__PVT__route_east_xfirst_o))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_east_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                             & (~ ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_north_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                  | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (
                                                   ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                    | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)) 
                                                   | (IData)(vlSelfRef.__PVT__route_east_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ 
                                                 (((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)) 
                                                  | (IData)(vlSelfRef.__PVT__route_north_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__x_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                       > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                         < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U))));
    vlSelfRef.__PVT__y_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                       > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                         < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U))));
    vlSelfRef.__PVT__route_north_yfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_east_xfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ (IData)(vlSelfRef.__PVT__route_north_yfirst_o))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (IData)(vlSelfRef.__PVT__route_east_xfirst_o))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_east_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                             & (~ ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_north_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                  | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (
                                                   ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                    | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)) 
                                                   | (IData)(vlSelfRef.__PVT__route_east_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ 
                                                 (((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)) 
                                                  | (IData)(vlSelfRef.__PVT__route_north_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__inst_sig_routing_policy__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__x_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                       > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                         < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U))));
    vlSelfRef.__PVT__y_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                       > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                         < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U))));
    vlSelfRef.__PVT__route_north_yfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_east_xfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ (IData)(vlSelfRef.__PVT__route_north_yfirst_o))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (IData)(vlSelfRef.__PVT__route_east_xfirst_o))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_east_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                             & (~ ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_north_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                  | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (
                                                   ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                    | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)) 
                                                   | (IData)(vlSelfRef.__PVT__route_east_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ 
                                                 (((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)) 
                                                  | (IData)(vlSelfRef.__PVT__route_north_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__inst_sig_routing_policy__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__x_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                       > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                         < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U))));
    vlSelfRef.__PVT__y_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                       > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                         < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U))));
    vlSelfRef.__PVT__route_north_yfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_east_xfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ (IData)(vlSelfRef.__PVT__route_north_yfirst_o))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (IData)(vlSelfRef.__PVT__route_east_xfirst_o))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_east_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                             & (~ ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_north_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                  | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (
                                                   ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                    | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)) 
                                                   | (IData)(vlSelfRef.__PVT__route_east_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ 
                                                 (((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)) 
                                                  | (IData)(vlSelfRef.__PVT__route_north_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__inst_sig_routing_policy__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__x_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                       > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                         < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U))));
    vlSelfRef.__PVT__y_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                       > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                         < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U))));
    vlSelfRef.__PVT__route_north_yfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_east_xfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ (IData)(vlSelfRef.__PVT__route_north_yfirst_o))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (IData)(vlSelfRef.__PVT__route_east_xfirst_o))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_east_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                             & (~ ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_north_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                  | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (
                                                   ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                    | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)) 
                                                   | (IData)(vlSelfRef.__PVT__route_east_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ 
                                                 (((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)) 
                                                  | (IData)(vlSelfRef.__PVT__route_north_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__inst_sig_routing_policy__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__x_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                       > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                         < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U))));
    vlSelfRef.__PVT__y_obstructed = ((((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                       > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                      & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U))) 
                                     | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                         < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                        & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U))));
    vlSelfRef.__PVT__route_north_yfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_east_xfirst_o = (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ (IData)(vlSelfRef.__PVT__route_north_yfirst_o))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (IData)(vlSelfRef.__PVT__route_east_xfirst_o))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_east_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 1U) 
                                             & (~ ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                > (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   <= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_north_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 0U) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                  | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 > (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    <= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
    vlSelfRef.__PVT__route_west_yfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 3U) 
                                             & (~ (
                                                   ((IData)(vlSelfRef.__PVT__route_north_yfirst_o) 
                                                    | (IData)(vlSelfRef.__PVT__route_south_yfirst_o)) 
                                                   | (IData)(vlSelfRef.__PVT__route_east_yfirst_o)))) 
                                            & (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                < (IData)(vlSelfRef.__PVT__my_x_i)) 
                                               | (((IData)(vlSelfRef.__PVT__tgt_x_i) 
                                                   >= (IData)(vlSelfRef.__PVT__my_x_i)) 
                                                  & (IData)(vlSelfRef.__PVT__y_obstructed))));
    vlSelfRef.__PVT__route_south_xfirst_o = ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__icx_exist_i), 2U) 
                                              & (~ 
                                                 (((IData)(vlSelfRef.__PVT__route_east_xfirst_o) 
                                                   | (IData)(vlSelfRef.__PVT__route_west_xfirst_o)) 
                                                  | (IData)(vlSelfRef.__PVT__route_north_xfirst_o)))) 
                                             & (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                 < (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                | (((IData)(vlSelfRef.__PVT__tgt_y_i) 
                                                    >= (IData)(vlSelfRef.__PVT__my_y_i)) 
                                                   & (IData)(vlSelfRef.__PVT__x_obstructed))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_routing_policy___ctor_var_reset(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__icx_exist_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13000794481499554944ull);
    vlSelf->__PVT__tgt_x_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13480725474405640317ull);
    vlSelf->__PVT__tgt_y_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15549145325375826717ull);
    vlSelf->__PVT__my_x_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16247264605836970860ull);
    vlSelf->__PVT__my_y_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16902972443666782394ull);
    vlSelf->__PVT__route_east_xfirst_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15057128628159173528ull);
    vlSelf->__PVT__route_west_xfirst_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3649353615319309883ull);
    vlSelf->__PVT__route_north_xfirst_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12669710222919202875ull);
    vlSelf->__PVT__route_south_xfirst_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14923940956521858105ull);
    vlSelf->__PVT__route_east_yfirst_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12436419179566587987ull);
    vlSelf->__PVT__route_west_yfirst_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1469564527522379430ull);
    vlSelf->__PVT__route_north_yfirst_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8011951973162014060ull);
    vlSelf->__PVT__route_south_yfirst_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1606326289103409276ull);
    vlSelf->__PVT__x_obstructed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10367585658547233515ull);
    vlSelf->__PVT__y_obstructed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2846466970815803505ull);
}
