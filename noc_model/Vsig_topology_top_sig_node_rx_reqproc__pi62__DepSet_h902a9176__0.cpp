// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_node_rx_reqproc__pi62.h"
#include "Vsig_topology_top_sig_node_rx_reqproc_anyvc__pi71.h"

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__1(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_pend = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelfRef.__PVT__vc0_pend = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = vlSelfRef.__PVT__crdt_balance_to_deactivate_link;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = (0x1fU & ((0U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_REQFLITV), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))
                     ? (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)
                     : ((1U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_REQFLITV), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))
                         ? ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                            - (IData)(1U)) : ((2U == 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_REQFLITV), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link))
                                               : (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)))));
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_RX_REQFLIT_s, vlSelfRef.__PVT__ic_RX_REQFLIT);
    VL_EXTEND_WW(119,108, vlSelfRef.__PVT__ic_RX_SNPFLIT_s, vlSelfRef.__PVT__ic_RX_SNPFLIT);
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__vc0_pend;
    vlSelfRef.__PVT__rcvd_snplink_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_SNPFLITV) 
                                          & (0U == 
                                             (0x1fU 
                                              & VL_SEL_IWII(119, vlSelfRef.__PVT__ic_RX_SNPFLIT_s, 0x32U, 5))));
    vlSelfRef.__PVT__rcvd_reqlink_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_REQFLITV) 
                                          & (0U == 
                                             (0x7fU 
                                              & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x3eU, 7))));
    vlSelfRef.__PVT__reqis_to_noncm = (1U & (~ VL_BITSEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x87U)));
    vlSelfRef.__PVT__cm_reqflit_addr_sliced_hn_f[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_reqflit_addr_sliced_hn_f[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[0U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[1U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[2U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[3U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[1U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[2U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[3U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[1U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[2U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[3U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[1U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[2U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[3U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[4U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[5U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[6U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[7U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[8U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[9U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xaU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xbU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xcU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xdU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xeU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xfU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc1 = (((IData)(vlSelfRef.__PVT__ic_RX_REQFLITV) 
                                            & (IData)(vlSelfRef.__PVT__reqflit_is_vc1)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc0 = (((IData)(vlSelfRef.__PVT__ic_RX_REQFLITV) 
                                            & (IData)(vlSelfRef.__PVT__reqflit_is_vc0)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt)));
    vlSelfRef.__PVT__cm_reqaddr_match_hn_f = (((IData)(vlSelfRef.__PVT__cm_activated_hn_f) 
                                               & (vlSelfRef.__PVT__cm_reqflit_addr_sliced_hn_f
                                                  [0U] 
                                                  >= 
                                                  vlSelfRef.__PVT__cm_homeaddr_base_sliced_hn_f
                                                  [0U])) 
                                              & (VL_EXTEND_II(29,28, 
                                                              vlSelfRef.__PVT__cm_reqflit_addr_sliced_hn_f
                                                              [0U]) 
                                                 < 
                                                 vlSelfRef.__PVT__cm_homeaddr_limit_sliced_hn_f
                                                 [0U]));
    vlSelfRef.__PVT__noncm_reqaddr_match_hn_f = (((IData)(vlSelfRef.__PVT__noncm_activated_hn_f) 
                                                  & (vlSelfRef.__PVT__noncm_reqflit_addr_sliced_hn_f
                                                     [0U] 
                                                     >= 
                                                     vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_f
                                                     [0U])) 
                                                 & (VL_EXTEND_II(29,28, 
                                                                 vlSelfRef.__PVT__noncm_reqflit_addr_sliced_hn_f
                                                                 [0U]) 
                                                    < 
                                                    vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_f
                                                    [0U]));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 0U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [0U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [0U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [0U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 1U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [1U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [1U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [1U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 2U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [2U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [2U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [2U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 3U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [3U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [3U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [3U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [3U])));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 0U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [0U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [0U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [0U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 1U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [1U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [1U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [1U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 2U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [2U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [2U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [2U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 3U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [3U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [3U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [3U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [3U])));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 0U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [0U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [0U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [0U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 1U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [1U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [1U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [1U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 2U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [2U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [2U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [2U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 3U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [3U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [3U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [3U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [3U])));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [0U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 1U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [1U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [1U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [1U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 2U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [2U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [2U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [2U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 3U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [3U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [3U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [3U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [3U])));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 4U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [4U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [4U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [4U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [4U])));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 5U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [5U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [5U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [5U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [5U])));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 6U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [6U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [6U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [6U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [6U])));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 7U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [7U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [7U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [7U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [7U])));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 8U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [8U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [8U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [8U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [8U])));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 9U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [9U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [9U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [9U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [9U])));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xaU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xaU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xaU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xaU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xaU])));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xbU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xbU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xbU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xbU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xbU])));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xcU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xcU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xcU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xcU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xcU])));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xdU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xdU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xdU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xdU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xdU])));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xeU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xeU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xeU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xeU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xeU])));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xfU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xfU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xfU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xfU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xfU])));
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc0;
    vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
        [0U];
    if (vlSelfRef.__PVT__cm_reqaddr_match_hn_f) {
        vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
            [0U];
    }
    vlSelfRef.__PVT__p = 1U;
    vlSelfRef.__PVT__noncm_addr_match_hn_f_nonzero 
        = vlSelfRef.__PVT__noncm_reqaddr_match_hn_f;
    vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
        [0U];
    if (vlSelfRef.__PVT__noncm_reqaddr_match_hn_f) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f 
            = vlSelfRef.__PVT__xy_coord_hn_f[0U];
    }
    vlSelfRef.__PVT__q = 1U;
    vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
        [0U];
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 0U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [0U];
    }
    vlSelfRef.__PVT__s = 1U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 1U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [1U];
    }
    vlSelfRef.__PVT__s = 2U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 2U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [2U];
    }
    vlSelfRef.__PVT__s = 3U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 3U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [3U];
    }
    vlSelfRef.__PVT__s = 4U;
    vlSelfRef.__PVT__noncm_addr_match_pm_nonzero = 
        (0U != (IData)(vlSelfRef.__PVT__noncm_addr_match_pm));
    vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
        [0U];
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 0U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [0U];
    }
    vlSelfRef.__PVT__t = 1U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 1U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [1U];
    }
    vlSelfRef.__PVT__t = 2U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 2U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [2U];
    }
    vlSelfRef.__PVT__t = 3U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 3U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [3U];
    }
    vlSelfRef.__PVT__t = 4U;
    vlSelfRef.__PVT__noncm_addr_match_hn_i_nonzero 
        = (0U != (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i));
    vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i = vlSelfRef.__PVT__xy_coord_hn_i
        [0U];
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 0U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[0U];
    }
    vlSelfRef.__PVT__r = 1U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 1U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[1U];
    }
    vlSelfRef.__PVT__r = 2U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 2U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[2U];
    }
    vlSelfRef.__PVT__r = 3U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 3U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[3U];
    }
    vlSelfRef.__PVT__r = 4U;
    vlSelfRef.__PVT__ucie_tgtid = 0U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 1U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 1U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [1U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [1U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 2U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 2U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [2U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [2U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 3U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 3U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [3U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [3U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 4U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 4U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [4U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [4U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 5U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 5U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [5U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [5U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 6U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 6U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [6U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [6U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 7U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 7U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [7U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [7U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 8U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 8U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [8U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [8U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 9U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 9U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [9U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [9U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xaU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xaU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xaU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xaU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xbU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xbU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xbU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xbU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xcU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xcU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xcU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xcU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xdU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xdU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xdU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xdU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xeU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xeU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xeU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xeU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xfU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xfU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xfU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xfU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x10U;
    vlSelfRef.__PVT__tgtid_pm = vlSelfRef.__PVT__cm_tgtid_pm;
    if (vlSelfRef.__PVT__noncm_addr_match_pm_nonzero) {
        vlSelfRef.__PVT__tgtid_pm = vlSelfRef.__PVT__noncm_tgtid_pm;
    }
    vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f;
    if (((IData)(vlSelfRef.__PVT__reqis_to_noncm) & (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_f_nonzero))) {
        vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f;
    } else if (((IData)(vlSelfRef.__PVT__reqis_to_noncm) 
                & (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i_nonzero))) {
        vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i;
    }
    vlSelfRef.__PVT__icn_generated_tgtid = (VL_REDOR_I((IData)(vlSelfRef.__PVT__ucie_addr_match_vec))
                                             ? (IData)(vlSelfRef.__PVT__ucie_tgtid)
                                             : ((0x14U 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x3eU, 7)))
                                                 ? (IData)(vlSelfRef.__PVT__mn_node_id)
                                                 : 
                                                ((0x3aU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x3eU, 7)))
                                                  ? (IData)(vlSelfRef.__PVT__tgtid_pm)
                                                  : 
                                                 VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__tgt_cluster_id_hn), (IData)(vlSelfRef.__PVT__tgt_port_id_hn)))));
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_RX_REQFLIT_modified, vlSelfRef.__PVT__ic_RX_REQFLIT_s);
    VL_ASSIGNSEL_WI(151,22,4U, vlSelfRef.__PVT__ic_RX_REQFLIT_modified, 
                    VL_CONCAT_III(22,8,14, (IData)(vlSelfRef.__PVT__mycluster_id), 
                                  VL_CONCAT_III(14,3,11, (IData)(vlSelfRef.__PVT__myproc_id), (IData)(vlSelfRef.__PVT__icn_generated_tgtid))));
    if (vlSelfRef.__PVT__qos_override_en) {
        VL_ASSIGNSEL_WI(151,4,0U, vlSelfRef.__PVT__ic_RX_REQFLIT_modified, vlSelfRef.__PVT__qos_override_val);
    }
    VL_ASSIGN_W(151,vlSelfRef.__PVT__vc1_flit, vlSelfRef.__PVT__ic_RX_REQFLIT_modified);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__vc0_flit, vlSelfRef.__PVT__ic_RX_REQFLIT_modified);
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_RX_FLIT, vlSelfRef.__PVT__vc0_flit);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__1(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcv_buff_released_vc0 = vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__send_working_update;
    vlSelfRef.__PVT__reqcrdt_balnce_tobesent_nxt = vlSelfRef.__PVT__reqcrdt_balnce_tobesent;
    vlSelfRef.__PVT__reqcrdt_balnce_tobesent_nxt = 
        (0x1fU & (((((((((0U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))) 
                         | (2U == VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                        | (4U == VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                       | (6U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                      | (8U == VL_CONCAT_III(4,2,2, 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                     | (0xaU == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                    | (0xcU == VL_CONCAT_III(4,2,2, 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                   | (0xeU == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))))
                   ? ((0U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                       ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                       : ((2U == VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                           ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                           : ((4U == VL_CONCAT_III(4,2,2, 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                               : ((6U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                   ? ((IData)(2U) + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                   : ((8U == VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                       ? ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                       : ((0xaU == 
                                           VL_CONCAT_III(4,2,2, 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                           ? ((IData)(2U) 
                                              + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                           : ((0xcU 
                                               == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                               ? ((IData)(2U) 
                                                  + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                               : ((IData)(3U) 
                                                  + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)))))))))
                   : (((((((((1U == VL_CONCAT_III(4,2,2, 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))) 
                             | (3U == VL_CONCAT_III(4,2,2, 
                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                            | (5U == VL_CONCAT_III(4,2,2, 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                           | (7U == VL_CONCAT_III(4,2,2, 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                          | (9U == VL_CONCAT_III(4,2,2, 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                         | (0xbU == VL_CONCAT_III(4,2,2, 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                        | (0xdU == VL_CONCAT_III(4,2,2, 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                       | (0xfU == VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))))
                       ? ((1U == VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                           ? ((IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent) 
                              - (IData)(1U)) : ((3U 
                                                 == 
                                                 VL_CONCAT_III(4,2,2, 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                 ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                                                 : 
                                                ((5U 
                                                  == 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                  ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                                                  : 
                                                 ((7U 
                                                   == 
                                                   VL_CONCAT_III(4,2,2, 
                                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                                   : 
                                                  ((9U 
                                                    == 
                                                    VL_CONCAT_III(4,2,2, 
                                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                    ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                                                    : 
                                                   ((0xbU 
                                                     == 
                                                     VL_CONCAT_III(4,2,2, 
                                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                                     : 
                                                    ((0xdU 
                                                      == 
                                                      VL_CONCAT_III(4,2,2, 
                                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                                      : 
                                                     ((IData)(2U) 
                                                      + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)))))))))
                       : (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))));
    vlSelfRef.__PVT__snpcrdt_balnce_tobesent_nxt = 0U;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_pend = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelfRef.__PVT__vc0_pend = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = vlSelfRef.__PVT__crdt_balance_to_deactivate_link;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = (0x1fU & ((0U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_REQFLITV), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))
                     ? (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)
                     : ((1U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_REQFLITV), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))
                         ? ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                            - (IData)(1U)) : ((2U == 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_REQFLITV), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link))
                                               : (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)))));
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_RX_REQFLIT_s, vlSelfRef.__PVT__ic_RX_REQFLIT);
    VL_EXTEND_WW(119,108, vlSelfRef.__PVT__ic_RX_SNPFLIT_s, vlSelfRef.__PVT__ic_RX_SNPFLIT);
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__vc0_pend;
    vlSelfRef.__PVT__rcvd_snplink_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_SNPFLITV) 
                                          & (0U == 
                                             (0x1fU 
                                              & VL_SEL_IWII(119, vlSelfRef.__PVT__ic_RX_SNPFLIT_s, 0x32U, 5))));
    vlSelfRef.__PVT__rcvd_reqlink_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_REQFLITV) 
                                          & (0U == 
                                             (0x7fU 
                                              & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x3eU, 7))));
    vlSelfRef.__PVT__reqis_to_noncm = (1U & (~ VL_BITSEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x87U)));
    vlSelfRef.__PVT__cm_reqflit_addr_sliced_hn_f[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_reqflit_addr_sliced_hn_f[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[0U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[1U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[2U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[3U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[1U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[2U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[3U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[1U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[2U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[3U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[1U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[2U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[3U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[4U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[5U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[6U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[7U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[8U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[9U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xaU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xbU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xcU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xdU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xeU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xfU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc1 = (((IData)(vlSelfRef.__PVT__ic_RX_REQFLITV) 
                                            & (IData)(vlSelfRef.__PVT__reqflit_is_vc1)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc0 = (((IData)(vlSelfRef.__PVT__ic_RX_REQFLITV) 
                                            & (IData)(vlSelfRef.__PVT__reqflit_is_vc0)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt)));
    vlSelfRef.__PVT__cm_reqaddr_match_hn_f = (((IData)(vlSelfRef.__PVT__cm_activated_hn_f) 
                                               & (vlSelfRef.__PVT__cm_reqflit_addr_sliced_hn_f
                                                  [0U] 
                                                  >= 
                                                  vlSelfRef.__PVT__cm_homeaddr_base_sliced_hn_f
                                                  [0U])) 
                                              & (VL_EXTEND_II(29,28, 
                                                              vlSelfRef.__PVT__cm_reqflit_addr_sliced_hn_f
                                                              [0U]) 
                                                 < 
                                                 vlSelfRef.__PVT__cm_homeaddr_limit_sliced_hn_f
                                                 [0U]));
    vlSelfRef.__PVT__noncm_reqaddr_match_hn_f = (((IData)(vlSelfRef.__PVT__noncm_activated_hn_f) 
                                                  & (vlSelfRef.__PVT__noncm_reqflit_addr_sliced_hn_f
                                                     [0U] 
                                                     >= 
                                                     vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_f
                                                     [0U])) 
                                                 & (VL_EXTEND_II(29,28, 
                                                                 vlSelfRef.__PVT__noncm_reqflit_addr_sliced_hn_f
                                                                 [0U]) 
                                                    < 
                                                    vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_f
                                                    [0U]));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 0U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [0U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [0U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [0U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 1U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [1U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [1U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [1U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 2U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [2U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [2U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [2U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 3U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [3U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [3U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [3U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [3U])));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 0U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [0U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [0U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [0U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 1U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [1U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [1U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [1U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 2U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [2U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [2U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [2U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 3U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [3U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [3U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [3U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [3U])));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 0U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [0U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [0U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [0U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 1U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [1U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [1U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [1U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 2U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [2U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [2U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [2U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 3U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [3U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [3U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [3U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [3U])));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [0U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 1U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [1U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [1U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [1U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 2U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [2U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [2U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [2U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 3U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [3U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [3U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [3U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [3U])));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 4U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [4U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [4U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [4U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [4U])));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 5U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [5U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [5U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [5U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [5U])));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 6U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [6U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [6U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [6U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [6U])));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 7U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [7U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [7U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [7U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [7U])));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 8U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [8U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [8U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [8U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [8U])));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 9U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [9U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [9U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [9U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [9U])));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xaU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xaU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xaU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xaU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xaU])));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xbU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xbU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xbU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xbU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xbU])));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xcU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xcU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xcU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xcU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xcU])));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xdU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xdU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xdU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xdU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xdU])));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xeU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xeU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xeU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xeU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xeU])));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xfU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xfU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xfU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xfU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xfU])));
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc0;
    vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
        [0U];
    if (vlSelfRef.__PVT__cm_reqaddr_match_hn_f) {
        vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
            [0U];
    }
    vlSelfRef.__PVT__p = 1U;
    vlSelfRef.__PVT__noncm_addr_match_hn_f_nonzero 
        = vlSelfRef.__PVT__noncm_reqaddr_match_hn_f;
    vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
        [0U];
    if (vlSelfRef.__PVT__noncm_reqaddr_match_hn_f) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f 
            = vlSelfRef.__PVT__xy_coord_hn_f[0U];
    }
    vlSelfRef.__PVT__q = 1U;
    vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
        [0U];
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 0U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [0U];
    }
    vlSelfRef.__PVT__s = 1U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 1U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [1U];
    }
    vlSelfRef.__PVT__s = 2U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 2U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [2U];
    }
    vlSelfRef.__PVT__s = 3U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 3U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [3U];
    }
    vlSelfRef.__PVT__s = 4U;
    vlSelfRef.__PVT__noncm_addr_match_pm_nonzero = 
        (0U != (IData)(vlSelfRef.__PVT__noncm_addr_match_pm));
    vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
        [0U];
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 0U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [0U];
    }
    vlSelfRef.__PVT__t = 1U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 1U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [1U];
    }
    vlSelfRef.__PVT__t = 2U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 2U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [2U];
    }
    vlSelfRef.__PVT__t = 3U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 3U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [3U];
    }
    vlSelfRef.__PVT__t = 4U;
    vlSelfRef.__PVT__noncm_addr_match_hn_i_nonzero 
        = (0U != (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i));
    vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i = vlSelfRef.__PVT__xy_coord_hn_i
        [0U];
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 0U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[0U];
    }
    vlSelfRef.__PVT__r = 1U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 1U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[1U];
    }
    vlSelfRef.__PVT__r = 2U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 2U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[2U];
    }
    vlSelfRef.__PVT__r = 3U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 3U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[3U];
    }
    vlSelfRef.__PVT__r = 4U;
    vlSelfRef.__PVT__ucie_tgtid = 0U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 1U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 1U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [1U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [1U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 2U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 2U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [2U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [2U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 3U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 3U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [3U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [3U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 4U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 4U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [4U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [4U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 5U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 5U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [5U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [5U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 6U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 6U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [6U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [6U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 7U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 7U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [7U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [7U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 8U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 8U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [8U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [8U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 9U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 9U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [9U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [9U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xaU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xaU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xaU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xaU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xbU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xbU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xbU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xbU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xcU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xcU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xcU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xcU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xdU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xdU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xdU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xdU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xeU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xeU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xeU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xeU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xfU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xfU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xfU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xfU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x10U;
    vlSelfRef.__PVT__tgtid_pm = vlSelfRef.__PVT__cm_tgtid_pm;
    if (vlSelfRef.__PVT__noncm_addr_match_pm_nonzero) {
        vlSelfRef.__PVT__tgtid_pm = vlSelfRef.__PVT__noncm_tgtid_pm;
    }
    vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f;
    if (((IData)(vlSelfRef.__PVT__reqis_to_noncm) & (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_f_nonzero))) {
        vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f;
    } else if (((IData)(vlSelfRef.__PVT__reqis_to_noncm) 
                & (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i_nonzero))) {
        vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i;
    }
    vlSelfRef.__PVT__icn_generated_tgtid = (VL_REDOR_I((IData)(vlSelfRef.__PVT__ucie_addr_match_vec))
                                             ? (IData)(vlSelfRef.__PVT__ucie_tgtid)
                                             : ((0x14U 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x3eU, 7)))
                                                 ? (IData)(vlSelfRef.__PVT__mn_node_id)
                                                 : 
                                                ((0x3aU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x3eU, 7)))
                                                  ? (IData)(vlSelfRef.__PVT__tgtid_pm)
                                                  : 
                                                 VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__tgt_cluster_id_hn), (IData)(vlSelfRef.__PVT__tgt_port_id_hn)))));
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_RX_REQFLIT_modified, vlSelfRef.__PVT__ic_RX_REQFLIT_s);
    VL_ASSIGNSEL_WI(151,22,4U, vlSelfRef.__PVT__ic_RX_REQFLIT_modified, 
                    VL_CONCAT_III(22,8,14, (IData)(vlSelfRef.__PVT__mycluster_id), 
                                  VL_CONCAT_III(14,3,11, (IData)(vlSelfRef.__PVT__myproc_id), (IData)(vlSelfRef.__PVT__icn_generated_tgtid))));
    if (vlSelfRef.__PVT__qos_override_en) {
        VL_ASSIGNSEL_WI(151,4,0U, vlSelfRef.__PVT__ic_RX_REQFLIT_modified, vlSelfRef.__PVT__qos_override_val);
    }
    VL_ASSIGN_W(151,vlSelfRef.__PVT__vc1_flit, vlSelfRef.__PVT__ic_RX_REQFLIT_modified);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__vc0_flit, vlSelfRef.__PVT__ic_RX_REQFLIT_modified);
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_RX_FLIT, vlSelfRef.__PVT__vc0_flit);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__1(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcv_buff_released_vc0 = vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__send_working_update;
    vlSelfRef.__PVT__reqcrdt_balnce_tobesent_nxt = vlSelfRef.__PVT__reqcrdt_balnce_tobesent;
    vlSelfRef.__PVT__reqcrdt_balnce_tobesent_nxt = 
        (0x1fU & (((((((((0U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))) 
                         | (2U == VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                        | (4U == VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                       | (6U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                      | (8U == VL_CONCAT_III(4,2,2, 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                     | (0xaU == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                    | (0xcU == VL_CONCAT_III(4,2,2, 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                   | (0xeU == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))))
                   ? ((0U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                       ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                       : ((2U == VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                           ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                           : ((4U == VL_CONCAT_III(4,2,2, 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                               : ((6U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                   ? ((IData)(2U) + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                   : ((8U == VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                       ? ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                       : ((0xaU == 
                                           VL_CONCAT_III(4,2,2, 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                           ? ((IData)(2U) 
                                              + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                           : ((0xcU 
                                               == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                               ? ((IData)(2U) 
                                                  + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                               : ((IData)(3U) 
                                                  + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)))))))))
                   : (((((((((1U == VL_CONCAT_III(4,2,2, 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))) 
                             | (3U == VL_CONCAT_III(4,2,2, 
                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                            | (5U == VL_CONCAT_III(4,2,2, 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                           | (7U == VL_CONCAT_III(4,2,2, 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                          | (9U == VL_CONCAT_III(4,2,2, 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                         | (0xbU == VL_CONCAT_III(4,2,2, 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                        | (0xdU == VL_CONCAT_III(4,2,2, 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                       | (0xfU == VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))))
                       ? ((1U == VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                           ? ((IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent) 
                              - (IData)(1U)) : ((3U 
                                                 == 
                                                 VL_CONCAT_III(4,2,2, 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                 ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                                                 : 
                                                ((5U 
                                                  == 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                  ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                                                  : 
                                                 ((7U 
                                                   == 
                                                   VL_CONCAT_III(4,2,2, 
                                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                                   : 
                                                  ((9U 
                                                    == 
                                                    VL_CONCAT_III(4,2,2, 
                                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                    ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                                                    : 
                                                   ((0xbU 
                                                     == 
                                                     VL_CONCAT_III(4,2,2, 
                                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                                     : 
                                                    ((0xdU 
                                                      == 
                                                      VL_CONCAT_III(4,2,2, 
                                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                                      : 
                                                     ((IData)(2U) 
                                                      + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)))))))))
                       : (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))));
    vlSelfRef.__PVT__snpcrdt_balnce_tobesent_nxt = 0U;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_vc0, vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__flit_out);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__1(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__3(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_pend = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelfRef.__PVT__vc0_pend = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = vlSelfRef.__PVT__crdt_balance_to_deactivate_link;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = (0x1fU & ((0U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_REQFLITV), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))
                     ? (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)
                     : ((1U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_REQFLITV), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))
                         ? ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                            - (IData)(1U)) : ((2U == 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_REQFLITV), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link))
                                               : (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)))));
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_RX_REQFLIT_s, vlSelfRef.__PVT__ic_RX_REQFLIT);
    VL_EXTEND_WW(119,108, vlSelfRef.__PVT__ic_RX_SNPFLIT_s, vlSelfRef.__PVT__ic_RX_SNPFLIT);
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__vc0_pend;
    vlSelfRef.__PVT__rcvd_snplink_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_SNPFLITV) 
                                          & (0U == 
                                             (0x1fU 
                                              & VL_SEL_IWII(119, vlSelfRef.__PVT__ic_RX_SNPFLIT_s, 0x32U, 5))));
    vlSelfRef.__PVT__rcvd_reqlink_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_REQFLITV) 
                                          & (0U == 
                                             (0x7fU 
                                              & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x3eU, 7))));
    vlSelfRef.__PVT__reqis_to_noncm = (1U & (~ VL_BITSEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x87U)));
    vlSelfRef.__PVT__cm_reqflit_addr_sliced_hn_f[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_reqflit_addr_sliced_hn_f[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[0U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[1U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[2U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[3U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[1U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[2U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[3U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[1U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[2U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[3U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[1U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[2U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[3U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[4U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[5U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[6U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[7U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[8U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[9U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xaU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xbU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xcU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xdU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xeU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xfU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc1 = (((IData)(vlSelfRef.__PVT__ic_RX_REQFLITV) 
                                            & (IData)(vlSelfRef.__PVT__reqflit_is_vc1)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc0 = (((IData)(vlSelfRef.__PVT__ic_RX_REQFLITV) 
                                            & (IData)(vlSelfRef.__PVT__reqflit_is_vc0)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt)));
    vlSelfRef.__PVT__cm_reqaddr_match_hn_f = (((IData)(vlSelfRef.__PVT__cm_activated_hn_f) 
                                               & (vlSelfRef.__PVT__cm_reqflit_addr_sliced_hn_f
                                                  [0U] 
                                                  >= 
                                                  vlSelfRef.__PVT__cm_homeaddr_base_sliced_hn_f
                                                  [0U])) 
                                              & (VL_EXTEND_II(29,28, 
                                                              vlSelfRef.__PVT__cm_reqflit_addr_sliced_hn_f
                                                              [0U]) 
                                                 < 
                                                 vlSelfRef.__PVT__cm_homeaddr_limit_sliced_hn_f
                                                 [0U]));
    vlSelfRef.__PVT__noncm_reqaddr_match_hn_f = (((IData)(vlSelfRef.__PVT__noncm_activated_hn_f) 
                                                  & (vlSelfRef.__PVT__noncm_reqflit_addr_sliced_hn_f
                                                     [0U] 
                                                     >= 
                                                     vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_f
                                                     [0U])) 
                                                 & (VL_EXTEND_II(29,28, 
                                                                 vlSelfRef.__PVT__noncm_reqflit_addr_sliced_hn_f
                                                                 [0U]) 
                                                    < 
                                                    vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_f
                                                    [0U]));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 0U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [0U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [0U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [0U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 1U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [1U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [1U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [1U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 2U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [2U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [2U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [2U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 3U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [3U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [3U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [3U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [3U])));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 0U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [0U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [0U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [0U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 1U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [1U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [1U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [1U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 2U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [2U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [2U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [2U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 3U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [3U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [3U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [3U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [3U])));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 0U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [0U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [0U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [0U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 1U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [1U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [1U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [1U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 2U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [2U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [2U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [2U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 3U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [3U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [3U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [3U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [3U])));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [0U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 1U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [1U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [1U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [1U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 2U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [2U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [2U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [2U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 3U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [3U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [3U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [3U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [3U])));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 4U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [4U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [4U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [4U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [4U])));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 5U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [5U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [5U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [5U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [5U])));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 6U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [6U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [6U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [6U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [6U])));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 7U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [7U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [7U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [7U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [7U])));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 8U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [8U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [8U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [8U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [8U])));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 9U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [9U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [9U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [9U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [9U])));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xaU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xaU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xaU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xaU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xaU])));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xbU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xbU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xbU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xbU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xbU])));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xcU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xcU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xcU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xcU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xcU])));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xdU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xdU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xdU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xdU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xdU])));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xeU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xeU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xeU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xeU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xeU])));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xfU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xfU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xfU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xfU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xfU])));
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc0;
    vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
        [0U];
    if (vlSelfRef.__PVT__cm_reqaddr_match_hn_f) {
        vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
            [0U];
    }
    vlSelfRef.__PVT__p = 1U;
    vlSelfRef.__PVT__noncm_addr_match_hn_f_nonzero 
        = vlSelfRef.__PVT__noncm_reqaddr_match_hn_f;
    vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
        [0U];
    if (vlSelfRef.__PVT__noncm_reqaddr_match_hn_f) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f 
            = vlSelfRef.__PVT__xy_coord_hn_f[0U];
    }
    vlSelfRef.__PVT__q = 1U;
    vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
        [0U];
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 0U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [0U];
    }
    vlSelfRef.__PVT__s = 1U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 1U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [1U];
    }
    vlSelfRef.__PVT__s = 2U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 2U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [2U];
    }
    vlSelfRef.__PVT__s = 3U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 3U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [3U];
    }
    vlSelfRef.__PVT__s = 4U;
    vlSelfRef.__PVT__noncm_addr_match_pm_nonzero = 
        (0U != (IData)(vlSelfRef.__PVT__noncm_addr_match_pm));
    vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
        [0U];
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 0U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [0U];
    }
    vlSelfRef.__PVT__t = 1U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 1U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [1U];
    }
    vlSelfRef.__PVT__t = 2U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 2U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [2U];
    }
    vlSelfRef.__PVT__t = 3U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 3U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [3U];
    }
    vlSelfRef.__PVT__t = 4U;
    vlSelfRef.__PVT__noncm_addr_match_hn_i_nonzero 
        = (0U != (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i));
    vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i = vlSelfRef.__PVT__xy_coord_hn_i
        [0U];
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 0U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[0U];
    }
    vlSelfRef.__PVT__r = 1U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 1U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[1U];
    }
    vlSelfRef.__PVT__r = 2U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 2U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[2U];
    }
    vlSelfRef.__PVT__r = 3U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 3U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[3U];
    }
    vlSelfRef.__PVT__r = 4U;
    vlSelfRef.__PVT__ucie_tgtid = 0U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 1U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 1U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [1U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [1U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 2U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 2U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [2U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [2U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 3U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 3U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [3U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [3U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 4U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 4U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [4U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [4U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 5U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 5U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [5U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [5U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 6U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 6U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [6U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [6U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 7U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 7U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [7U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [7U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 8U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 8U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [8U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [8U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 9U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 9U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [9U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [9U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xaU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xaU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xaU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xaU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xbU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xbU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xbU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xbU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xcU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xcU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xcU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xcU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xdU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xdU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xdU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xdU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xeU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xeU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xeU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xeU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xfU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xfU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xfU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xfU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x10U;
    vlSelfRef.__PVT__tgtid_pm = vlSelfRef.__PVT__cm_tgtid_pm;
    if (vlSelfRef.__PVT__noncm_addr_match_pm_nonzero) {
        vlSelfRef.__PVT__tgtid_pm = vlSelfRef.__PVT__noncm_tgtid_pm;
    }
    vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f;
    if (((IData)(vlSelfRef.__PVT__reqis_to_noncm) & (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_f_nonzero))) {
        vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f;
    } else if (((IData)(vlSelfRef.__PVT__reqis_to_noncm) 
                & (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i_nonzero))) {
        vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i;
    }
    vlSelfRef.__PVT__icn_generated_tgtid = (VL_REDOR_I((IData)(vlSelfRef.__PVT__ucie_addr_match_vec))
                                             ? (IData)(vlSelfRef.__PVT__ucie_tgtid)
                                             : ((0x14U 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x3eU, 7)))
                                                 ? (IData)(vlSelfRef.__PVT__mn_node_id)
                                                 : 
                                                ((0x3aU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x3eU, 7)))
                                                  ? (IData)(vlSelfRef.__PVT__tgtid_pm)
                                                  : 
                                                 VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__tgt_cluster_id_hn), (IData)(vlSelfRef.__PVT__tgt_port_id_hn)))));
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_RX_REQFLIT_modified, vlSelfRef.__PVT__ic_RX_REQFLIT_s);
    VL_ASSIGNSEL_WI(151,22,4U, vlSelfRef.__PVT__ic_RX_REQFLIT_modified, 
                    VL_CONCAT_III(22,8,14, (IData)(vlSelfRef.__PVT__mycluster_id), 
                                  VL_CONCAT_III(14,3,11, (IData)(vlSelfRef.__PVT__myproc_id), (IData)(vlSelfRef.__PVT__icn_generated_tgtid))));
    if (vlSelfRef.__PVT__qos_override_en) {
        VL_ASSIGNSEL_WI(151,4,0U, vlSelfRef.__PVT__ic_RX_REQFLIT_modified, vlSelfRef.__PVT__qos_override_val);
    }
    VL_ASSIGN_W(151,vlSelfRef.__PVT__vc1_flit, vlSelfRef.__PVT__ic_RX_REQFLIT_modified);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__vc0_flit, vlSelfRef.__PVT__ic_RX_REQFLIT_modified);
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_RX_FLIT, vlSelfRef.__PVT__vc0_flit);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__4(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p1__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcv_buff_released_vc0 = vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__send_working_update;
    vlSelfRef.__PVT__reqcrdt_balnce_tobesent_nxt = vlSelfRef.__PVT__reqcrdt_balnce_tobesent;
    vlSelfRef.__PVT__reqcrdt_balnce_tobesent_nxt = 
        (0x1fU & (((((((((0U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))) 
                         | (2U == VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                        | (4U == VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                       | (6U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                      | (8U == VL_CONCAT_III(4,2,2, 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                     | (0xaU == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                    | (0xcU == VL_CONCAT_III(4,2,2, 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                   | (0xeU == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))))
                   ? ((0U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                       ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                       : ((2U == VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                           ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                           : ((4U == VL_CONCAT_III(4,2,2, 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                               : ((6U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                   ? ((IData)(2U) + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                   : ((8U == VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                       ? ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                       : ((0xaU == 
                                           VL_CONCAT_III(4,2,2, 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                           ? ((IData)(2U) 
                                              + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                           : ((0xcU 
                                               == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                               ? ((IData)(2U) 
                                                  + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                               : ((IData)(3U) 
                                                  + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)))))))))
                   : (((((((((1U == VL_CONCAT_III(4,2,2, 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))) 
                             | (3U == VL_CONCAT_III(4,2,2, 
                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                            | (5U == VL_CONCAT_III(4,2,2, 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                           | (7U == VL_CONCAT_III(4,2,2, 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                          | (9U == VL_CONCAT_III(4,2,2, 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                         | (0xbU == VL_CONCAT_III(4,2,2, 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                        | (0xdU == VL_CONCAT_III(4,2,2, 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                       | (0xfU == VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))))
                       ? ((1U == VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                           ? ((IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent) 
                              - (IData)(1U)) : ((3U 
                                                 == 
                                                 VL_CONCAT_III(4,2,2, 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                 ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                                                 : 
                                                ((5U 
                                                  == 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                  ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                                                  : 
                                                 ((7U 
                                                   == 
                                                   VL_CONCAT_III(4,2,2, 
                                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                                   : 
                                                  ((9U 
                                                    == 
                                                    VL_CONCAT_III(4,2,2, 
                                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                    ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                                                    : 
                                                   ((0xbU 
                                                     == 
                                                     VL_CONCAT_III(4,2,2, 
                                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                                     : 
                                                    ((0xdU 
                                                      == 
                                                      VL_CONCAT_III(4,2,2, 
                                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                                      : 
                                                     ((IData)(2U) 
                                                      + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)))))))))
                       : (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))));
    vlSelfRef.__PVT__snpcrdt_balnce_tobesent_nxt = 0U;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__rstb_intfrx_clk 
        = vlSelfRef.__PVT__rstb_intfrx_clk;
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__rstb_ic_clk 
        = vlSelfRef.__PVT__rstb_ic_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__1(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_pend = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelfRef.__PVT__vc0_pend = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = vlSelfRef.__PVT__crdt_balance_to_deactivate_link;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = (0x1fU & ((0U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_REQFLITV), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))
                     ? (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)
                     : ((1U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_REQFLITV), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))
                         ? ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                            - (IData)(1U)) : ((2U == 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_REQFLITV), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link))
                                               : (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)))));
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_RX_REQFLIT_s, vlSelfRef.__PVT__ic_RX_REQFLIT);
    VL_EXTEND_WW(119,108, vlSelfRef.__PVT__ic_RX_SNPFLIT_s, vlSelfRef.__PVT__ic_RX_SNPFLIT);
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__vc0_pend;
    vlSelfRef.__PVT__rcvd_snplink_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_SNPFLITV) 
                                          & (0U == 
                                             (0x1fU 
                                              & VL_SEL_IWII(119, vlSelfRef.__PVT__ic_RX_SNPFLIT_s, 0x32U, 5))));
    vlSelfRef.__PVT__rcvd_reqlink_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_REQFLITV) 
                                          & (0U == 
                                             (0x7fU 
                                              & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x3eU, 7))));
    vlSelfRef.__PVT__reqis_to_noncm = (1U & (~ VL_BITSEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x87U)));
    vlSelfRef.__PVT__cm_reqflit_addr_sliced_hn_f[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_reqflit_addr_sliced_hn_f[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[0U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[1U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[2U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[3U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[1U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[2U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[3U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[1U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[2U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[3U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[1U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[2U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[3U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[4U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[5U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[6U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[7U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[8U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[9U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xaU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xbU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xcU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xdU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xeU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xfU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc1 = (((IData)(vlSelfRef.__PVT__ic_RX_REQFLITV) 
                                            & (IData)(vlSelfRef.__PVT__reqflit_is_vc1)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc0 = (((IData)(vlSelfRef.__PVT__ic_RX_REQFLITV) 
                                            & (IData)(vlSelfRef.__PVT__reqflit_is_vc0)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt)));
    vlSelfRef.__PVT__cm_reqaddr_match_hn_f = (((IData)(vlSelfRef.__PVT__cm_activated_hn_f) 
                                               & (vlSelfRef.__PVT__cm_reqflit_addr_sliced_hn_f
                                                  [0U] 
                                                  >= 
                                                  vlSelfRef.__PVT__cm_homeaddr_base_sliced_hn_f
                                                  [0U])) 
                                              & (VL_EXTEND_II(29,28, 
                                                              vlSelfRef.__PVT__cm_reqflit_addr_sliced_hn_f
                                                              [0U]) 
                                                 < 
                                                 vlSelfRef.__PVT__cm_homeaddr_limit_sliced_hn_f
                                                 [0U]));
    vlSelfRef.__PVT__noncm_reqaddr_match_hn_f = (((IData)(vlSelfRef.__PVT__noncm_activated_hn_f) 
                                                  & (vlSelfRef.__PVT__noncm_reqflit_addr_sliced_hn_f
                                                     [0U] 
                                                     >= 
                                                     vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_f
                                                     [0U])) 
                                                 & (VL_EXTEND_II(29,28, 
                                                                 vlSelfRef.__PVT__noncm_reqflit_addr_sliced_hn_f
                                                                 [0U]) 
                                                    < 
                                                    vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_f
                                                    [0U]));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 0U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [0U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [0U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [0U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 1U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [1U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [1U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [1U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 2U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [2U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [2U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [2U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 3U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [3U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [3U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [3U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [3U])));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 0U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [0U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [0U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [0U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 1U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [1U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [1U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [1U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 2U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [2U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [2U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [2U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 3U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [3U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [3U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [3U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [3U])));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 0U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [0U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [0U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [0U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 1U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [1U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [1U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [1U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 2U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [2U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [2U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [2U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 3U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [3U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [3U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [3U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [3U])));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [0U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 1U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [1U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [1U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [1U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 2U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [2U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [2U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [2U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 3U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [3U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [3U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [3U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [3U])));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 4U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [4U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [4U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [4U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [4U])));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 5U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [5U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [5U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [5U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [5U])));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 6U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [6U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [6U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [6U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [6U])));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 7U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [7U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [7U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [7U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [7U])));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 8U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [8U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [8U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [8U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [8U])));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 9U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [9U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [9U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [9U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [9U])));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xaU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xaU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xaU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xaU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xaU])));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xbU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xbU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xbU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xbU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xbU])));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xcU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xcU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xcU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xcU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xcU])));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xdU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xdU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xdU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xdU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xdU])));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xeU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xeU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xeU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xeU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xeU])));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xfU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xfU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xfU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xfU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xfU])));
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc0;
    vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
        [0U];
    if (vlSelfRef.__PVT__cm_reqaddr_match_hn_f) {
        vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
            [0U];
    }
    vlSelfRef.__PVT__p = 1U;
    vlSelfRef.__PVT__noncm_addr_match_hn_f_nonzero 
        = vlSelfRef.__PVT__noncm_reqaddr_match_hn_f;
    vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
        [0U];
    if (vlSelfRef.__PVT__noncm_reqaddr_match_hn_f) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f 
            = vlSelfRef.__PVT__xy_coord_hn_f[0U];
    }
    vlSelfRef.__PVT__q = 1U;
    vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
        [0U];
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 0U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [0U];
    }
    vlSelfRef.__PVT__s = 1U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 1U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [1U];
    }
    vlSelfRef.__PVT__s = 2U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 2U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [2U];
    }
    vlSelfRef.__PVT__s = 3U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 3U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [3U];
    }
    vlSelfRef.__PVT__s = 4U;
    vlSelfRef.__PVT__noncm_addr_match_pm_nonzero = 
        (0U != (IData)(vlSelfRef.__PVT__noncm_addr_match_pm));
    vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
        [0U];
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 0U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [0U];
    }
    vlSelfRef.__PVT__t = 1U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 1U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [1U];
    }
    vlSelfRef.__PVT__t = 2U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 2U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [2U];
    }
    vlSelfRef.__PVT__t = 3U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 3U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [3U];
    }
    vlSelfRef.__PVT__t = 4U;
    vlSelfRef.__PVT__noncm_addr_match_hn_i_nonzero 
        = (0U != (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i));
    vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i = vlSelfRef.__PVT__xy_coord_hn_i
        [0U];
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 0U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[0U];
    }
    vlSelfRef.__PVT__r = 1U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 1U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[1U];
    }
    vlSelfRef.__PVT__r = 2U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 2U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[2U];
    }
    vlSelfRef.__PVT__r = 3U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 3U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[3U];
    }
    vlSelfRef.__PVT__r = 4U;
    vlSelfRef.__PVT__ucie_tgtid = 0U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 1U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 1U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [1U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [1U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 2U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 2U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [2U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [2U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 3U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 3U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [3U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [3U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 4U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 4U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [4U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [4U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 5U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 5U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [5U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [5U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 6U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 6U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [6U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [6U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 7U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 7U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [7U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [7U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 8U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 8U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [8U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [8U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 9U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 9U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [9U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [9U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xaU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xaU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xaU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xaU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xbU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xbU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xbU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xbU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xcU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xcU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xcU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xcU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xdU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xdU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xdU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xdU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xeU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xeU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xeU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xeU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xfU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xfU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xfU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xfU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x10U;
    vlSelfRef.__PVT__tgtid_pm = vlSelfRef.__PVT__cm_tgtid_pm;
    if (vlSelfRef.__PVT__noncm_addr_match_pm_nonzero) {
        vlSelfRef.__PVT__tgtid_pm = vlSelfRef.__PVT__noncm_tgtid_pm;
    }
    vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f;
    if (((IData)(vlSelfRef.__PVT__reqis_to_noncm) & (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_f_nonzero))) {
        vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f;
    } else if (((IData)(vlSelfRef.__PVT__reqis_to_noncm) 
                & (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i_nonzero))) {
        vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i;
    }
    vlSelfRef.__PVT__icn_generated_tgtid = (VL_REDOR_I((IData)(vlSelfRef.__PVT__ucie_addr_match_vec))
                                             ? (IData)(vlSelfRef.__PVT__ucie_tgtid)
                                             : ((0x14U 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x3eU, 7)))
                                                 ? (IData)(vlSelfRef.__PVT__mn_node_id)
                                                 : 
                                                ((0x3aU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x3eU, 7)))
                                                  ? (IData)(vlSelfRef.__PVT__tgtid_pm)
                                                  : 
                                                 VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__tgt_cluster_id_hn), (IData)(vlSelfRef.__PVT__tgt_port_id_hn)))));
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_RX_REQFLIT_modified, vlSelfRef.__PVT__ic_RX_REQFLIT_s);
    VL_ASSIGNSEL_WI(151,22,4U, vlSelfRef.__PVT__ic_RX_REQFLIT_modified, 
                    VL_CONCAT_III(22,8,14, (IData)(vlSelfRef.__PVT__mycluster_id), 
                                  VL_CONCAT_III(14,3,11, (IData)(vlSelfRef.__PVT__myproc_id), (IData)(vlSelfRef.__PVT__icn_generated_tgtid))));
    if (vlSelfRef.__PVT__qos_override_en) {
        VL_ASSIGNSEL_WI(151,4,0U, vlSelfRef.__PVT__ic_RX_REQFLIT_modified, vlSelfRef.__PVT__qos_override_val);
    }
    VL_ASSIGN_W(151,vlSelfRef.__PVT__vc1_flit, vlSelfRef.__PVT__ic_RX_REQFLIT_modified);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__vc0_flit, vlSelfRef.__PVT__ic_RX_REQFLIT_modified);
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_RX_FLIT, vlSelfRef.__PVT__vc0_flit);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__1(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___ico_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcv_buff_released_vc0 = vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__send_working_update;
    vlSelfRef.__PVT__reqcrdt_balnce_tobesent_nxt = vlSelfRef.__PVT__reqcrdt_balnce_tobesent;
    vlSelfRef.__PVT__reqcrdt_balnce_tobesent_nxt = 
        (0x1fU & (((((((((0U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))) 
                         | (2U == VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                        | (4U == VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                       | (6U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                      | (8U == VL_CONCAT_III(4,2,2, 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                     | (0xaU == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                    | (0xcU == VL_CONCAT_III(4,2,2, 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                   | (0xeU == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))))
                   ? ((0U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                       ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                       : ((2U == VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                           ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                           : ((4U == VL_CONCAT_III(4,2,2, 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                               : ((6U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                   ? ((IData)(2U) + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                   : ((8U == VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                       ? ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                       : ((0xaU == 
                                           VL_CONCAT_III(4,2,2, 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                           ? ((IData)(2U) 
                                              + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                           : ((0xcU 
                                               == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                               ? ((IData)(2U) 
                                                  + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                               : ((IData)(3U) 
                                                  + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)))))))))
                   : (((((((((1U == VL_CONCAT_III(4,2,2, 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))) 
                             | (3U == VL_CONCAT_III(4,2,2, 
                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                            | (5U == VL_CONCAT_III(4,2,2, 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                           | (7U == VL_CONCAT_III(4,2,2, 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                          | (9U == VL_CONCAT_III(4,2,2, 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                         | (0xbU == VL_CONCAT_III(4,2,2, 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                        | (0xdU == VL_CONCAT_III(4,2,2, 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                       | (0xfU == VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))))
                       ? ((1U == VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                           ? ((IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent) 
                              - (IData)(1U)) : ((3U 
                                                 == 
                                                 VL_CONCAT_III(4,2,2, 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                 ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                                                 : 
                                                ((5U 
                                                  == 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                  ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                                                  : 
                                                 ((7U 
                                                   == 
                                                   VL_CONCAT_III(4,2,2, 
                                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                                   : 
                                                  ((9U 
                                                    == 
                                                    VL_CONCAT_III(4,2,2, 
                                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                    ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                                                    : 
                                                   ((0xbU 
                                                     == 
                                                     VL_CONCAT_III(4,2,2, 
                                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                                     : 
                                                    ((0xdU 
                                                      == 
                                                      VL_CONCAT_III(4,2,2, 
                                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                                      : 
                                                     ((IData)(2U) 
                                                      + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)))))))))
                       : (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))));
    vlSelfRef.__PVT__snpcrdt_balnce_tobesent_nxt = 0U;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_pend = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelfRef.__PVT__vc0_pend = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = vlSelfRef.__PVT__crdt_balance_to_deactivate_link;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = (0x1fU & ((0U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_REQFLITV), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))
                     ? (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)
                     : ((1U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_REQFLITV), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))
                         ? ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                            - (IData)(1U)) : ((2U == 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_REQFLITV), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link))
                                               : (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)))));
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_RX_REQFLIT_s, vlSelfRef.__PVT__ic_RX_REQFLIT);
    VL_EXTEND_WW(119,108, vlSelfRef.__PVT__ic_RX_SNPFLIT_s, vlSelfRef.__PVT__ic_RX_SNPFLIT);
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__vc0_pend;
    vlSelfRef.__PVT__rcvd_snplink_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_SNPFLITV) 
                                          & (0U == 
                                             (0x1fU 
                                              & VL_SEL_IWII(119, vlSelfRef.__PVT__ic_RX_SNPFLIT_s, 0x32U, 5))));
    vlSelfRef.__PVT__rcvd_reqlink_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_REQFLITV) 
                                          & (0U == 
                                             (0x7fU 
                                              & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x3eU, 7))));
    vlSelfRef.__PVT__reqis_to_noncm = (1U & (~ VL_BITSEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x87U)));
    vlSelfRef.__PVT__cm_reqflit_addr_sliced_hn_f[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_reqflit_addr_sliced_hn_f[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[0U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[1U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[2U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[3U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[1U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[2U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[3U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[1U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[2U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[3U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[1U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[2U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[3U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[4U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[5U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[6U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[7U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[8U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[9U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xaU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xbU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xcU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xdU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xeU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xfU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc1 = (((IData)(vlSelfRef.__PVT__ic_RX_REQFLITV) 
                                            & (IData)(vlSelfRef.__PVT__reqflit_is_vc1)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc0 = (((IData)(vlSelfRef.__PVT__ic_RX_REQFLITV) 
                                            & (IData)(vlSelfRef.__PVT__reqflit_is_vc0)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt)));
    vlSelfRef.__PVT__cm_reqaddr_match_hn_f = (((IData)(vlSelfRef.__PVT__cm_activated_hn_f) 
                                               & (vlSelfRef.__PVT__cm_reqflit_addr_sliced_hn_f
                                                  [0U] 
                                                  >= 
                                                  vlSelfRef.__PVT__cm_homeaddr_base_sliced_hn_f
                                                  [0U])) 
                                              & (VL_EXTEND_II(29,28, 
                                                              vlSelfRef.__PVT__cm_reqflit_addr_sliced_hn_f
                                                              [0U]) 
                                                 < 
                                                 vlSelfRef.__PVT__cm_homeaddr_limit_sliced_hn_f
                                                 [0U]));
    vlSelfRef.__PVT__noncm_reqaddr_match_hn_f = (((IData)(vlSelfRef.__PVT__noncm_activated_hn_f) 
                                                  & (vlSelfRef.__PVT__noncm_reqflit_addr_sliced_hn_f
                                                     [0U] 
                                                     >= 
                                                     vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_f
                                                     [0U])) 
                                                 & (VL_EXTEND_II(29,28, 
                                                                 vlSelfRef.__PVT__noncm_reqflit_addr_sliced_hn_f
                                                                 [0U]) 
                                                    < 
                                                    vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_f
                                                    [0U]));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 0U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [0U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [0U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [0U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 1U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [1U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [1U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [1U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 2U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [2U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [2U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [2U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 3U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [3U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [3U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [3U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [3U])));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 0U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [0U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [0U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [0U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 1U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [1U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [1U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [1U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 2U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [2U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [2U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [2U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 3U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [3U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [3U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [3U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [3U])));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 0U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [0U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [0U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [0U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 1U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [1U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [1U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [1U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 2U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [2U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [2U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [2U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 3U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [3U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [3U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [3U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [3U])));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [0U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 1U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [1U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [1U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [1U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 2U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [2U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [2U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [2U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 3U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [3U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [3U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [3U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [3U])));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 4U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [4U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [4U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [4U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [4U])));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 5U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [5U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [5U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [5U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [5U])));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 6U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [6U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [6U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [6U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [6U])));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 7U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [7U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [7U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [7U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [7U])));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 8U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [8U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [8U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [8U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [8U])));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 9U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [9U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [9U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [9U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [9U])));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xaU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xaU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xaU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xaU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xaU])));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xbU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xbU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xbU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xbU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xbU])));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xcU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xcU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xcU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xcU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xcU])));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xdU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xdU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xdU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xdU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xdU])));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xeU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xeU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xeU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xeU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xeU])));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xfU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xfU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xfU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xfU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xfU])));
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc0;
    vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
        [0U];
    if (vlSelfRef.__PVT__cm_reqaddr_match_hn_f) {
        vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
            [0U];
    }
    vlSelfRef.__PVT__p = 1U;
    vlSelfRef.__PVT__noncm_addr_match_hn_f_nonzero 
        = vlSelfRef.__PVT__noncm_reqaddr_match_hn_f;
    vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
        [0U];
    if (vlSelfRef.__PVT__noncm_reqaddr_match_hn_f) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f 
            = vlSelfRef.__PVT__xy_coord_hn_f[0U];
    }
    vlSelfRef.__PVT__q = 1U;
    vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
        [0U];
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 0U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [0U];
    }
    vlSelfRef.__PVT__s = 1U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 1U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [1U];
    }
    vlSelfRef.__PVT__s = 2U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 2U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [2U];
    }
    vlSelfRef.__PVT__s = 3U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 3U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [3U];
    }
    vlSelfRef.__PVT__s = 4U;
    vlSelfRef.__PVT__noncm_addr_match_pm_nonzero = 
        (0U != (IData)(vlSelfRef.__PVT__noncm_addr_match_pm));
    vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
        [0U];
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 0U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [0U];
    }
    vlSelfRef.__PVT__t = 1U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 1U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [1U];
    }
    vlSelfRef.__PVT__t = 2U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 2U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [2U];
    }
    vlSelfRef.__PVT__t = 3U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 3U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [3U];
    }
    vlSelfRef.__PVT__t = 4U;
    vlSelfRef.__PVT__noncm_addr_match_hn_i_nonzero 
        = (0U != (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i));
    vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i = vlSelfRef.__PVT__xy_coord_hn_i
        [0U];
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 0U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[0U];
    }
    vlSelfRef.__PVT__r = 1U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 1U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[1U];
    }
    vlSelfRef.__PVT__r = 2U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 2U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[2U];
    }
    vlSelfRef.__PVT__r = 3U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 3U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[3U];
    }
    vlSelfRef.__PVT__r = 4U;
    vlSelfRef.__PVT__ucie_tgtid = 0U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 1U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 1U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [1U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [1U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 2U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 2U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [2U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [2U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 3U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 3U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [3U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [3U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 4U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 4U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [4U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [4U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 5U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 5U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [5U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [5U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 6U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 6U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [6U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [6U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 7U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 7U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [7U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [7U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 8U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 8U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [8U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [8U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 9U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 9U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [9U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [9U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xaU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xaU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xaU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xaU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xbU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xbU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xbU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xbU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xcU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xcU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xcU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xcU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xdU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xdU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xdU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xdU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xeU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xeU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xeU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xeU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xfU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xfU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xfU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xfU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x10U;
    vlSelfRef.__PVT__tgtid_pm = vlSelfRef.__PVT__cm_tgtid_pm;
    if (vlSelfRef.__PVT__noncm_addr_match_pm_nonzero) {
        vlSelfRef.__PVT__tgtid_pm = vlSelfRef.__PVT__noncm_tgtid_pm;
    }
    vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f;
    if (((IData)(vlSelfRef.__PVT__reqis_to_noncm) & (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_f_nonzero))) {
        vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f;
    } else if (((IData)(vlSelfRef.__PVT__reqis_to_noncm) 
                & (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i_nonzero))) {
        vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i;
    }
    vlSelfRef.__PVT__icn_generated_tgtid = (VL_REDOR_I((IData)(vlSelfRef.__PVT__ucie_addr_match_vec))
                                             ? (IData)(vlSelfRef.__PVT__ucie_tgtid)
                                             : ((0x14U 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x3eU, 7)))
                                                 ? (IData)(vlSelfRef.__PVT__mn_node_id)
                                                 : 
                                                ((0x3aU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x3eU, 7)))
                                                  ? (IData)(vlSelfRef.__PVT__tgtid_pm)
                                                  : 
                                                 VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__tgt_cluster_id_hn), (IData)(vlSelfRef.__PVT__tgt_port_id_hn)))));
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_RX_REQFLIT_modified, vlSelfRef.__PVT__ic_RX_REQFLIT_s);
    VL_ASSIGNSEL_WI(151,22,4U, vlSelfRef.__PVT__ic_RX_REQFLIT_modified, 
                    VL_CONCAT_III(22,8,14, (IData)(vlSelfRef.__PVT__mycluster_id), 
                                  VL_CONCAT_III(14,3,11, (IData)(vlSelfRef.__PVT__myproc_id), (IData)(vlSelfRef.__PVT__icn_generated_tgtid))));
    if (vlSelfRef.__PVT__qos_override_en) {
        VL_ASSIGNSEL_WI(151,4,0U, vlSelfRef.__PVT__ic_RX_REQFLIT_modified, vlSelfRef.__PVT__qos_override_val);
    }
    VL_ASSIGN_W(151,vlSelfRef.__PVT__vc1_flit, vlSelfRef.__PVT__ic_RX_REQFLIT_modified);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__vc0_flit, vlSelfRef.__PVT__ic_RX_REQFLIT_modified);
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_RX_FLIT, vlSelfRef.__PVT__vc0_flit);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__1(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcv_buff_released_vc0 = vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__send_working_update;
    vlSelfRef.__PVT__reqcrdt_balnce_tobesent_nxt = vlSelfRef.__PVT__reqcrdt_balnce_tobesent;
    vlSelfRef.__PVT__reqcrdt_balnce_tobesent_nxt = 
        (0x1fU & (((((((((0U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))) 
                         | (2U == VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                        | (4U == VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                       | (6U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                      | (8U == VL_CONCAT_III(4,2,2, 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                     | (0xaU == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                    | (0xcU == VL_CONCAT_III(4,2,2, 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                   | (0xeU == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))))
                   ? ((0U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                       ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                       : ((2U == VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                           ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                           : ((4U == VL_CONCAT_III(4,2,2, 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                               : ((6U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                   ? ((IData)(2U) + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                   : ((8U == VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                       ? ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                       : ((0xaU == 
                                           VL_CONCAT_III(4,2,2, 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                           ? ((IData)(2U) 
                                              + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                           : ((0xcU 
                                               == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                               ? ((IData)(2U) 
                                                  + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                               : ((IData)(3U) 
                                                  + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)))))))))
                   : (((((((((1U == VL_CONCAT_III(4,2,2, 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))) 
                             | (3U == VL_CONCAT_III(4,2,2, 
                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                            | (5U == VL_CONCAT_III(4,2,2, 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                           | (7U == VL_CONCAT_III(4,2,2, 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                          | (9U == VL_CONCAT_III(4,2,2, 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                         | (0xbU == VL_CONCAT_III(4,2,2, 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                        | (0xdU == VL_CONCAT_III(4,2,2, 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                       | (0xfU == VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))))
                       ? ((1U == VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                           ? ((IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent) 
                              - (IData)(1U)) : ((3U 
                                                 == 
                                                 VL_CONCAT_III(4,2,2, 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                 ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                                                 : 
                                                ((5U 
                                                  == 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                  ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                                                  : 
                                                 ((7U 
                                                   == 
                                                   VL_CONCAT_III(4,2,2, 
                                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                                   : 
                                                  ((9U 
                                                    == 
                                                    VL_CONCAT_III(4,2,2, 
                                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                    ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                                                    : 
                                                   ((0xbU 
                                                     == 
                                                     VL_CONCAT_III(4,2,2, 
                                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                                     : 
                                                    ((0xdU 
                                                      == 
                                                      VL_CONCAT_III(4,2,2, 
                                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                                      : 
                                                     ((IData)(2U) 
                                                      + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)))))))))
                       : (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))));
    vlSelfRef.__PVT__snpcrdt_balnce_tobesent_nxt = 0U;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(161,vlSelfRef.__PVT__flit_out_vc0, vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__flit_out);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__intfrx_clk 
        = vlSelfRef.__PVT__intfrx_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__1(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_clk 
        = vlSelfRef.__PVT__ic_gclk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__3(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vc1_pend = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelfRef.__PVT__vc0_pend = vlSelfRef.__PVT__ic_RX_REQFLITPEND;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = vlSelfRef.__PVT__crdt_balance_to_deactivate_link;
    vlSelfRef.__PVT__crdt_balance_to_deactivate_link_nxt 
        = (0x1fU & ((0U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_REQFLITV), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))
                     ? (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)
                     : ((1U == VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_REQFLITV), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))
                         ? ((IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link) 
                            - (IData)(1U)) : ((2U == 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__ic_RX_REQFLITV), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link))
                                               : (IData)(vlSelfRef.__PVT__crdt_balance_to_deactivate_link)))));
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_RX_REQFLIT_s, vlSelfRef.__PVT__ic_RX_REQFLIT);
    VL_EXTEND_WW(119,108, vlSelfRef.__PVT__ic_RX_SNPFLIT_s, vlSelfRef.__PVT__ic_RX_SNPFLIT);
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_RX_FLITPEND 
        = vlSelfRef.__PVT__vc0_pend;
    vlSelfRef.__PVT__rcvd_snplink_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_SNPFLITV) 
                                          & (0U == 
                                             (0x1fU 
                                              & VL_SEL_IWII(119, vlSelfRef.__PVT__ic_RX_SNPFLIT_s, 0x32U, 5))));
    vlSelfRef.__PVT__rcvd_reqlink_crdt = ((IData)(vlSelfRef.__PVT__ic_RX_REQFLITV) 
                                          & (0U == 
                                             (0x7fU 
                                              & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x3eU, 7))));
    vlSelfRef.__PVT__reqis_to_noncm = (1U & (~ VL_BITSEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x87U)));
    vlSelfRef.__PVT__cm_reqflit_addr_sliced_hn_f[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_reqflit_addr_sliced_hn_f[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[0U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[1U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[2U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm[3U] = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[1U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[2U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm[3U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[0U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[1U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[2U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i[3U] 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x60U, 28));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[1U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[2U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[3U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[4U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[5U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[6U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[7U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[8U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[9U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xaU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xbU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xcU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xdU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xeU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xfU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x78U, 4));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc1 = (((IData)(vlSelfRef.__PVT__ic_RX_REQFLITV) 
                                            & (IData)(vlSelfRef.__PVT__reqflit_is_vc1)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt)));
    vlSelfRef.__PVT__ic_RX_FLITV_is_vc0 = (((IData)(vlSelfRef.__PVT__ic_RX_REQFLITV) 
                                            & (IData)(vlSelfRef.__PVT__reqflit_is_vc0)) 
                                           & (~ (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt)));
    vlSelfRef.__PVT__cm_reqaddr_match_hn_f = (((IData)(vlSelfRef.__PVT__cm_activated_hn_f) 
                                               & (vlSelfRef.__PVT__cm_reqflit_addr_sliced_hn_f
                                                  [0U] 
                                                  >= 
                                                  vlSelfRef.__PVT__cm_homeaddr_base_sliced_hn_f
                                                  [0U])) 
                                              & (VL_EXTEND_II(29,28, 
                                                              vlSelfRef.__PVT__cm_reqflit_addr_sliced_hn_f
                                                              [0U]) 
                                                 < 
                                                 vlSelfRef.__PVT__cm_homeaddr_limit_sliced_hn_f
                                                 [0U]));
    vlSelfRef.__PVT__noncm_reqaddr_match_hn_f = (((IData)(vlSelfRef.__PVT__noncm_activated_hn_f) 
                                                  & (vlSelfRef.__PVT__noncm_reqflit_addr_sliced_hn_f
                                                     [0U] 
                                                     >= 
                                                     vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_f
                                                     [0U])) 
                                                 & (VL_EXTEND_II(29,28, 
                                                                 vlSelfRef.__PVT__noncm_reqflit_addr_sliced_hn_f
                                                                 [0U]) 
                                                    < 
                                                    vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_f
                                                    [0U]));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 0U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [0U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [0U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [0U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 1U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [1U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [1U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [1U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 2U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [2U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [2U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [2U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_activated_pm), 3U) 
                      & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                         [3U] >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm
                         [3U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__cm_flit_addr_sliced_pm
                                                [3U]) 
                                   < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm
                                   [3U])));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 0U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [0U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [0U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [0U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 1U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [1U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [1U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [1U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 2U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [2U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [2U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [2U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 3U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                         [3U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm
                         [3U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_pm
                                                [3U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm
                                   [3U])));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 0U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [0U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [0U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [0U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 1U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [1U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [1U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [1U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 2U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [2U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [2U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [2U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__noncm_addr_match_hn_i, 
                    ((VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_activated_hn_i), 3U) 
                      & (vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                         [3U] >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_hn_i
                         [3U])) & (VL_EXTEND_II(29,28, 
                                                vlSelfRef.__PVT__noncm_flit_addr_sliced_hn_i
                                                [3U]) 
                                   < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_hn_i
                                   [3U])));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [0U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 1U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [1U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [1U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [1U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 2U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [2U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [2U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [2U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 3U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [3U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [3U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [3U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [3U])));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 4U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [4U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [4U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [4U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [4U])));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 5U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [5U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [5U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [5U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [5U])));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 6U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [6U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [6U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [6U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [6U])));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 7U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [7U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [7U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [7U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [7U])));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 8U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [8U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [8U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [8U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [8U])));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 9U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [9U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [9U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                   [9U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [9U])));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xaU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xaU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xaU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xaU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xaU])));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xbU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xbU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xbU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xbU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xbU])));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xcU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xcU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xcU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xcU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xcU])));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xdU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xdU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xdU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xdU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xdU])));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xeU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xeU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xeU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xeU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xeU])));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__ucie_addr_match_vec, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xfU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                         [0xfU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xfU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr
                                     [0xfU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xfU])));
    vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_RX_FLITV 
        = vlSelfRef.__PVT__ic_RX_FLITV_is_vc0;
    vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
        [0U];
    if (vlSelfRef.__PVT__cm_reqaddr_match_hn_f) {
        vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
            [0U];
    }
    vlSelfRef.__PVT__p = 1U;
    vlSelfRef.__PVT__noncm_addr_match_hn_f_nonzero 
        = vlSelfRef.__PVT__noncm_reqaddr_match_hn_f;
    vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f = vlSelfRef.__PVT__xy_coord_hn_f
        [0U];
    if (vlSelfRef.__PVT__noncm_reqaddr_match_hn_f) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f 
            = vlSelfRef.__PVT__xy_coord_hn_f[0U];
    }
    vlSelfRef.__PVT__q = 1U;
    vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
        [0U];
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 0U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [0U];
    }
    vlSelfRef.__PVT__s = 1U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 1U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [1U];
    }
    vlSelfRef.__PVT__s = 2U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 2U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [2U];
    }
    vlSelfRef.__PVT__s = 3U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__cm_addr_match_pm), 3U))) {
        vlSelfRef.__PVT__cm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [3U];
    }
    vlSelfRef.__PVT__s = 4U;
    vlSelfRef.__PVT__noncm_addr_match_pm_nonzero = 
        (0U != (IData)(vlSelfRef.__PVT__noncm_addr_match_pm));
    vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
        [0U];
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 0U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [0U];
    }
    vlSelfRef.__PVT__t = 1U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 1U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [1U];
    }
    vlSelfRef.__PVT__t = 2U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 2U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [2U];
    }
    vlSelfRef.__PVT__t = 3U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_pm), 3U))) {
        vlSelfRef.__PVT__noncm_tgtid_pm = vlSelfRef.__PVT__nodeid_pm
            [3U];
    }
    vlSelfRef.__PVT__t = 4U;
    vlSelfRef.__PVT__noncm_addr_match_hn_i_nonzero 
        = (0U != (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i));
    vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i = vlSelfRef.__PVT__xy_coord_hn_i
        [0U];
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 0U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[0U];
    }
    vlSelfRef.__PVT__r = 1U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 1U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[1U];
    }
    vlSelfRef.__PVT__r = 2U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 2U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[2U];
    }
    vlSelfRef.__PVT__r = 3U;
    if ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i), 3U))) {
        vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i 
            = vlSelfRef.__PVT__xy_coord_hn_i[3U];
    }
    vlSelfRef.__PVT__r = 4U;
    vlSelfRef.__PVT__ucie_tgtid = 0U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 1U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 1U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [1U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [1U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 2U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 2U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [2U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [2U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 3U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 3U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [3U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [3U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 4U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 4U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [4U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [4U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 5U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 5U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [5U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [5U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 6U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 6U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [6U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [6U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 7U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 7U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [7U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [7U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 8U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 8U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [8U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [8U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 9U;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 9U))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [9U], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [9U], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xaU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xaU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xaU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xaU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xbU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xbU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xbU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xbU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xcU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xcU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xcU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xcU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xdU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xdU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xdU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xdU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xeU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xeU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xeU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xeU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xfU;
    if ((1U & VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_addr_match_vec), 0xfU))) {
        VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xfU], 0U)));
        VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_tgtid, 
                        (1U & VL_BITSEL_IIII(2, vlSelfRef.__PVT__i_ucie_node_ids
                                             [0xfU], 1U)));
    }
    vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x10U;
    vlSelfRef.__PVT__tgtid_pm = vlSelfRef.__PVT__cm_tgtid_pm;
    if (vlSelfRef.__PVT__noncm_addr_match_pm_nonzero) {
        vlSelfRef.__PVT__tgtid_pm = vlSelfRef.__PVT__noncm_tgtid_pm;
    }
    vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__cm_tgt_cluster_id_hn_f;
    if (((IData)(vlSelfRef.__PVT__reqis_to_noncm) & (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_f_nonzero))) {
        vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_f;
    } else if (((IData)(vlSelfRef.__PVT__reqis_to_noncm) 
                & (IData)(vlSelfRef.__PVT__noncm_addr_match_hn_i_nonzero))) {
        vlSelfRef.__PVT__tgt_cluster_id_hn = vlSelfRef.__PVT__noncm_tgt_cluster_id_hn_i;
    }
    vlSelfRef.__PVT__icn_generated_tgtid = (VL_REDOR_I((IData)(vlSelfRef.__PVT__ucie_addr_match_vec))
                                             ? (IData)(vlSelfRef.__PVT__ucie_tgtid)
                                             : ((0x14U 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x3eU, 7)))
                                                 ? (IData)(vlSelfRef.__PVT__mn_node_id)
                                                 : 
                                                ((0x3aU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__ic_RX_REQFLIT_s, 0x3eU, 7)))
                                                  ? (IData)(vlSelfRef.__PVT__tgtid_pm)
                                                  : 
                                                 VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__tgt_cluster_id_hn), (IData)(vlSelfRef.__PVT__tgt_port_id_hn)))));
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_RX_REQFLIT_modified, vlSelfRef.__PVT__ic_RX_REQFLIT_s);
    VL_ASSIGNSEL_WI(151,22,4U, vlSelfRef.__PVT__ic_RX_REQFLIT_modified, 
                    VL_CONCAT_III(22,8,14, (IData)(vlSelfRef.__PVT__mycluster_id), 
                                  VL_CONCAT_III(14,3,11, (IData)(vlSelfRef.__PVT__myproc_id), (IData)(vlSelfRef.__PVT__icn_generated_tgtid))));
    if (vlSelfRef.__PVT__qos_override_en) {
        VL_ASSIGNSEL_WI(151,4,0U, vlSelfRef.__PVT__ic_RX_REQFLIT_modified, vlSelfRef.__PVT__qos_override_val);
    }
    VL_ASSIGN_W(151,vlSelfRef.__PVT__vc1_flit, vlSelfRef.__PVT__ic_RX_REQFLIT_modified);
    VL_ASSIGN_W(151,vlSelfRef.__PVT__vc0_flit, vlSelfRef.__PVT__ic_RX_REQFLIT_modified);
    VL_ASSIGN_W(151,vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__ic_RX_FLIT, vlSelfRef.__PVT__vc0_flit);
}

VL_INLINE_OPT void Vsig_topology_top_sig_node_rx_reqproc__pi62___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__4(Vsig_topology_top_sig_node_rx_reqproc__pi62* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsig_topology_top_sig_node_rx_reqproc__pi62___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_node_porttop_sn_p0__node_porttop_sn__DOT__u_node_porttop_sn__sig_node_rxtop_0__sig_node_rx_reqproc_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rcv_buff_released_vc0 = vlSelf->__PVT__sig_node_rx_reqproc_vc0->__PVT__send_working_update;
    vlSelfRef.__PVT__reqcrdt_balnce_tobesent_nxt = vlSelfRef.__PVT__reqcrdt_balnce_tobesent;
    vlSelfRef.__PVT__reqcrdt_balnce_tobesent_nxt = 
        (0x1fU & (((((((((0U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))) 
                         | (2U == VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                        | (4U == VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                       | (6U == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                      | (8U == VL_CONCAT_III(4,2,2, 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                     | (0xaU == VL_CONCAT_III(4,2,2, 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                    | (0xcU == VL_CONCAT_III(4,2,2, 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                   | (0xeU == VL_CONCAT_III(4,2,2, 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                            VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))))
                   ? ((0U == VL_CONCAT_III(4,2,2, VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                       ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                       : ((2U == VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                           ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                           : ((4U == VL_CONCAT_III(4,2,2, 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                               ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                               : ((6U == VL_CONCAT_III(4,2,2, 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                       VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                   ? ((IData)(2U) + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                   : ((8U == VL_CONCAT_III(4,2,2, 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                           VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                       ? ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                       : ((0xaU == 
                                           VL_CONCAT_III(4,2,2, 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                         VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                           ? ((IData)(2U) 
                                              + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                           : ((0xcU 
                                               == VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                               ? ((IData)(2U) 
                                                  + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                               : ((IData)(3U) 
                                                  + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)))))))))
                   : (((((((((1U == VL_CONCAT_III(4,2,2, 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))) 
                             | (3U == VL_CONCAT_III(4,2,2, 
                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                            | (5U == VL_CONCAT_III(4,2,2, 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                           | (7U == VL_CONCAT_III(4,2,2, 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                          | (9U == VL_CONCAT_III(4,2,2, 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                         | (0xbU == VL_CONCAT_III(4,2,2, 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                        | (0xdU == VL_CONCAT_III(4,2,2, 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))) 
                       | (0xfU == VL_CONCAT_III(4,2,2, 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV)))))
                       ? ((1U == VL_CONCAT_III(4,2,2, 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                           ? ((IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent) 
                              - (IData)(1U)) : ((3U 
                                                 == 
                                                 VL_CONCAT_III(4,2,2, 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                               VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                 ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                                                 : 
                                                ((5U 
                                                  == 
                                                  VL_CONCAT_III(4,2,2, 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                  ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                                                  : 
                                                 ((7U 
                                                   == 
                                                   VL_CONCAT_III(4,2,2, 
                                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                                   : 
                                                  ((9U 
                                                    == 
                                                    VL_CONCAT_III(4,2,2, 
                                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                    ? (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)
                                                    : 
                                                   ((0xbU 
                                                     == 
                                                     VL_CONCAT_III(4,2,2, 
                                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                   VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                                     : 
                                                    ((0xdU 
                                                      == 
                                                      VL_CONCAT_III(4,2,2, 
                                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcv_buff_released_vc1), (IData)(vlSelfRef.__PVT__rcv_buff_released_vc0)), 
                                                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__rcvd_reqlink_crdt), (IData)(vlSelfRef.__PVT__ic_RX_REQLCRDV))))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))
                                                      : 
                                                     ((IData)(2U) 
                                                      + (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent)))))))))
                       : (IData)(vlSelfRef.__PVT__reqcrdt_balnce_tobesent))));
    vlSelfRef.__PVT__snpcrdt_balnce_tobesent_nxt = 0U;
}
