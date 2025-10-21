// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_chi_rcv_reqproc__pi12.h"

VL_ATTR_COLD void Vsig_topology_top_sig_chi_rcv_reqproc__pi12___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0(Vsig_topology_top_sig_chi_rcv_reqproc__pi12* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi12___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ucie_addr_match_vec_nonzero = 0U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_rcv_reqproc__pi12___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__3(Vsig_topology_top_sig_chi_rcv_reqproc__pi12* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi12___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__noncm_homeaddr_base_pm = vlSelfRef.__PVT__noncm_homeaddr_base_all_pm;
    vlSelfRef.__PVT__noncm_activated_pm = (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0x1cU));
    vlSelfRef.__PVT__noncm_homeaddr_limit_pm = (0x1fffffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_EXTEND_II(29,28, 
                                                                (0xfffffffU 
                                                                 & VL_SEL_IIII(29, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0U, 28)))));
    vlSelfRef.__PVT__cm_homeaddr_base_pm = vlSelfRef.__PVT__cm_homeaddr_base_all_pm;
    vlSelfRef.__PVT__cm_activated_pm = (1U & VL_BITSEL_IIII(29, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0x1cU));
    vlSelfRef.__PVT__cm_homeaddr_limit_pm = (0x1fffffffU 
                                             & ((IData)(1U) 
                                                + VL_EXTEND_II(29,28, 
                                                               (0xfffffffU 
                                                                & VL_SEL_IIII(29, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0U, 28)))));
    vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_base_pm;
    vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm 
        = vlSelfRef.__PVT__noncm_homeaddr_limit_pm;
    vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm = vlSelfRef.__PVT__cm_homeaddr_base_pm;
    vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm = vlSelfRef.__PVT__cm_homeaddr_limit_pm;
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_rcv_reqproc__pi12___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__0(Vsig_topology_top_sig_chi_rcv_reqproc__pi12* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi12___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__o_rcv_reqproc_nodeid_valid = 0U;
    vlSelfRef.__PVT__o_rcv_reqproc_full_nodeid = 0U;
    if (((IData)(vlSelfRef.__PVT__wren_reqcmdfifo) 
         & (~ (IData)(vlSelfRef.__PVT__reqis_non_snpable)))) {
        vlSelfRef.__PVT__o_rcv_reqproc_nodeid_valid = 1U;
        vlSelfRef.__PVT__o_rcv_reqproc_full_nodeid 
            = (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0xfU, 11));
    }
    vlSelfRef.__PVT__linear_nodeid_rn = vlSelfRef.__PVT__i_rcv_reqproc_linear_nodeid;
    VL_ASSIGN_W(151,vlSelfRef.__PVT__reqcmdfifo_reqflit, vlSelfRef.__PVT__reqcmd_muxed_s);
    vlSelfRef.__PVT__writeevictorevict_turns_writeevict = 0U;
    if (((0x24U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7))) 
         | (0x25U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7))))) {
        VL_ASSIGNSEL_WI(151,7,0x3eU, vlSelfRef.__PVT__reqcmdfifo_reqflit, 3U);
    } else if ((0x42U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) {
        if ((1U & (((~ (IData)(vlSelfRef.__PVT__ignore_likyshared_writeevictorevict)) 
                    & (~ VL_BITSEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x7dU))) 
                   | ((IData)(vlSelfRef.__PVT__ignore_likyshared_writeevictorevict) 
                      & (~ (IData)(vlSelfRef.__PVT__writeevict_or_evict)))))) {
            VL_ASSIGNSEL_WI(151,7,0x3eU, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x15U);
            VL_ASSIGNBIT_WI(0x93U, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0U);
            vlSelfRef.__PVT__writeevictorevict_turns_writeevict = 1U;
        } else {
            VL_ASSIGNSEL_WI(151,7,0x3eU, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0xdU);
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.__PVT__reqis_non_snpable)))) {
        VL_ASSIGNSEL_WI(151,11,0xfU, vlSelfRef.__PVT__reqcmdfifo_reqflit, vlSelfRef.__PVT__linear_nodeid_rn);
    }
    vlSelfRef.__PVT__reqis_rd_snpable = (((((((((((
                                                   (((((3U 
                                                        == 
                                                        (0x7fU 
                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7))) 
                                                       | (2U 
                                                          == 
                                                          (0x7fU 
                                                           & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                                      | (1U 
                                                         == 
                                                         (0x7fU 
                                                          & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                                     | (7U 
                                                        == 
                                                        (0x7fU 
                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                                    | (0x26U 
                                                       == 
                                                       (0x7fU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                                   | (0x24U 
                                                      == 
                                                      (0x7fU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                                  | (0x25U 
                                                     == 
                                                     (0x7fU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                                 | (0x41U 
                                                    == 
                                                    (0x7fU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                                | (0x4cU 
                                                   == 
                                                   (0x7fU 
                                                    & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                               | ((0x42U 
                                                   == 
                                                   (0x7fU 
                                                    & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7))) 
                                                  & (~ (IData)(vlSelfRef.__PVT__writeevictorevict_turns_writeevict)))) 
                                              | (0xbU 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                             | (0xcU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                            | (0xdU 
                                               == (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                           | (8U == 
                                              (0x7fU 
                                               & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                          | (9U == 
                                             (0x7fU 
                                              & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                         | (0xaU == 
                                            (0x7fU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7))));
    vlSelfRef.__PVT__reqis_wr_snpable = (((((((((0x15U 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7))) 
                                                | ((0x42U 
                                                    == 
                                                    (0x7fU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7))) 
                                                   & (IData)(vlSelfRef.__PVT__writeevictorevict_turns_writeevict))) 
                                               | (0x43U 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                              | (0x16U 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                             | (0x17U 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                            | (0x18U 
                                               == (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                           | (0x19U 
                                              == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                          | (0x1aU 
                                             == (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7)))) 
                                         | (0x1bU == 
                                            (0x7fU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmd_muxed_s, 0x3eU, 7))));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[1U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[2U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[3U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[4U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[5U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[6U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[7U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[8U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[9U] = (0xfU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xaU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xbU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xcU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xdU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xeU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr[0xfU] = 
        (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x78U, 4));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm = (0xfffffffU 
                                               & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm = (0xfffffffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x60U, 28));
    vlSelfRef.__PVT__reqis_rd_snpable_or_nonsnpable 
        = ((IData)(vlSelfRef.__PVT__reqis_rd_snpable) 
           | (IData)(vlSelfRef.__PVT__reqis_rd_nonsnpable));
    vlSelfRef.__PVT__reqis_wr_snpable_or_nonsnpable 
        = ((IData)(vlSelfRef.__PVT__reqis_wr_snpable) 
           | (IData)(vlSelfRef.__PVT__reqis_wr_nonsnpable));
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
    vlSelfRef.__PVT__cm_addr_match_pm = (((IData)(vlSelfRef.__PVT__cm_activated_pm) 
                                          & (vlSelfRef.__PVT__cm_flit_addr_sliced_pm 
                                             >= vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm)) 
                                         & (VL_EXTEND_II(29,28, vlSelfRef.__PVT__cm_flit_addr_sliced_pm) 
                                            < vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm));
    vlSelfRef.__PVT__noncm_addr_match_pm = (((IData)(vlSelfRef.__PVT__noncm_activated_pm) 
                                             & (vlSelfRef.__PVT__noncm_flit_addr_sliced_pm 
                                                >= vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm)) 
                                            & (VL_EXTEND_II(29,28, vlSelfRef.__PVT__noncm_flit_addr_sliced_pm) 
                                               < vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm));
    VL_CONCAT_WIW(152,1,151, __Vtemp_1, (IData)(vlSelfRef.__PVT__reqis_wr_snpable_or_nonsnpable), vlSelfRef.__PVT__reqcmdfifo_reqflit);
    VL_CONCAT_WIW(153,1,152, vlSelfRef.__PVT__wrdata_reqcmdout, (IData)(vlSelfRef.__PVT__reqis_rd_snpable_or_nonsnpable), __Vtemp_1);
    vlSelfRef.__PVT__wren_reqcmdfifo = 0U;
    vlSelfRef.__PVT__req_is_atmo = 0U;
    if (vlSelfRef.__PVT__placeholder_state_c) {
        if (vlSelfRef.__PVT__placeholder_state_c) {
            if (vlSelfRef.__PVT__fifofull_reqcmdq) {
                vlSelfRef.__PVT__placeholder_state_n 
                    = vlSelfRef.__PVT__placeholder_state_c;
            } else {
                vlSelfRef.__PVT__wren_reqcmdfifo = 1U;
                vlSelfRef.__PVT__placeholder_state_n = 0U;
                vlSelfRef.__PVT__req_is_atmo = 1U;
            }
        }
    } else {
        vlSelfRef.__PVT__placeholder_state_n = 0U;
        if (((((IData)(vlSelfRef.__PVT__ic_RX_REQFLITV) 
               | (~ (IData)(vlSelfRef.__PVT__empty_reqfifo))) 
              & ((((IData)(vlSelfRef.__PVT__reqis_rd_snpable_or_nonsnpable) 
                   | (IData)(vlSelfRef.__PVT__reqis_wr_snpable_or_nonsnpable)) 
                  | (IData)(vlSelfRef.__PVT__reqis_wrcmo)) 
                 | (IData)(vlSelfRef.__PVT__reqis_atomtxn))) 
             & (~ (IData)(vlSelfRef.__PVT__fifofull_reqcmdq)))) {
            vlSelfRef.__PVT__wren_reqcmdfifo = 1U;
            if (vlSelfRef.__PVT__reqis_atomtxn) {
                vlSelfRef.__PVT__placeholder_state_n = 1U;
                vlSelfRef.__PVT__req_is_atmo = 2U;
            }
        }
    }
    vlSelfRef.__PVT__cm_addr_match_pm_nonzero = vlSelfRef.__PVT__cm_addr_match_pm;
    vlSelfRef.__PVT__noncm_addr_match_pm_nonzero = vlSelfRef.__PVT__noncm_addr_match_pm;
    vlSelfRef.__PVT__addr_is_invalid_resperr = (1U 
                                                & (((~ (IData)(vlSelfRef.__PVT__noncm_addr_match_pm_nonzero)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__cm_addr_match_pm_nonzero))) 
                                                   & (~ (IData)(vlSelfRef.__PVT__ucie_addr_match_vec_nonzero))));
    vlSelfRef.__PVT__cacheable_bit_mismatch_resperr 
        = (1U & ((VL_BITSEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x87U) 
                  & (~ (IData)(vlSelfRef.__PVT__cm_addr_match_pm_nonzero))) 
                 | ((~ VL_BITSEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x87U)) 
                    & (~ (IData)(vlSelfRef.__PVT__noncm_addr_match_pm_nonzero)))));
    vlSelfRef.__PVT__req_is_invalid_resperr = ((IData)(vlSelfRef.__PVT__addr_is_invalid_resperr) 
                                               | (IData)(vlSelfRef.__PVT__cacheable_bit_mismatch_resperr));
    VL_CONST_W_1X(156,vlSelfRef.__PVT__wrdata_reqcmdfifo,0x00000000);
    if (vlSelfRef.__PVT__wren_reqcmdfifo) {
        VL_CONCAT_WIW(155,2,153, __Vtemp_2, (3U & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__req_is_atmo), 0U, 2)), vlSelfRef.__PVT__wrdata_reqcmdout);
        VL_CONCAT_WIW(156,1,155, vlSelfRef.__PVT__wrdata_reqcmdfifo, (IData)(vlSelfRef.__PVT__req_is_invalid_resperr), __Vtemp_2);
    }
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_rcv_reqproc__pi12___ctor_var_reset(Vsig_topology_top_sig_chi_rcv_reqproc__pi12* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi12___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10522366009035690765ull);
    vlSelf->__PVT__cc_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8377306375537073466ull);
    vlSelf->__PVT__rstb_cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8322896653826704470ull);
    vlSelf->__PVT__ic_RX_REQFLITPEND = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10592429441801268004ull);
    vlSelf->__PVT__ic_RX_REQFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10926843868711745075ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__ic_RX_REQFLIT, __VscopeHash, 10081777986980214128ull);
    vlSelf->__PVT__ic_RX_REQLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7784705244231261851ull);
    vlSelf->__PVT__wren_reqcmdfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14630712703538525853ull);
    VL_SCOPED_RAND_RESET_W(156, vlSelf->__PVT__wrdata_reqcmdfifo, __VscopeHash, 17656860820131075543ull);
    vlSelf->__PVT__fifofull_reqcmdq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11061467253754343562ull);
    vlSelf->__PVT__send_reqcrdt_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17634417913722192789ull);
    vlSelf->__PVT__o_rcv_reqproc_nodeid_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11807345152289135616ull);
    vlSelf->__PVT__o_rcv_reqproc_full_nodeid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 11313662607604721427ull);
    vlSelf->__PVT__i_rcv_reqproc_linear_nodeid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9872841222875453553ull);
    vlSelf->__PVT__writeevict_or_evict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9199834939110044152ull);
    vlSelf->__PVT__ignore_likyshared_writeevictorevict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15509056567874720179ull);
    vlSelf->__PVT__cm_homeaddr_base_all_pm = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 16326596507192002194ull);
    vlSelf->__PVT__cm_homeaddr_limit_all_pm = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 15039959541587252906ull);
    vlSelf->__PVT__noncm_homeaddr_base_all_pm = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 4362549229537796297ull);
    vlSelf->__PVT__noncm_homeaddr_limit_all_pm = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 17603428951671837452ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__i_ucie_base_addresses[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 18152667713515942132ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__i_ucie_limit_addresses[__Vi0] = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 3856869148840372046ull);
    }
    vlSelf->__PVT__enable_init_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13683977253010121183ull);
    vlSelf->__PVT__reqis_rd_snpable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2759993377221370877ull);
    vlSelf->__PVT__reqis_wr_snpable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16295347780483335467ull);
    vlSelf->__PVT__reqis_rd_nonsnpable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2090904166725800224ull);
    vlSelf->__PVT__reqis_wr_nonsnpable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12889610575208537090ull);
    vlSelf->__PVT__reqis_rd_snpable_or_nonsnpable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9748969549803959373ull);
    vlSelf->__PVT__reqis_wr_snpable_or_nonsnpable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5467998934673698522ull);
    vlSelf->__PVT__reqis_non_snpable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10065521981268355246ull);
    vlSelf->__PVT__req_is_atmo = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14363926070507220519ull);
    vlSelf->__PVT__reqis_atomtxn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12387875451195009153ull);
    vlSelf->__PVT__rddata_is_atom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12221696166627079204ull);
    vlSelf->__PVT__reqis_wrcmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17294100973400427715ull);
    vlSelf->__PVT__reqis_wrcmo_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7661267779966447077ull);
    vlSelf->__PVT__cm_homeaddr_base_pm = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 12692101677330705775ull);
    vlSelf->__PVT__cm_homeaddr_limit_pm = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 17735155170828469581ull);
    vlSelf->__PVT__noncm_homeaddr_base_pm = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 16999465568878583337ull);
    vlSelf->__PVT__noncm_homeaddr_limit_pm = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 8778621161790776053ull);
    vlSelf->__PVT__cm_activated_pm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7746307622250343239ull);
    vlSelf->__PVT__cm_homeaddr_base_sliced_pm = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 18148095541045974775ull);
    vlSelf->__PVT__cm_homeaddr_limit_sliced_pm = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 14997308441713714548ull);
    vlSelf->__PVT__cm_flit_addr_sliced_pm = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 5917875059357151425ull);
    vlSelf->__PVT__cm_addr_match_pm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9274994138250664942ull);
    vlSelf->__PVT__noncm_activated_pm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4947697557670439230ull);
    vlSelf->__PVT__noncm_homeaddr_base_sliced_pm = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 4614785104305072709ull);
    vlSelf->__PVT__noncm_homeaddr_limit_sliced_pm = VL_SCOPED_RAND_RESET_I(29, __VscopeHash, 4709328469465250998ull);
    vlSelf->__PVT__noncm_flit_addr_sliced_pm = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 12410074179275294719ull);
    vlSelf->__PVT__noncm_addr_match_pm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 448483759362002529ull);
    vlSelf->__PVT__ucie_sam_activated = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7038262109888111340ull);
    vlSelf->__PVT__ucie_addr_match_vec = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7327281264344236176ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__ucie_sliced_base_addresses[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14433036143133693612ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__ucie_sliced_limit_addresses[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 845801705858527489ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__ucie_flit_sliced_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7849992737603575085ull);
    }
    vlSelf->__PVT__noncm_addr_match_pm_nonzero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5284269479283128328ull);
    vlSelf->__PVT__cm_addr_match_pm_nonzero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11712113690342852747ull);
    vlSelf->__PVT__ucie_addr_match_vec_nonzero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9298023606152210251ull);
    vlSelf->__PVT__addr_is_invalid_resperr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12004285825049340497ull);
    vlSelf->__PVT__cacheable_bit_mismatch_resperr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11783787060010523647ull);
    vlSelf->__PVT__req_is_invalid_resperr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13406438832996591962ull);
    vlSelf->__PVT__reqis_wrcmo_nonsnp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11262217044124993588ull);
    vlSelf->__PVT__drive_xLCRDV_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4710834318158299951ull);
    vlSelf->__PVT__mux_control = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7312690703844727017ull);
    vlSelf->__PVT__wren_reqfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17469508037193026379ull);
    vlSelf->__PVT__rden_reqfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 357942685934570200ull);
    vlSelf->__PVT__empty_reqfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3207862386521973604ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__wrdata_reqfifo, __VscopeHash, 17283102603668863382ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__rddata_reqfifo, __VscopeHash, 1330725962759919596ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__reqcmd_muxed, __VscopeHash, 1246548498702355228ull);
    vlSelf->__PVT__writeevictorevict_turns_writeevict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10080074728257284950ull);
    vlSelf->__PVT__linear_nodeid_rn = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10358614086784324964ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__ic_RX_REQFLIT_s, __VscopeHash, 1812886886473180330ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__rddata_reqfifo_s, __VscopeHash, 366720355737138347ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__reqcmd_muxed_s, __VscopeHash, 15985573249718593744ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__reqcmdfifo_reqflit, __VscopeHash, 7158257790984494625ull);
    VL_SCOPED_RAND_RESET_W(153, vlSelf->__PVT__wrdata_reqcmdout, __VscopeHash, 3522242792515120225ull);
    vlSelf->__PVT__placeholder_state_c = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17806488593638163984ull);
    vlSelf->__PVT__placeholder_state_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12383402276579071869ull);
    vlSelf->__Vdly__placeholder_state_c = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6087646890435024214ull);
    vlSelf->__Vdly__ic_RX_REQLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4793587808855101752ull);
}
