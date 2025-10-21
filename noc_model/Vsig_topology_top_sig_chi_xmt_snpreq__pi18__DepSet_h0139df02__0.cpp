// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_chi_xmt_snpreq__pi18.h"

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi18___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__0(Vsig_topology_top_sig_chi_xmt_snpreq__pi18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi18___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_xmt_snpreq_linear_srcid = vlSelfRef.__PVT__requester_srcid;
    vlSelfRef.__PVT__srcrn_nodeid_grid = vlSelfRef.__PVT__i_xmt_snpreq_full_srcid;
    VL_ASSIGNSEL_WI(680,26,0U, vlSelfRef.__PVT__ic_TX_DATFLIT_RESPERR_s, 
                    VL_CONCAT_III(26,11,15, (0x7ffU 
                                             & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xfU, 11)), 
                                  VL_CONCAT_III(15,11,4, 
                                                ((IData)(vlSelfRef.__PVT__req_nonsnpable)
                                                  ? (IData)(vlSelfRef.__PVT__requester_srcid)
                                                  : (IData)(vlSelfRef.__PVT__srcrn_nodeid_grid)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0U, 4)))));
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT_RESPERR_nxt, vlSelfRef.__PVT__ic_TX_DATFLIT_RESPERR_s);
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi18___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__1(Vsig_topology_top_sig_chi_xmt_snpreq__pi18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi18___act_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0U)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [1U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 1U)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [2U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 2U)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [3U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 3U)));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [4U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 4U)));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [5U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 5U)));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [6U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 6U)));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [7U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 7U)));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [8U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 8U)));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [9U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 9U)));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0xaU] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0xaU)));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0xbU] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0xbU)));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0xcU] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0xcU)));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0xdU] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0xdU)));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0xeU] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0xeU)));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0xfU] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0xfU)));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0x10U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0x10U)));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0x11U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0x11U)));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0x12U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0x12U)));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0x13U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0x13U)));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0x14U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0x14U)));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0x15U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0x15U)));
    vlSelfRef.__PVT__sole_snoopee_supports_dct = VL_REDOR_I(vlSelfRef.__PVT__sole_snoopee_supports_dct_mask);
    vlSelfRef.__PVT__apply_dct = ((IData)(vlSelfRef.__PVT__sole_snoopee_supports_dct) 
                                  & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x81U));
    vlSelfRef.__PVT__snp_opcode = (0x1fU & ((IData)(vlSelfRef.__PVT__apply_dct)
                                             ? VL_CONCAT_III(5,1,4, 1U, 
                                                             (0xfU 
                                                              & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 4)))
                                             : VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 5)));
    if ((1U & (((((0xbU == (0x7fU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))) 
                  | (0x18U == (0x7fU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)))) 
                 | (IData)(vlSelfRef.__PVT__req_is_wr_uniqueptl_clean_s)) 
                | (IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_i)) 
               | VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xaeU)))) {
        vlSelfRef.__PVT__snp_opcode = 9U;
    } else if (((((0xcU == (0x7fU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))) 
                  | (0x19U == (0x7fU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)))) 
                 | (0x43U == (0x7fU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)))) 
                | (IData)(vlSelfRef.__PVT__req_is_wr_uniquefl_clean_s))) {
        vlSelfRef.__PVT__snp_opcode = 0xaU;
    } else if (((IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_s) 
                | (IData)(vlSelfRef.__PVT__req_is_wr_cleanfl_clean_s))) {
        vlSelfRef.__PVT__snp_opcode = 8U;
    } else if (vlSelfRef.__PVT__req_is_read_notsd) {
        vlSelfRef.__PVT__snp_opcode = ((IData)(vlSelfRef.__PVT__apply_dct)
                                        ? 0x14U : 4U);
    } else if (vlSelfRef.__PVT__req_is_read_pu) {
        vlSelfRef.__PVT__snp_opcode = ((IData)(vlSelfRef.__PVT__apply_dct)
                                        ? 0x16U : 0x15U);
    } else if ((((IData)(vlSelfRef.__PVT__req_is_makeread_u) 
                 & (((IData)(vlSelfRef.__PVT__cachest_s) 
                     & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa9U))) 
                    | ((IData)(vlSelfRef.__PVT__cachest_u) 
                       & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U))))) 
                & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb8U))) {
        vlSelfRef.__PVT__snp_opcode = 0x15U;
    } else if ((((IData)(vlSelfRef.__PVT__req_is_makeread_u) 
                 & ((IData)(vlSelfRef.__PVT__cachest_s) 
                    & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa9U))) 
                & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb8U))) {
        vlSelfRef.__PVT__snp_opcode = 9U;
    } else if (((2U == (7U & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb4U, 3))) 
                | (IData)(vlSelfRef.__PVT__req_is_makeread_u))) {
        vlSelfRef.__PVT__snp_opcode = 7U;
    } else if ((((IData)(vlSelfRef.__PVT__req_is_makeread_u) 
                 & (IData)(vlSelfRef.__PVT__apply_dct)) 
                & ((IData)(vlSelfRef.__PVT__cachest_u) 
                   & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U))))) {
        vlSelfRef.__PVT__snp_opcode = 0x17U;
    }
    vlSelfRef.__PVT__snp_donotgotosd_high = (((((((
                                                   ((((((((((((0xcU 
                                                               == (IData)(vlSelfRef.__PVT__snp_opcode)) 
                                                              | (0xbU 
                                                                 == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                             | (7U 
                                                                == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                            | (0x17U 
                                                               == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                           | (5U 
                                                              == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                          | (8U 
                                                             == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                         | (9U 
                                                            == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                        | (0xaU 
                                                           == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                       | (6U 
                                                          == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                     | (0x13U 
                                                        == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                    | (2U 
                                                       == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                   | (0x12U 
                                                      == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                  | (1U 
                                                     == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                 | (0x11U 
                                                    == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                | (4U 
                                                   == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                               | (0x14U 
                                                  == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                              | (0x15U 
                                                 == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                             | (0x16U 
                                                == (IData)(vlSelfRef.__PVT__snp_opcode)));
    vlSelfRef.__PVT__snp_opcode_anyfwd = ((((((0x16U 
                                               == (IData)(vlSelfRef.__PVT__snp_opcode)) 
                                              | (0x11U 
                                                 == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                             | (0x12U 
                                                == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                            | (0x13U 
                                               == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                           | (0x14U 
                                              == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                          | (0x17U 
                                             == (IData)(vlSelfRef.__PVT__snp_opcode)));
    VL_ASSIGNSEL_WI(119,4,0x68U, vlSelfRef.__PVT__ic_TX_FLIT_SNPREQ_s, 
                    VL_CONCAT_III(4,3,1, VL_EXTEND_II(3,1, 
                                                      ((IData)(vlSelfRef.__PVT__snp_donotgotosd_high) 
                                                       | (IData)(vlSelfRef.__PVT__donotgotosd_wire))), 
                                  (1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xbaU))));
    VL_ASSIGNSEL_WI(119,17,0x26U, vlSelfRef.__PVT__ic_TX_FLIT_SNPREQ_s, 
                    VL_CONCAT_III(17,5,12, (IData)(vlSelfRef.__PVT__snp_opcode), 
                                  (0xfffU & ((IData)(vlSelfRef.__PVT__snp_opcode_anyfwd)
                                              ? VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x32U, 12)
                                              : 0U))));
    VL_ASSIGNSEL_WQ(119,49,0x37U, vlSelfRef.__PVT__ic_TX_FLIT_SNPREQ_s, 
                    (0x1ffffffffffffULL & VL_SEL_QWII(191, vlSelfRef.__PVT__snpreqcmd, 0x4bU, 49)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi18___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__0(Vsig_topology_top_sig_chi_xmt_snpreq__pi18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi18___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_WQ(119,34,4U, vlSelfRef.__PVT__ic_TX_FLIT_SNPREQ_s, 
                    VL_CONCAT_QII(34,11,23, ((IData)(vlSelfRef.__PVT__snp_opcode_anyfwd)
                                              ? (IData)(vlSelfRef.__PVT__srcrn_nodeid_grid)
                                              : 0U), 
                                  VL_CONCAT_III(23,12,11, (IData)(vlSelfRef.__PVT__snp_txnid_masked), 
                                                VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 4U))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi18___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__2(Vsig_topology_top_sig_chi_xmt_snpreq__pi18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi18___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__compbuf_available = ((IData)(vlSelfRef.__PVT__compbuf_available_compbuftop) 
                                          & (~ (IData)(vlSelfRef.__PVT__block_compbuf_available)));
    vlSelfRef.__PVT__l3_or_link_rdreq_crdtavail = (1U 
                                                   & ((((IData)(vlSelfRef.__PVT__req_is_read_nosnp) 
                                                        & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq))) 
                                                      | (((~ (IData)(vlSelfRef.__PVT__req_is_read_nosnp)) 
                                                          & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full))) 
                                                         & (~ (IData)(vlSelfRef.__PVT__compdata_sending_ccreq)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi18___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__4(Vsig_topology_top_sig_chi_xmt_snpreq__pi18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi18___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    if ((((IData)(vlSelfRef.__PVT__req_is_wr_zero) 
          | (IData)(vlSelfRef.__PVT__reqis_make_i)) 
         | (IData)(vlSelfRef.__PVT__reqis_clean_si))) {
        vlSelfRef.__PVT__returnnid = 0U;
    } else if ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x82U))) {
        vlSelfRef.__PVT__returnnid = (((IData)(vlSelfRef.__PVT__slc_readnosnp_apply_dmt_snpreq_out) 
                                       & (IData)(vlSelfRef.__PVT__req_is_read_snp))
                                       ? (IData)(vlSelfRef.__PVT__srcrn_nodeid_grid)
                                       : (IData)(vlSelfRef.__PVT__requester_srcid));
    } else {
        vlSelfRef.__PVT__returnnid = VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 4U);
    }
    VL_EXTEND_WW(152,119, vlSelfRef.__PVT__ic_TX_FLIT_SNPREQ, vlSelfRef.__PVT__ic_TX_FLIT_SNPREQ_s);
    VL_ASSIGNSEL_WI(151,31,0x26U, vlSelfRef.__PVT__ic_TX_FLIT_MEMREQ_s, 
                    VL_CONCAT_III(31,7,24, (IData)(vlSelfRef.__PVT__memreq_opcode), 
                                  VL_CONCAT_III(24,12,12, (IData)(vlSelfRef.__PVT__returntxnid), 
                                                VL_EXTEND_II(12,11, (IData)(vlSelfRef.__PVT__returnnid)))));
    VL_CONCAT_WIW(152,1,151, vlSelfRef.__PVT__ic_TX_FLIT_MEMREQ, 1U, vlSelfRef.__PVT__ic_TX_FLIT_MEMREQ_s);
    __Vtemp_1 = (((IData)(vlSelfRef.__PVT__flittype_rdnosnp) 
                  | (IData)(vlSelfRef.__PVT__flittype_wrnosnp)) 
                 | (IData)(vlSelfRef.__PVT__flittype_cmo));
    VL_COND_WIWW(152, vlSelfRef.__PVT__ic_TX_FLIT_SNPREQ_OR_MEMREQ, __Vtemp_1, vlSelfRef.__PVT__ic_TX_FLIT_MEMREQ, vlSelfRef.__PVT__ic_TX_FLIT_SNPREQ);
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__0(Vsig_topology_top_sig_chi_xmt_snpreq__pi18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__respbuff_hasroom = (0xfU < (IData)(vlSelfRef.__PVT__respbuff_avail));
}

extern const VlWide<22>/*703:0*/ Vsig_topology_top__ConstPool__CONST_he95d9d6c_0;

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__1(Vsig_topology_top_sig_chi_xmt_snpreq__pi18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__avoid_clr_colln = vlSelfRef.__PVT__avoid_clr_colln;
    vlSelfRef.__Vdly__index_pendingq_clr_outstand_cmd 
        = vlSelfRef.__PVT__index_pendingq_clr_outstand_cmd;
    vlSelfRef.__Vdly__clr_outstand_cmd = vlSelfRef.__PVT__clr_outstand_cmd;
    VL_ASSIGN_W(680,vlSelfRef.__Vdly__ic_TX_DATFLIT_RESPERR, vlSelfRef.__PVT__ic_TX_DATFLIT_RESPERR);
    vlSelfRef.__Vdly__req_alreadysent_toDirtyNode = vlSelfRef.__PVT__req_alreadysent_toDirtyNode;
    vlSelfRef.__Vdly__goto_EVAL_FURTHER_afterMemWR 
        = vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR;
    vlSelfRef.__Vdly__send_memwr_to_l3 = vlSelfRef.__PVT__send_memwr_to_l3;
    vlSelfRef.__Vdly__cmo_respbuf_allocated = vlSelfRef.__PVT__cmo_respbuf_allocated;
    vlSelfRef.__Vdly__proc_state = vlSelfRef.__PVT__proc_state;
    vlSelfRef.__Vdly__share_vect_word = vlSelfRef.__PVT__share_vect_word;
    vlSelfRef.__Vdly__xmt_datflit_resperr = vlSelfRef.__PVT__xmt_datflit_resperr;
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__clr_outstand_cmd = vlSelfRef.__PVT__clr_outstand_cmd_pre;
        vlSelfRef.__Vdly__index_pendingq_clr_outstand_cmd 
            = (0x3fU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x1aU, 6));
        vlSelfRef.__Vdly__avoid_clr_colln = vlSelfRef.__PVT__avoid_clr_colln_nxt;
    } else {
        vlSelfRef.__Vdly__clr_outstand_cmd = 0U;
        vlSelfRef.__Vdly__index_pendingq_clr_outstand_cmd = 0U;
        vlSelfRef.__Vdly__avoid_clr_colln = 0U;
    }
    if (vlSelfRef.__PVT__rstb_cc_clk) {
        vlSelfRef.__Vdly__share_vect_word = vlSelfRef.__PVT__share_vect_word_nxt;
        vlSelfRef.__Vdly__proc_state = vlSelfRef.__PVT__proc_state_nxt;
        vlSelfRef.__Vdly__xmt_datflit_resperr = vlSelfRef.__PVT__xmt_datflit_resperr_nxt;
        vlSelfRef.__Vdly__req_alreadysent_toDirtyNode 
            = vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt;
        vlSelfRef.__Vdly__goto_EVAL_FURTHER_afterMemWR 
            = vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR_nxt;
        vlSelfRef.__Vdly__send_memwr_to_l3 = vlSelfRef.__PVT__send_memwr_to_l3_nxt;
        vlSelfRef.__Vdly__cmo_respbuf_allocated = vlSelfRef.__PVT__cmo_respbuf_allocated_nxt;
        VL_ASSIGN_W(680,vlSelfRef.__Vdly__ic_TX_DATFLIT_RESPERR, vlSelfRef.__PVT__ic_TX_DATFLIT_RESPERR_nxt);
    } else {
        vlSelfRef.__Vdly__share_vect_word = 0U;
        vlSelfRef.__Vdly__proc_state = 1U;
        vlSelfRef.__Vdly__req_alreadysent_toDirtyNode = 0U;
        vlSelfRef.__Vdly__xmt_datflit_resperr = 0U;
        vlSelfRef.__Vdly__goto_EVAL_FURTHER_afterMemWR = 0U;
        vlSelfRef.__Vdly__send_memwr_to_l3 = 0U;
        vlSelfRef.__Vdly__cmo_respbuf_allocated = 0U;
        VL_ASSIGN_W(680,vlSelfRef.__Vdly__ic_TX_DATFLIT_RESPERR, Vsig_topology_top__ConstPool__CONST_he95d9d6c_0);
    }
    vlSelfRef.__PVT__avoid_clr_colln = vlSelfRef.__Vdly__avoid_clr_colln;
    vlSelfRef.__PVT__index_pendingq_clr_outstand_cmd 
        = vlSelfRef.__Vdly__index_pendingq_clr_outstand_cmd;
    vlSelfRef.__PVT__clr_outstand_cmd = vlSelfRef.__Vdly__clr_outstand_cmd;
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT_RESPERR, vlSelfRef.__Vdly__ic_TX_DATFLIT_RESPERR);
    vlSelfRef.__PVT__req_alreadysent_toDirtyNode = vlSelfRef.__Vdly__req_alreadysent_toDirtyNode;
    vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR = vlSelfRef.__Vdly__goto_EVAL_FURTHER_afterMemWR;
    vlSelfRef.__PVT__send_memwr_to_l3 = vlSelfRef.__Vdly__send_memwr_to_l3;
    vlSelfRef.__PVT__cmo_respbuf_allocated = vlSelfRef.__Vdly__cmo_respbuf_allocated;
    vlSelfRef.__PVT__proc_state = vlSelfRef.__Vdly__proc_state;
    vlSelfRef.__PVT__share_vect_word = vlSelfRef.__Vdly__share_vect_word;
    vlSelfRef.__PVT__xmt_datflit_resperr = vlSelfRef.__Vdly__xmt_datflit_resperr;
    vlSelfRef.__PVT__anyp_valid = (0U != vlSelfRef.__PVT__share_vect_word);
    vlSelfRef.__PVT__ic_TX_DATFLITV_RESPERR = vlSelfRef.__PVT__xmt_datflit_resperr;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__3(Vsig_topology_top_sig_chi_xmt_snpreq__pi18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reqis_clean_usi = (((0xbU == (0x7fU 
                                                   & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))) 
                                         | (8U == (0x7fU 
                                                   & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)))) 
                                        | (9U == (0x7fU 
                                                  & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))));
    vlSelfRef.__PVT__reqis_clean_us = ((0xbU == (0x7fU 
                                                 & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))) 
                                       | (8U == (0x7fU 
                                                 & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))));
    vlSelfRef.__PVT__reqis_clean_ui = ((0xbU == (0x7fU 
                                                 & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))) 
                                       | (9U == (0x7fU 
                                                 & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))));
    vlSelfRef.__PVT__req_is_wr_evict_fl = (0x15U == 
                                           (0x7fU & 
                                            VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__timeout_cback_wrdata = (((((0x1aU 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))) 
                                                | (0x1bU 
                                                   == 
                                                   (0x7fU 
                                                    & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)))) 
                                               | (0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)))) 
                                              | (0x15U 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)))) 
                                             | (0x42U 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))));
    VL_ASSIGNSEL_WI(680,27,0x1aU, vlSelfRef.__PVT__ic_TX_DATFLIT_RESPERR_s, 
                    VL_CONCAT_III(27,4,23, 4U, VL_CONCAT_III(23,11,12, (IData)(vlSelfRef.__PVT__datf_homenid_attr_compdata), 
                                                             (0xfffU 
                                                              & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x32U, 12)))));
    VL_ASSIGNSEL_WI(119,4,0U, vlSelfRef.__PVT__ic_TX_FLIT_SNPREQ_s, 
                    (0xfU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0U, 4)));
    VL_ASSIGNSEL_WI(151,8,0x81U, vlSelfRef.__PVT__ic_TX_FLIT_MEMREQ_s, 
                    VL_CONCAT_III(8,4,4, (0xfU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xbbU, 4)), 0U));
    VL_ASSIGNSEL_WI(151,3,0x7cU, vlSelfRef.__PVT__ic_TX_FLIT_MEMREQ_s, 
                    VL_CONCAT_III(3,2,1, 2U, (1U & 
                                              VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xbaU))));
    VL_ASSIGNSEL_WQ(151,52,0x48U, vlSelfRef.__PVT__ic_TX_FLIT_MEMREQ_s, 
                    (0xfffffffffffffULL & ((3U == (7U 
                                                   & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb4U, 3)))
                                            ? VL_CONCAT_QQI(52,46,6, 
                                                            (0x3fffffffffffULL 
                                                             & VL_SEL_QWII(191, vlSelfRef.__PVT__snpreqcmd, 0x4eU, 46)), 0U)
                                            : VL_SEL_QWII(191, vlSelfRef.__PVT__snpreqcmd, 0x48U, 52))));
    VL_ASSIGNSEL_WI(151,3,0x45U, vlSelfRef.__PVT__ic_TX_FLIT_MEMREQ_s, 
                    (7U & (((0x1cU == (0x7fU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))) 
                            | (4U == (0x7fU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))))
                            ? VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x45U, 3)
                            : 6U)));
    VL_ASSIGNSEL_WI(151,4,0U, vlSelfRef.__PVT__ic_TX_FLIT_MEMREQ_s, 
                    (0xfU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0U, 4)));
    vlSelfRef.__PVT__req_is_nonsnp_excl = (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb8U) 
                                           & (((4U 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))) 
                                               | (0x1dU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)))) 
                                              | (0x1cU 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)))));
    vlSelfRef.__PVT__cc_dbid_index = VL_EXTEND_II(12,6, 
                                                  (0x3fU 
                                                   & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x1aU, 6)));
    vlSelfRef.__PVT__outq_index_o = (0x3fU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x1aU, 6));
    vlSelfRef.__PVT__atom_rd_addr_inv_dealloc = ((3U 
                                                  == 
                                                  (7U 
                                                   & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb4U, 3))) 
                                                 & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x85U));
    vlSelfRef.__PVT__invalidate_all_requester = (1U 
                                                 & ((2U 
                                                     == 
                                                     (7U 
                                                      & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb4U, 3))) 
                                                    | VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xaeU)));
    vlSelfRef.__PVT__reqis_clean_i = (9U == (0x7fU 
                                             & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__reqis_make_u = (0xcU == (0x7fU 
                                              & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__cachest_s = (1U & (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa7U) 
                                        & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa5U)));
    vlSelfRef.__PVT__requester_srcid = (0x7ffU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x26U, 11));
    vlSelfRef.__PVT__req_is_wr_unique_full = (0x19U 
                                              == (0x7fU 
                                                  & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__reqis_clean_s = (8U == (0x7fU 
                                             & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__cachest_vld = (1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa5U));
    vlSelfRef.__PVT__cachest_inv = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa5U)));
    vlSelfRef.__PVT__req_is_wr_nosnpfull = (0x1dU == 
                                            (0x7fU 
                                             & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wr_nosnpptl = (0x1cU == 
                                           (0x7fU & 
                                            VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__reqis_make_i = (0xaU == (0x7fU 
                                              & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wr_nosnpfl_clean_i = (0x51U 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wr_backfl_clean_i = (0x59U 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wr_unique_ptl = (0x18U 
                                             == (0x7fU 
                                                 & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__reqis_clean_u = (0xbU == (0x7fU 
                                               & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__reqis_clean_si = ((8U == (0x7fU 
                                               & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))) 
                                       | (9U == (0x7fU 
                                                 & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))));
    vlSelfRef.__PVT__req_is_wr_nosnp_zero = (0x44U 
                                             == (0x7fU 
                                                 & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wr_nosnpfl_clean_s = (0x50U 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wr_nosnpptl_clean_i = (0x61U 
                                                   == 
                                                   (0x7fU 
                                                    & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wr_nosnpptl_clean_s = (0x60U 
                                                   == 
                                                   (0x7fU 
                                                    & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wr_backfl_clean_s = (0x58U 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wr_cleanfl_clean_s = (0x5cU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wr_uniquefl_clean_s = (0x54U 
                                                   == 
                                                   (0x7fU 
                                                    & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__cachest_uc = (1U == (7U & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa5U, 3)));
    vlSelfRef.__PVT__cachest_ud = (3U == (7U & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa5U, 3)));
    vlSelfRef.__PVT__req_is_read_s = (1U == (0x7fU 
                                             & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_read_nosnp = (4U == (0x7fU 
                                                 & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wr_unique_zero = (0x43U 
                                              == (0x7fU 
                                                  & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wr_uniqueptl_clean_s = 
        (0x64U == (0x7fU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_read_u = (7U == (0x7fU 
                                             & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_read_c = (2U == (0x7fU 
                                             & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_makeread_u = (0x41U == 
                                          (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_read_pu = (0x4cU == (0x7fU 
                                                 & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_read_notsd = (0x26U == 
                                          (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_read_once = (3U == (0x7fU 
                                                & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)));
    vlSelfRef.__PVT__cachest_sc = (5U == (7U & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa5U, 3)));
    vlSelfRef.__PVT__cachest_u = (1U & ((~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa7U)) 
                                        & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa5U)));
    vlSelfRef.__PVT__cachest_sd = (7U == (7U & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa5U, 3)));
    VL_ASSIGNSEL_WI(151,10,0x89U, vlSelfRef.__PVT__ic_TX_FLIT_MEMREQ_s, 
                    VL_CONCAT_III(10,1,9, (IData)(vlSelfRef.__PVT__req_is_nonsnp_excl), 
                                  VL_EXTEND_II(9,1, 
                                               (1U 
                                                & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb3U)))));
    vlSelfRef.__PVT__dbid_field_masked = vlSelfRef.__PVT__cc_dbid_index;
    vlSelfRef.__PVT__snp_txnid_masked = vlSelfRef.__PVT__cc_dbid_index;
    VL_ASSIGNSEL_WI(151,22,4U, vlSelfRef.__PVT__ic_TX_FLIT_MEMREQ_s, 
                    VL_CONCAT_III(22,8,14, (IData)(vlSelfRef.__PVT__mycluster_id), 
                                  VL_CONCAT_III(14,3,11, 4U, 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 4U, 11)))));
    VL_ASSIGNSEL_WI(151,12,0x1aU, vlSelfRef.__PVT__ic_TX_FLIT_MEMREQ_s, vlSelfRef.__PVT__cc_dbid_index);
    VL_ASSIGNSEL_WI(73,26,0U, vlSelfRef.__PVT__respbody_snpreq_s, 
                    VL_CONCAT_III(26,11,15, VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 4U), 
                                  VL_CONCAT_III(15,11,4, (IData)(vlSelfRef.__PVT__requester_srcid), 
                                                (0xfU 
                                                 & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0U, 4)))));
    vlSelfRef.__PVT__req_srcid_snp = (0xffU & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__requester_srcid), 0U, 8));
    vlSelfRef.__PVT__req_is_wr_nosnp = (((IData)(vlSelfRef.__PVT__req_is_wr_nosnpfull) 
                                         | (IData)(vlSelfRef.__PVT__req_is_wr_nosnpptl)) 
                                        | (0x44U == 
                                           (0x7fU & 
                                            VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))));
    vlSelfRef.__PVT__writefull_clean_i = ((IData)(vlSelfRef.__PVT__req_is_wr_nosnpfl_clean_i) 
                                          | (IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_i));
    vlSelfRef.__PVT__writenosnpptl_cmo = ((IData)(vlSelfRef.__PVT__req_is_wr_nosnpptl_clean_i) 
                                          | (IData)(vlSelfRef.__PVT__req_is_wr_nosnpptl_clean_s));
    vlSelfRef.__PVT__writenosnp_cmo = ((((IData)(vlSelfRef.__PVT__req_is_wr_nosnpfl_clean_i) 
                                         | (IData)(vlSelfRef.__PVT__req_is_wr_nosnpfl_clean_s)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_wr_nosnpptl_clean_i)) 
                                       | (IData)(vlSelfRef.__PVT__req_is_wr_nosnpptl_clean_s));
    vlSelfRef.__PVT__writefull_clean_s = ((((IData)(vlSelfRef.__PVT__req_is_wr_nosnpfl_clean_s) 
                                            | (IData)(vlSelfRef.__PVT__req_is_wr_uniquefl_clean_s)) 
                                           | (IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_s)) 
                                          | (IData)(vlSelfRef.__PVT__req_is_wr_cleanfl_clean_s));
    vlSelfRef.__PVT__req_is_wr_unique = (((IData)(vlSelfRef.__PVT__req_is_wr_unique_full) 
                                          | (IData)(vlSelfRef.__PVT__req_is_wr_unique_ptl)) 
                                         | (IData)(vlSelfRef.__PVT__req_is_wr_unique_zero));
    vlSelfRef.__PVT__req_is_wr_zero = ((IData)(vlSelfRef.__PVT__req_is_wr_unique_zero) 
                                       | (IData)(vlSelfRef.__PVT__req_is_wr_nosnp_zero));
    vlSelfRef.__PVT__writeuniq_cmo = ((IData)(vlSelfRef.__PVT__req_is_wr_uniquefl_clean_s) 
                                      | (IData)(vlSelfRef.__PVT__req_is_wr_uniqueptl_clean_s));
    vlSelfRef.__PVT__writeptl_cmo = (((IData)(vlSelfRef.__PVT__req_is_wr_nosnpptl_clean_i) 
                                      | (IData)(vlSelfRef.__PVT__req_is_wr_nosnpptl_clean_s)) 
                                     | (IData)(vlSelfRef.__PVT__req_is_wr_uniqueptl_clean_s));
    vlSelfRef.__PVT__req_is_read_s_notsd = ((IData)(vlSelfRef.__PVT__req_is_read_s) 
                                            | (IData)(vlSelfRef.__PVT__req_is_read_notsd));
    vlSelfRef.__PVT__compdata_resp_field = (((IData)(vlSelfRef.__PVT__req_is_read_nosnp) 
                                             | (IData)(vlSelfRef.__PVT__req_is_read_once))
                                             ? 0U : 
                                            (((((IData)(vlSelfRef.__PVT__req_is_read_c) 
                                                | (IData)(vlSelfRef.__PVT__req_is_read_u)) 
                                               | (IData)(vlSelfRef.__PVT__req_is_read_s)) 
                                              | (IData)(vlSelfRef.__PVT__req_is_read_notsd))
                                              ? 2U : 
                                             ((IData)(vlSelfRef.__PVT__req_is_read_pu)
                                               ? 2U
                                               : ((IData)(vlSelfRef.__PVT__req_is_makeread_u)
                                                   ? 2U
                                                   : 0U))));
    VL_ASSIGNSEL_WI(151,2,0x7fU, vlSelfRef.__PVT__ic_TX_FLIT_MEMREQ_s, 
                    ((((VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x82U) 
                        & ((IData)(vlSelfRef.__PVT__req_is_read_nosnp) 
                           | (IData)(vlSelfRef.__PVT__req_is_read_once))) 
                       & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))) 
                      & (0U == (3U & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xabU, 2))))
                      ? 1U : 0U));
    vlSelfRef.__PVT__read_once_nosnp_needs_rcrcpt = 
        (((IData)(vlSelfRef.__PVT__req_is_read_nosnp) 
          | (IData)(vlSelfRef.__PVT__req_is_read_once)) 
         & ((2U == (3U & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xabU, 2))) 
            | (3U == (3U & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xabU, 2)))));
    vlSelfRef.__PVT__req_is_read_oc = ((IData)(vlSelfRef.__PVT__req_is_read_once) 
                                       | (IData)(vlSelfRef.__PVT__req_is_read_c));
    vlSelfRef.__PVT__req_is_read_ocs_notsd = ((((IData)(vlSelfRef.__PVT__req_is_read_once) 
                                                | (IData)(vlSelfRef.__PVT__req_is_read_c)) 
                                               | (IData)(vlSelfRef.__PVT__req_is_read_s)) 
                                              | (IData)(vlSelfRef.__PVT__req_is_read_notsd));
    vlSelfRef.__PVT__dataless_no_dxfr_tomm = (((((IData)(vlSelfRef.__PVT__cachest_u) 
                                                 & (IData)(vlSelfRef.__PVT__reqis_make_u)) 
                                                & (~ 
                                                   VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U))) 
                                               | ((IData)(vlSelfRef.__PVT__cachest_s) 
                                                  & (IData)(vlSelfRef.__PVT__reqis_make_u))) 
                                              | ((IData)(vlSelfRef.__PVT__cachest_sc) 
                                                 & (IData)(vlSelfRef.__PVT__reqis_clean_u)));
    vlSelfRef.__PVT__cmo_need_snooping_without_data 
        = (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7eU) 
           & ((((IData)(vlSelfRef.__PVT__cachest_vld) 
                & (IData)(vlSelfRef.__PVT__reqis_make_i)) 
               & (~ ((IData)(vlSelfRef.__PVT__cachest_u) 
                     & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U)))) 
              | ((IData)(vlSelfRef.__PVT__cachest_sc) 
                 & (IData)(vlSelfRef.__PVT__reqis_clean_i))));
    vlSelfRef.__PVT__cmo_no_need_snooping = ((((IData)(vlSelfRef.__PVT__reqis_make_i) 
                                               | (IData)(vlSelfRef.__PVT__reqis_clean_si)) 
                                              & ((VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7eU) 
                                                  & ((((IData)(vlSelfRef.__PVT__cachest_vld) 
                                                       & (IData)(vlSelfRef.__PVT__cachest_u)) 
                                                      & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U)) 
                                                     | (IData)(vlSelfRef.__PVT__cachest_inv))) 
                                                 | (~ 
                                                    VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7eU)))) 
                                             | (((IData)(vlSelfRef.__PVT__reqis_clean_s) 
                                                 & (IData)(vlSelfRef.__PVT__cachest_sc)) 
                                                & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7eU)));
    vlSelfRef.__PVT__readto_invalidate = ((((IData)(vlSelfRef.__PVT__cachest_sc) 
                                            & (IData)(vlSelfRef.__PVT__req_is_makeread_u)) 
                                           & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa9U)) 
                                          | (((IData)(vlSelfRef.__PVT__cachest_sd) 
                                              & (IData)(vlSelfRef.__PVT__req_is_makeread_u)) 
                                             & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U)));
    vlSelfRef.__PVT__dataless_need_or_mayneed_dxfr_tomm 
        = (((IData)(vlSelfRef.__PVT__cachest_u) & ((IData)(vlSelfRef.__PVT__reqis_clean_u) 
                                                   & (~ 
                                                      VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U)))) 
           | ((IData)(vlSelfRef.__PVT__cachest_sd) 
              & (IData)(vlSelfRef.__PVT__reqis_clean_u)));
    vlSelfRef.__PVT__cmo_need_snooping_with_data = 
        (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7eU) 
         & ((((IData)(vlSelfRef.__PVT__cachest_u) & (IData)(vlSelfRef.__PVT__reqis_clean_si)) 
             & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U))) 
            | ((IData)(vlSelfRef.__PVT__cachest_sd) 
               & (IData)(vlSelfRef.__PVT__reqis_clean_si))));
    vlSelfRef.__PVT__cacheable_partial_write = ((((0x1cU 
                                                   == 
                                                   (0x7fU 
                                                    & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))) 
                                                  & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU)) 
                                                 | ((IData)(vlSelfRef.__PVT__req_is_wr_unique_ptl) 
                                                    & (~ 
                                                       (((IData)(vlSelfRef.__PVT__cachest_sd) 
                                                         | (IData)(vlSelfRef.__PVT__cachest_u)) 
                                                        & (~ 
                                                           VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U)))))) 
                                                | (0x1aU 
                                                   == 
                                                   (0x7fU 
                                                    & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))));
    vlSelfRef.__PVT__readto_both_memic = ((((IData)(vlSelfRef.__PVT__cachest_sc) 
                                            & ((IData)(vlSelfRef.__PVT__req_is_read_u) 
                                               | (IData)(vlSelfRef.__PVT__req_is_read_pu))) 
                                           | (((IData)(vlSelfRef.__PVT__cachest_sd) 
                                               & ((IData)(vlSelfRef.__PVT__req_is_read_u) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_read_pu))) 
                                              & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U))) 
                                          | (((IData)(vlSelfRef.__PVT__cachest_sc) 
                                              & (IData)(vlSelfRef.__PVT__req_is_makeread_u)) 
                                             & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa9U))));
    VL_ASSIGNSEL_WI(680,19,0x3eU, vlSelfRef.__PVT__ic_TX_DATFLIT_RESPERR_s, 
                    VL_EXTEND_II(19,17, VL_CONCAT_III(17,2,15, 
                                                      (3U 
                                                       & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x83U, 2)), 
                                                      VL_CONCAT_III(15,12,3, (IData)(vlSelfRef.__PVT__dbid_field_masked), 0U))));
    VL_ASSIGNSEL_WI(73,19,0x36U, vlSelfRef.__PVT__respbody_snpreq_s, 
                    VL_EXTEND_II(19,12, (IData)(vlSelfRef.__PVT__dbid_field_masked)));
    vlSelfRef.__PVT__req_nonsnpable = (((IData)(vlSelfRef.__PVT__req_is_wr_nosnp) 
                                        | (IData)(vlSelfRef.__PVT__req_is_read_nosnp)) 
                                       | (IData)(vlSelfRef.__PVT__writenosnp_cmo));
    vlSelfRef.__PVT__returntxnid = (0xfffU & ((((IData)(vlSelfRef.__PVT__req_is_wr_zero) 
                                                | (IData)(vlSelfRef.__PVT__reqis_make_i)) 
                                               | (IData)(vlSelfRef.__PVT__reqis_clean_si))
                                               ? 0U
                                               : ((1U 
                                                   & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x82U))
                                                   ? 
                                                  VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x32U, 12)
                                                   : (IData)(vlSelfRef.__PVT__cc_dbid_index))));
    vlSelfRef.__PVT__req_is_nonzero_wr = (1U & (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xaaU) 
                                                & (~ (IData)(vlSelfRef.__PVT__req_is_wr_zero))));
    vlSelfRef.__PVT__write_cmo = (((IData)(vlSelfRef.__PVT__writefull_clean_i) 
                                   | (IData)(vlSelfRef.__PVT__writefull_clean_s)) 
                                  | (IData)(vlSelfRef.__PVT__writeptl_cmo));
    VL_ASSIGNSEL_WI(680,9,0x35U, vlSelfRef.__PVT__ic_TX_DATFLIT_RESPERR_s, 
                    VL_EXTEND_II(9,5, VL_CONCAT_III(5,3,2, (IData)(vlSelfRef.__PVT__compdata_resp_field), 
                                                    (3U 
                                                     & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x86U, 2)))));
    vlSelfRef.__PVT__req_read_oc_notsd_in_ucudsd = 
        ((((IData)(vlSelfRef.__PVT__req_is_read_oc) 
           | (IData)(vlSelfRef.__PVT__req_is_read_notsd)) 
          & (((IData)(vlSelfRef.__PVT__cachest_ud) 
              | (IData)(vlSelfRef.__PVT__cachest_sd)) 
             | (IData)(vlSelfRef.__PVT__cachest_uc))) 
         & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U)));
    vlSelfRef.__PVT__req_is_read_snp = (((IData)(vlSelfRef.__PVT__req_is_read_ocs_notsd) 
                                         | (IData)(vlSelfRef.__PVT__req_is_read_u)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_read_pu));
    vlSelfRef.__PVT__req_is_anydmt = ((IData)(vlSelfRef.__PVT__req_is_read_nosnp) 
                                      | (IData)(vlSelfRef.__PVT__req_is_read_snp));
    vlSelfRef.__PVT__readto_invalid_addr = (((IData)(vlSelfRef.__PVT__req_is_read_nosnp) 
                                             | (IData)(vlSelfRef.__PVT__req_is_read_snp)) 
                                            & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x85U));
    vlSelfRef.__PVT__readto_iconly = ((((((IData)(vlSelfRef.__PVT__cachest_uc) 
                                          & (IData)(vlSelfRef.__PVT__req_is_read_snp)) 
                                         & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U))) 
                                        | (((IData)(vlSelfRef.__PVT__cachest_ud) 
                                            & (IData)(vlSelfRef.__PVT__req_is_read_snp)) 
                                           & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U)))) 
                                       | (((IData)(vlSelfRef.__PVT__cachest_sd) 
                                           & (IData)(vlSelfRef.__PVT__req_is_read_snp)) 
                                          & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U)))) 
                                      | (((((IData)(vlSelfRef.__PVT__cachest_sd) 
                                            | (IData)(vlSelfRef.__PVT__cachest_uc)) 
                                           | (IData)(vlSelfRef.__PVT__cachest_ud)) 
                                          & (IData)(vlSelfRef.__PVT__req_is_makeread_u)) 
                                         & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U))));
    vlSelfRef.__PVT__readto_memonly = (((((((IData)(vlSelfRef.__PVT__cachest_inv) 
                                            & ((IData)(vlSelfRef.__PVT__req_is_read_snp) 
                                               | (IData)(vlSelfRef.__PVT__req_is_makeread_u))) 
                                           | (((IData)(vlSelfRef.__PVT__cachest_uc) 
                                               & (IData)(vlSelfRef.__PVT__req_is_read_snp)) 
                                              & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U))) 
                                          | ((IData)(vlSelfRef.__PVT__cachest_sc) 
                                             & (IData)(vlSelfRef.__PVT__req_is_read_ocs_notsd))) 
                                         | (((IData)(vlSelfRef.__PVT__cachest_ud) 
                                             & (IData)(vlSelfRef.__PVT__req_is_read_snp)) 
                                            & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U))) 
                                        | (((IData)(vlSelfRef.__PVT__cachest_sd) 
                                            & (IData)(vlSelfRef.__PVT__req_is_read_ocs_notsd)) 
                                           & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U))) 
                                       | (IData)(vlSelfRef.__PVT__req_is_read_nosnp));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__0(Vsig_topology_top_sig_chi_xmt_snpreq__pi18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__full_rn_node_ids[0U] = (0x7ffU 
                                             & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0U, 11));
    vlSelfRef.__PVT__full_rn_node_ids[1U] = (0x7ffU 
                                             & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0xbU, 11));
    vlSelfRef.__PVT__full_rn_node_ids[2U] = (0x7ffU 
                                             & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0x16U, 11));
    vlSelfRef.__PVT__full_rn_node_ids[3U] = (0x7ffU 
                                             & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0x21U, 11));
    vlSelfRef.__PVT__full_rn_node_ids[4U] = (0x7ffU 
                                             & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0x2cU, 11));
    vlSelfRef.__PVT__full_rn_node_ids[5U] = (0x7ffU 
                                             & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0x37U, 11));
    vlSelfRef.__PVT__full_rn_node_ids[6U] = (0x7ffU 
                                             & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0x42U, 11));
    vlSelfRef.__PVT__full_rn_node_ids[7U] = (0x7ffU 
                                             & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0x4dU, 11));
    vlSelfRef.__PVT__full_rn_node_ids[8U] = (0x7ffU 
                                             & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0x58U, 11));
    vlSelfRef.__PVT__full_rn_node_ids[9U] = (0x7ffU 
                                             & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0x63U, 11));
    vlSelfRef.__PVT__full_rn_node_ids[0xaU] = (0x7ffU 
                                               & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0x6eU, 11));
    vlSelfRef.__PVT__full_rn_node_ids[0xbU] = (0x7ffU 
                                               & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0x79U, 11));
    vlSelfRef.__PVT__full_rn_node_ids[0xcU] = (0x7ffU 
                                               & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0x84U, 11));
    vlSelfRef.__PVT__full_rn_node_ids[0xdU] = (0x7ffU 
                                               & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0x8fU, 11));
    vlSelfRef.__PVT__full_rn_node_ids[0xeU] = (0x7ffU 
                                               & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0x9aU, 11));
    vlSelfRef.__PVT__full_rn_node_ids[0xfU] = (0x7ffU 
                                               & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0xa5U, 11));
    vlSelfRef.__PVT__full_rn_node_ids[0x10U] = (0x7ffU 
                                                & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0xb0U, 11));
    vlSelfRef.__PVT__full_rn_node_ids[0x11U] = (0x7ffU 
                                                & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0xbbU, 11));
    vlSelfRef.__PVT__full_rn_node_ids[0x12U] = (0x7ffU 
                                                & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0xc6U, 11));
    vlSelfRef.__PVT__full_rn_node_ids[0x13U] = (0x7ffU 
                                                & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0xd1U, 11));
    vlSelfRef.__PVT__full_rn_node_ids[0x14U] = (0x7ffU 
                                                & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0xdcU, 11));
    vlSelfRef.__PVT__full_rn_node_ids[0x15U] = (0x7ffU 
                                                & VL_SEL_IWII(242, vlSelfRef.__PVT__COH_nodeid_all_rn, 0xe7U, 11));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__1(Vsig_topology_top_sig_chi_xmt_snpreq__pi18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__o_xmt_snpreq_linear_srcid = vlSelfRef.__PVT__requester_srcid;
    vlSelfRef.__PVT__srcrn_nodeid_grid = vlSelfRef.__PVT__i_xmt_snpreq_full_srcid;
    VL_ASSIGNSEL_WI(680,26,0U, vlSelfRef.__PVT__ic_TX_DATFLIT_RESPERR_s, 
                    VL_CONCAT_III(26,11,15, (0x7ffU 
                                             & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xfU, 11)), 
                                  VL_CONCAT_III(15,11,4, 
                                                ((IData)(vlSelfRef.__PVT__req_nonsnpable)
                                                  ? (IData)(vlSelfRef.__PVT__requester_srcid)
                                                  : (IData)(vlSelfRef.__PVT__srcrn_nodeid_grid)), 
                                                (0xfU 
                                                 & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0U, 4)))));
    VL_ASSIGN_W(680,vlSelfRef.__PVT__ic_TX_DATFLIT_RESPERR_nxt, vlSelfRef.__PVT__ic_TX_DATFLIT_RESPERR_s);
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__2(Vsig_topology_top_sig_chi_xmt_snpreq__pi18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__timeout_snprespdata_i_pd = ((IData)(vlSelfRef.__PVT__cachest_sd) 
                                                 & (0x10U 
                                                    != (IData)(vlSelfRef.__PVT__proc_state)));
    vlSelfRef.__PVT__gen_unused_signals__DOT__unused_signal 
        = ((IData)(vlSelfRef.__PVT__timeout_cback_wrdata) 
           | (IData)(vlSelfRef.__PVT__timeout_snprespdata_i_pd));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__3(Vsig_topology_top_sig_chi_xmt_snpreq__pi18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0U)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [1U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 1U)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [2U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 2U)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [3U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 3U)));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [4U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 4U)));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [5U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 5U)));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [6U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 6U)));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [7U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 7U)));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [8U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 8U)));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [9U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 9U)));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0xaU] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0xaU)));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0xbU] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0xbU)));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0xcU] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0xcU)));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0xdU] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0xdU)));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0xeU] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0xeU)));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0xfU] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0xfU)));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0x10U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0x10U)));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0x11U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0x11U)));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0x12U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0x12U)));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0x13U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0x13U)));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0x14U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0x14U)));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__sole_snoopee_supports_dct_mask, 
                    ((vlSelfRef.__PVT__full_rn_node_ids
                      [0x15U] == (IData)(vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid)) 
                     & VL_BITSEL_IIII(22, vlSelfRef.__PVT__dct_enable_all_rn_vec, 0x15U)));
    vlSelfRef.__PVT__sole_snoopee_supports_dct = VL_REDOR_I(vlSelfRef.__PVT__sole_snoopee_supports_dct_mask);
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__4(Vsig_topology_top_sig_chi_xmt_snpreq__pi18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__4\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__apply_dct = ((IData)(vlSelfRef.__PVT__sole_snoopee_supports_dct) 
                                  & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x81U));
    vlSelfRef.__PVT__snp_opcode = (0x1fU & ((IData)(vlSelfRef.__PVT__apply_dct)
                                             ? VL_CONCAT_III(5,1,4, 1U, 
                                                             (0xfU 
                                                              & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 4)))
                                             : VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 5)));
    if ((1U & (((((0xbU == (0x7fU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))) 
                  | (0x18U == (0x7fU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)))) 
                 | (IData)(vlSelfRef.__PVT__req_is_wr_uniqueptl_clean_s)) 
                | (IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_i)) 
               | VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xaeU)))) {
        vlSelfRef.__PVT__snp_opcode = 9U;
    } else if (((((0xcU == (0x7fU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))) 
                  | (0x19U == (0x7fU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)))) 
                 | (0x43U == (0x7fU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)))) 
                | (IData)(vlSelfRef.__PVT__req_is_wr_uniquefl_clean_s))) {
        vlSelfRef.__PVT__snp_opcode = 0xaU;
    } else if (((IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_s) 
                | (IData)(vlSelfRef.__PVT__req_is_wr_cleanfl_clean_s))) {
        vlSelfRef.__PVT__snp_opcode = 8U;
    } else if (vlSelfRef.__PVT__req_is_read_notsd) {
        vlSelfRef.__PVT__snp_opcode = ((IData)(vlSelfRef.__PVT__apply_dct)
                                        ? 0x14U : 4U);
    } else if (vlSelfRef.__PVT__req_is_read_pu) {
        vlSelfRef.__PVT__snp_opcode = ((IData)(vlSelfRef.__PVT__apply_dct)
                                        ? 0x16U : 0x15U);
    } else if ((((IData)(vlSelfRef.__PVT__req_is_makeread_u) 
                 & (((IData)(vlSelfRef.__PVT__cachest_s) 
                     & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa9U))) 
                    | ((IData)(vlSelfRef.__PVT__cachest_u) 
                       & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U))))) 
                & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb8U))) {
        vlSelfRef.__PVT__snp_opcode = 0x15U;
    } else if ((((IData)(vlSelfRef.__PVT__req_is_makeread_u) 
                 & ((IData)(vlSelfRef.__PVT__cachest_s) 
                    & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa9U))) 
                & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb8U))) {
        vlSelfRef.__PVT__snp_opcode = 9U;
    } else if (((2U == (7U & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb4U, 3))) 
                | (IData)(vlSelfRef.__PVT__req_is_makeread_u))) {
        vlSelfRef.__PVT__snp_opcode = 7U;
    } else if ((((IData)(vlSelfRef.__PVT__req_is_makeread_u) 
                 & (IData)(vlSelfRef.__PVT__apply_dct)) 
                & ((IData)(vlSelfRef.__PVT__cachest_u) 
                   & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U))))) {
        vlSelfRef.__PVT__snp_opcode = 0x17U;
    }
    vlSelfRef.__PVT__snp_donotgotosd_high = (((((((
                                                   ((((((((((((0xcU 
                                                               == (IData)(vlSelfRef.__PVT__snp_opcode)) 
                                                              | (0xbU 
                                                                 == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                             | (7U 
                                                                == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                            | (0x17U 
                                                               == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                           | (5U 
                                                              == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                          | (8U 
                                                             == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                         | (9U 
                                                            == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                        | (0xaU 
                                                           == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                       | (6U 
                                                          == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                     | (0x13U 
                                                        == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                    | (2U 
                                                       == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                   | (0x12U 
                                                      == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                  | (1U 
                                                     == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                 | (0x11U 
                                                    == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                                | (4U 
                                                   == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                               | (0x14U 
                                                  == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                              | (0x15U 
                                                 == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                             | (0x16U 
                                                == (IData)(vlSelfRef.__PVT__snp_opcode)));
    vlSelfRef.__PVT__snp_opcode_anyfwd = ((((((0x16U 
                                               == (IData)(vlSelfRef.__PVT__snp_opcode)) 
                                              | (0x11U 
                                                 == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                             | (0x12U 
                                                == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                            | (0x13U 
                                               == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                           | (0x14U 
                                              == (IData)(vlSelfRef.__PVT__snp_opcode))) 
                                          | (0x17U 
                                             == (IData)(vlSelfRef.__PVT__snp_opcode)));
    VL_ASSIGNSEL_WI(119,4,0x68U, vlSelfRef.__PVT__ic_TX_FLIT_SNPREQ_s, 
                    VL_CONCAT_III(4,3,1, VL_EXTEND_II(3,1, 
                                                      ((IData)(vlSelfRef.__PVT__snp_donotgotosd_high) 
                                                       | (IData)(vlSelfRef.__PVT__donotgotosd_wire))), 
                                  (1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xbaU))));
    VL_ASSIGNSEL_WI(119,17,0x26U, vlSelfRef.__PVT__ic_TX_FLIT_SNPREQ_s, 
                    VL_CONCAT_III(17,5,12, (IData)(vlSelfRef.__PVT__snp_opcode), 
                                  (0xfffU & ((IData)(vlSelfRef.__PVT__snp_opcode_anyfwd)
                                              ? VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x32U, 12)
                                              : 0U))));
    VL_ASSIGNSEL_WQ(119,49,0x37U, vlSelfRef.__PVT__ic_TX_FLIT_SNPREQ_s, 
                    (0x1ffffffffffffULL & VL_SEL_QWII(191, vlSelfRef.__PVT__snpreqcmd, 0x4bU, 49)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__5(Vsig_topology_top_sig_chi_xmt_snpreq__pi18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__5\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_WQ(119,34,4U, vlSelfRef.__PVT__ic_TX_FLIT_SNPREQ_s, 
                    VL_CONCAT_QII(34,11,23, ((IData)(vlSelfRef.__PVT__snp_opcode_anyfwd)
                                              ? (IData)(vlSelfRef.__PVT__srcrn_nodeid_grid)
                                              : 0U), 
                                  VL_CONCAT_III(23,12,11, (IData)(vlSelfRef.__PVT__snp_txnid_masked), 
                                                VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 4U))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__7(Vsig_topology_top_sig_chi_xmt_snpreq__pi18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__7\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__compbuf_available = ((IData)(vlSelfRef.__PVT__compbuf_available_compbuftop) 
                                          & (~ (IData)(vlSelfRef.__PVT__block_compbuf_available)));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__8(Vsig_topology_top_sig_chi_xmt_snpreq__pi18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__8\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__l3_or_link_rdreq_crdtavail = (1U 
                                                   & ((((IData)(vlSelfRef.__PVT__req_is_read_nosnp) 
                                                        & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq))) 
                                                      | (((~ (IData)(vlSelfRef.__PVT__req_is_read_nosnp)) 
                                                          & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full))) 
                                                         & (~ (IData)(vlSelfRef.__PVT__compdata_sending_ccreq)))));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__10(Vsig_topology_top_sig_chi_xmt_snpreq__pi18* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi18___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__10\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    if ((((IData)(vlSelfRef.__PVT__req_is_wr_zero) 
          | (IData)(vlSelfRef.__PVT__reqis_make_i)) 
         | (IData)(vlSelfRef.__PVT__reqis_clean_si))) {
        vlSelfRef.__PVT__returnnid = 0U;
    } else if ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x82U))) {
        vlSelfRef.__PVT__returnnid = (((IData)(vlSelfRef.__PVT__slc_readnosnp_apply_dmt_snpreq_out) 
                                       & (IData)(vlSelfRef.__PVT__req_is_read_snp))
                                       ? (IData)(vlSelfRef.__PVT__srcrn_nodeid_grid)
                                       : (IData)(vlSelfRef.__PVT__requester_srcid));
    } else {
        vlSelfRef.__PVT__returnnid = VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 4U);
    }
    VL_EXTEND_WW(152,119, vlSelfRef.__PVT__ic_TX_FLIT_SNPREQ, vlSelfRef.__PVT__ic_TX_FLIT_SNPREQ_s);
    VL_ASSIGNSEL_WI(151,31,0x26U, vlSelfRef.__PVT__ic_TX_FLIT_MEMREQ_s, 
                    VL_CONCAT_III(31,7,24, (IData)(vlSelfRef.__PVT__memreq_opcode), 
                                  VL_CONCAT_III(24,12,12, (IData)(vlSelfRef.__PVT__returntxnid), 
                                                VL_EXTEND_II(12,11, (IData)(vlSelfRef.__PVT__returnnid)))));
    VL_CONCAT_WIW(152,1,151, vlSelfRef.__PVT__ic_TX_FLIT_MEMREQ, 1U, vlSelfRef.__PVT__ic_TX_FLIT_MEMREQ_s);
    __Vtemp_1 = (((IData)(vlSelfRef.__PVT__flittype_rdnosnp) 
                  | (IData)(vlSelfRef.__PVT__flittype_wrnosnp)) 
                 | (IData)(vlSelfRef.__PVT__flittype_cmo));
    VL_COND_WIWW(152, vlSelfRef.__PVT__ic_TX_FLIT_SNPREQ_OR_MEMREQ, __Vtemp_1, vlSelfRef.__PVT__ic_TX_FLIT_MEMREQ, vlSelfRef.__PVT__ic_TX_FLIT_SNPREQ);
}
