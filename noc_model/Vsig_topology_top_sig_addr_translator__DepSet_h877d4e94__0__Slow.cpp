// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_addr_translator.h"

VL_ATTR_COLD void Vsig_topology_top_sig_addr_translator___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_addr_translator_0__0(Vsig_topology_top_sig_addr_translator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_addr_translator___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_addr_translator_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    VL_CONCAT_WIQ(84,28,56, __Vtemp_1, (0xfffffffU 
                                        & VL_SEL_IWII(112, vlSelfRef.__PVT__cm_homeaddr_base_all_pm, 0x38U, 28)), 
                  VL_CONCAT_QII(56,28,28, (0xfffffffU 
                                           & VL_SEL_IWII(112, vlSelfRef.__PVT__cm_homeaddr_base_all_pm, 0x1cU, 28)), 
                                (0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__cm_homeaddr_base_all_pm, 0U, 28))));
    VL_ASSIGNSEL_WW(112,84,0U, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_base_pm, __Vtemp_1);
    VL_ASSIGNSEL_WI(112,28,0x54U, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_base_pm, 
                    (0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__cm_homeaddr_base_all_pm, 0x54U, 28)));
    VL_ASSIGNSEL_II(4,3,0U, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_activated_pm, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(116, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0x56U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(116, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0x39U)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(116, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0x1cU)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_activated_pm, 
                    (1U & VL_BITSEL_IWII(116, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0x73U)));
    VL_ASSIGNSEL_WI(116,29,0U, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_limit_pm, 
                    (0x1fffffffU & ((IData)(1U) + VL_EXTEND_II(29,28, 
                                                               (0xfffffffU 
                                                                & VL_SEL_IWII(116, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0U, 28))))));
    VL_ASSIGNSEL_WI(116,29,0x1dU, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_limit_pm, 
                    (0x1fffffffU & ((IData)(1U) + VL_EXTEND_II(29,28, 
                                                               (0xfffffffU 
                                                                & VL_SEL_IWII(116, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0x1dU, 28))))));
    VL_ASSIGNSEL_WI(116,29,0x3aU, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_limit_pm, 
                    (0x1fffffffU & ((IData)(1U) + VL_EXTEND_II(29,28, 
                                                               (0xfffffffU 
                                                                & VL_SEL_IWII(116, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0x3aU, 28))))));
    VL_ASSIGNSEL_WI(116,29,0x57U, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_limit_pm, 
                    (0x1fffffffU & ((IData)(1U) + VL_EXTEND_II(29,28, 
                                                               (0xfffffffU 
                                                                & VL_SEL_IWII(116, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0x57U, 28))))));
    VL_CONCAT_WIQ(84,28,56, __Vtemp_2, (0xfffffffU 
                                        & VL_SEL_IWII(112, vlSelfRef.__PVT__noncm_homeaddr_base_all_pm, 0x38U, 28)), 
                  VL_CONCAT_QII(56,28,28, (0xfffffffU 
                                           & VL_SEL_IWII(112, vlSelfRef.__PVT__noncm_homeaddr_base_all_pm, 0x1cU, 28)), 
                                (0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__noncm_homeaddr_base_all_pm, 0U, 28))));
    VL_ASSIGNSEL_WW(112,84,0U, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_base_pm, __Vtemp_2);
    VL_ASSIGNSEL_WI(112,28,0x54U, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_base_pm, 
                    (0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__noncm_homeaddr_base_all_pm, 0x54U, 28)));
    VL_ASSIGNSEL_II(4,3,0U, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_activated_pm, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IWII(116, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0x56U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IWII(116, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0x39U)), 
                                                (1U 
                                                 & VL_BITSEL_IWII(116, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0x1cU)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_activated_pm, 
                    (1U & VL_BITSEL_IWII(116, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0x73U)));
    VL_ASSIGNSEL_WI(116,29,0U, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_limit_pm, 
                    (0x1fffffffU & ((IData)(1U) + VL_EXTEND_II(29,28, 
                                                               (0xfffffffU 
                                                                & VL_SEL_IWII(116, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0U, 28))))));
    VL_ASSIGNSEL_WI(116,29,0x1dU, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_limit_pm, 
                    (0x1fffffffU & ((IData)(1U) + VL_EXTEND_II(29,28, 
                                                               (0xfffffffU 
                                                                & VL_SEL_IWII(116, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0x1dU, 28))))));
    VL_ASSIGNSEL_WI(116,29,0x3aU, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_limit_pm, 
                    (0x1fffffffU & ((IData)(1U) + VL_EXTEND_II(29,28, 
                                                               (0xfffffffU 
                                                                & VL_SEL_IWII(116, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0x3aU, 28))))));
    VL_ASSIGNSEL_WI(116,29,0x57U, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_limit_pm, 
                    (0x1fffffffU & ((IData)(1U) + VL_EXTEND_II(29,28, 
                                                               (0xfffffffU 
                                                                & VL_SEL_IWII(116, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0x57U, 28))))));
    VL_CONCAT_WIQ(84,28,56, __Vtemp_3, (0xfffffffU 
                                        & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_base_pm, 0x38U, 28)), 
                  VL_CONCAT_QII(56,28,28, (0xfffffffU 
                                           & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_base_pm, 0x1cU, 28)), 
                                (0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_base_pm, 0U, 28))));
    VL_ASSIGNSEL_WW(112,84,0U, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_base_sliced_pm, __Vtemp_3);
    VL_ASSIGNSEL_WI(112,28,0x54U, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_base_sliced_pm, 
                    (0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_base_pm, 0x54U, 28)));
    VL_CONCAT_WIQ(87,29,58, __Vtemp_4, (0x1fffffffU 
                                        & VL_SEL_IWII(116, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_limit_pm, 0x3aU, 29)), 
                  VL_CONCAT_QII(58,29,29, (0x1fffffffU 
                                           & VL_SEL_IWII(116, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_limit_pm, 0x1dU, 29)), 
                                (0x1fffffffU & VL_SEL_IWII(116, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_limit_pm, 0U, 29))));
    VL_ASSIGNSEL_WW(116,87,0U, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_limit_sliced_pm, __Vtemp_4);
    VL_ASSIGNSEL_WI(116,29,0x57U, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_limit_sliced_pm, 
                    (0x1fffffffU & VL_SEL_IWII(116, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_limit_pm, 0x57U, 29)));
    VL_CONCAT_WIQ(84,28,56, __Vtemp_5, (0xfffffffU 
                                        & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_base_pm, 0x38U, 28)), 
                  VL_CONCAT_QII(56,28,28, (0xfffffffU 
                                           & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_base_pm, 0x1cU, 28)), 
                                (0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_base_pm, 0U, 28))));
    VL_ASSIGNSEL_WW(112,84,0U, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_base_sliced_pm, __Vtemp_5);
    VL_ASSIGNSEL_WI(112,28,0x54U, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_base_sliced_pm, 
                    (0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_base_pm, 0x54U, 28)));
    VL_CONCAT_WIQ(87,29,58, __Vtemp_6, (0x1fffffffU 
                                        & VL_SEL_IWII(116, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_limit_pm, 0x3aU, 29)), 
                  VL_CONCAT_QII(58,29,29, (0x1fffffffU 
                                           & VL_SEL_IWII(116, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_limit_pm, 0x1dU, 29)), 
                                (0x1fffffffU & VL_SEL_IWII(116, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_limit_pm, 0U, 29))));
    VL_ASSIGNSEL_WW(116,87,0U, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_limit_sliced_pm, __Vtemp_6);
    VL_ASSIGNSEL_WI(116,29,0x57U, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_limit_sliced_pm, 
                    (0x1fffffffU & VL_SEL_IWII(116, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_limit_pm, 0x57U, 29)));
}

