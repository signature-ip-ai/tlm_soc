// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_id_translator_rn_snp__pi55.h"

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_snp__pi55___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp(Vsig_topology_top_sig_id_translator_rn_snp__pi55* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi55___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__timeout_snprespdata_i_pd = 0U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_snp__pi55___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0(Vsig_topology_top_sig_id_translator_rn_snp__pi55* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi55___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__unused_signal_block__DOT__unused_signal_nxt 
        = ((IData)(vlSelfRef.__PVT__timeout_snprespdata_i_pd) 
           | (IData)(vlSelfRef.__PVT__unused_signal_block__DOT__unused_signal));
    vlSelfRef.__PVT__empty_valid_buffer = (0xfU & (~ (IData)(vlSelfRef.__PVT__valid_buffer)));
    vlSelfRef.__PVT__id_translator_hs_pending_txn = 
        VL_REDOR_I((IData)(vlSelfRef.__PVT__valid_buffer));
    vlSelfRef.__PVT__id_translator_snp_empty = VL_REDAND_II(4, (IData)(vlSelfRef.__PVT__empty_valid_buffer));
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_snp__pi55___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1(Vsig_topology_top_sig_id_translator_rn_snp__pi55* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi55___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wren_id_buffer = ((((IData)(1U) 
                                         + (~ (IData)(vlSelfRef.__PVT__empty_valid_buffer))) 
                                        & (IData)(vlSelfRef.__PVT__empty_valid_buffer)) 
                                       & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__tx_snp_v), 4U));
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
    vlSelfRef.__PVT__assert_cntr_snp = vlSelfRef.__PVT__is_tx_SNPFWD;
    vlSelfRef.__PVT__tx_snp_txnid_to_rn = vlSelfRef.__PVT__tx_actual_snp_txnid_to_rn;
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_snp__pi55___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0(Vsig_topology_top_sig_id_translator_rn_snp__pi55* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi55___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_snp__pi55___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1(Vsig_topology_top_sig_id_translator_rn_snp__pi55* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi55___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__1\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_snp__pi55___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__2(Vsig_topology_top_sig_id_translator_rn_snp__pi55* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi55___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__id_buffer
        [(3U & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn), 0U, 2))];
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__id_buffer
        [(3U & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn), 0U, 2))];
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_snp__pi55___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__3(Vsig_topology_top_sig_id_translator_rn_snp__pi55* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi55___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__3\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_snp__pi55___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__4(Vsig_topology_top_sig_id_translator_rn_snp__pi55* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi55___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__4\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_snp__pi55___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__5(Vsig_topology_top_sig_id_translator_rn_snp__pi55* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi55___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__5\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_snp__pi55___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__6(Vsig_topology_top_sig_id_translator_rn_snp__pi55* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi55___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__6\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_snp__pi55___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__7(Vsig_topology_top_sig_id_translator_rn_snp__pi55* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi55___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p1__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_snp__7\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_snp__pi55___ctor_var_reset(Vsig_topology_top_sig_id_translator_rn_snp__pi55* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_snp__pi55___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->__PVT__tx_snp_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17692015695977157657ull);
    vlSelf->__PVT__tx_snp_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2273237233846184466ull);
    vlSelf->__PVT__tx_snp_txnid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15672756177962464957ull);
    vlSelf->__PVT__tx_snp_txnid_to_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4077414954976996057ull);
    vlSelf->__PVT__vc0_rx_rsp_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3971686118301021010ull);
    vlSelf->__PVT__vc0_rx_rsp_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16633450762204075446ull);
    vlSelf->__PVT__vc0_rx_rsp_txnid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8638758416788597766ull);
    vlSelf->__PVT__vc0_rx_rsp_txnid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12364437059197336991ull);
    vlSelf->__PVT__vc1_rx_rsp_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14656621017388532550ull);
    vlSelf->__PVT__vc1_rx_rsp_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3079772483458571841ull);
    vlSelf->__PVT__vc1_rx_rsp_txnid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14340119240101131659ull);
    vlSelf->__PVT__vc1_rx_rsp_txnid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2442109393445920530ull);
    vlSelf->__PVT__vc0_rx_dat_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11348919215571002080ull);
    vlSelf->__PVT__vc0_rx_dat_opcode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17575625163452640630ull);
    vlSelf->__PVT__vc0_rx_dat_txnid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7673534438012336129ull);
    vlSelf->__PVT__vc0_rx_dat_dbid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9121176229297233863ull);
    vlSelf->__PVT__vc0_rx_dat_txnid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13803892076329687828ull);
    vlSelf->__PVT__vc0_rx_dat_dbid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16724105472290879617ull);
    vlSelf->__PVT__vc1_rx_dat_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10084399847514638597ull);
    vlSelf->__PVT__vc1_rx_dat_opcode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17609014715899986201ull);
    vlSelf->__PVT__vc1_rx_dat_txnid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 695509224416565905ull);
    vlSelf->__PVT__vc1_rx_dat_dbid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13615556910726986192ull);
    vlSelf->__PVT__vc1_rx_dat_txnid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16086952640368813078ull);
    vlSelf->__PVT__vc1_rx_dat_dbid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7696150905062115265ull);
    vlSelf->__PVT__id_translator_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4073664312429058754ull);
    vlSelf->__PVT__id_translator_hs_pending_txn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12924654799560797390ull);
    vlSelf->__PVT__id_translator_snp_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16865210711919753740ull);
    vlSelf->__PVT__timeout_snprespdata_i_pd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15734256619621395638ull);
    vlSelf->__PVT__is_tx_SNPFWD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11654596328279143903ull);
    vlSelf->__PVT__is_vc0_rx_COMPDATA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 678701207588473306ull);
    vlSelf->__PVT__is_vc1_rx_COMPDATA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6170613805742258274ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__id_buffer[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5149900860303124661ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__id_buffer_nxt[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2890166502963185102ull);
    }
    vlSelf->__PVT__wren_id_buffer = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14582782863542166835ull);
    vlSelf->__PVT__clear_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15112167422199605677ull);
    vlSelf->__PVT__valid_buffer = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5535591369001566361ull);
    vlSelf->__PVT__valid_buffer_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2606422949809197289ull);
    vlSelf->__PVT__waiting_for_first_rsp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15681231593229521382ull);
    vlSelf->__PVT__waiting_for_first_rsp_nxt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5551275913598125560ull);
    vlSelf->__PVT__empty_valid_buffer = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15327870279615766740ull);
    vlSelf->__PVT__id_translator_full_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9008992663785856423ull);
    vlSelf->__PVT__assert_cntr_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13961069115102992086ull);
    vlSelf->__PVT__clear_vc0_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3066813362587393696ull);
    vlSelf->__PVT__clear_vc1_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17322462654464113510ull);
    vlSelf->__PVT__clear_vc0_snpdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13481285299585952103ull);
    vlSelf->__PVT__clear_vc1_snpdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3254371488621476582ull);
    vlSelf->__PVT__clear_vc0_compdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9860072634530070462ull);
    vlSelf->__PVT__clear_vc1_compdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3646685469921077367ull);
    vlSelf->__PVT__clear_vc0_both_rsp_dat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8236624341060911361ull);
    vlSelf->__PVT__clear_vc1_both_rsp_dat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2304083356596571056ull);
    vlSelf->__PVT__clear_vc0_rsp_vc1_dat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13746048936856235246ull);
    vlSelf->__PVT__clear_vc1_rsp_vc0_dat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18137693002974234713ull);
    vlSelf->__PVT__is_vc0_rx_SNPRESP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 916521447684237481ull);
    vlSelf->__PVT__is_vc1_rx_SNPRESP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15384834937894695830ull);
    vlSelf->__PVT__is_vc0_rx_SNPRESPFWDED = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13213682718888188235ull);
    vlSelf->__PVT__is_vc1_rx_SNPRESPFWDED = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16670772521516520137ull);
    vlSelf->__PVT__is_vc0_rx_SNPRESPDATA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17923289556923106918ull);
    vlSelf->__PVT__is_vc1_rx_SNPRESPDATA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4512610017535921201ull);
    vlSelf->__PVT__is_vc0_rx_SNPRESPDATAPTL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13263849614174173840ull);
    vlSelf->__PVT__is_vc1_rx_SNPRESPDATAPTL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17165085256421214027ull);
    vlSelf->__PVT__is_vc0_rx_SNPRESPDATAFWDED = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13079981569604019600ull);
    vlSelf->__PVT__is_vc1_rx_SNPRESPDATAFWDED = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3144222960189509734ull);
    vlSelf->__PVT__is_vc0_rx_ANYSNPRESPDATA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13057542496376686710ull);
    vlSelf->__PVT__is_vc1_rx_ANYSNPRESPDATA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10505228580851601806ull);
    vlSelf->__PVT__tx_actual_snp_txnid_to_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5105683812632433074ull);
    vlSelf->__Vconcswap_1_h7268aae5__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11995870765827601928ull);
    vlSelf->__Vconcswap_1_h720f3981__0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4444412792642101334ull);
    vlSelf->__PVT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11372531115521842849ull);
    vlSelf->__PVT__unused_signal_block__DOT__unused_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4460017475698396108ull);
    vlSelf->__PVT__unused_signal_block__DOT__unused_signal_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5946587349157120734ull);
    vlSelf->__Vfunc_clog2_index__0__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3025129249112608151ull);
    vlSelf->__Vfunc_clog2_index__0__set_bit_location = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16917771762519455598ull);
    vlSelf->__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_all_bits_sum_up__1__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6715268902427790690ull);
    vlSelf->__Vfunc_all_bits_sum_up__1__set_bit_location = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2702748521181226589ull);
    vlSelf->__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0;
    vlSelf->__Vfunc_all_bits_sum_up__1__tmp_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9026356511366490478ull);
    vlSelf->__Vdly__valid_buffer = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3460064984776503869ull);
    vlSelf->__Vdly__waiting_for_first_rsp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15498968238642814088ull);
    vlSelf->__Vdly__id_translator_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1505740637921644095ull);
    vlSelf->__Vdly__unused_signal_block__DOT__unused_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3030336470289689506ull);
    vlSelf->__VdlyVal__id_buffer__v0 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3728278862774573732ull);
    vlSelf->__VdlySet__id_buffer__v0 = 0;
    vlSelf->__VdlyVal__id_buffer__v1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4293921722015843686ull);
    vlSelf->__VdlyVal__id_buffer__v2 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5043827291259361261ull);
    vlSelf->__VdlyVal__id_buffer__v3 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10986309772645409934ull);
    vlSelf->__VdlySet__id_buffer__v4 = 0;
    vlSelf->__VdlySet__id_buffer__v5 = 0;
    vlSelf->__VdlySet__id_buffer__v6 = 0;
    vlSelf->__VdlySet__id_buffer__v7 = 0;
}
