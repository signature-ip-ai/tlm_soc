// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_chi_rcv_reqproc__pi13.h"

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__0(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__0\n"); );
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
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm = VL_CONCAT_QII(56,28,28, 
                                                            (0xfffffffU 
                                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x60U, 28)), 
                                                            (0xfffffffU 
                                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x60U, 28)));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm = VL_CONCAT_QII(56,28,28, 
                                                               (0xfffffffU 
                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x60U, 28)), 
                                                               (0xfffffffU 
                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x60U, 28)));
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
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__cm_activated_pm), 0U) 
                      & ((0xfffffffU & VL_SEL_IQII(56, vlSelfRef.__PVT__cm_flit_addr_sliced_pm, 0U, 28)) 
                         >= (0xfffffffU & VL_SEL_IQII(56, vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm, 0U, 28)))) 
                     & (VL_EXTEND_II(29,28, (0xfffffffU 
                                             & VL_SEL_IQII(56, vlSelfRef.__PVT__cm_flit_addr_sliced_pm, 0U, 28))) 
                        < (0x1fffffffU & VL_SEL_IQII(58, vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm, 0U, 29)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__cm_activated_pm), 1U) 
                      & ((0xfffffffU & VL_SEL_IQII(56, vlSelfRef.__PVT__cm_flit_addr_sliced_pm, 0x1cU, 28)) 
                         >= (0xfffffffU & VL_SEL_IQII(56, vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm, 0x1cU, 28)))) 
                     & (VL_EXTEND_II(29,28, (0xfffffffU 
                                             & VL_SEL_IQII(56, vlSelfRef.__PVT__cm_flit_addr_sliced_pm, 0x1cU, 28))) 
                        < (0x1fffffffU & VL_SEL_IQII(58, vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm, 0x1dU, 29)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 0U) 
                      & ((0xfffffffU & VL_SEL_IQII(56, vlSelfRef.__PVT__noncm_flit_addr_sliced_pm, 0U, 28)) 
                         >= (0xfffffffU & VL_SEL_IQII(56, vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm, 0U, 28)))) 
                     & (VL_EXTEND_II(29,28, (0xfffffffU 
                                             & VL_SEL_IQII(56, vlSelfRef.__PVT__noncm_flit_addr_sliced_pm, 0U, 28))) 
                        < (0x1fffffffU & VL_SEL_IQII(58, vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm, 0U, 29)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 1U) 
                      & ((0xfffffffU & VL_SEL_IQII(56, vlSelfRef.__PVT__noncm_flit_addr_sliced_pm, 0x1cU, 28)) 
                         >= (0xfffffffU & VL_SEL_IQII(56, vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm, 0x1cU, 28)))) 
                     & (VL_EXTEND_II(29,28, (0xfffffffU 
                                             & VL_SEL_IQII(56, vlSelfRef.__PVT__noncm_flit_addr_sliced_pm, 0x1cU, 28))) 
                        < (0x1fffffffU & VL_SEL_IQII(58, vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm, 0x1dU, 29)))));
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
    vlSelfRef.__PVT__cm_addr_match_pm_nonzero = (0U 
                                                 != (IData)(vlSelfRef.__PVT__cm_addr_match_pm));
    vlSelfRef.__PVT__noncm_addr_match_pm_nonzero = 
        (0U != (IData)(vlSelfRef.__PVT__noncm_addr_match_pm));
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

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__1(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ic_RX_REQLCRDV = vlSelfRef.__PVT__ic_RX_REQLCRDV;
    vlSelfRef.__Vdly__placeholder_state_c = vlSelfRef.__PVT__placeholder_state_c;
    vlSelfRef.__Vdly__ic_RX_REQLCRDV = ((IData)(vlSelfRef.__PVT__rstb_cc_clk) 
                                        && (IData)(vlSelfRef.__PVT__drive_xLCRDV_req));
    vlSelfRef.__Vdly__placeholder_state_c = ((IData)(vlSelfRef.__PVT__rstb_cc_clk) 
                                             && (IData)(vlSelfRef.__PVT__placeholder_state_n));
    vlSelfRef.__PVT__ic_RX_REQLCRDV = vlSelfRef.__Vdly__ic_RX_REQLCRDV;
    vlSelfRef.__PVT__placeholder_state_c = vlSelfRef.__Vdly__placeholder_state_c;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__1(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__noncm_homeaddr_base_pm = VL_CONCAT_QII(56,28,28, 
                                                            (0xfffffffU 
                                                             & VL_SEL_IQII(56, vlSelfRef.__PVT__noncm_homeaddr_base_all_pm, 0x1cU, 28)), 
                                                            (0xfffffffU 
                                                             & VL_SEL_IQII(56, vlSelfRef.__PVT__noncm_homeaddr_base_all_pm, 0U, 28)));
    vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm 
        = VL_CONCAT_QII(56,28,28, (0xfffffffU & VL_SEL_IQII(56, vlSelfRef.__PVT__noncm_homeaddr_base_pm, 0x1cU, 28)), 
                        (0xfffffffU & VL_SEL_IQII(56, vlSelfRef.__PVT__noncm_homeaddr_base_pm, 0U, 28)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__2(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__noncm_activated_pm = VL_CONCAT_III(2,1,1, 
                                                        (1U 
                                                         & VL_BITSEL_IQII(58, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0x39U)), 
                                                        (1U 
                                                         & VL_BITSEL_IQII(58, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0x1cU)));
    VL_ASSIGNSEL_QI(58,29,0U, vlSelfRef.__PVT__noncm_homeaddr_limit_pm, 
                    (0x1fffffffU & ((IData)(1U) + VL_EXTEND_II(29,28, 
                                                               (0xfffffffU 
                                                                & VL_SEL_IQII(58, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0U, 28))))));
    VL_ASSIGNSEL_QI(58,29,0x1dU, vlSelfRef.__PVT__noncm_homeaddr_limit_pm, 
                    (0x1fffffffU & ((IData)(1U) + VL_EXTEND_II(29,28, 
                                                               (0xfffffffU 
                                                                & VL_SEL_IQII(58, vlSelfRef.__PVT__noncm_homeaddr_limit_all_pm, 0x1dU, 28))))));
    vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm 
        = VL_CONCAT_QII(58,29,29, (0x1fffffffU & VL_SEL_IQII(58, vlSelfRef.__PVT__noncm_homeaddr_limit_pm, 0x1dU, 29)), 
                        (0x1fffffffU & VL_SEL_IQII(58, vlSelfRef.__PVT__noncm_homeaddr_limit_pm, 0U, 29)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__3(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(151,vlSelfRef.__PVT__ic_RX_REQFLIT_s, vlSelfRef.__PVT__ic_RX_REQFLIT);
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__4(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cm_homeaddr_base_pm = VL_CONCAT_QII(56,28,28, 
                                                         (0xfffffffU 
                                                          & VL_SEL_IQII(56, vlSelfRef.__PVT__cm_homeaddr_base_all_pm, 0x1cU, 28)), 
                                                         (0xfffffffU 
                                                          & VL_SEL_IQII(56, vlSelfRef.__PVT__cm_homeaddr_base_all_pm, 0U, 28)));
    vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm = VL_CONCAT_QII(56,28,28, 
                                                                (0xfffffffU 
                                                                 & VL_SEL_IQII(56, vlSelfRef.__PVT__cm_homeaddr_base_pm, 0x1cU, 28)), 
                                                                (0xfffffffU 
                                                                 & VL_SEL_IQII(56, vlSelfRef.__PVT__cm_homeaddr_base_pm, 0U, 28)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__5(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cm_activated_pm = VL_CONCAT_III(2,1,1, 
                                                     (1U 
                                                      & VL_BITSEL_IQII(58, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0x39U)), 
                                                     (1U 
                                                      & VL_BITSEL_IQII(58, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0x1cU)));
    VL_ASSIGNSEL_QI(58,29,0U, vlSelfRef.__PVT__cm_homeaddr_limit_pm, 
                    (0x1fffffffU & ((IData)(1U) + VL_EXTEND_II(29,28, 
                                                               (0xfffffffU 
                                                                & VL_SEL_IQII(58, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0U, 28))))));
    VL_ASSIGNSEL_QI(58,29,0x1dU, vlSelfRef.__PVT__cm_homeaddr_limit_pm, 
                    (0x1fffffffU & ((IData)(1U) + VL_EXTEND_II(29,28, 
                                                               (0xfffffffU 
                                                                & VL_SEL_IQII(58, vlSelfRef.__PVT__cm_homeaddr_limit_all_pm, 0x1dU, 28))))));
    vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm = 
        VL_CONCAT_QII(58,29,29, (0x1fffffffU & VL_SEL_IQII(58, vlSelfRef.__PVT__cm_homeaddr_limit_pm, 0x1dU, 29)), 
                      (0x1fffffffU & VL_SEL_IQII(58, vlSelfRef.__PVT__cm_homeaddr_limit_pm, 0U, 29)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__7(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
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
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm = VL_CONCAT_QII(56,28,28, 
                                                            (0xfffffffU 
                                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x60U, 28)), 
                                                            (0xfffffffU 
                                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x60U, 28)));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm = VL_CONCAT_QII(56,28,28, 
                                                               (0xfffffffU 
                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x60U, 28)), 
                                                               (0xfffffffU 
                                                                & VL_SEL_IWII(151, vlSelfRef.__PVT__reqcmdfifo_reqflit, 0x60U, 28)));
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
    VL_CONCAT_WIW(152,1,151, __Vtemp_1, (IData)(vlSelfRef.__PVT__reqis_wr_snpable_or_nonsnpable), vlSelfRef.__PVT__reqcmdfifo_reqflit);
    VL_CONCAT_WIW(153,1,152, vlSelfRef.__PVT__wrdata_reqcmdout, (IData)(vlSelfRef.__PVT__reqis_rd_snpable_or_nonsnpable), __Vtemp_1);
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__8(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__cm_activated_pm), 0U) 
                      & ((0xfffffffU & VL_SEL_IQII(56, vlSelfRef.__PVT__cm_flit_addr_sliced_pm, 0U, 28)) 
                         >= (0xfffffffU & VL_SEL_IQII(56, vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm, 0U, 28)))) 
                     & (VL_EXTEND_II(29,28, (0xfffffffU 
                                             & VL_SEL_IQII(56, vlSelfRef.__PVT__cm_flit_addr_sliced_pm, 0U, 28))) 
                        < (0x1fffffffU & VL_SEL_IQII(58, vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm, 0U, 29)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__cm_addr_match_pm, 
                    ((VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__cm_activated_pm), 1U) 
                      & ((0xfffffffU & VL_SEL_IQII(56, vlSelfRef.__PVT__cm_flit_addr_sliced_pm, 0x1cU, 28)) 
                         >= (0xfffffffU & VL_SEL_IQII(56, vlSelfRef.__PVT__cm_homeaddr_base_sliced_pm, 0x1cU, 28)))) 
                     & (VL_EXTEND_II(29,28, (0xfffffffU 
                                             & VL_SEL_IQII(56, vlSelfRef.__PVT__cm_flit_addr_sliced_pm, 0x1cU, 28))) 
                        < (0x1fffffffU & VL_SEL_IQII(58, vlSelfRef.__PVT__cm_homeaddr_limit_sliced_pm, 0x1dU, 29)))));
    vlSelfRef.__PVT__cm_addr_match_pm_nonzero = (0U 
                                                 != (IData)(vlSelfRef.__PVT__cm_addr_match_pm));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__9(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 0U) 
                      & ((0xfffffffU & VL_SEL_IQII(56, vlSelfRef.__PVT__noncm_flit_addr_sliced_pm, 0U, 28)) 
                         >= (0xfffffffU & VL_SEL_IQII(56, vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm, 0U, 28)))) 
                     & (VL_EXTEND_II(29,28, (0xfffffffU 
                                             & VL_SEL_IQII(56, vlSelfRef.__PVT__noncm_flit_addr_sliced_pm, 0U, 28))) 
                        < (0x1fffffffU & VL_SEL_IQII(58, vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm, 0U, 29)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__noncm_addr_match_pm, 
                    ((VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__noncm_activated_pm), 1U) 
                      & ((0xfffffffU & VL_SEL_IQII(56, vlSelfRef.__PVT__noncm_flit_addr_sliced_pm, 0x1cU, 28)) 
                         >= (0xfffffffU & VL_SEL_IQII(56, vlSelfRef.__PVT__noncm_homeaddr_base_sliced_pm, 0x1cU, 28)))) 
                     & (VL_EXTEND_II(29,28, (0xfffffffU 
                                             & VL_SEL_IQII(56, vlSelfRef.__PVT__noncm_flit_addr_sliced_pm, 0x1cU, 28))) 
                        < (0x1fffffffU & VL_SEL_IQII(58, vlSelfRef.__PVT__noncm_homeaddr_limit_sliced_pm, 0x1dU, 29)))));
    vlSelfRef.__PVT__noncm_addr_match_pm_nonzero = 
        (0U != (IData)(vlSelfRef.__PVT__noncm_addr_match_pm));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__10(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__11(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__11\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__12(Vsig_topology_top_sig_chi_rcv_reqproc__pi13* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_rcv_reqproc__pi13___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_rcv_reqproc_0__12\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    VL_CONST_W_1X(156,vlSelfRef.__PVT__wrdata_reqcmdfifo,0x00000000);
    if (vlSelfRef.__PVT__wren_reqcmdfifo) {
        VL_CONCAT_WIW(155,2,153, __Vtemp_1, (3U & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__req_is_atmo), 0U, 2)), vlSelfRef.__PVT__wrdata_reqcmdout);
        VL_CONCAT_WIW(156,1,155, vlSelfRef.__PVT__wrdata_reqcmdfifo, (IData)(vlSelfRef.__PVT__req_is_invalid_resperr), __Vtemp_1);
    }
}
