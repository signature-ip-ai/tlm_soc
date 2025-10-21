// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_routing_policy.h"

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_snpproc_0__sig_cc_rx_snpproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_snpproc_0__sig_cc_rx_snpproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_snpproc_0__sig_cc_rx_snpproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_snpproc_0__sig_cc_rx_snpproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_rspproc_0__sig_cc_rx_rspproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_cc_porttop_0__sig_cc_porttop_gen_blk__DOT__sig_cc_rxtop_0__sig_cc_rx_datproc_0__sig_cc_rx_datproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_reqproc_0__sig_l3_rx_reqproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_l3_porttop_0__sig_l3_porttop_gen_blk__DOT__sig_l3_rxtop_0__sig_l3_rx_datproc_0__sig_l3_rx_datproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__sig_node_rx_reqproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_rspproc_0__sig_node_rx_rspproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc0__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__inst_sig_routing_policy__0\n"); );
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

VL_INLINE_OPT void Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__inst_sig_routing_policy__0(Vsig_topology_top_sig_routing_policy* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsig_topology_top_sig_routing_policy___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_datproc_0__sig_node_rx_datproc_vc1__inst_sig_routing_policy__0\n"); );
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
