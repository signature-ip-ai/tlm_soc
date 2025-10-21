// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_id_translator_rn_req__pi57.h"

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_req__pi57___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__0(Vsig_topology_top_sig_id_translator_rn_req__pi57* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_req__pi57___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_is_read = ((IData)(vlSelfRef.__PVT__ic_rx_req_v) 
                                    & ((((((((((1U 
                                                == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode)) 
                                               | (2U 
                                                  == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                              | (3U 
                                                 == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                             | (7U 
                                                == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                            | (4U == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                           | (0x24U 
                                              == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                          | (0x25U 
                                             == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                         | (0x26U == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                        | (0x41U == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                       | (0x4cU == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))));
    vlSelfRef.__PVT__req_is_ncb_write = ((IData)(vlSelfRef.__PVT__ic_rx_req_v) 
                                         & ((((0x19U 
                                               == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode)) 
                                              | (0x18U 
                                                 == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                             | (0x1dU 
                                                == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                            | (0x1cU 
                                               == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))));
    vlSelfRef.__PVT__req_is_write_zero = ((IData)(vlSelfRef.__PVT__ic_rx_req_v) 
                                          & ((0x44U 
                                              == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode)) 
                                             | (0x43U 
                                                == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))));
    vlSelfRef.__PVT__req_is_dataless = ((IData)(vlSelfRef.__PVT__ic_rx_req_v) 
                                        & ((((((0xbU 
                                                == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode)) 
                                               | (9U 
                                                  == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                              | (8U 
                                                 == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                             | (0xcU 
                                                == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                            | (0xaU 
                                               == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                           | (0xdU 
                                              == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))));
    vlSelfRef.__PVT__req_is_atom = ((IData)(vlSelfRef.__PVT__ic_rx_req_v) 
                                    & ((((((((((((((((((0x28U 
                                                        == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode)) 
                                                       | (0x29U 
                                                          == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                                      | (0x2aU 
                                                         == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                                     | (0x2bU 
                                                        == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                                    | (0x2cU 
                                                       == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                                   | (0x2dU 
                                                      == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                                  | (0x2fU 
                                                     == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                                 | (0x2eU 
                                                    == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                                | (0x30U 
                                                   == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                               | (0x31U 
                                                  == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                              | (0x32U 
                                                 == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                             | (0x33U 
                                                == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                            | (0x34U 
                                               == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                           | (0x35U 
                                              == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                          | (0x37U 
                                             == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                         | (0x36U == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                        | (0x38U == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                       | (0x39U == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))));
    vlSelfRef.__PVT__req_is_wrcmo = ((IData)(vlSelfRef.__PVT__ic_rx_req_v) 
                                     & (((((((((0x51U 
                                                == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode)) 
                                               | (0x50U 
                                                  == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                              | (0x61U 
                                                 == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                             | (0x60U 
                                                == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                            | (0x54U 
                                               == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                           | (0x64U 
                                              == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                          | (0x59U 
                                             == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                         | (0x58U == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                        | (0x5cU == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))));
    vlSelfRef.__PVT__req_is_cb_write = ((IData)(vlSelfRef.__PVT__ic_rx_req_v) 
                                        & ((((((0x17U 
                                                == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode)) 
                                               | (0x16U 
                                                  == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                              | (0x1bU 
                                                 == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                             | (0x1aU 
                                                == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                            | ((0x42U 
                                                == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode)) 
                                               & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_lkly_shared)))) 
                                           | (0x15U 
                                              == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))));
    vlSelfRef.__PVT__req_is_writeevictorevict = (((IData)(vlSelfRef.__PVT__ic_rx_req_v) 
                                                  & (0x42U 
                                                     == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode))) 
                                                 & (IData)(vlSelfRef.__PVT__ic_rx_req_lkly_shared));
    vlSelfRef.__PVT__assert_wren = ((IData)(vlSelfRef.__PVT__ic_rx_req_v) 
                                    & (~ ((0U == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode)) 
                                          | (0x3aU 
                                             == (IData)(vlSelfRef.__PVT__ic_rx_req_opcode)))));
    vlSelfRef.__PVT__wren_id_buffer = ((((IData)(1U) 
                                         + (~ vlSelfRef.__PVT__empty_valid_buffer)) 
                                        & vlSelfRef.__PVT__empty_valid_buffer) 
                                       & VL_REPLICATE_IOI(1,(IData)(vlSelfRef.__PVT__assert_wren), 0x20U));
    VL_ASSIGNBIT_WI(0x1bU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0U) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1bU)))));
    VL_ASSIGNBIT_WI(0x37U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 1U) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1cU, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x37U)))));
    VL_ASSIGNBIT_WI(0x53U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 2U) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x38U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x53U)))));
    VL_ASSIGNBIT_WI(0x6fU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 3U) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x54U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x6fU)))));
    VL_ASSIGNBIT_WI(0x8bU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 4U) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x70U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x8bU)))));
    VL_ASSIGNBIT_WI(0xa7U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 5U) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x8cU, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xa7U)))));
    VL_ASSIGNBIT_WI(0xc3U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 6U) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xa8U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xc3U)))));
    VL_ASSIGNBIT_WI(0xdfU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 7U) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xc4U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xdfU)))));
    VL_ASSIGNBIT_WI(0xfbU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 8U) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xe0U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xfbU)))));
    VL_ASSIGNBIT_WI(0x117U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 9U) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xfcU, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x117U)))));
    VL_ASSIGNBIT_WI(0x133U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xaU) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x118U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x133U)))));
    VL_ASSIGNBIT_WI(0x14fU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xbU) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x134U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x14fU)))));
    VL_ASSIGNBIT_WI(0x16bU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xcU) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x150U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x16bU)))));
    VL_ASSIGNBIT_WI(0x187U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xdU) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x16cU, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x187U)))));
    VL_ASSIGNBIT_WI(0x1a3U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xeU) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x188U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1a3U)))));
    VL_ASSIGNBIT_WI(0x1bfU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xfU) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1a4U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1bfU)))));
    VL_ASSIGNBIT_WI(0x1dbU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x10U) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1c0U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1dbU)))));
    VL_ASSIGNBIT_WI(0x1f7U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x11U) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1dcU, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1f7U)))));
    VL_ASSIGNBIT_WI(0x213U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x12U) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1f8U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x213U)))));
    VL_ASSIGNBIT_WI(0x22fU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x13U) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x214U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x22fU)))));
    VL_ASSIGNBIT_WI(0x24bU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x14U) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x230U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x24bU)))));
    VL_ASSIGNBIT_WI(0x267U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x15U) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x24cU, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x267U)))));
    VL_ASSIGNBIT_WI(0x283U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x16U) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x268U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x283U)))));
    VL_ASSIGNBIT_WI(0x29fU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x17U) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x284U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x29fU)))));
    VL_ASSIGNBIT_WI(0x2bbU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x18U) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2a0U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2bbU)))));
    VL_ASSIGNBIT_WI(0x2d7U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x19U) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2bcU, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2d7U)))));
    VL_ASSIGNBIT_WI(0x2f3U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1aU) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2d8U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2f3U)))));
    VL_ASSIGNBIT_WI(0x30fU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1bU) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2f4U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x30fU)))));
    VL_ASSIGNBIT_WI(0x32bU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1cU) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x310U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x32bU)))));
    VL_ASSIGNBIT_WI(0x347U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1dU) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x32cU, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x347U)))));
    VL_ASSIGNBIT_WI(0x363U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1eU) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x348U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x363U)))));
    VL_ASSIGNBIT_WI(0x37fU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1fU) 
                           | ((0U != (7U & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x364U, 3))) 
                              & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x37fU)))));
    VL_ASSIGNSEL_WI(896,12,0xfU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0U))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xfU, 12))));
    VL_ASSIGNSEL_WI(896,12,0x2bU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 1U))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2bU, 12))));
    VL_ASSIGNSEL_WI(896,12,0x47U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 2U))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x47U, 12))));
    VL_ASSIGNSEL_WI(896,12,0x63U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 3U))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x63U, 12))));
    VL_ASSIGNSEL_WI(896,12,0x7fU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 4U))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x7fU, 12))));
    VL_ASSIGNSEL_WI(896,12,0x9bU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 5U))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x9bU, 12))));
    VL_ASSIGNSEL_WI(896,12,0xb7U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 6U))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xb7U, 12))));
    VL_ASSIGNSEL_WI(896,12,0xd3U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 7U))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xd3U, 12))));
    VL_ASSIGNSEL_WI(896,12,0xefU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 8U))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xefU, 12))));
    VL_ASSIGNSEL_WI(896,12,0x10bU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 9U))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x10bU, 12))));
    VL_ASSIGNSEL_WI(896,12,0x127U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xaU))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x127U, 12))));
    VL_ASSIGNSEL_WI(896,12,0x143U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xbU))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x143U, 12))));
    VL_ASSIGNSEL_WI(896,12,0x15fU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xcU))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x15fU, 12))));
    VL_ASSIGNSEL_WI(896,12,0x17bU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xdU))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x17bU, 12))));
    VL_ASSIGNSEL_WI(896,12,0x197U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xeU))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x197U, 12))));
    VL_ASSIGNSEL_WI(896,12,0x1b3U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xfU))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1b3U, 12))));
    VL_ASSIGNSEL_WI(896,12,0x1cfU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x10U))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1cfU, 12))));
    VL_ASSIGNSEL_WI(896,12,0x1ebU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x11U))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1ebU, 12))));
    VL_ASSIGNSEL_WI(896,12,0x207U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x12U))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x207U, 12))));
    VL_ASSIGNSEL_WI(896,12,0x223U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x13U))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x223U, 12))));
    VL_ASSIGNSEL_WI(896,12,0x23fU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x14U))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x23fU, 12))));
    VL_ASSIGNSEL_WI(896,12,0x25bU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x15U))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x25bU, 12))));
    VL_ASSIGNSEL_WI(896,12,0x277U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x16U))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x277U, 12))));
    VL_ASSIGNSEL_WI(896,12,0x293U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x17U))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x293U, 12))));
    VL_ASSIGNSEL_WI(896,12,0x2afU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x18U))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2afU, 12))));
    VL_ASSIGNSEL_WI(896,12,0x2cbU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x19U))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2cbU, 12))));
    VL_ASSIGNSEL_WI(896,12,0x2e7U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1aU))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2e7U, 12))));
    VL_ASSIGNSEL_WI(896,12,0x303U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1bU))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x303U, 12))));
    VL_ASSIGNSEL_WI(896,12,0x31fU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1cU))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x31fU, 12))));
    VL_ASSIGNSEL_WI(896,12,0x33bU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1dU))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x33bU, 12))));
    VL_ASSIGNSEL_WI(896,12,0x357U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1eU))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x357U, 12))));
    VL_ASSIGNSEL_WI(896,12,0x373U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1fU))
                                ? (IData)(vlSelfRef.__PVT__ic_rx_req_txnid_from_rn)
                                : VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x373U, 12))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_req__pi57___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__1(Vsig_topology_top_sig_id_translator_rn_req__pi57* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_req__pi57___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc0_rx_dat_dbid_to_hn = (0xfffU 
                                              & ((IData)(vlSelfRef.__PVT__is_vc0_rx_COMPDATA)
                                                  ? 
                                                 ((0x37fU 
                                                   >= 
                                                   ((IData)(3U) 
                                                    + 
                                                    VL_EXTEND_II(32,10, 
                                                                 (0x3ffU 
                                                                  & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1cU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn), 0U, 5)))), 0U, 10)))))
                                                   ? 
                                                  VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 
                                                              ((IData)(3U) 
                                                               + 
                                                               VL_EXTEND_II(32,10, 
                                                                            (0x3ffU 
                                                                             & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1cU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn), 0U, 5)))), 0U, 10)))), 12)
                                                   : 0U)
                                                  : (IData)(vlSelfRef.__PVT__vc0_rx_dat_dbid_from_rn)));
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_req__pi57___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__2(Vsig_topology_top_sig_id_translator_rn_req__pi57* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_req__pi57___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_rx_dat_dbid_to_hn = (0xfffU 
                                              & ((IData)(vlSelfRef.__PVT__is_vc1_rx_COMPDATA)
                                                  ? 
                                                 ((0x37fU 
                                                   >= 
                                                   ((IData)(3U) 
                                                    + 
                                                    VL_EXTEND_II(32,10, 
                                                                 (0x3ffU 
                                                                  & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1cU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn), 0U, 5)))), 0U, 10)))))
                                                   ? 
                                                  VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 
                                                              ((IData)(3U) 
                                                               + 
                                                               VL_EXTEND_II(32,10, 
                                                                            (0x3ffU 
                                                                             & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1cU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn), 0U, 5)))), 0U, 10)))), 12)
                                                   : 0U)
                                                  : (IData)(vlSelfRef.__PVT__vc1_rx_dat_dbid_from_rn)));
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_req__pi57___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__3(Vsig_topology_top_sig_id_translator_rn_req__pi57* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_req__pi57___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__3\n"); );
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
                                                   ((0x37fU 
                                                     >= 
                                                     ((IData)(3U) 
                                                      + 
                                                      VL_EXTEND_II(32,10, 
                                                                   (0x3ffU 
                                                                    & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1cU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn), 0U, 5)))), 0U, 10)))))
                                                     ? 
                                                    VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 
                                                                ((IData)(3U) 
                                                                 + 
                                                                 VL_EXTEND_II(32,10, 
                                                                              (0x3ffU 
                                                                               & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1cU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_dat_txnid_from_rn), 0U, 5)))), 0U, 10)))), 12)
                                                     : 0U))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_req__pi57___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__4(Vsig_topology_top_sig_id_translator_rn_req__pi57* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_req__pi57___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__4\n"); );
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
                                                   ((0x37fU 
                                                     >= 
                                                     ((IData)(3U) 
                                                      + 
                                                      VL_EXTEND_II(32,10, 
                                                                   (0x3ffU 
                                                                    & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1cU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn), 0U, 5)))), 0U, 10)))))
                                                     ? 
                                                    VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 
                                                                ((IData)(3U) 
                                                                 + 
                                                                 VL_EXTEND_II(32,10, 
                                                                              (0x3ffU 
                                                                               & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1cU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_dat_txnid_from_rn), 0U, 5)))), 0U, 10)))), 12)
                                                     : 0U))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_req__pi57___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__5(Vsig_topology_top_sig_id_translator_rn_req__pi57* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_req__pi57___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__5\n"); );
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
                                                   ((0x37fU 
                                                     >= 
                                                     ((IData)(3U) 
                                                      + 
                                                      VL_EXTEND_II(32,10, 
                                                                   (0x3ffU 
                                                                    & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1cU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn), 0U, 5)))), 0U, 10)))))
                                                     ? 
                                                    VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 
                                                                ((IData)(3U) 
                                                                 + 
                                                                 VL_EXTEND_II(32,10, 
                                                                              (0x3ffU 
                                                                               & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1cU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc0_rx_rsp_txnid_from_rn), 0U, 5)))), 0U, 10)))), 12)
                                                     : 0U))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_req__pi57___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__6(Vsig_topology_top_sig_id_translator_rn_req__pi57* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_req__pi57___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__6\n"); );
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
                                                   ((0x37fU 
                                                     >= 
                                                     ((IData)(3U) 
                                                      + 
                                                      VL_EXTEND_II(32,10, 
                                                                   (0x3ffU 
                                                                    & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1cU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn), 0U, 5)))), 0U, 10)))))
                                                     ? 
                                                    VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 
                                                                ((IData)(3U) 
                                                                 + 
                                                                 VL_EXTEND_II(32,10, 
                                                                              (0x3ffU 
                                                                               & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1cU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(12, (IData)(vlSelfRef.__PVT__vc1_rx_rsp_txnid_from_rn), 0U, 5)))), 0U, 10)))), 12)
                                                     : 0U))));
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_req__pi57___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__7(Vsig_topology_top_sig_id_translator_rn_req__pi57* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_req__pi57___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_rn_p3__node_porttop_rn__DOT__u_node_porttop_rn__node_porttop_rn__DOT__id_trans_instantiated__DOT__sig_id_translator_rn_wrapper_0__i_sig_id_translator_rn_req__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_WI(896,3,0U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0U) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0U) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0U) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0U) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0U) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1bU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xfU, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1bU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xfU, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1bU) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xfU, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1bU) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1bU) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x1cU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 1U) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 1U) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 1U) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 1U) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 1U) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x37U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2bU, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1cU, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x37U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2bU, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1cU, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x37U) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2bU, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1cU, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x37U) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1cU, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x37U) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1cU, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1cU, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x38U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 2U) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 2U) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 2U) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 2U) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 2U) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x53U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x47U, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x38U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x53U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x47U, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x38U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x53U) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x47U, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x38U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x53U) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x38U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x53U) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x38U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x38U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x54U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 3U) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 3U) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 3U) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 3U) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 3U) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x6fU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x63U, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x54U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x6fU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x63U, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x54U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x6fU) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x63U, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x54U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x6fU) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x54U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x6fU) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x54U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x54U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x70U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 4U) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 4U) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 4U) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 4U) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 4U) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x8bU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x7fU, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x70U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x8bU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x7fU, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x70U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x8bU) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x7fU, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x70U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x8bU) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x70U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x8bU) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x70U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x70U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x8cU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 5U) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 5U) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 5U) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 5U) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 5U) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xa7U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x9bU, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x8cU, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xa7U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x9bU, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x8cU, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xa7U) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x9bU, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x8cU, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xa7U) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x8cU, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xa7U) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x8cU, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x8cU, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0xa8U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 6U) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 6U) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 6U) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 6U) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 6U) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xc3U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xb7U, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xa8U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xc3U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xb7U, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xa8U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xc3U) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xb7U, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xa8U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xc3U) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xa8U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xc3U) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xa8U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xa8U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0xc4U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 7U) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 7U) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 7U) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 7U) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 7U) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xdfU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xd3U, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xc4U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xdfU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xd3U, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xc4U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xdfU) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xd3U, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xc4U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xdfU) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xc4U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xdfU) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xc4U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xc4U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0xe0U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 8U) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 8U) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 8U) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 8U) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 8U) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xfbU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xefU, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xe0U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xfbU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xefU, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xe0U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xfbU) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xefU, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xe0U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xfbU) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xe0U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xfbU) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xe0U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xe0U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0xfcU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 9U) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 9U) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 9U) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 9U) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 9U) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x117U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x10bU, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xfcU, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x117U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x10bU, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xfcU, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x117U) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x10bU, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xfcU, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x117U) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xfcU, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x117U) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xfcU, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0xfcU, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x118U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xaU) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xaU) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xaU) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xaU) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xaU) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x133U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x127U, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x118U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x133U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x127U, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x118U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x133U) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x127U, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x118U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x133U) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x118U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x133U) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x118U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x118U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x134U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xbU) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xbU) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xbU) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xbU) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xbU) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x14fU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x143U, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x134U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x14fU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x143U, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x134U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x14fU) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x143U, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x134U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x14fU) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x134U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x14fU) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x134U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x134U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x150U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xcU) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xcU) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xcU) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xcU) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xcU) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x16bU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x15fU, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x150U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x16bU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x15fU, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x150U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x16bU) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x15fU, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x150U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x16bU) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x150U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x16bU) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x150U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x150U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x16cU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xdU) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xdU) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xdU) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xdU) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xdU) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x187U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x17bU, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x16cU, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x187U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x17bU, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x16cU, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x187U) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x17bU, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x16cU, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x187U) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x16cU, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x187U) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x16cU, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x16cU, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x188U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xeU) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xeU) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xeU) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xeU) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xeU) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1a3U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x197U, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x188U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1a3U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x197U, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x188U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1a3U) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x197U, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x188U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1a3U) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x188U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1a3U) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x188U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x188U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x1a4U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xfU) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xfU) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xfU) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xfU) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0xfU) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1bfU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1b3U, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1a4U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1bfU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1b3U, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1a4U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1bfU) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1b3U, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1a4U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1bfU) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1a4U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1bfU) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1a4U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1a4U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x1c0U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x10U) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x10U) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x10U) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x10U) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x10U) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1dbU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1cfU, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1c0U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1dbU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1cfU, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1c0U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1dbU) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1cfU, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1c0U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1dbU) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1c0U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1dbU) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1c0U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1c0U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x1dcU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x11U) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x11U) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x11U) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x11U) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x11U) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1f7U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1ebU, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1dcU, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1f7U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1ebU, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1dcU, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1f7U) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1ebU, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1dcU, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1f7U) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1dcU, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1f7U) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1dcU, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1dcU, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x1f8U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x12U) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x12U) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x12U) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x12U) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x12U) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x213U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x207U, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1f8U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x213U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x207U, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1f8U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x213U) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x207U, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1f8U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x213U) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1f8U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x213U) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1f8U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x1f8U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x214U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x13U) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x13U) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x13U) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x13U) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x13U) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x22fU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x223U, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x214U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x22fU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x223U, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x214U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x22fU) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x223U, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x214U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x22fU) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x214U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x22fU) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x214U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x214U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x230U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x14U) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x14U) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x14U) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x14U) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x14U) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x24bU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x23fU, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x230U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x24bU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x23fU, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x230U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x24bU) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x23fU, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x230U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x24bU) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x230U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x24bU) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x230U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x230U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x24cU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x15U) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x15U) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x15U) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x15U) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x15U) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x267U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x25bU, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x24cU, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x267U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x25bU, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x24cU, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x267U) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x25bU, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x24cU, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x267U) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x24cU, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x267U) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x24cU, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x24cU, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x268U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x16U) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x16U) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x16U) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x16U) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x16U) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x283U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x277U, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x268U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x283U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x277U, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x268U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x283U) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x277U, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x268U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x283U) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x268U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x283U) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x268U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x268U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x284U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x17U) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x17U) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x17U) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x17U) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x17U) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x29fU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x293U, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x284U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x29fU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x293U, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x284U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x29fU) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x293U, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x284U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x29fU) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x284U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x29fU) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x284U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x284U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x2a0U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x18U) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x18U) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x18U) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x18U) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x18U) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2bbU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2afU, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2a0U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2bbU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2afU, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2a0U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2bbU) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2afU, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2a0U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2bbU) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2a0U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2bbU) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2a0U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2a0U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x2bcU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x19U) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x19U) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x19U) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x19U) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x19U) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2d7U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2cbU, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2bcU, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2d7U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2cbU, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2bcU, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2d7U) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2cbU, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2bcU, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2d7U) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2bcU, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2d7U) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2bcU, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2bcU, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x2d8U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1aU) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1aU) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1aU) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1aU) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1aU) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2f3U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2e7U, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2d8U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2f3U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2e7U, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2d8U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2f3U) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2e7U, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2d8U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2f3U) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2d8U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2f3U) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2d8U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2d8U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x2f4U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1bU) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1bU) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1bU) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1bU) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1bU) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x30fU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x303U, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2f4U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x30fU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x303U, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2f4U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x30fU) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x303U, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2f4U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x30fU) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2f4U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x30fU) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2f4U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x2f4U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x310U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1cU) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1cU) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1cU) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1cU) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1cU) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x32bU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x31fU, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x310U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x32bU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x31fU, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x310U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x32bU) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x31fU, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x310U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x32bU) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x310U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x32bU) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x310U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x310U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x32cU, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1dU) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1dU) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1dU) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1dU) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1dU) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x347U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x33bU, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x32cU, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x347U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x33bU, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x32cU, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x347U) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x33bU, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x32cU, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x347U) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x32cU, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x347U) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x32cU, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x32cU, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x348U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1eU) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1eU) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1eU) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1eU) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1eU) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x363U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x357U, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x348U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x363U) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x357U, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x348U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x363U) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x357U, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x348U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x363U) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x348U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x363U) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x348U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x348U, 3)))))))))))));
    VL_ASSIGNSEL_WI(896,3,0x364U, vlSelfRef.__PVT__id_buffer_nxt, 
                    (7U & (((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1fU) 
                             & (~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack))) 
                            & ((IData)(vlSelfRef.__PVT__req_is_read) 
                               | (IData)(vlSelfRef.__PVT__req_is_dataless)))
                            ? 1U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1fU) 
                                     & ((((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_read) 
                                             | (IData)(vlSelfRef.__PVT__req_is_dataless))) 
                                         | (IData)(vlSelfRef.__PVT__req_is_write_zero)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_writeevictorevict)))
                                     ? 2U : ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1fU) 
                                              & ((((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_cb_write)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_atom)))
                                              ? 3U : 
                                             ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1fU) 
                                               & (((IData)(vlSelfRef.__PVT__ic_rx_req_expcompack) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_ncb_write)) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                     & (IData)(vlSelfRef.__PVT__req_is_wrcmo))))
                                               ? 4U
                                               : ((
                                                   (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_id_buffer, 0x1fU) 
                                                    & (IData)(vlSelfRef.__PVT__ic_rx_req_expcompack)) 
                                                   & (IData)(vlSelfRef.__PVT__req_is_wrcmo))
                                                   ? 5U
                                                   : 
                                                  ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x37fU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x373U, 12)))) 
                                                    & (((4U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)) 
                                                        | (6U 
                                                           == (IData)(vlSelfRef.__PVT__tx_rsp_opcode))) 
                                                       | (IData)(vlSelfRef.__PVT__tx_rsp_is_compcmo)))
                                                    ? 
                                                   (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x364U, 3) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x37fU) 
                                                      & (IData)(vlSelfRef.__PVT__tx_dat_v)) 
                                                     & ((IData)(vlSelfRef.__PVT__tx_dat_txnid_from_hn) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x373U, 12))))
                                                     ? 
                                                    (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x364U, 3) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x37fU) 
                                                        & (IData)(vlSelfRef.__PVT__tx_rsp_v)) 
                                                       & ((IData)(vlSelfRef.__PVT__tx_rsp_txnid_from_hn) 
                                                          == 
                                                          (0xfffU 
                                                           & VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x373U, 12)))) 
                                                      & (5U 
                                                         == (IData)(vlSelfRef.__PVT__tx_rsp_opcode)))
                                                      ? 
                                                     (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x364U, 3) 
                                                      - (IData)(2U))
                                                      : 
                                                     ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x37fU) 
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
                                                       ? 
                                                      (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x364U, 3) 
                                                       - (IData)(2U))
                                                       : 
                                                      ((VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x37fU) 
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
                                                       (VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x364U, 3) 
                                                        - (IData)(1U))
                                                        : 
                                                       VL_SEL_IWII(896, vlSelfRef.__PVT__id_buffer, 0x364U, 3)))))))))))));
    VL_ASSIGNSEL_II(32,3,0U, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x53U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x37U)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x1bU)))));
    VL_ASSIGNSEL_II(32,3,3U, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0xa7U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x8bU)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x6fU)))));
    VL_ASSIGNSEL_II(32,3,6U, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0xfbU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0xdfU)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0xc3U)))));
    VL_ASSIGNSEL_II(32,3,9U, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x14fU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x133U)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x117U)))));
    VL_ASSIGNSEL_II(32,3,0xcU, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x1a3U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x187U)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x16bU)))));
    VL_ASSIGNSEL_II(32,3,0xfU, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x1f7U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x1dbU)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x1bfU)))));
    VL_ASSIGNSEL_II(32,3,0x12U, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x24bU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x22fU)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x213U)))));
    VL_ASSIGNSEL_II(32,3,0x15U, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x29fU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x283U)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x267U)))));
    VL_ASSIGNSEL_II(32,3,0x18U, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x2f3U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x2d7U)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x2bbU)))));
    VL_ASSIGNSEL_II(32,3,0x1bU, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x347U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x32bU)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x30fU)))));
    VL_ASSIGNSEL_II(32,2,0x1eU, vlSelfRef.__PVT__id_buffer_valid_nxt, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x37fU)), 
                                  (1U & VL_BITSEL_IWII(896, vlSelfRef.__PVT__id_buffer_nxt, 0x363U))));
    vlSelfRef.__PVT__id_translator_full_nxt = (4U > 
                                               ([&]() {
                vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location 
                    = (~ vlSelfRef.__PVT__id_buffer_valid_nxt);
                vlSelf->__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0;
                const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                vlSelf->__Vfunc_all_bits_sum_up__5__tmp_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10519829291959557657ull);
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout = 0U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 1U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 1U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 1U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 2U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 2U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 2U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 3U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 3U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 3U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 4U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 4U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 4U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 5U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 5U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 5U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 6U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 6U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 6U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 7U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 7U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 7U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 8U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 8U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 8U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 9U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 9U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 9U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0xaU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0xaU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0xaU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0xbU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0xbU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0xbU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0xcU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0xcU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0xcU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0xdU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0xdU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0xdU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0xeU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0xeU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0xeU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0xfU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0xfU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0xfU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0x10U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x10U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x10U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0x11U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x11U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x11U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0x12U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x12U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x12U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0x13U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x13U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x13U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0x14U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x14U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x14U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0x15U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x15U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x15U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0x16U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x16U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x16U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0x17U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x17U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x17U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0x18U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x18U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x18U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0x19U;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x19U))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x19U))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0x1aU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x1aU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x1aU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0x1bU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x1bU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x1bU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0x1cU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x1cU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x1cU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0x1dU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x1dU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x1dU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0x1eU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x1eU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x1eU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0x1fU;
                vlSelfRef.__Vconcswap_1_h7f0f28a2__0 
                    = (1U & VL_BITSEL_IIII(7, (0x7fU 
                                               & (VL_EXTEND_II(7,6, (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)) 
                                                  + 
                                                  VL_EXTEND_II(7,1, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x1fU))))), 6U));
                vlSelfRef.__Vconcswap_1_h7eebd197__0 
                    = (0x3fU & ((IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout) 
                                + VL_SEL_IIII(7, VL_EXTEND_II(7,1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__Vfunc_all_bits_sum_up__5__set_bit_location, 0x1fU))), 0U, 6)));
                vlSelfRef.__Vfunc_all_bits_sum_up__5__tmp_overflow 
                    = vlSelfRef.__Vconcswap_1_h7f0f28a2__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout 
                    = vlSelfRef.__Vconcswap_1_h7eebd197__0;
                vlSelfRef.__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0x20U;
            }(), (IData)(vlSelfRef.__Vfunc_all_bits_sum_up__5__Vfuncout)));
}

