// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_id_translator_rn_req__pi55.h"

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_req__pi55___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__6(Vsig_topology_top_sig_id_translator_rn_req__pi55* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_req__pi55___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = (0xfffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn), 0xbU))
                                                   ? 
                                                  VL_EXTEND_II(12,5, 
                                                               (0x1fU 
                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn), 0U, 5)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)
                                                    ? (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn)
                                                    : 
                                                   ((0x437U 
                                                     >= 
                                                     ((IData)(5U) 
                                                      + 
                                                      VL_EXTEND_II(32,11, 
                                                                   (0x7ffU 
                                                                    & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1eU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,6, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn), 0U, 6)))), 0U, 11)))))
                                                     ? 
                                                    VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 
                                                                ((IData)(5U) 
                                                                 + 
                                                                 VL_EXTEND_II(32,11, 
                                                                              (0x7ffU 
                                                                               & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1eU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,6, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn), 0U, 6)))), 0U, 11)))), 12)
                                                     : 0U))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_req__pi55___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__7(Vsig_topology_top_sig_id_translator_rn_req__pi55* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_req__pi55___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = (0xfffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn), 0xbU))
                                                   ? 
                                                  VL_EXTEND_II(12,5, 
                                                               (0x1fU 
                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn), 0U, 5)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)
                                                    ? (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)
                                                    : 
                                                   ((0x437U 
                                                     >= 
                                                     ((IData)(5U) 
                                                      + 
                                                      VL_EXTEND_II(32,11, 
                                                                   (0x7ffU 
                                                                    & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1eU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,6, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn), 0U, 6)))), 0U, 11)))))
                                                     ? 
                                                    VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 
                                                                ((IData)(5U) 
                                                                 + 
                                                                 VL_EXTEND_II(32,11, 
                                                                              (0x7ffU 
                                                                               & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1eU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,6, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn), 0U, 6)))), 0U, 11)))), 12)
                                                     : 0U))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_req__pi55___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__8(Vsig_topology_top_sig_id_translator_rn_req__pi55* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_req__pi55___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                   & (0xcU 
                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_COMPDATA = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                           & (4U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = (0xfffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn), 0xbU))
                                                   ? 
                                                  VL_EXTEND_II(12,5, 
                                                               (0x1fU 
                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn), 0U, 5)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)
                                                    ? (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn)
                                                    : 
                                                   ((0x437U 
                                                     >= 
                                                     ((IData)(5U) 
                                                      + 
                                                      VL_EXTEND_II(32,11, 
                                                                   (0x7ffU 
                                                                    & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1eU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,6, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn), 0U, 6)))), 0U, 11)))))
                                                     ? 
                                                    VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 
                                                                ((IData)(5U) 
                                                                 + 
                                                                 VL_EXTEND_II(32,11, 
                                                                              (0x7ffU 
                                                                               & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1eU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,6, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn), 0U, 6)))), 0U, 11)))), 12)
                                                     : 0U))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_req__pi55___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__9(Vsig_topology_top_sig_id_translator_rn_req__pi55* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_req__pi55___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                   & (0xcU 
                                                      == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_COMPDATA = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                           & (4U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = (0xfffU 
                                               & ((1U 
                                                   & VL_BITSEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn), 0xbU))
                                                   ? 
                                                  VL_EXTEND_II(12,5, 
                                                               (0x1fU 
                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn), 0U, 5)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)
                                                    ? (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)
                                                    : 
                                                   ((0x437U 
                                                     >= 
                                                     ((IData)(5U) 
                                                      + 
                                                      VL_EXTEND_II(32,11, 
                                                                   (0x7ffU 
                                                                    & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1eU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,6, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn), 0U, 6)))), 0U, 11)))))
                                                     ? 
                                                    VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 
                                                                ((IData)(5U) 
                                                                 + 
                                                                 VL_EXTEND_II(32,11, 
                                                                              (0x7ffU 
                                                                               & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1eU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,6, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn), 0U, 6)))), 0U, 11)))), 12)
                                                     : 0U))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_req__pi55___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__10(Vsig_topology_top_sig_id_translator_rn_req__pi55* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_req__pi55___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_WI(1080,2,1U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1dU) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 1U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1dU) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 1U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 1U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x1fU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 1U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3bU) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (1U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (1U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (1U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (1U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (1U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (1U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1fU, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3bU) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (1U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (1U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (1U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (1U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1fU, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1fU, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x3dU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 2U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x59U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (2U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (2U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (2U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (2U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (2U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (2U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3dU, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x59U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (2U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (2U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (2U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (2U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3dU, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3dU, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x5bU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 3U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x77U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (3U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (3U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (3U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (3U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (3U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (3U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x5bU, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x77U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (3U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (3U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (3U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (3U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x5bU, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x5bU, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x79U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 4U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x95U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (4U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (4U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (4U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (4U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (4U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (4U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x79U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x95U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (4U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (4U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (4U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (4U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x79U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x79U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x97U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 5U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0xb3U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (5U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (5U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (5U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (5U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (5U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x97U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0xb3U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (5U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (5U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (5U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (5U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x97U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x97U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0xb5U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 6U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0xd1U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (6U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (6U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (6U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (6U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (6U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (6U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0xb5U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0xd1U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (6U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (6U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (6U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (6U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0xb5U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0xb5U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0xd3U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 7U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0xefU) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (7U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (7U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (7U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (7U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (7U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (7U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0xd3U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0xefU) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (7U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (7U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (7U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (7U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0xd3U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0xd3U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0xf1U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 8U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x10dU) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (8U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (8U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (8U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (8U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (8U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (8U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0xf1U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x10dU) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (8U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (8U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (8U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (8U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0xf1U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0xf1U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x10fU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 9U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x12bU) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (9U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (9U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (9U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (9U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (9U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (9U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x10fU, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x12bU) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (9U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (9U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (9U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (9U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x10fU, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x10fU, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x12dU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0xaU))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x149U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0xaU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0xaU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0xaU 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0xaU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0xaU 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0xaU 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x12dU, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x149U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0xaU 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0xaU 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0xaU 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0xaU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x12dU, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x12dU, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x14bU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0xbU))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x167U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0xbU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0xbU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0xbU 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0xbU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0xbU 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0xbU 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x14bU, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x167U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0xbU 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0xbU 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0xbU 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0xbU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x14bU, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x14bU, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x169U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0xcU))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x185U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0xcU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0xcU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0xcU 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0xcU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0xcU 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0xcU 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x169U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x185U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0xcU 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0xcU 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0xcU 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0xcU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x169U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x169U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x187U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0xdU))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1a3U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0xdU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0xdU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0xdU 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0xdU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0xdU 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0xdU 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x187U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1a3U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0xdU 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0xdU 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0xdU 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0xdU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x187U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x187U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x1a5U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0xeU))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1c1U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0xeU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0xeU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0xeU 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0xeU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0xeU 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0xeU 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1a5U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1c1U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0xeU 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0xeU 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0xeU 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0xeU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1a5U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1a5U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x1c3U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0xfU))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1dfU) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0xfU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0xfU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0xfU 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0xfU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0xfU 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0xfU 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1c3U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1dfU) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0xfU 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0xfU 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0xfU 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0xfU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1c3U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1c3U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x1e1U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0x10U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1fdU) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0x10U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0x10U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0x10U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0x10U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0x10U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0x10U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1e1U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1fdU) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0x10U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0x10U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0x10U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0x10U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1e1U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1e1U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x1ffU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0x11U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x21bU) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0x11U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0x11U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0x11U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0x11U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0x11U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0x11U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1ffU, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x21bU) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0x11U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0x11U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0x11U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0x11U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1ffU, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x1ffU, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x21dU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0x12U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x239U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0x12U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0x12U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0x12U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0x12U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0x12U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0x12U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x21dU, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x239U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0x12U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0x12U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0x12U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0x12U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x21dU, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x21dU, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x23bU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0x13U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x257U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0x13U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0x13U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0x13U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0x13U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0x13U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0x13U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x23bU, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x257U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0x13U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0x13U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0x13U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0x13U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x23bU, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x23bU, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x259U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0x14U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x275U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0x14U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0x14U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0x14U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0x14U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0x14U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0x14U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x259U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x275U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0x14U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0x14U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0x14U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0x14U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x259U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x259U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x277U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0x15U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x293U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0x15U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0x15U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0x15U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0x15U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0x15U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0x15U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x277U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x293U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0x15U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0x15U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0x15U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0x15U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x277U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x277U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x295U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0x16U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x2b1U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0x16U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0x16U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0x16U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0x16U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0x16U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0x16U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x295U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x2b1U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0x16U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0x16U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0x16U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0x16U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x295U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x295U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x2b3U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0x17U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x2cfU) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0x17U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0x17U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0x17U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0x17U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0x17U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0x17U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x2b3U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x2cfU) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0x17U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0x17U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0x17U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0x17U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x2b3U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x2b3U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x2d1U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0x18U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x2edU) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0x18U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0x18U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0x18U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0x18U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0x18U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0x18U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x2d1U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x2edU) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0x18U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0x18U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0x18U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0x18U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x2d1U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x2d1U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x2efU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0x19U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x30bU) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0x19U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0x19U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0x19U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0x19U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0x19U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0x19U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x2efU, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x30bU) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0x19U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0x19U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0x19U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0x19U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x2efU, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x2efU, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x30dU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0x1aU))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x329U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0x1aU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0x1aU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0x1aU 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0x1aU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0x1aU 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0x1aU 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x30dU, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x329U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0x1aU 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0x1aU 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0x1aU 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0x1aU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x30dU, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x30dU, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x32bU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0x1bU))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x347U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0x1bU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0x1bU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0x1bU 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0x1bU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0x1bU 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0x1bU 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x32bU, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x347U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0x1bU 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0x1bU 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0x1bU 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0x1bU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x32bU, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x32bU, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x349U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0x1cU))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x365U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0x1cU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0x1cU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0x1cU 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0x1cU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0x1cU 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0x1cU 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x349U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x365U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0x1cU 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0x1cU 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0x1cU 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0x1cU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x349U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x349U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x367U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0x1dU))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x383U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0x1dU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0x1dU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0x1dU 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0x1dU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0x1dU 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0x1dU 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x367U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x383U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0x1dU 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0x1dU 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0x1dU 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0x1dU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x367U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x367U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x385U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0x1eU))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3a1U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0x1eU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0x1eU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0x1eU 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0x1eU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0x1eU 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0x1eU 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x385U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3a1U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0x1eU 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0x1eU 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0x1eU 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0x1eU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x385U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x385U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x3a3U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0x1fU))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3bfU) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0x1fU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0x1fU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0x1fU 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0x1fU 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0x1fU 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0x1fU 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3a3U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3bfU) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0x1fU 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0x1fU 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0x1fU 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0x1fU 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3a3U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3a3U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x3c1U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0x20U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3ddU) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0x20U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0x20U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0x20U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0x20U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0x20U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0x20U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3c1U, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3ddU) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0x20U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0x20U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0x20U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0x20U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3c1U, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3c1U, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x3dfU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0x21U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3fbU) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0x21U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0x21U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0x21U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0x21U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0x21U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0x21U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3dfU, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3fbU) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0x21U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0x21U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0x21U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0x21U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3dfU, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3dfU, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x3fdU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0x22U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x419U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0x22U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0x22U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0x22U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0x22U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0x22U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0x22U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3fdU, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x419U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0x22U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0x22U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0x22U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0x22U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3fdU, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x3fdU, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_WI(1080,2,0x41bU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (3U & VL_SEL_IIII(32, ((1U & VL_BITSEL_IQII(36, vlSelfRef.__PVT__wren_id_buffer, 0x23U))
                                            ? VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__initial_rn_rsp_cntr))
                                            : ((VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x437U) 
                                                & (((((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                        & (0x23U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn))) 
                                                       | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                           & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                              == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                          & (0x23U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                           & (IData)(vlSelfRef.__PVT__vc1_rx_dat_v)) 
                                                          & ((IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn) 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         & (0x23U 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                          & (IData)(vlSelfRef.__PVT__vc0_rx_dat_v)) 
                                                         & ((IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn) 
                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn))) 
                                                        & (0x23U 
                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                    | (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                        & (IData)(vlSelfRef.__PVT__is_vc0_rx_NCBWRDATACOMPACK)) 
                                                       & (0x23U 
                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                   | (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                       & (IData)(vlSelfRef.__PVT__is_vc1_rx_NCBWRDATACOMPACK)) 
                                                      & (0x23U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                ? (
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x41bU, 2))) 
                                                   - (IData)(2U))
                                                : (
                                                   (VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x437U) 
                                                    & (((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                          & (0x23U 
                                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                                         | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                            & (0x23U 
                                                               == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                                        | ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                           & (0x23U 
                                                              == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                                       | ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                          & (0x23U 
                                                             == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))))
                                                    ? 
                                                   (VL_EXTEND_II(32,2, 
                                                                 (3U 
                                                                  & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x41bU, 2))) 
                                                    - (IData)(1U))
                                                    : 
                                                   VL_EXTEND_II(32,2, 
                                                                (3U 
                                                                 & VL_SEL_IWII(1080, vlSelfRef.__PVT__id_buffer, 0x41bU, 2)))))), 0U, 2)));
    VL_ASSIGNSEL_QI(36,3,0U, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x59U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x3bU)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x1dU)))));
    VL_ASSIGNSEL_QI(36,3,3U, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0xb3U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x95U)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x77U)))));
    VL_ASSIGNSEL_QI(36,3,6U, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x10dU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0xefU)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0xd1U)))));
    VL_ASSIGNSEL_QI(36,3,9U, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x167U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x149U)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x12bU)))));
    VL_ASSIGNSEL_QI(36,3,0xcU, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x1c1U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x1a3U)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x185U)))));
    VL_ASSIGNSEL_QI(36,3,0xfU, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x21bU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x1fdU)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x1dfU)))));
    VL_ASSIGNSEL_QI(36,3,0x12U, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x275U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x257U)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x239U)))));
    VL_ASSIGNSEL_QI(36,3,0x15U, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x2cfU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x2b1U)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x293U)))));
    VL_ASSIGNSEL_QI(36,3,0x18U, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x329U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x30bU)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x2edU)))));
    VL_ASSIGNSEL_QI(36,3,0x1bU, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x383U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x365U)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x347U)))));
    VL_ASSIGNSEL_QI(36,3,0x1eU, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x3ddU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x3bfU)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x3a1U)))));
    VL_ASSIGNSEL_QI(36,3,0x21U, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x437U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x419U)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(1080, vlSelfRef.__PVT__id_buffer_nxt, 0x3fbU)))));
    vlSelfRef.__PVT__id_translator_full_nxt = (4U > 
                                               ([&]() {
                vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location 
                    = (0xfffffffffULL & (~ vlSelfRef.__PVT__id_buffer_valid_nxt));
                vlSelf->__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0;
                const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                vlSelf->__Vfunc_all_bits_sum_up__2__tmp_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 687009292934309562ull);
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout = 0U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 1U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 1U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 1U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 2U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 2U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 2U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 3U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 3U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 3U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 4U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 4U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 4U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 5U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 5U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 5U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 6U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 6U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 6U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 7U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 7U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 7U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 8U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 8U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 8U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 9U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 9U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 9U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0xaU;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0xaU))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0xaU))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0xbU;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0xbU))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0xbU))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0xcU;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0xcU))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0xcU))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0xdU;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0xdU))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0xdU))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0xeU;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0xeU))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0xeU))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0xfU;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0xfU))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0xfU))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x10U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x10U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x10U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x11U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x11U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x11U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x12U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x12U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x12U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x13U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x13U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x13U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x14U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x14U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x14U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x15U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x15U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x15U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x16U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x16U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x16U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x17U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x17U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x17U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x18U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x18U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x18U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x19U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x19U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x19U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x1aU;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x1aU))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x1aU))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x1bU;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x1bU))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x1bU))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x1cU;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x1cU))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x1cU))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x1dU;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x1dU))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x1dU))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x1eU;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x1eU))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x1eU))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x1fU;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x1fU))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x1fU))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x20U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x20U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x20U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x21U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x21U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x21U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x22U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x22U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x22U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x23U;
                vlSelfRef.__Vconcswap_1_h4457ac4e__0 
                    = (1U & VL_BITSEL_IIII(8, (0xffU 
                                               & (VL_EXTEND_II(8,7, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(8,1, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x23U))))), 7U));
                vlSelfRef.__Vconcswap_1_h4464b48c__0 
                    = (0x7fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout) 
                                + VL_SEL_IIII(8, VL_EXTEND_II(8,1, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(36, vlSelfRef.__Vfunc_all_bits_sum_up__2__set_bit_location, 0x23U))), 0U, 7)));
                vlSelfRef.__Vfunc_all_bits_sum_up__2__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h4457ac4e__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h4464b48c__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0x24U;
            }(), (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__2__Vfuncout)));
}
