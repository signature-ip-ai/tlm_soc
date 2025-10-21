// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top_sig_chi_xmt_snpreq__pi17.h"

extern const VlWide<19>/*607:0*/ Vsig_topology_top__ConstPool__CONST_hbc9cf68c_0;

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_snpreq__pi17___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0(Vsig_topology_top_sig_chi_xmt_snpreq__pi17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi17___eval_initial__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_WW(680,599,0x51U, vlSelfRef.__PVT__ic_TX_DATFLIT_RESPERR_s, Vsig_topology_top__ConstPool__CONST_hbc9cf68c_0);
    vlSelfRef.__PVT__ExpCompAck_Rdnosnp = 0U;
    vlSelfRef.__PVT__donotgotosd_wire = 0U;
}

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_snpreq__pi17___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__1(Vsig_topology_top_sig_chi_xmt_snpreq__pi17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi17___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__datf_homenid_attr_compdata = VL_CONCAT_III(11,8,3, (IData)(vlSelfRef.__PVT__mycluster_id), 4U);
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
    VL_ASSIGNSEL_WI(680,27,0x1aU, vlSelfRef.__PVT__ic_TX_DATFLIT_RESPERR_s, 
                    VL_CONCAT_III(27,4,23, 4U, VL_CONCAT_III(23,11,12, (IData)(vlSelfRef.__PVT__datf_homenid_attr_compdata), 
                                                             (0xfffU 
                                                              & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x32U, 12)))));
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
    vlSelfRef.__PVT__timeout_snprespdata_i_pd = ((IData)(vlSelfRef.__PVT__cachest_sd) 
                                                 & (0x10U 
                                                    != (IData)(vlSelfRef.__PVT__proc_state)));
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
    vlSelfRef.__PVT__gen_unused_signals__DOT__unused_signal 
        = ((IData)(vlSelfRef.__PVT__timeout_cback_wrdata) 
           | (IData)(vlSelfRef.__PVT__timeout_snprespdata_i_pd));
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

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_snpreq__pi17___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__3(Vsig_topology_top_sig_chi_xmt_snpreq__pi17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi17___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__3\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_snpreq__pi17___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__0(Vsig_topology_top_sig_chi_xmt_snpreq__pi17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi17___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__0\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_snpreq__pi17___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__1(Vsig_topology_top_sig_chi_xmt_snpreq__pi17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi17___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__1\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_snpreq__pi17___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__2(Vsig_topology_top_sig_chi_xmt_snpreq__pi17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi17___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__2\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_snpreq__pi17___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__4(Vsig_topology_top_sig_chi_xmt_snpreq__pi17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi17___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__4\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_snpreq__pi17___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__6(Vsig_topology_top_sig_chi_xmt_snpreq__pi17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi17___stl_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__6\n"); );
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

VL_ATTR_COLD void Vsig_topology_top_sig_chi_xmt_snpreq__pi17___ctor_var_reset(Vsig_topology_top_sig_chi_xmt_snpreq__pi17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi17___ctor_var_reset\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10522366009035690765ull);
    vlSelf->__PVT__cc_gclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8377306375537073466ull);
    vlSelf->__PVT__rstb_cc_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8322896653826704470ull);
    vlSelf->__PVT__ic_TX_SNPFLITV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6849754011617526692ull);
    VL_SCOPED_RAND_RESET_W(152, vlSelf->__PVT__ic_TX_FLIT_SNPREQ_OR_MEMREQ, __VscopeHash, 18312705570175550489ull);
    vlSelf->__PVT__ic_TX_SNPLCRDV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4400709601415914605ull);
    vlSelf->__PVT__ic_TX_DATFLITV_RESPERR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16485861020973064440ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_TX_DATFLIT_RESPERR, __VscopeHash, 17617866896968363742ull);
    vlSelf->__PVT__cc_reqflit_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10043822492024180417ull);
    vlSelf->__PVT__slc_readnosnp_apply_dmt_snpreq_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9644679645840180933ull);
    vlSelf->__PVT__slc_origreq_is_read_snp_dmt_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11320781052229726160ull);
    vlSelf->__PVT__l3reqflit_fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11472252453616715901ull);
    vlSelf->__PVT__compdata_sending_ccreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12083653312022928931ull);
    vlSelf->__PVT__compdata_clr_outstand = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5694655595672539364ull);
    vlSelf->__PVT__compdata_sending_memreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2272243607501196329ull);
    vlSelf->__PVT__empty_snpreqfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8812859534707948393ull);
    VL_SCOPED_RAND_RESET_W(191, vlSelf->__PVT__snpreqcmd, __VscopeHash, 13566649753070544003ull);
    vlSelf->__PVT__rden_snpreqfifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13160031482171605047ull);
    vlSelf->__PVT__mycluster_id = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2384492568486524022ull);
    vlSelf->__PVT__compbuf_available_compbuftop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16691506993162517898ull);
    vlSelf->__PVT__allocate_compbuf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4253613421573339667ull);
    vlSelf->__PVT__allocate_respbuf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14112340887089749087ull);
    vlSelf->__PVT__respbuff_avail = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7306347581112127521ull);
    vlSelf->__PVT__o_xmt_snpreq_linear_tgtid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7550065469205720457ull);
    vlSelf->__PVT__i_xmt_snpreq_full_tgtid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6325318886962703848ull);
    vlSelf->__PVT__o_xmt_snpreq_linear_srcid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2532851157386326931ull);
    vlSelf->__PVT__i_xmt_snpreq_full_srcid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 9258326584373889134ull);
    vlSelf->__PVT__dct_enable_all_rn_vec = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10100887395540299746ull);
    VL_SCOPED_RAND_RESET_W(242, vlSelf->__PVT__COH_nodeid_all_rn, __VscopeHash, 12026750110535324694ull);
    vlSelf->__PVT__block_compbuf_available = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 470389546691545043ull);
    vlSelf->__PVT__req_resp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7294280359740733106ull);
    VL_SCOPED_RAND_RESET_W(74, vlSelf->__PVT__respbody_snpreq, __VscopeHash, 14749717961920806112ull);
    vlSelf->__PVT__gnt_rsp_snpreq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5065957251824551009ull);
    vlSelf->__PVT__use_early_write_response = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16156962359594802056ull);
    vlSelf->__PVT__req_link_crdt_avlble = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9896736816565612110ull);
    vlSelf->__PVT__dat_link_crdt_atleast_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15048726234301891291ull);
    vlSelf->__PVT__wren_compbuff_num_1st = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9207499633447382685ull);
    vlSelf->__PVT__wren_compbuff_num_2nd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10576292460774726406ull);
    vlSelf->__PVT__en_compbuf_2nd_for_snpdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2836399122947749663ull);
    vlSelf->__PVT__outq_index_o = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13263114740070317888ull);
    vlSelf->__PVT__clr_outstand_cmd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5374427970708754084ull);
    vlSelf->__PVT__index_pendingq_clr_outstand_cmd = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13034040900142042910ull);
    vlSelf->__PVT__avoid_clr_colln = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15150890253760772718ull);
    vlSelf->__PVT__available_credits = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15808204370360910140ull);
    vlSelf->__PVT__consumed_crdt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6102239534665153977ull);
    vlSelf->__PVT__req_is_read_ocs_notsd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12603226620052319396ull);
    vlSelf->__PVT__req_is_read_u = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3111082041018608134ull);
    vlSelf->__PVT__req_is_read_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10775549852014919862ull);
    vlSelf->__PVT__req_is_read_c = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8662900414435958013ull);
    vlSelf->__PVT__req_is_read_s_notsd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7530287685959529296ull);
    vlSelf->__PVT__req_is_read_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 381587708257574648ull);
    vlSelf->__PVT__req_is_read_nosnp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5004677334953641273ull);
    vlSelf->__PVT__req_is_read_once = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4877645232896278689ull);
    vlSelf->__PVT__req_is_read_notsd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9749756622592735454ull);
    vlSelf->__PVT__req_is_makeread_u = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1677397883059138149ull);
    vlSelf->__PVT__req_is_read_pu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9580284453408035208ull);
    vlSelf->__PVT__req_is_read_oc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6700533002252256463ull);
    vlSelf->__PVT__req_is_anydmt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17654326800495971558ull);
    vlSelf->__PVT__snp_tgtid_linear = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12849542148244144546ull);
    vlSelf->__PVT__snp_tgtid_muxed = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13722878385545142376ull);
    vlSelf->__PVT__is_xmt_snp_uniq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17734070446949820210ull);
    vlSelf->__PVT__tgt_nodeid_grid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6387887992653856042ull);
    vlSelf->__PVT__share_vect_word = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 8662708650229258627ull);
    vlSelf->__PVT__share_vect_word_nxt = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17590020163750976607ull);
    vlSelf->__PVT__proc_state = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7338297018971486191ull);
    vlSelf->__PVT__proc_state_nxt = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9283646452926693807ull);
    vlSelf->__PVT__anyp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5927412673174075120ull);
    vlSelf->__PVT__reqis_clean_usi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9855903467151607624ull);
    vlSelf->__PVT__reqis_clean_us = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14128851214465635082ull);
    vlSelf->__PVT__reqis_clean_si = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 920493627508905567ull);
    vlSelf->__PVT__reqis_clean_u = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726757244569289815ull);
    vlSelf->__PVT__reqis_clean_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 87288863739134835ull);
    vlSelf->__PVT__reqis_clean_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8890628937868096255ull);
    vlSelf->__PVT__dataless_need_or_mayneed_dxfr_tomm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1174741804878891517ull);
    vlSelf->__PVT__dataless_no_dxfr_tomm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1039108786446512225ull);
    vlSelf->__PVT__respbuff_hasroom = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10024262436476460848ull);
    vlSelf->__PVT__requester_srcid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16013739093935441847ull);
    vlSelf->__PVT__srcrn_nodeid_grid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6625889076550458082ull);
    vlSelf->__PVT__req_srcid_snp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2828454007641843312ull);
    vlSelf->__PVT__cachest_u = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10495761984656788576ull);
    vlSelf->__PVT__cachest_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7660501861557694770ull);
    vlSelf->__PVT__cachest_uc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 559844170350058020ull);
    vlSelf->__PVT__cachest_ud = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5490427272013620222ull);
    vlSelf->__PVT__cachest_sc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11427692738644392478ull);
    vlSelf->__PVT__cachest_sd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7300292774850370732ull);
    vlSelf->__PVT__cachest_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10681382558882838565ull);
    vlSelf->__PVT__cachest_vld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11558306832479962845ull);
    vlSelf->__PVT__reqis_make_u = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7316804177365592528ull);
    vlSelf->__PVT__reqis_make_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16355415901191171878ull);
    vlSelf->__PVT__req_alreadysent_toDirtyNode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1569941545803708309ull);
    vlSelf->__PVT__req_alreadysent_toDirtyNode_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18001663947786676287ull);
    vlSelf->__PVT__reqis_clean_ui = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9879651401741515482ull);
    vlSelf->__PVT__resp_tgt_port_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15945496178793489708ull);
    vlSelf->__PVT__cacheable_partial_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2571676490185163072ull);
    vlSelf->__PVT__req_is_wr_evict_fl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17306503064858609211ull);
    vlSelf->__PVT__req_is_wr_unique_ptl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 781788724706678888ull);
    vlSelf->__PVT__req_is_wr_unique_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17312235548389644731ull);
    vlSelf->__PVT__req_is_wr_unique_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13612521383679086049ull);
    vlSelf->__PVT__req_is_wr_unique = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9669314247487124128ull);
    vlSelf->__PVT__req_is_wr_nosnpfull = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18330076962997847912ull);
    vlSelf->__PVT__req_is_wr_nosnpptl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1812936014291949855ull);
    vlSelf->__PVT__req_is_wr_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12444838747870731929ull);
    vlSelf->__PVT__req_is_nonzero_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3925227541482072959ull);
    vlSelf->__PVT__req_is_wr_nosnp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17574000066730848704ull);
    vlSelf->__PVT__req_is_wr_nosnp_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9772883500594202340ull);
    vlSelf->__PVT__req_is_rd_nosnp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12308558827779805875ull);
    vlSelf->__PVT__req_is_wr_nosnpfl_clean_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13440462373141676548ull);
    vlSelf->__PVT__req_is_wr_nosnpfl_clean_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17198376268532450294ull);
    vlSelf->__PVT__req_is_wr_nosnpptl_clean_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15902550008797235630ull);
    vlSelf->__PVT__req_is_wr_nosnpptl_clean_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4802749467982441759ull);
    vlSelf->__PVT__req_is_wr_uniquefl_clean_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4300461263266330853ull);
    vlSelf->__PVT__req_is_wr_uniqueptl_clean_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4902032545066986801ull);
    vlSelf->__PVT__req_is_wr_backfl_clean_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16076832365001197864ull);
    vlSelf->__PVT__req_is_wr_backfl_clean_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6285208101417028763ull);
    vlSelf->__PVT__req_is_wr_cleanfl_clean_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 770441782742639390ull);
    vlSelf->__PVT__writefull_clean_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18204595890467923916ull);
    vlSelf->__PVT__writefull_clean_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11457771146660198051ull);
    vlSelf->__PVT__writeuniq_cmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5343891808569623732ull);
    vlSelf->__PVT__writenosnp_cmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10528217794440446322ull);
    vlSelf->__PVT__writeptl_cmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10123895602091902232ull);
    vlSelf->__PVT__writenosnpptl_cmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11837919707979761013ull);
    vlSelf->__PVT__write_cmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3730706457564875465ull);
    vlSelf->__PVT__req_is_nonsnp_excl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6963700545128773542ull);
    vlSelf->__PVT__cc_dbid_index = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5779533515729295398ull);
    vlSelf->__PVT__ExpCompAck_Rdnosnp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 315656616758474460ull);
    vlSelf->__PVT__xmt_snpORreq_flit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6237099679279285391ull);
    vlSelf->__PVT__xmt_datflit_resperr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6851240623642244312ull);
    vlSelf->__PVT__xmt_datflit_resperr_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15727337533573729592ull);
    vlSelf->__PVT__goto_EVAL_FURTHER_afterMemWR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1215339225442312500ull);
    vlSelf->__PVT__goto_EVAL_FURTHER_afterMemWR_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8082105268469195411ull);
    vlSelf->__PVT__req_read_oc_notsd_in_ucudsd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13139078740271815365ull);
    vlSelf->__PVT__readto_invalid_addr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7714878063319912677ull);
    vlSelf->__PVT__atom_rd_addr_inv_dealloc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1721976452370479317ull);
    vlSelf->__PVT__flittype_rdnosnp_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12615588419718476201ull);
    vlSelf->__PVT__flittype_wrnosnp_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8577338514714956742ull);
    vlSelf->__PVT__flittype_rdnosnp_l3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2959465167522860148ull);
    vlSelf->__PVT__flittype_wrnosnp_l3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 718894022573242102ull);
    vlSelf->__PVT__flittype_rdnosnp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1263618938060362473ull);
    vlSelf->__PVT__flittype_wrnosnp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3054379293216872179ull);
    vlSelf->__PVT__flittype_snp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4388643934284127370ull);
    vlSelf->__PVT__flittype_cmo_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10813536663797905029ull);
    vlSelf->__PVT__flittype_cmo_l3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4162433986908002547ull);
    vlSelf->__PVT__flittype_cmo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7935847228947397116ull);
    vlSelf->__PVT__cmo_need_snooping_with_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15749131370529478247ull);
    vlSelf->__PVT__cmo_need_snooping_without_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8316849407607107886ull);
    vlSelf->__PVT__cmo_no_need_snooping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9562494391639363669ull);
    vlSelf->__PVT__read_once_nosnp_needs_rcrcpt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9432345903056673973ull);
    vlSelf->__PVT__readto_memonly = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10474004897257670311ull);
    vlSelf->__PVT__readto_iconly = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10595471190424204540ull);
    vlSelf->__PVT__readto_both_memic = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10823503141666013294ull);
    vlSelf->__PVT__readto_invalidate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11992236753798355249ull);
    vlSelf->__PVT__req_src_grid_actual = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1930872470212621674ull);
    vlSelf->__PVT__req_src_id_actual = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4569234914423004467ull);
    vlSelf->__PVT__replicate_in_cluster = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5808198118035055172ull);
    vlSelf->__PVT__req_nonsnpable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12517231804748039066ull);
    vlSelf->__PVT__send_memwr_to_l3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3927619326467176493ull);
    vlSelf->__PVT__send_memwr_to_l3_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 566251172773175095ull);
    vlSelf->__PVT__l3_or_link_rdreq_crdtavail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18236136725606596510ull);
    vlSelf->__PVT__respis_compresp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9063210106341080872ull);
    vlSelf->__PVT__compbuf_available = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 968607762346503633ull);
    vlSelf->__PVT__allocate_compbuf_1st = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5060480382851261285ull);
    vlSelf->__PVT__allocate_compbuf_2nd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15649458696408442320ull);
    vlSelf->__PVT__clr_pendingq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10930025842512264215ull);
    vlSelf->__PVT__clr_outstand_cmd_pre = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17482734886909032978ull);
    vlSelf->__PVT__invalidate_all_requester = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2476549532000045696ull);
    vlSelf->__PVT__cmo_respbuf_allocated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12225107464052057044ull);
    vlSelf->__PVT__cmo_respbuf_allocated_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11841464645097108856ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_TX_DATFLIT_RESPERR_nxt, __VscopeHash, 3490846280405031283ull);
    vlSelf->__PVT__snp_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11703510317217508726ull);
    vlSelf->__PVT__resp_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16000544391595338847ull);
    vlSelf->__PVT__returnnid = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3643104262992799360ull);
    VL_SCOPED_RAND_RESET_W(151, vlSelf->__PVT__ic_TX_FLIT_MEMREQ_s, __VscopeHash, 15632194573134115219ull);
    VL_SCOPED_RAND_RESET_W(119, vlSelf->__PVT__ic_TX_FLIT_SNPREQ_s, __VscopeHash, 10361366171850391304ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->__PVT__respbody_snpreq_s, __VscopeHash, 15026901730604280179ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__PVT__ic_TX_DATFLIT_RESPERR_s, __VscopeHash, 16347924938547478670ull);
    vlSelf->__PVT__compdata_resp_field = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11573411572477980369ull);
    vlSelf->__PVT__returntxnid = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15501615785049006947ull);
    vlSelf->__PVT__sole_snoopee_supports_dct = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9219975657728834209ull);
    vlSelf->__PVT__avoid_clr_colln_nxt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11561880850873880107ull);
    for (int __Vi0 = 0; __Vi0 < 22; ++__Vi0) {
        vlSelf->__PVT__full_rn_node_ids[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5656017386786228776ull);
    }
    vlSelf->__PVT__sole_snoopee_supports_dct_mask = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 16232020151439457439ull);
    vlSelf->__PVT__dbid_field_masked = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11381183225086656087ull);
    vlSelf->__PVT__timeout_cback_wrdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13755035526330091823ull);
    vlSelf->__PVT__snp_txnid_masked = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1476018353362855465ull);
    vlSelf->__PVT__timeout_snprespdata_i_pd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15734256619621395638ull);
    vlSelf->__PVT__snp_opcode_anyfwd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16137368850390794469ull);
    vlSelf->__PVT__datf_homenid_attr_compdata = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 823073423044209208ull);
    vlSelf->__PVT__donotgotosd_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8721550368618241680ull);
    vlSelf->__PVT__snp_donotgotosd_high = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18076021616116150994ull);
    vlSelf->__PVT__memreq_opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8634529071391956702ull);
    VL_SCOPED_RAND_RESET_W(152, vlSelf->__PVT__ic_TX_FLIT_SNPREQ, __VscopeHash, 11356684601259186170ull);
    VL_SCOPED_RAND_RESET_W(152, vlSelf->__PVT__ic_TX_FLIT_MEMREQ, __VscopeHash, 5396306370750287789ull);
    vlSelf->__PVT__apply_dct = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8323117139483989796ull);
    vlSelf->__PVT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11372531115521842849ull);
    vlSelf->__PVT__gen_unused_signals__DOT__unused_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10359999198496315536ull);
    vlSelf->__Vlvbound_h6854731d__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6558419139080628806ull);
    vlSelf->__Vdly__clr_outstand_cmd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2869591869232169633ull);
    vlSelf->__Vdly__index_pendingq_clr_outstand_cmd = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13287859021782215991ull);
    vlSelf->__Vdly__avoid_clr_colln = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3187829149152647506ull);
    vlSelf->__Vdly__share_vect_word = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17849290416191409657ull);
    vlSelf->__Vdly__proc_state = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5839555854634210044ull);
    vlSelf->__Vdly__xmt_datflit_resperr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6435471692897001959ull);
    vlSelf->__Vdly__req_alreadysent_toDirtyNode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17551948414360975102ull);
    vlSelf->__Vdly__goto_EVAL_FURTHER_afterMemWR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5575676627416445923ull);
    vlSelf->__Vdly__send_memwr_to_l3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11094448995228667142ull);
    vlSelf->__Vdly__cmo_respbuf_allocated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10289648289832594748ull);
    VL_SCOPED_RAND_RESET_W(680, vlSelf->__Vdly__ic_TX_DATFLIT_RESPERR, __VscopeHash, 17579849390594492739ull);
}