VL_ATTR_COLD void Vsig_topology_top_sig_addr_translator___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_addr_translator_0__1(Vsig_topology_top_sig_addr_translator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_addr_translator___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_addr_translator_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    VL_CONCAT_WIQ(84,28,56, __Vtemp_1, (0xfffffffU 
                                        & VL_SEL_IQII(52, vlSelfRef.__PVT__i_tx_req_addr, 0x18U, 28)), 
                  VL_CONCAT_QII(56,28,28, (0xfffffffU 
                                           & VL_SEL_IQII(52, vlSelfRef.__PVT__i_tx_req_addr, 0x18U, 28)), 
                                (0xfffffffU & VL_SEL_IQII(52, vlSelfRef.__PVT__i_tx_req_addr, 0x18U, 28))));
    VL_ASSIGNSEL_WW(112,84,0U, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_flit_addr_sliced_pm, __Vtemp_1);
    VL_ASSIGNSEL_WI(112,28,0x54U, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_flit_addr_sliced_pm, 
                    (0xfffffffU & VL_SEL_IQII(52, vlSelfRef.__PVT__i_tx_req_addr, 0x18U, 28)));
    VL_CONCAT_WIQ(84,28,56, __Vtemp_2, (0xfffffffU 
                                        & VL_SEL_IQII(52, vlSelfRef.__PVT__i_tx_req_addr, 0x18U, 28)), 
                  VL_CONCAT_QII(56,28,28, (0xfffffffU 
                                           & VL_SEL_IQII(52, vlSelfRef.__PVT__i_tx_req_addr, 0x18U, 28)), 
                                (0xfffffffU & VL_SEL_IQII(52, vlSelfRef.__PVT__i_tx_req_addr, 0x18U, 28))));
    VL_ASSIGNSEL_WW(112,84,0U, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_flit_addr_sliced_pm, __Vtemp_2);
    VL_ASSIGNSEL_WI(112,28,0x54U, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_flit_addr_sliced_pm, 
                    (0xfffffffU & VL_SEL_IQII(52, vlSelfRef.__PVT__i_tx_req_addr, 0x18U, 28)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_activated_pm), 0U) 
                      & ((0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_flit_addr_sliced_pm, 0U, 28)) 
                         >= (0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_base_sliced_pm, 0U, 28)))) 
                     & (VL_EXTEND_II(29,28, (0xfffffffU 
                                             & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_flit_addr_sliced_pm, 0U, 28))) 
                        < (0x1fffffffU & VL_SEL_IWII(116, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_limit_sliced_pm, 0U, 29)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_activated_pm), 1U) 
                      & ((0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_flit_addr_sliced_pm, 0x1cU, 28)) 
                         >= (0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_base_sliced_pm, 0x1cU, 28)))) 
                     & (VL_EXTEND_II(29,28, (0xfffffffU 
                                             & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_flit_addr_sliced_pm, 0x1cU, 28))) 
                        < (0x1fffffffU & VL_SEL_IWII(116, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_limit_sliced_pm, 0x1dU, 29)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_activated_pm), 2U) 
                      & ((0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_flit_addr_sliced_pm, 0x38U, 28)) 
                         >= (0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_base_sliced_pm, 0x38U, 28)))) 
                     & (VL_EXTEND_II(29,28, (0xfffffffU 
                                             & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_flit_addr_sliced_pm, 0x38U, 28))) 
                        < (0x1fffffffU & VL_SEL_IWII(116, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_limit_sliced_pm, 0x3aU, 29)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_activated_pm), 3U) 
                      & ((0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_flit_addr_sliced_pm, 0x54U, 28)) 
                         >= (0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_base_sliced_pm, 0x54U, 28)))) 
                     & (VL_EXTEND_II(29,28, (0xfffffffU 
                                             & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_flit_addr_sliced_pm, 0x54U, 28))) 
                        < (0x1fffffffU & VL_SEL_IWII(116, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_limit_sliced_pm, 0x57U, 29)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_activated_pm), 0U) 
                      & ((0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_flit_addr_sliced_pm, 0U, 28)) 
                         >= (0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_base_sliced_pm, 0U, 28)))) 
                     & (VL_EXTEND_II(29,28, (0xfffffffU 
                                             & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_flit_addr_sliced_pm, 0U, 28))) 
                        < (0x1fffffffU & VL_SEL_IWII(116, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_limit_sliced_pm, 0U, 29)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_activated_pm), 1U) 
                      & ((0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_flit_addr_sliced_pm, 0x1cU, 28)) 
                         >= (0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_base_sliced_pm, 0x1cU, 28)))) 
                     & (VL_EXTEND_II(29,28, (0xfffffffU 
                                             & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_flit_addr_sliced_pm, 0x1cU, 28))) 
                        < (0x1fffffffU & VL_SEL_IWII(116, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_limit_sliced_pm, 0x1dU, 29)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_activated_pm), 2U) 
                      & ((0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_flit_addr_sliced_pm, 0x38U, 28)) 
                         >= (0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_base_sliced_pm, 0x38U, 28)))) 
                     & (VL_EXTEND_II(29,28, (0xfffffffU 
                                             & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_flit_addr_sliced_pm, 0x38U, 28))) 
                        < (0x1fffffffU & VL_SEL_IWII(116, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_limit_sliced_pm, 0x3aU, 29)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_activated_pm), 3U) 
                      & ((0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_flit_addr_sliced_pm, 0x54U, 28)) 
                         >= (0xfffffffU & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_base_sliced_pm, 0x54U, 28)))) 
                     & (VL_EXTEND_II(29,28, (0xfffffffU 
                                             & VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_flit_addr_sliced_pm, 0x54U, 28))) 
                        < (0x1fffffffU & VL_SEL_IWII(116, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_limit_sliced_pm, 0x57U, 29)))));
    vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_idx = 0U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_addr_match_pm), 0U))) {
        vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_idx = 0U;
    }
    vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_match_idx_comb_proc__DOT__unnamedblk2__DOT__i = 1U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_addr_match_pm), 1U))) {
        vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_idx = 1U;
    }
    vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_match_idx_comb_proc__DOT__unnamedblk2__DOT__i = 2U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_addr_match_pm), 2U))) {
        vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_idx = 2U;
    }
    vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_match_idx_comb_proc__DOT__unnamedblk2__DOT__i = 3U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_addr_match_pm), 3U))) {
        vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_idx = 3U;
    }
    vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_match_idx_comb_proc__DOT__unnamedblk2__DOT__i = 4U;
    vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_idx = 0U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_addr_match_pm), 0U))) {
        vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_idx = 0U;
    }
    vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_match_idx_comb_proc__DOT__unnamedblk1__DOT__i = 1U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_addr_match_pm), 1U))) {
        vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_idx = 1U;
    }
    vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_match_idx_comb_proc__DOT__unnamedblk1__DOT__i = 2U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_addr_match_pm), 2U))) {
        vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_idx = 2U;
    }
    vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_match_idx_comb_proc__DOT__unnamedblk1__DOT__i = 3U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_addr_match_pm), 3U))) {
        vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_idx = 3U;
    }
    vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_match_idx_comb_proc__DOT__unnamedblk1__DOT__i = 4U;
    vlSelfRef.__PVT__o_tx_req_addr_to_sn = 0ULL;
    vlSelfRef.__PVT__addr_translator_enabled__DOT__overflow = 0U;
    if (VL_REDOR_I((IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_addr_match_pm))) {
        vlSelfRef.__PVT__addr_translator_enabled__DOT__overflow 
            = (1U & VL_BITSEL_IQII(53, (0x1fffffffffffffULL 
                                        & (VL_EXTEND_QQ(53,52, vlSelfRef.__PVT__i_tx_req_addr) 
                                           - VL_EXTEND_QQ(53,52, 
                                                          VL_CONCAT_QII(52,28,24, 
                                                                        (0xfffffffU 
                                                                         & ((0x6fU 
                                                                             >= 
                                                                             (0x7fU 
                                                                              & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1cU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_idx))), 0U, 7)))
                                                                             ? 
                                                                            VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_base_sliced_pm, 
                                                                                (0x7fU 
                                                                                & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1cU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_idx))), 0U, 7)), 28)
                                                                             : 0U)), 0U)))), 0x34U));
        vlSelfRef.__PVT__o_tx_req_addr_to_sn = (0xfffffffffffffULL 
                                                & (vlSelfRef.__PVT__i_tx_req_addr 
                                                   - 
                                                   VL_CONCAT_QII(52,28,24, 
                                                                 (0xfffffffU 
                                                                  & ((0x6fU 
                                                                      >= 
                                                                      (0x7fU 
                                                                       & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1cU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_idx))), 0U, 7)))
                                                                      ? 
                                                                     VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_homeaddr_base_sliced_pm, 
                                                                                (0x7fU 
                                                                                & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1cU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__cm_idx))), 0U, 7)), 28)
                                                                      : 0U)), 0U)));
    } else {
        vlSelfRef.__PVT__addr_translator_enabled__DOT__overflow 
            = (1U & VL_BITSEL_IQII(53, (0x1fffffffffffffULL 
                                        & (VL_EXTEND_QQ(53,52, vlSelfRef.__PVT__i_tx_req_addr) 
                                           - VL_EXTEND_QQ(53,52, 
                                                          VL_CONCAT_QII(52,28,24, 
                                                                        (0xfffffffU 
                                                                         & ((0x6fU 
                                                                             >= 
                                                                             (0x7fU 
                                                                              & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1cU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_idx))), 0U, 7)))
                                                                             ? 
                                                                            VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_base_sliced_pm, 
                                                                                (0x7fU 
                                                                                & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1cU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_idx))), 0U, 7)), 28)
                                                                             : 0U)), 0U)))), 0x34U));
        vlSelfRef.__PVT__o_tx_req_addr_to_sn = (0xfffffffffffffULL 
                                                & (vlSelfRef.__PVT__i_tx_req_addr 
                                                   - 
                                                   VL_CONCAT_QII(52,28,24, 
                                                                 (0xfffffffU 
                                                                  & ((0x6fU 
                                                                      >= 
                                                                      (0x7fU 
                                                                       & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1cU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_idx))), 0U, 7)))
                                                                      ? 
                                                                     VL_SEL_IWII(112, vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_homeaddr_base_sliced_pm, 
                                                                                (0x7fU 
                                                                                & VL_SEL_IIII(32, 
                                                                                ((IData)(0x1cU) 
                                                                                * 
                                                                                VL_EXTEND_II(32,2, (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__noncm_idx))), 0U, 7)), 28)
                                                                      : 0U)), 0U)));
    }
    vlSelfRef.__PVT__addr_translator_enabled__DOT__unused_signal_nxt 
        = ((IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__overflow) 
           | (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__unused_signal));
}

