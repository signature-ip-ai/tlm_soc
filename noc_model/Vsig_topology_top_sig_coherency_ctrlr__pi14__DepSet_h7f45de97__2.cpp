// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_coherency_ctrlr__pi14.h"

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__28(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__28\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(109,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__drespcmd_fifo_0.__PVT__fifo_wrdata, vlSelfRef.__PVT__wrdata_drespcmdq);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__drespcmd_fifo_0.__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_drespcmdq;
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__30(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__30\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__req_respcmdq_gated = ((((IData)(vlSelfRef.__PVT__room_atlst3_outcompfifo) 
                                             & (~ (IData)(vlSelfRef.__PVT__block_b2b_resp))) 
                                            & (~ (IData)(vlSelfRef.__PVT__block_rsp_proc_dueto_dn_sm_req_ph3))) 
                                           & (IData)(vlSelfRef.__PVT__req_respcmdq));
    vlSelfRef.__PVT__req_memrespcmdq_gated = ((((IData)(vlSelfRef.__PVT__room_atlst3_outcompfifo) 
                                                & (~ (IData)(vlSelfRef.__PVT__block_b2b_resp))) 
                                               & (~ (IData)(vlSelfRef.__PVT__block_rsp_proc_dueto_dn_sm_req_ph3))) 
                                              & (IData)(vlSelfRef.__PVT__req_memrespcmdq));
    vlSelfRef.__PVT__req_drespcmdq_gated = ((((IData)(vlSelfRef.__PVT__room_atlst3_outcompfifo) 
                                              & (~ (IData)(vlSelfRef.__PVT__block_b2b_resp))) 
                                             & (~ (IData)(vlSelfRef.__PVT__block_rsp_proc_dueto_dn_sm_req_ph3))) 
                                            & (IData)(vlSelfRef.__PVT__req_drespcmdq));
    vlSelfRef.__PVT__req_all_rsp = VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__req_drespcmdq_gated), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__req_memrespcmdq_gated), (IData)(vlSelfRef.__PVT__req_respcmdq_gated)));
    vlSelfRef.__PVT__gnt_requests_rsp = 0U;
    vlSelfRef.__PVT__serv_history_rsp_nxt = vlSelfRef.__PVT__serv_history_rsp;
    if ((1U == (IData)(vlSelfRef.__PVT__serv_history_rsp))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_rsp), 1U))) {
            vlSelfRef.__PVT__gnt_requests_rsp = 2U;
            vlSelfRef.__PVT__serv_history_rsp_nxt = 2U;
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_rsp), 2U))) {
            vlSelfRef.__PVT__gnt_requests_rsp = 4U;
            vlSelfRef.__PVT__serv_history_rsp_nxt = 4U;
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_rsp), 0U))) {
            vlSelfRef.__PVT__gnt_requests_rsp = 1U;
            vlSelfRef.__PVT__serv_history_rsp_nxt = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__serv_history_rsp))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_rsp), 2U))) {
            vlSelfRef.__PVT__gnt_requests_rsp = 4U;
            vlSelfRef.__PVT__serv_history_rsp_nxt = 4U;
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_rsp), 0U))) {
            vlSelfRef.__PVT__gnt_requests_rsp = 1U;
            vlSelfRef.__PVT__serv_history_rsp_nxt = 1U;
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_rsp), 1U))) {
            vlSelfRef.__PVT__gnt_requests_rsp = 2U;
            vlSelfRef.__PVT__serv_history_rsp_nxt = 2U;
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__serv_history_rsp))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_rsp), 0U))) {
            vlSelfRef.__PVT__gnt_requests_rsp = 1U;
            vlSelfRef.__PVT__serv_history_rsp_nxt = 1U;
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_rsp), 1U))) {
            vlSelfRef.__PVT__gnt_requests_rsp = 2U;
            vlSelfRef.__PVT__serv_history_rsp_nxt = 2U;
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_rsp), 2U))) {
            vlSelfRef.__PVT__gnt_requests_rsp = 4U;
            vlSelfRef.__PVT__serv_history_rsp_nxt = 4U;
        }
    }
    vlSelfRef.__PVT__gnt_memrespcmdq = (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_requests_rsp), 1U));
    vlSelfRef.__PVT__gnt_drespcmdq = (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_requests_rsp), 2U));
    vlSelfRef.__PVT__gnt_respcmdq = (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_requests_rsp), 0U));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__memrespcmd_fifo_0.__PVT__fifo_rden 
        = vlSelfRef.__PVT__gnt_memrespcmdq;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__drespcmd_fifo_0.__PVT__fifo_rden 
        = vlSelfRef.__PVT__gnt_drespcmdq;
    vlSelfRef.__PVT__cmdvalid_ph3_rsp_nxt = (((IData)(vlSelfRef.__PVT__gnt_respcmdq) 
                                              | (IData)(vlSelfRef.__PVT__gnt_memrespcmdq)) 
                                             | (IData)(vlSelfRef.__PVT__gnt_drespcmdq));
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0.__PVT__fifo_rden 
        = vlSelfRef.__PVT__gnt_respcmdq;
    vlSelfRef.__PVT__send_respcrdt_update = ((IData)(vlSelfRef.__PVT__gnt_respcmdq) 
                                             & (~ VL_BITSEL_IWII(74, vlSelfRef.__PVT__rddata_respcmdq, 0x49U)));
    VL_ASSIGN_W(155,vlSelfRef.__PVT__cmd_ph3_rsp_nxt, vlSelfRef.__PVT__cm_cmd);
    vlSelfRef.__PVT__cmdq_src_ph3_rsp_nxt = 0U;
    vlSelfRef.__PVT__cmdis_resp_ph3_nxt = 0U;
    if ((1U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__gnt_drespcmdq), 
                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__gnt_memrespcmdq), (IData)(vlSelfRef.__PVT__gnt_respcmdq))))) {
        VL_EXTEND_WW(155,74, vlSelfRef.__PVT__cmd_ph3_rsp_nxt, vlSelfRef.__PVT__rddata_respcmdq);
        vlSelfRef.__PVT__cmdq_src_ph3_rsp_nxt = 0U;
        vlSelfRef.__PVT__cmdis_resp_ph3_nxt = 1U;
    } else if ((2U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__gnt_drespcmdq), 
                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__gnt_memrespcmdq), (IData)(vlSelfRef.__PVT__gnt_respcmdq))))) {
        VL_EXTEND_WW(155,109, vlSelfRef.__PVT__cmd_ph3_rsp_nxt, vlSelfRef.__PVT__rddata_memrespcmdq_prepped);
        vlSelfRef.__PVT__cmdq_src_ph3_rsp_nxt = 1U;
        vlSelfRef.__PVT__cmdis_resp_ph3_nxt = 1U;
    } else if ((4U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__gnt_drespcmdq), 
                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__gnt_memrespcmdq), (IData)(vlSelfRef.__PVT__gnt_respcmdq))))) {
        VL_EXTEND_WW(155,109, vlSelfRef.__PVT__cmd_ph3_rsp_nxt, vlSelfRef.__PVT__rddata_drespcmdq);
        vlSelfRef.__PVT__cmdq_src_ph3_rsp_nxt = 2U;
        vlSelfRef.__PVT__cmdis_resp_ph3_nxt = 1U;
    }
    vlSelfRef.__PVT__any_resp_selected = (((IData)(vlSelfRef.__PVT__gnt_respcmdq) 
                                           | (IData)(vlSelfRef.__PVT__gnt_memrespcmdq)) 
                                          | (IData)(vlSelfRef.__PVT__gnt_drespcmdq));
    VL_CONST_W_3X(96,__Vtemp_1,0x000001ff,0xffffffff,0xffffffff);
    VL_SEL_WWII(73, 155, __Vtemp_2, vlSelfRef.__PVT__cmd_ph3_rsp_nxt, 0U, 73);
    VL_AND_W(3, vlSelfRef.__PVT__cmd_ph3_rsp_nxt_s, __Vtemp_1, __Vtemp_2);
    vlSelfRef.__PVT__sel_blkcnt_0 = ((IData)(vlSelfRef.__PVT__any_resp_selected) 
                                     & (~ (IData)(vlSelfRef.__PVT__occupied_last_resp_index_0)));
    vlSelfRef.__PVT__sel_blkcnt_1 = (((IData)(vlSelfRef.__PVT__any_resp_selected) 
                                      & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_0)) 
                                     & (~ (IData)(vlSelfRef.__PVT__occupied_last_resp_index_1)));
    vlSelfRef.__PVT__sel_blkcnt_2 = ((((IData)(vlSelfRef.__PVT__any_resp_selected) 
                                       & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_0)) 
                                      & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_1)) 
                                     & (~ (IData)(vlSelfRef.__PVT__occupied_last_resp_index_2)));
    vlSelfRef.__PVT__sel_blkcnt_3 = (((((IData)(vlSelfRef.__PVT__any_resp_selected) 
                                        & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_0)) 
                                       & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_1)) 
                                      & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_2)) 
                                     & (~ (IData)(vlSelfRef.__PVT__occupied_last_resp_index_3)));
    vlSelfRef.__PVT__sel_blkcnt_4 = ((((((IData)(vlSelfRef.__PVT__any_resp_selected) 
                                         & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_0)) 
                                        & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_1)) 
                                       & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_2)) 
                                      & (IData)(vlSelfRef.__PVT__occupied_last_resp_index_3)) 
                                     & (~ (IData)(vlSelfRef.__PVT__occupied_last_resp_index_4)));
    vlSelfRef.__PVT__index_statusreg_ph3_nxt = (0x3fU 
                                                & VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_nxt_s, 0x1aU, 6));
    vlSelfRef.__PVT__last_resp_index_0_nxt = (0x3fU 
                                              & ((IData)(vlSelfRef.__PVT__sel_blkcnt_0)
                                                  ? 
                                                 VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_nxt_s, 0x1aU, 6)
                                                  : (IData)(vlSelfRef.__PVT__last_resp_index_0)));
    vlSelfRef.__PVT__resp_block_cnt_0_nxt = vlSelfRef.__PVT__resp_block_cnt_0;
    vlSelfRef.__PVT__occupied_last_resp_index_0_nxt 
        = vlSelfRef.__PVT__occupied_last_resp_index_0;
    if (vlSelfRef.__PVT__sel_blkcnt_0) {
        vlSelfRef.__PVT__resp_block_cnt_0_nxt = 0U;
        vlSelfRef.__PVT__occupied_last_resp_index_0_nxt = 1U;
    } else if (((IData)(vlSelfRef.__PVT__occupied_last_resp_index_0) 
                & (2U != (IData)(vlSelfRef.__PVT__resp_block_cnt_0)))) {
        vlSelfRef.__PVT__resp_block_cnt_0_nxt = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__resp_block_cnt_0)));
    } else if ((2U == (IData)(vlSelfRef.__PVT__resp_block_cnt_0))) {
        vlSelfRef.__PVT__resp_block_cnt_0_nxt = 0U;
        vlSelfRef.__PVT__occupied_last_resp_index_0_nxt = 0U;
    }
    vlSelfRef.__PVT__last_resp_index_1_nxt = (0x3fU 
                                              & ((IData)(vlSelfRef.__PVT__sel_blkcnt_1)
                                                  ? 
                                                 VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_nxt_s, 0x1aU, 6)
                                                  : (IData)(vlSelfRef.__PVT__last_resp_index_1)));
    vlSelfRef.__PVT__resp_block_cnt_1_nxt = vlSelfRef.__PVT__resp_block_cnt_1;
    vlSelfRef.__PVT__occupied_last_resp_index_1_nxt 
        = vlSelfRef.__PVT__occupied_last_resp_index_1;
    if (vlSelfRef.__PVT__sel_blkcnt_1) {
        vlSelfRef.__PVT__resp_block_cnt_1_nxt = 0U;
        vlSelfRef.__PVT__occupied_last_resp_index_1_nxt = 1U;
    } else if (((IData)(vlSelfRef.__PVT__occupied_last_resp_index_1) 
                & (2U != (IData)(vlSelfRef.__PVT__resp_block_cnt_1)))) {
        vlSelfRef.__PVT__resp_block_cnt_1_nxt = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__resp_block_cnt_1)));
    } else if ((2U == (IData)(vlSelfRef.__PVT__resp_block_cnt_1))) {
        vlSelfRef.__PVT__resp_block_cnt_1_nxt = 0U;
        vlSelfRef.__PVT__occupied_last_resp_index_1_nxt = 0U;
    }
    vlSelfRef.__PVT__last_resp_index_2_nxt = (0x3fU 
                                              & ((IData)(vlSelfRef.__PVT__sel_blkcnt_2)
                                                  ? 
                                                 VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_nxt_s, 0x1aU, 6)
                                                  : (IData)(vlSelfRef.__PVT__last_resp_index_2)));
    vlSelfRef.__PVT__resp_block_cnt_2_nxt = vlSelfRef.__PVT__resp_block_cnt_2;
    vlSelfRef.__PVT__occupied_last_resp_index_2_nxt 
        = vlSelfRef.__PVT__occupied_last_resp_index_2;
    if (vlSelfRef.__PVT__sel_blkcnt_2) {
        vlSelfRef.__PVT__resp_block_cnt_2_nxt = 0U;
        vlSelfRef.__PVT__occupied_last_resp_index_2_nxt = 1U;
    } else if (((IData)(vlSelfRef.__PVT__occupied_last_resp_index_2) 
                & (2U != (IData)(vlSelfRef.__PVT__resp_block_cnt_2)))) {
        vlSelfRef.__PVT__resp_block_cnt_2_nxt = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__resp_block_cnt_2)));
    } else if ((2U == (IData)(vlSelfRef.__PVT__resp_block_cnt_2))) {
        vlSelfRef.__PVT__resp_block_cnt_2_nxt = 0U;
        vlSelfRef.__PVT__occupied_last_resp_index_2_nxt = 0U;
    }
    vlSelfRef.__PVT__last_resp_index_3_nxt = (0x3fU 
                                              & ((IData)(vlSelfRef.__PVT__sel_blkcnt_3)
                                                  ? 
                                                 VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_nxt_s, 0x1aU, 6)
                                                  : (IData)(vlSelfRef.__PVT__last_resp_index_3)));
    vlSelfRef.__PVT__resp_block_cnt_3_nxt = vlSelfRef.__PVT__resp_block_cnt_3;
    vlSelfRef.__PVT__occupied_last_resp_index_3_nxt 
        = vlSelfRef.__PVT__occupied_last_resp_index_3;
    if (vlSelfRef.__PVT__sel_blkcnt_3) {
        vlSelfRef.__PVT__resp_block_cnt_3_nxt = 0U;
        vlSelfRef.__PVT__occupied_last_resp_index_3_nxt = 1U;
    } else if (((IData)(vlSelfRef.__PVT__occupied_last_resp_index_3) 
                & (2U != (IData)(vlSelfRef.__PVT__resp_block_cnt_3)))) {
        vlSelfRef.__PVT__resp_block_cnt_3_nxt = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__resp_block_cnt_3)));
    } else if ((2U == (IData)(vlSelfRef.__PVT__resp_block_cnt_3))) {
        vlSelfRef.__PVT__resp_block_cnt_3_nxt = 0U;
        vlSelfRef.__PVT__occupied_last_resp_index_3_nxt = 0U;
    }
    vlSelfRef.__PVT__last_resp_index_4_nxt = (0x3fU 
                                              & ((IData)(vlSelfRef.__PVT__sel_blkcnt_4)
                                                  ? 
                                                 VL_SEL_IWII(73, vlSelfRef.__PVT__cmd_ph3_rsp_nxt_s, 0x1aU, 6)
                                                  : (IData)(vlSelfRef.__PVT__last_resp_index_4)));
    vlSelfRef.__PVT__resp_block_cnt_4_nxt = vlSelfRef.__PVT__resp_block_cnt_4;
    vlSelfRef.__PVT__occupied_last_resp_index_4_nxt 
        = vlSelfRef.__PVT__occupied_last_resp_index_4;
    if (vlSelfRef.__PVT__sel_blkcnt_4) {
        vlSelfRef.__PVT__resp_block_cnt_4_nxt = 0U;
        vlSelfRef.__PVT__occupied_last_resp_index_4_nxt = 1U;
    } else if (((IData)(vlSelfRef.__PVT__occupied_last_resp_index_4) 
                & (2U != (IData)(vlSelfRef.__PVT__resp_block_cnt_4)))) {
        vlSelfRef.__PVT__resp_block_cnt_4_nxt = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__resp_block_cnt_4)));
    } else if ((2U == (IData)(vlSelfRef.__PVT__resp_block_cnt_4))) {
        vlSelfRef.__PVT__resp_block_cnt_4_nxt = 0U;
        vlSelfRef.__PVT__occupied_last_resp_index_4_nxt = 0U;
    }
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__35(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__35\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    CData/*31:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_7;
    // Body
    VL_ASSIGN_W(156,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__reqcmd_fifo_0.__PVT__fifo_wrdata, vlSelfRef.__PVT__wrdata_reqcmdq);
    vlSelfRef.__PVT__rddata_reqcmdq_addr_invalid = 
        (1U & (((IData)(vlSelfRef.__PVT__empty_reqcmdq) 
                & (IData)(vlSelfRef.__PVT__reqfifo_bypass_en))
                ? VL_BITSEL_IWII(156, vlSelfRef.__PVT__wrdata_reqcmdq, 0x9bU)
                : VL_BITSEL_IWII(156, vlSelfRef.__PVT__rddata_reqcmdq, 0x9bU)));
    VL_CONST_W_5X(160,__Vtemp_1,0x07ffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(155, 156, __Vtemp_2, vlSelfRef.__PVT__wrdata_reqcmdq, 0U, 155);
    VL_SEL_WWII(155, 156, __Vtemp_3, vlSelfRef.__PVT__rddata_reqcmdq, 0U, 155);
    __Vtemp_4 = ((IData)(vlSelfRef.__PVT__empty_reqcmdq) 
                 & (IData)(vlSelfRef.__PVT__reqfifo_bypass_en));
    VL_COND_WIWW(155, __Vtemp_5, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    VL_AND_W(5, vlSelfRef.__PVT__rddata_reqcmdq_withbypass, __Vtemp_1, __Vtemp_5);
    VL_CONST_W_5X(160,__Vtemp_6,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 155, __Vtemp_7, vlSelfRef.__PVT__rddata_reqcmdq_withbypass, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__rddata_reqcmdq_withbypass_s, __Vtemp_6, __Vtemp_7);
    vlSelfRef.__PVT__rddata_reqcmdq_addr = (0xfffffffffffffULL 
                                            & VL_SEL_QWII(151, vlSelfRef.__PVT__rddata_reqcmdq_withbypass_s, 0x48U, 52));
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__42(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__42\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(74,vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0.__PVT__fifo_wrdata, vlSelfRef.__PVT__wrdata_respcmdq);
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__respcmd_fifo_0.__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_respcmdq;
}

VL_INLINE_OPT void Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__45(Vsig_topology_top_sig_coherency_ctrlr__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_coherency_ctrlr__pi14___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__45\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    // Body
    vlSelfRef.__PVT__req_all_req = VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__req_reqcmdq_gated), 
                                                 VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__req_collnq_gated), (IData)(vlSelfRef.__PVT__req_cmq_gated)));
    vlSelfRef.__PVT__gnt_requests_req = 0U;
    vlSelfRef.__PVT__serv_history_req_nxt = vlSelfRef.__PVT__serv_history_req;
    if ((1U == (IData)(vlSelfRef.__PVT__serv_history_req))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_req), 1U))) {
            vlSelfRef.__PVT__gnt_requests_req = 2U;
            vlSelfRef.__PVT__serv_history_req_nxt = 2U;
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_req), 2U))) {
            vlSelfRef.__PVT__gnt_requests_req = 4U;
            vlSelfRef.__PVT__serv_history_req_nxt = 4U;
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_req), 0U))) {
            vlSelfRef.__PVT__gnt_requests_req = 1U;
            vlSelfRef.__PVT__serv_history_req_nxt = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__serv_history_req))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_req), 2U))) {
            vlSelfRef.__PVT__gnt_requests_req = 4U;
            vlSelfRef.__PVT__serv_history_req_nxt = 4U;
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_req), 0U))) {
            vlSelfRef.__PVT__gnt_requests_req = 1U;
            vlSelfRef.__PVT__serv_history_req_nxt = 1U;
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_req), 1U))) {
            vlSelfRef.__PVT__gnt_requests_req = 2U;
            vlSelfRef.__PVT__serv_history_req_nxt = 2U;
        }
    } else if ((4U == (IData)(vlSelfRef.__PVT__serv_history_req))) {
        if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_req), 0U))) {
            vlSelfRef.__PVT__gnt_requests_req = 1U;
            vlSelfRef.__PVT__serv_history_req_nxt = 1U;
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_req), 1U))) {
            vlSelfRef.__PVT__gnt_requests_req = 2U;
            vlSelfRef.__PVT__serv_history_req_nxt = 2U;
        } else if ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__req_all_req), 2U))) {
            vlSelfRef.__PVT__gnt_requests_req = 4U;
            vlSelfRef.__PVT__serv_history_req_nxt = 4U;
        }
    }
    vlSelfRef.__PVT__gnt_cmq = (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_requests_req), 0U));
    vlSelfRef.__PVT__gnt_reqcmdq = (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_requests_req), 2U));
    vlSelfRef.__PVT__gnt_collnq = (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__gnt_requests_req), 1U));
    vlSelfRef.__PVT__clr_cm_cmdvalid = ((IData)(vlSelfRef.__PVT__gnt_cmq) 
                                        & (~ (IData)(vlSelfRef.__PVT__cm_cmdvalid_evict)));
    vlSelfRef.__PVT__clr_cm_cmdvalid_evict = ((IData)(vlSelfRef.__PVT__gnt_cmq) 
                                              & (IData)(vlSelfRef.__PVT__cm_cmdvalid_evict));
    vlSelfRef.__PVT__rden_reqcmdq = ((IData)(vlSelfRef.__PVT__gnt_reqcmdq) 
                                     & ((~ (IData)(vlSelfRef.__PVT__empty_reqcmdq)) 
                                        | (~ (IData)(vlSelfRef.__PVT__reqfifo_bypass_en))));
    vlSelfRef.__PVT__send_reqcrdt_update = (((IData)(vlSelfRef.__PVT__gnt_reqcmdq) 
                                             & (~ VL_BITSEL_IWII(155, vlSelfRef.__PVT__rddata_reqcmdq_withbypass, 0x99U))) 
                                            & (~ (IData)(vlSelfRef.__PVT__full_reqcmdq)));
    vlSelfRef.__PVT__wren_reqcmdq_withbypass = ((IData)(vlSelfRef.__PVT__wren_reqcmdq) 
                                                & (~ 
                                                   (((IData)(vlSelfRef.__PVT__empty_reqcmdq) 
                                                     & (IData)(vlSelfRef.__PVT__gnt_reqcmdq)) 
                                                    & (IData)(vlSelfRef.__PVT__reqfifo_bypass_en))));
    vlSelfRef.__PVT__collnreq_st_nxt = vlSelfRef.__PVT__collnreq_st;
    vlSelfRef.__PVT__colln_rdy_for_proc_lock_nxt = vlSelfRef.__PVT__colln_rdy_for_proc_lock;
    vlSelfRef.__PVT__req_collnq_nxt = 0U;
    if (vlSelfRef.__PVT__collnreq_st) {
        if (vlSelfRef.__PVT__collnreq_st) {
            if (vlSelfRef.__PVT__gnt_collnq) {
                vlSelfRef.__PVT__collnreq_st_nxt = 0U;
                vlSelfRef.__PVT__req_collnq_nxt = 0U;
                vlSelfRef.__PVT__colln_rdy_for_proc_lock_nxt = 0U;
            } else {
                vlSelfRef.__PVT__req_collnq_nxt = 1U;
            }
        } else {
            vlSelfRef.__PVT__collnreq_st_nxt = vlSelfRef.__PVT__collnreq_st;
        }
    } else if ((0U != (IData)(vlSelfRef.__PVT__colln_rdy_for_proc))) {
        vlSelfRef.__PVT__collnreq_st_nxt = 1U;
        vlSelfRef.__PVT__req_collnq_nxt = 1U;
        vlSelfRef.__PVT__colln_rdy_for_proc_lock_nxt 
            = vlSelfRef.__PVT__colln_rdy_for_proc;
    }
    vlSelfRef.__PVT__cmdvalid_ph2_req_nxt = (((IData)(vlSelfRef.__PVT__gnt_cmq) 
                                              | (IData)(vlSelfRef.__PVT__gnt_collnq)) 
                                             | (IData)(vlSelfRef.__PVT__gnt_reqcmdq));
    VL_ASSIGNSEL_II(8,2,0U, vlSelfRef.__PVT__clr_collnq_valid, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelfRef.__PVT__gnt_collnq) 
                                          & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 1U)), 
                                  ((IData)(vlSelfRef.__PVT__gnt_collnq) 
                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 0U))));
    VL_ASSIGNSEL_II(8,2,2U, vlSelfRef.__PVT__clr_collnq_valid, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelfRef.__PVT__gnt_collnq) 
                                          & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 3U)), 
                                  ((IData)(vlSelfRef.__PVT__gnt_collnq) 
                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 2U))));
    VL_ASSIGNSEL_II(8,2,4U, vlSelfRef.__PVT__clr_collnq_valid, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelfRef.__PVT__gnt_collnq) 
                                          & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 5U)), 
                                  ((IData)(vlSelfRef.__PVT__gnt_collnq) 
                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 4U))));
    VL_ASSIGNSEL_II(8,2,6U, vlSelfRef.__PVT__clr_collnq_valid, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelfRef.__PVT__gnt_collnq) 
                                          & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 7U)), 
                                  ((IData)(vlSelfRef.__PVT__gnt_collnq) 
                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 6U))));
    VL_ASSIGNSEL_II(8,2,0U, vlSelfRef.__PVT__clr_colln_rdy, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelfRef.__PVT__gnt_collnq) 
                                          & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 1U)), 
                                  ((IData)(vlSelfRef.__PVT__gnt_collnq) 
                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 0U))));
    VL_ASSIGNSEL_II(8,2,2U, vlSelfRef.__PVT__clr_colln_rdy, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelfRef.__PVT__gnt_collnq) 
                                          & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 3U)), 
                                  ((IData)(vlSelfRef.__PVT__gnt_collnq) 
                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 2U))));
    VL_ASSIGNSEL_II(8,2,4U, vlSelfRef.__PVT__clr_colln_rdy, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelfRef.__PVT__gnt_collnq) 
                                          & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 5U)), 
                                  ((IData)(vlSelfRef.__PVT__gnt_collnq) 
                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 4U))));
    VL_ASSIGNSEL_II(8,2,6U, vlSelfRef.__PVT__clr_colln_rdy, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelfRef.__PVT__gnt_collnq) 
                                          & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 7U)), 
                                  ((IData)(vlSelfRef.__PVT__gnt_collnq) 
                                   & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__sel_winner_collq), 6U))));
    VL_ASSIGN_W(155,vlSelfRef.__PVT__cmd_req_ph2_pre, vlSelfRef.__PVT__cm_cmd);
    vlSelfRef.__PVT__cmdis_invalidate_ph2_pre = 0U;
    vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph2_pre = 0U;
    vlSelfRef.__PVT__cmdq_srcis_colln_ph2_pre = 0U;
    vlSelfRef.__PVT__cmdq_srcis_newreq_ph2_pre = 0U;
    if ((1U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__gnt_reqcmdq), 
                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__gnt_collnq), (IData)(vlSelfRef.__PVT__gnt_cmq))))) {
        VL_EXTEND_WI(72,32, __Vtemp_1, VL_SEL_IWII(84, vlSelfRef.__PVT__evict_details, 0U, 32));
        VL_CONCAT_WQW(124,52,72, __Vtemp_2, (0xfffffffffffffULL 
                                             & VL_SEL_QWII(84, vlSelfRef.__PVT__evict_details, 0x20U, 52)), __Vtemp_1);
        VL_CONCAT_WIW(155,31,124, __Vtemp_3, (0x7fffffffU 
                                              & VL_SEL_IWII(155, vlSelfRef.__PVT__cm_cmd, 0x7cU, 31)), __Vtemp_2);
        VL_COND_WIWW(155, vlSelfRef.__PVT__cmd_req_ph2_pre, (IData)(vlSelfRef.__PVT__cm_cmdvalid_evict), __Vtemp_3, vlSelfRef.__PVT__cm_cmd);
        vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph2_pre = 1U;
        vlSelfRef.__PVT__cmdis_invalidate_ph2_pre = vlSelfRef.__PVT__cm_cmdvalid_evict;
    } else if ((2U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__gnt_reqcmdq), 
                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__gnt_collnq), (IData)(vlSelfRef.__PVT__gnt_cmq))))) {
        VL_ASSIGN_W(155,vlSelfRef.__PVT__cmd_req_ph2_pre, vlSelfRef.__PVT__winner_colln_entry);
        vlSelfRef.__PVT__cmdq_srcis_colln_ph2_pre = 1U;
        vlSelfRef.__PVT__cmdis_invalidate_ph2_pre = vlSelfRef.__PVT__winner_colln_invalidate;
    } else if ((4U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__gnt_reqcmdq), 
                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__gnt_collnq), (IData)(vlSelfRef.__PVT__gnt_cmq))))) {
        VL_ASSIGN_W(155,vlSelfRef.__PVT__cmd_req_ph2_pre, vlSelfRef.__PVT__rddata_reqcmdq_withbypass);
        vlSelfRef.__PVT__cmdq_srcis_newreq_ph2_pre = 1U;
    }
    VL_ASSIGN_W(155,vlSelfRef.__PVT__cmd_ph2_req_nxt, vlSelfRef.__PVT__cm_cmd);
    vlSelfRef.__PVT__cmdq_src_ph2_req_nxt = 0U;
    vlSelfRef.__PVT__cmdis_req_ph2_nxt = 0U;
    vlSelfRef.__PVT__cmdis_invalidate_ph2_nxt = 0U;
    vlSelfRef.__PVT__req_is_invalid_resperr_ph1 = 0U;
    if ((1U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__gnt_reqcmdq), 
                             VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__gnt_collnq), (IData)(vlSelfRef.__PVT__gnt_cmq))))) {
        VL_EXTEND_WW(155,151, __Vtemp_4, vlSelfRef.__PVT__evict_req_s);
        VL_COND_WIWW(155, vlSelfRef.__PVT__cmd_ph2_req_nxt, (IData)(vlSelfRef.__PVT__cm_cmdvalid_evict), __Vtemp_4, vlSelfRef.__PVT__cm_cmd);
        vlSelfRef.__PVT__cmdq_src_ph2_req_nxt = 0U;
        vlSelfRef.__PVT__cmdis_req_ph2_nxt = 1U;
        vlSelfRef.__PVT__cmdis_invalidate_ph2_nxt = vlSelfRef.__PVT__cm_cmdvalid_evict;
        vlSelfRef.__PVT__req_is_invalid_resperr_ph1 = 0U;
    } else if ((2U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__gnt_reqcmdq), 
                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__gnt_collnq), (IData)(vlSelfRef.__PVT__gnt_cmq))))) {
        VL_ASSIGN_W(155,vlSelfRef.__PVT__cmd_ph2_req_nxt, vlSelfRef.__PVT__winner_colln_entry);
        vlSelfRef.__PVT__cmdq_src_ph2_req_nxt = 1U;
        vlSelfRef.__PVT__cmdis_req_ph2_nxt = 1U;
        vlSelfRef.__PVT__cmdis_invalidate_ph2_nxt = vlSelfRef.__PVT__winner_colln_invalidate;
        vlSelfRef.__PVT__req_is_invalid_resperr_ph1 
            = vlSelfRef.__PVT__winner_colln_addr_invalid;
    } else if ((4U == VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__gnt_reqcmdq), 
                                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__gnt_collnq), (IData)(vlSelfRef.__PVT__gnt_cmq))))) {
        VL_ASSIGN_W(155,vlSelfRef.__PVT__cmd_ph2_req_nxt, vlSelfRef.__PVT__rddata_reqcmdq_withbypass);
        vlSelfRef.__PVT__cmdq_src_ph2_req_nxt = 2U;
        vlSelfRef.__PVT__cmdis_req_ph2_nxt = 1U;
        vlSelfRef.__PVT__req_is_invalid_resperr_ph1 
            = vlSelfRef.__PVT__rddata_reqcmdq_addr_invalid;
    }
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__reqcmd_fifo_0.__PVT__fifo_rden 
        = vlSelfRef.__PVT__rden_reqcmdq;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_coherency_ctrlr_0__reqcmd_fifo_0.__PVT__fifo_wren 
        = vlSelfRef.__PVT__wren_reqcmdq_withbypass;
    vlSelfRef.__PVT__num_emptyloc_collnq_nxt = vlSelfRef.__PVT__num_emptyloc_collnq;
    vlSelfRef.__PVT__num_emptyloc_collnq_nxt = (0xffU 
                                                & (((0U 
                                                     != (IData)(vlSelfRef.__PVT__wren_collnq_valid)) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.__PVT__clr_collnq_valid)))
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__num_emptyloc_collnq) 
                                                    - (IData)(1U))
                                                    : 
                                                   (((0U 
                                                      == (IData)(vlSelfRef.__PVT__wren_collnq_valid)) 
                                                     & (0U 
                                                        != (IData)(vlSelfRef.__PVT__clr_collnq_valid)))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__num_emptyloc_collnq))
                                                     : (IData)(vlSelfRef.__PVT__num_emptyloc_collnq))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_empty_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U)) 
                           & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 0U) 
                              | VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_empty_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U)) 
                           & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 1U) 
                              | VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_empty_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U)) 
                           & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 2U) 
                              | VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_empty_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U)) 
                           & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 3U) 
                              | VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_empty_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U)) 
                           & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 4U) 
                              | VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_empty_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U)) 
                           & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 5U) 
                              | VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_empty_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U)) 
                           & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 6U) 
                              | VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_empty_nxt, 
                    (1U & ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U)) 
                           & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 7U) 
                              | VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_empty), 7U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_cmd_invalidate_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U))
                            ? (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 0U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate), 0U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_cmd_isatmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 0U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 0U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_cmd_isatmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 0U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_cmd_invalidate_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U))
                            ? (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 1U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate), 1U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_cmd_isatmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 1U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 1U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_cmd_isatmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 1U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_cmd_invalidate_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U))
                            ? (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 2U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate), 2U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_cmd_isatmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 2U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 2U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_cmd_isatmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 2U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_cmd_invalidate_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U))
                            ? (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 3U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate), 3U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_cmd_isatmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 3U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 3U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_cmd_isatmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 3U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_cmd_invalidate_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U))
                            ? (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 4U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate), 4U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_cmd_isatmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 4U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 4U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_cmd_isatmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 4U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_cmd_invalidate_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U))
                            ? (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 5U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate), 5U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_cmd_isatmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 5U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 5U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_cmd_isatmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 5U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_cmd_invalidate_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U))
                            ? (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 6U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate), 6U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_cmd_isatmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 6U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 6U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_cmd_isatmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 6U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_cmd_invalidate_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U))
                            ? (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 7U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_invalidate), 7U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_cmd_isatmo_wr_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_wr_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 7U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_wr), 7U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_cmd_isatmo_rd_nxt, 
                    (1U & ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U))
                            ? (IData)(vlSelfRef.__PVT__cmd_isatmo_rd_ph3)
                            : ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_collnq_valid), 7U)) 
                               & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 7U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_rdy_for_proc_nxt, 
                    (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__set_colln_rdy), 0U) 
                           | ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 0U)) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_rdy_for_proc_nxt, 
                    (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__set_colln_rdy), 1U) 
                           | ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 1U)) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_rdy_for_proc_nxt, 
                    (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__set_colln_rdy), 2U) 
                           | ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 2U)) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_rdy_for_proc_nxt, 
                    (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__set_colln_rdy), 3U) 
                           | ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 3U)) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc), 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_rdy_for_proc_nxt, 
                    (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__set_colln_rdy), 4U) 
                           | ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 4U)) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc), 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_rdy_for_proc_nxt, 
                    (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__set_colln_rdy), 5U) 
                           | ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 5U)) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc), 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_rdy_for_proc_nxt, 
                    (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__set_colln_rdy), 6U) 
                           | ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 6U)) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc), 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_rdy_for_proc_nxt, 
                    (1U & (VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__set_colln_rdy), 7U) 
                           | ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 7U)) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_for_proc), 7U)))));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__colln_rdy_atom_block_rd_nxt, 
                    (1U & ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__set_colln_rdy), 0U) 
                            & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 0U)) 
                           | ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 0U)) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_atom_block_rd), 0U)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__colln_rdy_atom_block_rd_nxt, 
                    (1U & ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__set_colln_rdy), 1U) 
                            & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 1U)) 
                           | ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 1U)) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_atom_block_rd), 1U)))));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__colln_rdy_atom_block_rd_nxt, 
                    (1U & ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__set_colln_rdy), 2U) 
                            & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 2U)) 
                           | ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 2U)) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_atom_block_rd), 2U)))));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__colln_rdy_atom_block_rd_nxt, 
                    (1U & ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__set_colln_rdy), 3U) 
                            & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 3U)) 
                           | ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 3U)) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_atom_block_rd), 3U)))));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__colln_rdy_atom_block_rd_nxt, 
                    (1U & ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__set_colln_rdy), 4U) 
                            & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 4U)) 
                           | ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 4U)) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_atom_block_rd), 4U)))));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__colln_rdy_atom_block_rd_nxt, 
                    (1U & ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__set_colln_rdy), 5U) 
                            & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 5U)) 
                           | ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 5U)) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_atom_block_rd), 5U)))));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__colln_rdy_atom_block_rd_nxt, 
                    (1U & ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__set_colln_rdy), 6U) 
                            & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 6U)) 
                           | ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 6U)) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_atom_block_rd), 6U)))));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__colln_rdy_atom_block_rd_nxt, 
                    (1U & ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__set_colln_rdy), 7U) 
                            & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_cmd_isatmo_rd), 7U)) 
                           | ((~ VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 7U)) 
                              & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_rdy_atom_block_rd), 7U)))));
    VL_ASSIGNSEL_WI(224,4,0x18U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(4,1,3, (1U & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1bU)), 
                                  (7U & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x18U, 3))));
    if ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 0U) 
         & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) {
        VL_ASSIGNSEL_WI(224,4,0x18U, vlSelfRef.__PVT__colln_cmd_nxt, 
                        ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                            & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                           & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                              == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                          & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                          ? 8U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                     & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                    & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                       == (0xfffU & 
                                           VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                   & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                      == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                   ? 9U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                              & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                             & ((0xfffU 
                                                 & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                == 
                                                (0xfffU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                            & ((0x7ffU 
                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                               == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                            ? 0xaU : 
                                           ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
                                               & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x6bU)) 
                                              & ((0xfffU 
                                                  & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x54U, 12)) 
                                                 == 
                                                 (0xfffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                             & ((0x7ffU 
                                                 & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x60U, 11)) 
                                                == 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                             ? 0xbU
                                             : ((((
                                                   VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
                                                   & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x87U)) 
                                                  & ((0xfffU 
                                                      & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x70U, 12)) 
                                                     == 
                                                     (0xfffU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                 & ((0x7ffU 
                                                     & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x7cU, 11)) 
                                                    == 
                                                    (0x7ffU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                 ? 0xcU
                                                 : 
                                                ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
                                                    & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa3U)) 
                                                   & ((0xfffU 
                                                       & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x8cU, 12)) 
                                                      == 
                                                      (0xfffU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                  & ((0x7ffU 
                                                      & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x98U, 11)) 
                                                     == 
                                                     (0x7ffU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                  ? 0xdU
                                                  : 
                                                 ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
                                                     & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xbfU)) 
                                                    & ((0xfffU 
                                                        & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa8U, 12)) 
                                                       == 
                                                       (0xfffU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                   & ((0x7ffU 
                                                       & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xb4U, 11)) 
                                                      == 
                                                      (0x7ffU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                   ? 0xeU
                                                   : 
                                                  ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
                                                      & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xdbU)) 
                                                     & ((0xfffU 
                                                         & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xc4U, 12)) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                    & ((0x7ffU 
                                                        & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xd0U, 11)) 
                                                       == 
                                                       (0x7ffU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                    ? 0xfU
                                                    : 
                                                   VL_CONCAT_III(4,1,3, 
                                                                 (1U 
                                                                  & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1bU)), 
                                                                 (7U 
                                                                  & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x18U, 3))))))))))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 0U))) {
        VL_ASSIGNBIT_WI(0x1bU, vlSelfRef.__PVT__colln_cmd_nxt, 0U);
    }
    VL_ASSIGNSEL_WI(224,4,0x34U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(4,1,3, (1U & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x37U)), 
                                  (7U & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x34U, 3))));
    if ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 1U) 
         & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) {
        VL_ASSIGNSEL_WI(224,4,0x34U, vlSelfRef.__PVT__colln_cmd_nxt, 
                        ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                            & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                           & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                              == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                          & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                          ? 8U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                     & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                    & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                       == (0xfffU & 
                                           VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                   & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                      == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                   ? 9U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                              & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                             & ((0xfffU 
                                                 & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                == 
                                                (0xfffU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                            & ((0x7ffU 
                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                               == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                            ? 0xaU : 
                                           ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
                                               & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x6bU)) 
                                              & ((0xfffU 
                                                  & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x54U, 12)) 
                                                 == 
                                                 (0xfffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                             & ((0x7ffU 
                                                 & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x60U, 11)) 
                                                == 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                             ? 0xbU
                                             : ((((
                                                   VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
                                                   & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x87U)) 
                                                  & ((0xfffU 
                                                      & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x70U, 12)) 
                                                     == 
                                                     (0xfffU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                 & ((0x7ffU 
                                                     & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x7cU, 11)) 
                                                    == 
                                                    (0x7ffU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                 ? 0xcU
                                                 : 
                                                ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
                                                    & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa3U)) 
                                                   & ((0xfffU 
                                                       & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x8cU, 12)) 
                                                      == 
                                                      (0xfffU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                  & ((0x7ffU 
                                                      & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x98U, 11)) 
                                                     == 
                                                     (0x7ffU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                  ? 0xdU
                                                  : 
                                                 ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
                                                     & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xbfU)) 
                                                    & ((0xfffU 
                                                        & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa8U, 12)) 
                                                       == 
                                                       (0xfffU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                   & ((0x7ffU 
                                                       & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xb4U, 11)) 
                                                      == 
                                                      (0x7ffU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                   ? 0xeU
                                                   : 
                                                  ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
                                                      & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xdbU)) 
                                                     & ((0xfffU 
                                                         & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xc4U, 12)) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                    & ((0x7ffU 
                                                        & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xd0U, 11)) 
                                                       == 
                                                       (0x7ffU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                    ? 0xfU
                                                    : 
                                                   VL_CONCAT_III(4,1,3, 
                                                                 (1U 
                                                                  & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x37U)), 
                                                                 (7U 
                                                                  & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x34U, 3))))))))))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 1U))) {
        VL_ASSIGNBIT_WI(0x37U, vlSelfRef.__PVT__colln_cmd_nxt, 0U);
    }
    VL_ASSIGNSEL_WI(224,4,0x50U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(4,1,3, (1U & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x53U)), 
                                  (7U & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x50U, 3))));
    if ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 2U) 
         & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) {
        VL_ASSIGNSEL_WI(224,4,0x50U, vlSelfRef.__PVT__colln_cmd_nxt, 
                        ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                            & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                           & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                              == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                          & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                          ? 8U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                     & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                    & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                       == (0xfffU & 
                                           VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                   & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                      == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                   ? 9U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                              & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                             & ((0xfffU 
                                                 & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                == 
                                                (0xfffU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                            & ((0x7ffU 
                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                               == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                            ? 0xaU : 
                                           ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
                                               & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x6bU)) 
                                              & ((0xfffU 
                                                  & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x54U, 12)) 
                                                 == 
                                                 (0xfffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                             & ((0x7ffU 
                                                 & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x60U, 11)) 
                                                == 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                             ? 0xbU
                                             : ((((
                                                   VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
                                                   & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x87U)) 
                                                  & ((0xfffU 
                                                      & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x70U, 12)) 
                                                     == 
                                                     (0xfffU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                 & ((0x7ffU 
                                                     & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x7cU, 11)) 
                                                    == 
                                                    (0x7ffU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                 ? 0xcU
                                                 : 
                                                ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
                                                    & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa3U)) 
                                                   & ((0xfffU 
                                                       & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x8cU, 12)) 
                                                      == 
                                                      (0xfffU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                  & ((0x7ffU 
                                                      & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x98U, 11)) 
                                                     == 
                                                     (0x7ffU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                  ? 0xdU
                                                  : 
                                                 ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
                                                     & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xbfU)) 
                                                    & ((0xfffU 
                                                        & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa8U, 12)) 
                                                       == 
                                                       (0xfffU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                   & ((0x7ffU 
                                                       & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xb4U, 11)) 
                                                      == 
                                                      (0x7ffU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                   ? 0xeU
                                                   : 
                                                  ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
                                                      & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xdbU)) 
                                                     & ((0xfffU 
                                                         & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xc4U, 12)) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                    & ((0x7ffU 
                                                        & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xd0U, 11)) 
                                                       == 
                                                       (0x7ffU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                    ? 0xfU
                                                    : 
                                                   VL_CONCAT_III(4,1,3, 
                                                                 (1U 
                                                                  & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x53U)), 
                                                                 (7U 
                                                                  & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x50U, 3))))))))))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 2U))) {
        VL_ASSIGNBIT_WI(0x53U, vlSelfRef.__PVT__colln_cmd_nxt, 0U);
    }
    VL_ASSIGNSEL_WI(224,4,0x6cU, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(4,1,3, (1U & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x6fU)), 
                                  (7U & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x6cU, 3))));
    if ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 3U) 
         & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) {
        VL_ASSIGNSEL_WI(224,4,0x6cU, vlSelfRef.__PVT__colln_cmd_nxt, 
                        ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                            & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                           & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                              == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                          & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                          ? 8U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                     & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                    & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                       == (0xfffU & 
                                           VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                   & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                      == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                   ? 9U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                              & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                             & ((0xfffU 
                                                 & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                == 
                                                (0xfffU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                            & ((0x7ffU 
                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                               == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                            ? 0xaU : 
                                           ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
                                               & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x6bU)) 
                                              & ((0xfffU 
                                                  & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x54U, 12)) 
                                                 == 
                                                 (0xfffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                             & ((0x7ffU 
                                                 & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x60U, 11)) 
                                                == 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                             ? 0xbU
                                             : ((((
                                                   VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
                                                   & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x87U)) 
                                                  & ((0xfffU 
                                                      & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x70U, 12)) 
                                                     == 
                                                     (0xfffU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                 & ((0x7ffU 
                                                     & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x7cU, 11)) 
                                                    == 
                                                    (0x7ffU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                 ? 0xcU
                                                 : 
                                                ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
                                                    & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa3U)) 
                                                   & ((0xfffU 
                                                       & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x8cU, 12)) 
                                                      == 
                                                      (0xfffU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                  & ((0x7ffU 
                                                      & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x98U, 11)) 
                                                     == 
                                                     (0x7ffU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                  ? 0xdU
                                                  : 
                                                 ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
                                                     & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xbfU)) 
                                                    & ((0xfffU 
                                                        & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa8U, 12)) 
                                                       == 
                                                       (0xfffU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                   & ((0x7ffU 
                                                       & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xb4U, 11)) 
                                                      == 
                                                      (0x7ffU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                   ? 0xeU
                                                   : 
                                                  ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
                                                      & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xdbU)) 
                                                     & ((0xfffU 
                                                         & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xc4U, 12)) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                    & ((0x7ffU 
                                                        & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xd0U, 11)) 
                                                       == 
                                                       (0x7ffU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                    ? 0xfU
                                                    : 
                                                   VL_CONCAT_III(4,1,3, 
                                                                 (1U 
                                                                  & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x6fU)), 
                                                                 (7U 
                                                                  & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x6cU, 3))))))))))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 3U))) {
        VL_ASSIGNBIT_WI(0x6fU, vlSelfRef.__PVT__colln_cmd_nxt, 0U);
    }
    VL_ASSIGNSEL_WI(224,4,0x88U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(4,1,3, (1U & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x8bU)), 
                                  (7U & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x88U, 3))));
    if ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 4U) 
         & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) {
        VL_ASSIGNSEL_WI(224,4,0x88U, vlSelfRef.__PVT__colln_cmd_nxt, 
                        ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                            & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                           & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                              == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                          & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                          ? 8U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                     & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                    & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                       == (0xfffU & 
                                           VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                   & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                      == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                   ? 9U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                              & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                             & ((0xfffU 
                                                 & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                == 
                                                (0xfffU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                            & ((0x7ffU 
                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                               == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                            ? 0xaU : 
                                           ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
                                               & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x6bU)) 
                                              & ((0xfffU 
                                                  & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x54U, 12)) 
                                                 == 
                                                 (0xfffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                             & ((0x7ffU 
                                                 & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x60U, 11)) 
                                                == 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                             ? 0xbU
                                             : ((((
                                                   VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
                                                   & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x87U)) 
                                                  & ((0xfffU 
                                                      & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x70U, 12)) 
                                                     == 
                                                     (0xfffU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                 & ((0x7ffU 
                                                     & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x7cU, 11)) 
                                                    == 
                                                    (0x7ffU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                 ? 0xcU
                                                 : 
                                                ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
                                                    & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa3U)) 
                                                   & ((0xfffU 
                                                       & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x8cU, 12)) 
                                                      == 
                                                      (0xfffU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                  & ((0x7ffU 
                                                      & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x98U, 11)) 
                                                     == 
                                                     (0x7ffU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                  ? 0xdU
                                                  : 
                                                 ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
                                                     & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xbfU)) 
                                                    & ((0xfffU 
                                                        & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa8U, 12)) 
                                                       == 
                                                       (0xfffU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                   & ((0x7ffU 
                                                       & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xb4U, 11)) 
                                                      == 
                                                      (0x7ffU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                   ? 0xeU
                                                   : 
                                                  ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
                                                      & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xdbU)) 
                                                     & ((0xfffU 
                                                         & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xc4U, 12)) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                    & ((0x7ffU 
                                                        & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xd0U, 11)) 
                                                       == 
                                                       (0x7ffU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                    ? 0xfU
                                                    : 
                                                   VL_CONCAT_III(4,1,3, 
                                                                 (1U 
                                                                  & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x8bU)), 
                                                                 (7U 
                                                                  & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x88U, 3))))))))))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 4U))) {
        VL_ASSIGNBIT_WI(0x8bU, vlSelfRef.__PVT__colln_cmd_nxt, 0U);
    }
    VL_ASSIGNSEL_WI(224,4,0xa4U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(4,1,3, (1U & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa7U)), 
                                  (7U & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa4U, 3))));
    if ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 5U) 
         & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) {
        VL_ASSIGNSEL_WI(224,4,0xa4U, vlSelfRef.__PVT__colln_cmd_nxt, 
                        ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                            & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                           & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                              == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                          & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                          ? 8U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                     & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                    & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                       == (0xfffU & 
                                           VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                   & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                      == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                   ? 9U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                              & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                             & ((0xfffU 
                                                 & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                == 
                                                (0xfffU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                            & ((0x7ffU 
                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                               == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                            ? 0xaU : 
                                           ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
                                               & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x6bU)) 
                                              & ((0xfffU 
                                                  & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x54U, 12)) 
                                                 == 
                                                 (0xfffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                             & ((0x7ffU 
                                                 & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x60U, 11)) 
                                                == 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                             ? 0xbU
                                             : ((((
                                                   VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
                                                   & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x87U)) 
                                                  & ((0xfffU 
                                                      & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x70U, 12)) 
                                                     == 
                                                     (0xfffU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                 & ((0x7ffU 
                                                     & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x7cU, 11)) 
                                                    == 
                                                    (0x7ffU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                 ? 0xcU
                                                 : 
                                                ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
                                                    & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa3U)) 
                                                   & ((0xfffU 
                                                       & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x8cU, 12)) 
                                                      == 
                                                      (0xfffU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                  & ((0x7ffU 
                                                      & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x98U, 11)) 
                                                     == 
                                                     (0x7ffU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                  ? 0xdU
                                                  : 
                                                 ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
                                                     & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xbfU)) 
                                                    & ((0xfffU 
                                                        & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa8U, 12)) 
                                                       == 
                                                       (0xfffU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                   & ((0x7ffU 
                                                       & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xb4U, 11)) 
                                                      == 
                                                      (0x7ffU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                   ? 0xeU
                                                   : 
                                                  ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
                                                      & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xdbU)) 
                                                     & ((0xfffU 
                                                         & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xc4U, 12)) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                    & ((0x7ffU 
                                                        & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xd0U, 11)) 
                                                       == 
                                                       (0x7ffU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                    ? 0xfU
                                                    : 
                                                   VL_CONCAT_III(4,1,3, 
                                                                 (1U 
                                                                  & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa7U)), 
                                                                 (7U 
                                                                  & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa4U, 3))))))))))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 5U))) {
        VL_ASSIGNBIT_WI(0xa7U, vlSelfRef.__PVT__colln_cmd_nxt, 0U);
    }
    VL_ASSIGNSEL_WI(224,4,0xc0U, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(4,1,3, (1U & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xc3U)), 
                                  (7U & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xc0U, 3))));
    if ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 6U) 
         & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) {
        VL_ASSIGNSEL_WI(224,4,0xc0U, vlSelfRef.__PVT__colln_cmd_nxt, 
                        ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                            & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                           & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                              == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                          & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                          ? 8U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                     & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                    & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                       == (0xfffU & 
                                           VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                   & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                      == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                   ? 9U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                              & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                             & ((0xfffU 
                                                 & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                == 
                                                (0xfffU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                            & ((0x7ffU 
                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                               == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                            ? 0xaU : 
                                           ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
                                               & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x6bU)) 
                                              & ((0xfffU 
                                                  & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x54U, 12)) 
                                                 == 
                                                 (0xfffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                             & ((0x7ffU 
                                                 & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x60U, 11)) 
                                                == 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                             ? 0xbU
                                             : ((((
                                                   VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
                                                   & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x87U)) 
                                                  & ((0xfffU 
                                                      & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x70U, 12)) 
                                                     == 
                                                     (0xfffU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                 & ((0x7ffU 
                                                     & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x7cU, 11)) 
                                                    == 
                                                    (0x7ffU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                 ? 0xcU
                                                 : 
                                                ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
                                                    & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa3U)) 
                                                   & ((0xfffU 
                                                       & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x8cU, 12)) 
                                                      == 
                                                      (0xfffU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                  & ((0x7ffU 
                                                      & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x98U, 11)) 
                                                     == 
                                                     (0x7ffU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                  ? 0xdU
                                                  : 
                                                 ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
                                                     & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xbfU)) 
                                                    & ((0xfffU 
                                                        & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa8U, 12)) 
                                                       == 
                                                       (0xfffU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                   & ((0x7ffU 
                                                       & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xb4U, 11)) 
                                                      == 
                                                      (0x7ffU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                   ? 0xeU
                                                   : 
                                                  ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
                                                      & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xdbU)) 
                                                     & ((0xfffU 
                                                         & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xc4U, 12)) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                    & ((0x7ffU 
                                                        & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xd0U, 11)) 
                                                       == 
                                                       (0x7ffU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                    ? 0xfU
                                                    : 
                                                   VL_CONCAT_III(4,1,3, 
                                                                 (1U 
                                                                  & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xc3U)), 
                                                                 (7U 
                                                                  & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xc0U, 3))))))))))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 6U))) {
        VL_ASSIGNBIT_WI(0xc3U, vlSelfRef.__PVT__colln_cmd_nxt, 0U);
    }
    VL_ASSIGNSEL_WI(224,4,0xdcU, vlSelfRef.__PVT__colln_cmd_nxt, 
                    VL_CONCAT_III(4,1,3, (1U & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xdfU)), 
                                  (7U & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xdcU, 3))));
    if ((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__wren_collnq_valid), 7U) 
         & (IData)(vlSelfRef.__PVT__cmd_isatmo_ph3))) {
        VL_ASSIGNSEL_WI(224,4,0xdcU, vlSelfRef.__PVT__colln_cmd_nxt, 
                        ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 0U) 
                            & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x17U)) 
                           & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0U, 12)) 
                              == (0xfffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                          & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xcU, 11)) 
                             == (0x7ffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                          ? 8U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 1U) 
                                     & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x33U)) 
                                    & ((0xfffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x1cU, 12)) 
                                       == (0xfffU & 
                                           VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                   & ((0x7ffU & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x28U, 11)) 
                                      == (0x7ffU & 
                                          VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                   ? 9U : ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 2U) 
                                              & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x4fU)) 
                                             & ((0xfffU 
                                                 & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x38U, 12)) 
                                                == 
                                                (0xfffU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                            & ((0x7ffU 
                                                & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x44U, 11)) 
                                               == (0x7ffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                            ? 0xaU : 
                                           ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 3U) 
                                               & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x6bU)) 
                                              & ((0xfffU 
                                                  & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x54U, 12)) 
                                                 == 
                                                 (0xfffU 
                                                  & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                             & ((0x7ffU 
                                                 & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x60U, 11)) 
                                                == 
                                                (0x7ffU 
                                                 & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                             ? 0xbU
                                             : ((((
                                                   VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 4U) 
                                                   & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x87U)) 
                                                  & ((0xfffU 
                                                      & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x70U, 12)) 
                                                     == 
                                                     (0xfffU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                 & ((0x7ffU 
                                                     & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x7cU, 11)) 
                                                    == 
                                                    (0x7ffU 
                                                     & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                 ? 0xcU
                                                 : 
                                                ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 5U) 
                                                    & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa3U)) 
                                                   & ((0xfffU 
                                                       & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x8cU, 12)) 
                                                      == 
                                                      (0xfffU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                  & ((0x7ffU 
                                                      & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0x98U, 11)) 
                                                     == 
                                                     (0x7ffU 
                                                      & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                  ? 0xdU
                                                  : 
                                                 ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 6U) 
                                                     & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xbfU)) 
                                                    & ((0xfffU 
                                                        & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xa8U, 12)) 
                                                       == 
                                                       (0xfffU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                   & ((0x7ffU 
                                                       & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xb4U, 11)) 
                                                      == 
                                                      (0x7ffU 
                                                       & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                   ? 0xeU
                                                   : 
                                                  ((((VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__colln_detected_collnq), 7U) 
                                                      & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xdbU)) 
                                                     & ((0xfffU 
                                                         & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xc4U, 12)) 
                                                        == 
                                                        (0xfffU 
                                                         & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0x1aU, 12)))) 
                                                    & ((0x7ffU 
                                                        & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xd0U, 11)) 
                                                       == 
                                                       (0x7ffU 
                                                        & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph3_req_s, 0xfU, 11))))
                                                    ? 0xfU
                                                    : 
                                                   VL_CONCAT_III(4,1,3, 
                                                                 (1U 
                                                                  & VL_BITSEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xdfU)), 
                                                                 (7U 
                                                                  & VL_SEL_IWII(224, vlSelfRef.__PVT__colln_cmd, 0xdcU, 3))))))))))));
    } else if ((1U & VL_BITSEL_IIII(8, (IData)(vlSelfRef.__PVT__clr_colln_rdy), 7U))) {
        VL_ASSIGNBIT_WI(0xdfU, vlSelfRef.__PVT__colln_cmd_nxt, 0U);
    }
    VL_CONST_W_5X(160,__Vtemp_5,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 155, __Vtemp_6, vlSelfRef.__PVT__cmd_req_ph2_pre, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__cmd_req_ph2_pre_s, __Vtemp_5, __Vtemp_6);
    VL_CONST_W_5X(160,__Vtemp_7,0x007fffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(151, 155, __Vtemp_8, vlSelfRef.__PVT__cmd_ph2_req_nxt, 0U, 151);
    VL_AND_W(5, vlSelfRef.__PVT__cmd_ph1_req_s, __Vtemp_7, __Vtemp_8);
    vlSelfRef.__PVT__cmd_addr_ph2_pre = (0xfffffffffffffULL 
                                         & VL_SEL_QWII(151, vlSelfRef.__PVT__cmd_req_ph2_pre_s, 0x48U, 52));
    vlSelfRef.__PVT__snpattr_req_ph2_pre = (1U & VL_BITSEL_IWII(151, vlSelfRef.__PVT__cmd_req_ph2_pre_s, 0x89U));
    vlSelfRef.__PVT__cm_flit_addr_sliced_pm_ph1 = (0xfffffffU 
                                                   & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph1_req_s, 0x60U, 28));
    vlSelfRef.__PVT__noncm_flit_addr_sliced_pm_ph1 
        = (0xfffffffU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph1_req_s, 0x60U, 28));
    vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1[0U] 
        = (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph1_req_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1[1U] 
        = (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph1_req_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1[2U] 
        = (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph1_req_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1[3U] 
        = (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph1_req_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1[4U] 
        = (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph1_req_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1[5U] 
        = (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph1_req_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1[6U] 
        = (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph1_req_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1[7U] 
        = (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph1_req_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1[8U] 
        = (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph1_req_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1[9U] 
        = (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph1_req_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1[0xaU] 
        = (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph1_req_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1[0xbU] 
        = (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph1_req_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1[0xcU] 
        = (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph1_req_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1[0xdU] 
        = (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph1_req_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1[0xeU] 
        = (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph1_req_s, 0x78U, 4));
    vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1[0xfU] 
        = (0xfU & VL_SEL_IWII(151, vlSelfRef.__PVT__cmd_ph1_req_s, 0x78U, 4));
    vlSelfRef.__PVT__cache_index_rd_ph2_pre = (0x3ffU 
                                               & VL_SEL_IQII(52, vlSelfRef.__PVT__cmd_addr_ph2_pre, 6U, 10));
    vlSelfRef.__PVT__rden_dircache_pre = ((((IData)(vlSelfRef.__PVT__cmdvalid_ph2_req_nxt) 
                                            & (IData)(vlSelfRef.__PVT__snpattr_req_ph2_pre)) 
                                           & (~ (IData)(vlSelfRef.__PVT__req_is_invalid_resperr_ph1))) 
                                          & (((IData)(vlSelfRef.__PVT__cmdq_srcis_newreq_ph2_pre) 
                                              | ((IData)(vlSelfRef.__PVT__cmdq_srcis_cachemiss_ph2_pre) 
                                                 & (~ (IData)(vlSelfRef.__PVT__cmdis_invalidate_ph2_pre)))) 
                                             | (IData)(vlSelfRef.__PVT__cmdq_srcis_colln_ph2_pre)));
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__ucie_addr_match_vec_ph1, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                         [0U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                                   [0U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [0U])));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__ucie_addr_match_vec_ph1, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 1U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                         [1U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [1U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                                   [1U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [1U])));
    VL_ASSIGNBIT_II(2U, vlSelfRef.__PVT__ucie_addr_match_vec_ph1, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 2U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                         [2U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [2U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                                   [2U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [2U])));
    VL_ASSIGNBIT_II(3U, vlSelfRef.__PVT__ucie_addr_match_vec_ph1, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 3U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                         [3U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [3U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                                   [3U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [3U])));
    VL_ASSIGNBIT_II(4U, vlSelfRef.__PVT__ucie_addr_match_vec_ph1, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 4U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                         [4U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [4U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                                   [4U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [4U])));
    VL_ASSIGNBIT_II(5U, vlSelfRef.__PVT__ucie_addr_match_vec_ph1, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 5U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                         [5U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [5U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                                   [5U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [5U])));
    VL_ASSIGNBIT_II(6U, vlSelfRef.__PVT__ucie_addr_match_vec_ph1, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 6U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                         [6U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [6U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                                   [6U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [6U])));
    VL_ASSIGNBIT_II(7U, vlSelfRef.__PVT__ucie_addr_match_vec_ph1, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 7U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                         [7U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [7U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                                   [7U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [7U])));
    VL_ASSIGNBIT_II(8U, vlSelfRef.__PVT__ucie_addr_match_vec_ph1, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 8U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                         [8U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [8U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                                   [8U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [8U])));
    VL_ASSIGNBIT_II(9U, vlSelfRef.__PVT__ucie_addr_match_vec_ph1, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 9U) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                         [9U] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [9U])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                                   [9U] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                   [9U])));
    VL_ASSIGNBIT_II(0xaU, vlSelfRef.__PVT__ucie_addr_match_vec_ph1, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xaU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                         [0xaU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xaU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                                     [0xaU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xaU])));
    VL_ASSIGNBIT_II(0xbU, vlSelfRef.__PVT__ucie_addr_match_vec_ph1, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xbU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                         [0xbU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xbU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                                     [0xbU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xbU])));
    VL_ASSIGNBIT_II(0xcU, vlSelfRef.__PVT__ucie_addr_match_vec_ph1, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xcU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                         [0xcU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xcU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                                     [0xcU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xcU])));
    VL_ASSIGNBIT_II(0xdU, vlSelfRef.__PVT__ucie_addr_match_vec_ph1, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xdU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                         [0xdU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xdU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                                     [0xdU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xdU])));
    VL_ASSIGNBIT_II(0xeU, vlSelfRef.__PVT__ucie_addr_match_vec_ph1, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xeU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                         [0xeU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xeU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                                     [0xeU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xeU])));
    VL_ASSIGNBIT_II(0xfU, vlSelfRef.__PVT__ucie_addr_match_vec_ph1, 
                    ((VL_BITSEL_IIII(16, (IData)(vlSelfRef.__PVT__ucie_sam_activated), 0xfU) 
                      & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                         [0xfU] >= vlSelfRef.__PVT__ucie_sliced_base_addresses
                         [0xfU])) & (vlSelfRef.__PVT__ucie_flit_sliced_addr_ph1
                                     [0xfU] <= vlSelfRef.__PVT__ucie_sliced_limit_addresses
                                     [0xfU])));
}
