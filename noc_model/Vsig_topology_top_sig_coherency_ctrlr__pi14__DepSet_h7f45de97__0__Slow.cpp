// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_coherency_ctrlr__pi14.h"

VL_ATTR_COLD void Vsig_topology_top_sig_coherency_ctrlr__pi14___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__0(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___stl_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_14;
    VlWide<5>/*159:0*/ __Vtemp_15;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_17;
    VlWide<5>/*159:0*/ __Vtemp_18;
    VlWide<5>/*159:0*/ __Vtemp_19;
    VlWide<5>/*159:0*/ __Vtemp_20;
    CData/*31:0*/ __Vtemp_21;
    VlWide<5>/*159:0*/ __Vtemp_22;
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_25;
    CData/*31:0*/ __Vtemp_26;
    VlWide<4>/*127:0*/ __Vtemp_27;
    CData/*31:0*/ __Vtemp_28;
    // Body
    vlSelfRef.__PVT__full_respcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0.__PVT__fifo_full;
    vlSelfRef.__PVT__full_drespcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__drespcmd_fifo_0.__PVT__fifo_full;
    vlSelfRef.__PVT__full_memrespcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0.__PVT__fifo_full;
    vlSelfRef.__PVT__cmdq_srcis_resp_ph3 = (0U == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp));
    vlSelfRef.__PVT__cmdq_srcis_mem_ph3 = (1U == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp));
    vlSelfRef.__PVT__cmdq_srcis_data_ph3 = (2U == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp));
    vlSelfRef.__PVT__cmd_isatmo_rd_ph2 = (2U == (3U 
                                                 & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph2_req, 0x99U, 2)));
    vlSelfRef.__PVT__cmd_isatmo_wr_ph2 = (1U == (3U 
                                                 & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph2_req, 0x99U, 2)));
    vlSelfRef.__PVT__cmdvalid_ph3_req_nxt = vlSelfRef.__PVT__cmdvalid_ph2_req;
    vlSelfRef.__PVT__moving_share_vect_ph4 = (0x3fffffU 
                                              & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph4, 0x1cU, 22));
    vlSelfRef.__PVT__moving_ownerp_id_ph4 = (0x7fU 
                                             & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph4, 0x32U, 7));
    vlSelfRef.__PVT__moving_cache_st_ph4 = (7U & VL_SEL_IWII(136, vlSelfRef.__PVT__rddata_statcommon_rsp_ph4, 0x39U, 3));
    vlSelfRef.__PVT__orig_pshare_cnt_ph4 = (0x1fU & 
                                            VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph4, 0x3cU, 5));
    vlSelfRef.__PVT__req_share_vect_ph4 = (0x3fffffU 
                                           & VL_SEL_IIII(32, vlSelfRef.__PVT__rddata_cache_ph4, 0xaU, 22));
    vlSelfRef.__PVT__wren_cache_vector_ph6rsp_nxt = vlSelfRef.__PVT__wren_cache_vector_ph5_rsp;
    vlSelfRef.__PVT__cmd_ph4_23_18_rsp_nxt = (0x3fU 
                                              & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x1aU, 6));
    vlSelfRef.__PVT__cache_index_wr_req_nxt = (0x3ffU 
                                               & VL_SEL_IQII(52, vlSelfRef.__PVT__cmd_ph6_req_addr, 6U, 10));
    vlSelfRef.__PVT__cache_tag_wr_req_nxt = (0xfffffffffULL 
                                             & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_ph6_req_addr, 0x10U, 36));
    vlSelfRef.__PVT__vld_compbuff_num_2nd_ph3 = (1U 
                                                 & VL_BITSEL_IIII(32, vlSelfRef.__PVT__vld_store_to_bn2, 
                                                                  (0x1fU 
                                                                   & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x1aU, 5))));
    vlSelfRef.__PVT__cache_index_wr_rsp_nxt = (0x3ffU 
                                               & ((0x67fU 
                                                   >= 
                                                   (0x7ffU 
                                                    & ((IData)(6U) 
                                                       + 
                                                       VL_SEL_IIII(32, 
                                                                   ((IData)(0x34U) 
                                                                    * 
                                                                    VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__cmd_ph5_23_18_rsp), 0U, 5)))), 0U, 11))))
                                                   ? 
                                                  VL_SEL_IWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 
                                                              (0x7ffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  VL_SEL_IIII(32, 
                                                                              ((IData)(0x34U) 
                                                                               * 
                                                                               VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__cmd_ph5_23_18_rsp), 0U, 5)))), 0U, 11))), 10)
                                                   : 0U));
    vlSelfRef.__PVT__cache_tag_wr_rsp_nxt = (0xfffffffffULL 
                                             & ((0x67fU 
                                                 >= 
                                                 (0x7ffU 
                                                  & ((IData)(0x10U) 
                                                     + 
                                                     VL_SEL_IIII(32, 
                                                                 ((IData)(0x34U) 
                                                                  * 
                                                                  VL_EXTEND_II(32,5, 
                                                                               (0x1fU 
                                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__cmd_ph5_23_18_rsp), 0U, 5)))), 0U, 11))))
                                                 ? 
                                                VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 
                                                            (0x7ffU 
                                                             & ((IData)(0x10U) 
                                                                + 
                                                                VL_SEL_IIII(32, 
                                                                            ((IData)(0x34U) 
                                                                             * 
                                                                             VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__cmd_ph5_23_18_rsp), 0U, 5)))), 0U, 11))), 36)
                                                 : 0ULL));
    VL_ASSIGNSEL_II(32,22,0xaU, vlSelfRef.__PVT__wrdata_cache_ph6final_req, 
                    (0x3fffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__wrdata_cache_ph6_req, 0xaU, 22)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wrdata_cache_ph6final_req, 
                    (0U != (IData)(vlSelfRef.__PVT__pshare_cnt_ph6_req)));
    vlSelfRef.__PVT__cmdq_srcdata_ph4 = (2U == (IData)(vlSelfRef.__PVT__cmdq_src_ph4_rsp));
    VL_ASSIGNSEL_II(32,2,1U, vlSelfRef.__PVT__wrdata_cache_ph6final_req, 
                    VL_CONCAT_III(2,1,1, (1U < (IData)(vlSelfRef.__PVT__pshare_cnt_ph6_req)), 
                                  ((0U != (IData)(vlSelfRef.__PVT__pshare_cnt_ph6_req)) 
                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wrdata_cache_ph6_req, 1U))));
    VL_ASSIGNSEL_II(32,7,3U, vlSelfRef.__PVT__wrdata_cache_ph6final_req, 0x7fU);
    VL_ASSIGNSEL_II(32,7,3U, vlSelfRef.__PVT__wrdata_cache_ph6final_req, 
                    (0x7fU & ((0U == (IData)(vlSelfRef.__PVT__pshare_cnt_ph6_req))
                               ? 0x7fU : ((1U == (IData)(vlSelfRef.__PVT__pshare_cnt_ph6_req))
                                           ? (IData)(vlSelfRef.__PVT__ownerp_id_ph6_req)
                                           : ((1U & 
                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__wrdata_cache_ph6_req, 1U))
                                               ? VL_SEL_IIII(32, vlSelfRef.__PVT__wrdata_cache_ph6_req, 3U, 7)
                                               : 0x7fU)))));
    vlSelfRef.__PVT__sharevec_ph5_rsp = (0x3fffffU 
                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__wrdata_cache_ph5_rsp, 0xaU, 22));
    vlSelfRef.__PVT__sharevec_ph5_req = (0x3fffffU 
                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__wrdata_cache_ph5_req, 0xaU, 22));
    VL_CONST_W_3X(96,__Vtemp_1,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 155, __Vtemp_2, vlSelfRef.__PVT__cmd_ph4_rsp, 0U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__cmd_ph4_rsp_s, __Vtemp_1, __Vtemp_2);
    vlSelfRef.__PVT__outstand_cmd_invalid_allones = 
        VL_REDAND_II(32, vlSelfRef.__PVT__outstand_cmd_invalid);
    vlSelfRef.__PVT__orig_cache_st_ph4 = (7U & VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph4, 0x39U, 3));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x17U) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2fU) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x47U) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x5fU) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x77U) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x8fU) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xa7U) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xbfU) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 7U)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xd7U) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 8U)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xefU) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 9U)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x107U) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xaU)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x11fU) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xbU)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x137U) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xcU)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x14fU) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xdU)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x167U) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xeU)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x17fU) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xfU)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x197U) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x10U)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1afU) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x11U)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1c7U) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x12U)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1dfU) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x13U)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1f7U) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x14U)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x20fU) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x15U)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x227U) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x16U)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x23fU) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x17U)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x257U) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x18U)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x26fU) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x19U)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x287U) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1aU)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x29fU) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1bU)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2b7U) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1cU)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2cfU) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1dU)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2e7U) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1eU)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__outstand_cmd_atom, 
                    (1U & (VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2ffU) 
                           & (~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1fU)))));
    vlSelfRef.__PVT__origreq_opcode_ph4 = (0x7fU & 
                                           VL_SEL_IWII(108, vlSelfRef.__PVT__rddata_statreg_req_ph4, 2U, 7));
    vlSelfRef.__PVT__wrdata_cache_ph4_rsp = VL_CONCAT_III(32,22,10, vlSelfRef.__PVT__new_share_vect_ph4_rsp, 
                                                          VL_CONCAT_III(10,7,3, (IData)(vlSelfRef.__PVT__new_ownerp_id_ph4_rsp), (IData)(vlSelfRef.__PVT__new_cache_st_ph4_rsp)));
    vlSelfRef.__PVT__wrdata_cache_ph4_req = VL_CONCAT_III(32,22,10, vlSelfRef.__PVT__new_share_vect_ph4_req, 
                                                          VL_CONCAT_III(10,7,3, (IData)(vlSelfRef.__PVT__new_ownerp_id_ph4_req), (IData)(vlSelfRef.__PVT__new_cache_st_ph4_req)));
    vlSelfRef.__PVT__cmd_isatmo_ph2 = (0U != (3U & 
                                              VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph2_req, 0x99U, 2)));
    vlSelfRef.__PVT__req_src_clstid_ph3 = (0xffU & 
                                           VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_req, 0x12U, 8));
    vlSelfRef.__PVT__req_is_anyrd_ph3 = (1U & VL_BITSEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_req, 0x98U));
    VL_ASSIGNSEL_II(32,22,0xaU, vlSelfRef.__PVT__wrdata_cache_ph6final_rsp, 
                    (0x3fffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__wrdata_cache_ph6_rsp, 0xaU, 22)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wrdata_cache_ph6final_rsp, 
                    (0U != (IData)(vlSelfRef.__PVT__pshare_cnt_ph6_rsp)));
    VL_ASSIGNSEL_II(32,2,1U, vlSelfRef.__PVT__wrdata_cache_ph6final_rsp, 
                    VL_CONCAT_III(2,1,1, (1U < (IData)(vlSelfRef.__PVT__pshare_cnt_ph6_rsp)), 
                                  ((0U != (IData)(vlSelfRef.__PVT__pshare_cnt_ph6_rsp)) 
                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__wrdata_cache_ph6_rsp, 1U))));
    VL_ASSIGNSEL_II(32,7,3U, vlSelfRef.__PVT__wrdata_cache_ph6final_rsp, 0x7fU);
    VL_ASSIGNSEL_II(32,7,3U, vlSelfRef.__PVT__wrdata_cache_ph6final_rsp, 
                    (0x7fU & ((0U == (IData)(vlSelfRef.__PVT__pshare_cnt_ph6_rsp))
                               ? 0x7fU : ((1U == (IData)(vlSelfRef.__PVT__pshare_cnt_ph6_rsp))
                                           ? (IData)(vlSelfRef.__PVT__ownerp_id_ph6_rsp)
                                           : ((1U & 
                                               VL_BITSEL_IIII(32, vlSelfRef.__PVT__wrdata_cache_ph6_rsp, 1U))
                                               ? VL_SEL_IIII(32, vlSelfRef.__PVT__wrdata_cache_ph6_rsp, 3U, 7)
                                               : 0x7fU)))));
    vlSelfRef.__PVT__compbuff_num_2nd_ph3 = (0x1fU 
                                             & ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & VL_SEL_IIII(32, 
                                                                ((IData)(5U) 
                                                                 * 
                                                                 VL_EXTEND_II(32,5, 
                                                                              (0x1fU 
                                                                               & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x1aU, 5)))), 0U, 8)))
                                                 ? 
                                                VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_2nd, 
                                                            (0xffU 
                                                             & VL_SEL_IIII(32, 
                                                                           ((IData)(5U) 
                                                                            * 
                                                                            VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x1aU, 5)))), 0U, 8)), 5)
                                                 : 0U));
    vlSelfRef.__PVT__wraddr_stat_req_ph4 = vlSelfRef.__PVT__wrindex_req_ph4;
    vlSelfRef.__PVT__wren_stat_req_ph4 = ((IData)(vlSelfRef.__PVT__cmdvalid_ph4_req) 
                                          & (IData)(vlSelfRef.__PVT__cmdis_req_ph4));
    vlSelfRef.__PVT__atom_block_rd = (VL_REDOR_I((IData)(vlSelfRef.__PVT__colln_rdy_atom_block_rd)) 
                                      | ((IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3) 
                                         & (IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph3)));
    vlSelfRef.__PVT__empty_respcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0.__PVT__fifo_empty;
    vlSelfRef.__PVT__empty_drespcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__drespcmd_fifo_0.__PVT__fifo_empty;
    vlSelfRef.__PVT__empty_memrespcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0.__PVT__fifo_empty;
    vlSelfRef.__PVT__cmd_ph3_pkt_forwarded_bit98 = 
        (1U & VL_BITSEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x98U));
    vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0U))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0U;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 1U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 1U))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 1U;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 2U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 2U))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 2U;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 3U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 3U))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 3U;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 4U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 4U))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 4U;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 5U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 5U))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 5U;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 6U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 6U))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 6U;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 7U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 7U))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 7U;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 8U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 8U))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 8U;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 9U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 9U))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 9U;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0xaU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xaU))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0xaU;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0xbU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xbU))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0xbU;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0xcU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xcU))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0xcU;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0xdU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xdU))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0xdU;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0xeU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xeU))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0xeU;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0xfU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xfU))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0xfU;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0x10U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x10U))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0x10U;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0x11U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x11U))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0x11U;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0x12U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x12U))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0x12U;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0x13U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x13U))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0x13U;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0x14U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x14U))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0x14U;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0x15U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x15U))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0x15U;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0x16U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x16U))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0x16U;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0x17U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x17U))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0x17U;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0x18U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x18U))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0x18U;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0x19U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x19U))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0x19U;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0x1aU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1aU))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0x1aU;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0x1bU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1bU))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0x1bU;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0x1cU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1cU))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0x1cU;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0x1dU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1dU))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0x1dU;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0x1eU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1eU))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0x1eU;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0x1fU;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1fU))) {
        vlSelfRef.__PVT__outstand_req_atmo_rd_idx = 0x1fU;
    }
    vlSelfRef.__PVT__unnamedblk5__DOT__i = 0x20U;
    vlSelfRef.__PVT__req_is_anywr_ph3 = (1U & VL_BITSEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_req, 0x97U));
    vlSelfRef.__PVT__outstand_atmo_wr = VL_REDOR_I(vlSelfRef.__PVT__outstand_req_atmo_wr);
    vlSelfRef.__PVT__req_cache_st_ph4 = (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__rddata_cache_ph4, 0U, 3));
    VL_CONST_W_5X(160,__Vtemp_3,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 155, __Vtemp_4, vlSelfRef.__PVT__cmd_ph4_req, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__cmd_ph4_req_s, __Vtemp_3, __Vtemp_4);
    vlSelfRef.__PVT__outstand_atmo_rd = VL_REDOR_I(vlSelfRef.__PVT__outstand_req_atmo_rd);
    vlSelfRef.__PVT__wren_stat_rsp_ph3 = ((IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp) 
                                          & (IData)(vlSelfRef.__PVT__cmdis_resp_ph3));
    vlSelfRef.__PVT__winner_timeout_index_B0 = 0U;
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0U))) {
        vlSelfRef.__PVT__winner_timeout_index_B0 = 0U;
    } else if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 1U))) {
        vlSelfRef.__PVT__winner_timeout_index_B0 = 1U;
    } else if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 2U))) {
        vlSelfRef.__PVT__winner_timeout_index_B0 = 2U;
    } else if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 3U))) {
        vlSelfRef.__PVT__winner_timeout_index_B0 = 3U;
    } else if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 4U))) {
        vlSelfRef.__PVT__winner_timeout_index_B0 = 4U;
    } else if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 5U))) {
        vlSelfRef.__PVT__winner_timeout_index_B0 = 5U;
    } else if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 6U))) {
        vlSelfRef.__PVT__winner_timeout_index_B0 = 6U;
    } else if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 7U))) {
        vlSelfRef.__PVT__winner_timeout_index_B0 = 7U;
    }
    vlSelfRef.__PVT__winner_timeout_index_B1 = 0U;
    if ((0U == (0xffU & VL_SEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0U, 8)))) {
        if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 8U))) {
            vlSelfRef.__PVT__winner_timeout_index_B1 = 8U;
        } else if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 9U))) {
            vlSelfRef.__PVT__winner_timeout_index_B1 = 9U;
        } else if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0xaU))) {
            vlSelfRef.__PVT__winner_timeout_index_B1 = 0xaU;
        } else if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0xbU))) {
            vlSelfRef.__PVT__winner_timeout_index_B1 = 0xbU;
        } else if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0xcU))) {
            vlSelfRef.__PVT__winner_timeout_index_B1 = 0xcU;
        } else if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0xdU))) {
            vlSelfRef.__PVT__winner_timeout_index_B1 = 0xdU;
        } else if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0xeU))) {
            vlSelfRef.__PVT__winner_timeout_index_B1 = 0xeU;
        } else if ((1U & VL_BITSEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0xfU))) {
            vlSelfRef.__PVT__winner_timeout_index_B1 = 0xfU;
        }
    }
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__sel_winner_collq, 
                    (1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock), 0U)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__sel_winner_collq, 
                    (1U & ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock), 0U)) 
                           & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock), 1U))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__sel_winner_collq, 
                    ((0U == (3U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock), 0U, 2))) 
                     & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock), 2U)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__sel_winner_collq, 
                    ((0U == (7U & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock), 0U, 3))) 
                     & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock), 3U)));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__sel_winner_collq, 
                    ((0U == (0xfU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock), 0U, 4))) 
                     & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock), 4U)));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__sel_winner_collq, 
                    ((0U == (0x1fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock), 0U, 5))) 
                     & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock), 5U)));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__sel_winner_collq, 
                    ((0U == (0x3fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock), 0U, 6))) 
                     & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock), 6U)));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__sel_winner_collq, 
                    ((0U == (0x7fU & VL_SEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock), 0U, 7))) 
                     & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc_lock), 7U)));
    vlSelfRef.__PVT__collnq_full = (2U >= (IData)(vlSelfRef.__PVT__num_emptyloc_collnq));
    vlSelfRef.__PVT__outstand_cmdq_full = (2U >= vlSelfRef.__PVT__num_emptyloc_outstandq);
    VL_ASSIGNSEL_II(24,9,0U, vlSelfRef.__PVT__seq_num_atom, 
                    VL_CONCAT_III(9,3,6, (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_all_atom, 6U, 3)), 
                                  VL_CONCAT_III(6,3,3, 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_all_atom, 3U, 3)), 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_all_atom, 0U, 3)))));
    VL_ASSIGNSEL_II(24,9,9U, vlSelfRef.__PVT__seq_num_atom, 
                    VL_CONCAT_III(9,3,6, (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_all_atom, 0xfU, 3)), 
                                  VL_CONCAT_III(6,3,3, 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_all_atom, 0xcU, 3)), 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_all_atom, 9U, 3)))));
    VL_ASSIGNSEL_II(24,6,0x12U, vlSelfRef.__PVT__seq_num_atom, 
                    VL_CONCAT_III(6,3,3, (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_all_atom, 0x15U, 3)), 
                                  (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_all_atom, 0x12U, 3))));
    vlSelfRef.__PVT__compbuff_num_1st_ph3 = (0x1fU 
                                             & ((0x9fU 
                                                 >= 
                                                 (0xffU 
                                                  & VL_SEL_IIII(32, 
                                                                ((IData)(5U) 
                                                                 * 
                                                                 VL_EXTEND_II(32,5, 
                                                                              (0x1fU 
                                                                               & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x1aU, 5)))), 0U, 8)))
                                                 ? 
                                                VL_SEL_IWII(160, vlSelfRef.__PVT__outstand_cmd_buffnum_1st, 
                                                            (0xffU 
                                                             & VL_SEL_IIII(32, 
                                                                           ((IData)(5U) 
                                                                            * 
                                                                            VL_EXTEND_II(32,5, 
                                                                                (0x1fU 
                                                                                & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x1aU, 5)))), 0U, 8)), 5)
                                                 : 0U));
    VL_ASSIGNSEL_II(24,9,0U, vlSelfRef.__PVT__seq_num, 
                    VL_CONCAT_III(9,3,6, (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_all, 6U, 3)), 
                                  VL_CONCAT_III(6,3,3, 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_all, 3U, 3)), 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_all, 0U, 3)))));
    VL_ASSIGNSEL_II(24,9,9U, vlSelfRef.__PVT__seq_num, 
                    VL_CONCAT_III(9,3,6, (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_all, 0xfU, 3)), 
                                  VL_CONCAT_III(6,3,3, 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_all, 0xcU, 3)), 
                                                (7U 
                                                 & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_all, 9U, 3)))));
    VL_ASSIGNSEL_II(24,6,0x12U, vlSelfRef.__PVT__seq_num, 
                    VL_CONCAT_III(6,3,3, (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_all, 0x15U, 3)), 
                                  (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_all, 0x12U, 3))));
    vlSelfRef.__PVT__cmdq_src1_ph3 = (1U == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp));
    vlSelfRef.__PVT__cmdq_src0_ph3 = (0U == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp));
    vlSelfRef.__PVT__cmdq_src2_ph3 = (2U == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp));
    vlSelfRef.__PVT__full_reqcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__reqcmd_fifo_0.__PVT__fifo_full;
    vlSelfRef.__PVT__empty_reqcmdq = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__reqcmd_fifo_0.__PVT__fifo_empty;
    VL_CONST_W_4X(128,__Vtemp_5,0x00001fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(109, 155, __Vtemp_6, vlSelfRef.__PVT__cmd_ph3_rsp, 0U, 109);
    VL_AND_W(4, vlSelfRef.__PVT__cmd_ph3_datrsp_s, __Vtemp_5, __Vtemp_6);
    vlSelfRef.__PVT__wren_cache_vector = ((IData)(vlSelfRef.__PVT__wren_cache_vector_ph6rsp) 
                                          | (IData)(vlSelfRef.__PVT__wren_cache_vector_ph7_req));
    VL_CONCAT_WQQ(104,52,52, __Vtemp_7, (0xfffffffffffffULL 
                                         & VL_SEL_QWII(1240, vlSelfRef.__PVT__colln_cmd_field, 0xe3U, 52)), 
                  (0xfffffffffffffULL & VL_SEL_QWII(1240, vlSelfRef.__PVT__colln_cmd_field, 0x48U, 52)));
    VL_CONCAT_WQW(156,52,104, __Vtemp_8, (0xfffffffffffffULL 
                                          & VL_SEL_QWII(1240, vlSelfRef.__PVT__colln_cmd_field, 0x17eU, 52)), __Vtemp_7);
    VL_ASSIGNSEL_WW(416,156,0U, vlSelfRef.__PVT__colln_cmd_field_addr, __Vtemp_8);
    VL_CONCAT_WQQ(104,52,52, __Vtemp_9, (0xfffffffffffffULL 
                                         & VL_SEL_QWII(1240, vlSelfRef.__PVT__colln_cmd_field, 0x2b4U, 52)), 
                  (0xfffffffffffffULL & VL_SEL_QWII(1240, vlSelfRef.__PVT__colln_cmd_field, 0x219U, 52)));
    VL_CONCAT_WQW(156,52,104, __Vtemp_10, (0xfffffffffffffULL 
                                           & VL_SEL_QWII(1240, vlSelfRef.__PVT__colln_cmd_field, 0x34fU, 52)), __Vtemp_9);
    VL_ASSIGNSEL_WW(416,156,0x9cU, vlSelfRef.__PVT__colln_cmd_field_addr, __Vtemp_10);
    VL_CONCAT_WQQ(104,52,52, __Vtemp_11, (0xfffffffffffffULL 
                                          & VL_SEL_QWII(1240, vlSelfRef.__PVT__colln_cmd_field, 0x485U, 52)), 
                  (0xfffffffffffffULL & VL_SEL_QWII(1240, vlSelfRef.__PVT__colln_cmd_field, 0x3eaU, 52)));
    VL_ASSIGNSEL_WW(416,104,0x138U, vlSelfRef.__PVT__colln_cmd_field_addr, __Vtemp_11);
    vlSelfRef.__PVT__cache_tag_wr = ((0U != (IData)(vlSelfRef.__PVT__wren_cache_vector_ph6rsp))
                                      ? vlSelfRef.__PVT__cache_tag_wr_rsp
                                      : vlSelfRef.__PVT__cache_tag_wr_req);
    vlSelfRef.__PVT__cache_index_wr = ((0U != (IData)(vlSelfRef.__PVT__wren_cache_vector_ph6rsp))
                                        ? (IData)(vlSelfRef.__PVT__cache_index_wr_rsp)
                                        : (IData)(vlSelfRef.__PVT__cache_index_wr_req));
    VL_CONST_W_3X(96,__Vtemp_12,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 155, __Vtemp_13, vlSelfRef.__PVT__cmd_ph3_rsp, 0U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__cmd_ph3_rsp_s, __Vtemp_12, __Vtemp_13);
    vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph2 = (0U 
                                                 == (IData)(vlSelfRef.__PVT__cmdq_src_ph2_req));
    vlSelfRef.__PVT__cmdq_srcis_colln_ph2 = (1U == (IData)(vlSelfRef.__PVT__cmdq_src_ph2_req));
    vlSelfRef.__PVT__cmdq_srcis_newreq_ph2 = (2U == (IData)(vlSelfRef.__PVT__cmdq_src_ph2_req));
    VL_CONST_W_5X(160,__Vtemp_14,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 155, __Vtemp_15, vlSelfRef.__PVT__cmd_ph2_req, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__cmd_ph2_req_s, __Vtemp_14, __Vtemp_15);
    VL_CONST_W_5X(160,__Vtemp_16,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 155, __Vtemp_17, vlSelfRef.__PVT__cmd_ph3_req, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__cmd_ph3_req_s, __Vtemp_16, __Vtemp_17);
    vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 0x7fU;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 0x15U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 0x15U;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 0x14U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 0x14U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 0x14U;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 0x13U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 0x13U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 0x13U;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 0x12U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 0x12U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 0x12U;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 0x11U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 0x11U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 0x11U;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 0x10U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 0x10U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 0x10U;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xfU;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 0xfU))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 0xfU;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xeU;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 0xeU))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 0xeU;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xdU;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 0xdU))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 0xdU;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xcU;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 0xcU))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 0xcU;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xbU;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 0xbU))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 0xbU;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xaU;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 0xaU))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 0xaU;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 9U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 9U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 9U;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 8U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 8U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 8U;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 7U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 7U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 7U;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 6U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 6U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 6U;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 5U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 5U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 5U;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 4U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 4U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 4U;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 3U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 3U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 3U;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 2U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 2U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 2U;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 1U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 1U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 1U;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 0U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_rsp, 0U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_rsp_nxt = 0U;
    }
    vlSelfRef.__PVT__unnamedblk3__DOT__i = 0xffffffffU;
    vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 0x7fU;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 0x15U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 0x15U;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0x14U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 0x14U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 0x14U;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0x13U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 0x13U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 0x13U;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0x12U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 0x12U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 0x12U;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0x11U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 0x11U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 0x11U;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0x10U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 0x10U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 0x10U;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0xfU;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 0xfU))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 0xfU;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0xeU;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 0xeU))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 0xeU;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0xdU;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 0xdU))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 0xdU;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0xcU;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 0xcU))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 0xcU;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0xbU;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 0xbU))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 0xbU;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0xaU;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 0xaU))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 0xaU;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 9U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 9U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 9U;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 8U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 8U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 8U;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 7U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 7U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 7U;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 6U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 6U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 6U;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 5U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 5U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 5U;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 4U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 4U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 4U;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 3U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 3U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 3U;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 2U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 2U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 2U;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 1U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 1U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 1U;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0U;
    if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__sharevec_ph5_req, 0U))) {
        vlSelfRef.__PVT__ownerp_id_ph6_req_nxt = 0U;
    }
    vlSelfRef.__PVT__unnamedblk4__DOT__i = 0xffffffffU;
    vlSelfRef.__PVT__cmdq_src0_SnpResp_ph4 = ((0U == (IData)(vlSelfRef.__PVT__cmdq_src_ph4_rsp)) 
                                              & (1U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph4_rsp_s, 0x26U, 5))));
    vlSelfRef.__PVT__cc_inactive_st_nxt = vlSelfRef.__PVT__cc_inactive_st;
    vlSelfRef.__PVT__inactive_ctr_nxt = 0U;
    vlSelfRef.__PVT__cc_is_inactive_nxt = vlSelfRef.__PVT__cc_is_inactive;
    if ((0U == (IData)(vlSelfRef.__PVT__cc_inactive_st))) {
        if (vlSelfRef.__PVT__outstand_cmd_invalid_allones) {
            vlSelfRef.__PVT__inactive_ctr_nxt = 0U;
            vlSelfRef.__PVT__cc_inactive_st_nxt = 1U;
        } else {
            vlSelfRef.__PVT__cc_is_inactive_nxt = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__cc_inactive_st))) {
        if (vlSelfRef.__PVT__outstand_cmd_invalid_allones) {
            if ((0x64U == (IData)(vlSelfRef.__PVT__inactive_ctr))) {
                vlSelfRef.__PVT__cc_inactive_st_nxt = 2U;
                vlSelfRef.__PVT__cc_is_inactive_nxt = 1U;
            } else {
                vlSelfRef.__PVT__inactive_ctr_nxt = 
                    (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__inactive_ctr)));
            }
        } else {
            vlSelfRef.__PVT__cc_inactive_st_nxt = 0U;
            vlSelfRef.__PVT__cc_is_inactive_nxt = 0U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__cc_inactive_st))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__outstand_cmd_invalid_allones)))) {
            vlSelfRef.__PVT__cc_inactive_st_nxt = 0U;
            vlSelfRef.__PVT__cc_is_inactive_nxt = 0U;
        }
    } else {
        vlSelfRef.__PVT__cc_inactive_st_nxt = vlSelfRef.__PVT__cc_inactive_st;
    }
    vlSelfRef.__PVT__orig_st_uniq_ph4 = (1U & ((~ VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__orig_cache_st_ph4), 2U)) 
                                               & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__orig_cache_st_ph4), 0U)));
    vlSelfRef.__PVT__orig_st_invalid_ph4 = (1U & (~ 
                                                  VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__orig_cache_st_ph4), 0U)));
    vlSelfRef.__PVT__orig_st_sd_ph4 = (7U == (IData)(vlSelfRef.__PVT__orig_cache_st_ph4));
    vlSelfRef.__PVT__orig_st_uc_ph4 = (1U == (IData)(vlSelfRef.__PVT__orig_cache_st_ph4));
    vlSelfRef.__PVT__orig_st_dirty_ph4 = (3U == (3U 
                                                 & VL_SEL_IIII(3, (IData)(vlSelfRef.__PVT__orig_cache_st_ph4), 0U, 2)));
    vlSelfRef.__PVT__orig_read_o_ph4 = (3U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph4));
    vlSelfRef.__PVT__orig_read_c_ph4 = (2U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph4));
    vlSelfRef.__PVT__orig_read_u_ph4 = (7U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph4));
    vlSelfRef.__PVT__orig_read_s_ph4 = (1U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph4));
    vlSelfRef.__PVT__orig_read_nosnp_ph4 = (4U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph4));
    vlSelfRef.__PVT__orig_read_notsd_ph4 = (0x26U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph4));
    vlSelfRef.__PVT__orig_clean_u_ph4 = (0xbU == (IData)(vlSelfRef.__PVT__origreq_opcode_ph4));
    vlSelfRef.__PVT__orig_clean_s_ph4 = (8U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph4));
    vlSelfRef.__PVT__orig_clean_i_ph4 = (9U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph4));
    vlSelfRef.__PVT__orig_make_u_ph4 = (0xcU == (IData)(vlSelfRef.__PVT__origreq_opcode_ph4));
    vlSelfRef.__PVT__orig_make_i_ph4 = (0xaU == (IData)(vlSelfRef.__PVT__origreq_opcode_ph4));
    vlSelfRef.__PVT__orig_evict_ph4 = (0xdU == (IData)(vlSelfRef.__PVT__origreq_opcode_ph4));
    vlSelfRef.__PVT__orig_wr_cl_ph4 = ((0x17U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph4)) 
                                       | (0x16U == (IData)(vlSelfRef.__PVT__origreq_opcode_ph4)));
    vlSelfRef.__PVT__orig_wr_copyback_ph4 = (((((0x15U 
                                                 == (IData)(vlSelfRef.__PVT__origreq_opcode_ph4)) 
                                                | (0x16U 
                                                   == (IData)(vlSelfRef.__PVT__origreq_opcode_ph4))) 
                                               | (0x17U 
                                                  == (IData)(vlSelfRef.__PVT__origreq_opcode_ph4))) 
                                              | (0x1aU 
                                                 == (IData)(vlSelfRef.__PVT__origreq_opcode_ph4))) 
                                             | (0x1bU 
                                                == (IData)(vlSelfRef.__PVT__origreq_opcode_ph4)));
    vlSelfRef.__Vcellinp__sig_countones_post_rsp__share_vec 
        = VL_EXTEND_II(24,22, (0x3fffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__wrdata_cache_ph4_rsp, 0xaU, 22)));
    vlSelfRef.__Vcellinp__sig_countones_post_req__share_vec 
        = VL_EXTEND_II(24,22, (0x3fffffU & VL_SEL_IIII(32, vlSelfRef.__PVT__wrdata_cache_ph4_req, 0xaU, 22)));
    vlSelfRef.__PVT__wrdata_cache = ((0U != (IData)(vlSelfRef.__PVT__wren_cache_vector_ph6rsp))
                                      ? vlSelfRef.__PVT__wrdata_cache_ph6final_rsp
                                      : vlSelfRef.__PVT__wrdata_cache_ph7final_req);
    vlSelfRef.__PVT__req_respcmdq = (1U & (~ (IData)(vlSelfRef.__PVT__empty_respcmdq)));
    vlSelfRef.__PVT__req_drespcmdq = (1U & (~ (IData)(vlSelfRef.__PVT__empty_drespcmdq)));
    vlSelfRef.__PVT__req_memrespcmdq = (1U & (~ (IData)(vlSelfRef.__PVT__empty_memrespcmdq)));
    vlSelfRef.__PVT__outstand_atom_rd_txnid = (0xfffU 
                                               & ((0x2ffU 
                                                   >= 
                                                   (0x3ffU 
                                                    & VL_SEL_IIII(32, 
                                                                  ((IData)(0x18U) 
                                                                   * 
                                                                   VL_EXTEND_II(32,5, (IData)(vlSelfRef.__PVT__outstand_req_atmo_rd_idx))), 0U, 10)))
                                                   ? 
                                                  VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 
                                                              VL_EXTEND_II(32,10, 
                                                                           (0x3ffU 
                                                                            & VL_SEL_IIII(32, 
                                                                                ((IData)(0x18U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,5, (IData)(vlSelfRef.__PVT__outstand_req_atmo_rd_idx))), 0U, 10))), 12)
                                                   : 0U));
    vlSelfRef.__PVT__outstand_atom_rd_srcid = (0x7ffU 
                                               & ((0x2ffU 
                                                   >= 
                                                   ((IData)(0xcU) 
                                                    + 
                                                    VL_EXTEND_II(32,10, 
                                                                 (0x3ffU 
                                                                  & VL_SEL_IIII(32, 
                                                                                ((IData)(0x18U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,5, (IData)(vlSelfRef.__PVT__outstand_req_atmo_rd_idx))), 0U, 10)))))
                                                   ? 
                                                  VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 
                                                              ((IData)(0xcU) 
                                                               + 
                                                               VL_EXTEND_II(32,10, 
                                                                            (0x3ffU 
                                                                             & VL_SEL_IIII(32, 
                                                                                ((IData)(0x18U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,5, (IData)(vlSelfRef.__PVT__outstand_req_atmo_rd_idx))), 0U, 10)))), 11)
                                                   : 0U));
    vlSelfRef.__PVT__req_st_notdirty_ph4 = (1U & ((~ 
                                                   VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph4), 1U)) 
                                                  & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph4), 0U)));
    vlSelfRef.__PVT__req_st_valid_ph4 = (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph4), 0U));
    vlSelfRef.__PVT__req_st_invalid_ph4 = (1U & (~ 
                                                 VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_cache_st_ph4), 0U)));
    vlSelfRef.__PVT__req_st_dirty_ph4 = ((3U == (IData)(vlSelfRef.__PVT__req_cache_st_ph4)) 
                                         | (7U == (IData)(vlSelfRef.__PVT__req_cache_st_ph4)));
    vlSelfRef.__PVT__req_is_evict_ph4 = (0xdU == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__cmd_ph5_req_addr_nxt = (0xfffffffffffffULL 
                                             & VL_SEL_QWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x48U, 52));
    vlSelfRef.__PVT__req_is_read_u_ph4 = (7U == (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_makeread_u_ph4 = (0x41U 
                                              == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_read_pu_ph4 = (0x4cU == 
                                           (0x7fU & 
                                            VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_clean_s_ph4 = (8U == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wr_uniq_ph4 = (((((0x18U 
                                               == (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7))) 
                                              | (0x19U 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)))) 
                                             | (0x43U 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)))) 
                                            | (0x64U 
                                               == (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)))) 
                                           | (0x54U 
                                              == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7))));
    vlSelfRef.__PVT__req_is_wrbackfl_clean_i_ph4 = 
        (0x59U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wrbackfl_clean_s_ph4 = 
        (0x58U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wrcleanfl_clean_s_ph4 = 
        (0x5cU == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__snpattr_req_ph4 = (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x89U));
    vlSelfRef.__PVT__req_is_read_o_ph4 = (3U == (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_read_c_ph4 = (2U == (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_clean_u_ph4 = (0xbU == 
                                           (0x7fU & 
                                            VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_clean_i_ph4 = (9U == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_make_u_ph4 = (0xcU == (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_make_i_ph4 = (0xaU == (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_read_notsd_ph4 = (0x26U 
                                              == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_read_s_ph4 = (1U == (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph4_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__outstand_atmo = ((IData)(vlSelfRef.__PVT__outstand_atmo_rd) 
                                      | (IData)(vlSelfRef.__PVT__outstand_atmo_wr));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_clr_no_atom_outstand, 
                    (((IData)(vlSelfRef.__PVT__en_clr_atom_rd_collnreg) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U))) 
                     & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 0U) 
                        & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_clr_no_atom_outstand, 
                    (((IData)(vlSelfRef.__PVT__en_clr_atom_rd_collnreg) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 1U))) 
                     & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 1U) 
                        & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_clr_no_atom_outstand, 
                    (((IData)(vlSelfRef.__PVT__en_clr_atom_rd_collnreg) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 2U))) 
                     & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 2U) 
                        & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_clr_no_atom_outstand, 
                    (((IData)(vlSelfRef.__PVT__en_clr_atom_rd_collnreg) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 3U))) 
                     & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 3U) 
                        & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_clr_no_atom_outstand, 
                    (((IData)(vlSelfRef.__PVT__en_clr_atom_rd_collnreg) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 4U))) 
                     & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 4U) 
                        & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_clr_no_atom_outstand, 
                    (((IData)(vlSelfRef.__PVT__en_clr_atom_rd_collnreg) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 5U))) 
                     & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 5U) 
                        & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_clr_no_atom_outstand, 
                    (((IData)(vlSelfRef.__PVT__en_clr_atom_rd_collnreg) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 6U))) 
                     & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 6U) 
                        & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_clr_no_atom_outstand, 
                    (((IData)(vlSelfRef.__PVT__en_clr_atom_rd_collnreg) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 7U))) 
                     & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 7U) 
                        & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd)))));
    vlSelfRef.__PVT__winner_timeout_index = 0U;
    vlSelfRef.__PVT__winner_timeout_index = ((0U == 
                                              (0xffffU 
                                               & VL_SEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0U, 16)))
                                              ? (IData)(vlSelfRef.__PVT__winner_timeout_index_B2)
                                              : ((0U 
                                                  == 
                                                  (0xffU 
                                                   & VL_SEL_IIII(32, vlSelfRef.__PVT__cmd_timeout_flag, 0U, 8)))
                                                  ? (IData)(vlSelfRef.__PVT__winner_timeout_index_B1)
                                                  : (IData)(vlSelfRef.__PVT__winner_timeout_index_B0)));
    vlSelfRef.__PVT__fifofull_reqcmdq = vlSelfRef.__PVT__full_reqcmdq;
    vlSelfRef.__PVT__cmd_ph3_dat_resperr = (3U & VL_SEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x35U, 2));
    vlSelfRef.__PVT__cmd_ph3_dat_opcode = (0xfU & VL_SEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x31U, 4));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_clr_addr_match, 
                    (((IData)(vlSelfRef.__PVT__en_clr_collnreg) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__addr_clln_clearing, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 6U, 46)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_clr_addr_match, 
                    (((IData)(vlSelfRef.__PVT__en_clr_collnreg) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 1U))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__addr_clln_clearing, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x3aU, 46)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_clr_addr_match, 
                    (((IData)(vlSelfRef.__PVT__en_clr_collnreg) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 2U))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__addr_clln_clearing, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x6eU, 46)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_clr_addr_match, 
                    (((IData)(vlSelfRef.__PVT__en_clr_collnreg) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 3U))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__addr_clln_clearing, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0xa2U, 46)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_clr_addr_match, 
                    (((IData)(vlSelfRef.__PVT__en_clr_collnreg) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 4U))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__addr_clln_clearing, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0xd6U, 46)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_clr_addr_match, 
                    (((IData)(vlSelfRef.__PVT__en_clr_collnreg) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 5U))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__addr_clln_clearing, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x10aU, 46)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_clr_addr_match, 
                    (((IData)(vlSelfRef.__PVT__en_clr_collnreg) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 6U))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__addr_clln_clearing, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x13eU, 46)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_clr_addr_match, 
                    (((IData)(vlSelfRef.__PVT__en_clr_collnreg) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 7U))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__addr_clln_clearing, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x172U, 46)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_match_check_for_inpendingq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U)) 
                     & (VL_CONCAT_QQI(46,36,10, vlSelfRef.__PVT__cache_tag_wr, (IData)(vlSelfRef.__PVT__cache_index_wr)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 6U, 46)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_match_check_for_inpendingq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 1U)) 
                     & (VL_CONCAT_QQI(46,36,10, vlSelfRef.__PVT__cache_tag_wr, (IData)(vlSelfRef.__PVT__cache_index_wr)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x3aU, 46)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_match_check_for_inpendingq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 2U)) 
                     & (VL_CONCAT_QQI(46,36,10, vlSelfRef.__PVT__cache_tag_wr, (IData)(vlSelfRef.__PVT__cache_index_wr)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x6eU, 46)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_match_check_for_inpendingq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 3U)) 
                     & (VL_CONCAT_QQI(46,36,10, vlSelfRef.__PVT__cache_tag_wr, (IData)(vlSelfRef.__PVT__cache_index_wr)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0xa2U, 46)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_match_check_for_inpendingq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 4U)) 
                     & (VL_CONCAT_QQI(46,36,10, vlSelfRef.__PVT__cache_tag_wr, (IData)(vlSelfRef.__PVT__cache_index_wr)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0xd6U, 46)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_match_check_for_inpendingq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 5U)) 
                     & (VL_CONCAT_QQI(46,36,10, vlSelfRef.__PVT__cache_tag_wr, (IData)(vlSelfRef.__PVT__cache_index_wr)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x10aU, 46)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_match_check_for_inpendingq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 6U)) 
                     & (VL_CONCAT_QQI(46,36,10, vlSelfRef.__PVT__cache_tag_wr, (IData)(vlSelfRef.__PVT__cache_index_wr)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x13eU, 46)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_match_check_for_inpendingq, 
                    ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 7U)) 
                     & (VL_CONCAT_QQI(46,36,10, vlSelfRef.__PVT__cache_tag_wr, (IData)(vlSelfRef.__PVT__cache_index_wr)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(416, vlSelfRef.__PVT__colln_cmd_field_addr, 0x172U, 46)))));
    vlSelfRef.__PVT__cmd_ph3_rsp_dbid = (0xfffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x36U, 12));
    vlSelfRef.__PVT__o_rcv_rsp_dat_srcid = (0x7ffU 
                                            & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11));
    vlSelfRef.__PVT__opcode_compack_resp_ph3 = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp)) 
                                                & (2U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5))));
    vlSelfRef.__PVT__cmdq_src0_CompCMO_ph3 = ((0U == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp)) 
                                              & (0x14U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5))));
    vlSelfRef.__PVT__opcode_readreceipt_ph3 = (((0U 
                                                 == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp)) 
                                                & (8U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5)))) 
                                               & (~ 
                                                  VL_BITSEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x21U)));
    vlSelfRef.__PVT__cmdq_src0_Comp_ph3 = ((0U == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp)) 
                                           & (4U == 
                                              (0x1fU 
                                               & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5))));
    vlSelfRef.__PVT__cmdq_src0_SnpRespFwd_ph3 = ((IData)(vlSelfRef.__PVT__cmdq_src0_ph3) 
                                                 & (9U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5))));
    vlSelfRef.__PVT__cmdq_src0_DBIDResp_ph3 = ((0U 
                                                == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp)) 
                                               & (6U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5))));
    vlSelfRef.__PVT__cmdq_src0_CompAckResp_ph3 = ((0U 
                                                   == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp)) 
                                                  & (2U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5))));
    vlSelfRef.__PVT__cmdq_src0_SnpResp_ph3 = ((IData)(vlSelfRef.__PVT__cmdq_src0_ph3) 
                                              & (1U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5))));
    vlSelfRef.__PVT__cmdq_src0_CompDBIDResp_ph3 = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp)) 
                                                   & (5U 
                                                      == 
                                                      (0x1fU 
                                                       & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5))));
    vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3 = ((0U 
                                                == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp)) 
                                               & (3U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5))));
    vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3 = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp)) 
                                                & (7U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x26U, 5))));
    vlSelfRef.__PVT__snpattr_req_ph2 = (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x89U));
    vlSelfRef.__PVT__cmd_addr_ph2 = (0xfffffffffffffULL 
                                     & VL_SEL_QWII(151, vlSelfRef.__PVT__cmd_ph2_req_s, 0x48U, 52));
    vlSelfRef.__PVT__req_src_pid_ph3 = (7U & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 3));
    vlSelfRef.__PVT__req_is_excl_ld_ph3 = (VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x92U) 
                                           & (((((4U 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7))) 
                                                 | (2U 
                                                    == 
                                                    (0x7fU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))) 
                                                | (1U 
                                                   == 
                                                   (0x7fU 
                                                    & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))) 
                                               | (0x26U 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))) 
                                              | (0x4cU 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))));
    vlSelfRef.__PVT__req_is_excl_str_nsnp_ph3 = (VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x92U) 
                                                 & ((0x1dU 
                                                     == 
                                                     (0x7fU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7))) 
                                                    | (0x1cU 
                                                       == 
                                                       (0x7fU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))));
    vlSelfRef.__PVT__req_is_excl_str_snp_ph3 = (VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x92U) 
                                                & ((0xbU 
                                                    == 
                                                    (0x7fU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7))) 
                                                   | (0x41U 
                                                      == 
                                                      (0x7fU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))));
    vlSelfRef.__PVT__req_is_wrbackptl_ph3 = (0x1aU 
                                             == (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_atom_ph3 = ((((((((((((
                                                   ((((((0x28U 
                                                         == 
                                                         (0x7fU 
                                                          & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7))) 
                                                        | (0x29U 
                                                           == 
                                                           (0x7fU 
                                                            & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))) 
                                                       | (0x2aU 
                                                          == 
                                                          (0x7fU 
                                                           & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))) 
                                                      | (0x2bU 
                                                         == 
                                                         (0x7fU 
                                                          & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))) 
                                                     | (0x2cU 
                                                        == 
                                                        (0x7fU 
                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))) 
                                                    | (0x2dU 
                                                       == 
                                                       (0x7fU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))) 
                                                   | (0x2eU 
                                                      == 
                                                      (0x7fU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))) 
                                                  | (0x2fU 
                                                     == 
                                                     (0x7fU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))) 
                                                 | (0x30U 
                                                    == 
                                                    (0x7fU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))) 
                                                | (0x31U 
                                                   == 
                                                   (0x7fU 
                                                    & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))) 
                                               | (0x32U 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))) 
                                              | (0x33U 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))) 
                                             | (0x34U 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))) 
                                            | (0x35U 
                                               == (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))) 
                                           | (0x36U 
                                              == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))) 
                                          | (0x37U 
                                             == (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))) 
                                         | (0x38U == 
                                            (0x7fU 
                                             & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)))) 
                                        | (0x39U == 
                                           (0x7fU & 
                                            VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7))));
    vlSelfRef.__PVT__req_is_wruniquefl_ph3 = (0x19U 
                                              == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wruniquezero_ph3 = (0x43U 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wruniqueptl_ph3 = (0x18U 
                                               == (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_rdnosnp_ph3 = (4U == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wruniqueptl_clean_s_ph3 
        = (0x64U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wrbackfl_clean_i_ph3 = 
        (0x59U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wruniquefl_clean_s_ph3 
        = (0x54U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wrbackfl_clean_s_ph3 = 
        (0x58U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wrcleanfl_clean_s_ph3 = 
        (0x5cU == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wrnosnpfl_clean_i_ph3 = 
        (0x51U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wrnosnpptl_clean_i_ph3 
        = (0x61U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wrnosnpptl_clean_s_ph3 
        = (0x60U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wrnosnpfl_clean_s_ph3 = 
        (0x50U == (0x7fU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_read_o_ph3 = (3U == (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_read_c_ph3 = (2U == (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_read_s_ph3 = (1U == (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_read_notsd_ph3 = (0x26U 
                                              == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_evict_ph3 = (0xdU == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_make_u_ph3 = (0xcU == (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_read_u_ph3 = (7U == (0x7fU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_read_pu_ph3 = (0x4cU == 
                                           (0x7fU & 
                                            VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_clean_u_ph3 = (0xbU == 
                                           (0x7fU & 
                                            VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_makeread_u_ph3 = (0x41U 
                                              == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_make_i_ph3 = (0xaU == (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_clean_i_ph3 = (9U == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_clean_s_ph3 = (8U == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wrnosnpzero_ph3 = (0x44U 
                                               == (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wrnosnpfull_ph3 = (0x1dU 
                                               == (0x7fU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    vlSelfRef.__PVT__req_is_wrnosnpptl_ph3 = (0x1cU 
                                              == (0x7fU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x3eU, 7)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x17U)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xcU, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 1U)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2fU)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x18U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x24U, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 2U)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x47U)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x30U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x3cU, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 3U)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x5fU)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x48U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x54U, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 4U)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x77U)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x60U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x6cU, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 5U)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x8fU)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x78U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x84U, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 6U)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xa7U)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x90U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x9cU, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 7U)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xbfU)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xa8U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xb4U, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 8U)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xd7U)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xc0U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xccU, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 9U)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xefU)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xd8U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xe4U, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xaU)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x107U)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xf0U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xfcU, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xbU)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x11fU)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x108U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x114U, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xcU)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x137U)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x120U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x12cU, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xdU)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x14fU)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x138U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x144U, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xeU)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x167U)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x150U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x15cU, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xfU)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x17fU)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x168U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x174U, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x10U)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x197U)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x180U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x18cU, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x11U)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1afU)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x198U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1a4U, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x12U)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1c7U)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1b0U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1bcU, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x13U)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1dfU)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1c8U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1d4U, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x14U)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1f7U)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1e0U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1ecU, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x15U)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x20fU)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1f8U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x204U, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x16U)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x227U)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x210U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x21cU, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x17U)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x23fU)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x228U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x234U, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x18U)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x257U)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x240U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x24cU, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x19U)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x26fU)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x258U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x264U, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1aU)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x287U)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x270U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x27cU, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1bU)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x29fU)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x288U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x294U, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1cU)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2b7U)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2a0U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2acU, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1dU)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2cfU)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2b8U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2c4U, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1eU)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2e7U)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2d0U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2dcU, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__colln_atom_detected_outstq, 
                    ((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1fU)) 
                       & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3)) 
                      & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2ffU)) 
                     & (~ (((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2e8U, 12)) 
                            == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12))) 
                           & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2f4U, 11)) 
                              == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_atom_rd_detected_atom_wr_ph3, 
                    (((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 0U)) 
                      & ((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)) 
                         == (0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)))) 
                     & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)) 
                        == (0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_atom_rd_detected_atom_wr_ph3, 
                    (((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 1U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 1U)) 
                      & ((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)) 
                         == (0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)))) 
                     & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)) 
                        == (0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_atom_rd_detected_atom_wr_ph3, 
                    (((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 2U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 2U)) 
                      & ((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)) 
                         == (0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)))) 
                     & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)) 
                        == (0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_atom_rd_detected_atom_wr_ph3, 
                    (((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 3U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 3U)) 
                      & ((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)) 
                         == (0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x60U, 11)))) 
                     & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)) 
                        == (0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x54U, 12)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_atom_rd_detected_atom_wr_ph3, 
                    (((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 4U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 4U)) 
                      & ((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)) 
                         == (0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x7cU, 11)))) 
                     & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)) 
                        == (0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x70U, 12)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_atom_rd_detected_atom_wr_ph3, 
                    (((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 5U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 5U)) 
                      & ((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)) 
                         == (0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x98U, 11)))) 
                     & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)) 
                        == (0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x8cU, 12)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_atom_rd_detected_atom_wr_ph3, 
                    (((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 6U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 6U)) 
                      & ((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)) 
                         == (0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xb4U, 11)))) 
                     & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)) 
                        == (0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa8U, 12)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_atom_rd_detected_atom_wr_ph3, 
                    (((((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 7U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)) 
                       & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 7U)) 
                      & ((0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)) 
                         == (0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xd0U, 11)))) 
                     & ((0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)) 
                        == (0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xc4U, 12)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0U)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xcU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 1U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 1U)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x18U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x24U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 2U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 2U)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x30U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x3cU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 3U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 3U)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x48U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x54U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 4U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 4U)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x60U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x6cU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 5U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 5U)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x78U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x84U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 6U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 6U)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x90U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x9cU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 7U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 7U)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xa8U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xb4U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 8U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 8U)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xc0U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xccU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 9U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 9U)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xd8U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xe4U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xaU)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xaU)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xf0U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xfcU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xbU)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xbU)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x108U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x114U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xcU)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xcU)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x120U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x12cU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xdU)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xdU)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x138U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x144U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xeU)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xeU)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x150U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x15cU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xfU)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0xfU)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x168U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x174U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x10U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x10U)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x180U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x18cU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x11U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x11U)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x198U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1a4U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x12U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x12U)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1b0U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1bcU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x13U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x13U)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1c8U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1d4U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x14U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x14U)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1e0U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1ecU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x15U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x15U)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1f8U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x204U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x16U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x16U)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x210U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x21cU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x17U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x17U)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x228U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x234U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x18U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x18U)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x240U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x24cU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x19U)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x19U)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x258U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x264U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1aU)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1aU)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x270U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x27cU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1bU)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1bU)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x288U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x294U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1cU)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1cU)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2a0U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2acU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1dU)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1dU)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2b8U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2c4U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1eU)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1eU)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2d0U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2dcU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3, 
                    (((((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1fU)) 
                        & (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)) 
                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_req_atmo_rd, 0x1fU)) 
                      & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2e8U, 12)) 
                         == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                     & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2f4U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))));
    vlSelfRef.__PVT__cmd_addr_ph3 = (0xfffffffffffffULL 
                                     & VL_SEL_QWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x48U, 52));
    vlSelfRef.__PVT__cmdq_snpresp_or_dataresp_ph4 = 
        ((IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph4) 
         | (IData)(vlSelfRef.__PVT__cmdq_srcdata_ph4));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_rsp.__PVT__share_vec 
        = vlSelfRef.__Vcellinp__sig_countones_post_rsp__share_vec;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__sig_countones_post_req.__PVT__share_vec 
        = vlSelfRef.__Vcellinp__sig_countones_post_req__share_vec;
    vlSelfRef.__PVT__req_is_clean_ui_ph4 = ((IData)(vlSelfRef.__PVT__req_is_clean_u_ph4) 
                                            | (IData)(vlSelfRef.__PVT__req_is_clean_i_ph4));
    vlSelfRef.__PVT__req_is_make_ui_ph4 = ((IData)(vlSelfRef.__PVT__req_is_make_u_ph4) 
                                           | (IData)(vlSelfRef.__PVT__req_is_make_i_ph4));
    vlSelfRef.__PVT__req_is_read_s_notsd_ph4 = ((IData)(vlSelfRef.__PVT__req_is_read_s_ph4) 
                                                | (IData)(vlSelfRef.__PVT__req_is_read_notsd_ph4));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__set_colln_rdy, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U)) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc), 0U))) 
                     & (((0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0U, 3))) 
                         & ((~ VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                            | ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 0U) 
                                  & (~ (IData)(vlSelfRef.__PVT__atom_block_rd))) 
                                 & (~ (IData)(vlSelfRef.__PVT__outstand_atmo))) 
                                & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0U, 3)))) 
                               & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd_alloc_then_wr_clr))))) 
                        | ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 0U) 
                              & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_wr))) 
                             & (IData)(vlSelfRef.__PVT__outstand_atmo_rd)) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                               == (IData)(vlSelfRef.__PVT__outstand_atom_rd_txnid))) 
                           & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                              == (IData)(vlSelfRef.__PVT__outstand_atom_rd_srcid))))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__set_colln_rdy, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 1U)) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc), 1U))) 
                     & (((0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 3U, 3))) 
                         & ((~ VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                            | ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 1U) 
                                  & (~ (IData)(vlSelfRef.__PVT__atom_block_rd))) 
                                 & (~ (IData)(vlSelfRef.__PVT__outstand_atmo))) 
                                & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 3U, 3)))) 
                               & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd_alloc_then_wr_clr))))) 
                        | ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 1U) 
                              & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_wr))) 
                             & (IData)(vlSelfRef.__PVT__outstand_atmo_rd)) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                               == (IData)(vlSelfRef.__PVT__outstand_atom_rd_txnid))) 
                           & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                              == (IData)(vlSelfRef.__PVT__outstand_atom_rd_srcid))))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__set_colln_rdy, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 2U)) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc), 2U))) 
                     & (((0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 6U, 3))) 
                         & ((~ VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                            | ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 2U) 
                                  & (~ (IData)(vlSelfRef.__PVT__atom_block_rd))) 
                                 & (~ (IData)(vlSelfRef.__PVT__outstand_atmo))) 
                                & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 6U, 3)))) 
                               & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd_alloc_then_wr_clr))))) 
                        | ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 2U) 
                              & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_wr))) 
                             & (IData)(vlSelfRef.__PVT__outstand_atmo_rd)) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                               == (IData)(vlSelfRef.__PVT__outstand_atom_rd_txnid))) 
                           & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                              == (IData)(vlSelfRef.__PVT__outstand_atom_rd_srcid))))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__set_colln_rdy, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 3U)) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc), 3U))) 
                     & (((0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 9U, 3))) 
                         & ((~ VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x6bU)) 
                            | ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 3U) 
                                  & (~ (IData)(vlSelfRef.__PVT__atom_block_rd))) 
                                 & (~ (IData)(vlSelfRef.__PVT__outstand_atmo))) 
                                & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 9U, 3)))) 
                               & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd_alloc_then_wr_clr))))) 
                        | ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 3U) 
                              & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_wr))) 
                             & (IData)(vlSelfRef.__PVT__outstand_atmo_rd)) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x54U, 12)) 
                               == (IData)(vlSelfRef.__PVT__outstand_atom_rd_txnid))) 
                           & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x60U, 11)) 
                              == (IData)(vlSelfRef.__PVT__outstand_atom_rd_srcid))))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__set_colln_rdy, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 4U)) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc), 4U))) 
                     & (((0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xcU, 3))) 
                         & ((~ VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x87U)) 
                            | ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 4U) 
                                  & (~ (IData)(vlSelfRef.__PVT__atom_block_rd))) 
                                 & (~ (IData)(vlSelfRef.__PVT__outstand_atmo))) 
                                & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0xcU, 3)))) 
                               & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd_alloc_then_wr_clr))))) 
                        | ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 4U) 
                              & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_wr))) 
                             & (IData)(vlSelfRef.__PVT__outstand_atmo_rd)) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x70U, 12)) 
                               == (IData)(vlSelfRef.__PVT__outstand_atom_rd_txnid))) 
                           & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x7cU, 11)) 
                              == (IData)(vlSelfRef.__PVT__outstand_atom_rd_srcid))))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__set_colln_rdy, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 5U)) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc), 5U))) 
                     & (((0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xfU, 3))) 
                         & ((~ VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa3U)) 
                            | ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 5U) 
                                  & (~ (IData)(vlSelfRef.__PVT__atom_block_rd))) 
                                 & (~ (IData)(vlSelfRef.__PVT__outstand_atmo))) 
                                & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0xfU, 3)))) 
                               & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd_alloc_then_wr_clr))))) 
                        | ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 5U) 
                              & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_wr))) 
                             & (IData)(vlSelfRef.__PVT__outstand_atmo_rd)) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x8cU, 12)) 
                               == (IData)(vlSelfRef.__PVT__outstand_atom_rd_txnid))) 
                           & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x98U, 11)) 
                              == (IData)(vlSelfRef.__PVT__outstand_atom_rd_srcid))))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__set_colln_rdy, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 6U)) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc), 6U))) 
                     & (((0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x12U, 3))) 
                         & ((~ VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xbfU)) 
                            | ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 6U) 
                                  & (~ (IData)(vlSelfRef.__PVT__atom_block_rd))) 
                                 & (~ (IData)(vlSelfRef.__PVT__outstand_atmo))) 
                                & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0x12U, 3)))) 
                               & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd_alloc_then_wr_clr))))) 
                        | ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 6U) 
                              & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_wr))) 
                             & (IData)(vlSelfRef.__PVT__outstand_atmo_rd)) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa8U, 12)) 
                               == (IData)(vlSelfRef.__PVT__outstand_atom_rd_txnid))) 
                           & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xb4U, 11)) 
                              == (IData)(vlSelfRef.__PVT__outstand_atom_rd_srcid))))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__set_colln_rdy, 
                    (((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 7U)) 
                      & (~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc), 7U))) 
                     & (((0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x15U, 3))) 
                         & ((~ VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xdbU)) 
                            | ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 7U) 
                                  & (~ (IData)(vlSelfRef.__PVT__atom_block_rd))) 
                                 & (~ (IData)(vlSelfRef.__PVT__outstand_atmo))) 
                                & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0x15U, 3)))) 
                               & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_rd_alloc_then_wr_clr))))) 
                        | ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 7U) 
                              & (~ (IData)(vlSelfRef.__PVT__outstand_atmo_wr))) 
                             & (IData)(vlSelfRef.__PVT__outstand_atmo_rd)) 
                            & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xc4U, 12)) 
                               == (IData)(vlSelfRef.__PVT__outstand_atom_rd_txnid))) 
                           & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xd0U, 11)) 
                              == (IData)(vlSelfRef.__PVT__outstand_atom_rd_srcid))))));
    vlSelfRef.__PVT__colln_newentry_atom_clr_atom = 
        (((IData)(vlSelfRef.__PVT__en_clr_collnreg) 
          & (~ (IData)(vlSelfRef.__PVT__outstand_atmo))) 
         & (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3));
    VL_ASSIGNSEL_II(8,2,0U, vlSelfRef.__PVT__decrement_seq_num_atom, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_no_atom_outstand), 1U) 
                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 1U))), 
                                  (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_no_atom_outstand), 0U) 
                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 0U)))));
    VL_ASSIGNSEL_II(8,2,2U, vlSelfRef.__PVT__decrement_seq_num_atom, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_no_atom_outstand), 3U) 
                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 3U))), 
                                  (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_no_atom_outstand), 2U) 
                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 2U)))));
    VL_ASSIGNSEL_II(8,2,4U, vlSelfRef.__PVT__decrement_seq_num_atom, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_no_atom_outstand), 5U) 
                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 5U))), 
                                  (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_no_atom_outstand), 4U) 
                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 4U)))));
    VL_ASSIGNSEL_II(8,2,6U, vlSelfRef.__PVT__decrement_seq_num_atom, 
                    VL_CONCAT_III(2,1,1, (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_no_atom_outstand), 7U) 
                                                & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 7U))), 
                                  (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_clr_no_atom_outstand), 6U) 
                                         & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 6U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (1U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (2U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (3U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (4U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (5U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (6U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (7U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (8U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (9U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0xaU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0xbU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0xcU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0xdU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0xeU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0xfU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0x10U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0x11U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0x12U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0x13U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0x14U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0x15U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0x16U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0x17U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0x18U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0x19U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0x1aU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0x1bU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0x1cU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0x1dU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0x1eU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__service_timeout_flag, 
                    ((IData)(vlSelfRef.__PVT__service_timeout) 
                     & (0x1fU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__winner_timeout_index), 0U, 5)))));
    vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA 
        = (2U == (IData)(vlSelfRef.__PVT__cmd_ph3_dat_opcode));
    vlSelfRef.__PVT__opcode_snprespdata_ph3 = ((2U 
                                                == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp)) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.__PVT__cmd_ph3_dat_opcode)));
    vlSelfRef.__PVT__opcode_snprespdatafwd_ph3 = ((2U 
                                                   == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp)) 
                                                  & (6U 
                                                     == (IData)(vlSelfRef.__PVT__cmd_ph3_dat_opcode)));
    vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL 
        = (7U == (IData)(vlSelfRef.__PVT__cmd_ph3_dat_opcode));
    vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP 
        = (0xcU == (IData)(vlSelfRef.__PVT__cmd_ph3_dat_opcode));
    vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA 
        = (3U == (IData)(vlSelfRef.__PVT__cmd_ph3_dat_opcode));
    vlSelfRef.__PVT__opcode_snprespptldata_ph3 = ((2U 
                                                   == (IData)(vlSelfRef.__PVT__cmdq_src_ph3_rsp)) 
                                                  & (5U 
                                                     == (IData)(vlSelfRef.__PVT__cmd_ph3_dat_opcode)));
    vlSelfRef.__PVT__cmdq_src0snpresp_or_src2_ph3 = 
        (((IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph3) 
          | (IData)(vlSelfRef.__PVT__cmdq_src0_SnpRespFwd_ph3)) 
         | (IData)(vlSelfRef.__PVT__cmdq_src2_ph3));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xbU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xfU)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x10U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1bU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1fU)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x20U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x2bU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x2fU)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x30U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x3bU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x3fU)));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x40U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x4bU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x4fU)));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x50U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x5bU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x5fU)));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x60U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x6bU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x6fU)));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x70U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x7bU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x7fU)));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x80U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x8bU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x8fU)));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x90U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x9bU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x9fU)));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xa0U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xabU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xafU)));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xb0U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xbbU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xbfU)));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xc0U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xcbU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xcfU)));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xd0U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xdbU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xdfU)));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xe0U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xebU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xefU)));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xf0U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xfbU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xffU)));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x100U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x10bU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x10fU)));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x110U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x11bU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x11fU)));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x120U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x12bU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x12fU)));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x130U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x13bU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x13fU)));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x140U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x14bU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x14fU)));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x150U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x15bU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x15fU)));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x160U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x16bU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x16fU)));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x170U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x17bU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x17fU)));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x180U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x18bU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x18fU)));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x190U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x19bU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x19fU)));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1a0U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1abU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1afU)));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1b0U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1bbU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1bfU)));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1c0U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1cbU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1cfU)));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1d0U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1dbU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1dfU)));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1e0U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1ebU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1efU)));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__itis_req_retry_2nd_retryack, 
                    ((((((0x7ffU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1f0U, 11)) 
                         == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11))) 
                        & ((0xfU & VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1fbU, 4)) 
                           == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                       & (IData)(vlSelfRef.__PVT__cmdq_src0_RetryAck_ph3)) 
                      & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                     & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1ffU)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x5bU, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x5aU)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x22U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xe3U, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xe2U)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x8eU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x16bU, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x16aU)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0xfaU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x1f3U, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x1f2U)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x166U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x27bU, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x27aU)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x1d2U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x303U, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x302U)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x23eU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x38bU, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x38aU)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x2aaU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x413U, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x412U)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x316U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x49bU, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x49aU)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x382U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x523U, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x522U)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x3eeU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x5abU, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x5aaU)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x45aU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x633U, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x632U)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x4c6U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x6bbU, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x6baU)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x532U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x743U, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x742U)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x59eU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x7cbU, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x7caU)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x60aU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x853U, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x852U)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x676U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x8dbU, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x8daU)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x6e2U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x963U, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x962U)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x74eU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x9ebU, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x9eaU)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x7baU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xa73U, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xa72U)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x826U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xafbU, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xafaU)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x892U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xb83U, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xb82U)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x8feU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xc0bU, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xc0aU)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x96aU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xc93U, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xc92U)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0x9d6U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xd1bU, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xd1aU)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0xa42U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xda3U, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xda2U)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0xaaeU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xe2bU, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xe2aU)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0xb1aU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xeb3U, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xeb2U)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0xb86U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xf3bU, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xf3aU)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0xbf2U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xfc3U, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0xfc2U)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0xc5eU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x104bU, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x104aU)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0xccaU, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 
                    (((((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                        & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
                       & ((0xfU & VL_SEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x10d3U, 4)) 
                          == (0xfU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)))) 
                      & VL_BITSEL_IWII(4352, vlSelfRef.__PVT__status_field_common, 0x10d2U)) 
                     & ((0x7ffU & VL_SEL_IWII(3456, vlSelfRef.__PVT__status_field_req, 0xd36U, 11)) 
                        == (0x7ffU & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)))));
    vlSelfRef.__PVT__rden_dircache_ph2 = ((((IData)(vlSelfRef.__PVT__cmdvalid_ph2_req) 
                                            & (IData)(vlSelfRef.__PVT__snpattr_req_ph2)) 
                                           & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph2))) 
                                          & (((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph2) 
                                              | ((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph2) 
                                                 & (~ (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph2)))) 
                                             | (IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph2)));
    vlSelfRef.__PVT__cache_tag_rd_ph2 = (0xfffffffffULL 
                                         & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 0x10U, 36));
    vlSelfRef.__PVT__cache_index_rd_ph2 = (0x3ffU & 
                                           VL_SEL_IQII(52, vlSelfRef.__PVT__cmd_addr_ph2, 6U, 10));
    vlSelfRef.__PVT__req_is_wrunique_ph3 = (((IData)(vlSelfRef.__PVT__req_is_wruniqueptl_ph3) 
                                             | (IData)(vlSelfRef.__PVT__req_is_wruniquezero_ph3)) 
                                            | (IData)(vlSelfRef.__PVT__req_is_wruniquefl_ph3));
    vlSelfRef.__PVT__req_is_writefull_clean_i_ph3 = 
        ((IData)(vlSelfRef.__PVT__req_is_wrnosnpfl_clean_i_ph3) 
         | (IData)(vlSelfRef.__PVT__req_is_wrbackfl_clean_i_ph3));
    vlSelfRef.__PVT__req_is_writenosnpptl_clean_si_ph3 
        = ((IData)(vlSelfRef.__PVT__req_is_wrnosnpptl_clean_i_ph3) 
           | (IData)(vlSelfRef.__PVT__req_is_wrnosnpptl_clean_s_ph3));
    vlSelfRef.__PVT__req_is_writefull_clean_s_ph3 = 
        ((((IData)(vlSelfRef.__PVT__req_is_wrnosnpfl_clean_s_ph3) 
           | (IData)(vlSelfRef.__PVT__req_is_wruniquefl_clean_s_ph3)) 
          | (IData)(vlSelfRef.__PVT__req_is_wrbackfl_clean_s_ph3)) 
         | (IData)(vlSelfRef.__PVT__req_is_wrcleanfl_clean_s_ph3));
    vlSelfRef.__PVT__req_is_writenosnp_clean_si_ph3 
        = ((((IData)(vlSelfRef.__PVT__req_is_wrnosnpfl_clean_i_ph3) 
             | (IData)(vlSelfRef.__PVT__req_is_wrnosnpfl_clean_s_ph3)) 
            | (IData)(vlSelfRef.__PVT__req_is_wrnosnpptl_clean_i_ph3)) 
           | (IData)(vlSelfRef.__PVT__req_is_wrnosnpptl_clean_s_ph3));
    vlSelfRef.__PVT__req_is_writecmo_ph3 = (((((((((IData)(vlSelfRef.__PVT__req_is_wrnosnpfl_clean_i_ph3) 
                                                   | (IData)(vlSelfRef.__PVT__req_is_wrnosnpfl_clean_s_ph3)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_wrnosnpptl_clean_i_ph3)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_wrnosnpptl_clean_s_ph3)) 
                                                | (IData)(vlSelfRef.__PVT__req_is_wruniquefl_clean_s_ph3)) 
                                               | (IData)(vlSelfRef.__PVT__req_is_wruniqueptl_clean_s_ph3)) 
                                              | (IData)(vlSelfRef.__PVT__req_is_wrbackfl_clean_i_ph3)) 
                                             | (IData)(vlSelfRef.__PVT__req_is_wrbackfl_clean_s_ph3)) 
                                            | (IData)(vlSelfRef.__PVT__req_is_wrcleanfl_clean_s_ph3));
    vlSelfRef.__PVT__req_read_oc_ph3 = ((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                        | (IData)(vlSelfRef.__PVT__req_is_read_c_ph3));
    vlSelfRef.__PVT__req_is_read_ocs_ph3 = (((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                             | (IData)(vlSelfRef.__PVT__req_is_read_c_ph3)) 
                                            | (IData)(vlSelfRef.__PVT__req_is_read_s_ph3));
    vlSelfRef.__PVT__read_req_requires_non_inv_snoop_ph3 
        = ((((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
             | (IData)(vlSelfRef.__PVT__req_is_read_c_ph3)) 
            | (IData)(vlSelfRef.__PVT__req_is_read_s_ph3)) 
           | (IData)(vlSelfRef.__PVT__req_is_read_notsd_ph3));
    vlSelfRef.__PVT__req_is_read_cs_notsd_ph3 = (((IData)(vlSelfRef.__PVT__req_is_read_c_ph3) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_read_s_ph3)) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_read_notsd_ph3));
    vlSelfRef.__PVT__req_is_read_su_notsd_pu_ph3 = 
        ((((IData)(vlSelfRef.__PVT__req_is_read_s_ph3) 
           | (IData)(vlSelfRef.__PVT__req_is_read_u_ph3)) 
          | (IData)(vlSelfRef.__PVT__req_is_read_notsd_ph3)) 
         | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3));
    vlSelfRef.__PVT__req_is_read_csu_notsd_pu_ph3 = 
        (((((IData)(vlSelfRef.__PVT__req_is_read_c_ph3) 
            | (IData)(vlSelfRef.__PVT__req_is_read_s_ph3)) 
           | (IData)(vlSelfRef.__PVT__req_is_read_u_ph3)) 
          | (IData)(vlSelfRef.__PVT__req_is_read_notsd_ph3)) 
         | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3));
    vlSelfRef.__PVT__req_is_anydct_ph3 = (((((((IData)(vlSelfRef.__PVT__req_is_read_o_ph3) 
                                               | (IData)(vlSelfRef.__PVT__req_is_read_c_ph3)) 
                                              | (IData)(vlSelfRef.__PVT__req_is_read_s_ph3)) 
                                             | (IData)(vlSelfRef.__PVT__req_is_read_u_ph3)) 
                                            | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                           | (IData)(vlSelfRef.__PVT__req_is_read_notsd_ph3)) 
                                          | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3));
    vlSelfRef.__PVT__req_is_read_ph3 = ((((((((IData)(vlSelfRef.__PVT__req_is_rdnosnp_ph3) 
                                              | (IData)(vlSelfRef.__PVT__req_is_read_o_ph3)) 
                                             | (IData)(vlSelfRef.__PVT__req_is_read_c_ph3)) 
                                            | (IData)(vlSelfRef.__PVT__req_is_read_s_ph3)) 
                                           | (IData)(vlSelfRef.__PVT__req_is_read_u_ph3)) 
                                          | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3)) 
                                         | (IData)(vlSelfRef.__PVT__req_is_read_notsd_ph3)) 
                                        | (IData)(vlSelfRef.__PVT__req_is_makeread_u_ph3));
    vlSelfRef.__PVT__req_is_clean_si_ph3 = ((IData)(vlSelfRef.__PVT__req_is_clean_s_ph3) 
                                            | (IData)(vlSelfRef.__PVT__req_is_clean_i_ph3));
    vlSelfRef.__PVT__colln_atom_detected_in_outstq 
        = VL_REDOR_I(vlSelfRef.__PVT__colln_atom_detected_outstq);
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_detected_collnq, 
                    (1U & ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_ph3), 0U) 
                            & (~ VL_REDOR_I(vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3))) 
                           & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__colln_atom_rd_detected_atom_wr_ph3))))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_detected_collnq, 
                    (1U & ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_ph3), 1U) 
                            & (~ VL_REDOR_I(vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3))) 
                           & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__colln_atom_rd_detected_atom_wr_ph3))))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_detected_collnq, 
                    (1U & ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_ph3), 2U) 
                            & (~ VL_REDOR_I(vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3))) 
                           & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__colln_atom_rd_detected_atom_wr_ph3))))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_detected_collnq, 
                    (1U & ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_ph3), 3U) 
                            & (~ VL_REDOR_I(vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3))) 
                           & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__colln_atom_rd_detected_atom_wr_ph3))))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_detected_collnq, 
                    (1U & ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_ph3), 4U) 
                            & (~ VL_REDOR_I(vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3))) 
                           & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__colln_atom_rd_detected_atom_wr_ph3))))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_detected_collnq, 
                    (1U & ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_ph3), 5U) 
                            & (~ VL_REDOR_I(vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3))) 
                           & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__colln_atom_rd_detected_atom_wr_ph3))))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_detected_collnq, 
                    (1U & ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_ph3), 6U) 
                            & (~ VL_REDOR_I(vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3))) 
                           & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__colln_atom_rd_detected_atom_wr_ph3))))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_detected_collnq, 
                    (1U & ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_ph3), 7U) 
                            & (~ VL_REDOR_I(vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3))) 
                           & (~ VL_REDOR_I((IData)(vlSelfRef.__PVT__colln_atom_rd_detected_atom_wr_ph3))))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_atom_detected_collnq, 
                    (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_ph3), 0U) 
                           & (~ VL_REDOR_I(vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_atom_detected_collnq, 
                    (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_ph3), 1U) 
                           & (~ VL_REDOR_I(vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_atom_detected_collnq, 
                    (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_ph3), 2U) 
                           & (~ VL_REDOR_I(vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_atom_detected_collnq, 
                    (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_ph3), 3U) 
                           & (~ VL_REDOR_I(vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_atom_detected_collnq, 
                    (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_ph3), 4U) 
                           & (~ VL_REDOR_I(vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_atom_detected_collnq, 
                    (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_ph3), 5U) 
                           & (~ VL_REDOR_I(vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_atom_detected_collnq, 
                    (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_ph3), 6U) 
                           & (~ VL_REDOR_I(vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_atom_detected_collnq, 
                    (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_ph3), 7U) 
                           & (~ VL_REDOR_I(vlSelfRef.__PVT__cmd_isatmo_wr_atmo_rd_in_outstd_ph3)))));
    vlSelfRef.__PVT__colln_newentry_addr_clr_addr_match 
        = ((IData)(vlSelfRef.__PVT__en_clr_collnreg) 
           & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__addr_clln_clearing, 6U, 46)) 
              == (0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0U)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x17U)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xcU, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 6U, 46)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 1U)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2fU)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x24U, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x18U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x3aU, 46)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 2U)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x47U)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x3cU, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x30U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x6eU, 46)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 3U)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x5fU)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x54U, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x48U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0xa2U, 46)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 4U)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x77U)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x6cU, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x60U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0xd6U, 46)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 5U)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x8fU)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x84U, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x78U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x10aU, 46)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 6U)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xa7U)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x9cU, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x90U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x13eU, 46)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 7U)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xbfU)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xb4U, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xa8U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x172U, 46)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 8U)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xd7U)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xccU, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xc0U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x1a6U, 46)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 9U)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xefU)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xe4U, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xd8U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x1daU, 46)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xaU)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x107U)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xfcU, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0xf0U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x20eU, 46)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xbU)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x11fU)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x114U, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x108U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x242U, 46)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xcU)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x137U)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x12cU, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x120U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x276U, 46)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xdU)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x14fU)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x144U, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x138U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x2aaU, 46)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xeU)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x167U)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x15cU, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x150U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x2deU, 46)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0xfU)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x17fU)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x174U, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x168U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x312U, 46)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x10U)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x197U)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x18cU, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x180U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x346U, 46)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x11U)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1afU)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1a4U, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x198U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x37aU, 46)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x12U)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1c7U)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1bcU, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1b0U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x3aeU, 46)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x13U)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1dfU)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1d4U, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1c8U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x3e2U, 46)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x14U)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1f7U)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1ecU, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1e0U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x416U, 46)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x15U)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x20fU)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x204U, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x1f8U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x44aU, 46)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x16U)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x227U)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x21cU, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x210U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x47eU, 46)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x17U)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x23fU)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x234U, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x228U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x4b2U, 46)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x18U)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x257U)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x24cU, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x240U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x4e6U, 46)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x19U)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x26fU)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x264U, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x258U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x51aU, 46)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1aU)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x287U)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x27cU, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x270U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x54eU, 46)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1bU)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x29fU)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x294U, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x288U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x582U, 46)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1cU)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2b7U)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2acU, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2a0U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x5b6U, 46)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1dU)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2cfU)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2c4U, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2b8U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x5eaU, 46)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1eU)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2e7U)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2dcU, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2d0U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x61eU, 46)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__colln_detected_outstq, 
                    (((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__outstand_cmd_invalid, 0x1fU)) 
                      & (~ ((((IData)(vlSelfRef.__PVT__cmd_isatmo_ph3) 
                              & VL_BITSEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2ffU)) 
                             & ((0x7ffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2f4U, 11)) 
                                == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11)))) 
                            & ((0xfffU & VL_SEL_IWII(768, vlSelfRef.__PVT__outstand_cmd, 0x2e8U, 12)) 
                               == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))))) 
                     & ((0x3fffffffffffULL & VL_SEL_QQII(52, vlSelfRef.__PVT__cmd_addr_ph3, 6U, 46)) 
                        == (0x3fffffffffffULL & VL_SEL_QWII(1664, vlSelfRef.__PVT__outstand_cmd_addr, 0x652U, 46)))));
    vlSelfRef.__PVT__req_is_dataless_ph4 = ((IData)(vlSelfRef.__PVT__req_is_clean_ui_ph4) 
                                            | (IData)(vlSelfRef.__PVT__req_is_make_ui_ph4));
    vlSelfRef.__PVT__req_is_read_ocs_notsd_ph4 = ((
                                                   ((IData)(vlSelfRef.__PVT__req_is_read_o_ph4) 
                                                    | (IData)(vlSelfRef.__PVT__req_is_read_c_ph4)) 
                                                   | (IData)(vlSelfRef.__PVT__req_is_read_s_ph4)) 
                                                  | (IData)(vlSelfRef.__PVT__req_is_read_s_notsd_ph4));
    vlSelfRef.__PVT__any_timeout_flag_true = (0U != vlSelfRef.__PVT__service_timeout_flag);
    vlSelfRef.__PVT__snoop_response_fwdstate_ph3 = 3U;
    if (vlSelfRef.__PVT__cmdq_src0_SnpRespFwd_ph3) {
        vlSelfRef.__PVT__snoop_response_fwdstate_ph3 
            = (7U & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x30U, 3));
    } else if (vlSelfRef.__PVT__opcode_snprespdatafwd_ph3) {
        vlSelfRef.__PVT__snoop_response_fwdstate_ph3 
            = (7U & VL_SEL_IWII(109, vlSelfRef.__PVT__cmd_ph3_datrsp_s, 0x3aU, 3));
    }
    vlSelfRef.__PVT__new_first_RespErr_ph4_nxt = 0U;
    vlSelfRef.__PVT__live_RespErr_active = 0U;
    if (vlSelfRef.__PVT__cmdvalid_ph3_rsp) {
        if (((IData)(vlSelfRef.__PVT__cmdq_src1_ph3) 
             | ((IData)(vlSelfRef.__PVT__cmdq_src2_ph3) 
                & ((((IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_COPYBACKWRDATA) 
                     | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATA)) 
                    | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_NONCOPYBACKWRDATACOMP)) 
                   | (IData)(vlSelfRef.__PVT__cmd_ph3_rsp_is_WRITEDATACANCEL))))) {
            vlSelfRef.__PVT__new_first_RespErr_ph4_nxt 
                = (3U & VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x35U, 2));
            vlSelfRef.__PVT__live_RespErr_active = 1U;
        }
    }
    vlSelfRef.__PVT__opcode_snprespdata_ptldata_ph3 
        = ((IData)(vlSelfRef.__PVT__opcode_snprespdata_ph3) 
           | (IData)(vlSelfRef.__PVT__opcode_snprespptldata_ph3));
    vlSelfRef.__PVT__clr_pcrdt_entry = (VL_REPLICATE_IOI(1,
                                                         VL_REDOR_I(vlSelfRef.__PVT__itis_req_retry_2nd_retryack), 0x20U) 
                                        & (vlSelfRef.__PVT__itis_req_retry_2nd_retryack 
                                           & ((IData)(1U) 
                                              + (~ vlSelfRef.__PVT__itis_req_retry_2nd_retryack))));
    vlSelfRef.__PVT__retryack_match = VL_REDOR_I(vlSelfRef.__PVT__itis_req_retry_2nd_retryack);
    vlSelfRef.__PVT__retry_shared_txnid = 0U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0x1fU) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0x1fU;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x1eU;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0x1eU) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0x1eU;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x1dU;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0x1dU) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0x1dU;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x1cU;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0x1cU) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0x1cU;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x1bU;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0x1bU) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0x1bU;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x1aU;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0x1aU) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0x1aU;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x19U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0x19U) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0x19U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x18U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0x18U) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0x18U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x17U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0x17U) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0x17U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x16U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0x16U) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0x16U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x15U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0x15U) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0x15U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x14U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0x14U) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0x14U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x13U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0x13U) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0x13U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x12U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0x12U) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0x12U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x11U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0x11U) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0x11U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0x10U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0x10U) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0x10U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xfU;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0xfU) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0xfU;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xeU;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0xeU) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0xeU;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xdU;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0xdU) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0xdU;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xcU;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0xcU) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0xcU;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xbU;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0xbU) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0xbU;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xaU;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0xaU) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0xaU;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 9U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 9U) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 9U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 8U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 8U) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 8U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 7U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 7U) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 7U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 6U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 6U) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 6U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 5U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 5U) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 5U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 4U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 4U) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 4U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 3U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 3U) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 3U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 2U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 2U) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 2U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 1U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 1U) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 1U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0U;
    if ((VL_BITSEL_IIII(32, vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant, 0U) 
         & (IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3))) {
        vlSelfRef.__PVT__retry_shared_txnid = 0U;
    }
    vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xffffffffU;
    vlSelfRef.__PVT__pcrdgrant_match = VL_REDOR_I(vlSelfRef.__PVT__itis_req_retry_2nd_pcrdgrant);
    vlSelfRef.__PVT__new_compcmo_cnt_req_ph3 = ((IData)(vlSelfRef.__PVT__req_is_writecmo_ph3) 
                                                & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)));
    vlSelfRef.__PVT__new_compack_cnt_req_ph3 = (((IData)(vlSelfRef.__PVT__req_is_anywr_ph3) 
                                                 | (IData)(vlSelfRef.__PVT__req_is_writecmo_ph3)) 
                                                & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x93U));
    vlSelfRef.__PVT__req_is_read_ocsu_notsd_pu_ph3 
        = ((((IData)(vlSelfRef.__PVT__req_is_read_ocs_ph3) 
             | (IData)(vlSelfRef.__PVT__req_is_read_u_ph3)) 
            | (IData)(vlSelfRef.__PVT__req_is_read_notsd_ph3)) 
           | (IData)(vlSelfRef.__PVT__req_is_read_pu_ph3));
    vlSelfRef.__PVT__cmd_ph3_apply_dmt_req = (((((IData)(vlSelfRef.__PVT__cm_tgt_sn_supports_dmt_ph3) 
                                                 | (IData)(vlSelfRef.__PVT__noncm_tgt_sn_supports_dmt_ph3)) 
                                                & ((IData)(vlSelfRef.__PVT__req_is_read_ph3) 
                                                   & (~ 
                                                      VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x92U)))) 
                                               & (~ 
                                                  ((~ 
                                                    VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x93U)) 
                                                   & (0U 
                                                      != 
                                                      (3U 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x7fU, 2)))))) 
                                              & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph3)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__highest_seq_is0, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                     & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0U, 3)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__highest_seq_is0, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                     & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 3U, 3)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__highest_seq_is0, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                     & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 6U, 3)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__highest_seq_is0, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
                     & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 9U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__highest_seq_is0, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
                     & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xcU, 3)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__highest_seq_is0, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
                     & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xfU, 3)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__highest_seq_is0, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
                     & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x12U, 3)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__highest_seq_is0, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
                     & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x15U, 3)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__highest_seq_is1, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                     & (1U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0U, 3)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__highest_seq_is1, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                     & (1U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 3U, 3)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__highest_seq_is1, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                     & (1U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 6U, 3)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__highest_seq_is1, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
                     & (1U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 9U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__highest_seq_is1, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
                     & (1U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xcU, 3)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__highest_seq_is1, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
                     & (1U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xfU, 3)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__highest_seq_is1, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
                     & (1U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x12U, 3)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__highest_seq_is1, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
                     & (1U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x15U, 3)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__highest_seq_is2, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                     & (2U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0U, 3)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__highest_seq_is2, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                     & (2U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 3U, 3)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__highest_seq_is2, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                     & (2U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 6U, 3)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__highest_seq_is2, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
                     & (2U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 9U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__highest_seq_is2, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
                     & (2U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xcU, 3)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__highest_seq_is2, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
                     & (2U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xfU, 3)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__highest_seq_is2, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
                     & (2U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x12U, 3)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__highest_seq_is2, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
                     & (2U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x15U, 3)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__highest_seq_is3, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                     & (3U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0U, 3)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__highest_seq_is3, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                     & (3U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 3U, 3)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__highest_seq_is3, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                     & (3U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 6U, 3)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__highest_seq_is3, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
                     & (3U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 9U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__highest_seq_is3, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
                     & (3U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xcU, 3)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__highest_seq_is3, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
                     & (3U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xfU, 3)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__highest_seq_is3, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
                     & (3U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x12U, 3)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__highest_seq_is3, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
                     & (3U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x15U, 3)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__highest_seq_is4, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                     & (4U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0U, 3)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__highest_seq_is4, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                     & (4U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 3U, 3)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__highest_seq_is4, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                     & (4U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 6U, 3)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__highest_seq_is4, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
                     & (4U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 9U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__highest_seq_is4, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
                     & (4U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xcU, 3)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__highest_seq_is4, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
                     & (4U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0xfU, 3)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__highest_seq_is4, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
                     & (4U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x12U, 3)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__highest_seq_is4, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
                     & (4U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num, 0x15U, 3)))));
    vlSelfRef.__PVT__colln_detected_in_collnq = VL_REDOR_I((IData)(vlSelfRef.__PVT__colln_detected_collnq));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__highest_seq_is0_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 0U) 
                     & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0U, 3)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__highest_seq_is0_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 1U) 
                     & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 3U, 3)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__highest_seq_is0_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 2U) 
                     & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 6U, 3)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__highest_seq_is0_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 3U) 
                     & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 9U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__highest_seq_is0_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 4U) 
                     & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0xcU, 3)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__highest_seq_is0_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 5U) 
                     & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0xfU, 3)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__highest_seq_is0_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 6U) 
                     & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0x12U, 3)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__highest_seq_is0_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 7U) 
                     & (0U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0x15U, 3)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__highest_seq_is1_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 0U) 
                     & (1U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0U, 3)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__highest_seq_is1_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 1U) 
                     & (1U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 3U, 3)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__highest_seq_is1_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 2U) 
                     & (1U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 6U, 3)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__highest_seq_is1_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 3U) 
                     & (1U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 9U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__highest_seq_is1_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 4U) 
                     & (1U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0xcU, 3)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__highest_seq_is1_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 5U) 
                     & (1U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0xfU, 3)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__highest_seq_is1_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 6U) 
                     & (1U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0x12U, 3)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__highest_seq_is1_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 7U) 
                     & (1U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0x15U, 3)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__highest_seq_is2_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 0U) 
                     & (2U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0U, 3)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__highest_seq_is2_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 1U) 
                     & (2U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 3U, 3)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__highest_seq_is2_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 2U) 
                     & (2U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 6U, 3)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__highest_seq_is2_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 3U) 
                     & (2U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 9U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__highest_seq_is2_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 4U) 
                     & (2U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0xcU, 3)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__highest_seq_is2_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 5U) 
                     & (2U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0xfU, 3)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__highest_seq_is2_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 6U) 
                     & (2U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0x12U, 3)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__highest_seq_is2_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 7U) 
                     & (2U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0x15U, 3)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__highest_seq_is3_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 0U) 
                     & (3U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0U, 3)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__highest_seq_is3_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 1U) 
                     & (3U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 3U, 3)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__highest_seq_is3_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 2U) 
                     & (3U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 6U, 3)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__highest_seq_is3_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 3U) 
                     & (3U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 9U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__highest_seq_is3_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 4U) 
                     & (3U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0xcU, 3)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__highest_seq_is3_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 5U) 
                     & (3U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0xfU, 3)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__highest_seq_is3_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 6U) 
                     & (3U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0x12U, 3)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__highest_seq_is3_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 7U) 
                     & (3U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0x15U, 3)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__highest_seq_is4_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 0U) 
                     & (4U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0U, 3)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__highest_seq_is4_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 1U) 
                     & (4U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 3U, 3)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__highest_seq_is4_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 2U) 
                     & (4U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 6U, 3)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__highest_seq_is4_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 3U) 
                     & (4U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 9U, 3)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__highest_seq_is4_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 4U) 
                     & (4U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0xcU, 3)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__highest_seq_is4_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 5U) 
                     & (4U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0xfU, 3)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__highest_seq_is4_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 6U) 
                     & (4U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0x12U, 3)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__highest_seq_is4_atom, 
                    (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_atom_detected_collnq), 7U) 
                     & (4U == (7U & VL_SEL_IIII(24, vlSelfRef.__PVT__seq_num_atom, 0x15U, 3)))));
    vlSelfRef.__PVT__colln_atom_detected_in_collnq 
        = VL_REDOR_I((IData)(vlSelfRef.__PVT__colln_atom_detected_collnq));
    vlSelfRef.__PVT__colln_detected_in_outstq = VL_REDOR_I(vlSelfRef.__PVT__colln_detected_outstq);
    vlSelfRef.__PVT__unused_signal = vlSelfRef.__PVT__any_timeout_flag_true;
    vlSelfRef.__PVT__invalid_requester_state_after_dct_ph3 
        = (0U == (IData)(vlSelfRef.__PVT__snoop_response_fwdstate_ph3));
    vlSelfRef.__PVT__opcode_any_snoop_response_ph3 
        = ((((IData)(vlSelfRef.__PVT__cmdq_src0_SnpResp_ph3) 
             | (IData)(vlSelfRef.__PVT__cmdq_src0_SnpRespFwd_ph3)) 
            | (IData)(vlSelfRef.__PVT__opcode_snprespdata_ptldata_ph3)) 
           | (IData)(vlSelfRef.__PVT__opcode_snprespdatafwd_ph3));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xfU)) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xfU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1fU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1fU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x2fU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x2fU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x3fU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x3fU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x4fU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x4fU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x5fU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x5fU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x6fU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x6fU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x7fU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x7fU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x8fU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x8fU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x9fU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x9fU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xafU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xafU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xbfU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xbfU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xcfU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xcfU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xdfU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xdfU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xefU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xefU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xffU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xffU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x10fU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x10fU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x11fU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x11fU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x12fU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x12fU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x13fU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x13fU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x14fU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x14fU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x15fU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x15fU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x16fU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x16fU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x17fU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x17fU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x18fU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x18fU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x19fU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x19fU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1afU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1afU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1bfU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1bfU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1cfU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1cfU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1dfU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1dfU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1efU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__wren_retry_ph3, 
                    (((VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1efU) 
                       & (~ VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1ffU))) 
                      & ((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                         & (~ (IData)(vlSelfRef.__PVT__pcrdgrant_match)))) 
                     & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)));
    vlSelfRef.__PVT__wraddr_stat_rsp_ph3 = (0x3fU & 
                                            ((IData)(vlSelfRef.__PVT__pcrdgrant_match)
                                              ? VL_EXTEND_II(6,5, (IData)(vlSelfRef.__PVT__retry_shared_txnid))
                                              : VL_SEL_IWII(155, vlSelfRef.__PVT__cmd_ph3_rsp, 0x1aU, 6)));
    vlSelfRef.__PVT__itis_req_retry_pcrdmatch_ph3 = 
        ((IData)(vlSelfRef.__PVT__pcrdgrant_match) 
         | (IData)(vlSelfRef.__PVT__retryack_match));
    vlSelfRef.__PVT__new_readreceipt_cnt_req_ph3 = 
        (((2U == (3U & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x7fU, 2))) 
          | (3U == (3U & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x7fU, 2)))) 
         | (((0U == (3U & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x7fU, 2))) 
             & (~ VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x93U))) 
            & (IData)(vlSelfRef.__PVT__cmd_ph3_apply_dmt_req)));
    vlSelfRef.__PVT__any_highest_seq_is0 = (0U != (IData)(vlSelfRef.__PVT__highest_seq_is0));
    vlSelfRef.__PVT__any_highest_seq_is1 = (0U != (IData)(vlSelfRef.__PVT__highest_seq_is1));
    vlSelfRef.__PVT__any_highest_seq_is2 = (0U != (IData)(vlSelfRef.__PVT__highest_seq_is2));
    vlSelfRef.__PVT__any_highest_seq_is3 = (0U != (IData)(vlSelfRef.__PVT__highest_seq_is3));
    vlSelfRef.__PVT__any_highest_seq_is4 = (0U != (IData)(vlSelfRef.__PVT__highest_seq_is4));
    vlSelfRef.__PVT__any_highest_seq_is0_atom = (0U 
                                                 != (IData)(vlSelfRef.__PVT__highest_seq_is0_atom));
    vlSelfRef.__PVT__any_highest_seq_is1_atom = (0U 
                                                 != (IData)(vlSelfRef.__PVT__highest_seq_is1_atom));
    vlSelfRef.__PVT__any_highest_seq_is2_atom = (0U 
                                                 != (IData)(vlSelfRef.__PVT__highest_seq_is2_atom));
    vlSelfRef.__PVT__any_highest_seq_is3_atom = (0U 
                                                 != (IData)(vlSelfRef.__PVT__highest_seq_is3_atom));
    vlSelfRef.__PVT__any_highest_seq_is4_atom = (0U 
                                                 != (IData)(vlSelfRef.__PVT__highest_seq_is4_atom));
    vlSelfRef.__PVT__colln_detected_outstq_or_collnq_ph3 
        = ((IData)(vlSelfRef.__PVT__colln_detected_in_outstq) 
           | (IData)(vlSelfRef.__PVT__colln_detected_in_collnq));
    vlSelfRef.__PVT__wren_retry_prio = (VL_REPLICATE_IOI(1,
                                                         VL_REDOR_I(vlSelfRef.__PVT__wren_retry_ph3), 0x20U) 
                                        & (vlSelfRef.__PVT__wren_retry_ph3 
                                           & ((IData)(1U) 
                                              + (~ vlSelfRef.__PVT__wren_retry_ph3))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (1U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (2U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (3U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (4U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (5U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (6U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (7U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (8U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (9U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0xaU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0xbU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0xcU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0xdU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0xeU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0xfU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x10U, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0x10U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x11U, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0x11U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x12U, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0x12U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x13U, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0x13U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x14U, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0x14U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x15U, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0x15U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x16U, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0x16U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x17U, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0x17U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x18U, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0x18U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x19U, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0x19U == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1aU, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0x1aU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1bU, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0x1bU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1cU, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0x1cU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1dU, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0x1dU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1eU, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0x1eU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelfRef.__PVT__select_rsp_datapath, 
                    ((IData)(vlSelfRef.__PVT__wren_stat_rsp_ph3) 
                     & (0x1fU == (0x1fU & VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__wraddr_stat_rsp_ph3), 0U, 5)))));
    vlSelfRef.__PVT__muxed_id = (0x1fU & (((IData)(vlSelfRef.__PVT__cmdq_src0_PCrdGrant_ph3) 
                                           & (IData)(vlSelfRef.__PVT__itis_req_retry_pcrdmatch_ph3))
                                           ? (IData)(vlSelfRef.__PVT__retry_shared_txnid)
                                           : VL_SEL_IIII(6, (IData)(vlSelfRef.__PVT__index_statusreg_ph3), 0U, 5)));
    vlSelfRef.__PVT__highest_seqnum_is4 = vlSelfRef.__PVT__any_highest_seq_is4;
    vlSelfRef.__PVT__highest_seqnum_is3 = ((~ (IData)(vlSelfRef.__PVT__any_highest_seq_is4)) 
                                           & (IData)(vlSelfRef.__PVT__any_highest_seq_is3));
    vlSelfRef.__PVT__highest_seqnum_is2 = (((~ (IData)(vlSelfRef.__PVT__any_highest_seq_is4)) 
                                            & (~ (IData)(vlSelfRef.__PVT__any_highest_seq_is3))) 
                                           & (IData)(vlSelfRef.__PVT__any_highest_seq_is2));
    vlSelfRef.__PVT__highest_seqnum_is1 = ((((~ (IData)(vlSelfRef.__PVT__any_highest_seq_is4)) 
                                             & (~ (IData)(vlSelfRef.__PVT__any_highest_seq_is3))) 
                                            & (~ (IData)(vlSelfRef.__PVT__any_highest_seq_is2))) 
                                           & (IData)(vlSelfRef.__PVT__any_highest_seq_is1));
    vlSelfRef.__PVT__highest_seqnum_is0 = (((((~ (IData)(vlSelfRef.__PVT__any_highest_seq_is4)) 
                                              & (~ (IData)(vlSelfRef.__PVT__any_highest_seq_is3))) 
                                             & (~ (IData)(vlSelfRef.__PVT__any_highest_seq_is2))) 
                                            & (~ (IData)(vlSelfRef.__PVT__any_highest_seq_is1))) 
                                           & (IData)(vlSelfRef.__PVT__any_highest_seq_is0));
    vlSelfRef.__PVT__highest_seqnum_is4_atom = vlSelfRef.__PVT__any_highest_seq_is4_atom;
    vlSelfRef.__PVT__highest_seqnum_is3_atom = ((~ (IData)(vlSelfRef.__PVT__any_highest_seq_is4_atom)) 
                                                & (IData)(vlSelfRef.__PVT__any_highest_seq_is3_atom));
    vlSelfRef.__PVT__highest_seqnum_is2_atom = (((~ (IData)(vlSelfRef.__PVT__any_highest_seq_is4_atom)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__any_highest_seq_is3_atom))) 
                                                & (IData)(vlSelfRef.__PVT__any_highest_seq_is2_atom));
    vlSelfRef.__PVT__highest_seqnum_is1_atom = ((((~ (IData)(vlSelfRef.__PVT__any_highest_seq_is4_atom)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__any_highest_seq_is3_atom))) 
                                                 & (~ (IData)(vlSelfRef.__PVT__any_highest_seq_is2_atom))) 
                                                & (IData)(vlSelfRef.__PVT__any_highest_seq_is1_atom));
    vlSelfRef.__PVT__highest_seqnum_is0_atom = ((((
                                                   (~ (IData)(vlSelfRef.__PVT__any_highest_seq_is4_atom)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__any_highest_seq_is3_atom))) 
                                                  & (~ (IData)(vlSelfRef.__PVT__any_highest_seq_is2_atom))) 
                                                 & (~ (IData)(vlSelfRef.__PVT__any_highest_seq_is1_atom))) 
                                                & (IData)(vlSelfRef.__PVT__any_highest_seq_is0_atom));
    VL_ASSIGNBIT_WI(0xfU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0U) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 0U)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xfU)))));
    VL_ASSIGNSEL_WI(512,15,0U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0xbU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 0U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0U, 11)))));
    VL_ASSIGNBIT_WI(0x1fU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 1U) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 1U)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1fU)))));
    VL_ASSIGNSEL_WI(512,15,0x10U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 1U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x1bU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 1U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x10U, 11)))));
    VL_ASSIGNBIT_WI(0x2fU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 2U) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 2U)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x2fU)))));
    VL_ASSIGNSEL_WI(512,15,0x20U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 2U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x2bU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 2U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x20U, 11)))));
    VL_ASSIGNBIT_WI(0x3fU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 3U) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 3U)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x3fU)))));
    VL_ASSIGNSEL_WI(512,15,0x30U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 3U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x3bU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 3U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x30U, 11)))));
    VL_ASSIGNBIT_WI(0x4fU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 4U) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 4U)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x4fU)))));
    VL_ASSIGNSEL_WI(512,15,0x40U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 4U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x4bU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 4U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x40U, 11)))));
    VL_ASSIGNBIT_WI(0x5fU, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    (1U & (VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 5U) 
                           | ((~ VL_BITSEL_IIII(32, vlSelfRef.__PVT__clr_pcrdt_entry, 5U)) 
                              & VL_BITSEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x5fU)))));
    VL_ASSIGNSEL_WI(512,15,0x50U, vlSelfRef.__PVT__status_field_retry_ph3_nxt, 
                    VL_CONCAT_III(15,4,11, (0xfU & 
                                            ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 5U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0x42U, 4)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x5bU, 4))), 
                                  (0x7ffU & ((1U & 
                                              VL_BITSEL_IIII(32, vlSelfRef.__PVT__wren_retry_prio, 5U))
                                              ? VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_s, 0xfU, 11)
                                              : VL_SEL_IWII(512, vlSelfRef.__PVT__status_field_retry_ph3, 0x50U, 11)))));
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
    VL_CONST_W_5X(160,__Vtemp_18,0x000000ff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(136, 4352, __Vtemp_19, vlSelfRef.__PVT__status_field_common, 
                (0x1fffU & VL_SEL_IIII(32, ((IData)(0x88U) 
                                            * VL_EXTEND_II(32,5, (IData)(vlSelfRef.__PVT__muxed_id))), 0U, 13)), 136);
    VL_CONST_W_1X(136,__Vtemp_20,0x00000000);
    __Vtemp_21 = (0x10ffU >= (0x1fffU & VL_SEL_IIII(32, 
                                                    ((IData)(0x88U) 
                                                     * 
                                                     VL_EXTEND_II(32,5, (IData)(vlSelfRef.__PVT__muxed_id))), 0U, 13)));
    VL_COND_WIWW(136, __Vtemp_22, __Vtemp_21, __Vtemp_19, __Vtemp_20);
    VL_AND_W(5, vlSelfRef.__PVT__rddata_statcommon_rsp_ph3, __Vtemp_18, __Vtemp_22);
    VL_CONST_W_4X(128,__Vtemp_23,0x00000fff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(108, 3456, __Vtemp_24, vlSelfRef.__PVT__status_field_req, 
                (0xfffU & VL_SEL_IIII(32, ((IData)(0x6cU) 
                                           * VL_EXTEND_II(32,5, (IData)(vlSelfRef.__PVT__muxed_id))), 0U, 12)), 108);
    VL_CONST_W_1X(108,__Vtemp_25,0x00000000);
    __Vtemp_26 = (0xd7fU >= (0xfffU & VL_SEL_IIII(32, 
                                                  ((IData)(0x6cU) 
                                                   * 
                                                   VL_EXTEND_II(32,5, (IData)(vlSelfRef.__PVT__muxed_id))), 0U, 12)));
    VL_COND_WIWW(108, __Vtemp_27, __Vtemp_26, __Vtemp_24, __Vtemp_25);
    VL_AND_W(4, vlSelfRef.__PVT__rddata_statreg_req_ph3, __Vtemp_23, __Vtemp_27);
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
        __Vtemp_28 = (3U & ((IData)(vlSelfRef.__PVT__new_wrdata_cnt_resp_ph4_nxt) 
                            - (IData)(1U)));
        vlSelfRef.__PVT__new_wrdata_cnt_resp_ph4_nxt 
            = __Vtemp_28;
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
    vlSelfRef.__PVT__itis_lastresp_comp_ph3_wr_nosnp 
        = (((((IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_full_ph3) 
              | (IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_ptl_ph3)) 
             | (IData)(vlSelfRef.__PVT__orig_req_wr_nosnp_zero_ph3)) 
            & (IData)(vlSelfRef.__PVT__cmdvalid_ph3_rsp)) 
           & ((((IData)(vlSelfRef.__PVT__cmdq_src0_Comp_ph3) 
                & (~ (IData)(vlSelfRef.__PVT__dbid_cnt_ph3))) 
               & (~ (IData)(vlSelfRef.__PVT__compack_cnt_resp_ph3))) 
              & (0U == (IData)(vlSelfRef.__PVT__wrdata_cnt_resp_ph3))));
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
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:3980: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 3980, "");
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
        VL_WRITEF_NX("[%0t] %%Error: sig_coherency_ctrlr.sv:4304: Assertion failed in %Nsig_topology_top.cl0_sig_clustertop.inst_cl0_clustercore.sig_chi_cc_top_0.sig_coherency_ctrlr_0.update_mmemresp_cnt_for_ongoing_rsp: 'unique if' statement violated\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/var/lib/inoculator/sig_cnoc/design/rtl/cc_controller_top/sig_coherency_ctrlr.sv", 4304, "");
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
    vlSelfRef.__PVT__new_last_read_snp_sent_ph4_nxt 
        = vlSelfRef.__PVT__last_read_snp_sent_ph3;
    if ((((IData)(vlSelfRef.__PVT__itis_lastresp_ph3_nonwr) 
          & ((IData)(vlSelfRef.__PVT__orig_req_read_ocsu_notsd_pu_ph3) 
             | (IData)(vlSelfRef.__PVT__orig_makeread_u_ph3))) 
         & (~ (IData)(vlSelfRef.__PVT__origreq_apply_dmt_ph3)))) {
        vlSelfRef.__PVT__new_last_read_snp_sent_ph4_nxt = 1U;
    }
}
