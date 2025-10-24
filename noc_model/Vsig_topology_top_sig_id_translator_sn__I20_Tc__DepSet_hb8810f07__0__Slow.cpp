// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_id_translator_sn__I20_Tc.h"

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_sn__I20_Tc___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0__0(Vsig_topology_top_sig_id_translator_sn__I20_Tc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_sn__I20_Tc___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id_translator_hs_pending_txn = 
        VL_REDOR_I(vlSelfRef.__PVT__valid_buffer);
    vlSelfRef.__PVT__empty_valid_buffer = (~ vlSelfRef.__PVT__valid_buffer);
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_sn__I20_Tc___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0__1(Vsig_topology_top_sig_id_translator_sn__I20_Tc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_sn__I20_Tc___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_tx_CMO = ((IData)(vlSelfRef.__PVT__tx_req_v) 
                                  & (((8U == (IData)(vlSelfRef.__PVT__tx_req_opcode)) 
                                      | (9U == (IData)(vlSelfRef.__PVT__tx_req_opcode))) 
                                     | (0xaU == (IData)(vlSelfRef.__PVT__tx_req_opcode))));
    vlSelfRef.__PVT__is_tx_WRITENOSNPZERO = ((IData)(vlSelfRef.__PVT__tx_req_v) 
                                             & (0x44U 
                                                == (IData)(vlSelfRef.__PVT__tx_req_opcode)));
    vlSelfRef.__PVT__is_tx_READNOSNP = ((IData)(vlSelfRef.__PVT__tx_req_v) 
                                        & (4U == (IData)(vlSelfRef.__PVT__tx_req_opcode)));
    vlSelfRef.__PVT__is_tx_WRITENOSNP = ((IData)(vlSelfRef.__PVT__tx_req_v) 
                                         & (((0x1dU 
                                              == (IData)(vlSelfRef.__PVT__tx_req_opcode)) 
                                             | (0x1cU 
                                                == (IData)(vlSelfRef.__PVT__tx_req_opcode))) 
                                            | (0x44U 
                                               == (IData)(vlSelfRef.__PVT__tx_req_opcode))));
    vlSelfRef.__PVT__is_tx_WRITENOSP_CMO = ((IData)(vlSelfRef.__PVT__tx_req_v) 
                                            & ((((0x51U 
                                                  == (IData)(vlSelfRef.__PVT__tx_req_opcode)) 
                                                 | (0x50U 
                                                    == (IData)(vlSelfRef.__PVT__tx_req_opcode))) 
                                                | (0x61U 
                                                   == (IData)(vlSelfRef.__PVT__tx_req_opcode))) 
                                               | (0x60U 
                                                  == (IData)(vlSelfRef.__PVT__tx_req_opcode))));
    vlSelfRef.__PVT__assert_wren_req = ((IData)(vlSelfRef.__PVT__tx_req_v) 
                                        & (0x3aU != (IData)(vlSelfRef.__PVT__tx_req_opcode)));
    vlSelfRef.__PVT__vc0_rx_data_from_sn_has_dmt_enabled 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 
                               (0x1fU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_sn), 0U, 5))));
    vlSelfRef.__PVT__vc1_rx_data_from_sn_has_dmt_enabled 
        = (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 
                               (0x1fU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_sn), 0U, 5))));
    vlSelfRef.__PVT__allocate_rsp_cntr_num = 0U;
    if (vlSelfRef.__PVT__is_tx_WRITENOSP_CMO) {
        vlSelfRef.__PVT__allocate_rsp_cntr_num = 3U;
    } else if (((IData)(vlSelfRef.__PVT__is_tx_WRITENOSNP) 
                | ((1U == (IData)(vlSelfRef.__PVT__tx_req_order)) 
                   & (IData)(vlSelfRef.__PVT__is_tx_READNOSNP)))) {
        vlSelfRef.__PVT__allocate_rsp_cntr_num = 2U;
    } else if (vlSelfRef.__PVT__assert_wren_req) {
        vlSelfRef.__PVT__allocate_rsp_cntr_num = 1U;
    }
    vlSelfRef.__PVT__wren_id_buffer = ((((IData)(1U) 
                                         + (~ vlSelfRef.__PVT__empty_valid_buffer)) 
                                        & vlSelfRef.__PVT__empty_valid_buffer) 
                                       & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__assert_wren_req), 0x20U));
    vlSelfRef.__PVT__vc0_rx_dat_txnid_to_hn = ((IData)(vlSelfRef.__PVT__vc0_rx_data_from_sn_has_dmt_enabled)
                                                ? (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_sn)
                                                : vlSelfRef.__PVT__id_buffer
                                               [(0x1fU 
                                                 & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_sn), 0U, 5))]);
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = ((IData)(vlSelfRef.__PVT__vc0_rx_data_from_sn_has_dmt_enabled)
                                               ? vlSelfRef.__PVT__id_buffer
                                              [(0x1fU 
                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_sn), 0U, 5))]
                                               : (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_sn));
    vlSelfRef.__PVT__vc1_rx_dat_txnid_to_hn = ((IData)(vlSelfRef.__PVT__vc1_rx_data_from_sn_has_dmt_enabled)
                                                ? (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_sn)
                                                : vlSelfRef.__PVT__id_buffer
                                               [(0x1fU 
                                                 & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_sn), 0U, 5))]);
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = ((IData)(vlSelfRef.__PVT__vc1_rx_data_from_sn_has_dmt_enabled)
                                               ? vlSelfRef.__PVT__id_buffer
                                              [(0x1fU 
                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_sn), 0U, 5))]
                                               : (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_sn));
    vlSelfRef.__PVT__id_buffer_nxt[0U] = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0U))
                                           ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                           : vlSelfRef.__PVT__id_buffer
                                          [0U]);
    vlSelfRef.__PVT__id_buffer_nxt[1U] = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 1U))
                                           ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                           : vlSelfRef.__PVT__id_buffer
                                          [1U]);
    vlSelfRef.__PVT__id_buffer_nxt[2U] = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 2U))
                                           ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                           : vlSelfRef.__PVT__id_buffer
                                          [2U]);
    vlSelfRef.__PVT__id_buffer_nxt[3U] = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 3U))
                                           ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                           : vlSelfRef.__PVT__id_buffer
                                          [3U]);
    vlSelfRef.__PVT__id_buffer_nxt[4U] = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 4U))
                                           ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                           : vlSelfRef.__PVT__id_buffer
                                          [4U]);
    vlSelfRef.__PVT__id_buffer_nxt[5U] = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 5U))
                                           ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                           : vlSelfRef.__PVT__id_buffer
                                          [5U]);
    vlSelfRef.__PVT__id_buffer_nxt[6U] = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 6U))
                                           ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                           : vlSelfRef.__PVT__id_buffer
                                          [6U]);
    vlSelfRef.__PVT__id_buffer_nxt[7U] = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 7U))
                                           ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                           : vlSelfRef.__PVT__id_buffer
                                          [7U]);
    vlSelfRef.__PVT__id_buffer_nxt[8U] = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 8U))
                                           ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                           : vlSelfRef.__PVT__id_buffer
                                          [8U]);
    vlSelfRef.__PVT__id_buffer_nxt[9U] = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 9U))
                                           ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                           : vlSelfRef.__PVT__id_buffer
                                          [9U]);
    vlSelfRef.__PVT__id_buffer_nxt[0xaU] = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xaU))
                                             ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                             : vlSelfRef.__PVT__id_buffer
                                            [0xaU]);
    vlSelfRef.__PVT__id_buffer_nxt[0xbU] = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xbU))
                                             ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                             : vlSelfRef.__PVT__id_buffer
                                            [0xbU]);
    vlSelfRef.__PVT__id_buffer_nxt[0xcU] = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xcU))
                                             ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                             : vlSelfRef.__PVT__id_buffer
                                            [0xcU]);
    vlSelfRef.__PVT__id_buffer_nxt[0xdU] = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xdU))
                                             ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                             : vlSelfRef.__PVT__id_buffer
                                            [0xdU]);
    vlSelfRef.__PVT__id_buffer_nxt[0xeU] = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xeU))
                                             ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                             : vlSelfRef.__PVT__id_buffer
                                            [0xeU]);
    vlSelfRef.__PVT__id_buffer_nxt[0xfU] = ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xfU))
                                             ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                             : vlSelfRef.__PVT__id_buffer
                                            [0xfU]);
    vlSelfRef.__PVT__id_buffer_nxt[0x10U] = ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x10U))
                                              ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                              : vlSelfRef.__PVT__id_buffer
                                             [0x10U]);
    vlSelfRef.__PVT__id_buffer_nxt[0x11U] = ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x11U))
                                              ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                              : vlSelfRef.__PVT__id_buffer
                                             [0x11U]);
    vlSelfRef.__PVT__id_buffer_nxt[0x12U] = ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x12U))
                                              ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                              : vlSelfRef.__PVT__id_buffer
                                             [0x12U]);
    vlSelfRef.__PVT__id_buffer_nxt[0x13U] = ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x13U))
                                              ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                              : vlSelfRef.__PVT__id_buffer
                                             [0x13U]);
    vlSelfRef.__PVT__id_buffer_nxt[0x14U] = ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x14U))
                                              ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                              : vlSelfRef.__PVT__id_buffer
                                             [0x14U]);
    vlSelfRef.__PVT__id_buffer_nxt[0x15U] = ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x15U))
                                              ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                              : vlSelfRef.__PVT__id_buffer
                                             [0x15U]);
    vlSelfRef.__PVT__id_buffer_nxt[0x16U] = ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x16U))
                                              ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                              : vlSelfRef.__PVT__id_buffer
                                             [0x16U]);
    vlSelfRef.__PVT__id_buffer_nxt[0x17U] = ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x17U))
                                              ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                              : vlSelfRef.__PVT__id_buffer
                                             [0x17U]);
    vlSelfRef.__PVT__id_buffer_nxt[0x18U] = ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x18U))
                                              ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                              : vlSelfRef.__PVT__id_buffer
                                             [0x18U]);
    vlSelfRef.__PVT__id_buffer_nxt[0x19U] = ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x19U))
                                              ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                              : vlSelfRef.__PVT__id_buffer
                                             [0x19U]);
    vlSelfRef.__PVT__id_buffer_nxt[0x1aU] = ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1aU))
                                              ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                              : vlSelfRef.__PVT__id_buffer
                                             [0x1aU]);
    vlSelfRef.__PVT__id_buffer_nxt[0x1bU] = ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1bU))
                                              ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                              : vlSelfRef.__PVT__id_buffer
                                             [0x1bU]);
    vlSelfRef.__PVT__id_buffer_nxt[0x1cU] = ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1cU))
                                              ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                              : vlSelfRef.__PVT__id_buffer
                                             [0x1cU]);
    vlSelfRef.__PVT__id_buffer_nxt[0x1dU] = ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1dU))
                                              ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                              : vlSelfRef.__PVT__id_buffer
                                             [0x1dU]);
    vlSelfRef.__PVT__id_buffer_nxt[0x1eU] = ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1eU))
                                              ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                              : vlSelfRef.__PVT__id_buffer
                                             [0x1eU]);
    vlSelfRef.__PVT__id_buffer_nxt[0x1fU] = ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1fU))
                                              ? (IData)(vlSelfRef.__PVT__tx_req_txnid_from_hn)
                                              : vlSelfRef.__PVT__id_buffer
                                             [0x1fU]);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0U))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0U))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 1U))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [1U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 1U))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 2U))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [2U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 2U))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 3U))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [3U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 3U))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 4U))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [4U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 4U))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 5U))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [5U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 5U))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 6U))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [6U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 6U))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 7U))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [7U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 7U))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 8U))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [8U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 8U))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 9U))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [9U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 9U))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xaU))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0xaU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0xaU))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xbU))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0xbU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0xbU))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xcU))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0xcU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0xcU))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xdU))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0xdU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0xdU))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xeU))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0xeU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0xeU))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xfU))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0xfU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0xfU))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x10U))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0x10U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0x10U))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x11U))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0x11U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0x11U))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x12U))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0x12U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0x12U))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x13U))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0x13U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0x13U))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x14U))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0x14U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0x14U))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x15U))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0x15U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0x15U))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x16U))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0x16U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0x16U))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x17U))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0x17U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0x17U))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x18U))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0x18U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0x18U))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x19U))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0x19U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0x19U))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1aU))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0x1aU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0x1aU))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1bU))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0x1bU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0x1bU))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1cU))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0x1cU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0x1cU))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1dU))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0x1dU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0x1dU))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1eU))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0x1eU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0x1eU))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__readnosnp_with_dmt_vec_nxt, 
                    ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1fU))
                      ? (IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                      : ((0U != vlSelfRef.__PVT__rsp_cntr
                          [0x1fU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__readnosnp_with_dmt_vec, 0x1fU))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0U) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 1U) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [1U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 2U) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [2U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 3U) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [3U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 4U) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [4U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 5U) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [5U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 6U) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [6U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 7U) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [7U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 8U) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [8U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 9U) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [9U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xaU) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0xaU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xbU) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0xbU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xcU) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0xcU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xdU) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0xdU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xeU) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0xeU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xfU) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0xfU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0xfU)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x10U) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0x10U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0x10U)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x11U) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0x11U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0x11U)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x12U) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0x12U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0x12U)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x13U) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0x13U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0x13U)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x14U) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0x14U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0x14U)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x15U) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0x15U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0x15U)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x16U) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0x16U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0x16U)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x17U) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0x17U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0x17U)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x18U) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0x18U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0x18U)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x19U) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0x19U]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0x19U)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1aU) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0x1aU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0x1aU)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1bU) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0x1bU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0x1bU)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1cU) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0x1cU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0x1cU)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1dU) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0x1dU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0x1dU)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1eU) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0x1eU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0x1eU)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__valid_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1fU) 
                           | ((0U != vlSelfRef.__PVT__rsp_cntr
                               [0x1fU]) & VL_BITSEL_IIII(32, vlSelfRef.__PVT__valid_buffer, 0x1fU)))));
    vlSelfRef.__PVT__tx_req_txnid_to_sn = VL_EXTEND_II(12,5, 
                                                       ([&]() {
                vlSelfRef.__Vfunc_clog2_index__0__set_bit_location 
                    = vlSelfRef.__PVT__wren_id_buffer;
                vlSelf->__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0;
                vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0U;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 1U;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 1U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 1U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 2U;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 2U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 2U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 3U;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 3U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 3U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 4U;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 4U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 4U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 5U;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 5U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 5U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 6U;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 6U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 6U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 7U;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 7U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 7U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 8U;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 8U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 8U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 9U;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 9U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 9U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0xaU;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0xaU))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0xaU;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0xbU;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0xbU))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0xbU;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0xcU;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0xcU))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0xcU;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0xdU;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0xdU))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0xdU;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0xeU;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0xeU))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0xeU;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0xfU;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0xfU))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0xfU;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0x10U;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0x10U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0x10U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0x11U;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0x11U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0x11U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0x12U;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0x12U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0x12U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0x13U;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0x13U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0x13U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0x14U;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0x14U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0x14U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0x15U;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0x15U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0x15U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0x16U;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0x16U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0x16U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0x17U;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0x17U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0x17U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0x18U;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0x18U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0x18U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0x19U;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0x19U))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0x19U;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0x1aU;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0x1aU))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0x1aU;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0x1bU;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0x1bU))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0x1bU;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0x1cU;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0x1cU))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0x1cU;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0x1dU;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0x1dU))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0x1dU;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0x1eU;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0x1eU))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0x1eU;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0x1fU;
                if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_clog2_index__0__set_bit_location, 0x1fU))) {
                    vlSelfRef.__Vfunc_clog2_index__0__Vfuncout = 0x1fU;
                }
                vlSelfRef.__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0x20U;
            }(), (IData)(vlSelfRef.__Vfunc_clog2_index__0__Vfuncout)));
    vlSelfRef.__PVT__id_translator_full_nxt = (2U > 
                                               ([&]() {
                vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location 
                    = (~ vlSelfRef.__PVT__valid_buffer_nxt);
                vlSelf->__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0;
                const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                vlSelf->__Vfunc_all_bits_sum_up__1__tmp_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9026356511366490478ull);
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout = 0U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 1U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 1U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 1U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 2U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 2U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 2U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 3U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 3U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 3U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 4U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 4U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 4U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 5U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 5U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 5U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 6U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 6U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 6U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 7U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 7U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 7U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 8U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 8U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 8U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 9U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 9U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 9U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0xaU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0xaU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0xaU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0xbU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0xbU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0xbU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0xcU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0xcU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0xcU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0xdU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0xdU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0xdU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0xeU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0xeU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0xeU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0xfU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0xfU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0xfU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0x10U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x10U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x10U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0x11U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x11U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x11U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0x12U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x12U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x12U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0x13U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x13U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x13U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0x14U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x14U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x14U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0x15U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x15U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x15U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0x16U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x16U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x16U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0x17U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x17U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x17U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0x18U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x18U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x18U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0x19U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x19U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x19U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0x1aU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x1aU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x1aU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0x1bU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x1bU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x1bU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0x1cU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x1cU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x1cU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0x1dU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x1dU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x1dU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0x1eU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x1eU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x1eU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0x1fU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x1fU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__1__set_bit_location, 0x1fU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__1__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0x20U;
            }(), (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__1__Vfuncout)));
    vlSelfRef.__PVT__tx_req_returntxnid_to_sn = (((IData)(vlSelfRef.__PVT__is_tx_WRITENOSNPZERO) 
                                                  | (IData)(vlSelfRef.__PVT__is_tx_CMO))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__tx_req_apply_dmt_from_hn)
                                                   ? (IData)(vlSelfRef.__PVT__tx_req_returntxnid_from_hn)
                                                   : (IData)(vlSelfRef.__PVT__tx_req_txnid_to_sn)));
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_sn__I20_Tc___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0__0(Vsig_topology_top_sig_id_translator_sn__I20_Tc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_sn__I20_Tc___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc0_rx_RETRYACK = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                           & (3U == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_COMPDBIDRESP = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                               & (5U 
                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_READRECEIPT = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                              & (8U 
                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)));
    vlSelfRef.__PVT__is_vc0_rx_Comp_or_DBIDRESP = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                                   & ((4U 
                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)) 
                                                      | (6U 
                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode))));
    vlSelfRef.__PVT__is_vc0_rx_CompCMO = ((IData)(vlSelfRef.__PVT__vc0_rx_rsp_v) 
                                          & (0x14U 
                                             == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_opcode)));
    vlSelfRef.__PVT__vc0_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__id_buffer
        [(0x1fU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn), 0U, 5))];
    vlSelfRef.__PVT__is_vc1_rx_RETRYACK = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                           & (3U == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_COMPDBIDRESP = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                               & (5U 
                                                  == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_READRECEIPT = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                              & (8U 
                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_Comp_or_DBIDRESP = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                                   & ((4U 
                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)) 
                                                      | (6U 
                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode))));
    vlSelfRef.__PVT__is_vc1_rx_CompCMO = ((IData)(vlSelfRef.__PVT__vc1_rx_rsp_v) 
                                          & (0x14U 
                                             == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_opcode)));
    vlSelfRef.__PVT__vc1_rx_rsp_txnid_to_hn = vlSelfRef.__PVT__id_buffer
        [(0x1fU & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn), 0U, 5))];
    vlSelfRef.__PVT__down_2_vc0_rsp_cntr = vlSelfRef.__PVT__is_vc0_rx_COMPDBIDRESP;
    vlSelfRef.__PVT__down_1_vc0_rsp_cntr = (((IData)(vlSelfRef.__PVT__is_vc0_rx_Comp_or_DBIDRESP) 
                                             | (IData)(vlSelfRef.__PVT__is_vc0_rx_CompCMO)) 
                                            | (IData)(vlSelfRef.__PVT__is_vc0_rx_READRECEIPT));
    vlSelfRef.__PVT__down_2_vc1_rsp_cntr = vlSelfRef.__PVT__is_vc1_rx_COMPDBIDRESP;
    vlSelfRef.__PVT__down_1_vc1_rsp_cntr = (((IData)(vlSelfRef.__PVT__is_vc1_rx_Comp_or_DBIDRESP) 
                                             | (IData)(vlSelfRef.__PVT__is_vc1_rx_CompCMO)) 
                                            | (IData)(vlSelfRef.__PVT__is_vc1_rx_READRECEIPT));
    vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr = (((IData)(vlSelfRef.__PVT__is_vc0_rx_Comp_or_DBIDRESP) 
                                                 | (IData)(vlSelfRef.__PVT__is_vc0_rx_CompCMO)) 
                                                & ((IData)(vlSelfRef.__PVT__is_vc1_rx_Comp_or_DBIDRESP) 
                                                   | (IData)(vlSelfRef.__PVT__is_vc1_rx_CompCMO)));
    vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr = (((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDBIDRESP) 
                                                 & (IData)(vlSelfRef.__PVT__is_vc1_rx_CompCMO)) 
                                                | ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDBIDRESP) 
                                                   & (IData)(vlSelfRef.__PVT__is_vc0_rx_CompCMO)));
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_sn__I20_Tc___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0__1(Vsig_topology_top_sig_id_translator_sn__I20_Tc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_sn__I20_Tc___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_vc0_rx_COMPDATA = ((IData)(vlSelfRef.__PVT__vc0_rx_dat_v) 
                                           & (4U == (IData)(vlSelfRef.__PVT__vc0_rx_dat_opcode)));
    vlSelfRef.__PVT__is_vc1_rx_COMPDATA = ((IData)(vlSelfRef.__PVT__vc1_rx_dat_v) 
                                           & (4U == (IData)(vlSelfRef.__PVT__vc1_rx_dat_opcode)));
    vlSelfRef.__PVT__down_1_vc0_dat_cntr = vlSelfRef.__PVT__is_vc0_rx_COMPDATA;
    vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr = (((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA) 
                                               & (IData)(vlSelfRef.__PVT__vc0_rx_data_from_sn_has_dmt_enabled))
                                               ? (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_sn)
                                               : (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_sn));
    vlSelfRef.__PVT__down_1_vc1_dat_cntr = vlSelfRef.__PVT__is_vc1_rx_COMPDATA;
    vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr = (((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA) 
                                               & (IData)(vlSelfRef.__PVT__vc1_rx_data_from_sn_has_dmt_enabled))
                                               ? (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_sn)
                                               : (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_sn));
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_sn__I20_Tc___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0__2(Vsig_topology_top_sig_id_translator_sn__I20_Tc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_sn__I20_Tc___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_id_translator_sn_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr = ((IData)(vlSelfRef.__PVT__is_vc0_rx_READRECEIPT) 
                                                & (IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA));
    vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr = ((IData)(vlSelfRef.__PVT__is_vc1_rx_READRECEIPT) 
                                                & (IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA));
    vlSelfRef.__PVT__rsp_cntr_nxt[0U] = (3U & VL_SEL_IIII(32, 
                                                          ((1U 
                                                            & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0U))
                                                            ? 
                                                           VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                            : 
                                                           ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                              & (0U 
                                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                             & (0U 
                                                                == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                             ? 
                                                            (VL_EXTEND_II(32,2, 
                                                                          vlSelfRef.__PVT__rsp_cntr
                                                                          [0U]) 
                                                             - (IData)(3U))
                                                             : 
                                                            ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                               & (0U 
                                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                              & (0U 
                                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                              ? 
                                                             (VL_EXTEND_II(32,2, 
                                                                           vlSelfRef.__PVT__rsp_cntr
                                                                           [0U]) 
                                                              - (IData)(2U))
                                                              : 
                                                             ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                & (0U 
                                                                   == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                               | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                  & (0U 
                                                                     == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                               ? 
                                                              (VL_EXTEND_II(32,2, 
                                                                            vlSelfRef.__PVT__rsp_cntr
                                                                            [0U]) 
                                                               - (IData)(2U))
                                                               : 
                                                              (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                  & (0U 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (0U 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                    & (0U 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                   & (0U 
                                                                      == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0U]) 
                                                                - (IData)(2U))
                                                                : 
                                                               ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                    & (0U 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                   | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                      & (0U 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                     & (0U 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                 | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                    & (0U 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0U]) 
                                                                 - (IData)(1U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                   & (0U 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                     & (0U 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0U])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[1U] = (3U & VL_SEL_IIII(32, 
                                                          ((1U 
                                                            & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 1U))
                                                            ? 
                                                           VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                            : 
                                                           ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                              & (1U 
                                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                             & (1U 
                                                                == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                             ? 
                                                            (VL_EXTEND_II(32,2, 
                                                                          vlSelfRef.__PVT__rsp_cntr
                                                                          [1U]) 
                                                             - (IData)(3U))
                                                             : 
                                                            ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                               & (1U 
                                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                              & (1U 
                                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                              ? 
                                                             (VL_EXTEND_II(32,2, 
                                                                           vlSelfRef.__PVT__rsp_cntr
                                                                           [1U]) 
                                                              - (IData)(2U))
                                                              : 
                                                             ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                & (1U 
                                                                   == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                               | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                  & (1U 
                                                                     == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                               ? 
                                                              (VL_EXTEND_II(32,2, 
                                                                            vlSelfRef.__PVT__rsp_cntr
                                                                            [1U]) 
                                                               - (IData)(2U))
                                                               : 
                                                              (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                  & (1U 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (1U 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                    & (1U 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                   & (1U 
                                                                      == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [1U]) 
                                                                - (IData)(2U))
                                                                : 
                                                               ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                    & (1U 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                   | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                      & (1U 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                     & (1U 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                 | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                    & (1U 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [1U]) 
                                                                 - (IData)(1U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                   & (1U 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                     & (1U 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [1U])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[2U] = (3U & VL_SEL_IIII(32, 
                                                          ((1U 
                                                            & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 2U))
                                                            ? 
                                                           VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                            : 
                                                           ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                              & (2U 
                                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                             & (2U 
                                                                == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                             ? 
                                                            (VL_EXTEND_II(32,2, 
                                                                          vlSelfRef.__PVT__rsp_cntr
                                                                          [2U]) 
                                                             - (IData)(3U))
                                                             : 
                                                            ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                               & (2U 
                                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                              & (2U 
                                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                              ? 
                                                             (VL_EXTEND_II(32,2, 
                                                                           vlSelfRef.__PVT__rsp_cntr
                                                                           [2U]) 
                                                              - (IData)(2U))
                                                              : 
                                                             ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                & (2U 
                                                                   == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                               | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                  & (2U 
                                                                     == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                               ? 
                                                              (VL_EXTEND_II(32,2, 
                                                                            vlSelfRef.__PVT__rsp_cntr
                                                                            [2U]) 
                                                               - (IData)(2U))
                                                               : 
                                                              (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                  & (2U 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (2U 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                    & (2U 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                   & (2U 
                                                                      == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [2U]) 
                                                                - (IData)(2U))
                                                                : 
                                                               ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                    & (2U 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                   | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                      & (2U 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                     & (2U 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                 | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                    & (2U 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [2U]) 
                                                                 - (IData)(1U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                   & (2U 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                     & (2U 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [2U])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[3U] = (3U & VL_SEL_IIII(32, 
                                                          ((1U 
                                                            & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 3U))
                                                            ? 
                                                           VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                            : 
                                                           ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                              & (3U 
                                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                             & (3U 
                                                                == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                             ? 
                                                            (VL_EXTEND_II(32,2, 
                                                                          vlSelfRef.__PVT__rsp_cntr
                                                                          [3U]) 
                                                             - (IData)(3U))
                                                             : 
                                                            ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                               & (3U 
                                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                              & (3U 
                                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                              ? 
                                                             (VL_EXTEND_II(32,2, 
                                                                           vlSelfRef.__PVT__rsp_cntr
                                                                           [3U]) 
                                                              - (IData)(2U))
                                                              : 
                                                             ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                & (3U 
                                                                   == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                               | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                  & (3U 
                                                                     == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                               ? 
                                                              (VL_EXTEND_II(32,2, 
                                                                            vlSelfRef.__PVT__rsp_cntr
                                                                            [3U]) 
                                                               - (IData)(2U))
                                                               : 
                                                              (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                  & (3U 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (3U 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                    & (3U 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                   & (3U 
                                                                      == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [3U]) 
                                                                - (IData)(2U))
                                                                : 
                                                               ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                    & (3U 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                   | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                      & (3U 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                     & (3U 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                 | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                    & (3U 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [3U]) 
                                                                 - (IData)(1U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                   & (3U 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                     & (3U 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [3U])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[4U] = (3U & VL_SEL_IIII(32, 
                                                          ((1U 
                                                            & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 4U))
                                                            ? 
                                                           VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                            : 
                                                           ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                              & (4U 
                                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                             & (4U 
                                                                == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                             ? 
                                                            (VL_EXTEND_II(32,2, 
                                                                          vlSelfRef.__PVT__rsp_cntr
                                                                          [4U]) 
                                                             - (IData)(3U))
                                                             : 
                                                            ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                               & (4U 
                                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                              & (4U 
                                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                              ? 
                                                             (VL_EXTEND_II(32,2, 
                                                                           vlSelfRef.__PVT__rsp_cntr
                                                                           [4U]) 
                                                              - (IData)(2U))
                                                              : 
                                                             ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                & (4U 
                                                                   == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                               | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                  & (4U 
                                                                     == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                               ? 
                                                              (VL_EXTEND_II(32,2, 
                                                                            vlSelfRef.__PVT__rsp_cntr
                                                                            [4U]) 
                                                               - (IData)(2U))
                                                               : 
                                                              (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                  & (4U 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (4U 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                    & (4U 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                   & (4U 
                                                                      == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [4U]) 
                                                                - (IData)(2U))
                                                                : 
                                                               ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                    & (4U 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                   | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                      & (4U 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                     & (4U 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                 | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                    & (4U 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [4U]) 
                                                                 - (IData)(1U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                   & (4U 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                     & (4U 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [4U])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[5U] = (3U & VL_SEL_IIII(32, 
                                                          ((1U 
                                                            & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 5U))
                                                            ? 
                                                           VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                            : 
                                                           ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                              & (5U 
                                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                             & (5U 
                                                                == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                             ? 
                                                            (VL_EXTEND_II(32,2, 
                                                                          vlSelfRef.__PVT__rsp_cntr
                                                                          [5U]) 
                                                             - (IData)(3U))
                                                             : 
                                                            ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                               & (5U 
                                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                              & (5U 
                                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                              ? 
                                                             (VL_EXTEND_II(32,2, 
                                                                           vlSelfRef.__PVT__rsp_cntr
                                                                           [5U]) 
                                                              - (IData)(2U))
                                                              : 
                                                             ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                & (5U 
                                                                   == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                               | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                  & (5U 
                                                                     == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                               ? 
                                                              (VL_EXTEND_II(32,2, 
                                                                            vlSelfRef.__PVT__rsp_cntr
                                                                            [5U]) 
                                                               - (IData)(2U))
                                                               : 
                                                              (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                  & (5U 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (5U 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                    & (5U 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                   & (5U 
                                                                      == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [5U]) 
                                                                - (IData)(2U))
                                                                : 
                                                               ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                    & (5U 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                   | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                      & (5U 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                     & (5U 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                 | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                    & (5U 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [5U]) 
                                                                 - (IData)(1U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                   & (5U 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                     & (5U 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [5U])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[6U] = (3U & VL_SEL_IIII(32, 
                                                          ((1U 
                                                            & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 6U))
                                                            ? 
                                                           VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                            : 
                                                           ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                              & (6U 
                                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                             & (6U 
                                                                == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                             ? 
                                                            (VL_EXTEND_II(32,2, 
                                                                          vlSelfRef.__PVT__rsp_cntr
                                                                          [6U]) 
                                                             - (IData)(3U))
                                                             : 
                                                            ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                               & (6U 
                                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                              & (6U 
                                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                              ? 
                                                             (VL_EXTEND_II(32,2, 
                                                                           vlSelfRef.__PVT__rsp_cntr
                                                                           [6U]) 
                                                              - (IData)(2U))
                                                              : 
                                                             ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                & (6U 
                                                                   == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                               | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                  & (6U 
                                                                     == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                               ? 
                                                              (VL_EXTEND_II(32,2, 
                                                                            vlSelfRef.__PVT__rsp_cntr
                                                                            [6U]) 
                                                               - (IData)(2U))
                                                               : 
                                                              (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                  & (6U 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (6U 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                    & (6U 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                   & (6U 
                                                                      == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [6U]) 
                                                                - (IData)(2U))
                                                                : 
                                                               ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                    & (6U 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                   | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                      & (6U 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                     & (6U 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                 | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                    & (6U 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [6U]) 
                                                                 - (IData)(1U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                   & (6U 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                     & (6U 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [6U])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[7U] = (3U & VL_SEL_IIII(32, 
                                                          ((1U 
                                                            & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 7U))
                                                            ? 
                                                           VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                            : 
                                                           ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                              & (7U 
                                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                             & (7U 
                                                                == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                             ? 
                                                            (VL_EXTEND_II(32,2, 
                                                                          vlSelfRef.__PVT__rsp_cntr
                                                                          [7U]) 
                                                             - (IData)(3U))
                                                             : 
                                                            ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                               & (7U 
                                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                              & (7U 
                                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                              ? 
                                                             (VL_EXTEND_II(32,2, 
                                                                           vlSelfRef.__PVT__rsp_cntr
                                                                           [7U]) 
                                                              - (IData)(2U))
                                                              : 
                                                             ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                & (7U 
                                                                   == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                               | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                  & (7U 
                                                                     == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                               ? 
                                                              (VL_EXTEND_II(32,2, 
                                                                            vlSelfRef.__PVT__rsp_cntr
                                                                            [7U]) 
                                                               - (IData)(2U))
                                                               : 
                                                              (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                  & (7U 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (7U 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                    & (7U 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                   & (7U 
                                                                      == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [7U]) 
                                                                - (IData)(2U))
                                                                : 
                                                               ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                    & (7U 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                   | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                      & (7U 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                     & (7U 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                 | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                    & (7U 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [7U]) 
                                                                 - (IData)(1U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                   & (7U 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                     & (7U 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [7U])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[8U] = (3U & VL_SEL_IIII(32, 
                                                          ((1U 
                                                            & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 8U))
                                                            ? 
                                                           VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                            : 
                                                           ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                              & (8U 
                                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                             & (8U 
                                                                == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                             ? 
                                                            (VL_EXTEND_II(32,2, 
                                                                          vlSelfRef.__PVT__rsp_cntr
                                                                          [8U]) 
                                                             - (IData)(3U))
                                                             : 
                                                            ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                               & (8U 
                                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                              & (8U 
                                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                              ? 
                                                             (VL_EXTEND_II(32,2, 
                                                                           vlSelfRef.__PVT__rsp_cntr
                                                                           [8U]) 
                                                              - (IData)(2U))
                                                              : 
                                                             ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                & (8U 
                                                                   == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                               | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                  & (8U 
                                                                     == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                               ? 
                                                              (VL_EXTEND_II(32,2, 
                                                                            vlSelfRef.__PVT__rsp_cntr
                                                                            [8U]) 
                                                               - (IData)(2U))
                                                               : 
                                                              (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                  & (8U 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (8U 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                    & (8U 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                   & (8U 
                                                                      == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [8U]) 
                                                                - (IData)(2U))
                                                                : 
                                                               ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                    & (8U 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                   | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                      & (8U 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                     & (8U 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                 | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                    & (8U 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [8U]) 
                                                                 - (IData)(1U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                   & (8U 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                     & (8U 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [8U])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[9U] = (3U & VL_SEL_IIII(32, 
                                                          ((1U 
                                                            & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 9U))
                                                            ? 
                                                           VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                            : 
                                                           ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                              & (9U 
                                                                 == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                             & (9U 
                                                                == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                             ? 
                                                            (VL_EXTEND_II(32,2, 
                                                                          vlSelfRef.__PVT__rsp_cntr
                                                                          [9U]) 
                                                             - (IData)(3U))
                                                             : 
                                                            ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                               & (9U 
                                                                  == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                              & (9U 
                                                                 == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                              ? 
                                                             (VL_EXTEND_II(32,2, 
                                                                           vlSelfRef.__PVT__rsp_cntr
                                                                           [9U]) 
                                                              - (IData)(2U))
                                                              : 
                                                             ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                & (9U 
                                                                   == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                               | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                  & (9U 
                                                                     == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                               ? 
                                                              (VL_EXTEND_II(32,2, 
                                                                            vlSelfRef.__PVT__rsp_cntr
                                                                            [9U]) 
                                                               - (IData)(2U))
                                                               : 
                                                              (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                  & (9U 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (9U 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                    & (9U 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                   & (9U 
                                                                      == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [9U]) 
                                                                - (IData)(2U))
                                                                : 
                                                               ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                    & (9U 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                   | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                      & (9U 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                     & (9U 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                 | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                    & (9U 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [9U]) 
                                                                 - (IData)(1U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                   & (9U 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                     & (9U 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 0U
                                                                  : 
                                                                 VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [9U])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0xaU] = (3U & VL_SEL_IIII(32, 
                                                            ((1U 
                                                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xaU))
                                                              ? 
                                                             VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                              : 
                                                             ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                & (0xaU 
                                                                   == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                               & (0xaU 
                                                                  == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                               ? 
                                                              (VL_EXTEND_II(32,2, 
                                                                            vlSelfRef.__PVT__rsp_cntr
                                                                            [0xaU]) 
                                                               - (IData)(3U))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                 & (0xaU 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0xaU 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0xaU]) 
                                                                - (IData)(2U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                  & (0xaU 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                    & (0xaU 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0xaU]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                    & (0xaU 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                   & (0xaU 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                  | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                      & (0xaU 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                     & (0xaU 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0xaU]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                      & (0xaU 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                        & (0xaU 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                       & (0xaU 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                   | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                      & (0xaU 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0xaU]) 
                                                                   - (IData)(1U))
                                                                   : 
                                                                  ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                     & (0xaU 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                       & (0xaU 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                    ? 0U
                                                                    : 
                                                                   VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0xaU])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0xbU] = (3U & VL_SEL_IIII(32, 
                                                            ((1U 
                                                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xbU))
                                                              ? 
                                                             VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                              : 
                                                             ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                & (0xbU 
                                                                   == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                               & (0xbU 
                                                                  == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                               ? 
                                                              (VL_EXTEND_II(32,2, 
                                                                            vlSelfRef.__PVT__rsp_cntr
                                                                            [0xbU]) 
                                                               - (IData)(3U))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                 & (0xbU 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0xbU 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0xbU]) 
                                                                - (IData)(2U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                  & (0xbU 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                    & (0xbU 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0xbU]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                    & (0xbU 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                   & (0xbU 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                  | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                      & (0xbU 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                     & (0xbU 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0xbU]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                      & (0xbU 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                        & (0xbU 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                       & (0xbU 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                   | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                      & (0xbU 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0xbU]) 
                                                                   - (IData)(1U))
                                                                   : 
                                                                  ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                     & (0xbU 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                       & (0xbU 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                    ? 0U
                                                                    : 
                                                                   VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0xbU])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0xcU] = (3U & VL_SEL_IIII(32, 
                                                            ((1U 
                                                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xcU))
                                                              ? 
                                                             VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                              : 
                                                             ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                & (0xcU 
                                                                   == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                               & (0xcU 
                                                                  == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                               ? 
                                                              (VL_EXTEND_II(32,2, 
                                                                            vlSelfRef.__PVT__rsp_cntr
                                                                            [0xcU]) 
                                                               - (IData)(3U))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                 & (0xcU 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0xcU 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0xcU]) 
                                                                - (IData)(2U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                  & (0xcU 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                    & (0xcU 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0xcU]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                    & (0xcU 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                   & (0xcU 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                  | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                      & (0xcU 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                     & (0xcU 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0xcU]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                      & (0xcU 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                        & (0xcU 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                       & (0xcU 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                   | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                      & (0xcU 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0xcU]) 
                                                                   - (IData)(1U))
                                                                   : 
                                                                  ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                     & (0xcU 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                       & (0xcU 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                    ? 0U
                                                                    : 
                                                                   VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0xcU])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0xdU] = (3U & VL_SEL_IIII(32, 
                                                            ((1U 
                                                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xdU))
                                                              ? 
                                                             VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                              : 
                                                             ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                & (0xdU 
                                                                   == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                               & (0xdU 
                                                                  == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                               ? 
                                                              (VL_EXTEND_II(32,2, 
                                                                            vlSelfRef.__PVT__rsp_cntr
                                                                            [0xdU]) 
                                                               - (IData)(3U))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                 & (0xdU 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0xdU 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0xdU]) 
                                                                - (IData)(2U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                  & (0xdU 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                    & (0xdU 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0xdU]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                    & (0xdU 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                   & (0xdU 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                  | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                      & (0xdU 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                     & (0xdU 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0xdU]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                      & (0xdU 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                        & (0xdU 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                       & (0xdU 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                   | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                      & (0xdU 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0xdU]) 
                                                                   - (IData)(1U))
                                                                   : 
                                                                  ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                     & (0xdU 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                       & (0xdU 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                    ? 0U
                                                                    : 
                                                                   VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0xdU])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0xeU] = (3U & VL_SEL_IIII(32, 
                                                            ((1U 
                                                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xeU))
                                                              ? 
                                                             VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                              : 
                                                             ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                & (0xeU 
                                                                   == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                               & (0xeU 
                                                                  == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                               ? 
                                                              (VL_EXTEND_II(32,2, 
                                                                            vlSelfRef.__PVT__rsp_cntr
                                                                            [0xeU]) 
                                                               - (IData)(3U))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                 & (0xeU 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0xeU 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0xeU]) 
                                                                - (IData)(2U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                  & (0xeU 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                    & (0xeU 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0xeU]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                    & (0xeU 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                   & (0xeU 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                  | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                      & (0xeU 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                     & (0xeU 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0xeU]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                      & (0xeU 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                        & (0xeU 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                       & (0xeU 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                   | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                      & (0xeU 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0xeU]) 
                                                                   - (IData)(1U))
                                                                   : 
                                                                  ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                     & (0xeU 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                       & (0xeU 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                    ? 0U
                                                                    : 
                                                                   VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0xeU])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0xfU] = (3U & VL_SEL_IIII(32, 
                                                            ((1U 
                                                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xfU))
                                                              ? 
                                                             VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                              : 
                                                             ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                & (0xfU 
                                                                   == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                               & (0xfU 
                                                                  == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                               ? 
                                                              (VL_EXTEND_II(32,2, 
                                                                            vlSelfRef.__PVT__rsp_cntr
                                                                            [0xfU]) 
                                                               - (IData)(3U))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                 & (0xfU 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0xfU 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0xfU]) 
                                                                - (IData)(2U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                  & (0xfU 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                    & (0xfU 
                                                                       == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0xfU]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                    & (0xfU 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                   & (0xfU 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                  | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                      & (0xfU 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                     & (0xfU 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0xfU]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                      & (0xfU 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                        & (0xfU 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                       & (0xfU 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                   | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                      & (0xfU 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0xfU]) 
                                                                   - (IData)(1U))
                                                                   : 
                                                                  ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                     & (0xfU 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                       & (0xfU 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                    ? 0U
                                                                    : 
                                                                   VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0xfU])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0x10U] = (3U & VL_SEL_IIII(32, 
                                                             ((1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x10U))
                                                               ? 
                                                              VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                 & (0x10U 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0x10U 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0x10U]) 
                                                                - (IData)(3U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                  & (0x10U 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (0x10U 
                                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0x10U]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                   & (0x10U 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                     & (0x10U 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0x10U]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                     & (0x10U 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    & (0x10U 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                   | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                       & (0x10U 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                      & (0x10U 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x10U]) 
                                                                   - (IData)(2U))
                                                                   : 
                                                                  ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                       & (0x10U 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                      | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                         & (0x10U 
                                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                        & (0x10U 
                                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                       & (0x10U 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                    ? 
                                                                   (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x10U]) 
                                                                    - (IData)(1U))
                                                                    : 
                                                                   ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                      & (0x10U 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                        & (0x10U 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                     ? 0U
                                                                     : 
                                                                    VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x10U])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0x11U] = (3U & VL_SEL_IIII(32, 
                                                             ((1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x11U))
                                                               ? 
                                                              VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                 & (0x11U 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0x11U 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0x11U]) 
                                                                - (IData)(3U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                  & (0x11U 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (0x11U 
                                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0x11U]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                   & (0x11U 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                     & (0x11U 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0x11U]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                     & (0x11U 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    & (0x11U 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                   | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                       & (0x11U 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                      & (0x11U 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x11U]) 
                                                                   - (IData)(2U))
                                                                   : 
                                                                  ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                       & (0x11U 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                      | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                         & (0x11U 
                                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                        & (0x11U 
                                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                       & (0x11U 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                    ? 
                                                                   (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x11U]) 
                                                                    - (IData)(1U))
                                                                    : 
                                                                   ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                      & (0x11U 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                        & (0x11U 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                     ? 0U
                                                                     : 
                                                                    VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x11U])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0x12U] = (3U & VL_SEL_IIII(32, 
                                                             ((1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x12U))
                                                               ? 
                                                              VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                 & (0x12U 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0x12U 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0x12U]) 
                                                                - (IData)(3U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                  & (0x12U 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (0x12U 
                                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0x12U]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                   & (0x12U 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                     & (0x12U 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0x12U]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                     & (0x12U 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    & (0x12U 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                   | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                       & (0x12U 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                      & (0x12U 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x12U]) 
                                                                   - (IData)(2U))
                                                                   : 
                                                                  ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                       & (0x12U 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                      | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                         & (0x12U 
                                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                        & (0x12U 
                                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                       & (0x12U 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                    ? 
                                                                   (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x12U]) 
                                                                    - (IData)(1U))
                                                                    : 
                                                                   ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                      & (0x12U 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                        & (0x12U 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                     ? 0U
                                                                     : 
                                                                    VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x12U])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0x13U] = (3U & VL_SEL_IIII(32, 
                                                             ((1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x13U))
                                                               ? 
                                                              VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                 & (0x13U 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0x13U 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0x13U]) 
                                                                - (IData)(3U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                  & (0x13U 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (0x13U 
                                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0x13U]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                   & (0x13U 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                     & (0x13U 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0x13U]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                     & (0x13U 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    & (0x13U 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                   | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                       & (0x13U 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                      & (0x13U 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x13U]) 
                                                                   - (IData)(2U))
                                                                   : 
                                                                  ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                       & (0x13U 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                      | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                         & (0x13U 
                                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                        & (0x13U 
                                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                       & (0x13U 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                    ? 
                                                                   (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x13U]) 
                                                                    - (IData)(1U))
                                                                    : 
                                                                   ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                      & (0x13U 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                        & (0x13U 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                     ? 0U
                                                                     : 
                                                                    VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x13U])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0x14U] = (3U & VL_SEL_IIII(32, 
                                                             ((1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x14U))
                                                               ? 
                                                              VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                 & (0x14U 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0x14U 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0x14U]) 
                                                                - (IData)(3U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                  & (0x14U 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (0x14U 
                                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0x14U]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                   & (0x14U 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                     & (0x14U 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0x14U]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                     & (0x14U 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    & (0x14U 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                   | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                       & (0x14U 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                      & (0x14U 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x14U]) 
                                                                   - (IData)(2U))
                                                                   : 
                                                                  ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                       & (0x14U 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                      | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                         & (0x14U 
                                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                        & (0x14U 
                                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                       & (0x14U 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                    ? 
                                                                   (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x14U]) 
                                                                    - (IData)(1U))
                                                                    : 
                                                                   ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                      & (0x14U 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                        & (0x14U 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                     ? 0U
                                                                     : 
                                                                    VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x14U])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0x15U] = (3U & VL_SEL_IIII(32, 
                                                             ((1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x15U))
                                                               ? 
                                                              VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                 & (0x15U 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0x15U 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0x15U]) 
                                                                - (IData)(3U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                  & (0x15U 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (0x15U 
                                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0x15U]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                   & (0x15U 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                     & (0x15U 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0x15U]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                     & (0x15U 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    & (0x15U 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                   | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                       & (0x15U 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                      & (0x15U 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x15U]) 
                                                                   - (IData)(2U))
                                                                   : 
                                                                  ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                       & (0x15U 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                      | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                         & (0x15U 
                                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                        & (0x15U 
                                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                       & (0x15U 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                    ? 
                                                                   (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x15U]) 
                                                                    - (IData)(1U))
                                                                    : 
                                                                   ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                      & (0x15U 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                        & (0x15U 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                     ? 0U
                                                                     : 
                                                                    VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x15U])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0x16U] = (3U & VL_SEL_IIII(32, 
                                                             ((1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x16U))
                                                               ? 
                                                              VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                 & (0x16U 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0x16U 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0x16U]) 
                                                                - (IData)(3U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                  & (0x16U 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (0x16U 
                                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0x16U]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                   & (0x16U 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                     & (0x16U 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0x16U]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                     & (0x16U 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    & (0x16U 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                   | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                       & (0x16U 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                      & (0x16U 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x16U]) 
                                                                   - (IData)(2U))
                                                                   : 
                                                                  ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                       & (0x16U 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                      | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                         & (0x16U 
                                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                        & (0x16U 
                                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                       & (0x16U 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                    ? 
                                                                   (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x16U]) 
                                                                    - (IData)(1U))
                                                                    : 
                                                                   ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                      & (0x16U 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                        & (0x16U 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                     ? 0U
                                                                     : 
                                                                    VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x16U])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0x17U] = (3U & VL_SEL_IIII(32, 
                                                             ((1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x17U))
                                                               ? 
                                                              VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                 & (0x17U 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0x17U 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0x17U]) 
                                                                - (IData)(3U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                  & (0x17U 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (0x17U 
                                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0x17U]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                   & (0x17U 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                     & (0x17U 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0x17U]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                     & (0x17U 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    & (0x17U 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                   | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                       & (0x17U 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                      & (0x17U 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x17U]) 
                                                                   - (IData)(2U))
                                                                   : 
                                                                  ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                       & (0x17U 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                      | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                         & (0x17U 
                                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                        & (0x17U 
                                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                       & (0x17U 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                    ? 
                                                                   (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x17U]) 
                                                                    - (IData)(1U))
                                                                    : 
                                                                   ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                      & (0x17U 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                        & (0x17U 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                     ? 0U
                                                                     : 
                                                                    VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x17U])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0x18U] = (3U & VL_SEL_IIII(32, 
                                                             ((1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x18U))
                                                               ? 
                                                              VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                 & (0x18U 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0x18U 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0x18U]) 
                                                                - (IData)(3U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                  & (0x18U 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (0x18U 
                                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0x18U]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                   & (0x18U 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                     & (0x18U 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0x18U]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                     & (0x18U 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    & (0x18U 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                   | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                       & (0x18U 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                      & (0x18U 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x18U]) 
                                                                   - (IData)(2U))
                                                                   : 
                                                                  ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                       & (0x18U 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                      | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                         & (0x18U 
                                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                        & (0x18U 
                                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                       & (0x18U 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                    ? 
                                                                   (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x18U]) 
                                                                    - (IData)(1U))
                                                                    : 
                                                                   ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                      & (0x18U 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                        & (0x18U 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                     ? 0U
                                                                     : 
                                                                    VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x18U])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0x19U] = (3U & VL_SEL_IIII(32, 
                                                             ((1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x19U))
                                                               ? 
                                                              VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                 & (0x19U 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0x19U 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0x19U]) 
                                                                - (IData)(3U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                  & (0x19U 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (0x19U 
                                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0x19U]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                   & (0x19U 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                     & (0x19U 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0x19U]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                     & (0x19U 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    & (0x19U 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                   | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                       & (0x19U 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                      & (0x19U 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x19U]) 
                                                                   - (IData)(2U))
                                                                   : 
                                                                  ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                       & (0x19U 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                      | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                         & (0x19U 
                                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                        & (0x19U 
                                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                       & (0x19U 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                    ? 
                                                                   (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x19U]) 
                                                                    - (IData)(1U))
                                                                    : 
                                                                   ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                      & (0x19U 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                        & (0x19U 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                     ? 0U
                                                                     : 
                                                                    VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x19U])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0x1aU] = (3U & VL_SEL_IIII(32, 
                                                             ((1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1aU))
                                                               ? 
                                                              VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                 & (0x1aU 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0x1aU 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0x1aU]) 
                                                                - (IData)(3U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                  & (0x1aU 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (0x1aU 
                                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0x1aU]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                   & (0x1aU 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                     & (0x1aU 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0x1aU]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                     & (0x1aU 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    & (0x1aU 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                   | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                       & (0x1aU 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                      & (0x1aU 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x1aU]) 
                                                                   - (IData)(2U))
                                                                   : 
                                                                  ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                       & (0x1aU 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                      | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                         & (0x1aU 
                                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                        & (0x1aU 
                                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                       & (0x1aU 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                    ? 
                                                                   (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x1aU]) 
                                                                    - (IData)(1U))
                                                                    : 
                                                                   ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                      & (0x1aU 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                        & (0x1aU 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                     ? 0U
                                                                     : 
                                                                    VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x1aU])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0x1bU] = (3U & VL_SEL_IIII(32, 
                                                             ((1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1bU))
                                                               ? 
                                                              VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                 & (0x1bU 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0x1bU 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0x1bU]) 
                                                                - (IData)(3U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                  & (0x1bU 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (0x1bU 
                                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0x1bU]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                   & (0x1bU 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                     & (0x1bU 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0x1bU]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                     & (0x1bU 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    & (0x1bU 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                   | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                       & (0x1bU 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                      & (0x1bU 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x1bU]) 
                                                                   - (IData)(2U))
                                                                   : 
                                                                  ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                       & (0x1bU 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                      | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                         & (0x1bU 
                                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                        & (0x1bU 
                                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                       & (0x1bU 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                    ? 
                                                                   (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x1bU]) 
                                                                    - (IData)(1U))
                                                                    : 
                                                                   ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                      & (0x1bU 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                        & (0x1bU 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                     ? 0U
                                                                     : 
                                                                    VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x1bU])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0x1cU] = (3U & VL_SEL_IIII(32, 
                                                             ((1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1cU))
                                                               ? 
                                                              VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                 & (0x1cU 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0x1cU 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0x1cU]) 
                                                                - (IData)(3U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                  & (0x1cU 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (0x1cU 
                                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0x1cU]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                   & (0x1cU 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                     & (0x1cU 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0x1cU]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                     & (0x1cU 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    & (0x1cU 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                   | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                       & (0x1cU 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                      & (0x1cU 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x1cU]) 
                                                                   - (IData)(2U))
                                                                   : 
                                                                  ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                       & (0x1cU 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                      | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                         & (0x1cU 
                                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                        & (0x1cU 
                                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                       & (0x1cU 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                    ? 
                                                                   (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x1cU]) 
                                                                    - (IData)(1U))
                                                                    : 
                                                                   ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                      & (0x1cU 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                        & (0x1cU 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                     ? 0U
                                                                     : 
                                                                    VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x1cU])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0x1dU] = (3U & VL_SEL_IIII(32, 
                                                             ((1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1dU))
                                                               ? 
                                                              VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                 & (0x1dU 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0x1dU 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0x1dU]) 
                                                                - (IData)(3U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                  & (0x1dU 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (0x1dU 
                                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0x1dU]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                   & (0x1dU 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                     & (0x1dU 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0x1dU]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                     & (0x1dU 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    & (0x1dU 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                   | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                       & (0x1dU 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                      & (0x1dU 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x1dU]) 
                                                                   - (IData)(2U))
                                                                   : 
                                                                  ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                       & (0x1dU 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                      | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                         & (0x1dU 
                                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                        & (0x1dU 
                                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                       & (0x1dU 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                    ? 
                                                                   (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x1dU]) 
                                                                    - (IData)(1U))
                                                                    : 
                                                                   ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                      & (0x1dU 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                        & (0x1dU 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                     ? 0U
                                                                     : 
                                                                    VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x1dU])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0x1eU] = (3U & VL_SEL_IIII(32, 
                                                             ((1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1eU))
                                                               ? 
                                                              VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                 & (0x1eU 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0x1eU 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0x1eU]) 
                                                                - (IData)(3U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                  & (0x1eU 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (0x1eU 
                                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0x1eU]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                   & (0x1eU 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                     & (0x1eU 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0x1eU]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                     & (0x1eU 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    & (0x1eU 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                   | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                       & (0x1eU 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                      & (0x1eU 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x1eU]) 
                                                                   - (IData)(2U))
                                                                   : 
                                                                  ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                       & (0x1eU 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                      | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                         & (0x1eU 
                                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                        & (0x1eU 
                                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                       & (0x1eU 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                    ? 
                                                                   (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x1eU]) 
                                                                    - (IData)(1U))
                                                                    : 
                                                                   ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                      & (0x1eU 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                        & (0x1eU 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                     ? 0U
                                                                     : 
                                                                    VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x1eU])))))))), 0U, 2));
    vlSelfRef.__PVT__rsp_cntr_nxt[0x1fU] = (3U & VL_SEL_IIII(32, 
                                                             ((1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1fU))
                                                               ? 
                                                              VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__allocate_rsp_cntr_num))
                                                               : 
                                                              ((((IData)(vlSelfRef.__PVT__down_3_vc0_vc1_rsp_cntr) 
                                                                 & (0x1fU 
                                                                    == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                & (0x1fU 
                                                                   == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                ? 
                                                               (VL_EXTEND_II(32,2, 
                                                                             vlSelfRef.__PVT__rsp_cntr
                                                                             [0x1fU]) 
                                                                - (IData)(3U))
                                                                : 
                                                               ((((IData)(vlSelfRef.__PVT__down_2_vc0_vc1_rsp_cntr) 
                                                                  & (0x1fU 
                                                                     == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                 & (0x1fU 
                                                                    == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))
                                                                 ? 
                                                                (VL_EXTEND_II(32,2, 
                                                                              vlSelfRef.__PVT__rsp_cntr
                                                                              [0x1fU]) 
                                                                 - (IData)(2U))
                                                                 : 
                                                                ((((IData)(vlSelfRef.__PVT__down_2_vc0_rsp_cntr) 
                                                                   & (0x1fU 
                                                                      == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                  | ((IData)(vlSelfRef.__PVT__down_2_vc1_rsp_cntr) 
                                                                     & (0x1fU 
                                                                        == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                  ? 
                                                                 (VL_EXTEND_II(32,2, 
                                                                               vlSelfRef.__PVT__rsp_cntr
                                                                               [0x1fU]) 
                                                                  - (IData)(2U))
                                                                  : 
                                                                 (((((IData)(vlSelfRef.__PVT__down_2_vc0_dat_rsp_cntr) 
                                                                     & (0x1fU 
                                                                        == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                    & (0x1fU 
                                                                       == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr))) 
                                                                   | (((IData)(vlSelfRef.__PVT__down_2_vc1_dat_rsp_cntr) 
                                                                       & (0x1fU 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))) 
                                                                      & (0x1fU 
                                                                         == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                   ? 
                                                                  (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x1fU]) 
                                                                   - (IData)(2U))
                                                                   : 
                                                                  ((((((IData)(vlSelfRef.__PVT__down_1_vc0_rsp_cntr) 
                                                                       & (0x1fU 
                                                                          == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                      | ((IData)(vlSelfRef.__PVT__down_1_vc1_rsp_cntr) 
                                                                         & (0x1fU 
                                                                            == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn)))) 
                                                                     | ((IData)(vlSelfRef.__PVT__down_1_vc0_dat_cntr) 
                                                                        & (0x1fU 
                                                                           == (IData)(vlSelfRef.__PVT__vc0_rx_dat_idx_to_clr)))) 
                                                                    | ((IData)(vlSelfRef.__PVT__down_1_vc1_dat_cntr) 
                                                                       & (0x1fU 
                                                                          == (IData)(vlSelfRef.__PVT__vc1_rx_dat_idx_to_clr))))
                                                                    ? 
                                                                   (VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x1fU]) 
                                                                    - (IData)(1U))
                                                                    : 
                                                                   ((((IData)(vlSelfRef.__PVT__is_vc0_rx_RETRYACK) 
                                                                      & (0x1fU 
                                                                         == (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_sn))) 
                                                                     | ((IData)(vlSelfRef.__PVT__is_vc1_rx_RETRYACK) 
                                                                        & (0x1fU 
                                                                           == (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_sn))))
                                                                     ? 0U
                                                                     : 
                                                                    VL_EXTEND_II(32,2, 
                                                                                vlSelfRef.__PVT__rsp_cntr
                                                                                [0x1fU])))))))), 0U, 2));
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_sn__I20_Tc___ctor_var_reset(Vsig_topology_top_sig_id_translator_sn__I20_Tc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_id_translator_sn__I20_Tc___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->__PVT__tx_req_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14698309391978329146ull);
    vlSelf->__PVT__tx_req_opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8007082850181020274ull);
    vlSelf->__PVT__tx_req_order = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10914274268878107195ull);
    vlSelf->__PVT__tx_req_txnid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2182902157905114300ull);
    vlSelf->__PVT__tx_req_apply_dmt_from_hn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10842074030673742709ull);
    vlSelf->__PVT__tx_req_returntxnid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10068471579717701278ull);
    vlSelf->__PVT__tx_req_txnid_to_sn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12713798001380821861ull);
    vlSelf->__PVT__tx_req_returntxnid_to_sn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18149948538616805405ull);
    vlSelf->__PVT__vc0_rx_rsp_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3971686118301021010ull);
    vlSelf->__PVT__vc0_rx_rsp_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16633450762204075446ull);
    vlSelf->__PVT__vc0_rx_rsp_txnid_from_sn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18205456389511519833ull);
    vlSelf->__PVT__vc0_rx_rsp_txnid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12364437059197336991ull);
    vlSelf->__PVT__vc1_rx_rsp_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14656621017388532550ull);
    vlSelf->__PVT__vc1_rx_rsp_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3079772483458571841ull);
    vlSelf->__PVT__vc1_rx_rsp_txnid_from_sn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3266279398401719401ull);
    vlSelf->__PVT__vc1_rx_rsp_txnid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2442109393445920530ull);
    vlSelf->__PVT__vc0_rx_dat_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11348919215571002080ull);
    vlSelf->__PVT__vc0_rx_dat_opcode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17575625163452640630ull);
    vlSelf->__PVT__vc0_rx_dat_txnid_from_sn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6275069730251129837ull);
    vlSelf->__PVT__vc0_rx_dat_dbid_from_sn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3299145485374722355ull);
    vlSelf->__PVT__vc0_rx_dat_txnid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13803892076329687828ull);
    vlSelf->__PVT__vc0_rx_dat_dbid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16724105472290879617ull);
    vlSelf->__PVT__vc1_rx_dat_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10084399847514638597ull);
    vlSelf->__PVT__vc1_rx_dat_opcode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17609014715899986201ull);
    vlSelf->__PVT__vc1_rx_dat_txnid_from_sn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10323042406372333187ull);
    vlSelf->__PVT__vc1_rx_dat_dbid_from_sn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7153597752737896889ull);
    vlSelf->__PVT__vc1_rx_dat_txnid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16086952640368813078ull);
    vlSelf->__PVT__vc1_rx_dat_dbid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7696150905062115265ull);
    vlSelf->__PVT__id_translator_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4073664312429058754ull);
    vlSelf->__PVT__id_translator_hs_pending_txn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12924654799560797390ull);
    vlSelf->__PVT__is_tx_READNOSNP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7213574506603730566ull);
    vlSelf->__PVT__is_tx_WRITENOSNP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13673892194031905533ull);
    vlSelf->__PVT__is_tx_WRITENOSP_CMO = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8944237216179979783ull);
    vlSelf->__PVT__is_tx_WRITENOSNPZERO = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1344692747104191868ull);
    vlSelf->__PVT__is_tx_CMO = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9160367259642477079ull);
    vlSelf->__PVT__is_vc0_rx_COMPDATA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 678701207588473306ull);
    vlSelf->__PVT__is_vc0_rx_Comp_or_DBIDRESP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9605753059928743954ull);
    vlSelf->__PVT__is_vc0_rx_COMPDBIDRESP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7860769826527546811ull);
    vlSelf->__PVT__is_vc0_rx_READRECEIPT = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17751622362678442885ull);
    vlSelf->__PVT__is_vc0_rx_RETRYACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1766241082079758423ull);
    vlSelf->__PVT__is_vc0_rx_CompCMO = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11706551500066739282ull);
    vlSelf->__PVT__is_vc1_rx_COMPDATA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6170613805742258274ull);
    vlSelf->__PVT__is_vc1_rx_Comp_or_DBIDRESP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14365847018013723048ull);
    vlSelf->__PVT__is_vc1_rx_COMPDBIDRESP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16862347053701511272ull);
    vlSelf->__PVT__is_vc1_rx_READRECEIPT = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6058178799263157397ull);
    vlSelf->__PVT__is_vc1_rx_RETRYACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18134156149488502756ull);
    vlSelf->__PVT__is_vc1_rx_CompCMO = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5932699888330330637ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__id_buffer[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5149900860303124661ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__id_buffer_nxt[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2890166502963185102ull);
    }
    vlSelf->__PVT__wren_id_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14582782863542166835ull);
    vlSelf->__PVT__valid_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5535591369001566361ull);
    vlSelf->__PVT__valid_buffer_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2606422949809197289ull);
    vlSelf->__PVT__empty_valid_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15327870279615766740ull);
    vlSelf->__PVT__valid_entry_match = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10793563831215151939ull);
    vlSelf->__PVT__id_translator_full_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9008992663785856423ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__rsp_cntr[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17049461829861275876ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__rsp_cntr_nxt[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11021322599625755294ull);
    }
    vlSelf->__PVT__assert_wren_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18212584224270328165ull);
    vlSelf->__PVT__allocate_rsp_cntr_num = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10112494050739283128ull);
    vlSelf->__PVT__down_1_vc0_rsp_cntr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17443490213939222948ull);
    vlSelf->__PVT__down_1_vc1_rsp_cntr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3076022728438382549ull);
    vlSelf->__PVT__down_1_vc0_dat_cntr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5497658211262028480ull);
    vlSelf->__PVT__down_1_vc1_dat_cntr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5126007268763632701ull);
    vlSelf->__PVT__down_2_vc0_rsp_cntr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5115791451629527689ull);
    vlSelf->__PVT__down_2_vc1_rsp_cntr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2319228645033212303ull);
    vlSelf->__PVT__down_2_vc0_vc1_rsp_cntr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4782434159246338911ull);
    vlSelf->__PVT__down_3_vc0_vc1_rsp_cntr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3807526769226265915ull);
    vlSelf->__PVT__readnosnp_with_dmt_vec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16922121796425523217ull);
    vlSelf->__PVT__readnosnp_with_dmt_vec_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 769314902455404577ull);
    vlSelf->__PVT__vc0_rx_data_from_sn_has_dmt_enabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7482984362615260734ull);
    vlSelf->__PVT__vc1_rx_data_from_sn_has_dmt_enabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4042090112915619177ull);
    vlSelf->__PVT__down_2_vc0_dat_rsp_cntr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4761814922397455954ull);
    vlSelf->__PVT__down_2_vc1_dat_rsp_cntr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13878327765677874440ull);
    vlSelf->__PVT__vc0_rx_dat_idx_to_clr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15075858821023980535ull);
    vlSelf->__PVT__vc1_rx_dat_idx_to_clr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7336577286449140529ull);
    vlSelf->__Vconcswap_1_h7f0f28a2__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6387679575513955474ull);
    vlSelf->__Vconcswap_1_h7eebd197__0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13005476688951848833ull);
    vlSelf->__PVT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11372531115521842849ull);
    vlSelf->__Vfunc_clog2_index__0__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3025129249112608151ull);
    vlSelf->__Vfunc_clog2_index__0__set_bit_location = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16917771762519455598ull);
    vlSelf->__Vfunc_clog2_index__0__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_all_bits_sum_up__1__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6715268902427790690ull);
    vlSelf->__Vfunc_all_bits_sum_up__1__set_bit_location = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2702748521181226589ull);
    vlSelf->__Vfunc_all_bits_sum_up__1__unnamedblk3__DOT__i = 0;
    vlSelf->__Vfunc_all_bits_sum_up__1__tmp_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9026356511366490478ull);
    vlSelf->__Vdly__valid_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3460064984776503869ull);
    vlSelf->__Vdly__readnosnp_with_dmt_vec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 935044520560837736ull);
    vlSelf->__Vdly__id_translator_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1505740637921644095ull);
    vlSelf->__VdlyVal__id_buffer__v0 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3728278862774573732ull);
    vlSelf->__VdlySet__id_buffer__v0 = 0;
    vlSelf->__VdlyVal__id_buffer__v1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4293921722015843686ull);
    vlSelf->__VdlyVal__id_buffer__v2 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5043827291259361261ull);
    vlSelf->__VdlyVal__id_buffer__v3 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10986309772645409934ull);
    vlSelf->__VdlyVal__id_buffer__v4 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10599319460224614933ull);
    vlSelf->__VdlyVal__id_buffer__v5 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6667503287182596405ull);
    vlSelf->__VdlyVal__id_buffer__v6 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12201259274752391071ull);
    vlSelf->__VdlyVal__id_buffer__v7 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9442102303442952685ull);
    vlSelf->__VdlyVal__id_buffer__v8 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5847596645293151261ull);
    vlSelf->__VdlyVal__id_buffer__v9 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17051428662657778955ull);
    vlSelf->__VdlyVal__id_buffer__v10 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11575268011874060215ull);
    vlSelf->__VdlyVal__id_buffer__v11 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9963115821314634748ull);
    vlSelf->__VdlyVal__id_buffer__v12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 701605660514358338ull);
    vlSelf->__VdlyVal__id_buffer__v13 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1351784844833248569ull);
    vlSelf->__VdlyVal__id_buffer__v14 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5507443067151521289ull);
    vlSelf->__VdlyVal__id_buffer__v15 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4361136739920918332ull);
    vlSelf->__VdlyVal__id_buffer__v16 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11404193792501963418ull);
    vlSelf->__VdlyVal__id_buffer__v17 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7620851172656128998ull);
    vlSelf->__VdlyVal__id_buffer__v18 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8169049167723620394ull);
    vlSelf->__VdlyVal__id_buffer__v19 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8120353506591174575ull);
    vlSelf->__VdlyVal__id_buffer__v20 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8111332513695551149ull);
    vlSelf->__VdlyVal__id_buffer__v21 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8758154380998168383ull);
    vlSelf->__VdlyVal__id_buffer__v22 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4156586422910635416ull);
    vlSelf->__VdlyVal__id_buffer__v23 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9822894743107723537ull);
    vlSelf->__VdlyVal__id_buffer__v24 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17390267441267775437ull);
    vlSelf->__VdlyVal__id_buffer__v25 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10871644476498982739ull);
    vlSelf->__VdlyVal__id_buffer__v26 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15752169234232364118ull);
    vlSelf->__VdlyVal__id_buffer__v27 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15829600368475734213ull);
    vlSelf->__VdlyVal__id_buffer__v28 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8897019246952022484ull);
    vlSelf->__VdlyVal__id_buffer__v29 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10441536037411590040ull);
    vlSelf->__VdlyVal__id_buffer__v30 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5668693987709214327ull);
    vlSelf->__VdlyVal__id_buffer__v31 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13375754739172098838ull);
    vlSelf->__VdlyVal__rsp_cntr__v0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9671846584130236015ull);
    vlSelf->__VdlySet__rsp_cntr__v0 = 0;
    vlSelf->__VdlyVal__rsp_cntr__v1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3271904833491396307ull);
    vlSelf->__VdlyVal__rsp_cntr__v2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15300065710940199408ull);
    vlSelf->__VdlyVal__rsp_cntr__v3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12349050777052677694ull);
    vlSelf->__VdlyVal__rsp_cntr__v4 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5930467580791907023ull);
    vlSelf->__VdlyVal__rsp_cntr__v5 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7082797081874489485ull);
    vlSelf->__VdlyVal__rsp_cntr__v6 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 243249451350345137ull);
    vlSelf->__VdlyVal__rsp_cntr__v7 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10781406845501055593ull);
    vlSelf->__VdlyVal__rsp_cntr__v8 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11092601494546807212ull);
    vlSelf->__VdlyVal__rsp_cntr__v9 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15373540293318795200ull);
    vlSelf->__VdlyVal__rsp_cntr__v10 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15113098680444317549ull);
    vlSelf->__VdlyVal__rsp_cntr__v11 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12163056413766443304ull);
    vlSelf->__VdlyVal__rsp_cntr__v12 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10471614314694367824ull);
    vlSelf->__VdlyVal__rsp_cntr__v13 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5772372929894108970ull);
    vlSelf->__VdlyVal__rsp_cntr__v14 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4074539099750255659ull);
    vlSelf->__VdlyVal__rsp_cntr__v15 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10415919904658738258ull);
    vlSelf->__VdlyVal__rsp_cntr__v16 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13426482968295066139ull);
    vlSelf->__VdlyVal__rsp_cntr__v17 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1782590650652563778ull);
    vlSelf->__VdlyVal__rsp_cntr__v18 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7933714491069467653ull);
    vlSelf->__VdlyVal__rsp_cntr__v19 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9628707929355001573ull);
    vlSelf->__VdlyVal__rsp_cntr__v20 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16471310016157424494ull);
    vlSelf->__VdlyVal__rsp_cntr__v21 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17387558966651989953ull);
    vlSelf->__VdlyVal__rsp_cntr__v22 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8162451714298257164ull);
    vlSelf->__VdlyVal__rsp_cntr__v23 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3407337583712540332ull);
    vlSelf->__VdlyVal__rsp_cntr__v24 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14425991310319040933ull);
    vlSelf->__VdlyVal__rsp_cntr__v25 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5495709651903123234ull);
    vlSelf->__VdlyVal__rsp_cntr__v26 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5274442159453860517ull);
    vlSelf->__VdlyVal__rsp_cntr__v27 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9896410817949923637ull);
    vlSelf->__VdlyVal__rsp_cntr__v28 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8894334181510828465ull);
    vlSelf->__VdlyVal__rsp_cntr__v29 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17013366383068106034ull);
    vlSelf->__VdlyVal__rsp_cntr__v30 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15436586937106521030ull);
    vlSelf->__VdlyVal__rsp_cntr__v31 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9174544426974461834ull);
    vlSelf->__VdlySet__id_buffer__v32 = 0;
    vlSelf->__VdlySet__id_buffer__v33 = 0;
    vlSelf->__VdlySet__id_buffer__v34 = 0;
    vlSelf->__VdlySet__id_buffer__v35 = 0;
    vlSelf->__VdlySet__id_buffer__v36 = 0;
    vlSelf->__VdlySet__id_buffer__v37 = 0;
    vlSelf->__VdlySet__id_buffer__v38 = 0;
    vlSelf->__VdlySet__id_buffer__v39 = 0;
    vlSelf->__VdlySet__id_buffer__v40 = 0;
    vlSelf->__VdlySet__id_buffer__v41 = 0;
    vlSelf->__VdlySet__id_buffer__v42 = 0;
    vlSelf->__VdlySet__id_buffer__v43 = 0;
    vlSelf->__VdlySet__id_buffer__v44 = 0;
    vlSelf->__VdlySet__id_buffer__v45 = 0;
    vlSelf->__VdlySet__id_buffer__v46 = 0;
    vlSelf->__VdlySet__id_buffer__v47 = 0;
    vlSelf->__VdlySet__id_buffer__v48 = 0;
    vlSelf->__VdlySet__id_buffer__v49 = 0;
    vlSelf->__VdlySet__id_buffer__v50 = 0;
    vlSelf->__VdlySet__id_buffer__v51 = 0;
    vlSelf->__VdlySet__id_buffer__v52 = 0;
    vlSelf->__VdlySet__id_buffer__v53 = 0;
    vlSelf->__VdlySet__id_buffer__v54 = 0;
    vlSelf->__VdlySet__id_buffer__v55 = 0;
    vlSelf->__VdlySet__id_buffer__v56 = 0;
    vlSelf->__VdlySet__id_buffer__v57 = 0;
    vlSelf->__VdlySet__id_buffer__v58 = 0;
    vlSelf->__VdlySet__id_buffer__v59 = 0;
    vlSelf->__VdlySet__id_buffer__v60 = 0;
    vlSelf->__VdlySet__id_buffer__v61 = 0;
    vlSelf->__VdlySet__id_buffer__v62 = 0;
    vlSelf->__VdlySet__id_buffer__v63 = 0;
}