VL_ATTR_COLD void Vsig_topology_top_sig_addr_translator___ctor_var_reset(Vsig_topology_top_sig_addr_translator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_addr_translator___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5377340664288042355ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__cm_homeaddr_base_all_pm, __VscopeHash, 16326596507192002194ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->__PVT__cm_homeaddr_limit_all_pm, __VscopeHash, 15039959541587252906ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__noncm_homeaddr_base_all_pm, __VscopeHash, 4362549229537796297ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->__PVT__noncm_homeaddr_limit_all_pm, __VscopeHash, 17603428951671837452ull);
    vlSelf->__PVT__i_tx_req_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2647923012406763201ull);
    vlSelf->__PVT__i_tx_req_addr = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 16341100945219899558ull);
    vlSelf->__PVT__o_tx_req_addr_to_sn = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 16609106332399690049ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__addr_translator_enabled__DOT__cm_homeaddr_base_pm, __VscopeHash, 15341395574209978659ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->__PVT__addr_translator_enabled__DOT__cm_homeaddr_limit_pm, __VscopeHash, 14061316083350754497ull);
    vlSelf->__PVT__addr_translator_enabled__DOT__cm_activated_pm = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 546882875349316682ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__addr_translator_enabled__DOT__cm_homeaddr_base_sliced_pm, __VscopeHash, 419676960931583529ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->__PVT__addr_translator_enabled__DOT__cm_homeaddr_limit_sliced_pm, __VscopeHash, 8141586161069467806ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__addr_translator_enabled__DOT__cm_flit_addr_sliced_pm, __VscopeHash, 4897325488385753392ull);
    vlSelf->__PVT__addr_translator_enabled__DOT__cm_addr_match_pm = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14020280512123523347ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__addr_translator_enabled__DOT__noncm_homeaddr_base_pm, __VscopeHash, 554593708724738301ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->__PVT__addr_translator_enabled__DOT__noncm_homeaddr_limit_pm, __VscopeHash, 4298537306527393454ull);
    vlSelf->__PVT__addr_translator_enabled__DOT__noncm_activated_pm = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5511775278371202292ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__addr_translator_enabled__DOT__noncm_homeaddr_base_sliced_pm, __VscopeHash, 3863597256087754642ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->__PVT__addr_translator_enabled__DOT__noncm_homeaddr_limit_sliced_pm, __VscopeHash, 11450505882212776298ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__addr_translator_enabled__DOT__noncm_flit_addr_sliced_pm, __VscopeHash, 7440933779858036969ull);
    vlSelf->__PVT__addr_translator_enabled__DOT__noncm_addr_match_pm = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17445134890980381739ull);
    vlSelf->__PVT__addr_translator_enabled__DOT__cm_idx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14396220569116201427ull);
    vlSelf->__PVT__addr_translator_enabled__DOT__noncm_idx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9735681749750454272ull);
    vlSelf->__PVT__addr_translator_enabled__DOT__overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17842483270147387458ull);
    vlSelf->__PVT__addr_translator_enabled__DOT__unused_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1765927541314823002ull);
    vlSelf->__PVT__addr_translator_enabled__DOT__unused_signal_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1875945528878251820ull);
    vlSelf->__PVT__addr_translator_enabled__DOT__cm_match_idx_comb_proc__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__addr_translator_enabled__DOT__noncm_match_idx_comb_proc__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->__Vdly__addr_translator_enabled__DOT__unused_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13590716899308520960ull);
}
