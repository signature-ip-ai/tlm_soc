// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_addr_translator.h"

VL_INLINE_OPT void Vsig_topology_top_sig_addr_translator___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_addr_translator_0__0(Vsig_topology_top_sig_addr_translator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_addr_translator___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_addr_translator_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__addr_translator_enabled__DOT__unused_signal 
        = vlSelfRef.__PVT__addr_translator_enabled__DOT__unused_signal;
    vlSelfRef.__Vdly__addr_translator_enabled__DOT__unused_signal 
        = ((IData)(vlSelfRef.__PVT__rstn) && (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__unused_signal_nxt));
    vlSelfRef.__PVT__addr_translator_enabled__DOT__unused_signal 
        = vlSelfRef.__Vdly__addr_translator_enabled__DOT__unused_signal;
}

VL_INLINE_OPT void Vsig_topology_top_sig_addr_translator___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_addr_translator_0__1(Vsig_topology_top_sig_addr_translator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_addr_translator___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_addr_translator_0__1\n"); );
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
}

VL_INLINE_OPT void Vsig_topology_top_sig_addr_translator___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_addr_translator_0__0(Vsig_topology_top_sig_addr_translator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsig_topology_top_sig_addr_translator___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p3__node_porttop_sn__DOT__u_node_porttop_sn__id_translator_sn__DOT__sig_addr_translator_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__addr_translator_enabled__DOT__unused_signal_nxt 
        = ((IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__overflow) 
           | (IData)(vlSelfRef.__PVT__addr_translator_enabled__DOT__unused_signal));
}
