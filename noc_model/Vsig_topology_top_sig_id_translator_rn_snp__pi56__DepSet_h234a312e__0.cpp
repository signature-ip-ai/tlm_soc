// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_id_translator_rn_snp__pi56.h"

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__id_buffer
        [(3U & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn), 0U, 2))];
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__id_buffer
        [(3U & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn), 0U, 2))];
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAFWDED = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                   & (6U 
                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATA = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAPTL = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                 & (5U 
                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_COMPDATA = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                           & (4U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA = (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATA) 
                                                  | (IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAPTL)) 
                                                 | (IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAFWDED));
    vlSelfRef.__PVT__clear_vc0_snpdata = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                          & (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATA) 
                                              | (IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAPTL)) 
                                             | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                                 (3U 
                                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc0_compdata = (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                            & (IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)) 
                                           & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                               (3U 
                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn), 0U, 2)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__2(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc0_rx_SNPRESP = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                          & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPFWDED = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                               & (9U 
                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)));
    vlSelfRef.__PVT__clear_vc0_rsp = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                      & ((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESP) 
                                         | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                             (3U 
                                                              & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc0_both_rsp_dat = (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPFWDED) 
                                                & (IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)) 
                                               & ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn) 
                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__3(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAFWDED = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                   & (6U 
                                                      == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATA = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAPTL = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                 & (5U 
                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_COMPDATA = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                           & (4U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA = (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATA) 
                                                  | (IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAPTL)) 
                                                 | (IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAFWDED));
    vlSelfRef.__PVT__clear_vc1_snpdata = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                          & (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATA) 
                                              | (IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAPTL)) 
                                             | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                                 (3U 
                                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc1_compdata = (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                            & (IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)) 
                                           & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                               (3U 
                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn), 0U, 2)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__4(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc1_rx_SNPRESP = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                          & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPFWDED = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                               & (9U 
                                                  == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)));
    vlSelfRef.__PVT__clear_vc1_rsp = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                      & ((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESP) 
                                         | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                             (3U 
                                                              & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc1_both_rsp_dat = (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPFWDED) 
                                                & (IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)) 
                                               & ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn) 
                                                  == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__5(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat = (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPFWDED) 
                                               & (IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)) 
                                              & ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn) 
                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 0U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 1U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 2U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 3U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 3U)))));
    vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat = (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPFWDED) 
                                               & (IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)) 
                                              & ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn) 
                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 0U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 1U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 2U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 3U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 3U)))));
    vlSelfRef.__PVT__id_translator_full_nxt = (2U > 
                                               ([&]() {
                vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location 
                    = (0xfU & (~ (IData)(vlSelfRef.__PVT__valid_buffer_nxt)));
                vlSelf->__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0;
                const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                vlSelf->__Vfunc_all_bits_sum_up__1__tmp_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9026356511366490478ull);
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout = 0U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 0U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 0U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 1U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 1U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 1U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 2U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 2U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 2U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 3U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 3U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 3U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 4U;
            }(), (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)
                                                ? (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)
                                                : vlSelfRef.__PVT__id_buffer
                                               [(3U 
                                                 & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn), 0U, 2))]);
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)
                                               ? vlSelfRef.__PVT__id_buffer
                                              [(3U 
                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn), 0U, 2))]
                                               : (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)
                                                ? (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)
                                                : vlSelfRef.__PVT__id_buffer
                                               [(3U 
                                                 & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn), 0U, 2))]);
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)
                                               ? vlSelfRef.__PVT__id_buffer
                                              [(3U 
                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn), 0U, 2))]
                                               : (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__id_buffer
        [(3U & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn), 0U, 2))];
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__id_buffer
        [(3U & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn), 0U, 2))];
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAFWDED = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                   & (6U 
                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATA = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAPTL = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                 & (5U 
                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_COMPDATA = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                           & (4U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA = (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATA) 
                                                  | (IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAPTL)) 
                                                 | (IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAFWDED));
    vlSelfRef.__PVT__clear_vc0_snpdata = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                          & (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATA) 
                                              | (IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAPTL)) 
                                             | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                                 (3U 
                                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc0_compdata = (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                            & (IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)) 
                                           & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                               (3U 
                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn), 0U, 2)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__2(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc0_rx_SNPRESP = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                          & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPFWDED = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                               & (9U 
                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)));
    vlSelfRef.__PVT__clear_vc0_rsp = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                      & ((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESP) 
                                         | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                             (3U 
                                                              & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc0_both_rsp_dat = (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPFWDED) 
                                                & (IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)) 
                                               & ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn) 
                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__3(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAFWDED = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                   & (6U 
                                                      == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATA = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAPTL = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                 & (5U 
                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_COMPDATA = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                           & (4U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA = (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATA) 
                                                  | (IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAPTL)) 
                                                 | (IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAFWDED));
    vlSelfRef.__PVT__clear_vc1_snpdata = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                          & (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATA) 
                                              | (IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAPTL)) 
                                             | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                                 (3U 
                                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc1_compdata = (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                            & (IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)) 
                                           & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                               (3U 
                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn), 0U, 2)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__4(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc1_rx_SNPRESP = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                          & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPFWDED = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                               & (9U 
                                                  == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)));
    vlSelfRef.__PVT__clear_vc1_rsp = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                      & ((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESP) 
                                         | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                             (3U 
                                                              & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc1_both_rsp_dat = (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPFWDED) 
                                                & (IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)) 
                                               & ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn) 
                                                  == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__5(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat = (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPFWDED) 
                                               & (IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)) 
                                              & ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn) 
                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 0U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 1U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 2U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 3U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 3U)))));
    vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat = (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPFWDED) 
                                               & (IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)) 
                                              & ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn) 
                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 0U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 1U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 2U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 3U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 3U)))));
    vlSelfRef.__PVT__id_translator_full_nxt = (2U > 
                                               ([&]() {
                vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location 
                    = (0xfU & (~ (IData)(vlSelfRef.__PVT__valid_buffer_nxt)));
                vlSelf->__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0;
                const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                vlSelf->__Vfunc_all_bits_sum_up__1__tmp_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9026356511366490478ull);
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout = 0U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 0U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 0U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 1U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 1U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 1U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 2U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 2U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 2U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 3U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 3U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 3U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 4U;
            }(), (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__id_buffer__v0 = 0U;
    vlSelfRef.__VdlySet__id_buffer__v4 = 0U;
    vlSelfRef.__VdlySet__id_buffer__v5 = 0U;
    vlSelfRef.__VdlySet__id_buffer__v6 = 0U;
    vlSelfRef.__VdlySet__id_buffer__v7 = 0U;
    vlSelfRef.__Vdly__unused_signal_block__DOT__unused_signal 
        = vlSelfRef.__PVT__unused_signal_block__DOT__unused_signal;
    vlSelfRef.__Vdly__id_translator_full = vlSelfRef.__PVT__id_translator_full;
    vlSelfRef.__Vdly__waiting_for_first_rsp = vlSelfRef.__PVT__waiting_for_first_rsp;
    vlSelfRef.__Vdly__valid_buffer = vlSelfRef.__PVT__valid_buffer;
    vlSelfRef.__Vdly__unused_signal_block__DOT__unused_signal 
        = ((IData)(vlSelfRef.__PVT__rst_n) && (IData)(vlSelfRef.__PVT__unused_signal_block__DOT__unused_signal_nxt));
    vlSelfRef.__Vdly__id_translator_full = ((IData)(vlSelfRef.__PVT__rst_n) 
                                            && (IData)(vlSelfRef.__PVT__id_translator_full_nxt));
    if (vlSelfRef.__PVT__rst_n) {
        vlSelfRef.__VdlyVal__id_buffer__v0 = vlSelfRef.__PVT__id_buffer_nxt
            [0U];
        vlSelfRef.__VdlySet__id_buffer__v0 = 1U;
        vlSelfRef.__VdlyVal__id_buffer__v1 = vlSelfRef.__PVT__id_buffer_nxt
            [1U];
        vlSelfRef.__VdlyVal__id_buffer__v2 = vlSelfRef.__PVT__id_buffer_nxt
            [2U];
        vlSelfRef.__VdlyVal__id_buffer__v3 = vlSelfRef.__PVT__id_buffer_nxt
            [3U];
        vlSelfRef.__Vdly__valid_buffer = vlSelfRef.__PVT__valid_buffer_nxt;
        vlSelfRef.__Vdly__waiting_for_first_rsp = vlSelfRef.__PVT__waiting_for_first_rsp_nxt;
    } else {
        vlSelfRef.__VdlySet__id_buffer__v4 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.__VdlySet__id_buffer__v5 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.__VdlySet__id_buffer__v6 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.__VdlySet__id_buffer__v7 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.__Vdly__valid_buffer = 0U;
        vlSelfRef.__Vdly__waiting_for_first_rsp = 0U;
    }
    vlSelfRef.__PVT__unused_signal_block__DOT__unused_signal 
        = vlSelfRef.__Vdly__unused_signal_block__DOT__unused_signal;
    vlSelfRef.__PVT__id_translator_full = vlSelfRef.__Vdly__id_translator_full;
    vlSelfRef.__PVT__waiting_for_first_rsp = vlSelfRef.__Vdly__waiting_for_first_rsp;
    if (vlSelfRef.__VdlySet__id_buffer__v0) {
        vlSelfRef.__PVT__id_buffer[0U] = vlSelfRef.__VdlyVal__id_buffer__v0;
        vlSelfRef.__PVT__id_buffer[1U] = vlSelfRef.__VdlyVal__id_buffer__v1;
        vlSelfRef.__PVT__id_buffer[2U] = vlSelfRef.__VdlyVal__id_buffer__v2;
        vlSelfRef.__PVT__id_buffer[3U] = vlSelfRef.__VdlyVal__id_buffer__v3;
    }
    if (vlSelfRef.__VdlySet__id_buffer__v4) {
        vlSelfRef.__PVT__id_buffer[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__id_buffer__v5) {
        vlSelfRef.__PVT__id_buffer[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__id_buffer__v6) {
        vlSelfRef.__PVT__id_buffer[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__id_buffer__v7) {
        vlSelfRef.__PVT__id_buffer[3U] = 0U;
    }
    vlSelfRef.__PVT__valid_buffer = vlSelfRef.__Vdly__valid_buffer;
    vlSelfRef.__PVT__unused_signal_block__DOT__unused_signal_nxt 
        = ((IData)(vlSelfRef.__PVT__timeout_snprespdata_i_pd) 
           | (IData)(vlSelfRef.__PVT__unused_signal_block__DOT__unused_signal));
    vlSelfRef.__PVT__empty_valid_buffer = (0xfU & (~ (IData)(vlSelfRef.__PVT__valid_buffer)));
    vlSelfRef.__PVT__id_translator_hs_pending_txn = 
        VL_REDOR_I((IData)(vlSelfRef.__PVT__valid_buffer));
    vlSelfRef.__PVT__id_translator_snp_empty = VL_REDAND_II(4, (IData)(vlSelfRef.__PVT__empty_valid_buffer));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_tx_SNPFWD = ((IData)(vlSelfRef.__PVT__tx_snp_v) 
                                     & ((((((0x16U 
                                             == (IData)(vlSelfRef.__PVT__tx_snp_opcode)) 
                                            | (0x11U 
                                               == (IData)(vlSelfRef.__PVT__tx_snp_opcode))) 
                                           | (0x12U 
                                              == (IData)(vlSelfRef.__PVT__tx_snp_opcode))) 
                                          | (0x13U 
                                             == (IData)(vlSelfRef.__PVT__tx_snp_opcode))) 
                                         | (0x14U == (IData)(vlSelfRef.__PVT__tx_snp_opcode))) 
                                        | (0x17U == (IData)(vlSelfRef.__PVT__tx_snp_opcode))));
    vlSelfRef.__PVT__assert_cntr_snp = vlSelfRef.__PVT__is_tx_SNPFWD;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)
                                               ? vlSelfRef.__PVT__id_buffer
                                              [(3U 
                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn), 0U, 2))]
                                               : (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn));
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)
                                                ? (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)
                                                : vlSelfRef.__PVT__id_buffer
                                               [(3U 
                                                 & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn), 0U, 2))]);
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)
                                               ? vlSelfRef.__PVT__id_buffer
                                              [(3U 
                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn), 0U, 2))]
                                               : (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn));
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)
                                                ? (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)
                                                : vlSelfRef.__PVT__id_buffer
                                               [(3U 
                                                 & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn), 0U, 2))]);
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__2(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_id_buffer = ((((IData)(1U) 
                                         + (~ (IData)(vlSelfRef.__PVT__empty_valid_buffer))) 
                                        & (IData)(vlSelfRef.__PVT__empty_valid_buffer)) 
                                       & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__tx_snp_v), 4U));
    vlSelfRef.__PVT__tx_actual_snp_txnid_to_rn = VL_EXTEND_II(12,2, 
                                                              ([&]() {
                vlSelfRef.__Vfunc_clog2_index__0__set_bit_location 
                    = vlSelfRef.__PVT__wren_id_buffer;
                vlSelf->__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0;
                vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0U;
                if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_clog2_index__0__set_bit_location), 0U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 1U;
                if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_clog2_index__0__set_bit_location), 1U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 1U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 2U;
                if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_clog2_index__0__set_bit_location), 2U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 2U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 3U;
                if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_clog2_index__0__set_bit_location), 3U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 3U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 4U;
            }(), (IData)(vlSelfRef.__Vfunc_clog2_index__0__Vfuncout)));
    vlSelfRef.__PVT__id_buffer_nxt[0U] = ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 0U))
                                           ? (IData)(vlSelfRef.__PVT__tx_snp_txnid_from_hn)
                                           : vlSelfRef.__PVT__id_buffer
                                          [0U]);
    vlSelfRef.__PVT__id_buffer_nxt[1U] = ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 1U))
                                           ? (IData)(vlSelfRef.__PVT__tx_snp_txnid_from_hn)
                                           : vlSelfRef.__PVT__id_buffer
                                          [1U]);
    vlSelfRef.__PVT__id_buffer_nxt[2U] = ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 2U))
                                           ? (IData)(vlSelfRef.__PVT__tx_snp_txnid_from_hn)
                                           : vlSelfRef.__PVT__id_buffer
                                          [2U]);
    vlSelfRef.__PVT__id_buffer_nxt[3U] = ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 3U))
                                           ? (IData)(vlSelfRef.__PVT__tx_snp_txnid_from_hn)
                                           : vlSelfRef.__PVT__id_buffer
                                          [3U]);
    vlSelfRef.__PVT__tx_snp_txnid_to_rn = vlSelfRef.__PVT__tx_actual_snp_txnid_to_rn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__3(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__id_buffer
        [(3U & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn), 0U, 2))];
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__4(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__id_buffer
        [(3U & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn), 0U, 2))];
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__5(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAFWDED = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                   & (6U 
                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATA = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAPTL = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                 & (5U 
                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_COMPDATA = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                           & (4U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA = (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATA) 
                                                  | (IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAPTL)) 
                                                 | (IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAFWDED));
    vlSelfRef.__PVT__clear_vc0_snpdata = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                          & (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATA) 
                                              | (IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAPTL)) 
                                             | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                                 (3U 
                                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc0_compdata = (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                            & (IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)) 
                                           & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                               (3U 
                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn), 0U, 2)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__6(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc0_rx_SNPRESP = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                          & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPFWDED = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                               & (9U 
                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)));
    vlSelfRef.__PVT__clear_vc0_rsp = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                      & ((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESP) 
                                         | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                             (3U 
                                                              & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc0_both_rsp_dat = (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPFWDED) 
                                                & (IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)) 
                                               & ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn) 
                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__7(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAFWDED = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                   & (6U 
                                                      == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATA = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAPTL = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                 & (5U 
                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_COMPDATA = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                           & (4U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA = (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATA) 
                                                  | (IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAPTL)) 
                                                 | (IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAFWDED));
    vlSelfRef.__PVT__clear_vc1_snpdata = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                          & (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATA) 
                                              | (IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAPTL)) 
                                             | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                                 (3U 
                                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc1_compdata = (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                            & (IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)) 
                                           & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                               (3U 
                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn), 0U, 2)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__8(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc1_rx_SNPRESP = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                          & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPFWDED = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                               & (9U 
                                                  == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)));
    vlSelfRef.__PVT__clear_vc1_rsp = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                      & ((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESP) 
                                         | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                             (3U 
                                                              & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc1_both_rsp_dat = (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPFWDED) 
                                                & (IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)) 
                                               & ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn) 
                                                  == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__9(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p2__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat = (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPFWDED) 
                                               & (IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)) 
                                              & ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn) 
                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 0U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 1U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 2U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 3U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 3U)))));
    vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat = (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPFWDED) 
                                               & (IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)) 
                                              & ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn) 
                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 0U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 1U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 2U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 3U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 3U)))));
    vlSelfRef.__PVT__id_translator_full_nxt = (2U > 
                                               ([&]() {
                vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location 
                    = (0xfU & (~ (IData)(vlSelfRef.__PVT__valid_buffer_nxt)));
                vlSelf->__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0;
                const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                vlSelf->__Vfunc_all_bits_sum_up__1__tmp_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9026356511366490478ull);
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout = 0U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 0U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 0U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 1U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 1U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 1U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 2U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 2U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 2U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 3U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 3U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location), 3U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 4U;
            }(), (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__id_buffer
        [(3U & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn), 0U, 2))];
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__id_buffer
        [(3U & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn), 0U, 2))];
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAFWDED = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                   & (6U 
                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATA = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAPTL = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                 & (5U 
                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_COMPDATA = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                           & (4U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA = (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATA) 
                                                  | (IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAPTL)) 
                                                 | (IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAFWDED));
    vlSelfRef.__PVT__clear_vc0_snpdata = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                          & (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATA) 
                                              | (IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAPTL)) 
                                             | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                                 (3U 
                                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc0_compdata = (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                            & (IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)) 
                                           & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                               (3U 
                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn), 0U, 2)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__2(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc0_rx_SNPRESP = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                          & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPFWDED = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                               & (9U 
                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)));
    vlSelfRef.__PVT__clear_vc0_rsp = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                      & ((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESP) 
                                         | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                             (3U 
                                                              & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc0_both_rsp_dat = (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPFWDED) 
                                                & (IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)) 
                                               & ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn) 
                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__3(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAFWDED = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                   & (6U 
                                                      == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATA = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAPTL = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                 & (5U 
                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_COMPDATA = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                           & (4U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA = (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATA) 
                                                  | (IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAPTL)) 
                                                 | (IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAFWDED));
    vlSelfRef.__PVT__clear_vc1_snpdata = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                          & (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATA) 
                                              | (IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAPTL)) 
                                             | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                                 (3U 
                                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc1_compdata = (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                            & (IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)) 
                                           & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                               (3U 
                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn), 0U, 2)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__4(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc1_rx_SNPRESP = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                          & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPFWDED = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                               & (9U 
                                                  == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)));
    vlSelfRef.__PVT__clear_vc1_rsp = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                      & ((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESP) 
                                         | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                             (3U 
                                                              & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc1_both_rsp_dat = (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPFWDED) 
                                                & (IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)) 
                                               & ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn) 
                                                  == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__5(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat = (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPFWDED) 
                                               & (IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)) 
                                              & ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn) 
                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 0U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 1U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 2U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 3U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 3U)))));
    vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat = (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPFWDED) 
                                               & (IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)) 
                                              & ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn) 
                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 0U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 1U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 2U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 3U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 3U)))));
    vlSelfRef.__PVT__id_translator_full_nxt = (2U > 
                                               ([&]() {
                vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location 
                    = (0xfU & (~ (IData)(vlSelfRef.__PVT__valid_buffer_nxt)));
                vlSelf->__Vfunc_all_bits_sum_up__3__unnamedblk3__DOT__i = 0;
                const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                vlSelf->__Vfunc_all_bits_sum_up__3__tmp_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4847001170336336850ull);
                vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout = 0U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 0U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 0U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__3__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__unnamedblk3__DOT__i = 1U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 1U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 1U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__3__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__unnamedblk3__DOT__i = 2U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 2U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 2U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__3__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__unnamedblk3__DOT__i = 3U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 3U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 3U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__3__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__unnamedblk3__DOT__i = 4U;
            }(), (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)
                                                ? (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)
                                                : vlSelfRef.__PVT__id_buffer
                                               [(3U 
                                                 & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn), 0U, 2))]);
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)
                                               ? vlSelfRef.__PVT__id_buffer
                                              [(3U 
                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn), 0U, 2))]
                                               : (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)
                                                ? (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)
                                                : vlSelfRef.__PVT__id_buffer
                                               [(3U 
                                                 & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn), 0U, 2))]);
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)
                                               ? vlSelfRef.__PVT__id_buffer
                                              [(3U 
                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn), 0U, 2))]
                                               : (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__id_buffer
        [(3U & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn), 0U, 2))];
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__id_buffer
        [(3U & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn), 0U, 2))];
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAFWDED = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                   & (6U 
                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATA = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAPTL = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                 & (5U 
                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_COMPDATA = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                           & (4U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA = (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATA) 
                                                  | (IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAPTL)) 
                                                 | (IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAFWDED));
    vlSelfRef.__PVT__clear_vc0_snpdata = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                          & (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATA) 
                                              | (IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAPTL)) 
                                             | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                                 (3U 
                                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc0_compdata = (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                            & (IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)) 
                                           & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                               (3U 
                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn), 0U, 2)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__2(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc0_rx_SNPRESP = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                          & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPFWDED = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                               & (9U 
                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)));
    vlSelfRef.__PVT__clear_vc0_rsp = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                      & ((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESP) 
                                         | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                             (3U 
                                                              & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc0_both_rsp_dat = (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPFWDED) 
                                                & (IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)) 
                                               & ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn) 
                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__3(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAFWDED = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                   & (6U 
                                                      == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATA = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAPTL = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                 & (5U 
                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_COMPDATA = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                           & (4U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA = (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATA) 
                                                  | (IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAPTL)) 
                                                 | (IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAFWDED));
    vlSelfRef.__PVT__clear_vc1_snpdata = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                          & (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATA) 
                                              | (IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAPTL)) 
                                             | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                                 (3U 
                                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc1_compdata = (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                            & (IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)) 
                                           & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                               (3U 
                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn), 0U, 2)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__4(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc1_rx_SNPRESP = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                          & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPFWDED = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                               & (9U 
                                                  == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)));
    vlSelfRef.__PVT__clear_vc1_rsp = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                      & ((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESP) 
                                         | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                             (3U 
                                                              & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc1_both_rsp_dat = (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPFWDED) 
                                                & (IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)) 
                                               & ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn) 
                                                  == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__5(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat = (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPFWDED) 
                                               & (IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)) 
                                              & ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn) 
                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 0U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 1U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 2U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 3U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 3U)))));
    vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat = (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPFWDED) 
                                               & (IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)) 
                                              & ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn) 
                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 0U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 1U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 2U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 3U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 3U)))));
    vlSelfRef.__PVT__id_translator_full_nxt = (2U > 
                                               ([&]() {
                vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location 
                    = (0xfU & (~ (IData)(vlSelfRef.__PVT__valid_buffer_nxt)));
                vlSelf->__Vfunc_all_bits_sum_up__3__unnamedblk3__DOT__i = 0;
                const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                vlSelf->__Vfunc_all_bits_sum_up__3__tmp_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4847001170336336850ull);
                vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout = 0U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 0U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 0U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__3__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__unnamedblk3__DOT__i = 1U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 1U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 1U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__3__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__unnamedblk3__DOT__i = 2U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 2U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 2U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__3__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__unnamedblk3__DOT__i = 3U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 3U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 3U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__3__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__unnamedblk3__DOT__i = 4U;
            }(), (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__id_buffer__v0 = 0U;
    vlSelfRef.__VdlySet__id_buffer__v4 = 0U;
    vlSelfRef.__VdlySet__id_buffer__v5 = 0U;
    vlSelfRef.__VdlySet__id_buffer__v6 = 0U;
    vlSelfRef.__VdlySet__id_buffer__v7 = 0U;
    vlSelfRef.__Vdly__unused_signal_block__DOT__unused_signal 
        = vlSelfRef.__PVT__unused_signal_block__DOT__unused_signal;
    vlSelfRef.__Vdly__id_translator_full = vlSelfRef.__PVT__id_translator_full;
    vlSelfRef.__Vdly__waiting_for_first_rsp = vlSelfRef.__PVT__waiting_for_first_rsp;
    vlSelfRef.__Vdly__valid_buffer = vlSelfRef.__PVT__valid_buffer;
    vlSelfRef.__Vdly__unused_signal_block__DOT__unused_signal 
        = ((IData)(vlSelfRef.__PVT__rst_n) && (IData)(vlSelfRef.__PVT__unused_signal_block__DOT__unused_signal_nxt));
    vlSelfRef.__Vdly__id_translator_full = ((IData)(vlSelfRef.__PVT__rst_n) 
                                            && (IData)(vlSelfRef.__PVT__id_translator_full_nxt));
    if (vlSelfRef.__PVT__rst_n) {
        vlSelfRef.__VdlyVal__id_buffer__v0 = vlSelfRef.__PVT__id_buffer_nxt
            [0U];
        vlSelfRef.__VdlySet__id_buffer__v0 = 1U;
        vlSelfRef.__VdlyVal__id_buffer__v1 = vlSelfRef.__PVT__id_buffer_nxt
            [1U];
        vlSelfRef.__VdlyVal__id_buffer__v2 = vlSelfRef.__PVT__id_buffer_nxt
            [2U];
        vlSelfRef.__VdlyVal__id_buffer__v3 = vlSelfRef.__PVT__id_buffer_nxt
            [3U];
        vlSelfRef.__Vdly__valid_buffer = vlSelfRef.__PVT__valid_buffer_nxt;
        vlSelfRef.__Vdly__waiting_for_first_rsp = vlSelfRef.__PVT__waiting_for_first_rsp_nxt;
    } else {
        vlSelfRef.__VdlySet__id_buffer__v4 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.__VdlySet__id_buffer__v5 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.__VdlySet__id_buffer__v6 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.__VdlySet__id_buffer__v7 = 1U;
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.__Vdly__valid_buffer = 0U;
        vlSelfRef.__Vdly__waiting_for_first_rsp = 0U;
    }
    vlSelfRef.__PVT__unused_signal_block__DOT__unused_signal 
        = vlSelfRef.__Vdly__unused_signal_block__DOT__unused_signal;
    vlSelfRef.__PVT__id_translator_full = vlSelfRef.__Vdly__id_translator_full;
    vlSelfRef.__PVT__waiting_for_first_rsp = vlSelfRef.__Vdly__waiting_for_first_rsp;
    if (vlSelfRef.__VdlySet__id_buffer__v0) {
        vlSelfRef.__PVT__id_buffer[0U] = vlSelfRef.__VdlyVal__id_buffer__v0;
        vlSelfRef.__PVT__id_buffer[1U] = vlSelfRef.__VdlyVal__id_buffer__v1;
        vlSelfRef.__PVT__id_buffer[2U] = vlSelfRef.__VdlyVal__id_buffer__v2;
        vlSelfRef.__PVT__id_buffer[3U] = vlSelfRef.__VdlyVal__id_buffer__v3;
    }
    if (vlSelfRef.__VdlySet__id_buffer__v4) {
        vlSelfRef.__PVT__id_buffer[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__id_buffer__v5) {
        vlSelfRef.__PVT__id_buffer[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__id_buffer__v6) {
        vlSelfRef.__PVT__id_buffer[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__id_buffer__v7) {
        vlSelfRef.__PVT__id_buffer[3U] = 0U;
    }
    vlSelfRef.__PVT__valid_buffer = vlSelfRef.__Vdly__valid_buffer;
    vlSelfRef.__PVT__unused_signal_block__DOT__unused_signal_nxt 
        = ((IData)(vlSelfRef.__PVT__timeout_snprespdata_i_pd) 
           | (IData)(vlSelfRef.__PVT__unused_signal_block__DOT__unused_signal));
    vlSelfRef.__PVT__empty_valid_buffer = (0xfU & (~ (IData)(vlSelfRef.__PVT__valid_buffer)));
    vlSelfRef.__PVT__id_translator_hs_pending_txn = 
        VL_REDOR_I((IData)(vlSelfRef.__PVT__valid_buffer));
    vlSelfRef.__PVT__id_translator_snp_empty = VL_REDAND_II(4, (IData)(vlSelfRef.__PVT__empty_valid_buffer));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_tx_SNPFWD = ((IData)(vlSelfRef.__PVT__tx_snp_v) 
                                     & ((((((0x16U 
                                             == (IData)(vlSelfRef.__PVT__tx_snp_opcode)) 
                                            | (0x11U 
                                               == (IData)(vlSelfRef.__PVT__tx_snp_opcode))) 
                                           | (0x12U 
                                              == (IData)(vlSelfRef.__PVT__tx_snp_opcode))) 
                                          | (0x13U 
                                             == (IData)(vlSelfRef.__PVT__tx_snp_opcode))) 
                                         | (0x14U == (IData)(vlSelfRef.__PVT__tx_snp_opcode))) 
                                        | (0x17U == (IData)(vlSelfRef.__PVT__tx_snp_opcode))));
    vlSelfRef.__PVT__assert_cntr_snp = vlSelfRef.__PVT__is_tx_SNPFWD;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)
                                               ? vlSelfRef.__PVT__id_buffer
                                              [(3U 
                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn), 0U, 2))]
                                               : (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn));
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)
                                                ? (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)
                                                : vlSelfRef.__PVT__id_buffer
                                               [(3U 
                                                 & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn), 0U, 2))]);
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)
                                               ? vlSelfRef.__PVT__id_buffer
                                              [(3U 
                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn), 0U, 2))]
                                               : (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn));
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)
                                                ? (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)
                                                : vlSelfRef.__PVT__id_buffer
                                               [(3U 
                                                 & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn), 0U, 2))]);
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__2(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_id_buffer = ((((IData)(1U) 
                                         + (~ (IData)(vlSelfRef.__PVT__empty_valid_buffer))) 
                                        & (IData)(vlSelfRef.__PVT__empty_valid_buffer)) 
                                       & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__tx_snp_v), 4U));
    vlSelfRef.__PVT__tx_actual_snp_txnid_to_rn = VL_EXTEND_II(12,2, 
                                                              ([&]() {
                vlSelfRef.__Vfunc_clog2_index__2__set_bit_location 
                    = vlSelfRef.__PVT__wren_id_buffer;
                vlSelf->__Vfunc_clog2_index__2__unnamedblk2__DOT__i = 0;
                vlSelfRef.__Vfunc_clog2_index__2__Vfuncout = 0U;
                if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_clog2_index__2__set_bit_location), 0U))) {
                    vlSelfRef.__Vfunc_clog2_index__2__Vfuncout = 0U;
                }
                vlSelfRef.__Vfunc_clog2_index__2__unnamedblk2__DOT__i = 1U;
                if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_clog2_index__2__set_bit_location), 1U))) {
                    vlSelfRef.__Vfunc_clog2_index__2__Vfuncout = 1U;
                }
                vlSelfRef.__Vfunc_clog2_index__2__unnamedblk2__DOT__i = 2U;
                if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_clog2_index__2__set_bit_location), 2U))) {
                    vlSelfRef.__Vfunc_clog2_index__2__Vfuncout = 2U;
                }
                vlSelfRef.__Vfunc_clog2_index__2__unnamedblk2__DOT__i = 3U;
                if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_clog2_index__2__set_bit_location), 3U))) {
                    vlSelfRef.__Vfunc_clog2_index__2__Vfuncout = 3U;
                }
                vlSelfRef.__Vfunc_clog2_index__2__unnamedblk2__DOT__i = 4U;
            }(), (IData)(vlSelfRef.__Vfunc_clog2_index__2__Vfuncout)));
    vlSelfRef.__PVT__id_buffer_nxt[0U] = ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 0U))
                                           ? (IData)(vlSelfRef.__PVT__tx_snp_txnid_from_hn)
                                           : vlSelfRef.__PVT__id_buffer
                                          [0U]);
    vlSelfRef.__PVT__id_buffer_nxt[1U] = ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 1U))
                                           ? (IData)(vlSelfRef.__PVT__tx_snp_txnid_from_hn)
                                           : vlSelfRef.__PVT__id_buffer
                                          [1U]);
    vlSelfRef.__PVT__id_buffer_nxt[2U] = ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 2U))
                                           ? (IData)(vlSelfRef.__PVT__tx_snp_txnid_from_hn)
                                           : vlSelfRef.__PVT__id_buffer
                                          [2U]);
    vlSelfRef.__PVT__id_buffer_nxt[3U] = ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 3U))
                                           ? (IData)(vlSelfRef.__PVT__tx_snp_txnid_from_hn)
                                           : vlSelfRef.__PVT__id_buffer
                                          [3U]);
    vlSelfRef.__PVT__tx_snp_txnid_to_rn = vlSelfRef.__PVT__tx_actual_snp_txnid_to_rn;
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__3(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__id_buffer
        [(3U & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn), 0U, 2))];
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__4(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__id_buffer
        [(3U & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn), 0U, 2))];
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__5(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAFWDED = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                   & (6U 
                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATA = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAPTL = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                                 & (5U 
                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_COMPDATA = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                           & (4U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA = (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATA) 
                                                  | (IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAPTL)) 
                                                 | (IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAFWDED));
    vlSelfRef.__PVT__clear_vc0_snpdata = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                          & (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATA) 
                                              | (IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPDATAPTL)) 
                                             | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                                 (3U 
                                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc0_compdata = (((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                            & (IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)) 
                                           & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                               (3U 
                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn), 0U, 2)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__6(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc0_rx_SNPRESP = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                          & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_SNPRESPFWDED = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                               & (9U 
                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)));
    vlSelfRef.__PVT__clear_vc0_rsp = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                      & ((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESP) 
                                         | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                             (3U 
                                                              & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc0_both_rsp_dat = (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPFWDED) 
                                                & (IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)) 
                                               & ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn) 
                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__7(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAFWDED = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                   & (6U 
                                                      == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATA = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAPTL = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                                 & (5U 
                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_COMPDATA = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                           & (4U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA = (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATA) 
                                                  | (IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAPTL)) 
                                                 | (IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAFWDED));
    vlSelfRef.__PVT__clear_vc1_snpdata = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                          & (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATA) 
                                              | (IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPDATAPTL)) 
                                             | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                                 (3U 
                                                                  & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc1_compdata = (((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                            & (IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)) 
                                           & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                               (3U 
                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn), 0U, 2)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__8(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc1_rx_SNPRESP = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                          & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_SNPRESPFWDED = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                               & (9U 
                                                  == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)));
    vlSelfRef.__PVT__clear_vc1_rsp = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                      & ((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESP) 
                                         | (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 
                                                             (3U 
                                                              & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn), 0U, 2))))));
    vlSelfRef.__PVT__clear_vc1_both_rsp_dat = (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPFWDED) 
                                                & (IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)) 
                                               & ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn) 
                                                  == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__9(Vsig_topology_top_sig_id_translator_rn_snp__pi56* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi56___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat = (((IData)(vlSelfRef.__PVT__is_vc0_rx_SNPRESPFWDED) 
                                               & (IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)) 
                                              & ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn) 
                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 0U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 1U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 2U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__waiting_for_first_rsp_nxt, 
                    (1U & ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 3U) 
                            & (IData)(vlSelfRef.__PVT__assert_cntr_snp)) 
                           | ((~ (((((((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                       & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                                      | ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                         & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                                     | ((IData)(vlSelfRef.__PVT__is_vc0_rx_ANYSNPRESPDATA) 
                                        & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_ANYSNPRESPDATA) 
                                       & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                                   | ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                      & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                     & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn))))) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__waiting_for_first_rsp), 3U)))));
    vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat = (((IData)(vlSelfRef.__PVT__is_vc1_rx_SNPRESPFWDED) 
                                               & (IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)) 
                                              & ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn) 
                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (0U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (0U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (1U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (1U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (2U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (2U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__clear_valid, 
                    (((((((((IData)(vlSelfRef.__PVT__clear_vc0_rsp) 
                            | (IData)(vlSelfRef.__PVT__clear_vc0_both_rsp_dat)) 
                           | (IData)(vlSelfRef.__PVT__clear_vc0_rsp_vc1_dat)) 
                          & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn))) 
                         | ((((IData)(vlSelfRef.__PVT__clear_vc1_rsp) 
                              | (IData)(vlSelfRef.__PVT__clear_vc1_both_rsp_dat)) 
                             | (IData)(vlSelfRef.__PVT__clear_vc1_rsp_vc0_dat)) 
                            & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn)))) 
                        | ((IData)(vlSelfRef.__PVT__clear_vc0_snpdata) 
                           & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn)))) 
                       | ((IData)(vlSelfRef.__PVT__clear_vc1_snpdata) 
                          & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn)))) 
                      | ((IData)(vlSelfRef.__PVT__clear_vc0_compdata) 
                         & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)))) 
                     | ((IData)(vlSelfRef.__PVT__clear_vc1_compdata) 
                        & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 0U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 0U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 1U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 1U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 2U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 2U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__wren_id_buffer), 3U) 
                           | ((~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__clear_valid), 3U)) 
                              & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__valid_buffer), 3U)))));
    vlSelfRef.__PVT__id_translator_full_nxt = (2U > 
                                               ([&]() {
                vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location 
                    = (0xfU & (~ (IData)(vlSelfRef.__PVT__valid_buffer_nxt)));
                vlSelf->__Vfunc_all_bits_sum_up__3__unnamedblk3__DOT__i = 0;
                const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                vlSelf->__Vfunc_all_bits_sum_up__3__tmp_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4847001170336336850ull);
                vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout = 0U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 0U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 0U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__3__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__unnamedblk3__DOT__i = 1U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 1U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 1U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__3__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__unnamedblk3__DOT__i = 2U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 2U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 2U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__3__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__unnamedblk3__DOT__i = 3U;
                vlSelfRef.__Vconcswap_1_h7268aae5__0 
                    = (1U & VL_BITSEL_IIII(4, (0xfU 
                                               & (VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,3, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout)), 0U, 4) 
                                                  + 
                                                  VL_SEL_IIII(7, 
                                                              VL_EXTEND_II(7,1, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 3U))), 0U, 4))), 3U));
                vlSelfRef.__Vconcswap_1_h720f3981__0 
                    = (7U & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout) 
                             + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                           (1U 
                                                            & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__set_bit_location), 3U))), 0U, 3)));
                vlSelfRef.__Vfunc_all_bits_sum_up__3__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7268aae5__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h720f3981__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__3__unnamedblk3__DOT__i = 4U;
            }(), (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__3__Vfuncout)));
}