VL_ATTR_COLD void Vsig_topology_top_sig_id_translator_rn_req__pi57___ctor_var_reset(Vsig_topology_top_sig_id_translator_rn_req__pi57* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_id_translator_rn_req__pi57___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->__PVT__tx_rsp_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2747297334556920702ull);
    vlSelf->__PVT__tx_rsp_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1336872673651741080ull);
    vlSelf->__PVT__tx_rsp_dbid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1840634888362332302ull);
    vlSelf->__PVT__tx_rsp_txnid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18413498414578026162ull);
    vlSelf->__PVT__tx_rsp_dbid_to_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2647194244193697424ull);
    vlSelf->__PVT__tx_dat_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10230828256482590494ull);
    vlSelf->__PVT__tx_dat_dbid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9409818687272564606ull);
    vlSelf->__PVT__tx_dat_txnid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6478233242765452913ull);
    vlSelf->__PVT__tx_dat_dbid_to_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15269487314227434881ull);
    vlSelf->__PVT__ic_rx_req_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12553187514232022100ull);
    vlSelf->__PVT__ic_rx_req_opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10379654436714780255ull);
    vlSelf->__PVT__ic_rx_req_lkly_shared = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9591490119050145361ull);
    vlSelf->__PVT__ic_rx_req_txnid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18156255455434784704ull);
    vlSelf->__PVT__ic_rx_req_expcompack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4703236615110897551ull);
    vlSelf->__PVT__vc0_rx_rsp_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3971686118301021010ull);
    vlSelf->__PVT__vc0_rx_rsp_txnid_from_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8638758416788597766ull);
    vlSelf->__PVT__vc0_rx_rsp_txnid_to_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12364437059197336991ull);
    vlSelf->__PVT__vc1_rx_rsp_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14656621017388532550ull);
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
    vlSelf->__PVT__id_translator_req_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12499710416353431209ull);
    vlSelf->__PVT__unmasked_tx_rsp_dbid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8129431409266614362ull);
    vlSelf->__PVT__unmasked_tx_dat_dbid_from_hn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13610135483061997584ull);
    vlSelf->__PVT__expcompack_from_rsp_dbid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13093320800164482106ull);
    vlSelf->__PVT__expcompack_from_dat_dbid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 286886890424732042ull);
    vlSelf->__PVT__writezero_from_rsp_dbid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2136385566630426230ull);
    vlSelf->__PVT__timeout_cback_wrdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13755035526330091823ull);
    vlSelf->__PVT__is_vc0_rx_COMPDATA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 678701207588473306ull);
    vlSelf->__PVT__is_vc1_rx_COMPDATA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6170613805742258274ull);
    vlSelf->__PVT__is_vc0_rx_NCBWRDATACOMPACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4803457809209088572ull);
    vlSelf->__PVT__is_vc1_rx_NCBWRDATACOMPACK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10593925094280608184ull);
    VL_SCOPED_RAND_RESET_W(896, vlSelf->__PVT__id_buffer, __VscopeHash, 5149900860303124661ull);
    VL_SCOPED_RAND_RESET_W(896, vlSelf->__PVT__id_buffer_nxt, __VscopeHash, 2890166502963185102ull);
    vlSelf->__PVT__wren_id_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14582782863542166835ull);
    vlSelf->__PVT__rsp_txnid_entry_match = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11953558808041498762ull);
    vlSelf->__PVT__dat_txnid_entry_match = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15165141751523294915ull);
    vlSelf->__PVT__empty_valid_buffer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15327870279615766740ull);
    vlSelf->__PVT__id_buffer_valid = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4355402353215462464ull);
    vlSelf->__PVT__id_buffer_valid_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4088958002169096336ull);
    vlSelf->__PVT__id_translator_full_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9008992663785856423ull);
    vlSelf->__PVT__assert_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18182980786680410429ull);
    vlSelf->__PVT__req_is_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13413435982308844443ull);
    vlSelf->__PVT__req_is_ncb_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 732481773281818307ull);
    vlSelf->__PVT__req_is_cb_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15119512733784958442ull);
    vlSelf->__PVT__req_is_write_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15346564849649074225ull);
    vlSelf->__PVT__req_is_dataless = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11924463540555345038ull);
    vlSelf->__PVT__req_is_writeevictorevict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4149557616356500669ull);
    vlSelf->__PVT__req_is_atom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4063131443802188808ull);
    vlSelf->__PVT__req_is_wrcmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14008382201138356965ull);
    vlSelf->__PVT__tx_rsp_is_compcmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5768898227808373641ull);
    vlSelf->__PVT__tx_actual_rsp_dbid_to_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17950057107045856793ull);
    vlSelf->__PVT__tx_actual_dat_dbid_to_rn = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17169687088578699948ull);
    vlSelf->__Vconcswap_1_h7f0f28a2__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6387679575513955474ull);
    vlSelf->__Vconcswap_1_h7eebd197__0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13005476688951848833ull);
    vlSelf->__PVT__unused_signal_block__DOT__unused_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4460017475698396108ull);
    vlSelf->__PVT__unused_signal_block__DOT__unused_signal_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5946587349157120734ull);
    vlSelf->__Vfunc_clog2_index__0__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3025129249112608151ull);
    vlSelf->__Vfunc_clog2_index__0__set_bit_location = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16917771762519455598ull);
    vlSelf->__Vfunc_clog2_index__0__unnamedblk1__DOT__i = 0;
    vlSelf->__Vfunc_clog2_index__1__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17907098098315329491ull);
    vlSelf->__Vfunc_clog2_index__1__set_bit_location = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16845444203991592607ull);
    vlSelf->__Vfunc_clog2_index__1__unnamedblk1__DOT__i = 0;
    vlSelf->__Vfunc_all_bits_sum_up__2__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17077453975987562741ull);
    vlSelf->__Vfunc_all_bits_sum_up__2__set_bit_location = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8185618804488848814ull);
    vlSelf->__Vfunc_all_bits_sum_up__2__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_all_bits_sum_up__2__tmp_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 687009292934309562ull);
    vlSelf->__Vfunc_clog2_index__3__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18323217794907451439ull);
    vlSelf->__Vfunc_clog2_index__3__set_bit_location = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7641157369903582854ull);
    vlSelf->__Vfunc_clog2_index__3__unnamedblk1__DOT__i = 0;
    vlSelf->__Vfunc_clog2_index__4__Vfuncout = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2145119689128464767ull);
    vlSelf->__Vfunc_clog2_index__4__set_bit_location = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1535717221472325441ull);
    vlSelf->__Vfunc_clog2_index__4__unnamedblk1__DOT__i = 0;
    vlSelf->__Vfunc_all_bits_sum_up__5__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3941851844202016290ull);
    vlSelf->__Vfunc_all_bits_sum_up__5__set_bit_location = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16211692606227229194ull);
    vlSelf->__Vfunc_all_bits_sum_up__5__unnamedblk2__DOT__i = 0;
    vlSelf->__Vfunc_all_bits_sum_up__5__tmp_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10519829291959557657ull);
    VL_SCOPED_RAND_RESET_W(896, vlSelf->__Vdly__id_buffer, __VscopeHash, 15931877679181556011ull);
    vlSelf->__Vdly__id_translator_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1505740637921644095ull);
    vlSelf->__Vdly__unused_signal_block__DOT__unused_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3030336470289689506ull);
}
