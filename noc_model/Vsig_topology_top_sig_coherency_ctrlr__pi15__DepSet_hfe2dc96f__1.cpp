// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_coherency_ctrlr__pi15.h"

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi15___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__4(Vsig_topology_top_sig_coherency_ctrlr__pi15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi15___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    CData/*31:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    CData/*31:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    CData/*31:0*/ __Vtemp_11;
    // Body
    VL_ASSIGNBIT_WI(0x6fU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 6U) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 6U)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x6fU)))));
    VL_ASSIGNSEL_WI(512,15,0x60U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 6U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x6bU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 6U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x60U, 11)))));
    VL_ASSIGNBIT_WI(0x7fU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 7U) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 7U)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x7fU)))));
    VL_ASSIGNSEL_WI(512,15,0x70U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 7U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x7bU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 7U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x70U, 11)))));
    VL_ASSIGNBIT_WI(0x8fU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 8U) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 8U)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x8fU)))));
    VL_ASSIGNSEL_WI(512,15,0x80U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 8U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x8bU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 8U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x80U, 11)))));
    VL_ASSIGNBIT_WI(0x9fU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 9U) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 9U)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x9fU)))));
    VL_ASSIGNSEL_WI(512,15,0x90U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 9U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x9bU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 9U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x90U, 11)))));
    VL_ASSIGNBIT_WI(0xafU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0xaU) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0xaU)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xafU)))));
    VL_ASSIGNSEL_WI(512,15,0xa0U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0xaU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xabU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0xaU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xa0U, 11)))));
    VL_ASSIGNBIT_WI(0xbfU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0xbU) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0xbU)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xbfU)))));
    VL_ASSIGNSEL_WI(512,15,0xb0U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0xbU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xbbU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0xbU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xb0U, 11)))));
    VL_ASSIGNBIT_WI(0xcfU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0xcU) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0xcU)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xcfU)))));
    VL_ASSIGNSEL_WI(512,15,0xc0U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0xcU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xcbU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0xcU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xc0U, 11)))));
    VL_ASSIGNBIT_WI(0xdfU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0xdU) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0xdU)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xdfU)))));
    VL_ASSIGNSEL_WI(512,15,0xd0U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0xdU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xdbU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0xdU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xd0U, 11)))));
    VL_ASSIGNBIT_WI(0xefU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0xeU) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0xeU)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xefU)))));
    VL_ASSIGNSEL_WI(512,15,0xe0U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0xeU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xebU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0xeU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xe0U, 11)))));
    VL_ASSIGNBIT_WI(0xffU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0xfU) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0xfU)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xffU)))));
    VL_ASSIGNSEL_WI(512,15,0xf0U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0xfU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xfbU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0xfU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xf0U, 11)))));
    VL_ASSIGNBIT_WI(0x10fU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x10U) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0x10U)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x10fU)))));
    VL_ASSIGNSEL_WI(512,15,0x100U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x10U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x10bU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x10U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x100U, 11)))));
    VL_ASSIGNBIT_WI(0x11fU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x11U) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0x11U)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x11fU)))));
    VL_ASSIGNSEL_WI(512,15,0x110U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x11U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x11bU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x11U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x110U, 11)))));
    VL_ASSIGNBIT_WI(0x12fU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x12U) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0x12U)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x12fU)))));
    VL_ASSIGNSEL_WI(512,15,0x120U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x12U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x12bU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x12U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x120U, 11)))));
    VL_ASSIGNBIT_WI(0x13fU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x13U) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0x13U)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x13fU)))));
    VL_ASSIGNSEL_WI(512,15,0x130U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x13U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x13bU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x13U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x130U, 11)))));
    VL_ASSIGNBIT_WI(0x14fU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x14U) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0x14U)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x14fU)))));
    VL_ASSIGNSEL_WI(512,15,0x140U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x14U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x14bU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x14U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x140U, 11)))));
    VL_ASSIGNBIT_WI(0x15fU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x15U) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0x15U)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x15fU)))));
    VL_ASSIGNSEL_WI(512,15,0x150U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x15U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x15bU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x15U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x150U, 11)))));
    VL_ASSIGNBIT_WI(0x16fU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x16U) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0x16U)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x16fU)))));
    VL_ASSIGNSEL_WI(512,15,0x160U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x16U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x16bU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x16U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x160U, 11)))));
    VL_ASSIGNBIT_WI(0x17fU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x17U) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0x17U)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x17fU)))));
    VL_ASSIGNSEL_WI(512,15,0x170U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x17U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x17bU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x17U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x170U, 11)))));
    VL_ASSIGNBIT_WI(0x18fU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x18U) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0x18U)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x18fU)))));
    VL_ASSIGNSEL_WI(512,15,0x180U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x18U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x18bU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x18U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x180U, 11)))));
    VL_ASSIGNBIT_WI(0x19fU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x19U) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0x19U)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x19fU)))));
    VL_ASSIGNSEL_WI(512,15,0x190U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x19U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x19bU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x19U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x190U, 11)))));
    VL_ASSIGNBIT_WI(0x1afU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x1aU) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0x1aU)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1afU)))));
    VL_ASSIGNSEL_WI(512,15,0x1a0U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x1aU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1abU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x1aU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1a0U, 11)))));
    VL_ASSIGNBIT_WI(0x1bfU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x1bU) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0x1bU)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1bfU)))));
    VL_ASSIGNSEL_WI(512,15,0x1b0U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x1bU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1bbU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x1bU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1b0U, 11)))));
    VL_ASSIGNBIT_WI(0x1cfU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x1cU) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0x1cU)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1cfU)))));
    VL_ASSIGNSEL_WI(512,15,0x1c0U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x1cU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1cbU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x1cU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1c0U, 11)))));
    VL_ASSIGNBIT_WI(0x1dfU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x1dU) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0x1dU)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1dfU)))));
    VL_ASSIGNSEL_WI(512,15,0x1d0U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x1dU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1dbU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x1dU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1d0U, 11)))));
    VL_ASSIGNBIT_WI(0x1efU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x1eU) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0x1eU)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1efU)))));
    VL_ASSIGNSEL_WI(512,15,0x1e0U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x1eU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1ebU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x1eU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1e0U, 11)))));
    VL_ASSIGNBIT_WI(0x1ffU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x1fU) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0x1fU)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1ffU)))));
    VL_ASSIGNSEL_WI(512,15,0x1f0U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x1fU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1fbU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0x1fU))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1f0U, 11)))));
    VL_CONST_W_5X(160,__Vtemp_1,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_2, vlSelfRef.__PVT__status_field_common, 
                (0x1fffU & VL_SEL_IIII(32, ((IData)(0x88U) 
                                            * VL_EXTEND_II(32,5, (IData)(vlSelfRef.__PVT__muxed_id))), 0U, 13)), 136);
    VL_CONST_W_1X(136,__Vtemp_3,0x00000000);
    __Vtemp_4 = (0x10ffU >= (0x1fffU & VL_SEL_IIII(32, 
                                                   ((IData)(0x88U) 
                                                    * 
                                                    VL_EXTEND_II(32,5, (IData)(vlSelfRef.__PVT__muxed_id))), 0U, 13)));
    VL_COND_WIWW(136, __Vtemp_5, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    VL_AND_W(5, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, __Vtemp_1, __Vtemp_5);
    VL_CONST_W_4X(128,__Vtemp_6,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_7, vlSelfRef.__PVT__status_field_req, 
                (0xfffU & VL_SEL_IIII(32, ((IData)(0x6cU) 
                                           * VL_EXTEND_II(32,5, (IData)(vlSelfRef.__PVT__muxed_id))), 0U, 12)), 108);
    VL_CONST_W_1X(108,__Vtemp_8,0x00000000);
    __Vtemp_9 = (0xd7fU >= (0xfffU & VL_SEL_IIII(32, 
                                                 ((IData)(0x6cU) 
                                                  * 
                                                  VL_EXTEND_II(32,5, (IData)(vlSelfRef.__PVT__muxed_id))), 0U, 12)));
    VL_COND_WIWW(108, __Vtemp_10, __Vtemp_9, __Vtemp_7, __Vtemp_8);
    VL_AND_W(4, vlSelfRef.__PVT__rddata_statreg_req_ph3, __Vtemp_6, __Vtemp_10);
    vlSelfRef.__PVT__was_prelastresp_read_snp_ph3 = 
        (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x1aU));
    vlSelfRef.__PVT__moving_ownerp_id_ph3 = (0x7fU 
                                             & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x32U, 7));
    vlSelfRef.__PVT__moving_cache_st_ph3 = (7U & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x39U, 3));
    vlSelfRef.__PVT__was_prelastresp_atom_wr_result_p1_ph3 
        = (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x59U));
    vlSelfRef.__PVT__got_compack_ph3 = (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x4eU));
    vlSelfRef.__PVT__has_sent_compcmo_ph3_wrcmo = (1U 
                                                   & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x6fU));
    vlSelfRef.__PVT__stored_dbid_from_slavemem_ph3 
        = (0xfffU & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x3fU, 12));
    vlSelfRef.__PVT__stored_dbid_from_slc_ph3 = (0xfffU 
                                                 & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x78U, 12));
    vlSelfRef.__PVT__dat_opcode_write_data_ph3 = (0xfU 
                                                  & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x84U, 4));
    vlSelfRef.__PVT__has_sent_comp_ph3_wrcmo = (1U 
                                                & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x6eU));
    vlSelfRef.__PVT__compcmo_resperr_ph3 = (3U & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x76U, 2));
    vlSelfRef.__PVT__pkt_already_forwarded_snp_ph3 
        = (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x50U));
    vlSelfRef.__PVT__pkt_already_forwarded_mem_ph3 
        = (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x51U));
    vlSelfRef.__PVT__snp_resp_stored_ph3 = (7U & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x73U, 3));
    vlSelfRef.__PVT__compfifo_index_ic_data_ph3 = (0x1fU 
                                                   & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0xbU, 5));
    vlSelfRef.__PVT__compfifo_index_ic_ph3 = (0x1fU 
                                              & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x10U, 5));
    vlSelfRef.__PVT__compfifo_index_mm_ph3 = (0x1fU 
                                              & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 6U, 5));
    vlSelfRef.__PVT__gotresp_earlier_ic_ph3 = (1U & 
                                               VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x1bU));
    vlSelfRef.__PVT__retry_pending_ph3 = (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x5aU));
    vlSelfRef.__PVT__retry_pcrdtype_ph3 = (0xfU & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x5bU, 4));
    vlSelfRef.__PVT__dat_resp_write_data_ph3 = (7U 
                                                & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x70U, 3));
    vlSelfRef.__PVT__gotwrdata_earlier_ic_ph3 = (1U 
                                                 & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x16U));
    vlSelfRef.__PVT__moving_share_vect_ph3 = (0x3fffffU 
                                              & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x1cU, 22));
    vlSelfRef.__PVT__respfield_ic_src2or4_ph3 = (7U 
                                                 & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x17U, 3));
    vlSelfRef.__PVT__first_RespErr_ph3 = (3U & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x53U, 2));
    vlSelfRef.__PVT__comp_resperr_ph3 = (3U & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x69U, 2));
    vlSelfRef.__PVT__last_read_snp_sent_ph3 = (1U & 
                                               VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x4fU));
    vlSelfRef.__PVT__was_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo 
        = (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x6cU));
    vlSelfRef.__PVT__was_prelastresp_before_sending_noncachealbe_wrdat_ph3_wrcmo 
        = (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x6dU));
    vlSelfRef.__PVT__readreceipt_cnt_resp_ph3 = (1U 
                                                 & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x56U));
    vlSelfRef.__PVT__compcmo_cnt_resp_ph3 = (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x67U));
    vlSelfRef.__PVT__was_prelastresp_write_comp_ph3_cmo 
        = (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x65U));
    vlSelfRef.__PVT__was_prelastresp_wr_uniq_ptl_ph3 
        = (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x61U));
    vlSelfRef.__PVT__was_prelastresp_write_dbid_ph3_cmo 
        = (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x64U));
    vlSelfRef.__PVT__was_prelastresp_write_compdbid_ph3_cmo 
        = (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x63U));
    vlSelfRef.__PVT__was_prelastresp_before_sending_wrreq_ph3_wrcmo 
        = (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x6bU));
    vlSelfRef.__PVT__comp_slc_cnt_resp_ph3 = (1U & 
                                              VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x58U));
    vlSelfRef.__PVT__got_mem_data_earlier_ph3 = (1U 
                                                 & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x66U));
    vlSelfRef.__PVT__was_lastresp_dataless_snpdataptl_ph3 
        = (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x68U));
    vlSelfRef.__PVT__atmo_state_ph3 = (3U & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x5fU, 2));
    vlSelfRef.__PVT__was_prelastresp_check_cacheline_ph3_cmo 
        = (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x62U));
    vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3 = (1U 
                                                   & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x15U));
    vlSelfRef.__PVT__comp_cnt_resp_ph3 = (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x57U));
    vlSelfRef.__PVT__ic_resp_cnt_ph3_from_respreg = 
        (0x1fU & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 1U, 5));
    vlSelfRef.__PVT__first_resp_ph3 = (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x52U));
    vlSelfRef.__PVT__dbid_cnt_ph3 = (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x4dU));
    vlSelfRef.__PVT__gotptldata_earlier_ic_ph3 = (1U 
                                                  & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x3cU));
    vlSelfRef.__PVT__mmem_resp_cnt_ph3 = (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0U));
    vlSelfRef.__PVT__compack_cnt_resp_ph3 = (1U & VL_BITSEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x55U));
    vlSelfRef.__PVT__compdbid_cnt_ph3 = (3U & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x4bU, 2));
    vlSelfRef.__PVT__wrdata_cnt_resp_ph3 = (3U & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, 0x3dU, 2));
    vlSelfRef.__PVT__origreq_ccid_ph3 = (3U & VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0U, 2));
    vlSelfRef.__PVT__origreq_txnid_ph3 = (0xfffU & 
                                          VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x14U, 12));
    vlSelfRef.__PVT__origreq_tgt_id_ph3 = (0x7ffU & 
                                           VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x22U, 11));
    vlSelfRef.__PVT__origreq_qos_ph3 = (0xfU & VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x2fU, 4));
    vlSelfRef.__PVT__origreq_ns_ph3 = (1U & VL_BITSEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x55U));
    vlSelfRef.__PVT__origreq_memattr_ph3 = (0xfU & 
                                            VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x56U, 4));
    vlSelfRef.__PVT__orig_pshare_cnt_ph3 = (0x1fU & 
                                            VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x3cU, 5));
    vlSelfRef.__PVT__origreq_lpid_ph3 = (0x1fU & VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x50U, 5));
    vlSelfRef.__PVT__origreq_size_ph3 = (7U & VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x4aU, 3));
    vlSelfRef.__PVT__origreq_src_id_ph3 = (0x7ffU & 
                                           VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 9U, 11));
    vlSelfRef.__PVT__pendingq_index_resp_ph3 = (0x3fU 
                                                & VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x33U, 6));
    vlSelfRef.__PVT__origreq_excl_pass_ph3 = (1U & 
                                              VL_BITSEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x4eU));
    vlSelfRef.__PVT__origreq_invalid_addr = (1U & VL_BITSEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x4dU));
    vlSelfRef.__PVT__origreq_reqid_matches_sharevec_ph3 
        = (1U & VL_BITSEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x48U));
    vlSelfRef.__PVT__origreq_snpattr_ph3 = (1U & VL_BITSEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x2eU));
    vlSelfRef.__PVT__origreq_apply_dmt_ph3 = (1U & 
                                              VL_BITSEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x5aU));
    vlSelfRef.__PVT__origreq_excl_ph3 = (1U & VL_BITSEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x4fU));
    vlSelfRef.__PVT__origreq_invalidate_ph3 = (1U & 
                                               VL_BITSEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x49U));
    vlSelfRef.__PVT__origreq_may_apply_dct_ph3 = (1U 
                                                  & VL_BITSEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x5bU));
    vlSelfRef.__PVT__origreq_cacheable_bit_ph3 = (1U 
                                                  & VL_BITSEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x2dU));
    vlSelfRef.__PVT__origreq_order_ph3 = (3U & VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x20U, 2));
    vlSelfRef.__PVT__origreq_reqid_matches_ownerpid_ph3 
        = (1U & VL_BITSEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x47U));
    vlSelfRef.__PVT__origreq_expcompack_bit_resp_ph3 
        = (1U & VL_BITSEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x46U));
    vlSelfRef.__PVT__ic_resp_cnt_ph3_from_reqreg = 
        (0x1fU & VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x41U, 5));
    vlSelfRef.__PVT__orig_cachest_ph3 = (7U & VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x39U, 3));
    vlSelfRef.__PVT__origreq_opcode_ph3 = (0x7fU & 
                                           VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 2U, 7));
    vlSelfRef.__PVT__new_got_compack_ph4_nxt = vlSelfRef.__PVT__got_compack_ph3;
    if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
         & (IData)(vlSelfRef.__PVT__opcode_compack_resp_ph3))) {
        vlSelfRef.__PVT__new_got_compack_ph4_nxt = 1U;
    }
    vlSelfRef.__PVT__new_dbid_from_slavemem_ph4_nxt 
        = vlSelfRef.__PVT__stored_dbid_from_slavemem_ph3;
    vlSelfRef.__PVT__dbid_from_slavemem_ph3 = vlSelfRef.__PVT__stored_dbid_from_slavemem_ph3;
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (~ VL_BITSEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x49U))) 
         & ((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
            | (IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3)))) {
        vlSelfRef.__PVT__new_dbid_from_slavemem_ph4_nxt 
            = vlSelfRef.__PVT__cmd_ph3_rsp_dbid;
        vlSelfRef.__PVT__dbid_from_slavemem_ph3 = vlSelfRef.__PVT__cmd_ph3_rsp_dbid;
    }
    vlSelfRef.__PVT__new_dbid_from_slc_ph4_nxt = vlSelfRef.__PVT__stored_dbid_from_slc_ph3;
    vlSelfRef.__PVT__dbid_from_slc_ph3 = vlSelfRef.__PVT__stored_dbid_from_slc_ph3;
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & VL_BITSEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x49U)) 
         & ((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
            | (IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3)))) {
        vlSelfRef.__PVT__new_dbid_from_slc_ph4_nxt 
            = vlSelfRef.__PVT__cmd_ph3_rsp_dbid;
        vlSelfRef.__PVT__dbid_from_slc_ph3 = vlSelfRef.__PVT__cmd_ph3_rsp_dbid;
    }
    vlSelfRef.__PVT__cmd_ph4_dat_opcode_nxt = vlSelfRef.__PVT__dat_opcode_write_data_ph3;
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
         & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
              | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
             | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
            | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        vlSelfRef.__PVT__cmd_ph4_dat_opcode_nxt = vlSelfRef.__PVT__cmd_ph3_dat_opcode;
    }
    vlSelfRef.__PVT__new_compcmo_resperr_ph4_nxt = vlSelfRef.__PVT__compcmo_resperr_ph3;
    if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_CompCMO_ph3))) {
        vlSelfRef.__PVT__new_compcmo_resperr_ph4_nxt 
            = (3U & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x2bU, 2));
    }
    vlSelfRef.__PVT__new_compfifo_index_ic_data_ph4_nxt 
        = vlSelfRef.__PVT__compfifo_index_ic_data_ph3;
    if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
         & ((IData)(vlSelfRef.__PVT__opcode_snprespdata_ptldata_ph3) 
            | (IData)(vlSelfRef.__PVT__opcode_snprespdatafwd_ph3)))) {
        vlSelfRef.__PVT__new_compfifo_index_ic_data_ph4_nxt 
            = vlSelfRef.__PVT__compbuff_num_1st_ph3;
    }
    vlSelfRef.__PVT__new_compfifo_index_ic_ph4_nxt 
        = vlSelfRef.__PVT__compfifo_index_ic_ph3;
    if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
         & ((IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph3) 
            | (IData)(vlSelfRef.__PVT__cmdq_src0_SnpRespFwd_ph3)))) {
        vlSelfRef.__PVT__new_compfifo_index_ic_ph4_nxt 
            = vlSelfRef.__PVT__compbuff_num_1st_ph3;
    }
    vlSelfRef.__PVT__new_gotresp_earlier_ic_ph4_nxt 
        = vlSelfRef.__PVT__gotresp_earlier_ic_ph3;
    if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
         & ((IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph3) 
            | (IData)(vlSelfRef.__PVT__cmdq_src0_SnpRespFwd_ph3)))) {
        vlSelfRef.__PVT__new_gotresp_earlier_ic_ph4_nxt = 1U;
    }
    vlSelfRef.__PVT__new_retry_pending_ph4_nxt = vlSelfRef.__PVT__retry_pending_ph3;
    vlSelfRef.__PVT__new_retry_pcrdtype_ph4_nxt = vlSelfRef.__PVT__retry_pcrdtype_ph3;
    if ((((IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3) 
          & (~ (IData)(vlSelfRef.__PVT__retryack_match))) 
         & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp))) {
        vlSelfRef.__PVT__new_retry_pending_ph4_nxt = 1U;
        vlSelfRef.__PVT__new_retry_pcrdtype_ph4_nxt 
            = (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4));
    } else if ((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                 & (IData)(vlSelfRef.__PVT__pcrdgrant_match)) 
                & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp))) {
        vlSelfRef.__PVT__new_retry_pending_ph4_nxt = 0U;
        vlSelfRef.__PVT__new_retry_pcrdtype_ph4_nxt = 0U;
    }
    vlSelfRef.__PVT__cmd_ph4_dat_resp_write_data_nxt 
        = vlSelfRef.__PVT__dat_resp_write_data_ph3;
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA))) {
        vlSelfRef.__PVT__cmd_ph4_dat_resp_write_data_nxt 
            = (7U & VL_SEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x37U, 3));
    }
    vlSelfRef.__PVT__new_gotwrdata_earlier_ic_ph4_nxt 
        = vlSelfRef.__PVT__gotwrdata_earlier_ic_ph3;
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
         & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
              | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
             | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
            | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        vlSelfRef.__PVT__new_gotwrdata_earlier_ic_ph4_nxt = 1U;
    }
    vlSelfRef.__PVT__moving_share_vect_m_ph3 = vlSelfRef.__PVT__moving_share_vect_ph3;
    vlSelfRef.__PVT__new_readreceipt_cnt_resp_ph4_nxt 
        = vlSelfRef.__PVT__readreceipt_cnt_resp_ph3;
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__opcode_readreceipt_ph3)) 
         & (IData)(vlSelfRef.__PVT__readreceipt_cnt_resp_ph3))) {
        vlSelfRef.__PVT__new_readreceipt_cnt_resp_ph4_nxt = 0U;
    }
    vlSelfRef.__PVT__new_compcmo_cnt_resp_ph4_nxt = vlSelfRef.__PVT__compcmo_cnt_resp_ph3;
    if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_CompCMO_ph3))) {
        vlSelfRef.__PVT__new_compcmo_cnt_resp_ph4_nxt = 0U;
    }
    vlSelfRef.__PVT__new_got_mem_data_earlier_ph4_nxt 
        = vlSelfRef.__PVT__got_mem_data_earlier_ph3;
    if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
         & (IData)(vlSelfRef.__PVT__cmdq_src1_ph3))) {
        vlSelfRef.__PVT__new_got_mem_data_earlier_ph4_nxt = 1U;
    }
    vlSelfRef.__PVT__itis_stage2_atmo_complete_ph3 
        = (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
            & (3U == (IData)(vlSelfRef.__PVT__cmd_ph3_dat_opcode))) 
           & (2U == (IData)(vlSelfRef.__PVT__atmo_state_ph3)));
    vlSelfRef.__PVT__pd_bit_ph3 = (((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                                    & VL_BITSEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x39U)) 
                                   | (((~ (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                       & (IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3)) 
                                      & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__respfield_ic_src2or4_ph3), 2U)));
    vlSelfRef.__PVT__new_got_snpdata_earlier_ic_ph4_nxt 
        = vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3;
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
         & (((1U == (IData)(vlSelfRef.__PVT__cmd_ph3_dat_opcode)) 
             | (5U == (IData)(vlSelfRef.__PVT__cmd_ph3_dat_opcode))) 
            | (6U == (IData)(vlSelfRef.__PVT__cmd_ph3_dat_opcode))))) {
        vlSelfRef.__PVT__new_got_snpdata_earlier_ic_ph4_nxt = 1U;
    }
    vlSelfRef.__PVT__cmd_ph4_snp_resp_nxt = vlSelfRef.__PVT__snp_resp_stored_ph3;
    if (((~ (IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3)) 
         & ((IData)(vlSelfRef.__PVT__opcode_snprespdata_ptldata_ph3) 
            | (IData)(vlSelfRef.__PVT__opcode_snprespdatafwd_ph3)))) {
        vlSelfRef.__PVT__cmd_ph4_snp_resp_nxt = (7U 
                                                 & VL_SEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x37U, 3));
    } else if (((~ (IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3)) 
                & ((IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph3) 
                   | (IData)(vlSelfRef.__PVT__cmdq_src0_SnpRespFwd_ph3)))) {
        vlSelfRef.__PVT__cmd_ph4_snp_resp_nxt = (7U 
                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x2dU, 3));
    }
    vlSelfRef.__PVT__new_respfield_ic_src2or4_ph4_nxt 
        = vlSelfRef.__PVT__respfield_ic_src2or4_ph3;
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA))) {
        vlSelfRef.__PVT__new_respfield_ic_src2or4_ph4_nxt 
            = (7U & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x37U, 3));
    } else if (((~ (IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3)) 
                & ((IData)(vlSelfRef.__PVT__opcode_snprespdata_ptldata_ph3) 
                   | (IData)(vlSelfRef.__PVT__opcode_snprespdatafwd_ph3)))) {
        vlSelfRef.__PVT__new_respfield_ic_src2or4_ph4_nxt 
            = (7U & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x37U, 3));
    } else if (((~ (IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3)) 
                & ((IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph3) 
                   | (IData)(vlSelfRef.__PVT__cmdq_src0_SnpRespFwd_ph3)))) {
        vlSelfRef.__PVT__new_respfield_ic_src2or4_ph4_nxt 
            = (7U & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x2dU, 3));
    }
    vlSelfRef.__PVT__snp_resp_ph3 = 7U;
    if ((((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
          | (IData)(vlSelfRef.__PVT__cmdq_src1_ph3)) 
         | (IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3))) {
        vlSelfRef.__PVT__snp_resp_ph3 = vlSelfRef.__PVT__respfield_ic_src2or4_ph3;
    } else if (((IData)(vlSelfRef.__PVT__opcode_snprespdata_ptldata_ph3) 
                | (IData)(vlSelfRef.__PVT__opcode_snprespdatafwd_ph3))) {
        vlSelfRef.__PVT__snp_resp_ph3 = (7U & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x37U, 3));
    } else if (((IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph3) 
                | (IData)(vlSelfRef.__PVT__cmdq_src0_SnpRespFwd_ph3))) {
        vlSelfRef.__PVT__snp_resp_ph3 = (7U & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x2dU, 3));
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA))) {
        vlSelfRef.__PVT__snp_resp_ph3 = (7U & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x37U, 3));
    }
    vlSelfRef.__PVT__new_gotptldata_earlier_ic_ph4_nxt 
        = vlSelfRef.__PVT__gotptldata_earlier_ic_ph3;
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
         & (5U == (IData)(vlSelfRef.__PVT__cmd_ph3_dat_opcode)))) {
        vlSelfRef.__PVT__new_gotptldata_earlier_ic_ph4_nxt = 1U;
    }
    vlSelfRef.__PVT__new_compack_cnt_resp_ph4_nxt = vlSelfRef.__PVT__compack_cnt_resp_ph3;
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & ((IData)(vlSelfRef.__PVT__cmdq_src0_CompAckResp_ph3) 
             | ((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)))) 
         & (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))) {
        vlSelfRef.__PVT__new_compack_cnt_resp_ph4_nxt = 0U;
    }
    vlSelfRef.__PVT__itis_lastresp_ph3_wrcmo = (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                 & ((IData)(vlSelfRef.__PVT__was_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo) 
                                                    | (IData)(vlSelfRef.__PVT__was_prelastresp_before_sending_noncachealbe_wrdat_ph3_wrcmo))) 
                                                & (((IData)(vlSelfRef.__PVT__cmdq_src0_CompCMO_ph3) 
                                                    & ((0U 
                                                        == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3)) 
                                                       | (~ (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)))) 
                                                   | ((IData)(vlSelfRef.__PVT__cmdq_src0_Comp_ph3) 
                                                      & (~ (IData)(vlSelfRef.__PVT__compcmo_cnt_resp_ph3)))));
    vlSelfRef.__PVT__itis_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo 
        = (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
            & (IData)(vlSelfRef.__PVT__was_prelastresp_before_sending_wrreq_ph3_wrcmo)) 
           & (((((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                 & ((~ (IData)(vlSelfRef.__PVT__comp_slc_cnt_resp_ph3)) 
                    | (IData)(vlSelfRef.__PVT__got_mem_data_earlier_ph3))) 
                | ((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
                   & ((~ (IData)(vlSelfRef.__PVT__comp_slc_cnt_resp_ph3)) 
                      | (IData)(vlSelfRef.__PVT__got_mem_data_earlier_ph3)))) 
               | ((IData)(vlSelfRef.__PVT__cmdq_src1_ph3) 
                  & ((0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3)) 
                     | (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))))) 
              | (((IData)(vlSelfRef.__PVT__cmdq_src0_Comp_ph3) 
                  & VL_BITSEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x49U)) 
                 & ((0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3)) 
                    | (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))))));
    vlSelfRef.__PVT__new_wrdata_cnt_resp_ph4_nxt = vlSelfRef.__PVT__wrdata_cnt_resp_ph3;
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
         & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
              | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
             | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
            | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
        __Vtemp_11 = (3U & ((IData)(vlSelfRef.__PVT__new_wrdata_cnt_resp_ph4_nxt) 
                            - (IData)(1U)));
        vlSelfRef.__PVT__new_wrdata_cnt_resp_ph4_nxt 
            = __Vtemp_11;
    }
    vlSelfRef.__PVT__final_compcmo_resperr_ph3 = vlSelfRef.__PVT__compcmo_resperr_ph3;
    if (vlSelfRef.__PVT__origreq_invalid_addr) {
        vlSelfRef.__PVT__final_compcmo_resperr_ph3 = 3U;
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                & (IData)(vlSelfRef.__PVT__cmdq_src0_CompCMO_ph3))) {
        vlSelfRef.__PVT__final_compcmo_resperr_ph3 
            = (3U & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x2bU, 2));
    }
    vlSelfRef.__PVT__cmd_ph3_snprespfwded_dct_rsp = 
        ((IData)(vlSelfRef.__PVT__origreq_may_apply_dct_ph3) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_SnpRespFwd_ph3));
    vlSelfRef.__PVT__cmd_ph3_snprespdatafwded_dct_rsp 
        = ((IData)(vlSelfRef.__PVT__origreq_may_apply_dct_ph3) 
           & (IData)(vlSelfRef.__PVT__opcode_snprespdatafwd_ph3));
    vlSelfRef.__PVT__origreq_ordered_write_ph3 = ((2U 
                                                   == (IData)(vlSelfRef.__PVT__origreq_order_ph3)) 
                                                  & (IData)(vlSelfRef.__PVT__origreq_expcompack_bit_resp_ph3));
    vlSelfRef.__PVT__ic_resp_cnt_ph3 = ((IData)(vlSelfRef.__PVT__first_resp_ph3)
                                         ? (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3_from_respreg)
                                         : (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3_from_reqreg));
    vlSelfRef.__PVT__orig_cachest_dirty_ph3 = (3U == 
                                               (3U 
                                                & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__orig_cachest_ph3), 0U, 2)));
    vlSelfRef.__PVT__orig_cachest_inv_ph3 = (1U & (~ 
                                                   VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__orig_cachest_ph3), 0U)));
    vlSelfRef.__PVT__orig_cachest_sc_ph3 = (5U == (IData)(vlSelfRef.__PVT__orig_cachest_ph3));
    vlSelfRef.__PVT__orig_cachest_sd_ph3 = (7U == (IData)(vlSelfRef.__PVT__orig_cachest_ph3));
    vlSelfRef.__PVT__orig_cachest_ud_ph3 = (3U == (IData)(vlSelfRef.__PVT__orig_cachest_ph3));
    vlSelfRef.__PVT__orig_cachest_uc_ph3 = (1U == (IData)(vlSelfRef.__PVT__orig_cachest_ph3));
    vlSelfRef.__PVT__orig_req_wrback_wrcln_ph3 = ((
                                                   ((0x17U 
                                                     == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3)) 
                                                    | (0x16U 
                                                       == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                                   | (0x1aU 
                                                      == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                                  | (0x1bU 
                                                     == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3)));
    vlSelfRef.__PVT__orig_wr_evict_full_ph3 = (0x15U 
                                               == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_wr_cl_ph3 = ((0x17U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3)) 
                                       | (0x16U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3)));
    vlSelfRef.__PVT__origreq_excl_ld_snp_ph3 = ((IData)(vlSelfRef.__PVT__origreq_excl_ph3) 
                                                & (((1U 
                                                     == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3)) 
                                                    | (2U 
                                                       == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                                   | (0x26U 
                                                      == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))));
    vlSelfRef.__PVT__origreq_excl_ld_nonsnp_ph3 = ((IData)(vlSelfRef.__PVT__origreq_excl_ph3) 
                                                   & (4U 
                                                      == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3)));
    vlSelfRef.__PVT__orig_make_u_ph3 = (0xcU == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_req_wruniq_zero_ph3 = (0x43U 
                                                 == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_req_wruniq_full_ph3 = (0x19U 
                                                 == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_req_wr_cb_ph3 = (((((0x15U 
                                               == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3)) 
                                              | (0x16U 
                                                 == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                             | (0x17U 
                                                == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                            | (0x1aU 
                                               == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                           | (0x1bU 
                                              == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3)));
    vlSelfRef.__PVT__orig_req_wr_snp_ph3 = ((((((((0x15U 
                                                   == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3)) 
                                                  | (0x16U 
                                                     == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                                 | (0x17U 
                                                    == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                                | (0x18U 
                                                   == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                               | (0x19U 
                                                  == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                              | (0x43U 
                                                 == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                             | (0x1aU 
                                                == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                            | (0x1bU 
                                               == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3)));
    vlSelfRef.__PVT__orig_req_wr_nosnp_ph3 = (((0x1cU 
                                                == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3)) 
                                               | (0x1dU 
                                                  == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                              | (0x44U 
                                                 == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3)));
    vlSelfRef.__PVT__orig_read_nosnp_ph3 = (4U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_req_wruniq_ptl_ph3 = (0x18U 
                                                == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_req_wruniquefl_clean_s_ph3 
        = (0x54U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_req_wruniqueptl_clean_s_ph3 
        = (0x64U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_req_wrbackfl_clean_i_ph3 
        = (0x59U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_req_wrbackfl_clean_s_ph3 
        = (0x58U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3 
        = (0x5cU == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_req_wrnosnpptl_clean_i_ph3 
        = (0x61U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_req_wrnosnpptl_clean_s_ph3 
        = (0x60U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_req_wrnosnpfl_clean_i_ph3 
        = (0x51U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_req_wrnosnpfl_clean_s_ph3 
        = (0x50U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_make_i_ph3 = (0xaU == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_clean_i_ph3 = (9U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_clean_s_ph3 = (8U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_req_wr_nosnp_zero_ph3 = (0x44U 
                                                   == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_req_wr_nosnp_full_ph3 = (0x1dU 
                                                   == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_req_wr_nosnp_ptl_ph3 = (0x1cU 
                                                  == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_clean_u_ph3 = (0xbU == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_read_s_ph3 = (1U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_read_u_ph3 = (7U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_read_pu_ph3 = (0x4cU == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_read_o_ph3 = (3U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_read_c_ph3 = (2U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_read_notsd_ph3 = (0x26U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_makeread_u_ph3 = (0x41U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3));
    vlSelfRef.__PVT__orig_req_atom_ph3 = ((((((((((
                                                   ((((((((0x28U 
                                                           == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3)) 
                                                          | (0x29U 
                                                             == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                                         | (0x2aU 
                                                            == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                                        | (0x2bU 
                                                           == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                                       | (0x2cU 
                                                          == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                                      | (0x2dU 
                                                         == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                                     | (0x2eU 
                                                        == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                                    | (0x2fU 
                                                       == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                                   | (0x30U 
                                                      == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                                  | (0x31U 
                                                     == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                                 | (0x32U 
                                                    == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                                | (0x33U 
                                                   == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                               | (0x34U 
                                                  == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                              | (0x35U 
                                                 == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                             | (0x36U 
                                                == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                            | (0x37U 
                                               == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                           | (0x38U 
                                              == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3))) 
                                          | (0x39U 
                                             == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3)));
    vlSelfRef.__PVT__moving_share_vect_m_qual_ph3 = vlSelfRef.__PVT__moving_share_vect_m_ph3;
    vlSelfRef.__PVT__snp_resp_state_inv_ph3 = (0U == 
                                               (3U 
                                                & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__snp_resp_ph3), 0U, 2)));
    vlSelfRef.__PVT__was_prelastresp_before_sending_cacheable_wrdat_ph4_wrcmo_nxt 
        = vlSelfRef.__PVT__was_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo;
    if (vlSelfRef.__PVT__itis_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo) {
        vlSelfRef.__PVT__was_prelastresp_before_sending_cacheable_wrdat_ph4_wrcmo_nxt = 1U;
    }
    vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3 
        = ((IData)(vlSelfRef.__PVT__cmd_ph3_snprespfwded_dct_rsp) 
           | (IData)(vlSelfRef.__PVT__cmd_ph3_snprespdatafwded_dct_rsp));
    vlSelfRef.__PVT__itis_stage2_atmo_rsp_ptl_ph3 = 
        (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (1U == (IData)(vlSelfRef.__PVT__atmo_state_ph3))) 
         & ((1U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3)) 
            & ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
               | (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3))));
    vlSelfRef.__PVT__itis_stage2_atmo_rsp_ph3 = (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                  & (1U 
                                                     == (IData)(vlSelfRef.__PVT__atmo_state_ph3))) 
                                                 & (((1U 
                                                      == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3)) 
                                                     & ((IData)(vlSelfRef.__PVT__opcode_snprespdata_ph3) 
                                                        | (IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3))) 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                                                        | (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))));
    vlSelfRef.__PVT__new_snpresp_cnt_resp_ph4_nxt = vlSelfRef.__PVT__ic_resp_cnt_ph3;
    vlSelfRef.__PVT__new_first_resp_ph4_nxt = vlSelfRef.__PVT__first_resp_ph3;
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (0U != (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        vlSelfRef.__PVT__new_snpresp_cnt_resp_ph4_nxt 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3) 
                        - (IData)(1U)));
        vlSelfRef.__PVT__new_first_resp_ph4_nxt = 1U;
    }
    vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_rsp_ph3 
        = (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
            & (1U == (IData)(vlSelfRef.__PVT__atmo_state_ph3))) 
           & ((1U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3)) 
              & (((IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph3) 
                  & (~ (IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3))) 
                 | ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                    | (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))));
    vlSelfRef.__PVT__drop_write_data_to_slc = ((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                               & (((IData)(vlSelfRef.__PVT__orig_req_wrback_wrcln_ph3) 
                                                   & (((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                                                       & (~ 
                                                          VL_BITSEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x39U))) 
                                                      | ((~ (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                                         & (~ 
                                                            VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__respfield_ic_src2or4_ph3), 2U))))) 
                                                  | ((IData)(vlSelfRef.__PVT__orig_wr_evict_full_ph3) 
                                                     & (((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                                                         & (~ 
                                                            VL_REDOR_I(
                                                                       (7U 
                                                                        & VL_SEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x37U, 3))))) 
                                                        | ((~ (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                                           & (~ 
                                                              VL_REDOR_I((IData)(vlSelfRef.__PVT__respfield_ic_src2or4_ph3))))))));
    vlSelfRef.__PVT__itis_lastresp_ph3_wr_uniq_zero 
        = (((IData)(vlSelfRef.__PVT__orig_req_wruniq_zero_ph3) 
            & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
           & ((((IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph3) 
                & (1U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
               & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
              | ((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
                 & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3)))));
    vlSelfRef.__PVT__itis_lastresp_ph3_wr_uniq_fl = 
        (((IData)(vlSelfRef.__PVT__orig_req_wruniq_full_ph3) 
          & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
         & ((((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                  & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                 & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
               | ((((IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph3) 
                    & (1U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                   & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                  & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3)))) 
              | (((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
                  & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                 & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3)))) 
             & ((~ (IData)(vlSelfRef.__PVT__origreq_ordered_write_ph3)) 
                | ((IData)(vlSelfRef.__PVT__origreq_ordered_write_ph3) 
                   & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))))) 
            | ((IData)(vlSelfRef.__PVT__origreq_ordered_write_ph3) 
               & (((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                     & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                    & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                   & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                  | ((((IData)(vlSelfRef.__PVT__cmdq_src0_CompAckResp_ph3) 
                       & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                      & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                     & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3)))))));
    vlSelfRef.__PVT__itis_lastresp_ph3_wr_cb = (((IData)(vlSelfRef.__PVT__orig_req_wr_cb_ph3) 
                                                 & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                                                & ((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                                                       & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA)) 
                                                      & (0U 
                                                         == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                                                     & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3))) 
                                                    | (((IData)(vlSelfRef.__PVT__cmdq_src1_ph3) 
                                                        & (0U 
                                                           == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                                                       & (0U 
                                                          == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3)))) 
                                                   | (((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
                                                       & (0U 
                                                          == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                                                      & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))));
    vlSelfRef.__PVT__orig_req_wr_ph3 = ((IData)(vlSelfRef.__PVT__orig_req_wr_snp_ph3) 
                                        | (IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_ph3));
    vlSelfRef.__PVT__itis_lastresp_ph3_wr_uniq_ptl 
        = ((((IData)(vlSelfRef.__PVT__orig_req_wruniq_ptl_ph3) 
             & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
            & (IData)(vlSelfRef.__PVT__was_prelastresp_wr_uniq_ptl_ph3)) 
           & (IData)(vlSelfRef.__PVT__cmdq_src1_ph3));
    vlSelfRef.__PVT__it_maybe_lastresp_ph3_wr_uniq_ptl 
        = ((((IData)(vlSelfRef.__PVT__orig_req_wruniq_ptl_ph3) 
             & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
            & (~ (IData)(vlSelfRef.__PVT__was_prelastresp_wr_uniq_ptl_ph3))) 
           & ((((((((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                       & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                      & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                     & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3))) 
                    | (((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                          & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)) 
                         & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                        & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                       & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))) 
                   | (((((IData)(vlSelfRef.__PVT__opcode_snprespdata_ptldata_ph3) 
                         & (1U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                        & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                       & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                      & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))) 
                  | (((((IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph3) 
                        & (1U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                       & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                      & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                     & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))) 
                 | ((((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
                      & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                     & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                    & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))) 
                | ((((IData)(vlSelfRef.__PVT__cmdq_src1_ph3) 
                     & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                    & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                   & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3)))) 
               & ((~ (IData)(vlSelfRef.__PVT__origreq_ordered_write_ph3)) 
                  | ((IData)(vlSelfRef.__PVT__origreq_ordered_write_ph3) 
                     & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))))) 
              | ((IData)(vlSelfRef.__PVT__origreq_ordered_write_ph3) 
                 & ((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                      & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                     & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3))) 
                    | (((((IData)(vlSelfRef.__PVT__cmdq_src0_CompAckResp_ph3) 
                          & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                         & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                        & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                       & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))))));
    vlSelfRef.__PVT__orig_req_writecopyback_cmo_ph3 
        = (((IData)(vlSelfRef.__PVT__orig_req_wrbackfl_clean_i_ph3) 
            | (IData)(vlSelfRef.__PVT__orig_req_wrbackfl_clean_s_ph3)) 
           | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3));
    vlSelfRef.__PVT__orig_req_writefull_cmo_ph3 = (
                                                   (((((IData)(vlSelfRef.__PVT__orig_req_wrnosnpfl_clean_i_ph3) 
                                                       | (IData)(vlSelfRef.__PVT__orig_req_wrnosnpfl_clean_s_ph3)) 
                                                      | (IData)(vlSelfRef.__PVT__orig_req_wruniquefl_clean_s_ph3)) 
                                                     | (IData)(vlSelfRef.__PVT__orig_req_wrbackfl_clean_i_ph3)) 
                                                    | (IData)(vlSelfRef.__PVT__orig_req_wrbackfl_clean_s_ph3)) 
                                                   | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3));
    vlSelfRef.__PVT__orig_req_writenosnp_cmo_ph3 = 
        ((((IData)(vlSelfRef.__PVT__orig_req_wrnosnpfl_clean_i_ph3) 
           | (IData)(vlSelfRef.__PVT__orig_req_wrnosnpfl_clean_s_ph3)) 
          | (IData)(vlSelfRef.__PVT__orig_req_wrnosnpptl_clean_i_ph3)) 
         | (IData)(vlSelfRef.__PVT__orig_req_wrnosnpptl_clean_s_ph3));
    vlSelfRef.__PVT__itis_prelastresp_write_comp_ph3_cmo 
        = ((((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
               & ((IData)(vlSelfRef.__PVT__orig_clean_i_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_clean_s_ph3))) 
              & (IData)(vlSelfRef.__PVT__origreq_cacheable_bit_ph3)) 
             & (IData)(vlSelfRef.__PVT__was_prelastresp_write_dbid_ph3_cmo)) 
            & (~ (IData)(vlSelfRef.__PVT__was_prelastresp_write_comp_ph3_cmo))) 
           & (IData)(vlSelfRef.__PVT__cmdq_src0_Comp_ph3));
    vlSelfRef.__PVT__itis_prelastresp_write_compdbid_ph3_cmo 
        = ((((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
               & ((IData)(vlSelfRef.__PVT__orig_clean_i_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_clean_s_ph3))) 
              & (IData)(vlSelfRef.__PVT__origreq_cacheable_bit_ph3)) 
             & (IData)(vlSelfRef.__PVT__was_prelastresp_check_cacheline_ph3_cmo)) 
            & (~ (IData)(vlSelfRef.__PVT__was_prelastresp_write_compdbid_ph3_cmo))) 
           & (((((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                 & (~ (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3))) 
                & (1U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
               | ((((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
                    & (2U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                   & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                  & (~ (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)))) 
              | ((((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
                   & (1U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                  & (IData)(vlSelfRef.__PVT__dbid_cnt_ph3)) 
                 & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3))));
    vlSelfRef.__PVT__itis_prelastresp_write_dbid_ph3_cmo 
        = ((((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
               & ((IData)(vlSelfRef.__PVT__orig_clean_i_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_clean_s_ph3))) 
              & (IData)(vlSelfRef.__PVT__origreq_cacheable_bit_ph3)) 
             & (IData)(vlSelfRef.__PVT__was_prelastresp_check_cacheline_ph3_cmo)) 
            & (~ (IData)(vlSelfRef.__PVT__was_prelastresp_write_dbid_ph3_cmo))) 
           & ((((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
               & (1U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
              | ((((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
                   & (2U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                  & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                 & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3))));
    vlSelfRef.__PVT__orig_req_cmo_ph3 = (((IData)(vlSelfRef.__PVT__orig_make_i_ph3) 
                                          | (IData)(vlSelfRef.__PVT__orig_clean_i_ph3)) 
                                         | (IData)(vlSelfRef.__PVT__orig_clean_s_ph3));
    vlSelfRef.__PVT__itis_prelastresp_without_comp_ph3_wr_nosnp_zero 
        = ((((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_zero_ph3) 
             & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
            & (IData)(vlSelfRef.__PVT__use_early_write_response)) 
           & ((((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))) 
               | ((IData)(vlSelfRef.__PVT__cmdq_src0_CompAckResp_ph3) 
                  & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3)))) 
              & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)));
    vlSelfRef.__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp_zero 
        = (((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_zero_ph3) 
            & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
           & (((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
               & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))) 
              | ((IData)(vlSelfRef.__PVT__cmdq_src0_CompAckResp_ph3) 
                 & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3)))));
    vlSelfRef.__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp_zero 
        = (((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_zero_ph3) 
            & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
           & ((((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                & (~ (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3))) 
               & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))) 
              | (((IData)(vlSelfRef.__PVT__cmdq_src0_CompAckResp_ph3) 
                  & (~ (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3)))));
    vlSelfRef.__PVT__itis_prelastresp_comp_is_last_ph3_wr_nosnp_full 
        = (((((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_full_ph3) 
              & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
             & (~ (IData)(vlSelfRef.__PVT__origreq_expcompack_bit_resp_ph3))) 
            & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))) 
           & (((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                 & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
               & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
              | (((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                  & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                 & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3))));
    vlSelfRef.__PVT__itis_wrnosnpfull_send_wr_data_ph3 
        = (((((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_full_ph3) 
              & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
             & (IData)(vlSelfRef.__PVT__origreq_cacheable_bit_ph3)) 
            & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))) 
           & ((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                  & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                 & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
               | (((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                   & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                  & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3))) 
              & (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3)));
    vlSelfRef.__PVT__itis_prelastresp_without_comp_ph3_wr_nosnp_full 
        = (((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_full_ph3) 
            & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
           & (((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                   & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                  & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                 | ((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                      & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                     & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                    & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3)))) 
                | (((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                    & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                   & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3)))) 
               | (((IData)(vlSelfRef.__PVT__cmdq_src0_CompAckResp_ph3) 
                   & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                  & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3)))) 
              & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)));
    vlSelfRef.__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp_full 
        = (((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_full_ph3) 
            & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
           & ((((~ (IData)(vlSelfRef.__PVT__origreq_ordered_write_ph3)) 
                | ((IData)(vlSelfRef.__PVT__origreq_ordered_write_ph3) 
                   & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3)))) 
               & ((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                    & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                   & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                  | ((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
                     & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))))) 
              | ((IData)(vlSelfRef.__PVT__origreq_ordered_write_ph3) 
                 & ((((IData)(vlSelfRef.__PVT__cmdq_src0_CompAckResp_ph3) 
                      & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                     & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                    | (((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3)))))));
    vlSelfRef.__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp_full 
        = (((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_full_ph3) 
            & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
           & (((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                   & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                  & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3))) 
                | (((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                    & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                   & (~ (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)))) 
               & ((~ (IData)(vlSelfRef.__PVT__origreq_ordered_write_ph3)) 
                  | ((IData)(vlSelfRef.__PVT__origreq_ordered_write_ph3) 
                     & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))))) 
              | ((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                     & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                    & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                   & (~ (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3))) 
                  | ((((IData)(vlSelfRef.__PVT__cmdq_src0_CompAckResp_ph3) 
                       & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                      & (~ (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3))) 
                     & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3)))) 
                 & (IData)(vlSelfRef.__PVT__origreq_ordered_write_ph3))));
    vlSelfRef.__PVT__itis_lastresp_nonsnp_excl_store_fail_ph3 
        = ((((((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_full_ph3) 
               | (IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_ptl_ph3)) 
              & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
             & (IData)(vlSelfRef.__PVT__origreq_excl_ph3)) 
            & (~ (IData)(vlSelfRef.__PVT__origreq_excl_pass_ph3))) 
           & (((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                 & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                | (((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                    & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                   & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3)))) 
               | (((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                   & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)) 
                  & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3)))) 
              | ((IData)(vlSelfRef.__PVT__cmdq_src0_CompAckResp_ph3) 
                 & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3)))));
    vlSelfRef.__PVT__itis_prelastresp_comp_is_last_ph3_wr_nosnp_ptl 
        = (((((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_ptl_ph3) 
              & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
             & (~ (IData)(vlSelfRef.__PVT__origreq_expcompack_bit_resp_ph3))) 
            & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))) 
           & ((((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                    & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                   & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                  & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3))) 
                | (((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                      & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)) 
                     & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                    & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                   & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))) 
               | ((((IData)(vlSelfRef.__PVT__cmdq_src1_ph3) 
                    & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                   & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                  & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3)))) 
              | ((((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                   & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                  & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                 & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))));
    vlSelfRef.__PVT__itis_lastresp_comp_ph3_wr_nosnp 
        = (((((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_full_ph3) 
              | (IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_ptl_ph3)) 
             | (IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_zero_ph3)) 
            & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
           & ((((IData)(vlSelfRef.__PVT__cmdq_src0_Comp_ph3) 
                & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
               & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))) 
              & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))));
    vlSelfRef.__PVT__itis_wrnosnpptl_send_wr_data_ph3 
        = (((((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_ptl_ph3) 
              & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
             & (IData)(vlSelfRef.__PVT__origreq_cacheable_bit_ph3)) 
            & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))) 
           & (((((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                     & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                   & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                  & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3))) 
                 | (((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                       & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)) 
                      & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                     & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                    & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))) 
                | ((((IData)(vlSelfRef.__PVT__cmdq_src1_ph3) 
                     & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                    & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                   & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3)))) 
               | ((((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                    & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                   & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                  & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))) 
              & (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3)));
    vlSelfRef.__PVT__itis_prelastresp_without_comp_ph3_wr_nosnp_ptl 
        = (((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_ptl_ph3) 
            & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
           & ((((((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                      & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                     & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                    & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                   & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3))) 
                  | ((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                         & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                       & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))) 
                      & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                     & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))) 
                 | ((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)) 
                       & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                      & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))) 
                     & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                    & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))) 
                | (((((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                      & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                     & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))) 
                    & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                   & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))) 
               | (((((IData)(vlSelfRef.__PVT__cmdq_src1_ph3) 
                     & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                    & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                   & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                  & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3)))) 
              | (((((IData)(vlSelfRef.__PVT__cmdq_src0_CompAckResp_ph3) 
                    & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                   & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                  & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                 & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))));
    vlSelfRef.__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp_ptl 
        = (((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_ptl_ph3) 
            & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
           & ((((~ (IData)(vlSelfRef.__PVT__origreq_ordered_write_ph3)) 
                | ((IData)(vlSelfRef.__PVT__origreq_ordered_write_ph3) 
                   & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3)))) 
               & (((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                       & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                      & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                     & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3))) 
                    | (((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
                        & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                       & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))) 
                   | ((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)) 
                       & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                      & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))) 
                  | (((IData)(vlSelfRef.__PVT__cmdq_src1_ph3) 
                      & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                     & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))))) 
              | ((IData)(vlSelfRef.__PVT__origreq_ordered_write_ph3) 
                 & (((((IData)(vlSelfRef.__PVT__cmdq_src0_CompAckResp_ph3) 
                       & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                      & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                     & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3))) 
                    | ((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                         & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                        & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                       & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))))));
    vlSelfRef.__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp_ptl 
        = (((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_ptl_ph3) 
            & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
           & ((((((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                      & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                     & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                    & (~ (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3))) 
                   & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3))) 
                  | (((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)) 
                       & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                      & (~ (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3))) 
                     & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))) 
                 | ((((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                      & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                     & (~ (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3))) 
                    & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))) 
                | ((((IData)(vlSelfRef.__PVT__cmdq_src1_ph3) 
                     & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                    & (~ (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3))) 
                   & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3)))) 
               & ((~ (IData)(vlSelfRef.__PVT__origreq_ordered_write_ph3)) 
                  | ((IData)(vlSelfRef.__PVT__origreq_ordered_write_ph3) 
                     & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))))) 
              | (((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                      & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                     & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                    & (~ (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3))) 
                   & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3))) 
                  | (((((IData)(vlSelfRef.__PVT__cmdq_src0_CompAckResp_ph3) 
                        & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                       & (~ (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3))) 
                      & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
                     & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))) 
                 & (IData)(vlSelfRef.__PVT__origreq_ordered_write_ph3))));
    vlSelfRef.__PVT__origreq_mayneed_dataxfr_tomm = 
        (((IData)(vlSelfRef.__PVT__orig_cachest_uc_ph3) 
          | (IData)(vlSelfRef.__PVT__orig_cachest_ud_ph3)) 
         & (IData)(vlSelfRef.__PVT__orig_clean_u_ph3));
    vlSelfRef.__PVT__orig_read_su_pu_ph3 = (((IData)(vlSelfRef.__PVT__orig_read_s_ph3) 
                                             | (IData)(vlSelfRef.__PVT__orig_read_u_ph3)) 
                                            | (IData)(vlSelfRef.__PVT__orig_read_pu_ph3));
    vlSelfRef.__PVT__orig_req_read_ocsu_notsd_pu_ph3 
        = ((((((IData)(vlSelfRef.__PVT__orig_read_o_ph3) 
               | (IData)(vlSelfRef.__PVT__orig_read_c_ph3)) 
              | (IData)(vlSelfRef.__PVT__orig_read_s_ph3)) 
             | (IData)(vlSelfRef.__PVT__orig_read_u_ph3)) 
            | (IData)(vlSelfRef.__PVT__orig_read_notsd_ph3)) 
           | (IData)(vlSelfRef.__PVT__orig_read_pu_ph3));
    vlSelfRef.__PVT__resp_outcompdata_resp = 0U;
    if ((((IData)(vlSelfRef.__PVT__orig_make_i_ph3) 
          | (IData)(vlSelfRef.__PVT__orig_clean_i_ph3)) 
         | (IData)(vlSelfRef.__PVT__orig_read_o_ph3))) {
        vlSelfRef.__PVT__resp_outcompdata_resp = 0U;
    } else if (((IData)(vlSelfRef.__PVT__orig_clean_u_ph3) 
                | (IData)(vlSelfRef.__PVT__orig_make_u_ph3))) {
        vlSelfRef.__PVT__resp_outcompdata_resp = 2U;
    } else if ((((IData)(vlSelfRef.__PVT__orig_read_u_ph3) 
                 | (IData)(vlSelfRef.__PVT__orig_read_pu_ph3)) 
                | (IData)(vlSelfRef.__PVT__orig_makeread_u_ph3))) {
        vlSelfRef.__PVT__resp_outcompdata_resp = (((IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3) 
                                                   & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__respfield_ic_src2or4_ph3), 2U))
                                                   ? 6U
                                                   : 
                                                  (((IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3) 
                                                    & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__snp_resp_ph3), 2U))
                                                    ? 6U
                                                    : 2U));
    } else if (((((IData)(vlSelfRef.__PVT__orig_read_c_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_read_s_ph3)) 
                 | (IData)(vlSelfRef.__PVT__orig_read_notsd_ph3)) 
                | ((IData)(vlSelfRef.__PVT__orig_clean_s_ph3) 
                   & (IData)(vlSelfRef.__PVT__origreq_snpattr_ph3)))) {
        if (vlSelfRef.__PVT__orig_cachest_inv_ph3) {
            vlSelfRef.__PVT__resp_outcompdata_resp 
                = ((IData)(vlSelfRef.__PVT__orig_clean_s_ph3)
                    ? 0U : 2U);
        } else if (vlSelfRef.__PVT__orig_cachest_uc_ph3) {
            vlSelfRef.__PVT__resp_outcompdata_resp 
                = ((IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)
                    ? ((0U == (IData)(vlSelfRef.__PVT__snp_resp_ph3))
                        ? ((IData)(vlSelfRef.__PVT__orig_clean_s_ph3)
                            ? 0U : 2U) : ((4U == (IData)(vlSelfRef.__PVT__snp_resp_ph3))
                                           ? ((IData)(vlSelfRef.__PVT__orig_clean_s_ph3)
                                               ? 0U
                                               : (((IData)(vlSelfRef.__PVT__orig_read_s_ph3) 
                                                   | (IData)(vlSelfRef.__PVT__orig_read_notsd_ph3))
                                                   ? 6U
                                                   : 2U))
                                           : ((VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__snp_resp_ph3), 2U) 
                                               & (IData)(vlSelfRef.__PVT__orig_read_s_ph3))
                                               ? 7U
                                               : ((IData)(vlSelfRef.__PVT__orig_clean_s_ph3)
                                                   ? 2U
                                                   : 1U))))
                    : (((IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3) 
                        | (IData)(vlSelfRef.__PVT__gotresp_earlier_ic_ph3))
                        ? ((0U == (IData)(vlSelfRef.__PVT__respfield_ic_src2or4_ph3))
                            ? ((IData)(vlSelfRef.__PVT__orig_clean_s_ph3)
                                ? 0U : 2U) : ((4U == (IData)(vlSelfRef.__PVT__respfield_ic_src2or4_ph3))
                                               ? ((IData)(vlSelfRef.__PVT__orig_clean_s_ph3)
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSelfRef.__PVT__orig_read_s_ph3) 
                                                    | (IData)(vlSelfRef.__PVT__orig_read_notsd_ph3))
                                                    ? 6U
                                                    : 2U))
                                               : ((
                                                   VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__respfield_ic_src2or4_ph3), 2U) 
                                                   & (IData)(vlSelfRef.__PVT__orig_read_s_ph3))
                                                   ? 7U
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__orig_clean_s_ph3)
                                                    ? 2U
                                                    : 1U))))
                        : 2U));
        } else if (vlSelfRef.__PVT__orig_cachest_ud_ph3) {
            vlSelfRef.__PVT__resp_outcompdata_resp 
                = ((0U == (IData)(vlSelfRef.__PVT__snp_resp_ph3))
                    ? ((IData)(vlSelfRef.__PVT__orig_clean_s_ph3)
                        ? 0U : 2U) : ((4U == (IData)(vlSelfRef.__PVT__snp_resp_ph3))
                                       ? ((IData)(vlSelfRef.__PVT__orig_clean_s_ph3)
                                           ? 0U : (
                                                   ((IData)(vlSelfRef.__PVT__orig_read_s_ph3) 
                                                    | (IData)(vlSelfRef.__PVT__orig_read_notsd_ph3))
                                                    ? 6U
                                                    : 2U))
                                       : ((VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__snp_resp_ph3), 2U) 
                                           & (IData)(vlSelfRef.__PVT__orig_read_s_ph3))
                                           ? 7U : ((IData)(vlSelfRef.__PVT__orig_clean_s_ph3)
                                                    ? 2U
                                                    : 1U))));
        } else if (vlSelfRef.__PVT__orig_cachest_sc_ph3) {
            vlSelfRef.__PVT__resp_outcompdata_resp = 1U;
        } else if (vlSelfRef.__PVT__orig_cachest_sd_ph3) {
            vlSelfRef.__PVT__resp_outcompdata_resp 
                = ((2U == (IData)(vlSelfRef.__PVT__orig_pshare_cnt_ph3))
                    ? ((((4U == (IData)(vlSelfRef.__PVT__snp_resp_ph3)) 
                         & ((IData)(vlSelfRef.__PVT__orig_read_notsd_ph3) 
                            | (IData)(vlSelfRef.__PVT__orig_read_s_ph3))) 
                        & (IData)(vlSelfRef.__PVT__origreq_reqid_matches_sharevec_ph3))
                        ? 6U : ((VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__snp_resp_ph3), 2U) 
                                 & (IData)(vlSelfRef.__PVT__orig_read_s_ph3))
                                 ? 7U : (((0U == (3U 
                                                  & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__snp_resp_ph3), 0U, 2))) 
                                          & (IData)(vlSelfRef.__PVT__orig_clean_s_ph3))
                                          ? 2U : 1U)))
                    : ((VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__snp_resp_ph3), 2U) 
                        & (IData)(vlSelfRef.__PVT__orig_read_s_ph3))
                        ? 7U : 1U));
        }
    } else if (vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3) {
        if ((0U == (IData)(vlSelfRef.__PVT__dat_resp_write_data_ph3))) {
            vlSelfRef.__PVT__resp_outcompdata_resp = 0U;
        } else if (((6U == (IData)(vlSelfRef.__PVT__dat_resp_write_data_ph3)) 
                    | (2U == (IData)(vlSelfRef.__PVT__dat_resp_write_data_ph3)))) {
            vlSelfRef.__PVT__resp_outcompdata_resp = 2U;
        } else if ((7U == (IData)(vlSelfRef.__PVT__dat_resp_write_data_ph3))) {
            vlSelfRef.__PVT__resp_outcompdata_resp = 1U;
        } else if ((1U == (IData)(vlSelfRef.__PVT__dat_resp_write_data_ph3))) {
            if ((1U == (IData)(vlSelfRef.__PVT__orig_pshare_cnt_ph3))) {
                vlSelfRef.__PVT__resp_outcompdata_resp = 2U;
            } else if ((2U == (IData)(vlSelfRef.__PVT__orig_pshare_cnt_ph3))) {
                vlSelfRef.__PVT__resp_outcompdata_resp 
                    = ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__snp_resp_stored_ph3), 2U))
                        ? 2U : 1U);
            } else if ((2U < (IData)(vlSelfRef.__PVT__orig_pshare_cnt_ph3))) {
                vlSelfRef.__PVT__resp_outcompdata_resp = 1U;
            }
        }
    }
    vlSelfRef.__PVT__origreq_no_dataxfr = (((IData)(vlSelfRef.__PVT__orig_make_u_ph3) 
                                            | ((IData)(vlSelfRef.__PVT__orig_cachest_sc_ph3) 
                                               & (IData)(vlSelfRef.__PVT__orig_clean_u_ph3))) 
                                           | ((IData)(vlSelfRef.__PVT__orig_makeread_u_ph3) 
                                              & (IData)(vlSelfRef.__PVT__origreq_reqid_matches_sharevec_ph3)));
    vlSelfRef.__PVT__itis_lastresp_atom_wr_result_p2_ph3_comp_is_last 
        = ((((IData)(vlSelfRef.__PVT__orig_req_atom_ph3) 
             & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
            & (0U == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp))) 
           & ((4U == (0x1fU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5))) 
              & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))));
    vlSelfRef.__PVT__itis_atom_txn_data_ph3 = (((IData)(vlSelfRef.__PVT__orig_req_atom_ph3) 
                                                & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                                               & ((((~ 
                                                     VL_REDOR_I(
                                                                (3U 
                                                                 & VL_SEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x6aU, 2)))) 
                                                    & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                                   & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                  & (1U 
                                                     == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              ((((2U 
                                                  == (IData)(vlSelfRef.__PVT__atmo_state_ph3)) 
                                                 & (IData)(vlSelfRef.__PVT__orig_req_atom_ph3)) 
                                                & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                                               & ((IData)(vlSelfRef.__PVT__cmdq_src1_ph3) 
                                                  & (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3))), 
                                              (((1U 
                                                 == (IData)(vlSelfRef.__PVT__atmo_state_ph3)) 
                                                & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                                               & (((1U 
                                                    == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3)) 
                                                   & ((IData)(vlSelfRef.__PVT__opcode_snprespdata_ph3) 
                                                      | (IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3))) 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                                                      | (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))))))))) {
        vlSelfRef.__PVT__itis_atom_init_data_ph3 = 
            ((((1U == (IData)(vlSelfRef.__PVT__atmo_state_ph3)) 
               & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
              & (((1U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3)) 
                  & ((IData)(vlSelfRef.__PVT__opcode_snprespdata_ph3) 
                     | (IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3))) 
                 & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                       | (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3))))) 
             || ((((2U == (IData)(vlSelfRef.__PVT__atmo_state_ph3)) 
                   & (IData)(vlSelfRef.__PVT__orig_req_atom_ph3)) 
                  & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                 & ((IData)(vlSelfRef.__PVT__cmdq_src1_ph3) 
                    & (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3))));
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:3976: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 3976, "");
    }
    vlSelfRef.__PVT__itis_lastresp_ph3_atom_clr_buffer 
        = (((IData)(vlSelfRef.__PVT__orig_req_atom_ph3) 
            & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
           & ((VL_BITSEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x6aU) 
               & (~ VL_BITSEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x68U))) 
              & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)));
    vlSelfRef.__PVT__itis_lastresp_atom_comp_ph3 = 
        (((IData)(vlSelfRef.__PVT__orig_req_atom_ph3) 
          & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
         & ((VL_BITSEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x6bU) 
             & (~ VL_BITSEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x69U))) 
            & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)));
    vlSelfRef.__PVT__itis_lastresp_atom_inidata_ph3 
        = (((IData)(vlSelfRef.__PVT__orig_req_atom_ph3) 
            & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
           & ((VL_BITSEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x6bU) 
               & VL_BITSEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x69U)) 
              & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)));
    vlSelfRef.__PVT__itis_lastresp_atom_wr_result_p2_ph3 
        = ((((IData)(vlSelfRef.__PVT__orig_req_atom_ph3) 
             & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
            & (0U == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp))) 
           & (((6U == (0x1fU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5))) 
               & (~ (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3))) 
              | (5U == (0x1fU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5)))));
    vlSelfRef.__PVT__itis_prelastresp_atom_wr_result_p2_ph3_comp_is_last 
        = ((((IData)(vlSelfRef.__PVT__orig_req_atom_ph3) 
             & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
            & (0U == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp))) 
           & ((6U == (0x1fU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5))) 
              & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)));
    vlSelfRef.__PVT__itis_prelastresp_atom_wr_result_p1_ph3 
        = (((IData)(vlSelfRef.__PVT__orig_req_atom_ph3) 
            & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
           & (((VL_BITSEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x6aU) 
                & VL_BITSEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x68U)) 
               & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
              & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))));
    vlSelfRef.__PVT__itis_stage2_atmo_fetch_txndata_ph3 
        = ((IData)(vlSelfRef.__PVT__itis_stage2_atmo_rsp_ph3) 
           | (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
               & (IData)(vlSelfRef.__PVT__cmdq_src1_ph3)) 
              & (2U == (IData)(vlSelfRef.__PVT__atmo_state_ph3))));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src1_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)), (IData)(vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_rsp_ph3)))))) {
        vlSelfRef.__PVT__new_mmemresp_cnt_resp_ph4_nxt 
            = ((IData)(vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_rsp_ph3) 
               || ((1U & (~ (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                              & (IData)(vlSelfRef.__PVT__cmdq_src1_ph3)) 
                             & (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)))) 
                   && (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)));
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:4300: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.update_mmemresp_cnt_for_ongoing_rsp: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 4300, "");
    }
    vlSelfRef.__PVT__new_was_prelastresp_wr_uniq_ptl_ph4_nxt 
        = vlSelfRef.__PVT__was_prelastresp_wr_uniq_ptl_ph3;
    if (vlSelfRef.__PVT__it_maybe_lastresp_ph3_wr_uniq_ptl) {
        vlSelfRef.__PVT__new_was_prelastresp_wr_uniq_ptl_ph4_nxt = 1U;
    }
    vlSelfRef.__PVT__origreq_got_copybackwrdata_invalid = 0U;
    if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
         & (((IData)(vlSelfRef.__PVT__orig_req_wr_cb_ph3) 
             | (IData)(vlSelfRef.__PVT__orig_req_writecopyback_cmo_ph3)) 
            & (((IData)(vlSelfRef.__PVT__gotwrdata_earlier_ic_ph3) 
                & (0U == (IData)(vlSelfRef.__PVT__dat_resp_write_data_ph3))) 
               | (((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                   & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA)) 
                  & (0U == (7U & VL_SEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x37U, 3)))))))) {
        vlSelfRef.__PVT__origreq_got_copybackwrdata_invalid = 1U;
    }
    vlSelfRef.__PVT__new_comp_resperr_ph4_nxt = vlSelfRef.__PVT__comp_resperr_ph3;
    if ((((((IData)(vlSelfRef.__PVT__cmdq_src0_Comp_ph3) 
            | (IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3)) 
           & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
          & (~ (IData)(vlSelfRef.__PVT__origreq_excl_ph3))) 
         & ((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_ph3) 
            | (IData)(vlSelfRef.__PVT__orig_req_writenosnp_cmo_ph3)))) {
        vlSelfRef.__PVT__new_comp_resperr_ph4_nxt = 
            (3U & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x2bU, 2));
    }
    vlSelfRef.__PVT__itis_prelastresp_before_sending_noncachealbe_wrdat_ph3_wrcmo 
        = ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
             & (IData)(vlSelfRef.__PVT__orig_req_writenosnp_cmo_ph3)) 
            & (~ (IData)(vlSelfRef.__PVT__origreq_cacheable_bit_ph3))) 
           & ((((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                    & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   & ((0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3)) 
                      | (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3)))) 
                  | ((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                       & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                      & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))) 
                     & ((0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3)) 
                        | (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))))) 
                 | ((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                      & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)) 
                     & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))) 
                    & ((0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3)) 
                       | (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))))) 
                | (((IData)(vlSelfRef.__PVT__cmdq_src0_CompAckResp_ph3) 
                    & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                   & ((0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3)) 
                      | (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))))) 
               | (((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                   & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                  & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3)))) 
              | (((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
                  & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3)))));
    vlSelfRef.__PVT__orig_req_write_cmo_ph3 = ((((((IData)(vlSelfRef.__PVT__orig_req_writenosnp_cmo_ph3) 
                                                   | (IData)(vlSelfRef.__PVT__orig_req_wruniquefl_clean_s_ph3)) 
                                                  | (IData)(vlSelfRef.__PVT__orig_req_wruniqueptl_clean_s_ph3)) 
                                                 | (IData)(vlSelfRef.__PVT__orig_req_wrbackfl_clean_i_ph3)) 
                                                | (IData)(vlSelfRef.__PVT__orig_req_wrbackfl_clean_s_ph3)) 
                                               | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3));
    vlSelfRef.__PVT__was_prelastresp_write_comp_ph4_cmo_nxt 
        = vlSelfRef.__PVT__was_prelastresp_write_comp_ph3_cmo;
    if (vlSelfRef.__PVT__itis_prelastresp_write_comp_ph3_cmo) {
        vlSelfRef.__PVT__was_prelastresp_write_comp_ph4_cmo_nxt = 1U;
    }
    vlSelfRef.__PVT__was_prelastresp_write_compdbid_ph4_cmo_nxt 
        = vlSelfRef.__PVT__was_prelastresp_write_compdbid_ph3_cmo;
    if (vlSelfRef.__PVT__itis_prelastresp_write_compdbid_ph3_cmo) {
        vlSelfRef.__PVT__was_prelastresp_write_compdbid_ph4_cmo_nxt = 1U;
    }
    vlSelfRef.__PVT__was_prelastresp_write_dbid_ph4_cmo_nxt 
        = vlSelfRef.__PVT__was_prelastresp_write_dbid_ph3_cmo;
    if (vlSelfRef.__PVT__itis_prelastresp_write_dbid_ph3_cmo) {
        vlSelfRef.__PVT__was_prelastresp_write_dbid_ph4_cmo_nxt = 1U;
    }
    vlSelfRef.__PVT__itis_lastresp_ph3_cmo = ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__orig_req_cmo_ph3)) 
                                               & ((((((IData)(vlSelfRef.__PVT__was_prelastresp_check_cacheline_ph3_cmo) 
                                                      & (~ (IData)(vlSelfRef.__PVT__got_mem_data_earlier_ph3))) 
                                                     & (~ (IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3))) 
                                                    | (IData)(vlSelfRef.__PVT__was_prelastresp_write_compdbid_ph3_cmo)) 
                                                   | (IData)(vlSelfRef.__PVT__was_prelastresp_write_comp_ph3_cmo)) 
                                                  | (~ (IData)(vlSelfRef.__PVT__origreq_cacheable_bit_ph3)))) 
                                              & (IData)(vlSelfRef.__PVT__cmdq_src0_Comp_ph3));
    vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo 
        = (((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__orig_req_cmo_ph3)) 
             & (IData)(vlSelfRef.__PVT__origreq_cacheable_bit_ph3)) 
            & (~ (IData)(vlSelfRef.__PVT__was_prelastresp_check_cacheline_ph3_cmo))) 
           & ((((IData)(vlSelfRef.__PVT__cmdq_src0_Comp_ph3) 
                & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
               | ((IData)(vlSelfRef.__PVT__cmdq_src1_ph3) 
                  & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3)))) 
              | (((IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3) 
                  & (1U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                 & ((~ (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
                    | ((~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)) 
                       & (~ (IData)(vlSelfRef.__PVT__orig_make_i_ph3)))))));
    vlSelfRef.__PVT__itis_prelastresp_comp_is_last_ph3_wr_nosnp 
        = ((IData)(vlSelfRef.__PVT__itis_prelastresp_comp_is_last_ph3_wr_nosnp_full) 
           | (IData)(vlSelfRef.__PVT__itis_prelastresp_comp_is_last_ph3_wr_nosnp_ptl));
    vlSelfRef.__PVT__itis_wrnosnp_send_wr_data_ph3 
        = ((IData)(vlSelfRef.__PVT__itis_wrnosnpptl_send_wr_data_ph3) 
           | (IData)(vlSelfRef.__PVT__itis_wrnosnpfull_send_wr_data_ph3));
    vlSelfRef.__PVT__itis_prelastresp_ph3_wr_nosnp 
        = (((IData)(vlSelfRef.__PVT__itis_prelastresp_without_comp_ph3_wr_nosnp_full) 
            | (IData)(vlSelfRef.__PVT__itis_prelastresp_without_comp_ph3_wr_nosnp_ptl)) 
           | (IData)(vlSelfRef.__PVT__itis_prelastresp_without_comp_ph3_wr_nosnp_zero));
    vlSelfRef.__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp 
        = (((IData)(vlSelfRef.__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp_full) 
            | (IData)(vlSelfRef.__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp_ptl)) 
           | (IData)(vlSelfRef.__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp_zero));
    vlSelfRef.__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp 
        = (((IData)(vlSelfRef.__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp_zero) 
            | (IData)(vlSelfRef.__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp_ptl)) 
           | (IData)(vlSelfRef.__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp_full));
    vlSelfRef.__PVT__itis_lastresp_ph3_wr_all = (((
                                                   (((((((((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wr_cb) 
                                                           | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wr_uniq_fl)) 
                                                          | (IData)(vlSelfRef.__PVT__it_maybe_lastresp_ph3_wr_uniq_ptl)) 
                                                         | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wr_uniq_ptl)) 
                                                        | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wr_uniq_zero)) 
                                                       | (IData)(vlSelfRef.__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp_full)) 
                                                      | (IData)(vlSelfRef.__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp_ptl)) 
                                                     | (IData)(vlSelfRef.__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp_zero)) 
                                                    | (IData)(vlSelfRef.__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp_full)) 
                                                   | (IData)(vlSelfRef.__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp_ptl)) 
                                                  | (IData)(vlSelfRef.__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp_zero)) 
                                                 | (IData)(vlSelfRef.__PVT__itis_lastresp_comp_ph3_wr_nosnp));
    vlSelfRef.__PVT__itis_lastresp_dataless_snpdataptl_ph3 
        = ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
             & (IData)(vlSelfRef.__PVT__was_lastresp_dataless_snpdataptl_ph3)) 
            & ((IData)(vlSelfRef.__PVT__origreq_mayneed_dataxfr_tomm) 
               | (IData)(vlSelfRef.__PVT__origreq_invalidate_ph3))) 
           & (IData)(vlSelfRef.__PVT__cmdq_src1_ph3));
    vlSelfRef.__PVT__pkt_forwarded_bit_snp_ph3 = ((
                                                   ((((IData)(vlSelfRef.__PVT__orig_req_read_ocsu_notsd_pu_ph3) 
                                                      | (IData)(vlSelfRef.__PVT__orig_makeread_u_ph3)) 
                                                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                                                    & (IData)(vlSelfRef.__PVT__opcode_snprespdata_ph3)) 
                                                   & (IData)(vlSelfRef.__PVT__cmd_ph3_pkt_forwarded_bit98)) 
                                                  | (IData)(vlSelfRef.__PVT__pkt_already_forwarded_snp_ph3));
    vlSelfRef.__PVT__pkt_forwarded_bit_mem_ph3 = ((
                                                   ((((IData)(vlSelfRef.__PVT__orig_req_read_ocsu_notsd_pu_ph3) 
                                                      | (IData)(vlSelfRef.__PVT__orig_makeread_u_ph3)) 
                                                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp))) 
                                                   & (IData)(vlSelfRef.__PVT__cmd_ph3_pkt_forwarded_bit98)) 
                                                  | (IData)(vlSelfRef.__PVT__pkt_already_forwarded_mem_ph3));
    vlSelfRef.__PVT__new_pkt_already_forwarded_snp_ph4_nxt 
        = vlSelfRef.__PVT__pkt_already_forwarded_snp_ph3;
    if ((((((IData)(vlSelfRef.__PVT__orig_req_read_ocsu_notsd_pu_ph3) 
            | (IData)(vlSelfRef.__PVT__orig_makeread_u_ph3)) 
           & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
          & (IData)(vlSelfRef.__PVT__opcode_snprespdata_ph3)) 
         & (IData)(vlSelfRef.__PVT__cmd_ph3_pkt_forwarded_bit98))) {
        vlSelfRef.__PVT__new_pkt_already_forwarded_snp_ph4_nxt = 1U;
    }
    vlSelfRef.__PVT__new_pkt_already_forwarded_mem_ph4_nxt 
        = vlSelfRef.__PVT__pkt_already_forwarded_mem_ph3;
    if ((((((IData)(vlSelfRef.__PVT__orig_req_read_ocsu_notsd_pu_ph3) 
            | (IData)(vlSelfRef.__PVT__orig_makeread_u_ph3)) 
           & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
          & (1U == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp))) 
         & (IData)(vlSelfRef.__PVT__cmd_ph3_pkt_forwarded_bit98))) {
        vlSelfRef.__PVT__new_pkt_already_forwarded_mem_ph4_nxt = 1U;
    }
    vlSelfRef.__PVT__new_cache_st_1_ph3_rsp = (1U & 
                                               VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__moving_cache_st_ph3), 1U));
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        vlSelfRef.__PVT__new_cache_st_1_ph3_rsp = (1U 
                                                   & (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                                                       & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3)))
                                                       ? 
                                                      ((2U 
                                                        != (IData)(vlSelfRef.__PVT__snoop_response_fwdstate_ph3)) 
                                                       && ((1U 
                                                            == (IData)(vlSelfRef.__PVT__snoop_response_fwdstate_ph3))
                                                            ? 
                                                           (3U 
                                                            == (IData)(vlSelfRef.__PVT__snp_resp_ph3))
                                                            : 
                                                           (((6U 
                                                              == (IData)(vlSelfRef.__PVT__snoop_response_fwdstate_ph3)) 
                                                             | (7U 
                                                                == (IData)(vlSelfRef.__PVT__snoop_response_fwdstate_ph3))) 
                                                            || (1U 
                                                                & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__moving_cache_st_ph3), 1U)))))
                                                       : 
                                                      ((1U 
                                                        & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__snp_resp_ph3), 2U))
                                                        ? 
                                                       ((~ 
                                                         (((((IData)(vlSelfRef.__PVT__orig_read_o_ph3) 
                                                             | (IData)(vlSelfRef.__PVT__orig_read_c_ph3)) 
                                                            | ((IData)(vlSelfRef.__PVT__orig_clean_s_ph3) 
                                                               & (IData)(vlSelfRef.__PVT__origreq_snpattr_ph3))) 
                                                           | (IData)(vlSelfRef.__PVT__orig_clean_u_ph3)) 
                                                          | ((IData)(vlSelfRef.__PVT__orig_read_notsd_ph3) 
                                                             & (1U 
                                                                == 
                                                                (3U 
                                                                 & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__snp_resp_ph3), 0U, 2)))))) 
                                                        & (~ 
                                                           (((IData)(vlSelfRef.__PVT__orig_read_notsd_ph3) 
                                                             & (0U 
                                                                == 
                                                                (3U 
                                                                 & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__snp_resp_ph3), 0U, 2)))) 
                                                            & (((2U 
                                                                 == (IData)(vlSelfRef.__PVT__orig_pshare_cnt_ph3)) 
                                                                & (~ (IData)(vlSelfRef.__PVT__origreq_reqid_matches_sharevec_ph3))) 
                                                               | (2U 
                                                                  < (IData)(vlSelfRef.__PVT__orig_pshare_cnt_ph3))))))
                                                        : 
                                                       ((~ 
                                                         ((IData)(vlSelfRef.__PVT__orig_read_notsd_ph3) 
                                                          & (IData)(vlSelfRef.__PVT__origreq_reqid_matches_ownerpid_ph3))) 
                                                        & ((3U 
                                                            == (IData)(vlSelfRef.__PVT__snp_resp_ph3)) 
                                                           | VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__moving_cache_st_ph3), 1U))))));
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__snp_resp_ph3), 2U))) {
            vlSelfRef.__PVT__new_cache_st_1_ph3_rsp = 0U;
        }
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                & (IData)(vlSelfRef.__PVT__cmdq_src1_ph3))) {
        if (((IData)(vlSelfRef.__PVT__orig_req_read_ocsu_notsd_pu_ph3) 
             | (IData)(vlSelfRef.__PVT__orig_makeread_u_ph3))) {
            vlSelfRef.__PVT__new_cache_st_1_ph3_rsp = 0U;
        }
    } else {
        vlSelfRef.__PVT__new_cache_st_1_ph3_rsp = (1U 
                                                   & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__moving_cache_st_ph3), 1U));
    }
    vlSelfRef.__PVT__itis_lastresp_read_snp_ph3 = (
                                                   ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                      & ((IData)(vlSelfRef.__PVT__orig_req_read_ocsu_notsd_pu_ph3) 
                                                         | (IData)(vlSelfRef.__PVT__orig_makeread_u_ph3))) 
                                                     & ((IData)(vlSelfRef.__PVT__orig_cachest_uc_ph3) 
                                                        | (IData)(vlSelfRef.__PVT__orig_cachest_ud_ph3))) 
                                                    & (~ (IData)(vlSelfRef.__PVT__origreq_reqid_matches_ownerpid_ph3))) 
                                                   & ((((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                                                            & (IData)(vlSelfRef.__PVT__opcode_snprespdata_ph3)) 
                                                           & (1U 
                                                              == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                                                          & (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)) 
                                                         & (0U 
                                                            == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                                                        | (((((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
                                                              & (IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3)) 
                                                             & (0U 
                                                                == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                                                            & (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)) 
                                                           & (1U 
                                                              == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3)))) 
                                                       | (((((IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph3) 
                                                             & (1U 
                                                                == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                                                            & (~ (IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3))) 
                                                           & (~ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3))) 
                                                          & (IData)(vlSelfRef.__PVT__origreq_apply_dmt_ph3))) 
                                                      | ((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                                                         & (0U 
                                                            == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3)))));
    vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3 
        = (((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & ((IData)(vlSelfRef.__PVT__orig_req_read_ocsu_notsd_pu_ph3) 
                 | (IData)(vlSelfRef.__PVT__orig_makeread_u_ph3))) 
             & ((IData)(vlSelfRef.__PVT__orig_cachest_uc_ph3) 
                | (IData)(vlSelfRef.__PVT__orig_cachest_ud_ph3))) 
            & (~ (IData)(vlSelfRef.__PVT__origreq_reqid_matches_ownerpid_ph3))) 
           & ((((((IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph3) 
                  & (1U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                 & (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)) 
                & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
               | (((((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
                     & ((~ (IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3)) 
                        | (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3))) 
                    & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                   & (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)) 
                  & (1U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3)))) 
              | (((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                    & (IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3)) 
                   & (1U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                  & (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3)) 
                 & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3)))));
    vlSelfRef.__PVT__itis_lastresp_atom_ph3 = (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__orig_req_atom_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__itis_lastresp_atom_inidata_ph3));
    vlSelfRef.__PVT__itis_atom_comp_rsp_ph3 = 0U;
    vlSelfRef.__PVT__itis_atom_res_data_ph3 = 0U;
    vlSelfRef.__PVT__itis_atom_ini_data_ph3 = 0U;
    vlSelfRef.__PVT__itis_atom_clr_buff_ph3 = 0U;
    if (vlSelfRef.__PVT__itis_lastresp_atom_comp_ph3) {
        vlSelfRef.__PVT__itis_atom_comp_rsp_ph3 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__itis_lastresp_atom_wr_result_p2_ph3) 
         | (IData)(vlSelfRef.__PVT__itis_prelastresp_atom_wr_result_p2_ph3_comp_is_last))) {
        vlSelfRef.__PVT__itis_atom_res_data_ph3 = 1U;
    }
    if (vlSelfRef.__PVT__itis_lastresp_atom_inidata_ph3) {
        vlSelfRef.__PVT__itis_atom_ini_data_ph3 = 1U;
    }
    if (vlSelfRef.__PVT__itis_lastresp_ph3_atom_clr_buffer) {
        vlSelfRef.__PVT__itis_atom_clr_buff_ph3 = 1U;
    }
    vlSelfRef.__PVT__was_prelastresp_atom_wr_result_p1_ph4_nxt = 0U;
    vlSelfRef.__PVT__was_prelastresp_atom_wr_result_p1_ph4_nxt 
        = ((IData)(vlSelfRef.__PVT__itis_prelastresp_atom_wr_result_p1_ph3) 
           || (IData)(vlSelfRef.__PVT__was_prelastresp_atom_wr_result_p1_ph3));
    vlSelfRef.__PVT__new_compfifo_index_mm_ph4_nxt 
        = vlSelfRef.__PVT__compfifo_index_mm_ph3;
    if (vlSelfRef.__PVT__cmdvalid_ph3_rsp) {
        if (((IData)(vlSelfRef.__PVT__cmdq_src1_ph3) 
             & (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3))) {
            vlSelfRef.__PVT__new_compfifo_index_mm_ph4_nxt 
                = vlSelfRef.__PVT__compbuff_num_1st_ph3;
        } else if ((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                     & (1U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            vlSelfRef.__PVT__new_compfifo_index_mm_ph4_nxt 
                = vlSelfRef.__PVT__compbuff_num_1st_ph3;
        }
    }
    if (vlSelfRef.__PVT__itis_prelastresp_atom_wr_result_p1_ph3) {
        vlSelfRef.__PVT__new_compfifo_index_mm_ph4_nxt 
            = vlSelfRef.__PVT__compbuff_num_1st_ph3;
    }
    vlSelfRef.__PVT__wren_outcompfifo_atom = ((((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_atom_clr_buffer) 
                                                | (IData)(vlSelfRef.__PVT__itis_lastresp_atom_comp_ph3)) 
                                               | (IData)(vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_rsp_ph3)) 
                                              | (IData)(vlSelfRef.__PVT__itis_prelastresp_atom_wr_result_p1_ph3));
    vlSelfRef.__PVT__origreq_need_dataxfr_tomm = (((IData)(vlSelfRef.__PVT__orig_cachest_sd_ph3) 
                                                   & (IData)(vlSelfRef.__PVT__orig_clean_u_ph3)) 
                                                  | (((IData)(vlSelfRef.__PVT__orig_req_atom_ph3) 
                                                      & (~ (IData)(vlSelfRef.__PVT__itis_prelastresp_atom_wr_result_p1_ph3))) 
                                                     & (~ (IData)(vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_rsp_ph3))));
    vlSelfRef.__PVT__origreq_need_dataxfr_toic = ((
                                                   (((IData)(vlSelfRef.__PVT__orig_req_read_ocsu_notsd_pu_ph3) 
                                                     | ((IData)(vlSelfRef.__PVT__orig_makeread_u_ph3) 
                                                        & (~ (IData)(vlSelfRef.__PVT__origreq_reqid_matches_sharevec_ph3)))) 
                                                    & (~ (IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3))) 
                                                   | ((IData)(vlSelfRef.__PVT__orig_read_nosnp_ph3) 
                                                      & (~ (IData)(vlSelfRef.__PVT__origreq_apply_dmt_ph3)))) 
                                                  | (((IData)(vlSelfRef.__PVT__orig_req_atom_ph3) 
                                                      & (~ (IData)(vlSelfRef.__PVT__itis_prelastresp_atom_wr_result_p1_ph3))) 
                                                     & (~ (IData)(vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_rsp_ph3))));
    vlSelfRef.__PVT__atom_res_update = ((~ (IData)(vlSelfRef.__PVT__origreq_snpattr_ph3)) 
                                        & (IData)(vlSelfRef.__PVT__itis_prelastresp_atom_wr_result_p1_ph3));
    vlSelfRef.__PVT__was_prelastresp_before_sending_noncachealbe_wrdat_ph4_wrcmo_nxt 
        = vlSelfRef.__PVT__was_prelastresp_before_sending_noncachealbe_wrdat_ph3_wrcmo;
    if (vlSelfRef.__PVT__itis_prelastresp_before_sending_noncachealbe_wrdat_ph3_wrcmo) {
        vlSelfRef.__PVT__was_prelastresp_before_sending_noncachealbe_wrdat_ph4_wrcmo_nxt = 1U;
    }
    vlSelfRef.__PVT__has_sent_compcmo_ph4_wrcmo_nxt 
        = vlSelfRef.__PVT__has_sent_compcmo_ph3_wrcmo;
    vlSelfRef.__PVT__send_compcmo_wrcmo = 0U;
    if ((((IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo) 
          | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_noncachealbe_wrdat_ph3_wrcmo)) 
         & (~ (IData)(vlSelfRef.__PVT__compcmo_cnt_resp_ph3)))) {
        vlSelfRef.__PVT__has_sent_compcmo_ph4_wrcmo_nxt = 1U;
        vlSelfRef.__PVT__send_compcmo_wrcmo = 1U;
    } else if (((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wrcmo) 
                & (~ (IData)(vlSelfRef.__PVT__has_sent_compcmo_ph3_wrcmo)))) {
        vlSelfRef.__PVT__send_compcmo_wrcmo = 1U;
    }
    vlSelfRef.__PVT__has_sent_comp_ph4_wrcmo_nxt = vlSelfRef.__PVT__has_sent_comp_ph3_wrcmo;
    vlSelfRef.__PVT__send_comp_wrcmo = 0U;
    if ((((IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo) 
          | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_noncachealbe_wrdat_ph3_wrcmo)) 
         & (((~ (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)) 
             | (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
            | (IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3)))) {
        vlSelfRef.__PVT__has_sent_comp_ph4_wrcmo_nxt = 1U;
        vlSelfRef.__PVT__send_comp_wrcmo = 1U;
    } else if (((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wrcmo) 
                & (~ (IData)(vlSelfRef.__PVT__has_sent_comp_ph3_wrcmo)))) {
        vlSelfRef.__PVT__send_comp_wrcmo = 1U;
    }
    vlSelfRef.__PVT__deallocate_respbuf_ph3_2nd = ((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                   & (((IData)(vlSelfRef.__PVT__cmdq_src0_ph3) 
                                                       & (5U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5)))) 
                                                      & (((((((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_full_ph3) 
                                                              | (IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_ptl_ph3)) 
                                                             | (IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_zero_ph3)) 
                                                            | (IData)(vlSelfRef.__PVT__itis_lastresp_atom_wr_result_p2_ph3)) 
                                                           | (IData)(vlSelfRef.__PVT__itis_prelastresp_atom_wr_result_p2_ph3_comp_is_last)) 
                                                          | (((IData)(vlSelfRef.__PVT__orig_clean_i_ph3) 
                                                              | (IData)(vlSelfRef.__PVT__orig_clean_s_ph3)) 
                                                             & (~ 
                                                                VL_BITSEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x49U)))) 
                                                         | ((IData)(vlSelfRef.__PVT__orig_req_write_cmo_ph3) 
                                                            & (~ 
                                                               VL_BITSEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x49U))))));
    vlSelfRef.__PVT__deallocate_respbuf_ph3_1st = ((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                   & ((((((IData)(vlSelfRef.__PVT__cmdq_src0_ph3) 
                                                          & ((((((1U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5))) 
                                                                 | (2U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5)))) 
                                                                | (5U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5)))) 
                                                               | (4U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5)))) 
                                                              | (6U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5)))) 
                                                             | (0x14U 
                                                                == 
                                                                (0x1fU 
                                                                 & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5))))) 
                                                         | (((~ (IData)(vlSelfRef.__PVT__orig_req_atom_ph3)) 
                                                             & ((IData)(vlSelfRef.__PVT__orig_cachest_uc_ph3) 
                                                                | (IData)(vlSelfRef.__PVT__orig_cachest_ud_ph3))) 
                                                            & ((IData)(vlSelfRef.__PVT__opcode_snprespdata_ptldata_ph3) 
                                                               | (IData)(vlSelfRef.__PVT__opcode_snprespdatafwd_ph3)))) 
                                                        | ((IData)(vlSelfRef.__PVT__orig_req_atom_ph3) 
                                                           & (IData)(vlSelfRef.__PVT__opcode_snprespdata_ptldata_ph3))) 
                                                       | ((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                                                          & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP))) 
                                                      | (((IData)(vlSelfRef.__PVT__cmdq_src1_ph3) 
                                                          & (((IData)(vlSelfRef.__PVT__orig_clean_i_ph3) 
                                                              | (IData)(vlSelfRef.__PVT__orig_clean_s_ph3)) 
                                                             | (IData)(vlSelfRef.__PVT__orig_req_write_cmo_ph3))) 
                                                         & (IData)(vlSelfRef.__PVT__origreq_cacheable_bit_ph3))));
    vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo 
        = (((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__orig_req_write_cmo_ph3)) 
             & (IData)(vlSelfRef.__PVT__origreq_cacheable_bit_ph3)) 
            & (~ (IData)(vlSelfRef.__PVT__was_prelastresp_before_sending_wrreq_ph3_wrcmo))) 
           & (((((((((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                         & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                        & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                       & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                      & ((~ (IData)(vlSelfRef.__PVT__comp_slc_cnt_resp_ph3)) 
                         | (IData)(vlSelfRef.__PVT__got_mem_data_earlier_ph3))) 
                     | ((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                            & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                           & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))) 
                          & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                         & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                        & ((~ (IData)(vlSelfRef.__PVT__comp_slc_cnt_resp_ph3)) 
                           | (IData)(vlSelfRef.__PVT__got_mem_data_earlier_ph3)))) 
                    | ((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                           & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA)) 
                          & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))) 
                         & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                        & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                       & ((~ (IData)(vlSelfRef.__PVT__comp_slc_cnt_resp_ph3)) 
                          | (IData)(vlSelfRef.__PVT__got_mem_data_earlier_ph3)))) 
                   | ((((((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                          & (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)) 
                         & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))) 
                        & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                       & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                      & ((~ (IData)(vlSelfRef.__PVT__comp_slc_cnt_resp_ph3)) 
                         | (IData)(vlSelfRef.__PVT__got_mem_data_earlier_ph3)))) 
                  | (((((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
                        & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                       & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))) 
                      & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                     & ((~ (IData)(vlSelfRef.__PVT__comp_slc_cnt_resp_ph3)) 
                        | (IData)(vlSelfRef.__PVT__got_mem_data_earlier_ph3)))) 
                 | ((((((IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3) 
                        & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                       & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))) 
                      & (1U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                     & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                    & ((~ (IData)(vlSelfRef.__PVT__comp_slc_cnt_resp_ph3)) 
                       | (IData)(vlSelfRef.__PVT__got_mem_data_earlier_ph3)))) 
                | (((((IData)(vlSelfRef.__PVT__cmdq_src0_CompAckResp_ph3) 
                      & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                     & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                    & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                   & ((~ (IData)(vlSelfRef.__PVT__comp_slc_cnt_resp_ph3)) 
                      | (IData)(vlSelfRef.__PVT__got_mem_data_earlier_ph3)))) 
               | (((((IData)(vlSelfRef.__PVT__cmdq_src0_Comp_ph3) 
                     & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                    & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))) 
                   & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                  & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3)))) 
              | (((((IData)(vlSelfRef.__PVT__cmdq_src1_ph3) 
                    & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))) 
                   & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))) 
                  & (0U == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                 & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3)))));
    vlSelfRef.__PVT__was_prelastresp_check_cacheline_ph4_cmo_nxt 
        = vlSelfRef.__PVT__was_prelastresp_check_cacheline_ph3_cmo;
    if (vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo) {
        vlSelfRef.__PVT__was_prelastresp_check_cacheline_ph4_cmo_nxt = 1U;
    }
    vlSelfRef.__PVT__itis_lastresp_ph3_wr_invalid_addr 
        = ((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wr_all) 
           & (IData)(vlSelfRef.__PVT__origreq_invalid_addr));
    vlSelfRef.__PVT__itis_lastresp_dataless_xfr_tomem_ph3 
        = (((((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                & (~ (IData)(vlSelfRef.__PVT__itis_lastresp_dataless_snpdataptl_ph3))) 
               & (IData)(vlSelfRef.__PVT__origreq_mayneed_dataxfr_tomm)) 
              & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))) 
             & (IData)(vlSelfRef.__PVT__cmdq_src0_Comp_ph3)) 
            & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
           & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3)));
    vlSelfRef.__PVT__itis_prelastresp_dataless_xfr_tomem_ph3 
        = (((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (~ (IData)(vlSelfRef.__PVT__itis_lastresp_dataless_snpdataptl_ph3))) 
             & (IData)(vlSelfRef.__PVT__origreq_mayneed_dataxfr_tomm)) 
            & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))) 
           & ((((IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3) 
                & (0U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
               | ((((IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3) 
                    & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3)) 
                   & (1U == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                  & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3)))) 
              & (IData)(vlSelfRef.__PVT__comp_cnt_resp_ph3)));
    vlSelfRef.__PVT__new_cache_st_ph3_rsp = VL_CONCAT_III(3,2,1, 
                                                          VL_EXTEND_II(2,1, (IData)(vlSelfRef.__PVT__new_cache_st_1_ph3_rsp)), 0U);
    vlSelfRef.__PVT__cmd_ph3_apply_dmt_rsp = ((IData)(vlSelfRef.__PVT__origreq_apply_dmt_ph3) 
                                              & (((IData)(vlSelfRef.__PVT__itis_lastresp_read_snp_ph3) 
                                                  & (IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph3)) 
                                                 | (IData)(vlSelfRef.__PVT__itis_req_retry_pcrdmatch_ph3)));
    vlSelfRef.__PVT__itis_lastresp_ph3_nonwr = (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                 & (((((~ (IData)(vlSelfRef.__PVT__orig_req_wr_ph3)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__orig_req_cmo_ph3))) 
                                                      & (~ (IData)(vlSelfRef.__PVT__orig_req_atom_ph3))) 
                                                     & (~ (IData)(vlSelfRef.__PVT__itis_lastresp_dataless_snpdataptl_ph3))) 
                                                    & (~ (IData)(vlSelfRef.__PVT__orig_req_write_cmo_ph3)))) 
                                                & (((((((((IData)(vlSelfRef.__PVT__cmdq_src1_ph3) 
                                                          & (0U 
                                                             == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                                                         & (0U 
                                                            == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                                                        & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))) 
                                                       | (((((IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3) 
                                                             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3)) 
                                                            & (1U 
                                                               == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                                                           & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3))) 
                                                          & (0U 
                                                             == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) 
                                                           & (0U 
                                                              == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                                                          & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3))) 
                                                         & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3)))) 
                                                     | ((((((IData)(vlSelfRef.__PVT__cmdq_src0_CompAckResp_ph3) 
                                                            & (0U 
                                                               == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                                                           & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3))) 
                                                          & (0U 
                                                             == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                                                         & (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3)) 
                                                        & (~ (IData)(vlSelfRef.__PVT__readreceipt_cnt_resp_ph3)))) 
                                                    | ((((((IData)(vlSelfRef.__PVT__opcode_readreceipt_ph3) 
                                                           & (0U 
                                                              == (IData)(vlSelfRef.__PVT__ic_resp_cnt_ph3))) 
                                                          & (~ (IData)(vlSelfRef.__PVT__mmem_resp_cnt_ph3))) 
                                                         & (0U 
                                                            == (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                                                        & (IData)(vlSelfRef.__PVT__readreceipt_cnt_resp_ph3)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3)))) 
                                                   | (IData)(vlSelfRef.__PVT__itis_lastresp_read_snp_ph3)));
    vlSelfRef.__PVT__new_was_prelastresp_read_snp_ph4_nxt 
        = vlSelfRef.__PVT__was_prelastresp_read_snp_ph3;
    if (vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) {
        vlSelfRef.__PVT__new_was_prelastresp_read_snp_ph4_nxt = 1U;
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0U == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (1U == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (2U == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (3U == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (4U == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (5U == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (6U == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (7U == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (8U == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (9U == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0xaU == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0xbU == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0xcU == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0xdU == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0xeU == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0xfU == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0x10U == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0x11U == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0x12U == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0x13U == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0x14U == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0x15U == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0x16U == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0x17U == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0x18U == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0x19U == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0x1aU == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0x1bU == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0x1cU == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0x1dU == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0x1eU == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__dealloc_compfifo_vector, 
                    (((IData)(vlSelfRef.__PVT__itis_prelastresp_read_snp_ph3) 
                      & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3) 
                            ^ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))) 
                     & (0x1fU == (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3))));
    vlSelfRef.__PVT__atom_addr = (0x3fffffffffffULL 
                                  & ((IData)(vlSelfRef.__PVT__atom_res_update)
                                      ? ((0x67fU >= 
                                          (0x7ffU & 
                                           ((IData)(6U) 
                                            + VL_SEL_IIII(32, 
                                                          ((IData)(0x34U) 
                                                           * 
                                                           VL_EXTEND_II(32,5, 
                                                                        (0x1fU 
                                                                         & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__pendingq_index_resp_ph3), 0U, 5)))), 0U, 11))))
                                          ? VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 
                                                        (0x7ffU 
                                                         & ((IData)(6U) 
                                                            + 
                                                            VL_SEL_IIII(32, 
                                                                        ((IData)(0x34U) 
                                                                         * 
                                                                         VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__pendingq_index_resp_ph3), 0U, 5)))), 0U, 11))), 46)
                                          : 0ULL) : 0ULL));
    vlSelfRef.__PVT__itis_lastresp_ph3_wr_snp = (((
                                                   ((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wr_cb) 
                                                    | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wr_uniq_fl)) 
                                                   | (IData)(vlSelfRef.__PVT__it_maybe_lastresp_ph3_wr_uniq_ptl)) 
                                                  | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wr_uniq_zero)) 
                                                 | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo));
    vlSelfRef.__PVT__origreq_got_mem_data = 0U;
    if ((((((((IData)(vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo) 
              | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_compdbid_ph3_cmo)) 
             | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_dbid_ph3_cmo)) 
            | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_cmo)) 
           | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo)) 
          | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo)) 
         & ((IData)(vlSelfRef.__PVT__got_mem_data_earlier_ph3) 
            | (IData)(vlSelfRef.__PVT__cmdq_src1_ph3)))) {
        vlSelfRef.__PVT__origreq_got_mem_data = 1U;
    }
    vlSelfRef.__PVT__origreq_got_snpresp_ic = 0U;
    if ((((((((IData)(vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo) 
              | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_compdbid_ph3_cmo)) 
             | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_dbid_ph3_cmo)) 
            | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_cmo)) 
           | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo)) 
          | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo)) 
         & ((IData)(vlSelfRef.__PVT__gotresp_earlier_ic_ph3) 
            | ((IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph3) 
               | (IData)(vlSelfRef.__PVT__cmdq_src0_SnpRespFwd_ph3))))) {
        vlSelfRef.__PVT__origreq_got_snpresp_ic = 1U;
    }
    vlSelfRef.__PVT__was_prelastresp_before_sending_wrreq_ph4_wrcmo_nxt 
        = vlSelfRef.__PVT__was_prelastresp_before_sending_wrreq_ph3_wrcmo;
    if (vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo) {
        vlSelfRef.__PVT__was_prelastresp_before_sending_wrreq_ph4_wrcmo_nxt = 1U;
    }
    vlSelfRef.__PVT__new_dbid_cnt_ph4_nxt = vlSelfRef.__PVT__dbid_cnt_ph3;
    if (((IData)(vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo) 
         & ((((IData)(vlSelfRef.__PVT__got_mem_data_earlier_ph3) 
              | (IData)(vlSelfRef.__PVT__cmdq_src1_ph3)) 
             | (IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3)) 
            | (IData)(vlSelfRef.__PVT__opcode_snprespdata_ptldata_ph3)))) {
        vlSelfRef.__PVT__new_dbid_cnt_ph4_nxt = 1U;
    } else if (vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo) {
        vlSelfRef.__PVT__new_dbid_cnt_ph4_nxt = 1U;
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__dbid_cnt_ph3)) 
                & (IData)(vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3))) {
        vlSelfRef.__PVT__new_dbid_cnt_ph4_nxt = 0U;
    }
    vlSelfRef.__PVT__new_compdbid_cnt_ph4_nxt = vlSelfRef.__PVT__compdbid_cnt_ph3;
    if (((IData)(vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo) 
         & ((((IData)(vlSelfRef.__PVT__got_mem_data_earlier_ph3) 
              | (IData)(vlSelfRef.__PVT__cmdq_src1_ph3)) 
             | (IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3)) 
            | (IData)(vlSelfRef.__PVT__opcode_snprespdata_ptldata_ph3)))) {
        vlSelfRef.__PVT__new_compdbid_cnt_ph4_nxt = 
            (3U & VL_SEL_IIII(32, ((((IData)(vlSelfRef.__PVT__orig_clean_s_ph3) 
                                     & ((IData)(vlSelfRef.__PVT__got_mem_data_earlier_ph3) 
                                        | (IData)(vlSelfRef.__PVT__cmdq_src1_ph3))) 
                                    & ((IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3) 
                                       | (IData)(vlSelfRef.__PVT__opcode_snprespdata_ptldata_ph3)))
                                    ? 2U : 1U), 0U, 2));
    } else if (vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo) {
        vlSelfRef.__PVT__new_compdbid_cnt_ph4_nxt = 1U;
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (0U != (IData)(vlSelfRef.__PVT__compdbid_cnt_ph3))) 
                & (IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3))) {
        vlSelfRef.__PVT__new_compdbid_cnt_ph4_nxt = 
            (3U & ((IData)(vlSelfRef.__PVT__compdbid_cnt_ph3) 
                   - (IData)(1U)));
    }
    vlSelfRef.__PVT__new_comp_cnt_resp_ph4_nxt = vlSelfRef.__PVT__comp_cnt_resp_ph3;
    if (((IData)(vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo) 
         & ((((IData)(vlSelfRef.__PVT__got_mem_data_earlier_ph3) 
              | (IData)(vlSelfRef.__PVT__cmdq_src1_ph3)) 
             | (IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3)) 
            | (IData)(vlSelfRef.__PVT__opcode_snprespdata_ptldata_ph3)))) {
        vlSelfRef.__PVT__new_comp_cnt_resp_ph4_nxt = 1U;
    } else if (vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo) {
        vlSelfRef.__PVT__new_comp_cnt_resp_ph4_nxt = 1U;
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src0_Comp_ph3)) 
                & (~ ((IData)(vlSelfRef.__PVT__orig_req_write_cmo_ph3) 
                      & VL_BITSEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x49U))))) {
        vlSelfRef.__PVT__new_comp_cnt_resp_ph4_nxt = 0U;
    }
    vlSelfRef.__PVT__new_comp_slc_cnt_resp_ph4_nxt 
        = vlSelfRef.__PVT__comp_slc_cnt_resp_ph3;
    if (((IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo) 
         & (((((IData)(vlSelfRef.__PVT__orig_req_wruniqueptl_clean_s_ph3) 
               | (IData)(vlSelfRef.__PVT__orig_req_wrbackfl_clean_i_ph3)) 
              & (((IData)(vlSelfRef.__PVT__orig_cachest_uc_ph3) 
                  | (IData)(vlSelfRef.__PVT__orig_cachest_ud_ph3)) 
                 | (IData)(vlSelfRef.__PVT__orig_cachest_sd_ph3))) 
             & (~ (IData)(vlSelfRef.__PVT__origreq_reqid_matches_ownerpid_ph3))) 
            | ((((IData)(vlSelfRef.__PVT__orig_req_wrbackfl_clean_s_ph3) 
                 | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                & (~ ((IData)(vlSelfRef.__PVT__opcode_snprespdata_ph3) 
                      | ((IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)))))) 
               & (IData)(vlSelfRef.__PVT__origreq_got_copybackwrdata_invalid))))) {
        vlSelfRef.__PVT__new_comp_slc_cnt_resp_ph4_nxt = 1U;
    } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                 & (IData)(vlSelfRef.__PVT__cmdq_src0_Comp_ph3)) 
                & VL_BITSEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x49U))) {
        vlSelfRef.__PVT__new_comp_slc_cnt_resp_ph4_nxt = 0U;
    }
    vlSelfRef.__PVT__read_notsd_has_data_to_mem = (
                                                   (((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_nonwr) 
                                                     & (IData)(vlSelfRef.__PVT__orig_read_notsd_ph3)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__origreq_reqid_matches_ownerpid_ph3))) 
                                                   & ((((IData)(vlSelfRef.__PVT__orig_cachest_uc_ph3) 
                                                        | (IData)(vlSelfRef.__PVT__orig_cachest_ud_ph3)) 
                                                       & (5U 
                                                          == (IData)(vlSelfRef.__PVT__snp_resp_ph3))) 
                                                      | ((IData)(vlSelfRef.__PVT__orig_cachest_sd_ph3) 
                                                         & ((5U 
                                                             == (IData)(vlSelfRef.__PVT__snp_resp_ph3)) 
                                                            | ((4U 
                                                                == (IData)(vlSelfRef.__PVT__snp_resp_ph3)) 
                                                               & (((2U 
                                                                    == (IData)(vlSelfRef.__PVT__orig_pshare_cnt_ph3)) 
                                                                   & (~ (IData)(vlSelfRef.__PVT__origreq_reqid_matches_sharevec_ph3))) 
                                                                  | (2U 
                                                                     < (IData)(vlSelfRef.__PVT__orig_pshare_cnt_ph3))))))));
    vlSelfRef.__PVT__origreq_got_snpptldata_ic = 0U;
    if (((((((((((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_nonwr) 
                 | (IData)(vlSelfRef.__PVT__itis_atom_init_data_ph3)) 
                | (IData)(vlSelfRef.__PVT__it_maybe_lastresp_ph3_wr_uniq_ptl)) 
               | (IData)(vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo)) 
              | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_compdbid_ph3_cmo)) 
             | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_dbid_ph3_cmo)) 
            | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_cmo)) 
           | (IData)(vlSelfRef.__PVT__itis_prelastresp_dataless_xfr_tomem_ph3)) 
          | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo)) 
         | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo))) {
        if (((IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3) 
             | ((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                & (5U == (IData)(vlSelfRef.__PVT__cmd_ph3_dat_opcode))))) {
            vlSelfRef.__PVT__origreq_got_snpptldata_ic = 1U;
        }
    }
    vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
    if (((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_nonwr) 
         | (IData)(vlSelfRef.__PVT__itis_prelastresp_dataless_xfr_tomem_ph3))) {
        if (vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3) {
            vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compfifo_index_ic_data_ph3;
        } else if ((((IData)(vlSelfRef.__PVT__cmdq_src1_ph3) 
                     | (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    | (IData)(vlSelfRef.__PVT__origreq_invalidate_ph3))) {
            vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
        } else if ((((IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph3) 
                     | (IData)(vlSelfRef.__PVT__cmdq_src0_SnpRespFwd_ph3)) 
                    | (IData)(vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3))) {
            vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
        }
    } else if (((((IData)(vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo) 
                  | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_compdbid_ph3_cmo)) 
                 | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_dbid_ph3_cmo)) 
                | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_cmo))) {
        vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
    } else if (vlSelfRef.__PVT__itis_lastresp_dataless_snpdataptl_ph3) {
        vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
    } else if (vlSelfRef.__PVT__itis_lastresp_ph3_wr_uniq_fl) {
        if (((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
             & ((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA) 
                | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)))) {
            vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
        } else if (vlSelfRef.__PVT__gotwrdata_earlier_ic_ph3) {
            vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compfifo_index_mm_ph3;
        }
    } else if (((IData)(vlSelfRef.__PVT__it_maybe_lastresp_ph3_wr_uniq_ptl) 
                | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wr_uniq_ptl))) {
        vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
    } else if ((((IData)(vlSelfRef.__PVT__itis_prelastresp_without_comp_ph3_wr_nosnp_full) 
                 | (IData)(vlSelfRef.__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp_full)) 
                | (IData)(vlSelfRef.__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp_full))) {
        if (((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
             & ((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA) 
                | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)))) {
            vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
        } else if (vlSelfRef.__PVT__gotwrdata_earlier_ic_ph3) {
            vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compfifo_index_mm_ph3;
        }
    } else if ((((IData)(vlSelfRef.__PVT__itis_prelastresp_without_comp_ph3_wr_nosnp_ptl) 
                 | (IData)(vlSelfRef.__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp_ptl)) 
                | (IData)(vlSelfRef.__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp_ptl))) {
        vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
    } else if (vlSelfRef.__PVT__itis_lastresp_ph3_wr_cb) {
        vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
    } else if ((((IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo) 
                 | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo)) 
                | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_noncachealbe_wrdat_ph3_wrcmo))) {
        vlSelfRef.__PVT__outcompfifo_index = vlSelfRef.__PVT__compbuff_num_1st_ph3;
    }
    vlSelfRef.__PVT__origreq_got_snpdata_ic = 0U;
    if ((((((((((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_nonwr) 
                | (IData)(vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo)) 
               | (IData)(vlSelfRef.__PVT__itis_prelastresp_dataless_xfr_tomem_ph3)) 
              | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_compdbid_ph3_cmo)) 
             | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_dbid_ph3_cmo)) 
            | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_cmo)) 
           | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo)) 
          | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo)) 
         & (((IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3) 
             | (IData)(vlSelfRef.__PVT__opcode_snprespdata_ptldata_ph3)) 
            | (IData)(vlSelfRef.__PVT__opcode_snprespdatafwd_ph3)))) {
        vlSelfRef.__PVT__origreq_got_snpdata_ic = 1U;
    } else if (((IData)(vlSelfRef.__PVT__it_maybe_lastresp_ph3_wr_uniq_ptl) 
                & (((IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3) 
                    | (IData)(vlSelfRef.__PVT__opcode_snprespdata_ptldata_ph3)) 
                   | (IData)(vlSelfRef.__PVT__opcode_snprespdatafwd_ph3)))) {
        vlSelfRef.__PVT__origreq_got_snpdata_ic = 1U;
    }
    vlSelfRef.__PVT__new_last_read_snp_sent_ph4_nxt 
        = vlSelfRef.__PVT__last_read_snp_sent_ph3;
    if ((((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_nonwr) 
          & ((IData)(vlSelfRef.__PVT__orig_req_read_ocsu_notsd_pu_ph3) 
             | (IData)(vlSelfRef.__PVT__orig_makeread_u_ph3))) 
         & (~ (IData)(vlSelfRef.__PVT__origreq_apply_dmt_ph3)))) {
        vlSelfRef.__PVT__new_last_read_snp_sent_ph4_nxt = 1U;
    }
    vlSelfRef.__PVT__new_was_lastresp_dataless_snpdataptl_ph4_nxt 
        = vlSelfRef.__PVT__was_lastresp_dataless_snpdataptl_ph3;
    if ((((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_nonwr) 
          | (IData)(vlSelfRef.__PVT__itis_prelastresp_dataless_xfr_tomem_ph3)) 
         & ((IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3) 
            | ((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
               & (5U == (IData)(vlSelfRef.__PVT__cmd_ph3_dat_opcode)))))) {
        vlSelfRef.__PVT__new_was_lastresp_dataless_snpdataptl_ph4_nxt = 1U;
    }
    vlSelfRef.__PVT__wren_cache_vector_ph4_rsp_nxt = 0U;
    if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
         & (((((((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_nonwr) 
                 | ((IData)(vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo) 
                    & (IData)(vlSelfRef.__PVT__origreq_snpattr_ph3))) 
                | (IData)(vlSelfRef.__PVT__itis_lastresp_dataless_xfr_tomem_ph3)) 
               | (((IData)(vlSelfRef.__PVT__itis_lastresp_atom_comp_ph3) 
                   | (IData)(vlSelfRef.__PVT__itis_lastresp_atom_inidata_ph3)) 
                  & (IData)(vlSelfRef.__PVT__origreq_snpattr_ph3))) 
              & (~ (IData)(vlSelfRef.__PVT__orig_read_nosnp_ph3))) 
             & (~ (IData)(vlSelfRef.__PVT__origreq_invalidate_ph3))) 
            | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wr_snp)))) {
        vlSelfRef.__PVT__wren_cache_vector_ph4_rsp_nxt 
            = (0xffffU & VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph3, 0x5cU, 16));
    }
    vlSelfRef.__PVT__outcompfifo_index_2nd = vlSelfRef.__PVT__compbuff_num_1st_ph3;
    if (((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_nonwr) 
         | (IData)(vlSelfRef.__PVT__itis_prelastresp_dataless_xfr_tomem_ph3))) {
        if (vlSelfRef.__PVT__cmdq_src2_ph3) {
            vlSelfRef.__PVT__outcompfifo_index_2nd 
                = ((IData)(vlSelfRef.__PVT__origreq_invalidate_ph3)
                    ? (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3)
                    : (IData)(vlSelfRef.__PVT__compfifo_index_mm_ph3));
        } else if (vlSelfRef.__PVT__cmdq_src1_ph3) {
            vlSelfRef.__PVT__outcompfifo_index_2nd 
                = ((IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3)
                    ? (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3)
                    : (IData)(vlSelfRef.__PVT__compfifo_index_ic_ph3));
        } else if (((IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph3) 
                    | (IData)(vlSelfRef.__PVT__cmdq_src0_SnpRespFwd_ph3))) {
            vlSelfRef.__PVT__outcompfifo_index_2nd 
                = vlSelfRef.__PVT__compbuff_num_1st_ph3;
        } else if (vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3) {
            vlSelfRef.__PVT__outcompfifo_index_2nd 
                = ((IData)(vlSelfRef.__PVT__got_snpdata_earlier_ic_ph3)
                    ? (IData)(vlSelfRef.__PVT__compfifo_index_mm_ph3)
                    : ((IData)(vlSelfRef.__PVT__origreq_invalidate_ph3)
                        ? (IData)(vlSelfRef.__PVT__compbuff_num_1st_ph3)
                        : (IData)(vlSelfRef.__PVT__compfifo_index_ic_ph3)));
        }
    } else if (vlSelfRef.__PVT__itis_lastresp_dataless_snpdataptl_ph3) {
        vlSelfRef.__PVT__outcompfifo_index_2nd = vlSelfRef.__PVT__compbuff_num_2nd_ph3;
    } else if (((IData)(vlSelfRef.__PVT__it_maybe_lastresp_ph3_wr_uniq_ptl) 
                | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wr_uniq_ptl))) {
        vlSelfRef.__PVT__outcompfifo_index_2nd = vlSelfRef.__PVT__compbuff_num_2nd_ph3;
    } else if ((((IData)(vlSelfRef.__PVT__itis_atom_init_data_ph3) 
                 & (IData)(vlSelfRef.__PVT__gotptldata_earlier_ic_ph3)) 
                & (2U == (IData)(vlSelfRef.__PVT__atmo_state_ph3)))) {
        vlSelfRef.__PVT__outcompfifo_index_2nd = vlSelfRef.__PVT__compbuff_num_2nd_ph3;
    } else if ((((((IData)(vlSelfRef.__PVT__itis_wrnosnpptl_send_wr_data_ph3) 
                   | (IData)(vlSelfRef.__PVT__itis_prelastresp_comp_is_last_ph3_wr_nosnp_ptl)) 
                  | (IData)(vlSelfRef.__PVT__itis_prelastresp_without_comp_ph3_wr_nosnp_ptl)) 
                 | (IData)(vlSelfRef.__PVT__itis_lastresp_comp_is_not_last_ph3_wr_nosnp_ptl)) 
                | (IData)(vlSelfRef.__PVT__itis_lastresp_compdbidresp_ph3_wr_nosnp_ptl))) {
        vlSelfRef.__PVT__outcompfifo_index_2nd = vlSelfRef.__PVT__compbuff_num_2nd_ph3;
    } else if (((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_wr_cb) 
                & (0x1aU == (IData)(vlSelfRef.__PVT__origreq_opcode_ph3)))) {
        vlSelfRef.__PVT__outcompfifo_index_2nd = vlSelfRef.__PVT__compbuff_num_2nd_ph3;
    } else if (((((IData)(vlSelfRef.__PVT__itis_prelastresp_check_cacheline_ph3_cmo) 
                  | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_compdbid_ph3_cmo)) 
                 | (IData)(vlSelfRef.__PVT__itis_prelastresp_write_dbid_ph3_cmo)) 
                | (IData)(vlSelfRef.__PVT__itis_lastresp_ph3_cmo))) {
        if (((IData)(vlSelfRef.__PVT__origreq_got_snpresp_ic) 
             | (IData)(vlSelfRef.__PVT__origreq_got_snpdata_ic))) {
            vlSelfRef.__PVT__outcompfifo_index_2nd 
                = vlSelfRef.__PVT__compbuff_num_2nd_ph3;
        }
    } else if (((IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_wrreq_ph3_wrcmo) 
                | (IData)(vlSelfRef.__PVT__itis_prelastresp_before_sending_cacheable_wrdat_ph3_wrcmo))) {
        vlSelfRef.__PVT__outcompfifo_index_2nd = vlSelfRef.__PVT__compbuff_num_2nd_ph3;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi15___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__5(Vsig_topology_top_sig_coherency_ctrlr__pi15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi15___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__full_reqcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__reqcmd_fifo_0.__PVT__fifo_full;
    vlSelfRef.__PVT__empty_reqcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__reqcmd_fifo_0.__PVT__fifo_empty;
    VL_ASSIGN_W(156,vlSelfRef.__PVT__rddata_reqcmdq, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__reqcmd_fifo_0.__PVT__fifo_rddata);
    vlSelfRef.__PVT__fifofull_reqcmdq = vlSelfRef.__PVT__full_reqcmdq;
    vlSelfRef.__PVT__req_reqcmdq = (1U & ((~ (IData)(vlSelfRef.__PVT__empty_reqcmdq)) 
                                          | (((IData)(vlSelfRef.__PVT__empty_reqcmdq) 
                                              & (IData)(vlSelfRef.__PVT__wren_reqcmdq)) 
                                             & (IData)(vlSelfRef.__PVT__reqfifo_bypass_en))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi15___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__8(Vsig_topology_top_sig_coherency_ctrlr__pi15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi15___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__reqcmd_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__drespcmd_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0.__PVT__fifo_clk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_gclk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi15___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__4(Vsig_topology_top_sig_coherency_ctrlr__pi15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi15___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid = vlSelfRef.__PVT__i_rcv_rsp_dat_linear_srcid;
    vlSelfRef.__PVT__new_ownerp_id_ph3_rsp = vlSelfRef.__PVT__moving_ownerp_id_ph3;
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
          & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
         & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
        vlSelfRef.__PVT__new_ownerp_id_ph3_rsp = (0x7fU 
                                                  & (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                                                      & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3)))
                                                      ? 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__snoop_response_fwdstate_ph3))
                                                       ? 
                                                      VL_SEL_IIII(11, 
                                                                  (0x7ffU 
                                                                   & ((3U 
                                                                       == (IData)(vlSelfRef.__PVT__snp_resp_ph3))
                                                                       ? 
                                                                      VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                                                       : 
                                                                      VL_EXTEND_II(11,7, 
                                                                                (0x7fU 
                                                                                & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__origreq_src_id_ph3), 0U, 7))))), 0U, 7)
                                                       : 
                                                      VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__origreq_src_id_ph3), 0U, 7))
                                                      : 
                                                     (((VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__snp_resp_ph3), 2U) 
                                                        & (IData)(vlSelfRef.__PVT__orig_read_su_pu_ph3)) 
                                                       | ((4U 
                                                           == (IData)(vlSelfRef.__PVT__snp_resp_ph3)) 
                                                          & (IData)(vlSelfRef.__PVT__orig_read_notsd_ph3)))
                                                       ? 
                                                      VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__origreq_src_id_ph3), 0U, 7)
                                                       : 
                                                      (((3U 
                                                         == (IData)(vlSelfRef.__PVT__snp_resp_ph3)) 
                                                        | (2U 
                                                           == (IData)(vlSelfRef.__PVT__snp_resp_ph3)))
                                                        ? 
                                                       VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid), 0U, 7)
                                                        : (IData)(vlSelfRef.__PVT__moving_ownerp_id_ph3)))));
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0U)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (0U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (0U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (0U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[0]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 1U)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (1U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (1U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (1U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[1]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 2U)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (2U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (2U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (2U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[2]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 3U)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (3U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (3U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (3U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[3]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 4U)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (4U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (4U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (4U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[4]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 5U)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (5U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (5U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (5U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[5]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 6U)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (6U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (6U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (6U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[6]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 7U)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (7U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (7U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (7U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[7]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 8U)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (8U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (8U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (8U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[8]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 9U)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (9U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (9U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (9U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[9]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0xaU)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (0xaU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (0xaU == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (0xaU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[10]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0xbU)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (0xbU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (0xbU == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (0xbU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[11]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0xcU)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (0xcU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (0xcU == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (0xcU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[12]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0xdU)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (0xdU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (0xdU == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (0xdU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[13]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0xeU)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (0xeU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (0xeU == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (0xeU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[14]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0xfU)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (0xfU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (0xfU == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (0xfU == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[15]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0x10U)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (0x10U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (0x10U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (0x10U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[16]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0x11U)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (0x11U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (0x11U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (0x11U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[17]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0x12U)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (0x12U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (0x12U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (0x12U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[18]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0x13U)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (0x13U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (0x13U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (0x13U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[19]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0x14U)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (0x14U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (0x14U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (0x14U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[20]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__moving_share_vect_m_qual_ph3, 0x15U)));
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                                               & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                                                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                                                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                                                  | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))), 
                                              (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                                & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
                                               & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))))))) {
        if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
              & (IData)(vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3)) 
             & (IData)(vlSelfRef.__PVT__opcode_any_snoop_response_ph3))) {
            if (((IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3) 
                 & (0x15U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            } else if (((IData)(vlSelfRef.__PVT__opcode_any_snpfwded_response_dct_ph3) 
                        & (0x15U == (IData)(vlSelfRef.__PVT__origreq_src_id_ph3)))) {
                VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 
                                (1U & (~ (IData)(vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3))));
            }
        } else if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                     & (IData)(vlSelfRef.__PVT__cmdq_src2_ph3)) 
                    & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                         | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                        | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                       | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL)))) {
            if ((((~ ((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3))) 
                  | (((IData)(vlSelfRef.__PVT__orig_wr_cl_ph3) 
                      | (IData)(vlSelfRef.__PVT__orig_req_wrcleanfl_clean_s_ph3)) 
                     & (IData)(vlSelfRef.__PVT__snp_resp_state_inv_ph3))) 
                 & (0x15U == (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_linear_srcid)))) {
                VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__new_share_vect_rsp_m_ph3, 0U);
            }
        }
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:6296: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.genblk11[21]: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 6296, "");
    }
    vlSelfRef.__PVT__new_share_vect_ph3_rsp = vlSelfRef.__PVT__new_share_vect_rsp_m_ph3;
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi15___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__6(Vsig_topology_top_sig_coherency_ctrlr__pi15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi15___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pshare_cnt_ph5_rsp = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp.__PVT__ones_count;
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi15___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__7(Vsig_topology_top_sig_coherency_ctrlr__pi15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi15___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pshare_cnt_ph5_req = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req.__PVT__ones_count;
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi15___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__9(Vsig_topology_top_sig_coherency_ctrlr__pi15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi15___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pshare_ph4 = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0.__PVT__ones_count;
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi15___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__24(Vsig_topology_top_sig_coherency_ctrlr__pi15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi15___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__24\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(109,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0.__PVT__fifo_wrdata, vlSelfRef.__PVT__wrdata_memrespcmdq);
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi15___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__25(Vsig_topology_top_sig_coherency_ctrlr__pi15* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi15___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__25\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    CData/*31:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_7;
    CData/*31:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_12;
    CData/*31:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_14;
    VlWide<5>/*159:0*/ __Vtemp_15;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_17;
    CData/*31:0*/ __Vtemp_18;
    VlWide<5>/*159:0*/ __Vtemp_19;
    VlWide<5>/*159:0*/ __Vtemp_20;
    VlWide<5>/*159:0*/ __Vtemp_21;
    VlWide<5>/*159:0*/ __Vtemp_22;
    CData/*31:0*/ __Vtemp_23;
    VlWide<5>/*159:0*/ __Vtemp_24;
    VlWide<5>/*159:0*/ __Vtemp_25;
    VlWide<5>/*159:0*/ __Vtemp_26;
    VlWide<5>/*159:0*/ __Vtemp_27;
    CData/*31:0*/ __Vtemp_28;
    VlWide<5>/*159:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_30;
    VlWide<5>/*159:0*/ __Vtemp_31;
    VlWide<5>/*159:0*/ __Vtemp_32;
    CData/*31:0*/ __Vtemp_33;
    VlWide<5>/*159:0*/ __Vtemp_34;
    VlWide<5>/*159:0*/ __Vtemp_35;
    VlWide<5>/*159:0*/ __Vtemp_36;
    VlWide<5>/*159:0*/ __Vtemp_37;
    CData/*31:0*/ __Vtemp_38;
    VlWide<5>/*159:0*/ __Vtemp_39;
    VlWide<5>/*159:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_41;
    VlWide<4>/*127:0*/ __Vtemp_42;
    VlWide<4>/*127:0*/ __Vtemp_43;
    VlWide<4>/*127:0*/ __Vtemp_44;
    VlWide<4>/*127:0*/ __Vtemp_45;
    VlWide<4>/*127:0*/ __Vtemp_46;
    VlWide<4>/*127:0*/ __Vtemp_47;
    VlWide<4>/*127:0*/ __Vtemp_48;
    VlWide<4>/*127:0*/ __Vtemp_49;
    VlWide<4>/*127:0*/ __Vtemp_50;
    VlWide<4>/*127:0*/ __Vtemp_51;
    VlWide<4>/*127:0*/ __Vtemp_52;
    VlWide<4>/*127:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_55;
    VlWide<4>/*127:0*/ __Vtemp_56;
    VlWide<3>/*95:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_58;
    VlWide<3>/*95:0*/ __Vtemp_59;
    VlWide<4>/*127:0*/ __Vtemp_60;
    VlWide<4>/*127:0*/ __Vtemp_61;
    // Body
    vlSelfRef.__PVT__sel_cmq_path_ph3 = (((((~ (IData)(vlSelfRef.__PVT__cachehit_ph3)) 
                                            | (IData)(vlSelfRef.__PVT__cmd_addr_ph3_has_matchingentry_incmq)) 
                                           & (~ (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3))) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3)) 
                                         & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)));
    vlSelfRef.__PVT__rddata_cache_sel_ph3 = ((IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)
                                              ? 0U : 
                                             ((IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3)
                                               ? VL_SEL_IWII(84, vlSelfRef.__PVT__evict_details, 0U, 32)
                                               : vlSelfRef.__PVT__rddata_cache_ph3));
    vlSelfRef.__PVT__wren_cmq_ph4_nxt = (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req) 
                                          & (IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3)) 
                                         & (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3));
    vlSelfRef.__PVT__cmdvalid_ph4_req_nxt = ((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req) 
                                             & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                                                     & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                                                    & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                                                   & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                                                  & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                                                 | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                                                      & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                                                     & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                                                    & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                                                | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                                                   & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wren_collnq_valid, 
                    ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & ((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                          & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                         & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                            | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                           & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                               | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                              | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wren_collnq_valid, 
                    ((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U)) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 1U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & ((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                          & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                         & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                            | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                           & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                               | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                              | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wren_collnq_valid, 
                    ((((0U == (3U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U, 2))) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 2U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & ((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                          & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                         & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                            | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                           & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                               | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                              | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wren_collnq_valid, 
                    ((((0U == (7U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U, 3))) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 3U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & ((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                          & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                         & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                            | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                           & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                               | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                              | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wren_collnq_valid, 
                    ((((0U == (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U, 4))) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 4U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & ((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                          & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                         & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                            | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                           & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                               | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                              | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wren_collnq_valid, 
                    ((((0U == (0x1fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U, 5))) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 5U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & ((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                          & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                         & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                            | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                           & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                               | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                              | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wren_collnq_valid, 
                    ((((0U == (0x3fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U, 6))) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 6U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & ((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                          & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                         & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                            | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                           & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                               | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                              | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wren_collnq_valid, 
                    ((((0U == (0x7fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U, 7))) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 7U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & ((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                          & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                         & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                            | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                           & (((IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3) 
                               | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq)) 
                              | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 1U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (3U & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 2))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 2U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 3))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 3U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0xfU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 4))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 4U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 5))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 5U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x3fU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 6))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 6U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x7fU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 7))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 7U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0xffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 8))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 8U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x1ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 9))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 9U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x3ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 10))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xaU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x7ffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 11))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xbU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0xfffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 12))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xcU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x1fffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 13))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xdU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x3fffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 14))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xeU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x7fffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 15))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xfU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0xffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 16))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x10U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x1ffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 17))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x11U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x3ffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 18))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x12U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x7ffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 19))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x13U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0xfffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 20))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x14U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x1fffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 21))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x15U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x3fffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 22))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x16U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x7fffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 23))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x17U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0xffffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 24))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x18U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x1ffffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 25))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x19U)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x3ffffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 26))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1aU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x7ffffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 27))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1bU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0xfffffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 28))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1cU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x1fffffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 29))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1dU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x3fffffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 30))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1eU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__wren_outstand_cmd, 
                    ((((0U == (0x7fffffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U, 31))) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1fU)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req)) 
                     & (((((((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph3) 
                             & (~ (IData)(vlSelfRef.__PVT__sel_cmq_path_ph3))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                          & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                         | ((((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph3) 
                              & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                             & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))) 
                            & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) 
                        | ((IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3) 
                           & (~ (IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq))))));
    vlSelfRef.__Vcellinp__sig_countones_0__share_vec 
        = VL_EXTEND_II(24,22, (0x3fffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__rddata_cache_sel_ph3, 0xaU, 22)));
    vlSelfRef.__PVT__share_vec_ph3 = (0x3fffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__rddata_cache_sel_ph3, 0xaU, 22));
    vlSelfRef.__PVT__req_share_vect_ph3 = (0x3fffffU 
                                           & VL_SEL_IIII(32, vlSelfRef.__PVT__rddata_cache_sel_ph3, 0xaU, 22));
    vlSelfRef.__PVT__ownerp_id_ph3 = (0x7fU & VL_SEL_IIII(32, vlSelfRef.__PVT__rddata_cache_sel_ph3, 3U, 7));
    vlSelfRef.__PVT__req_cache_st_ph3 = (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__rddata_cache_sel_ph3, 0U, 3));
    VL_CONST_W_5X(160,__Vtemp_1,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(155, 1240, __Vtemp_2, vlSelfRef.__PVT__colln_cmd_field, 0U, 155);
    __Vtemp_3 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U));
    VL_COND_WIWW(155, __Vtemp_4, __Vtemp_3, vlSelfRef.__PVT__cmd_ph3_req, __Vtemp_2);
    VL_AND_W(5, __Vtemp_5, __Vtemp_1, __Vtemp_4);
    VL_ASSIGNSEL_WW(1240,155,0U, vlSelfRef.__PVT__colln_cmd_field_nxt, __Vtemp_5);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U))
                            ? (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)
                            : VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 0U))));
    VL_CONST_W_5X(160,__Vtemp_6,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(155, 1240, __Vtemp_7, vlSelfRef.__PVT__colln_cmd_field, 0x9bU, 155);
    __Vtemp_8 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U));
    VL_COND_WIWW(155, __Vtemp_9, __Vtemp_8, vlSelfRef.__PVT__cmd_ph3_req, __Vtemp_7);
    VL_AND_W(5, __Vtemp_10, __Vtemp_6, __Vtemp_9);
    VL_ASSIGNSEL_WW(1240,155,0x9bU, vlSelfRef.__PVT__colln_cmd_field_nxt, __Vtemp_10);
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U))
                            ? (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)
                            : VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 1U))));
    VL_CONST_W_5X(160,__Vtemp_11,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(155, 1240, __Vtemp_12, vlSelfRef.__PVT__colln_cmd_field, 0x136U, 155);
    __Vtemp_13 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U));
    VL_COND_WIWW(155, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__cmd_ph3_req, __Vtemp_12);
    VL_AND_W(5, __Vtemp_15, __Vtemp_11, __Vtemp_14);
    VL_ASSIGNSEL_WW(1240,155,0x136U, vlSelfRef.__PVT__colln_cmd_field_nxt, __Vtemp_15);
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U))
                            ? (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)
                            : VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 2U))));
    VL_CONST_W_5X(160,__Vtemp_16,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(155, 1240, __Vtemp_17, vlSelfRef.__PVT__colln_cmd_field, 0x1d1U, 155);
    __Vtemp_18 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U));
    VL_COND_WIWW(155, __Vtemp_19, __Vtemp_18, vlSelfRef.__PVT__cmd_ph3_req, __Vtemp_17);
    VL_AND_W(5, __Vtemp_20, __Vtemp_16, __Vtemp_19);
    VL_ASSIGNSEL_WW(1240,155,0x1d1U, vlSelfRef.__PVT__colln_cmd_field_nxt, __Vtemp_20);
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U))
                            ? (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)
                            : VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 3U))));
    VL_CONST_W_5X(160,__Vtemp_21,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(155, 1240, __Vtemp_22, vlSelfRef.__PVT__colln_cmd_field, 0x26cU, 155);
    __Vtemp_23 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U));
    VL_COND_WIWW(155, __Vtemp_24, __Vtemp_23, vlSelfRef.__PVT__cmd_ph3_req, __Vtemp_22);
    VL_AND_W(5, __Vtemp_25, __Vtemp_21, __Vtemp_24);
    VL_ASSIGNSEL_WW(1240,155,0x26cU, vlSelfRef.__PVT__colln_cmd_field_nxt, __Vtemp_25);
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U))
                            ? (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)
                            : VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 4U))));
    VL_CONST_W_5X(160,__Vtemp_26,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(155, 1240, __Vtemp_27, vlSelfRef.__PVT__colln_cmd_field, 0x307U, 155);
    __Vtemp_28 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U));
    VL_COND_WIWW(155, __Vtemp_29, __Vtemp_28, vlSelfRef.__PVT__cmd_ph3_req, __Vtemp_27);
    VL_AND_W(5, __Vtemp_30, __Vtemp_26, __Vtemp_29);
    VL_ASSIGNSEL_WW(1240,155,0x307U, vlSelfRef.__PVT__colln_cmd_field_nxt, __Vtemp_30);
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U))
                            ? (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)
                            : VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 5U))));
    VL_CONST_W_5X(160,__Vtemp_31,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(155, 1240, __Vtemp_32, vlSelfRef.__PVT__colln_cmd_field, 0x3a2U, 155);
    __Vtemp_33 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U));
    VL_COND_WIWW(155, __Vtemp_34, __Vtemp_33, vlSelfRef.__PVT__cmd_ph3_req, __Vtemp_32);
    VL_AND_W(5, __Vtemp_35, __Vtemp_31, __Vtemp_34);
    VL_ASSIGNSEL_WW(1240,155,0x3a2U, vlSelfRef.__PVT__colln_cmd_field_nxt, __Vtemp_35);
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U))
                            ? (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)
                            : VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 6U))));
    VL_CONST_W_5X(160,__Vtemp_36,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(155, 1240, __Vtemp_37, vlSelfRef.__PVT__colln_cmd_field, 0x43dU, 155);
    __Vtemp_38 = (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U));
    VL_COND_WIWW(155, __Vtemp_39, __Vtemp_38, vlSelfRef.__PVT__cmd_ph3_req, __Vtemp_37);
    VL_AND_W(5, __Vtemp_40, __Vtemp_36, __Vtemp_39);
    VL_ASSIGNSEL_WW(1240,155,0x43dU, vlSelfRef.__PVT__colln_cmd_field_nxt, __Vtemp_40);
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_cmd_addr_invalid_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U))
                            ? (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)
                            : VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_addr_invalid), 7U))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_detected_ph2, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 6U, 46)))) 
                     | (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U) 
                        & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                           == (0x3fffffffffffULL & 
                               VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46))))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_detected_ph2, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 1U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x3aU, 46)))) 
                     | (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U) 
                        & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                           == (0x3fffffffffffULL & 
                               VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46))))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_detected_ph2, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 2U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x6eU, 46)))) 
                     | (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U) 
                        & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                           == (0x3fffffffffffULL & 
                               VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46))))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_detected_ph2, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 3U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0xa2U, 46)))) 
                     | (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U) 
                        & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                           == (0x3fffffffffffULL & 
                               VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46))))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_detected_ph2, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 4U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0xd6U, 46)))) 
                     | (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U) 
                        & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                           == (0x3fffffffffffULL & 
                               VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46))))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_detected_ph2, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 5U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x10aU, 46)))) 
                     | (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U) 
                        & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                           == (0x3fffffffffffULL & 
                               VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46))))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_detected_ph2, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 6U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x13eU, 46)))) 
                     | (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U) 
                        & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                           == (0x3fffffffffffULL & 
                               VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46))))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_detected_ph2, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 7U)) 
                      & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                         == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x172U, 46)))) 
                     | (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U) 
                        & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 46)) 
                           == (0x3fffffffffffULL & 
                               VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46))))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_atom_detected_ph2, 
                    ((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U)) 
                       & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                          & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U))) 
                      & (~ (((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11))) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)))))) 
                     | ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U) 
                         & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                            & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) 
                        & (~ (((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11)) 
                               == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))) 
                              & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)) 
                                 == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))))))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_atom_detected_ph2, 
                    ((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 1U)) 
                       & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                          & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U))) 
                      & (~ (((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11))) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)))))) 
                     | ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U) 
                         & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                            & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) 
                        & (~ (((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11)) 
                               == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))) 
                              & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)) 
                                 == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))))))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_atom_detected_ph2, 
                    ((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 2U)) 
                       & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                          & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU))) 
                      & (~ (((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11))) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)))))) 
                     | ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U) 
                         & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                            & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) 
                        & (~ (((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11)) 
                               == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))) 
                              & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)) 
                                 == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))))))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_atom_detected_ph2, 
                    ((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 3U)) 
                       & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                          & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x6bU))) 
                      & (~ (((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x60U, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11))) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x54U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)))))) 
                     | ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U) 
                         & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                            & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) 
                        & (~ (((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11)) 
                               == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))) 
                              & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)) 
                                 == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))))))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_atom_detected_ph2, 
                    ((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 4U)) 
                       & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                          & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x87U))) 
                      & (~ (((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x7cU, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11))) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x70U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)))))) 
                     | ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U) 
                         & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                            & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) 
                        & (~ (((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11)) 
                               == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))) 
                              & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)) 
                                 == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))))))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_atom_detected_ph2, 
                    ((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 5U)) 
                       & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                          & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa3U))) 
                      & (~ (((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x98U, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11))) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x8cU, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)))))) 
                     | ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U) 
                         & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                            & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) 
                        & (~ (((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11)) 
                               == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))) 
                              & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)) 
                                 == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))))))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_atom_detected_ph2, 
                    ((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 6U)) 
                       & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                          & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xbfU))) 
                      & (~ (((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xb4U, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11))) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa8U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)))))) 
                     | ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U) 
                         & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                            & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) 
                        & (~ (((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11)) 
                               == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))) 
                              & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)) 
                                 == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))))))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_atom_detected_ph2, 
                    ((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 7U)) 
                       & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                          & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xdbU))) 
                      & (~ (((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xd0U, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11))) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xc4U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)))))) 
                     | ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U) 
                         & ((IData)(vlSelfRef.__PVT__cmd_isatmo_ph2) 
                            & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) 
                        & (~ (((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0xfU, 11)) 
                               == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))) 
                              & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x1aU, 12)) 
                                 == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))))))));
    VL_ASSIGNSEL_WI(224,12,0U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12))));
    VL_ASSIGNSEL_WI(224,12,0x1cU, vlSelfRef.__PVT__colln_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12))));
    VL_ASSIGNSEL_WI(224,12,0x38U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12))));
    VL_ASSIGNSEL_WI(224,12,0x54U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x54U, 12))));
    VL_ASSIGNSEL_WI(224,12,0x70U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x70U, 12))));
    VL_ASSIGNSEL_WI(224,12,0x8cU, vlSelfRef.__PVT__colln_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x8cU, 12))));
    VL_ASSIGNSEL_WI(224,12,0xa8U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa8U, 12))));
    VL_ASSIGNSEL_WI(224,12,0xc4U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xc4U, 12))));
    VL_ASSIGNSEL_WI(224,12,0xcU, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)))));
    VL_ASSIGNSEL_WI(224,12,0x28U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)))));
    VL_ASSIGNSEL_WI(224,12,0x44U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)))));
    VL_ASSIGNSEL_WI(224,12,0x60U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x6bU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x60U, 11)))));
    VL_ASSIGNSEL_WI(224,12,0x7cU, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x87U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x7cU, 11)))));
    VL_ASSIGNSEL_WI(224,12,0x98U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa3U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x98U, 11)))));
    VL_ASSIGNSEL_WI(224,12,0xb4U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xbfU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xb4U, 11)))));
    VL_ASSIGNSEL_WI(224,12,0xd0U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xdbU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xd0U, 11)))));
    VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U) 
           & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
          & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
         & (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match))) {
        VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match)))) {
        VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 7U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                   | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) {
        VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 1U : 0U)))));
    } else if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_addr_match), 0U) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 0U))))) {
        VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 3U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U) 
           & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
          & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
         & (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match))) {
        VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match)))) {
        VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 7U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                   | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) {
        VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 1U : 0U)))));
    } else if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_addr_match), 1U) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 1U))))) {
        VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 3U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 6U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U) 
           & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
          & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
         & (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match))) {
        VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match)))) {
        VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 7U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                   | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) {
        VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 1U : 0U)))));
    } else if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_addr_match), 2U) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 2U))))) {
        VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 6U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 9U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U) 
           & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
          & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
         & (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match))) {
        VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match)))) {
        VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 7U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                   | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) {
        VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 1U : 0U)))));
    } else if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_addr_match), 3U) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 3U))))) {
        VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 9U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xcU, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U) 
           & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
          & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
         & (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match))) {
        VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match)))) {
        VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 7U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                   | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) {
        VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 1U : 0U)))));
    } else if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_addr_match), 4U) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 4U))))) {
        VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xcU, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xfU, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U) 
           & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
          & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
         & (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match))) {
        VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match)))) {
        VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 7U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                   | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) {
        VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 1U : 0U)))));
    } else if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_addr_match), 5U) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 5U))))) {
        VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xfU, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x12U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U) 
           & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
          & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
         & (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match))) {
        VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match)))) {
        VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 7U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                   | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) {
        VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 1U : 0U)))));
    } else if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_addr_match), 6U) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 6U))))) {
        VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x12U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x15U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U) 
           & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
          & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
         & (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match))) {
        VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), (IData)(vlSelfRef.__PVT__highest_seqnum_is3)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2), (IData)(vlSelfRef.__PVT__highest_seqnum_is1))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3)) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match)))) {
        VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((0x10U == VL_CONCAT_III(5,3,2, 
                                                 VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 7U : ((8U == VL_CONCAT_III(5,3,2, 
                                                       VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                     VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 4U : ((4U == VL_CONCAT_III(5,3,2, 
                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 3U : 
                                           ((2U == 
                                             VL_CONCAT_III(5,3,2, 
                                                           VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__highest_seqnum_is4), 
                                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2))), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U) 
                  & (~ (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3))) 
                 & (~ (IData)(vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3))) 
                & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                   | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq)))) {
        VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3), (IData)(vlSelfRef.__PVT__highest_seqnum_is2)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1), (IData)(vlSelfRef.__PVT__highest_seqnum_is0))))
                                             ? 1U : 0U)))));
    } else if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_addr_match), 7U) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 7U))))) {
        VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x15U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U) 
           & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
          & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
         & VL_REDOR_I((IData)(vlSelfRef.__PVT__decrement_seq_num_atom)))) {
        VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom))) {
        VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 5U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 4U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 3U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & (((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                     & (~ ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                           & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd))))) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom)))) {
        VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 1U))));
    } else if (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U) 
                 & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                & ((~ ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                       | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                   | ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                      & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))))) {
        VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 1U : 0U)))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__decrement_seq_num_atom), 0U))) {
        VL_ASSIGNSEL_II(24,3,0U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 3U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U) 
           & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
          & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
         & VL_REDOR_I((IData)(vlSelfRef.__PVT__decrement_seq_num_atom)))) {
        VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom))) {
        VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 5U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 4U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 3U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & (((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                     & (~ ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                           & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd))))) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom)))) {
        VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 1U))));
    } else if (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U) 
                 & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                & ((~ ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                       | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                   | ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                      & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))))) {
        VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 1U : 0U)))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__decrement_seq_num_atom), 1U))) {
        VL_ASSIGNSEL_II(24,3,3U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 3U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 6U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U) 
           & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
          & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
         & VL_REDOR_I((IData)(vlSelfRef.__PVT__decrement_seq_num_atom)))) {
        VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom))) {
        VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 5U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 4U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 3U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & (((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                     & (~ ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                           & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd))))) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom)))) {
        VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 1U))));
    } else if (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U) 
                 & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                & ((~ ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                       | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                   | ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                      & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))))) {
        VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 1U : 0U)))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__decrement_seq_num_atom), 2U))) {
        VL_ASSIGNSEL_II(24,3,6U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 6U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 9U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U) 
           & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
          & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
         & VL_REDOR_I((IData)(vlSelfRef.__PVT__decrement_seq_num_atom)))) {
        VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom))) {
        VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 5U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 4U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 3U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & (((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                     & (~ ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                           & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd))))) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom)))) {
        VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 1U))));
    } else if (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U) 
                 & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                & ((~ ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                       | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                   | ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                      & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))))) {
        VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 1U : 0U)))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__decrement_seq_num_atom), 3U))) {
        VL_ASSIGNSEL_II(24,3,9U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 9U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0xcU, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U) 
           & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
          & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
         & VL_REDOR_I((IData)(vlSelfRef.__PVT__decrement_seq_num_atom)))) {
        VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom))) {
        VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 5U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 4U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 3U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & (((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                     & (~ ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                           & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd))))) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom)))) {
        VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 1U))));
    } else if (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U) 
                 & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                & ((~ ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                       | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                   | ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                      & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))))) {
        VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 1U : 0U)))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__decrement_seq_num_atom), 4U))) {
        VL_ASSIGNSEL_II(24,3,0xcU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0xcU, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0xfU, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U) 
           & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
          & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
         & VL_REDOR_I((IData)(vlSelfRef.__PVT__decrement_seq_num_atom)))) {
        VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom))) {
        VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 5U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 4U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 3U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & (((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                     & (~ ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                           & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd))))) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom)))) {
        VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 1U))));
    } else if (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U) 
                 & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                & ((~ ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                       | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                   | ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                      & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))))) {
        VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 1U : 0U)))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__decrement_seq_num_atom), 5U))) {
        VL_ASSIGNSEL_II(24,3,0xfU, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0xfU, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0x12U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U) 
           & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
          & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
         & VL_REDOR_I((IData)(vlSelfRef.__PVT__decrement_seq_num_atom)))) {
        VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom))) {
        VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 5U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 4U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 3U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & (((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                     & (~ ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                           & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd))))) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom)))) {
        VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 1U))));
    } else if (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U) 
                 & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                & ((~ ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                       | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                   | ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                      & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))))) {
        VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 1U : 0U)))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__decrement_seq_num_atom), 6U))) {
        VL_ASSIGNSEL_II(24,3,0x12U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0x12U, 3) 
                               - (IData)(1U))));
    }
    VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                    (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0x15U, 3)));
    if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U) 
           & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
          & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
             | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
         & VL_REDOR_I((IData)(vlSelfRef.__PVT__decrement_seq_num_atom)))) {
        VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 2U : 1U))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom))) {
        VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                          ? 5U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                   ? 4U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                            ? 3U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is4_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom))))
                                             ? 2U : 1U)))));
    } else if ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U) 
                  & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                 & (((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                     & (~ ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                           & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd))))) 
                    | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                & (~ (IData)(vlSelfRef.__PVT__colln_newentry_atom_clr_atom)))) {
        VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 1U))));
    } else if (((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U) 
                 & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                & ((~ ((IData)(vlSelfRef.__PVT__colln_atom_detected_in_outstq) 
                       | (IData)(vlSelfRef.__PVT__colln_atom_detected_in_collnq))) 
                   | ((IData)(vlSelfRef.__PVT__outstand_atmo_wr) 
                      & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))))) {
        VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        ((8U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                          ? 4U : ((4U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                   ? 3U : ((2U == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                            ? 2U : 
                                           ((1U == 
                                             VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is3_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is2_atom)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__highest_seqnum_is1_atom), (IData)(vlSelfRef.__PVT__highest_seqnum_is0_atom))))
                                             ? 1U : 0U)))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__decrement_seq_num_atom), 7U))) {
        VL_ASSIGNSEL_II(24,3,0x15U, vlSelfRef.__PVT__seq_num_atom_nxt, 
                        (7U & (VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0x15U, 3) 
                               - (IData)(1U))));
    }
    VL_CONCAT_WQQ(104,52,52, __Vtemp_41, (0xfffffffffffffULL 
                                          & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U))
                                              ? vlSelfRef.__PVT__cmd_addr_ph3
                                              : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x34U, 52))), 
                  (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U))
                                          ? vlSelfRef.__PVT__cmd_addr_ph3
                                          : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0U, 52))));
    VL_ASSIGNSEL_WW(1664,104,0U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, __Vtemp_41);
    VL_CONCAT_WQQ(104,52,52, __Vtemp_42, (0xfffffffffffffULL 
                                          & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U))
                                              ? vlSelfRef.__PVT__cmd_addr_ph3
                                              : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x9cU, 52))), 
                  (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U))
                                          ? vlSelfRef.__PVT__cmd_addr_ph3
                                          : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x68U, 52))));
    VL_ASSIGNSEL_WW(1664,104,0x68U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, __Vtemp_42);
    VL_CONCAT_WQQ(104,52,52, __Vtemp_43, (0xfffffffffffffULL 
                                          & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U))
                                              ? vlSelfRef.__PVT__cmd_addr_ph3
                                              : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x104U, 52))), 
                  (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U))
                                          ? vlSelfRef.__PVT__cmd_addr_ph3
                                          : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0xd0U, 52))));
    VL_ASSIGNSEL_WW(1664,104,0xd0U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, __Vtemp_43);
    VL_CONCAT_WQQ(104,52,52, __Vtemp_44, (0xfffffffffffffULL 
                                          & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U))
                                              ? vlSelfRef.__PVT__cmd_addr_ph3
                                              : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x16cU, 52))), 
                  (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U))
                                          ? vlSelfRef.__PVT__cmd_addr_ph3
                                          : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x138U, 52))));
    VL_ASSIGNSEL_WW(1664,104,0x138U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, __Vtemp_44);
    VL_CONCAT_WQQ(104,52,52, __Vtemp_45, (0xfffffffffffffULL 
                                          & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U))
                                              ? vlSelfRef.__PVT__cmd_addr_ph3
                                              : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x1d4U, 52))), 
                  (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U))
                                          ? vlSelfRef.__PVT__cmd_addr_ph3
                                          : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x1a0U, 52))));
    VL_ASSIGNSEL_WW(1664,104,0x1a0U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, __Vtemp_45);
    VL_CONCAT_WQQ(104,52,52, __Vtemp_46, (0xfffffffffffffULL 
                                          & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU))
                                              ? vlSelfRef.__PVT__cmd_addr_ph3
                                              : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x23cU, 52))), 
                  (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU))
                                          ? vlSelfRef.__PVT__cmd_addr_ph3
                                          : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x208U, 52))));
    VL_ASSIGNSEL_WW(1664,104,0x208U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, __Vtemp_46);
    VL_CONCAT_WQQ(104,52,52, __Vtemp_47, (0xfffffffffffffULL 
                                          & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU))
                                              ? vlSelfRef.__PVT__cmd_addr_ph3
                                              : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x2a4U, 52))), 
                  (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU))
                                          ? vlSelfRef.__PVT__cmd_addr_ph3
                                          : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x270U, 52))));
    VL_ASSIGNSEL_WW(1664,104,0x270U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, __Vtemp_47);
    VL_CONCAT_WQQ(104,52,52, __Vtemp_48, (0xfffffffffffffULL 
                                          & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU))
                                              ? vlSelfRef.__PVT__cmd_addr_ph3
                                              : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x30cU, 52))), 
                  (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU))
                                          ? vlSelfRef.__PVT__cmd_addr_ph3
                                          : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x2d8U, 52))));
    VL_ASSIGNSEL_WW(1664,104,0x2d8U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, __Vtemp_48);
    VL_CONCAT_WQQ(104,52,52, __Vtemp_49, (0xfffffffffffffULL 
                                          & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U))
                                              ? vlSelfRef.__PVT__cmd_addr_ph3
                                              : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x374U, 52))), 
                  (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U))
                                          ? vlSelfRef.__PVT__cmd_addr_ph3
                                          : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x340U, 52))));
    VL_ASSIGNSEL_WW(1664,104,0x340U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, __Vtemp_49);
    VL_CONCAT_WQQ(104,52,52, __Vtemp_50, (0xfffffffffffffULL 
                                          & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U))
                                              ? vlSelfRef.__PVT__cmd_addr_ph3
                                              : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x3dcU, 52))), 
                  (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U))
                                          ? vlSelfRef.__PVT__cmd_addr_ph3
                                          : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x3a8U, 52))));
    VL_ASSIGNSEL_WW(1664,104,0x3a8U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, __Vtemp_50);
    VL_CONCAT_WQQ(104,52,52, __Vtemp_51, (0xfffffffffffffULL 
                                          & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U))
                                              ? vlSelfRef.__PVT__cmd_addr_ph3
                                              : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x444U, 52))), 
                  (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U))
                                          ? vlSelfRef.__PVT__cmd_addr_ph3
                                          : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x410U, 52))));
    VL_ASSIGNSEL_WW(1664,104,0x410U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, __Vtemp_51);
    VL_CONCAT_WQQ(104,52,52, __Vtemp_52, (0xfffffffffffffULL 
                                          & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U))
                                              ? vlSelfRef.__PVT__cmd_addr_ph3
                                              : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x4acU, 52))), 
                  (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U))
                                          ? vlSelfRef.__PVT__cmd_addr_ph3
                                          : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x478U, 52))));
    VL_ASSIGNSEL_WW(1664,104,0x478U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, __Vtemp_52);
    VL_CONCAT_WQQ(104,52,52, __Vtemp_53, (0xfffffffffffffULL 
                                          & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U))
                                              ? vlSelfRef.__PVT__cmd_addr_ph3
                                              : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x514U, 52))), 
                  (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U))
                                          ? vlSelfRef.__PVT__cmd_addr_ph3
                                          : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x4e0U, 52))));
    VL_ASSIGNSEL_WW(1664,104,0x4e0U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, __Vtemp_53);
    VL_CONCAT_WQQ(104,52,52, __Vtemp_54, (0xfffffffffffffULL 
                                          & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU))
                                              ? vlSelfRef.__PVT__cmd_addr_ph3
                                              : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x57cU, 52))), 
                  (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU))
                                          ? vlSelfRef.__PVT__cmd_addr_ph3
                                          : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x548U, 52))));
    VL_ASSIGNSEL_WW(1664,104,0x548U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, __Vtemp_54);
    VL_CONCAT_WQQ(104,52,52, __Vtemp_55, (0xfffffffffffffULL 
                                          & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU))
                                              ? vlSelfRef.__PVT__cmd_addr_ph3
                                              : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x5e4U, 52))), 
                  (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU))
                                          ? vlSelfRef.__PVT__cmd_addr_ph3
                                          : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x5b0U, 52))));
    VL_ASSIGNSEL_WW(1664,104,0x5b0U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, __Vtemp_55);
    VL_CONCAT_WQQ(104,52,52, __Vtemp_56, (0xfffffffffffffULL 
                                          & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU))
                                              ? vlSelfRef.__PVT__cmd_addr_ph3
                                              : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x64cU, 52))), 
                  (0xfffffffffffffULL & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU))
                                          ? vlSelfRef.__PVT__cmd_addr_ph3
                                          : VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x618U, 52))));
    VL_ASSIGNSEL_WW(1664,104,0x618U, vlSelfRef.__PVT__outstand_cmd_addr_nxt, __Vtemp_56);
    VL_ASSIGNSEL_WI(576,18,0U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U))) {
        VL_ASSIGNSEL_WI(576,18,0U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x12U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x12U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U))) {
        VL_ASSIGNSEL_WI(576,18,0x12U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 1U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x12U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x12U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x12U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x24U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x24U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U))) {
        VL_ASSIGNSEL_WI(576,18,0x24U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 2U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x24U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x24U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x24U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x36U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x36U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U))) {
        VL_ASSIGNSEL_WI(576,18,0x36U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 3U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x36U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x36U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x36U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x48U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x48U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U))) {
        VL_ASSIGNSEL_WI(576,18,0x48U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 4U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x48U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x48U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x48U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x5aU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x5aU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U))) {
        VL_ASSIGNSEL_WI(576,18,0x5aU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 5U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x5aU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x5aU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x5aU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x6cU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x6cU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U))) {
        VL_ASSIGNSEL_WI(576,18,0x6cU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 6U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x6cU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x6cU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x6cU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x7eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x7eU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U))) {
        VL_ASSIGNSEL_WI(576,18,0x7eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 7U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x7eU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x7eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x7eU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x90U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x90U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U))) {
        VL_ASSIGNSEL_WI(576,18,0x90U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 8U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x90U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x90U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x90U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0xa2U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xa2U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U))) {
        VL_ASSIGNSEL_WI(576,18,0xa2U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 9U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xa2U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0xa2U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xa2U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0xb4U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xb4U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU))) {
        VL_ASSIGNSEL_WI(576,18,0xb4U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xaU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xb4U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0xb4U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xb4U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0xc6U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xc6U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU))) {
        VL_ASSIGNSEL_WI(576,18,0xc6U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xbU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xc6U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0xc6U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xc6U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0xd8U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xd8U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU))) {
        VL_ASSIGNSEL_WI(576,18,0xd8U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xcU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xd8U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0xd8U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xd8U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0xeaU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xeaU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU))) {
        VL_ASSIGNSEL_WI(576,18,0xeaU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xdU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xeaU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0xeaU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xeaU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0xfcU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xfcU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU))) {
        VL_ASSIGNSEL_WI(576,18,0xfcU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xeU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xfcU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0xfcU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xfcU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x10eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x10eU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU))) {
        VL_ASSIGNSEL_WI(576,18,0x10eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xfU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x10eU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x10eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x10eU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x120U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x120U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U))) {
        VL_ASSIGNSEL_WI(576,18,0x120U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x10U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x120U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x120U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x120U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x132U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x132U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U))) {
        VL_ASSIGNSEL_WI(576,18,0x132U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x11U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x132U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x132U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x132U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x144U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x144U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U))) {
        VL_ASSIGNSEL_WI(576,18,0x144U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x12U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x144U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x144U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x144U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x156U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x156U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U))) {
        VL_ASSIGNSEL_WI(576,18,0x156U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x13U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x156U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x156U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x156U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x168U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x168U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U))) {
        VL_ASSIGNSEL_WI(576,18,0x168U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x14U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x168U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x168U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x168U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x17aU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x17aU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U))) {
        VL_ASSIGNSEL_WI(576,18,0x17aU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x15U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x17aU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x17aU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x17aU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x18cU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x18cU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U))) {
        VL_ASSIGNSEL_WI(576,18,0x18cU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x16U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x18cU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x18cU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x18cU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x19eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x19eU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U))) {
        VL_ASSIGNSEL_WI(576,18,0x19eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x17U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x19eU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x19eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x19eU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x1b0U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1b0U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U))) {
        VL_ASSIGNSEL_WI(576,18,0x1b0U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x18U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1b0U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x1b0U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1b0U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x1c2U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1c2U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U))) {
        VL_ASSIGNSEL_WI(576,18,0x1c2U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x19U)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1c2U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x1c2U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1c2U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x1d4U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1d4U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU))) {
        VL_ASSIGNSEL_WI(576,18,0x1d4U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1aU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1d4U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x1d4U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1d4U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x1e6U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1e6U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU))) {
        VL_ASSIGNSEL_WI(576,18,0x1e6U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1bU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1e6U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x1e6U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1e6U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x1f8U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1f8U, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU))) {
        VL_ASSIGNSEL_WI(576,18,0x1f8U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1cU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1f8U, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x1f8U, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1f8U, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x20aU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x20aU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU))) {
        VL_ASSIGNSEL_WI(576,18,0x20aU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1dU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x20aU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x20aU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x20aU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x21cU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x21cU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU))) {
        VL_ASSIGNSEL_WI(576,18,0x21cU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1eU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x21cU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x21cU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x21cU, 18))));
    }
    VL_ASSIGNSEL_WI(576,18,0x22eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                    (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x22eU, 18)));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU))) {
        VL_ASSIGNSEL_WI(576,18,0x22eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1fU)) 
                & (0x3ffffU != (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x22eU, 18))))) {
        VL_ASSIGNSEL_WI(576,18,0x22eU, vlSelfRef.__PVT__cmd_timeoutctr_nxt, 
                        (0x3ffffU & ((IData)(1U) + 
                                     VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x22eU, 18))));
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0U)))) {
        VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0U, 18))))) {
        VL_ASSIGNBIT_IO(0U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 1U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 1U)))) {
        VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 1U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x12U, 18))))) {
        VL_ASSIGNBIT_IO(1U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 2U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 2U)))) {
        VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 2U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x24U, 18))))) {
        VL_ASSIGNBIT_IO(2U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 3U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 3U)))) {
        VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 3U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x36U, 18))))) {
        VL_ASSIGNBIT_IO(3U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 4U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 4U)))) {
        VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 4U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x48U, 18))))) {
        VL_ASSIGNBIT_IO(4U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 5U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 5U)))) {
        VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 5U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x5aU, 18))))) {
        VL_ASSIGNBIT_IO(5U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 6U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 6U)))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 6U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x6cU, 18))))) {
        VL_ASSIGNBIT_IO(6U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 7U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 7U)))) {
        VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 7U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x7eU, 18))))) {
        VL_ASSIGNBIT_IO(7U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 8U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 8U)))) {
        VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 8U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x90U, 18))))) {
        VL_ASSIGNBIT_IO(8U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 9U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 9U)))) {
        VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 9U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xa2U, 18))))) {
        VL_ASSIGNBIT_IO(9U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0xaU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0xaU)))) {
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xaU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xb4U, 18))))) {
        VL_ASSIGNBIT_IO(0xaU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0xbU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0xbU)))) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xbU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xc6U, 18))))) {
        VL_ASSIGNBIT_IO(0xbU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0xcU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0xcU)))) {
        VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xcU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xd8U, 18))))) {
        VL_ASSIGNBIT_IO(0xcU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0xdU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0xdU)))) {
        VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xdU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xeaU, 18))))) {
        VL_ASSIGNBIT_IO(0xdU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0xeU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0xeU)))) {
        VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xeU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0xfcU, 18))))) {
        VL_ASSIGNBIT_IO(0xeU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0xfU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0xfU)))) {
        VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xfU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x10eU, 18))))) {
        VL_ASSIGNBIT_IO(0xfU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x10U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x10U)))) {
        VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x10U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x120U, 18))))) {
        VL_ASSIGNBIT_IO(0x10U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x11U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x11U)))) {
        VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x11U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x132U, 18))))) {
        VL_ASSIGNBIT_IO(0x11U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x12U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x12U)))) {
        VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x12U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x144U, 18))))) {
        VL_ASSIGNBIT_IO(0x12U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x13U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x13U)))) {
        VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x13U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x156U, 18))))) {
        VL_ASSIGNBIT_IO(0x13U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x14U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x14U)))) {
        VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x14U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x168U, 18))))) {
        VL_ASSIGNBIT_IO(0x14U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x15U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x15U)))) {
        VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x15U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x17aU, 18))))) {
        VL_ASSIGNBIT_IO(0x15U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x16U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x16U)))) {
        VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x16U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x18cU, 18))))) {
        VL_ASSIGNBIT_IO(0x16U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x17U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x17U)))) {
        VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x17U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x19eU, 18))))) {
        VL_ASSIGNBIT_IO(0x17U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x18U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x18U)))) {
        VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x18U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1b0U, 18))))) {
        VL_ASSIGNBIT_IO(0x18U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x19U)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x19U)))) {
        VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x19U)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1c2U, 18))))) {
        VL_ASSIGNBIT_IO(0x19U, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x1aU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x1aU)))) {
        VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1aU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1d4U, 18))))) {
        VL_ASSIGNBIT_IO(0x1aU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x1bU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x1bU)))) {
        VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1bU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1e6U, 18))))) {
        VL_ASSIGNBIT_IO(0x1bU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x1cU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x1cU)))) {
        VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1cU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x1f8U, 18))))) {
        VL_ASSIGNBIT_IO(0x1cU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x1dU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x1dU)))) {
        VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1dU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x20aU, 18))))) {
        VL_ASSIGNBIT_IO(0x1dU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x1eU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x1eU)))) {
        VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1eU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x21cU, 18))))) {
        VL_ASSIGNBIT_IO(0x1eU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 
                    (1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0x1fU)));
    if ((1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU) 
               | VL_BITSEL_IIII(32, vlSelfRef.__PVT__service_timeout_flag, 0x1fU)))) {
        VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__cmd_timeout_flag_nxt, 0U);
    } else if (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1fU)) 
                & (0x3ffffU == (0x3ffffU & VL_SEL_IWII(576, vlSelfRef.__PVT__cmd_timeoutctr, 0x22eU, 18))))) {
        VL_ASSIGNBIT_IO(0x1fU, vlSelfRef.__PVT__cmd_timeout_flag_nxt);
    }
    VL_ASSIGNSEL_WI(768,12,0U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x18U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x18U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x30U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x30U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x48U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x48U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x60U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x60U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x78U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x78U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x90U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x90U, 12))));
    VL_ASSIGNSEL_WI(768,12,0xa8U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xa8U, 12))));
    VL_ASSIGNSEL_WI(768,12,0xc0U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xc0U, 12))));
    VL_ASSIGNSEL_WI(768,12,0xd8U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xd8U, 12))));
    VL_ASSIGNSEL_WI(768,12,0xf0U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xf0U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x108U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x108U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x120U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x120U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x138U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x138U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x150U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x150U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x168U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x168U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x180U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x180U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x198U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x198U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x1b0U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1b0U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x1c8U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1c8U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x1e0U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1e0U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x1f8U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1f8U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x210U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x210U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x228U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x228U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x240U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x240U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x258U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x258U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x270U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x270U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x288U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x288U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x2a0U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2a0U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x2b8U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2b8U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x2d0U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2d0U, 12))));
    VL_ASSIGNSEL_WI(768,12,0x2e8U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    (0xfffU & ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU))
                                ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)
                                : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2e8U, 12))));
    VL_ASSIGNSEL_WI(768,12,0xcU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x17U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xcU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x24U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x24U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x3cU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x47U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x3cU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x54U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x5fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x54U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x6cU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x77U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x6cU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x84U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x8fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x84U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x9cU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xa7U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x9cU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0xb4U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xbfU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xb4U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0xccU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xd7U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xccU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0xe4U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xefU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xe4U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0xfcU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x107U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xfcU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x114U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x11fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x114U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x12cU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x137U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x12cU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x144U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x14fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x144U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x15cU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x167U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x15cU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x174U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x17fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x174U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x18cU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x197U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x18cU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x1a4U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1afU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1a4U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x1bcU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1c7U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1bcU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x1d4U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1dfU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1d4U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x1ecU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1f7U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1ecU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x204U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x20fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x204U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x21cU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x227U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x21cU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x234U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x23fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x234U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x24cU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x257U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x24cU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x264U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x26fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x264U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x27cU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x287U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x27cU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x294U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x29fU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x294U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x2acU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2b7U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2acU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x2c4U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2cfU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2c4U, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x2dcU, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2e7U))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2dcU, 11)))));
    VL_ASSIGNSEL_WI(768,12,0x2f4U, vlSelfRef.__PVT__outstand_cmd_nxt, 
                    VL_CONCAT_III(12,1,11, (1U & ((1U 
                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU))
                                                   ? (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)
                                                   : 
                                                  VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2ffU))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU))
                                              ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                              : VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2f4U, 11)))));
    vlSelfRef.__PVT__wrindex_req_ph3 = 0U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1fU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x1fU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x1eU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1eU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x1eU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x1dU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1dU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x1dU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x1cU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1cU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x1cU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x1bU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1bU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x1bU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x1aU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x1aU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x1aU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x19U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x19U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x19U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x18U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x18U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x18U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x17U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x17U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x17U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x16U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x16U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x16U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x15U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x15U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x15U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x14U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x14U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x14U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x13U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x13U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x13U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x12U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x12U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x12U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x11U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x11U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x11U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x10U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0x10U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0x10U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xfU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xfU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0xfU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xeU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xeU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0xeU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xdU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xdU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0xdU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xcU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xcU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0xcU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xbU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xbU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0xbU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xaU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0xaU))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0xaU;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 9U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 9U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 9U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 8U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 8U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 8U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 7U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 7U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 7U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 6U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 6U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 6U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 5U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 5U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 5U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 4U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 4U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 4U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 3U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 3U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 3U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 2U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 2U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 2U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 1U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 1U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 1U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_outstand_cmd, 0U))) {
        vlSelfRef.__PVT__wrindex_req_ph3 = 0U;
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xffffffffU;
    vlSelfRef.__PVT__cmdvalid_ph3_req_outstd = VL_REDOR_I(vlSelfRef.__PVT__wren_outstand_cmd);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_0.__PVT__share_vec 
        = vlSelfRef.__Vcellinp__sig_countones_0__share_vec;
    vlSelfRef.__PVT__reqid_matches_sharevec_ph3 = (
                                                   (0x15U 
                                                    >= 
                                                    (0x1fU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 5))) 
                                                   && (1U 
                                                       & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vec_ph3, 
                                                                        (0x1fU 
                                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 5)))));
    vlSelfRef.__PVT__req_share_vect_m_ph3 = vlSelfRef.__PVT__req_share_vect_ph3;
    vlSelfRef.__PVT__reqid_matches_ownerpid_ph3 = (
                                                   (0x7fU 
                                                    & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 7)) 
                                                   == (IData)(vlSelfRef.__PVT__ownerp_id_ph3));
    vlSelfRef.__PVT__req_st_invalid_ph3 = (1U & (~ 
                                                 VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 0U)));
    VL_ASSIGNSEL_II(24,9,0U, vlSelfRef.__PVT__seq_num_all_nxt, 
                    VL_CONCAT_III(9,3,6, (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_nxt, 6U, 3)), 
                                  VL_CONCAT_III(6,3,3, 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_nxt, 3U, 3)), 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_nxt, 0U, 3)))));
    VL_ASSIGNSEL_II(24,9,9U, vlSelfRef.__PVT__seq_num_all_nxt, 
                    VL_CONCAT_III(9,3,6, (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_nxt, 0xfU, 3)), 
                                  VL_CONCAT_III(6,3,3, 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_nxt, 0xcU, 3)), 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_nxt, 9U, 3)))));
    VL_ASSIGNSEL_II(24,6,0x12U, vlSelfRef.__PVT__seq_num_all_nxt, 
                    VL_CONCAT_III(6,3,3, (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_nxt, 0x15U, 3)), 
                                  (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_nxt, 0x12U, 3))));
    VL_ASSIGNSEL_II(24,9,0U, vlSelfRef.__PVT__seq_num_all_atom_nxt, 
                    VL_CONCAT_III(9,3,6, (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom_nxt, 6U, 3)), 
                                  VL_CONCAT_III(6,3,3, 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom_nxt, 3U, 3)), 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom_nxt, 0U, 3)))));
    VL_ASSIGNSEL_II(24,9,9U, vlSelfRef.__PVT__seq_num_all_atom_nxt, 
                    VL_CONCAT_III(9,3,6, (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom_nxt, 0xfU, 3)), 
                                  VL_CONCAT_III(6,3,3, 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom_nxt, 0xcU, 3)), 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom_nxt, 9U, 3)))));
    VL_ASSIGNSEL_II(24,6,0x12U, vlSelfRef.__PVT__seq_num_all_atom_nxt, 
                    VL_CONCAT_III(6,3,3, (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom_nxt, 0x15U, 3)), 
                                  (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom_nxt, 0x12U, 3))));
    vlSelfRef.__PVT__cmd_ph4_23_18_req_nxt = vlSelfRef.__PVT__wrindex_req_ph3;
    vlSelfRef.__PVT__wraddr_stat_req_ph3 = vlSelfRef.__PVT__wrindex_req_ph3;
    vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_req_ph3 
        = (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
            & (2U == (3U & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_req, 0x99U, 2)))) 
           & ((~ VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 0U)) 
              | (~ (IData)(vlSelfRef.__PVT__snpattr_req_ph3))));
    vlSelfRef.__PVT__wren_stat_req_ph3 = ((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                                          & (IData)(vlSelfRef.__PVT__cmdis_req_ph3));
    vlSelfRef.__PVT__excl_store_reqv = ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                                          & ((IData)(vlSelfRef.__PVT__req_is_wrnosnpfull_ph3) 
                                             | (IData)(vlSelfRef.__PVT__req_is_wrnosnpptl_ph3))) 
                                         & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x92U))
                                         ? 3U : ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                                                   & (((IData)(vlSelfRef.__PVT__req_is_wrnosnpfull_ph3) 
                                                       | (IData)(vlSelfRef.__PVT__req_is_wrnosnpptl_ph3)) 
                                                      | (IData)(vlSelfRef.__PVT__req_is_wrnosnpzero_ph3))) 
                                                  & (~ 
                                                     VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x92U)))
                                                  ? 2U
                                                  : 0U));
    vlSelfRef.__PVT__inpendingq_matches_collnq = 0U;
    if (((0U != (IData)(vlSelfRef.__PVT__colln_match_check_for_inpendingq)) 
         | (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
             & (1U == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_req))) 
            & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
               == VL_CONCAT_QQI(46,36,10, vlSelfRef.__PVT__cache_tag_wr, (IData)(vlSelfRef.__PVT__cache_index_wr)))))) {
        vlSelfRef.__PVT__inpendingq_matches_collnq = 1U;
    }
    VL_ASSIGNBIT_II(1U, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__valid, 
                    ((((~ (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__full_apfifo)) 
                       & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd)) 
                      & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3))) 
                     & (2U == (3U & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_req, 0x99U, 2)))));
    VL_ASSIGNBIT_II(0U, vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__valid, 
                    ((((~ (IData)(vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__full_apfifo)) 
                       & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd)) 
                      & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3))) 
                     & (1U == (3U & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_req, 0x99U, 2)))));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__opcode 
        = (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__addr 
        = (0xfffffffffffffULL & VL_SEL_QWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x48U, 52));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__size 
        = (7U & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x45U, 3));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__endian 
        = (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x31U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__meta_to_ap.__PVT__txnid 
        = VL_EXTEND_II(12,6, (IData)(vlSelfRef.__PVT__wrindex_req_ph3));
    vlSelfRef.__PVT__req_share_vect_m_qual_ph3 = vlSelfRef.__PVT__req_share_vect_m_ph3;
    vlSelfRef.__PVT__cmd_ph3_nonexcl_read_dct_req = 
        (((IData)(vlSelfRef.__PVT__req_is_anydct_ph3) 
          & (~ VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x92U))) 
         & ((((1U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)) 
              | (3U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
             | ((7U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)) 
                & (IData)(vlSelfRef.__PVT__read_req_requires_non_inv_snoop_ph3))) 
            & (~ (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3))));
    vlSelfRef.__PVT__resp_outcompdata_req_ph3 = 0U;
    if ((((IData)(vlSelfRef.__PVT__req_is_make_i_ph3) 
          | (IData)(vlSelfRef.__PVT__req_is_clean_i_ph3)) 
         | (IData)(vlSelfRef.__PVT__req_is_evict_ph3))) {
        vlSelfRef.__PVT__resp_outcompdata_req_ph3 = 0U;
    } else if (((IData)(vlSelfRef.__PVT__req_is_clean_u_ph3) 
                | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3))) {
        vlSelfRef.__PVT__resp_outcompdata_req_ph3 = 2U;
    } else if (((((IData)(vlSelfRef.__PVT__req_is_clean_s_ph3) 
                  & (IData)(vlSelfRef.__PVT__snpattr_req_ph3)) 
                 & (1U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                & (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3))) {
        vlSelfRef.__PVT__resp_outcompdata_req_ph3 = 2U;
    } else if ((((IData)(vlSelfRef.__PVT__req_is_clean_s_ph3) 
                 & (IData)(vlSelfRef.__PVT__snpattr_req_ph3)) 
                & (5U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)))) {
        vlSelfRef.__PVT__resp_outcompdata_req_ph3 = 1U;
    } else if (((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                  | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                 & (3U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                & (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3))) {
        vlSelfRef.__PVT__resp_outcompdata_req_ph3 = 2U;
    } else if ((((IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3) 
                 & (~ VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 2U))) 
                & (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3))) {
        vlSelfRef.__PVT__resp_outcompdata_req_ph3 = 2U;
    } else if (((((IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3) 
                  & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 2U)) 
                 & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x92U)) 
                & (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3))) {
        vlSelfRef.__PVT__resp_outcompdata_req_ph3 = 1U;
    }
    vlSelfRef.__PVT__new_comp_slc_cnt_req_ph3 = ((VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x87U) 
                                                  & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3))) 
                                                 & (((IData)(vlSelfRef.__PVT__req_is_wrnosnpfl_clean_i_ph3) 
                                                     | (IData)(vlSelfRef.__PVT__req_is_writenosnpptl_clean_si_ph3)) 
                                                    | (((IData)(vlSelfRef.__PVT__req_is_wruniqueptl_clean_s_ph3) 
                                                        | (IData)(vlSelfRef.__PVT__req_is_wrbackfl_clean_i_ph3)) 
                                                       & (~ 
                                                          ((((7U 
                                                              == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)) 
                                                             | (3U 
                                                                == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                                                            | (1U 
                                                               == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                                                           & (~ (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3)))))));
    vlSelfRef.__PVT__req_read_oc_notsd_in_ucudsd_ph3 
        = ((((IData)(vlSelfRef.__PVT__req_read_oc_ph3) 
             | (IData)(vlSelfRef.__PVT__req_is_read_notsd_ph3)) 
            & (((3U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)) 
                | (7U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
               | (1U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)))) 
           & (~ (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3)));
    vlSelfRef.__PVT__dataless_xfrdata_tomem_ph3 = (
                                                   ((IData)(vlSelfRef.__PVT__req_is_clean_u_ph3) 
                                                    & (((1U 
                                                         == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)) 
                                                        | (3U 
                                                           == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                                                       | (7U 
                                                          == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)))) 
                                                   & (~ (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3)));
    vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3 
        = (((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
              & (IData)(vlSelfRef.__PVT__cmdis_req_ph3)) 
             & (~ (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3))) 
            & (IData)(vlSelfRef.__PVT__snpattr_req_ph3)) 
           & ((((IData)(vlSelfRef.__PVT__req_is_make_i_ph3) 
                | (IData)(vlSelfRef.__PVT__req_is_clean_si_ph3)) 
               & ((~ VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 0U)) 
                  | ((VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 0U) 
                      & (~ VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 2U))) 
                     & (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3)))) 
              | ((IData)(vlSelfRef.__PVT__req_is_clean_s_ph3) 
                 & (5U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)))));
    vlSelfRef.__PVT__dn_sm_req_ph3 = ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                                        & (IData)(vlSelfRef.__PVT__cmdis_req_ph3)) 
                                       & (~ (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3))) 
                                      & ((((((((IData)(vlSelfRef.__PVT__req_is_clean_u_ph3) 
                                               | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                              & (~ 
                                                 VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 0U))) 
                                             | (((IData)(vlSelfRef.__PVT__req_is_clean_u_ph3) 
                                                 & (~ 
                                                    VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 2U))) 
                                                & (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3))) 
                                            | (((IData)(vlSelfRef.__PVT__req_is_make_u_ph3) 
                                                & (~ 
                                                   VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 2U))) 
                                               & (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3))) 
                                           | (((IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3) 
                                               & (~ 
                                                  VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 2U))) 
                                              & (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3))) 
                                          | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                         | ((((IData)(vlSelfRef.__PVT__req_is_clean_s_ph3) 
                                              | (IData)(vlSelfRef.__PVT__req_is_clean_i_ph3)) 
                                             | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                            & (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3))));
    vlSelfRef.__PVT__req_atmo_ph3 = ((IData)(vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_req_ph3)
                                      ? 3U : VL_EXTEND_II(3,2, 
                                                          (3U 
                                                           & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_req, 0x99U, 2))));
    vlSelfRef.__PVT__new_mmemresp_cnt_req_ph3 = (((
                                                   (((((((IData)(vlSelfRef.__PVT__req_is_read_ocsu_notsd_pu_ph3) 
                                                         & (((((IData)(vlSelfRef.__PVT__req_st_invalid_ph3) 
                                                               | (5U 
                                                                  == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                                                              | (1U 
                                                                 == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                                                             | (3U 
                                                                == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                                                            | ((7U 
                                                                == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)) 
                                                               & (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3)))) 
                                                        | ((IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3) 
                                                           & ((IData)(vlSelfRef.__PVT__req_st_invalid_ph3) 
                                                              | ((~ (IData)(vlSelfRef.__PVT__reqid_matches_sharevec_ph3)) 
                                                                 & (((5U 
                                                                      == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)) 
                                                                     | (1U 
                                                                        == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                                                                    | (3U 
                                                                       == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))))))) 
                                                       & (~ (IData)(vlSelfRef.__PVT__cmd_ph3_apply_dmt_req))) 
                                                      | (IData)(vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_req_ph3)) 
                                                     | ((IData)(vlSelfRef.__PVT__req_is_wrnosnpptl_ph3) 
                                                        & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x87U))) 
                                                    | ((IData)(vlSelfRef.__PVT__req_is_wruniqueptl_ph3) 
                                                       & (~ 
                                                          ((((7U 
                                                              == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)) 
                                                             | (1U 
                                                                == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                                                            | (3U 
                                                               == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                                                           & (~ (IData)(vlSelfRef.__PVT__reqid_matches_ownerpid_ph3)))))) 
                                                   | (IData)(vlSelfRef.__PVT__req_is_wrbackptl_ph3)) 
                                                  | ((IData)(vlSelfRef.__PVT__req_is_clean_si_ph3) 
                                                     & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x87U))) 
                                                 & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)));
    vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_ph3 
        = ((IData)(vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_req_ph3) 
           | (IData)(vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_rsp_ph3));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (1U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (2U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (3U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (4U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (5U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (6U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (7U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (8U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (9U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0xaU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0xbU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0xcU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0xdU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0xeU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0xfU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x10U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x11U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x12U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x13U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x14U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x15U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x16U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x17U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x18U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x19U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x1aU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x1bU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x1cU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x1dU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x1eU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__select_req_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_req_ph3) 
                     & (0x1fU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_req_ph3), 0U, 5)))));
    vlSelfRef.__PVT__excl_store_addr = (0x3fffffffffffULL 
                                        & ((1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__excl_store_reqv), 1U))
                                            ? VL_SEL_QWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x4eU, 46)
                                            : 0ULL));
    vlSelfRef.__PVT__excl_store_srcid = (0x7ffU & (
                                                   (1U 
                                                    & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__excl_store_reqv), 1U))
                                                    ? 
                                                   VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)
                                                    : 0U));
    vlSelfRef.__PVT__excl_store_lpid = (0x1fU & ((1U 
                                                  & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__excl_store_reqv), 1U))
                                                  ? 
                                                 VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x8aU, 5)
                                                  : 0U));
    vlSelfRef.__PVT__excl_store_size = (7U & ((1U & 
                                               VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__excl_store_reqv), 1U))
                                               ? VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x45U, 3)
                                               : 0U));
    vlSelfRef.__PVT__new_dbid_cnt_req_ph3 = ((((((((IData)(vlSelfRef.__PVT__req_is_wrnosnpfull_ph3) 
                                                   | (IData)(vlSelfRef.__PVT__req_is_wrnosnpptl_ph3)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_wrnosnpzero_ph3)) 
                                                 | (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                                                | (IData)(vlSelfRef.__PVT__req_is_wrunique_ph3)) 
                                               | (IData)(vlSelfRef.__PVT__dataless_xfrdata_tomem_ph3)) 
                                              | ((~ 
                                                  VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x87U)) 
                                                 & (IData)(vlSelfRef.__PVT__req_is_writenosnp_clean_si_ph3))) 
                                             & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)));
    vlSelfRef.__PVT__new_compdbid_cnt_req_ph3 = 0U;
    if (((((((((IData)(vlSelfRef.__PVT__req_is_anywr_ph3) 
               & (~ (IData)(vlSelfRef.__PVT__flit_dwt_en_ph3))) 
              | (IData)(vlSelfRef.__PVT__dataless_xfrdata_tomem_ph3)) 
             | (IData)(vlSelfRef.__PVT__req_read_oc_notsd_in_ucudsd_ph3)) 
            | ((IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3) 
               & (((1U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3)) 
                   | (3U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))) 
                  | (7U == (IData)(vlSelfRef.__PVT__req_cache_st_ph3))))) 
           | (VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x87U) 
              & (IData)(vlSelfRef.__PVT__req_is_writefull_clean_s_ph3))) 
          | ((~ VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x87U)) 
             & (IData)(vlSelfRef.__PVT__req_is_writenosnp_clean_si_ph3))) 
         & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)))) {
        vlSelfRef.__PVT__new_compdbid_cnt_req_ph3 = 1U;
    }
    vlSelfRef.__PVT__new_comp_cnt_req_ph3 = 0U;
    if ((((((((((((IData)(vlSelfRef.__PVT__flit_dwt_en_ph3) 
                  | (IData)(vlSelfRef.__PVT__req_is_wrnosnpfull_ph3)) 
                 | (IData)(vlSelfRef.__PVT__req_is_wrnosnpptl_ph3)) 
                | (IData)(vlSelfRef.__PVT__req_is_wrnosnpzero_ph3)) 
               | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
              | (IData)(vlSelfRef.__PVT__req_is_clean_si_ph3)) 
             | (IData)(vlSelfRef.__PVT__req_is_wrunique_ph3)) 
            | (IData)(vlSelfRef.__PVT__dataless_xfrdata_tomem_ph3)) 
           | (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
          | ((~ VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x87U)) 
             & (IData)(vlSelfRef.__PVT__req_is_writenosnp_clean_si_ph3))) 
         & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)))) {
        vlSelfRef.__PVT__new_comp_cnt_req_ph3 = 1U;
    }
    vlSelfRef.__PVT__new_cache_st_1_ph3_req = (1U & 
                                               VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 1U));
    vlSelfRef.__PVT__determine_st_atreq = 0U;
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        vlSelfRef.__PVT__determine_st_atreq = 1U;
        vlSelfRef.__PVT__new_cache_st_1_ph3_req = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__req_is_clean_s_ph3)) 
                                                      & ((~ 
                                                          ((IData)(vlSelfRef.__PVT__req_st_invalid_ph3) 
                                                           & ((IData)(vlSelfRef.__PVT__req_is_read_su_notsd_pu_ph3) 
                                                              | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)))) 
                                                         & ((IData)(vlSelfRef.__PVT__req_is_make_u_ph3) 
                                                            | VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 1U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        vlSelfRef.__PVT__new_cache_st_1_ph3_req = (1U 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.__PVT__req_is_clean_s_ph3) 
                                                        & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                                      & ((~ 
                                                          ((IData)(vlSelfRef.__PVT__req_st_invalid_ph3) 
                                                           & (((IData)(vlSelfRef.__PVT__req_is_read_su_notsd_pu_ph3) 
                                                               | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                                              | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)))) 
                                                         & ((IData)(vlSelfRef.__PVT__req_is_make_u_ph3) 
                                                            | VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph3), 1U)))));
    }
    vlSelfRef.__PVT__new_ownerp_id_ph3_req = vlSelfRef.__PVT__ownerp_id_ph3;
    vlSelfRef.__PVT__determine_ownerp_id_atreq = 0U;
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        vlSelfRef.__PVT__determine_ownerp_id_atreq = 1U;
        vlSelfRef.__PVT__new_ownerp_id_ph3_req = (0x7fU 
                                                  & ((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                                         | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                                        | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                                       | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                                      | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 7)
                                                      : (IData)(vlSelfRef.__PVT__ownerp_id_ph3)));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        vlSelfRef.__PVT__new_ownerp_id_ph3_req = (0x7fU 
                                                  & ((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                                         | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                                        | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                                       | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                                      | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3))
                                                      ? 
                                                     VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 7)
                                                      : 
                                                     (((IData)(vlSelfRef.__PVT__req_st_invalid_ph3) 
                                                       & (IData)(vlSelfRef.__PVT__req_is_read_cs_notsd_ph3))
                                                       ? 
                                                      VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 7)
                                                       : 
                                                      ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                                         | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                                        & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))
                                                        ? 0x7fU
                                                        : (IData)(vlSelfRef.__PVT__ownerp_id_ph3)))));
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0U)))));
    }
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 1U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (1U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (1U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 1U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (1U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (1U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 1U)))));
    }
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 2U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (2U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (2U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 2U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (2U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (2U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 2U)))));
    }
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 3U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (3U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (3U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 3U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (3U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (3U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 3U)))));
    }
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 4U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (4U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (4U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 4U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (4U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (4U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 4U)))));
    }
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 5U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (5U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (5U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 5U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (5U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (5U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 5U)))));
    }
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 6U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (6U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (6U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 6U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (6U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (6U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 6U)))));
    }
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 7U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (7U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (7U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 7U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (7U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (7U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 7U)))));
    }
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 8U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (8U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (8U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 8U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (8U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (8U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 8U)))));
    }
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 9U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (9U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (9U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 9U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (9U == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (9U == (0x7ffU 
                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 9U)))));
    }
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xaU)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0xaU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0xaU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xaU)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0xaU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0xaU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xaU)))));
    }
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xbU)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0xbU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0xbU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xbU)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0xbU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0xbU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xbU)))));
    }
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xcU)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0xcU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0xcU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xcU)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0xcU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0xcU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xcU)))));
    }
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xdU)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0xdU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0xdU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xdU)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0xdU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0xdU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xdU)))));
    }
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xeU)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0xeU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0xeU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xeU)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0xeU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0xeU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xeU)))));
    }
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xfU)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0xfU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0xfU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xfU)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0xfU == (0x7ffU 
                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0xfU == (0x7ffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0xfU)))));
    }
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x10U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0x10U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0x10U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x10U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0x10U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0x10U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x10U)))));
    }
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x11U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0x11U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0x11U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x11U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0x11U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0x11U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x11U)))));
    }
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x12U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0x12U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0x12U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x12U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0x12U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0x12U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x12U)))));
    }
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x13U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0x13U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0x13U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x13U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0x13U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0x13U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x13U)))));
    }
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x14U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0x14U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0x14U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x14U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0x14U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0x14U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x14U)))));
    }
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                    (1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x15U)));
    if (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3))) {
        VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & (((((((IData)(vlSelfRef.__PVT__req_is_read_u_ph3) 
                                    | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                & (0x15U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ ((((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_evict_ph3)) 
                                      & (0x15U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x15U)))));
    } else if (((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
                & (IData)(vlSelfRef.__PVT__cmdis_req_ph3))) {
        VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__new_share_vect_req_m_ph3, 
                        (1U & ((((((IData)(vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3) 
                                   | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3)) 
                                  | (IData)(vlSelfRef.__PVT__req_is_clean_u_ph3)) 
                                 | (IData)(vlSelfRef.__PVT__req_is_make_u_ph3)) 
                                & (0x15U == (0x7ffU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                               | ((~ (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                       | (((IData)(vlSelfRef.__PVT__req_is_clean_i_ph3) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph3)) 
                                          & (IData)(vlSelfRef.__PVT__snpattr_req_ph3))) 
                                      & (0x15U == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))) 
                                  & VL_BITSEL_IIII(22, vlSelfRef.__PVT__req_share_vect_m_qual_ph3, 0x15U)))));
    }
    vlSelfRef.__PVT__wren_cache_vector_ph4_req_nxt = 0U;
    vlSelfRef.__PVT__block_rsp_proc_dueto_dn_sm_req_ph3 = 0U;
    if ((((IData)(vlSelfRef.__PVT__cmdvalid_ph3_req_outstd) 
          & (((IData)(vlSelfRef.__PVT__dn_sm_req_ph3) 
              | (IData)(vlSelfRef.__PVT__snoopable_cmo_sendresp_req_ph3)) 
             | (IData)(vlSelfRef.__PVT__cmd_ph3_apply_dmt_req))) 
         & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)))) {
        vlSelfRef.__PVT__wren_cache_vector_ph4_req_nxt 
            = vlSelfRef.__PVT__cachehit_vector_ph3;
        vlSelfRef.__PVT__block_rsp_proc_dueto_dn_sm_req_ph3 = 1U;
    }
    vlSelfRef.__PVT__new_atmo_state_req_ph3 = 0U;
    if (vlSelfRef.__PVT__req_is_atom_ph3) {
        vlSelfRef.__PVT__new_atmo_state_req_ph3 = 1U;
        if (vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_ph3) {
            vlSelfRef.__PVT__new_atmo_state_req_ph3 = 2U;
        }
    }
    vlSelfRef.__PVT__itis_stage2_atmo_ph3 = ((IData)(vlSelfRef.__PVT__itis_stage2_atmo_read_nosnoop_ph3) 
                                             | (IData)(vlSelfRef.__PVT__itis_stage2_atmo_rsp_ph3));
    vlSelfRef.__PVT__new_cache_st_ph3_req = VL_CONCAT_III(3,2,1, 
                                                          VL_EXTEND_II(2,1, (IData)(vlSelfRef.__PVT__new_cache_st_1_ph3_req)), 0U);
    vlSelfRef.__PVT__new_share_vect_ph3_req = vlSelfRef.__PVT__new_share_vect_req_m_ph3;
    if (VL_LIKELY((VL_ONEHOT0_I(VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__itis_stage2_atmo_complete_ph3), (IData)(vlSelfRef.__PVT__itis_stage2_atmo_ph3)))))) {
        vlSelfRef.__PVT__new_atmo_state_ph4_nxt = ((IData)(vlSelfRef.__PVT__itis_stage2_atmo_ph3)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__itis_stage2_atmo_complete_ph3)
                                                     ? 3U
                                                     : (IData)(vlSelfRef.__PVT__atmo_state_ph3)));
    } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:4426: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.update_atmo_state_for_ongoing_rsp: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 4426, "");
    }
    VL_CONCAT_WIQ(89,32,57, __Vtemp_57, VL_EXTEND_II(32,26, 
                                                     VL_CONCAT_III(26,2,24, 
                                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__new_comp_slc_cnt_req_ph3), (IData)(vlSelfRef.__PVT__new_comp_cnt_req_ph3)), 
                                                                   VL_CONCAT_III(24,1,23, (IData)(vlSelfRef.__PVT__new_readreceipt_cnt_req_ph3), 
                                                                                VL_CONCAT_III(23,1,22, (IData)(vlSelfRef.__PVT__new_compack_cnt_req_ph3), 
                                                                                VL_EXTEND_II(22,16, 
                                                                                VL_CONCAT_III(16,1,15, 
                                                                                (1U 
                                                                                & (~ 
                                                                                VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x93U))), 
                                                                                VL_CONCAT_III(15,1,14, (IData)(vlSelfRef.__PVT__new_dbid_cnt_req_ph3), 
                                                                                VL_CONCAT_III(14,2,12, (IData)(vlSelfRef.__PVT__new_compdbid_cnt_req_ph3), 0U)))))))), 
                  VL_CONCAT_QIQ(57,2,55, (IData)(vlSelfRef.__PVT__new_wrdata_cnt_req_ph3), 
                                VL_EXTEND_QQ(55,54, 
                                             VL_CONCAT_QII(54,32,22, 
                                                           VL_CONCAT_III(32,3,29, (IData)(vlSelfRef.__PVT__new_cache_st_ph3_req), 
                                                                         VL_CONCAT_III(29,7,22, (IData)(vlSelfRef.__PVT__new_ownerp_id_ph3_req), vlSelfRef.__PVT__new_share_vect_ph3_req)), 0U))));
    VL_CONCAT_WIW(91,2,89, __Vtemp_58, (IData)(vlSelfRef.__PVT__new_atmo_state_req_ph3), __Vtemp_57);
    VL_EXTEND_WW(96,91, __Vtemp_59, __Vtemp_58);
    VL_CONCAT_WWI(102,96,6, __Vtemp_60, __Vtemp_59, 
                  VL_EXTEND_II(6,1, (IData)(vlSelfRef.__PVT__new_mmemresp_cnt_req_ph3)));
    VL_EXTEND_WW(103,102, __Vtemp_61, __Vtemp_60);
    VL_ASSIGNSEL_WW(136,103,0U, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, __Vtemp_61);
    VL_ASSIGNSEL_WQ(136,33,0x67U, vlSelfRef.__PVT__wrdata_stat_common_ph3_req, 
                    VL_EXTEND_QI(33,1, (IData)(vlSelfRef.__PVT__new_compcmo_cnt_req_ph3)));
}
