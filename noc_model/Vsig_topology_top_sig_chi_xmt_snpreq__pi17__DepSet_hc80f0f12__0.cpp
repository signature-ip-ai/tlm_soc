// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsig_topology_top.h for the primary calling header

#include "Vsig_topology_top__pch.h"
#include "Vsig_topology_top__Syms.h"
#include "Vsig_topology_top_sig_chi_xmt_snpreq__pi17.h"

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi17___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__0(Vsig_topology_top_sig_chi_xmt_snpreq__pi17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi17___ico_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__0\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__sig_chi_crdt_recv_0.__PVT__rstb_cc_clk 
        = vlSelfRef.__PVT__rstb_cc_clk;
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__sig_chi_crdt_recv_0.__PVT__cc_clk 
        = vlSelfRef.__PVT__cc_clk;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi17___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__1(Vsig_topology_top_sig_chi_xmt_snpreq__pi17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi17___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__1\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__sig_chi_crdt_recv_0.__PVT__rcvd_crdt 
        = vlSelfRef.__PVT__ic_TX_SNPLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi17___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__3(Vsig_topology_top_sig_chi_xmt_snpreq__pi17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi17___act_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__3\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__proc_state_nxt = vlSelfRef.__PVT__proc_state;
    vlSelfRef.__PVT__rden_snpreqfifo = 0U;
    vlSelfRef.__PVT__xmt_snpORreq_flit = 0U;
    vlSelfRef.__PVT__xmt_datflit_resperr_nxt = 0U;
    vlSelfRef.__PVT__flittype_rdnosnp_mem = 0U;
    vlSelfRef.__PVT__flittype_wrnosnp_mem = 0U;
    vlSelfRef.__PVT__flittype_rdnosnp_l3 = 0U;
    vlSelfRef.__PVT__flittype_wrnosnp_l3 = 0U;
    vlSelfRef.__PVT__flittype_snp = 0U;
    vlSelfRef.__PVT__flittype_cmo_mem = 0U;
    vlSelfRef.__PVT__flittype_cmo_l3 = 0U;
    vlSelfRef.__PVT__is_xmt_snp_uniq = 0U;
    vlSelfRef.__PVT__snp_tgtid_linear = 0U;
    vlSelfRef.__PVT__share_vect_word_nxt = vlSelfRef.__PVT__share_vect_word;
    vlSelfRef.__PVT__allocate_compbuf_1st = 0U;
    vlSelfRef.__PVT__allocate_compbuf_2nd = 0U;
    vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt 
        = vlSelfRef.__PVT__req_alreadysent_toDirtyNode;
    vlSelfRef.__PVT__allocate_respbuf = 0U;
    vlSelfRef.__PVT__req_resp = 0U;
    vlSelfRef.__PVT__respis_compresp = 0U;
    vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR_nxt 
        = vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR;
    vlSelfRef.__PVT__resp_opcode = 0xfU;
    vlSelfRef.__PVT__replicate_in_cluster = 1U;
    vlSelfRef.__PVT__send_memwr_to_l3_nxt = vlSelfRef.__PVT__send_memwr_to_l3;
    vlSelfRef.__PVT__clr_pendingq = 0U;
    vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata = 0U;
    vlSelfRef.__PVT__cmo_respbuf_allocated_nxt = 0U;
    vlSelfRef.__PVT__slc_readnosnp_apply_dmt_snpreq_out = 0U;
    vlSelfRef.__PVT__slc_origreq_is_read_snp_dmt_out = 0U;
    vlSelfRef.__PVT__avoid_clr_colln_nxt = 0U;
    if (((((((((1U == (IData)(vlSelfRef.__PVT__proc_state)) 
               | (0x40U == (IData)(vlSelfRef.__PVT__proc_state))) 
              | (2U == (IData)(vlSelfRef.__PVT__proc_state))) 
             | (0x80U == (IData)(vlSelfRef.__PVT__proc_state))) 
            | (4U == (IData)(vlSelfRef.__PVT__proc_state))) 
           | (0x200U == (IData)(vlSelfRef.__PVT__proc_state))) 
          | (8U == (IData)(vlSelfRef.__PVT__proc_state))) 
         | (0x10U == (IData)(vlSelfRef.__PVT__proc_state)))) {
        if ((1U == (IData)(vlSelfRef.__PVT__proc_state))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__empty_snpreqfifo)))) {
                if ((1U & (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xafU) 
                           & (~ (IData)(vlSelfRef.__PVT__compdata_clr_outstand))))) {
                    vlSelfRef.__PVT__req_resp = 1U;
                    vlSelfRef.__PVT__respis_compresp = 1U;
                    vlSelfRef.__PVT__resp_opcode = 4U;
                    if (vlSelfRef.__PVT__gnt_rsp_snpreq) {
                        vlSelfRef.__PVT__proc_state_nxt 
                            = ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                                ? 0x800U : 1U);
                        vlSelfRef.__PVT__rden_snpreqfifo 
                            = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
                        vlSelfRef.__PVT__clr_pendingq 
                            = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
                    }
                } else if ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xaeU))) {
                    if (((((((IData)(vlSelfRef.__PVT__cachest_uc) 
                             | (IData)(vlSelfRef.__PVT__cachest_ud)) 
                            & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                           & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                          & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                         & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))) {
                        vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                        vlSelfRef.__PVT__allocate_respbuf = 1U;
                        vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                        vlSelfRef.__PVT__flittype_snp = 1U;
                        vlSelfRef.__PVT__replicate_in_cluster = 0U;
                        vlSelfRef.__PVT__proc_state_nxt = 2U;
                        vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR_nxt = 0U;
                        vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 1U;
                        vlSelfRef.__PVT__send_memwr_to_l3_nxt = 1U;
                    } else if (((((IData)(vlSelfRef.__PVT__cachest_sd) 
                                  & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                                 & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                                & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))) {
                        vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                        vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                        vlSelfRef.__PVT__flittype_snp = 1U;
                        vlSelfRef.__PVT__replicate_in_cluster = 0U;
                        vlSelfRef.__PVT__proc_state_nxt = 2U;
                        vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR_nxt = 1U;
                        vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 1U;
                        vlSelfRef.__PVT__send_memwr_to_l3_nxt = 1U;
                    } else if (vlSelfRef.__PVT__cachest_sc) {
                        vlSelfRef.__PVT__proc_state_nxt = 8U;
                        vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR_nxt = 0U;
                        vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 0U;
                        vlSelfRef.__PVT__send_memwr_to_l3_nxt = 0U;
                    }
                } else if ((1U & ((VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xaaU) 
                                   | (IData)(vlSelfRef.__PVT__write_cmo)) 
                                  & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x85U)))) {
                    if (((IData)(vlSelfRef.__PVT__req_is_nonzero_wr) 
                         | (IData)(vlSelfRef.__PVT__write_cmo))) {
                        vlSelfRef.__PVT__req_resp = 1U;
                        vlSelfRef.__PVT__resp_opcode 
                            = ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb3U))
                                ? 4U : 5U);
                        if (vlSelfRef.__PVT__gnt_rsp_snpreq) {
                            vlSelfRef.__PVT__proc_state_nxt 
                                = ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                                    ? 0x800U : 1U);
                            vlSelfRef.__PVT__rden_snpreqfifo 
                                = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
                        }
                    } else if (((IData)(vlSelfRef.__PVT__req_is_wr_zero) 
                                & (~ (IData)(vlSelfRef.__PVT__compdata_clr_outstand)))) {
                        vlSelfRef.__PVT__req_resp = 1U;
                        vlSelfRef.__PVT__resp_opcode = 5U;
                        vlSelfRef.__PVT__clr_pendingq = 1U;
                        if (vlSelfRef.__PVT__gnt_rsp_snpreq) {
                            vlSelfRef.__PVT__rden_snpreqfifo = 1U;
                        }
                    }
                } else if ((((((IData)(vlSelfRef.__PVT__req_is_nonzero_wr) 
                               | (IData)(vlSelfRef.__PVT__write_cmo)) 
                              & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                             & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                            & (~ (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb8U) 
                                  & (0U == (3U & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x86U, 2))))))) {
                    vlSelfRef.__PVT__req_resp = 1U;
                    vlSelfRef.__PVT__resp_opcode = 
                        ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb3U))
                          ? 4U : (((((IData)(vlSelfRef.__PVT__req_is_wr_unique_full) 
                                     | (IData)(vlSelfRef.__PVT__req_is_wr_unique_ptl)) 
                                    | (IData)(vlSelfRef.__PVT__writeuniq_cmo)) 
                                   | (((IData)(vlSelfRef.__PVT__req_is_wr_nosnp) 
                                       | (IData)(vlSelfRef.__PVT__writenosnp_cmo)) 
                                      & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))))
                                   ? 6U : 5U));
                    if (vlSelfRef.__PVT__gnt_rsp_snpreq) {
                        vlSelfRef.__PVT__allocate_respbuf 
                            = ((IData)(vlSelfRef.__PVT__req_is_wr_nosnp) 
                               | (IData)(vlSelfRef.__PVT__write_cmo));
                        vlSelfRef.__PVT__allocate_compbuf_1st 
                            = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb3U)));
                        vlSelfRef.__PVT__proc_state_nxt 
                            = ((IData)(vlSelfRef.__PVT__cacheable_partial_write)
                                ? 0x40U : (((((IData)(vlSelfRef.__PVT__req_is_wr_uniqueptl_clean_s) 
                                              | (IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_i)) 
                                             & ((IData)(vlSelfRef.__PVT__cachest_sd) 
                                                | (IData)(vlSelfRef.__PVT__cachest_u))) 
                                            & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U)))
                                            ? 4U : 
                                           (((IData)(vlSelfRef.__PVT__write_cmo) 
                                             & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU))
                                             ? 0x80U
                                             : 2U)));
                        vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR_nxt 
                            = vlSelfRef.__PVT__req_is_wr_unique_full;
                        vlSelfRef.__PVT__send_memwr_to_l3_nxt 
                            = (1U & (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU) 
                                     & (~ ((IData)(vlSelfRef.__PVT__write_cmo) 
                                           & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU)))));
                    }
                } else if (((((IData)(vlSelfRef.__PVT__req_is_wr_nosnpfull) 
                              | (IData)(vlSelfRef.__PVT__req_is_wr_nosnpptl)) 
                             & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb8U)) 
                            & (0U == (3U & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x86U, 2))))) {
                    vlSelfRef.__PVT__req_resp = 1U;
                    vlSelfRef.__PVT__resp_opcode = 
                        ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb3U))
                          ? 4U : 5U);
                    if (vlSelfRef.__PVT__gnt_rsp_snpreq) {
                        vlSelfRef.__PVT__proc_state_nxt 
                            = ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                                ? 0x800U : 1U);
                        vlSelfRef.__PVT__rden_snpreqfifo 
                            = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
                    }
                } else if ((((IData)(vlSelfRef.__PVT__req_is_wr_zero) 
                             & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                            & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x85U)))) {
                    vlSelfRef.__PVT__req_resp = 1U;
                    vlSelfRef.__PVT__resp_opcode = 
                        (((IData)(vlSelfRef.__PVT__req_is_wr_unique_zero) 
                          | ((IData)(vlSelfRef.__PVT__req_is_wr_nosnp_zero) 
                             & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))))
                          ? 6U : 5U);
                    if (vlSelfRef.__PVT__gnt_rsp_snpreq) {
                        vlSelfRef.__PVT__allocate_respbuf 
                            = vlSelfRef.__PVT__req_is_wr_nosnp_zero;
                        vlSelfRef.__PVT__proc_state_nxt = 2U;
                        vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR_nxt 
                            = vlSelfRef.__PVT__req_is_wr_unique_zero;
                        vlSelfRef.__PVT__send_memwr_to_l3_nxt 
                            = (1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU));
                    }
                } else if ((((((IData)(vlSelfRef.__PVT__readto_invalid_addr) 
                               & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xaeU))) 
                              & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xafU))) 
                             & (IData)(vlSelfRef.__PVT__dat_link_crdt_atleast_2)) 
                            & (~ (IData)(vlSelfRef.__PVT__compdata_clr_outstand)))) {
                    vlSelfRef.__PVT__xmt_datflit_resperr_nxt = 1U;
                    vlSelfRef.__PVT__clr_pendingq = 
                        (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
                    if (vlSelfRef.__PVT__read_once_nosnp_needs_rcrcpt) {
                        vlSelfRef.__PVT__proc_state_nxt = 0x400U;
                    } else {
                        vlSelfRef.__PVT__proc_state_nxt 
                            = ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                                ? 0x800U : 1U);
                        vlSelfRef.__PVT__rden_snpreqfifo 
                            = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
                    }
                } else if (((((((IData)(vlSelfRef.__PVT__readto_memonly) 
                                & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xaeU))) 
                               & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xafU))) 
                              & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x85U))) 
                             & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                            & (((VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU) 
                                 & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full))) 
                                & (~ (IData)(vlSelfRef.__PVT__compdata_sending_ccreq))) 
                               | (((~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU)) 
                                   & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                                  & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))))) {
                    vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                    vlSelfRef.__PVT__flittype_rdnosnp_mem 
                        = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU)));
                    vlSelfRef.__PVT__flittype_rdnosnp_l3 
                        = (1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU));
                    vlSelfRef.__PVT__allocate_compbuf_1st 
                        = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x82U)));
                    vlSelfRef.__PVT__slc_readnosnp_apply_dmt_snpreq_out 
                        = (1U & (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU) 
                                 & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x82U)));
                    vlSelfRef.__PVT__slc_origreq_is_read_snp_dmt_out 
                        = ((IData)(vlSelfRef.__PVT__slc_readnosnp_apply_dmt_snpreq_out) 
                           & (~ (IData)(vlSelfRef.__PVT__req_is_read_nosnp)));
                    if (vlSelfRef.__PVT__read_once_nosnp_needs_rcrcpt) {
                        vlSelfRef.__PVT__proc_state_nxt = 0x400U;
                    } else {
                        vlSelfRef.__PVT__proc_state_nxt 
                            = ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                                ? 0x800U : 1U);
                        vlSelfRef.__PVT__rden_snpreqfifo 
                            = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
                    }
                } else if (((1U == (7U & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb4U, 3))) 
                            & (IData)(vlSelfRef.__PVT__compbuf_available))) {
                    vlSelfRef.__PVT__req_resp = 1U;
                    vlSelfRef.__PVT__resp_opcode = 6U;
                    if (vlSelfRef.__PVT__gnt_rsp_snpreq) {
                        vlSelfRef.__PVT__proc_state_nxt = 1U;
                        vlSelfRef.__PVT__rden_snpreqfifo = 1U;
                        if ((1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x85U)))) {
                            vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                        }
                    }
                } else if ((((2U == (7U & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb4U, 3))) 
                             & ((IData)(vlSelfRef.__PVT__compbuf_available) 
                                & (IData)(vlSelfRef.__PVT__respbuff_hasroom))) 
                            & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))) {
                    vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                    vlSelfRef.__PVT__allocate_respbuf 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__cachest_sc)));
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__cachest_sc)));
                    vlSelfRef.__PVT__flittype_snp = 
                        (1U & (~ (IData)(vlSelfRef.__PVT__cachest_sc)));
                    vlSelfRef.__PVT__replicate_in_cluster = 0U;
                    vlSelfRef.__PVT__proc_state_nxt = 8U;
                    vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 1U;
                } else if ((((3U == (7U & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb4U, 3))) 
                             & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x85U))) 
                            & ((IData)(vlSelfRef.__PVT__compbuf_available) 
                               & (((VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU) 
                                    & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full))) 
                                   & (~ (IData)(vlSelfRef.__PVT__compdata_sending_ccreq))) 
                                  | (((~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU)) 
                                      & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                                     & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq))))))) {
                    vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                    vlSelfRef.__PVT__flittype_rdnosnp_mem 
                        = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU)));
                    vlSelfRef.__PVT__flittype_rdnosnp_l3 
                        = (1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU));
                    vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                    vlSelfRef.__PVT__proc_state_nxt 
                        = ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                            ? 0x800U : 1U);
                    vlSelfRef.__PVT__rden_snpreqfifo 
                        = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
                } else if (((IData)(vlSelfRef.__PVT__atom_rd_addr_inv_dealloc) 
                            & (~ (IData)(vlSelfRef.__PVT__compdata_clr_outstand)))) {
                    vlSelfRef.__PVT__avoid_clr_colln_nxt = 1U;
                    vlSelfRef.__PVT__rden_snpreqfifo = 1U;
                    vlSelfRef.__PVT__clr_pendingq = 1U;
                } else if (((((IData)(vlSelfRef.__PVT__readto_iconly) 
                              & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xaeU))) 
                             & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xafU))) 
                            & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x85U)))) {
                    vlSelfRef.__PVT__snp_tgtid_linear 
                        = VL_EXTEND_II(11,7, (0x7fU 
                                              & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7)));
                    if ((((((IData)(vlSelfRef.__PVT__apply_dct) 
                            & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                           & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq))) 
                          & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                         & (IData)(vlSelfRef.__PVT__respbuff_hasroom))) {
                        vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                        vlSelfRef.__PVT__flittype_snp = 1U;
                        vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                        vlSelfRef.__PVT__allocate_respbuf 
                            = ((IData)(vlSelfRef.__PVT__cachest_uc) 
                               | (IData)(vlSelfRef.__PVT__cachest_ud));
                        vlSelfRef.__PVT__replicate_in_cluster = 0U;
                        if (((IData)(vlSelfRef.__PVT__req_is_read_u) 
                             | (IData)(vlSelfRef.__PVT__req_is_makeread_u))) {
                            vlSelfRef.__PVT__proc_state_nxt = 0x800U;
                        } else {
                            vlSelfRef.__PVT__proc_state_nxt = 2U;
                            vlSelfRef.__PVT__send_memwr_to_l3_nxt = 1U;
                        }
                    } else if ((((((((IData)(vlSelfRef.__PVT__req_is_read_u) 
                                     | (IData)(vlSelfRef.__PVT__req_is_read_pu)) 
                                    | (IData)(vlSelfRef.__PVT__req_is_makeread_u)) 
                                   & (IData)(vlSelfRef.__PVT__cachest_sd)) 
                                  & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                                 & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                                & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))) {
                        vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                        vlSelfRef.__PVT__flittype_snp = 1U;
                        vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                        vlSelfRef.__PVT__replicate_in_cluster = 0U;
                        vlSelfRef.__PVT__proc_state_nxt = 8U;
                        vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 1U;
                    } else if ((((IData)(vlSelfRef.__PVT__req_link_crdt_avlble) 
                                 & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq))) 
                                & (((((IData)(vlSelfRef.__PVT__cachest_uc) 
                                      | (IData)(vlSelfRef.__PVT__cachest_ud)) 
                                     & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                                    & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                                   | (((~ (IData)(vlSelfRef.__PVT__cachest_uc)) 
                                       & (~ (IData)(vlSelfRef.__PVT__cachest_ud))) 
                                      & (IData)(vlSelfRef.__PVT__compbuf_available))))) {
                        vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                        vlSelfRef.__PVT__flittype_snp = 1U;
                        vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                        vlSelfRef.__PVT__allocate_respbuf 
                            = ((IData)(vlSelfRef.__PVT__cachest_uc) 
                               | (IData)(vlSelfRef.__PVT__cachest_ud));
                        vlSelfRef.__PVT__replicate_in_cluster = 0U;
                        if (vlSelfRef.__PVT__req_read_oc_notsd_in_ucudsd) {
                            vlSelfRef.__PVT__proc_state_nxt = 2U;
                            vlSelfRef.__PVT__send_memwr_to_l3_nxt = 1U;
                        } else if (vlSelfRef.__PVT__read_once_nosnp_needs_rcrcpt) {
                            vlSelfRef.__PVT__proc_state_nxt = 0x400U;
                        } else {
                            vlSelfRef.__PVT__proc_state_nxt 
                                = ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                                    ? 0x800U : 1U);
                            vlSelfRef.__PVT__rden_snpreqfifo 
                                = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
                        }
                    }
                } else if ((((((((IData)(vlSelfRef.__PVT__readto_both_memic) 
                                 & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xaeU))) 
                                & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xafU))) 
                               & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                              & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full))) 
                             & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x85U))) 
                            & (~ (IData)(vlSelfRef.__PVT__compdata_sending_ccreq)))) {
                    vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                    vlSelfRef.__PVT__flittype_rdnosnp_l3 = 1U;
                    vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                    vlSelfRef.__PVT__proc_state_nxt = 8U;
                } else if ((((IData)(vlSelfRef.__PVT__dataless_need_or_mayneed_dxfr_tomm) 
                             & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xafU))) 
                            & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xaeU)))) {
                    if ((((IData)(vlSelfRef.__PVT__cachest_sd) 
                          & (IData)(vlSelfRef.__PVT__reqis_clean_u)) 
                         & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U))) {
                        vlSelfRef.__PVT__proc_state_nxt = 8U;
                    } else if ((((((IData)(vlSelfRef.__PVT__cachest_sd) 
                                   & (IData)(vlSelfRef.__PVT__reqis_clean_u)) 
                                  & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                                 & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                                & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))) {
                        vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                        vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                        vlSelfRef.__PVT__flittype_snp = 1U;
                        vlSelfRef.__PVT__replicate_in_cluster = 0U;
                        vlSelfRef.__PVT__proc_state_nxt = 2U;
                        vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR_nxt = 1U;
                        vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 1U;
                        vlSelfRef.__PVT__send_memwr_to_l3_nxt = 1U;
                    } else if (((((((IData)(vlSelfRef.__PVT__cachest_uc) 
                                    | (IData)(vlSelfRef.__PVT__cachest_ud)) 
                                   & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                                  & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                                 & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                                & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))) {
                        vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                        vlSelfRef.__PVT__allocate_respbuf = 1U;
                        vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                        vlSelfRef.__PVT__flittype_snp = 1U;
                        vlSelfRef.__PVT__replicate_in_cluster = 0U;
                        vlSelfRef.__PVT__proc_state_nxt = 2U;
                        vlSelfRef.__PVT__send_memwr_to_l3_nxt = 1U;
                    } else if ((((IData)(vlSelfRef.__PVT__compbuf_available) 
                                 & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                                & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))) {
                        vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                        vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                        vlSelfRef.__PVT__flittype_snp = 1U;
                        vlSelfRef.__PVT__replicate_in_cluster = 0U;
                        vlSelfRef.__PVT__proc_state_nxt = 2U;
                        vlSelfRef.__PVT__send_memwr_to_l3_nxt = 1U;
                    }
                } else if (((((IData)(vlSelfRef.__PVT__readto_invalidate) 
                              | (IData)(vlSelfRef.__PVT__dataless_no_dxfr_tomm)) 
                             & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xafU))) 
                            & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xaeU)))) {
                    vlSelfRef.__PVT__proc_state_nxt = 8U;
                } else if ((((((IData)(vlSelfRef.__PVT__cmo_no_need_snooping) 
                               & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                              & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                             & (((VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU) 
                                  & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full))) 
                                 & (~ (IData)(vlSelfRef.__PVT__compdata_sending_ccreq))) 
                                | (((~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU)) 
                                    & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                                   & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq))))) 
                            & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x85U)))) {
                    vlSelfRef.__PVT__req_resp = 1U;
                    vlSelfRef.__PVT__respis_compresp = 1U;
                    vlSelfRef.__PVT__resp_opcode = 4U;
                    if (vlSelfRef.__PVT__gnt_rsp_snpreq) {
                        vlSelfRef.__PVT__allocate_compbuf_1st 
                            = (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU) 
                               & (IData)(vlSelfRef.__PVT__reqis_clean_si));
                        vlSelfRef.__PVT__allocate_respbuf = 1U;
                        vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                        vlSelfRef.__PVT__flittype_cmo_l3 
                            = (1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU));
                        vlSelfRef.__PVT__flittype_cmo_mem 
                            = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU)));
                        vlSelfRef.__PVT__proc_state_nxt = 1U;
                        vlSelfRef.__PVT__rden_snpreqfifo = 1U;
                    }
                } else if ((((((((IData)(vlSelfRef.__PVT__cmo_need_snooping_without_data) 
                                 | (IData)(vlSelfRef.__PVT__cmo_need_snooping_with_data)) 
                                & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                               & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                              & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full))) 
                             & (~ (IData)(vlSelfRef.__PVT__compdata_sending_ccreq))) 
                            & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x85U)))) {
                    vlSelfRef.__PVT__allocate_compbuf_1st 
                        = vlSelfRef.__PVT__reqis_clean_si;
                    vlSelfRef.__PVT__allocate_respbuf = 1U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                    vlSelfRef.__PVT__flittype_cmo_l3 = 1U;
                    vlSelfRef.__PVT__proc_state_nxt 
                        = ((IData)(vlSelfRef.__PVT__cmo_need_snooping_with_data)
                            ? 4U : 8U);
                }
            }
        } else if ((0x40U == (IData)(vlSelfRef.__PVT__proc_state))) {
            if ((((IData)(vlSelfRef.__PVT__compbuf_available) 
                  & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full))) 
                 & (~ (IData)(vlSelfRef.__PVT__compdata_sending_ccreq)))) {
                vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                vlSelfRef.__PVT__flittype_rdnosnp_l3 = 1U;
                vlSelfRef.__PVT__allocate_compbuf_2nd = 1U;
                vlSelfRef.__PVT__send_memwr_to_l3_nxt = 1U;
                vlSelfRef.__PVT__proc_state_nxt = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__proc_state))) {
            if (((IData)(vlSelfRef.__PVT__respbuff_hasroom) 
                 & ((((~ (IData)(vlSelfRef.__PVT__send_memwr_to_l3)) 
                      & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                     & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq))) 
                    | (((IData)(vlSelfRef.__PVT__send_memwr_to_l3) 
                        & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full))) 
                       & (~ (IData)(vlSelfRef.__PVT__compdata_sending_ccreq)))))) {
                vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                vlSelfRef.__PVT__flittype_wrnosnp_mem 
                    = (1U & (~ (IData)(vlSelfRef.__PVT__send_memwr_to_l3)));
                vlSelfRef.__PVT__flittype_wrnosnp_l3 
                    = vlSelfRef.__PVT__send_memwr_to_l3;
                vlSelfRef.__PVT__allocate_respbuf = 1U;
                vlSelfRef.__PVT__send_memwr_to_l3_nxt = 0U;
                if (vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR) {
                    vlSelfRef.__PVT__proc_state_nxt = 8U;
                } else if (vlSelfRef.__PVT__req_is_wr_unique_ptl) {
                    vlSelfRef.__PVT__proc_state_nxt = 4U;
                } else if (vlSelfRef.__PVT__read_once_nosnp_needs_rcrcpt) {
                    vlSelfRef.__PVT__proc_state_nxt = 0x400U;
                } else if (vlSelfRef.__PVT__writenosnp_cmo) {
                    vlSelfRef.__PVT__proc_state_nxt = 0x800U;
                } else {
                    vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 0U;
                    vlSelfRef.__PVT__proc_state_nxt 
                        = ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                            ? 0x800U : 1U);
                    vlSelfRef.__PVT__rden_snpreqfifo 
                        = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
                }
            }
        } else if ((0x80U == (IData)(vlSelfRef.__PVT__proc_state))) {
            if (((((IData)(vlSelfRef.__PVT__respbuff_hasroom) 
                   & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                  & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full))) 
                 & (~ (IData)(vlSelfRef.__PVT__compdata_sending_ccreq)))) {
                vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                vlSelfRef.__PVT__flittype_wrnosnp_l3 
                    = vlSelfRef.__PVT__writefull_clean_s;
                vlSelfRef.__PVT__flittype_cmo_l3 = 
                    (1U & (~ (IData)(vlSelfRef.__PVT__flittype_wrnosnp_l3)));
                vlSelfRef.__PVT__allocate_compbuf_2nd 
                    = ((IData)(vlSelfRef.__PVT__writeptl_cmo) 
                       | (IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_i));
                vlSelfRef.__PVT__allocate_respbuf = 1U;
                vlSelfRef.__PVT__proc_state_nxt = (
                                                   ((((((IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_s) 
                                                        | (IData)(vlSelfRef.__PVT__req_is_wr_cleanfl_clean_s)) 
                                                       | (IData)(vlSelfRef.__PVT__req_is_wr_uniqueptl_clean_s)) 
                                                      | (IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_i)) 
                                                     & ((IData)(vlSelfRef.__PVT__cachest_sd) 
                                                        | (IData)(vlSelfRef.__PVT__cachest_u))) 
                                                    & (~ 
                                                       VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U)))
                                                    ? 4U
                                                    : 
                                                   ((((IData)(vlSelfRef.__PVT__writeuniq_cmo) 
                                                      | (IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_i)) 
                                                     & VL_REDOR_I(
                                                                  (0x3fffffU 
                                                                   & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x8fU, 22))))
                                                     ? 8U
                                                     : 0x800U));
            }
        } else if ((4U == (IData)(vlSelfRef.__PVT__proc_state))) {
            if (((IData)(vlSelfRef.__PVT__cachest_sd) 
                 & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U)))) {
                if ((((IData)(vlSelfRef.__PVT__req_link_crdt_avlble) 
                      & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                     & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))) {
                    vlSelfRef.__PVT__allocate_compbuf_2nd = 1U;
                    vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata 
                        = vlSelfRef.__PVT__reqis_clean_si;
                    vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                    vlSelfRef.__PVT__replicate_in_cluster = 0U;
                    vlSelfRef.__PVT__proc_state_nxt 
                        = (((IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_s) 
                            | (IData)(vlSelfRef.__PVT__req_is_wr_cleanfl_clean_s))
                            ? 0x800U : ((IData)(vlSelfRef.__PVT__reqis_clean_s)
                                         ? 1U : 8U));
                    vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt 
                        = (1U & (~ (((IData)(vlSelfRef.__PVT__reqis_clean_s) 
                                     | (IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_s)) 
                                    | (IData)(vlSelfRef.__PVT__req_is_wr_cleanfl_clean_s))));
                    vlSelfRef.__PVT__rden_snpreqfifo 
                        = vlSelfRef.__PVT__reqis_clean_s;
                }
            } else if ((((IData)(vlSelfRef.__PVT__cachest_uc) 
                         | (IData)(vlSelfRef.__PVT__cachest_ud)) 
                        & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U)))) {
                if (((((IData)(vlSelfRef.__PVT__req_link_crdt_avlble) 
                       & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                      & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                     & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))) {
                    vlSelfRef.__PVT__allocate_compbuf_2nd = 1U;
                    vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata 
                        = vlSelfRef.__PVT__reqis_clean_si;
                    vlSelfRef.__PVT__allocate_respbuf = 1U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                    vlSelfRef.__PVT__replicate_in_cluster = 0U;
                    vlSelfRef.__PVT__proc_state_nxt 
                        = (((IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_s) 
                            | (IData)(vlSelfRef.__PVT__req_is_wr_cleanfl_clean_s))
                            ? 0x800U : ((IData)(vlSelfRef.__PVT__reqis_clean_si)
                                         ? 1U : 8U));
                    vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt 
                        = (1U & (~ (((IData)(vlSelfRef.__PVT__reqis_clean_si) 
                                     | (IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_s)) 
                                    | (IData)(vlSelfRef.__PVT__req_is_wr_cleanfl_clean_s))));
                    vlSelfRef.__PVT__rden_snpreqfifo 
                        = vlSelfRef.__PVT__reqis_clean_si;
                }
            } else {
                vlSelfRef.__PVT__proc_state_nxt = 8U;
            }
        } else if ((0x200U == (IData)(vlSelfRef.__PVT__proc_state))) {
            if (vlSelfRef.__PVT__compbuf_available) {
                vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                vlSelfRef.__PVT__flittype_rdnosnp_l3 = 1U;
                vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 0U;
                vlSelfRef.__PVT__proc_state_nxt = (
                                                   (1U 
                                                    & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                                                    ? 0x800U
                                                    : 1U);
                vlSelfRef.__PVT__rden_snpreqfifo = 
                    (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
            }
        } else if ((8U == (IData)(vlSelfRef.__PVT__proc_state))) {
            vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR_nxt = 0U;
            if (VL_REDOR_I((0x3fffffU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x8fU, 22)))) {
                vlSelfRef.__PVT__proc_state_nxt = 0x10U;
                vlSelfRef.__PVT__share_vect_word_nxt 
                    = (0x3fffffU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x8fU, 22));
            } else if (((IData)(vlSelfRef.__PVT__req_is_wr_unique) 
                        | (IData)(vlSelfRef.__PVT__write_cmo))) {
                vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 0U;
                vlSelfRef.__PVT__proc_state_nxt = (
                                                   (1U 
                                                    & (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU) 
                                                       | (IData)(vlSelfRef.__PVT__write_cmo)))
                                                    ? 0x800U
                                                    : 1U);
                vlSelfRef.__PVT__rden_snpreqfifo = 
                    (1U & (~ (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU) 
                              | (IData)(vlSelfRef.__PVT__write_cmo))));
            }
        } else {
            vlSelfRef.__PVT__is_xmt_snp_uniq = 1U;
            if (((((IData)(vlSelfRef.__PVT__anyp_valid) 
                   & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                  & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                 & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))) {
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0x15U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0x15U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0x15U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0x15U == (0x7fU 
                                              & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x14U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0x14U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0x14U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0x14U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0x14U == (0x7fU 
                                              & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x13U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0x13U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0x13U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0x13U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0x13U == (0x7fU 
                                              & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x12U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0x12U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0x12U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0x12U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0x12U == (0x7fU 
                                              & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x11U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0x11U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0x11U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0x11U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0x11U == (0x7fU 
                                              & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x10U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0x10U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0x10U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0x10U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0x10U == (0x7fU 
                                              & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xfU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0xfU))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0xfU;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0xfU != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0xfU == (0x7fU 
                                             & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xeU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0xeU))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0xeU;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0xeU != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0xeU == (0x7fU 
                                             & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xdU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0xdU))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0xdU;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0xdU != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0xdU == (0x7fU 
                                             & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xcU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0xcU))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0xcU;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0xcU != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0xcU == (0x7fU 
                                             & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xbU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0xbU))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0xbU;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0xbU != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0xbU == (0x7fU 
                                             & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xaU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0xaU))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0xaU;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0xaU != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0xaU == (0x7fU 
                                             & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 9U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 9U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 9U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (9U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (9U == (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 8U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 8U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 8U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (8U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (8U == (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 7U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 7U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 7U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (7U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (7U == (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 6U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 6U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 6U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (6U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (6U == (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 5U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 5U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 5U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (5U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (5U == (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 4U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 4U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 4U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (4U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (4U == (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 3U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 3U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 3U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (3U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (3U == (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 2U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 2U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 2U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (2U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (2U == (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 1U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 1U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 1U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (1U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (1U == (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0U == (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vlvbound_h6854731d__0 = 0U;
                if (VL_LIKELY(((0x15U >= (0x1fU & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__snp_tgtid_linear), 0U, 5)))))) {
                    VL_ASSIGNBIT_II((0x1fU & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__snp_tgtid_linear), 0U, 5)), vlSelfRef.__PVT__share_vect_word_nxt, vlSelfRef.__Vlvbound_h6854731d__0);
                }
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__anyp_valid)))) {
                vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 0U;
                vlSelfRef.__PVT__proc_state_nxt = (
                                                   (1U 
                                                    & (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU) 
                                                       | (IData)(vlSelfRef.__PVT__write_cmo)))
                                                    ? 0x800U
                                                    : 1U);
                vlSelfRef.__PVT__rden_snpreqfifo = 
                    (1U & (~ (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU) 
                              | (IData)(vlSelfRef.__PVT__write_cmo))));
            }
        }
    } else if ((0x400U == (IData)(vlSelfRef.__PVT__proc_state))) {
        vlSelfRef.__PVT__req_resp = 1U;
        vlSelfRef.__PVT__resp_opcode = 8U;
        if (vlSelfRef.__PVT__gnt_rsp_snpreq) {
            vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 0U;
            vlSelfRef.__PVT__proc_state_nxt = ((1U 
                                                & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                                                ? 0x800U
                                                : 1U);
            vlSelfRef.__PVT__rden_snpreqfifo = (1U 
                                                & (~ 
                                                   VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
        }
    } else if ((0x800U == (IData)(vlSelfRef.__PVT__proc_state))) {
        if (vlSelfRef.__PVT__respbuff_hasroom) {
            if (((IData)(vlSelfRef.__PVT__write_cmo) 
                 & (~ (IData)(vlSelfRef.__PVT__cmo_respbuf_allocated)))) {
                vlSelfRef.__PVT__allocate_respbuf = 1U;
                vlSelfRef.__PVT__cmo_respbuf_allocated_nxt 
                    = (1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU));
                vlSelfRef.__PVT__proc_state_nxt = (
                                                   (1U 
                                                    & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                                                    ? 0x800U
                                                    : 1U);
                vlSelfRef.__PVT__rden_snpreqfifo = 
                    (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
            } else {
                vlSelfRef.__PVT__proc_state_nxt = 1U;
                vlSelfRef.__PVT__allocate_respbuf = 1U;
                vlSelfRef.__PVT__rden_snpreqfifo = 1U;
            }
        }
    }
    vlSelfRef.__PVT__clr_outstand_cmd_pre = 0U;
    if (vlSelfRef.__PVT__clr_pendingq) {
        VL_ASSIGNBIT_IO((0x1fU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x1aU, 5)), vlSelfRef.__PVT__clr_outstand_cmd_pre);
    }
    VL_ASSIGNSEL_WI(73,9,0x2dU, vlSelfRef.__PVT__respbody_snpreq_s, 
                    VL_EXTEND_II(9,3, (7U & ((IData)(vlSelfRef.__PVT__respis_compresp)
                                              ? VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb0U, 3)
                                              : 0U))));
    vlSelfRef.__PVT__snp_tgtid_muxed = ((IData)(vlSelfRef.__PVT__is_xmt_snp_uniq)
                                         ? (IData)(vlSelfRef.__PVT__snp_tgtid_linear)
                                         : VL_EXTEND_II(11,7, 
                                                        (0x7fU 
                                                         & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))));
    VL_ASSIGNSEL_WI(73,17,0x1aU, vlSelfRef.__PVT__respbody_snpreq_s, 
                    VL_CONCAT_III(17,5,12, (IData)(vlSelfRef.__PVT__resp_opcode), 
                                  (0xfffU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x32U, 12))));
    VL_ASSIGNSEL_WI(73,2,0x2bU, vlSelfRef.__PVT__respbody_snpreq_s, 
                    (3U & VL_SEL_IIII(32, (((4U == (IData)(vlSelfRef.__PVT__resp_opcode)) 
                                            | (5U == (IData)(vlSelfRef.__PVT__resp_opcode)))
                                            ? VL_EXTEND_II(32,2, 
                                                           (3U 
                                                            & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x86U, 2)))
                                            : 0U), 0U, 2)));
    vlSelfRef.__PVT__flittype_cmo = ((IData)(vlSelfRef.__PVT__flittype_cmo_mem) 
                                     | (IData)(vlSelfRef.__PVT__flittype_cmo_l3));
    vlSelfRef.__PVT__ic_TX_SNPFLITV = ((IData)(vlSelfRef.__PVT__xmt_snpORreq_flit) 
                                       & ((((IData)(vlSelfRef.__PVT__flittype_snp) 
                                            | (IData)(vlSelfRef.__PVT__flittype_rdnosnp_mem)) 
                                           | (IData)(vlSelfRef.__PVT__flittype_wrnosnp_mem)) 
                                          | (IData)(vlSelfRef.__PVT__flittype_cmo_mem)));
    vlSelfRef.__PVT__flittype_rdnosnp = ((IData)(vlSelfRef.__PVT__flittype_rdnosnp_mem) 
                                         | (IData)(vlSelfRef.__PVT__flittype_rdnosnp_l3));
    vlSelfRef.__PVT__cc_reqflit_valid = ((IData)(vlSelfRef.__PVT__xmt_snpORreq_flit) 
                                         & (((IData)(vlSelfRef.__PVT__flittype_rdnosnp_l3) 
                                             | (IData)(vlSelfRef.__PVT__flittype_wrnosnp_l3)) 
                                            | (IData)(vlSelfRef.__PVT__flittype_cmo_l3)));
    vlSelfRef.__PVT__flittype_wrnosnp = ((IData)(vlSelfRef.__PVT__flittype_wrnosnp_mem) 
                                         | (IData)(vlSelfRef.__PVT__flittype_wrnosnp_l3));
    vlSelfRef.__PVT__wren_compbuff_num_1st = vlSelfRef.__PVT__allocate_compbuf_1st;
    vlSelfRef.__PVT__wren_compbuff_num_2nd = vlSelfRef.__PVT__allocate_compbuf_2nd;
    vlSelfRef.__PVT__allocate_compbuf = ((IData)(vlSelfRef.__PVT__allocate_compbuf_1st) 
                                         | (IData)(vlSelfRef.__PVT__allocate_compbuf_2nd));
    vlSelfRef.__PVT__o_xmt_snpreq_linear_tgtid = vlSelfRef.__PVT__snp_tgtid_muxed;
    VL_ASSIGNSEL_WI(119,11,0x6cU, vlSelfRef.__PVT__ic_TX_FLIT_SNPREQ_s, vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid);
    VL_CONCAT_WIW(74,1,73, vlSelfRef.__PVT__respbody_snpreq, 
                  (1U & (~ (IData)(vlSelfRef.__PVT__req_nonsnpable))), vlSelfRef.__PVT__respbody_snpreq_s);
    vlSelfRef.__PVT__consumed_crdt = ((IData)(vlSelfRef.__PVT__ic_TX_SNPFLITV) 
                                      | (IData)(vlSelfRef.__PVT__compdata_sending_memreq));
    VL_ASSIGNSEL_WI(151,4,0x93U, vlSelfRef.__PVT__ic_TX_FLIT_MEMREQ_s, 
                    VL_CONCAT_III(4,3,1, VL_EXTEND_II(3,2, 
                                                      (3U 
                                                       & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7fU, 2))), 
                                  ((IData)(vlSelfRef.__PVT__flittype_rdnosnp) 
                                   & (IData)(vlSelfRef.__PVT__ExpCompAck_Rdnosnp))));
    vlSelfRef.__PVT__memreq_opcode = 0U;
    if (vlSelfRef.__PVT__flittype_wrnosnp) {
        vlSelfRef.__PVT__memreq_opcode = (0x7fU & (
                                                   (0x1cU 
                                                    == 
                                                    (0x7fU 
                                                     & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)))
                                                    ? 0x1cU
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__req_is_wr_zero)
                                                     ? 0x44U
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__writenosnp_cmo)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__flittype_wrnosnp_l3)
                                                       ? 0x1dU
                                                       : 
                                                      VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))
                                                      : 0x1dU))));
    } else if (vlSelfRef.__PVT__flittype_rdnosnp) {
        vlSelfRef.__PVT__memreq_opcode = 4U;
    } else if (vlSelfRef.__PVT__flittype_cmo) {
        vlSelfRef.__PVT__memreq_opcode = (0x7fU & (
                                                   (((IData)(vlSelfRef.__PVT__req_is_wr_nosnpfl_clean_i) 
                                                     | (IData)(vlSelfRef.__PVT__req_is_wr_nosnpfl_clean_s)) 
                                                    | (IData)(vlSelfRef.__PVT__req_is_wr_uniquefl_clean_s))
                                                    ? 0xaU
                                                    : 
                                                   (((((IData)(vlSelfRef.__PVT__writeptl_cmo) 
                                                       | (IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_i)) 
                                                      | (IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_s)) 
                                                     | (IData)(vlSelfRef.__PVT__req_is_wr_cleanfl_clean_s))
                                                     ? 9U
                                                     : 
                                                    VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))));
    }
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__sig_chi_crdt_recv_0.__PVT__consumed_crdt 
        = vlSelfRef.__PVT__consumed_crdt;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi17___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__2(Vsig_topology_top_sig_chi_xmt_snpreq__pi17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi17___nba_sequent__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__2\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__available_credits = vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__sig_chi_crdt_recv_0.__PVT__available_credits;
    vlSelfRef.__PVT__req_link_crdt_avlble = (0U != (IData)(vlSelfRef.__PVT__available_credits));
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi17___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__6(Vsig_topology_top_sig_chi_xmt_snpreq__pi17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi17___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__6\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__sig_chi_crdt_recv_0.__PVT__rcvd_crdt 
        = vlSelfRef.__PVT__ic_TX_SNPLCRDV;
}

VL_INLINE_OPT void Vsig_topology_top_sig_chi_xmt_snpreq__pi17___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__9(Vsig_topology_top_sig_chi_xmt_snpreq__pi17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsig_topology_top_sig_chi_xmt_snpreq__pi17___nba_comb__TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__9\n"); );
    Vsig_topology_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__proc_state_nxt = vlSelfRef.__PVT__proc_state;
    vlSelfRef.__PVT__rden_snpreqfifo = 0U;
    vlSelfRef.__PVT__xmt_snpORreq_flit = 0U;
    vlSelfRef.__PVT__xmt_datflit_resperr_nxt = 0U;
    vlSelfRef.__PVT__flittype_rdnosnp_mem = 0U;
    vlSelfRef.__PVT__flittype_wrnosnp_mem = 0U;
    vlSelfRef.__PVT__flittype_rdnosnp_l3 = 0U;
    vlSelfRef.__PVT__flittype_wrnosnp_l3 = 0U;
    vlSelfRef.__PVT__flittype_snp = 0U;
    vlSelfRef.__PVT__flittype_cmo_mem = 0U;
    vlSelfRef.__PVT__flittype_cmo_l3 = 0U;
    vlSelfRef.__PVT__is_xmt_snp_uniq = 0U;
    vlSelfRef.__PVT__snp_tgtid_linear = 0U;
    vlSelfRef.__PVT__share_vect_word_nxt = vlSelfRef.__PVT__share_vect_word;
    vlSelfRef.__PVT__allocate_compbuf_1st = 0U;
    vlSelfRef.__PVT__allocate_compbuf_2nd = 0U;
    vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt 
        = vlSelfRef.__PVT__req_alreadysent_toDirtyNode;
    vlSelfRef.__PVT__allocate_respbuf = 0U;
    vlSelfRef.__PVT__req_resp = 0U;
    vlSelfRef.__PVT__respis_compresp = 0U;
    vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR_nxt 
        = vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR;
    vlSelfRef.__PVT__resp_opcode = 0xfU;
    vlSelfRef.__PVT__replicate_in_cluster = 1U;
    vlSelfRef.__PVT__send_memwr_to_l3_nxt = vlSelfRef.__PVT__send_memwr_to_l3;
    vlSelfRef.__PVT__clr_pendingq = 0U;
    vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata = 0U;
    vlSelfRef.__PVT__cmo_respbuf_allocated_nxt = 0U;
    vlSelfRef.__PVT__slc_readnosnp_apply_dmt_snpreq_out = 0U;
    vlSelfRef.__PVT__slc_origreq_is_read_snp_dmt_out = 0U;
    vlSelfRef.__PVT__avoid_clr_colln_nxt = 0U;
    if (((((((((1U == (IData)(vlSelfRef.__PVT__proc_state)) 
               | (0x40U == (IData)(vlSelfRef.__PVT__proc_state))) 
              | (2U == (IData)(vlSelfRef.__PVT__proc_state))) 
             | (0x80U == (IData)(vlSelfRef.__PVT__proc_state))) 
            | (4U == (IData)(vlSelfRef.__PVT__proc_state))) 
           | (0x200U == (IData)(vlSelfRef.__PVT__proc_state))) 
          | (8U == (IData)(vlSelfRef.__PVT__proc_state))) 
         | (0x10U == (IData)(vlSelfRef.__PVT__proc_state)))) {
        if ((1U == (IData)(vlSelfRef.__PVT__proc_state))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__empty_snpreqfifo)))) {
                if ((1U & (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xafU) 
                           & (~ (IData)(vlSelfRef.__PVT__compdata_clr_outstand))))) {
                    vlSelfRef.__PVT__req_resp = 1U;
                    vlSelfRef.__PVT__respis_compresp = 1U;
                    vlSelfRef.__PVT__resp_opcode = 4U;
                    if (vlSelfRef.__PVT__gnt_rsp_snpreq) {
                        vlSelfRef.__PVT__proc_state_nxt 
                            = ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                                ? 0x800U : 1U);
                        vlSelfRef.__PVT__rden_snpreqfifo 
                            = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
                        vlSelfRef.__PVT__clr_pendingq 
                            = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
                    }
                } else if ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xaeU))) {
                    if (((((((IData)(vlSelfRef.__PVT__cachest_uc) 
                             | (IData)(vlSelfRef.__PVT__cachest_ud)) 
                            & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                           & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                          & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                         & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))) {
                        vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                        vlSelfRef.__PVT__allocate_respbuf = 1U;
                        vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                        vlSelfRef.__PVT__flittype_snp = 1U;
                        vlSelfRef.__PVT__replicate_in_cluster = 0U;
                        vlSelfRef.__PVT__proc_state_nxt = 2U;
                        vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR_nxt = 0U;
                        vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 1U;
                        vlSelfRef.__PVT__send_memwr_to_l3_nxt = 1U;
                    } else if (((((IData)(vlSelfRef.__PVT__cachest_sd) 
                                  & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                                 & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                                & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))) {
                        vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                        vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                        vlSelfRef.__PVT__flittype_snp = 1U;
                        vlSelfRef.__PVT__replicate_in_cluster = 0U;
                        vlSelfRef.__PVT__proc_state_nxt = 2U;
                        vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR_nxt = 1U;
                        vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 1U;
                        vlSelfRef.__PVT__send_memwr_to_l3_nxt = 1U;
                    } else if (vlSelfRef.__PVT__cachest_sc) {
                        vlSelfRef.__PVT__proc_state_nxt = 8U;
                        vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR_nxt = 0U;
                        vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 0U;
                        vlSelfRef.__PVT__send_memwr_to_l3_nxt = 0U;
                    }
                } else if ((1U & ((VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xaaU) 
                                   | (IData)(vlSelfRef.__PVT__write_cmo)) 
                                  & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x85U)))) {
                    if (((IData)(vlSelfRef.__PVT__req_is_nonzero_wr) 
                         | (IData)(vlSelfRef.__PVT__write_cmo))) {
                        vlSelfRef.__PVT__req_resp = 1U;
                        vlSelfRef.__PVT__resp_opcode 
                            = ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb3U))
                                ? 4U : 5U);
                        if (vlSelfRef.__PVT__gnt_rsp_snpreq) {
                            vlSelfRef.__PVT__proc_state_nxt 
                                = ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                                    ? 0x800U : 1U);
                            vlSelfRef.__PVT__rden_snpreqfifo 
                                = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
                        }
                    } else if (((IData)(vlSelfRef.__PVT__req_is_wr_zero) 
                                & (~ (IData)(vlSelfRef.__PVT__compdata_clr_outstand)))) {
                        vlSelfRef.__PVT__req_resp = 1U;
                        vlSelfRef.__PVT__resp_opcode = 5U;
                        vlSelfRef.__PVT__clr_pendingq = 1U;
                        if (vlSelfRef.__PVT__gnt_rsp_snpreq) {
                            vlSelfRef.__PVT__rden_snpreqfifo = 1U;
                        }
                    }
                } else if ((((((IData)(vlSelfRef.__PVT__req_is_nonzero_wr) 
                               | (IData)(vlSelfRef.__PVT__write_cmo)) 
                              & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                             & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                            & (~ (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb8U) 
                                  & (0U == (3U & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x86U, 2))))))) {
                    vlSelfRef.__PVT__req_resp = 1U;
                    vlSelfRef.__PVT__resp_opcode = 
                        ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb3U))
                          ? 4U : (((((IData)(vlSelfRef.__PVT__req_is_wr_unique_full) 
                                     | (IData)(vlSelfRef.__PVT__req_is_wr_unique_ptl)) 
                                    | (IData)(vlSelfRef.__PVT__writeuniq_cmo)) 
                                   | (((IData)(vlSelfRef.__PVT__req_is_wr_nosnp) 
                                       | (IData)(vlSelfRef.__PVT__writenosnp_cmo)) 
                                      & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))))
                                   ? 6U : 5U));
                    if (vlSelfRef.__PVT__gnt_rsp_snpreq) {
                        vlSelfRef.__PVT__allocate_respbuf 
                            = ((IData)(vlSelfRef.__PVT__req_is_wr_nosnp) 
                               | (IData)(vlSelfRef.__PVT__write_cmo));
                        vlSelfRef.__PVT__allocate_compbuf_1st 
                            = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb3U)));
                        vlSelfRef.__PVT__proc_state_nxt 
                            = ((IData)(vlSelfRef.__PVT__cacheable_partial_write)
                                ? 0x40U : (((((IData)(vlSelfRef.__PVT__req_is_wr_uniqueptl_clean_s) 
                                              | (IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_i)) 
                                             & ((IData)(vlSelfRef.__PVT__cachest_sd) 
                                                | (IData)(vlSelfRef.__PVT__cachest_u))) 
                                            & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U)))
                                            ? 4U : 
                                           (((IData)(vlSelfRef.__PVT__write_cmo) 
                                             & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU))
                                             ? 0x80U
                                             : 2U)));
                        vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR_nxt 
                            = vlSelfRef.__PVT__req_is_wr_unique_full;
                        vlSelfRef.__PVT__send_memwr_to_l3_nxt 
                            = (1U & (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU) 
                                     & (~ ((IData)(vlSelfRef.__PVT__write_cmo) 
                                           & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU)))));
                    }
                } else if (((((IData)(vlSelfRef.__PVT__req_is_wr_nosnpfull) 
                              | (IData)(vlSelfRef.__PVT__req_is_wr_nosnpptl)) 
                             & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb8U)) 
                            & (0U == (3U & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x86U, 2))))) {
                    vlSelfRef.__PVT__req_resp = 1U;
                    vlSelfRef.__PVT__resp_opcode = 
                        ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb3U))
                          ? 4U : 5U);
                    if (vlSelfRef.__PVT__gnt_rsp_snpreq) {
                        vlSelfRef.__PVT__proc_state_nxt 
                            = ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                                ? 0x800U : 1U);
                        vlSelfRef.__PVT__rden_snpreqfifo 
                            = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
                    }
                } else if ((((IData)(vlSelfRef.__PVT__req_is_wr_zero) 
                             & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                            & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x85U)))) {
                    vlSelfRef.__PVT__req_resp = 1U;
                    vlSelfRef.__PVT__resp_opcode = 
                        (((IData)(vlSelfRef.__PVT__req_is_wr_unique_zero) 
                          | ((IData)(vlSelfRef.__PVT__req_is_wr_nosnp_zero) 
                             & (~ (IData)(vlSelfRef.__PVT__use_early_write_response))))
                          ? 6U : 5U);
                    if (vlSelfRef.__PVT__gnt_rsp_snpreq) {
                        vlSelfRef.__PVT__allocate_respbuf 
                            = vlSelfRef.__PVT__req_is_wr_nosnp_zero;
                        vlSelfRef.__PVT__proc_state_nxt = 2U;
                        vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR_nxt 
                            = vlSelfRef.__PVT__req_is_wr_unique_zero;
                        vlSelfRef.__PVT__send_memwr_to_l3_nxt 
                            = (1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU));
                    }
                } else if ((((((IData)(vlSelfRef.__PVT__readto_invalid_addr) 
                               & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xaeU))) 
                              & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xafU))) 
                             & (IData)(vlSelfRef.__PVT__dat_link_crdt_atleast_2)) 
                            & (~ (IData)(vlSelfRef.__PVT__compdata_clr_outstand)))) {
                    vlSelfRef.__PVT__xmt_datflit_resperr_nxt = 1U;
                    vlSelfRef.__PVT__clr_pendingq = 
                        (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
                    if (vlSelfRef.__PVT__read_once_nosnp_needs_rcrcpt) {
                        vlSelfRef.__PVT__proc_state_nxt = 0x400U;
                    } else {
                        vlSelfRef.__PVT__proc_state_nxt 
                            = ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                                ? 0x800U : 1U);
                        vlSelfRef.__PVT__rden_snpreqfifo 
                            = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
                    }
                } else if (((((((IData)(vlSelfRef.__PVT__readto_memonly) 
                                & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xaeU))) 
                               & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xafU))) 
                              & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x85U))) 
                             & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                            & (((VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU) 
                                 & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full))) 
                                & (~ (IData)(vlSelfRef.__PVT__compdata_sending_ccreq))) 
                               | (((~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU)) 
                                   & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                                  & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))))) {
                    vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                    vlSelfRef.__PVT__flittype_rdnosnp_mem 
                        = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU)));
                    vlSelfRef.__PVT__flittype_rdnosnp_l3 
                        = (1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU));
                    vlSelfRef.__PVT__allocate_compbuf_1st 
                        = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x82U)));
                    vlSelfRef.__PVT__slc_readnosnp_apply_dmt_snpreq_out 
                        = (1U & (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU) 
                                 & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x82U)));
                    vlSelfRef.__PVT__slc_origreq_is_read_snp_dmt_out 
                        = ((IData)(vlSelfRef.__PVT__slc_readnosnp_apply_dmt_snpreq_out) 
                           & (~ (IData)(vlSelfRef.__PVT__req_is_read_nosnp)));
                    if (vlSelfRef.__PVT__read_once_nosnp_needs_rcrcpt) {
                        vlSelfRef.__PVT__proc_state_nxt = 0x400U;
                    } else {
                        vlSelfRef.__PVT__proc_state_nxt 
                            = ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                                ? 0x800U : 1U);
                        vlSelfRef.__PVT__rden_snpreqfifo 
                            = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
                    }
                } else if (((1U == (7U & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb4U, 3))) 
                            & (IData)(vlSelfRef.__PVT__compbuf_available))) {
                    vlSelfRef.__PVT__req_resp = 1U;
                    vlSelfRef.__PVT__resp_opcode = 6U;
                    if (vlSelfRef.__PVT__gnt_rsp_snpreq) {
                        vlSelfRef.__PVT__proc_state_nxt = 1U;
                        vlSelfRef.__PVT__rden_snpreqfifo = 1U;
                        if ((1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x85U)))) {
                            vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                        }
                    }
                } else if ((((2U == (7U & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb4U, 3))) 
                             & ((IData)(vlSelfRef.__PVT__compbuf_available) 
                                & (IData)(vlSelfRef.__PVT__respbuff_hasroom))) 
                            & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))) {
                    vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                    vlSelfRef.__PVT__allocate_respbuf 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__cachest_sc)));
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__cachest_sc)));
                    vlSelfRef.__PVT__flittype_snp = 
                        (1U & (~ (IData)(vlSelfRef.__PVT__cachest_sc)));
                    vlSelfRef.__PVT__replicate_in_cluster = 0U;
                    vlSelfRef.__PVT__proc_state_nxt = 8U;
                    vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 1U;
                } else if ((((3U == (7U & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb4U, 3))) 
                             & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x85U))) 
                            & ((IData)(vlSelfRef.__PVT__compbuf_available) 
                               & (((VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU) 
                                    & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full))) 
                                   & (~ (IData)(vlSelfRef.__PVT__compdata_sending_ccreq))) 
                                  | (((~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU)) 
                                      & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                                     & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq))))))) {
                    vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                    vlSelfRef.__PVT__flittype_rdnosnp_mem 
                        = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU)));
                    vlSelfRef.__PVT__flittype_rdnosnp_l3 
                        = (1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU));
                    vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                    vlSelfRef.__PVT__proc_state_nxt 
                        = ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                            ? 0x800U : 1U);
                    vlSelfRef.__PVT__rden_snpreqfifo 
                        = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
                } else if (((IData)(vlSelfRef.__PVT__atom_rd_addr_inv_dealloc) 
                            & (~ (IData)(vlSelfRef.__PVT__compdata_clr_outstand)))) {
                    vlSelfRef.__PVT__avoid_clr_colln_nxt = 1U;
                    vlSelfRef.__PVT__rden_snpreqfifo = 1U;
                    vlSelfRef.__PVT__clr_pendingq = 1U;
                } else if (((((IData)(vlSelfRef.__PVT__readto_iconly) 
                              & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xaeU))) 
                             & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xafU))) 
                            & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x85U)))) {
                    vlSelfRef.__PVT__snp_tgtid_linear 
                        = VL_EXTEND_II(11,7, (0x7fU 
                                              & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7)));
                    if ((((((IData)(vlSelfRef.__PVT__apply_dct) 
                            & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                           & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq))) 
                          & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                         & (IData)(vlSelfRef.__PVT__respbuff_hasroom))) {
                        vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                        vlSelfRef.__PVT__flittype_snp = 1U;
                        vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                        vlSelfRef.__PVT__allocate_respbuf 
                            = ((IData)(vlSelfRef.__PVT__cachest_uc) 
                               | (IData)(vlSelfRef.__PVT__cachest_ud));
                        vlSelfRef.__PVT__replicate_in_cluster = 0U;
                        if (((IData)(vlSelfRef.__PVT__req_is_read_u) 
                             | (IData)(vlSelfRef.__PVT__req_is_makeread_u))) {
                            vlSelfRef.__PVT__proc_state_nxt = 0x800U;
                        } else {
                            vlSelfRef.__PVT__proc_state_nxt = 2U;
                            vlSelfRef.__PVT__send_memwr_to_l3_nxt = 1U;
                        }
                    } else if ((((((((IData)(vlSelfRef.__PVT__req_is_read_u) 
                                     | (IData)(vlSelfRef.__PVT__req_is_read_pu)) 
                                    | (IData)(vlSelfRef.__PVT__req_is_makeread_u)) 
                                   & (IData)(vlSelfRef.__PVT__cachest_sd)) 
                                  & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                                 & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                                & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))) {
                        vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                        vlSelfRef.__PVT__flittype_snp = 1U;
                        vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                        vlSelfRef.__PVT__replicate_in_cluster = 0U;
                        vlSelfRef.__PVT__proc_state_nxt = 8U;
                        vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 1U;
                    } else if ((((IData)(vlSelfRef.__PVT__req_link_crdt_avlble) 
                                 & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq))) 
                                & (((((IData)(vlSelfRef.__PVT__cachest_uc) 
                                      | (IData)(vlSelfRef.__PVT__cachest_ud)) 
                                     & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                                    & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                                   | (((~ (IData)(vlSelfRef.__PVT__cachest_uc)) 
                                       & (~ (IData)(vlSelfRef.__PVT__cachest_ud))) 
                                      & (IData)(vlSelfRef.__PVT__compbuf_available))))) {
                        vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                        vlSelfRef.__PVT__flittype_snp = 1U;
                        vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                        vlSelfRef.__PVT__allocate_respbuf 
                            = ((IData)(vlSelfRef.__PVT__cachest_uc) 
                               | (IData)(vlSelfRef.__PVT__cachest_ud));
                        vlSelfRef.__PVT__replicate_in_cluster = 0U;
                        if (vlSelfRef.__PVT__req_read_oc_notsd_in_ucudsd) {
                            vlSelfRef.__PVT__proc_state_nxt = 2U;
                            vlSelfRef.__PVT__send_memwr_to_l3_nxt = 1U;
                        } else if (vlSelfRef.__PVT__read_once_nosnp_needs_rcrcpt) {
                            vlSelfRef.__PVT__proc_state_nxt = 0x400U;
                        } else {
                            vlSelfRef.__PVT__proc_state_nxt 
                                = ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                                    ? 0x800U : 1U);
                            vlSelfRef.__PVT__rden_snpreqfifo 
                                = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
                        }
                    }
                } else if ((((((((IData)(vlSelfRef.__PVT__readto_both_memic) 
                                 & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xaeU))) 
                                & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xafU))) 
                               & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                              & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full))) 
                             & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x85U))) 
                            & (~ (IData)(vlSelfRef.__PVT__compdata_sending_ccreq)))) {
                    vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                    vlSelfRef.__PVT__flittype_rdnosnp_l3 = 1U;
                    vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                    vlSelfRef.__PVT__proc_state_nxt = 8U;
                } else if ((((IData)(vlSelfRef.__PVT__dataless_need_or_mayneed_dxfr_tomm) 
                             & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xafU))) 
                            & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xaeU)))) {
                    if ((((IData)(vlSelfRef.__PVT__cachest_sd) 
                          & (IData)(vlSelfRef.__PVT__reqis_clean_u)) 
                         & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U))) {
                        vlSelfRef.__PVT__proc_state_nxt = 8U;
                    } else if ((((((IData)(vlSelfRef.__PVT__cachest_sd) 
                                   & (IData)(vlSelfRef.__PVT__reqis_clean_u)) 
                                  & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                                 & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                                & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))) {
                        vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                        vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                        vlSelfRef.__PVT__flittype_snp = 1U;
                        vlSelfRef.__PVT__replicate_in_cluster = 0U;
                        vlSelfRef.__PVT__proc_state_nxt = 2U;
                        vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR_nxt = 1U;
                        vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 1U;
                        vlSelfRef.__PVT__send_memwr_to_l3_nxt = 1U;
                    } else if (((((((IData)(vlSelfRef.__PVT__cachest_uc) 
                                    | (IData)(vlSelfRef.__PVT__cachest_ud)) 
                                   & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                                  & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                                 & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                                & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))) {
                        vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                        vlSelfRef.__PVT__allocate_respbuf = 1U;
                        vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                        vlSelfRef.__PVT__flittype_snp = 1U;
                        vlSelfRef.__PVT__replicate_in_cluster = 0U;
                        vlSelfRef.__PVT__proc_state_nxt = 2U;
                        vlSelfRef.__PVT__send_memwr_to_l3_nxt = 1U;
                    } else if ((((IData)(vlSelfRef.__PVT__compbuf_available) 
                                 & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                                & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))) {
                        vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                        vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                        vlSelfRef.__PVT__flittype_snp = 1U;
                        vlSelfRef.__PVT__replicate_in_cluster = 0U;
                        vlSelfRef.__PVT__proc_state_nxt = 2U;
                        vlSelfRef.__PVT__send_memwr_to_l3_nxt = 1U;
                    }
                } else if (((((IData)(vlSelfRef.__PVT__readto_invalidate) 
                              | (IData)(vlSelfRef.__PVT__dataless_no_dxfr_tomm)) 
                             & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xafU))) 
                            & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xaeU)))) {
                    vlSelfRef.__PVT__proc_state_nxt = 8U;
                } else if ((((((IData)(vlSelfRef.__PVT__cmo_no_need_snooping) 
                               & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                              & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                             & (((VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU) 
                                  & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full))) 
                                 & (~ (IData)(vlSelfRef.__PVT__compdata_sending_ccreq))) 
                                | (((~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU)) 
                                    & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                                   & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq))))) 
                            & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x85U)))) {
                    vlSelfRef.__PVT__req_resp = 1U;
                    vlSelfRef.__PVT__respis_compresp = 1U;
                    vlSelfRef.__PVT__resp_opcode = 4U;
                    if (vlSelfRef.__PVT__gnt_rsp_snpreq) {
                        vlSelfRef.__PVT__allocate_compbuf_1st 
                            = (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU) 
                               & (IData)(vlSelfRef.__PVT__reqis_clean_si));
                        vlSelfRef.__PVT__allocate_respbuf = 1U;
                        vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                        vlSelfRef.__PVT__flittype_cmo_l3 
                            = (1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU));
                        vlSelfRef.__PVT__flittype_cmo_mem 
                            = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7dU)));
                        vlSelfRef.__PVT__proc_state_nxt = 1U;
                        vlSelfRef.__PVT__rden_snpreqfifo = 1U;
                    }
                } else if ((((((((IData)(vlSelfRef.__PVT__cmo_need_snooping_without_data) 
                                 | (IData)(vlSelfRef.__PVT__cmo_need_snooping_with_data)) 
                                & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                               & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                              & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full))) 
                             & (~ (IData)(vlSelfRef.__PVT__compdata_sending_ccreq))) 
                            & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x85U)))) {
                    vlSelfRef.__PVT__allocate_compbuf_1st 
                        = vlSelfRef.__PVT__reqis_clean_si;
                    vlSelfRef.__PVT__allocate_respbuf = 1U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                    vlSelfRef.__PVT__flittype_cmo_l3 = 1U;
                    vlSelfRef.__PVT__proc_state_nxt 
                        = ((IData)(vlSelfRef.__PVT__cmo_need_snooping_with_data)
                            ? 4U : 8U);
                }
            }
        } else if ((0x40U == (IData)(vlSelfRef.__PVT__proc_state))) {
            if ((((IData)(vlSelfRef.__PVT__compbuf_available) 
                  & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full))) 
                 & (~ (IData)(vlSelfRef.__PVT__compdata_sending_ccreq)))) {
                vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                vlSelfRef.__PVT__flittype_rdnosnp_l3 = 1U;
                vlSelfRef.__PVT__allocate_compbuf_2nd = 1U;
                vlSelfRef.__PVT__send_memwr_to_l3_nxt = 1U;
                vlSelfRef.__PVT__proc_state_nxt = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__proc_state))) {
            if (((IData)(vlSelfRef.__PVT__respbuff_hasroom) 
                 & ((((~ (IData)(vlSelfRef.__PVT__send_memwr_to_l3)) 
                      & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                     & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq))) 
                    | (((IData)(vlSelfRef.__PVT__send_memwr_to_l3) 
                        & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full))) 
                       & (~ (IData)(vlSelfRef.__PVT__compdata_sending_ccreq)))))) {
                vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                vlSelfRef.__PVT__flittype_wrnosnp_mem 
                    = (1U & (~ (IData)(vlSelfRef.__PVT__send_memwr_to_l3)));
                vlSelfRef.__PVT__flittype_wrnosnp_l3 
                    = vlSelfRef.__PVT__send_memwr_to_l3;
                vlSelfRef.__PVT__allocate_respbuf = 1U;
                vlSelfRef.__PVT__send_memwr_to_l3_nxt = 0U;
                if (vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR) {
                    vlSelfRef.__PVT__proc_state_nxt = 8U;
                } else if (vlSelfRef.__PVT__req_is_wr_unique_ptl) {
                    vlSelfRef.__PVT__proc_state_nxt = 4U;
                } else if (vlSelfRef.__PVT__read_once_nosnp_needs_rcrcpt) {
                    vlSelfRef.__PVT__proc_state_nxt = 0x400U;
                } else if (vlSelfRef.__PVT__writenosnp_cmo) {
                    vlSelfRef.__PVT__proc_state_nxt = 0x800U;
                } else {
                    vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 0U;
                    vlSelfRef.__PVT__proc_state_nxt 
                        = ((1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                            ? 0x800U : 1U);
                    vlSelfRef.__PVT__rden_snpreqfifo 
                        = (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
                }
            }
        } else if ((0x80U == (IData)(vlSelfRef.__PVT__proc_state))) {
            if (((((IData)(vlSelfRef.__PVT__respbuff_hasroom) 
                   & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                  & (~ (IData)(vlSelfRef.__PVT__l3reqflit_fifo_full))) 
                 & (~ (IData)(vlSelfRef.__PVT__compdata_sending_ccreq)))) {
                vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                vlSelfRef.__PVT__flittype_wrnosnp_l3 
                    = vlSelfRef.__PVT__writefull_clean_s;
                vlSelfRef.__PVT__flittype_cmo_l3 = 
                    (1U & (~ (IData)(vlSelfRef.__PVT__flittype_wrnosnp_l3)));
                vlSelfRef.__PVT__allocate_compbuf_2nd 
                    = ((IData)(vlSelfRef.__PVT__writeptl_cmo) 
                       | (IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_i));
                vlSelfRef.__PVT__allocate_respbuf = 1U;
                vlSelfRef.__PVT__proc_state_nxt = (
                                                   ((((((IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_s) 
                                                        | (IData)(vlSelfRef.__PVT__req_is_wr_cleanfl_clean_s)) 
                                                       | (IData)(vlSelfRef.__PVT__req_is_wr_uniqueptl_clean_s)) 
                                                      | (IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_i)) 
                                                     & ((IData)(vlSelfRef.__PVT__cachest_sd) 
                                                        | (IData)(vlSelfRef.__PVT__cachest_u))) 
                                                    & (~ 
                                                       VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U)))
                                                    ? 4U
                                                    : 
                                                   ((((IData)(vlSelfRef.__PVT__writeuniq_cmo) 
                                                      | (IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_i)) 
                                                     & VL_REDOR_I(
                                                                  (0x3fffffU 
                                                                   & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x8fU, 22))))
                                                     ? 8U
                                                     : 0x800U));
            }
        } else if ((4U == (IData)(vlSelfRef.__PVT__proc_state))) {
            if (((IData)(vlSelfRef.__PVT__cachest_sd) 
                 & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U)))) {
                if ((((IData)(vlSelfRef.__PVT__req_link_crdt_avlble) 
                      & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                     & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))) {
                    vlSelfRef.__PVT__allocate_compbuf_2nd = 1U;
                    vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata 
                        = vlSelfRef.__PVT__reqis_clean_si;
                    vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                    vlSelfRef.__PVT__replicate_in_cluster = 0U;
                    vlSelfRef.__PVT__proc_state_nxt 
                        = (((IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_s) 
                            | (IData)(vlSelfRef.__PVT__req_is_wr_cleanfl_clean_s))
                            ? 0x800U : ((IData)(vlSelfRef.__PVT__reqis_clean_s)
                                         ? 1U : 8U));
                    vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt 
                        = (1U & (~ (((IData)(vlSelfRef.__PVT__reqis_clean_s) 
                                     | (IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_s)) 
                                    | (IData)(vlSelfRef.__PVT__req_is_wr_cleanfl_clean_s))));
                    vlSelfRef.__PVT__rden_snpreqfifo 
                        = vlSelfRef.__PVT__reqis_clean_s;
                }
            } else if ((((IData)(vlSelfRef.__PVT__cachest_uc) 
                         | (IData)(vlSelfRef.__PVT__cachest_ud)) 
                        & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xa8U)))) {
                if (((((IData)(vlSelfRef.__PVT__req_link_crdt_avlble) 
                       & (IData)(vlSelfRef.__PVT__compbuf_available)) 
                      & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                     & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))) {
                    vlSelfRef.__PVT__allocate_compbuf_2nd = 1U;
                    vlSelfRef.__PVT__en_compbuf_2nd_for_snpdata 
                        = vlSelfRef.__PVT__reqis_clean_si;
                    vlSelfRef.__PVT__allocate_respbuf = 1U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                    vlSelfRef.__PVT__replicate_in_cluster = 0U;
                    vlSelfRef.__PVT__proc_state_nxt 
                        = (((IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_s) 
                            | (IData)(vlSelfRef.__PVT__req_is_wr_cleanfl_clean_s))
                            ? 0x800U : ((IData)(vlSelfRef.__PVT__reqis_clean_si)
                                         ? 1U : 8U));
                    vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt 
                        = (1U & (~ (((IData)(vlSelfRef.__PVT__reqis_clean_si) 
                                     | (IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_s)) 
                                    | (IData)(vlSelfRef.__PVT__req_is_wr_cleanfl_clean_s))));
                    vlSelfRef.__PVT__rden_snpreqfifo 
                        = vlSelfRef.__PVT__reqis_clean_si;
                }
            } else {
                vlSelfRef.__PVT__proc_state_nxt = 8U;
            }
        } else if ((0x200U == (IData)(vlSelfRef.__PVT__proc_state))) {
            if (vlSelfRef.__PVT__compbuf_available) {
                vlSelfRef.__PVT__xmt_snpORreq_flit = 1U;
                vlSelfRef.__PVT__flittype_rdnosnp_l3 = 1U;
                vlSelfRef.__PVT__allocate_compbuf_1st = 1U;
                vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 0U;
                vlSelfRef.__PVT__proc_state_nxt = (
                                                   (1U 
                                                    & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                                                    ? 0x800U
                                                    : 1U);
                vlSelfRef.__PVT__rden_snpreqfifo = 
                    (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
            }
        } else if ((8U == (IData)(vlSelfRef.__PVT__proc_state))) {
            vlSelfRef.__PVT__goto_EVAL_FURTHER_afterMemWR_nxt = 0U;
            if (VL_REDOR_I((0x3fffffU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x8fU, 22)))) {
                vlSelfRef.__PVT__proc_state_nxt = 0x10U;
                vlSelfRef.__PVT__share_vect_word_nxt 
                    = (0x3fffffU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x8fU, 22));
            } else if (((IData)(vlSelfRef.__PVT__req_is_wr_unique) 
                        | (IData)(vlSelfRef.__PVT__write_cmo))) {
                vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 0U;
                vlSelfRef.__PVT__proc_state_nxt = (
                                                   (1U 
                                                    & (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU) 
                                                       | (IData)(vlSelfRef.__PVT__write_cmo)))
                                                    ? 0x800U
                                                    : 1U);
                vlSelfRef.__PVT__rden_snpreqfifo = 
                    (1U & (~ (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU) 
                              | (IData)(vlSelfRef.__PVT__write_cmo))));
            }
        } else {
            vlSelfRef.__PVT__is_xmt_snp_uniq = 1U;
            if (((((IData)(vlSelfRef.__PVT__anyp_valid) 
                   & (IData)(vlSelfRef.__PVT__req_link_crdt_avlble)) 
                  & (IData)(vlSelfRef.__PVT__respbuff_hasroom)) 
                 & (~ (IData)(vlSelfRef.__PVT__compdata_sending_memreq)))) {
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0x15U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0x15U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0x15U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0x15U == (0x7fU 
                                              & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x14U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0x14U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0x14U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0x14U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0x14U == (0x7fU 
                                              & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x13U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0x13U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0x13U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0x13U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0x13U == (0x7fU 
                                              & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x12U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0x12U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0x12U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0x12U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0x12U == (0x7fU 
                                              & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x11U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0x11U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0x11U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0x11U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0x11U == (0x7fU 
                                              & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x10U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0x10U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0x10U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0x10U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0x10U == (0x7fU 
                                              & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xfU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0xfU))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0xfU;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0xfU != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0xfU == (0x7fU 
                                             & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xeU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0xeU))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0xeU;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0xeU != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0xeU == (0x7fU 
                                             & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xdU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0xdU))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0xdU;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0xdU != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0xdU == (0x7fU 
                                             & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xcU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0xcU))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0xcU;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0xcU != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0xcU == (0x7fU 
                                             & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xbU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0xbU))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0xbU;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0xbU != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0xbU == (0x7fU 
                                             & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xaU;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0xaU))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0xaU;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0xaU != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0xaU == (0x7fU 
                                             & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 9U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 9U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 9U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (9U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (9U == (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 8U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 8U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 8U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (8U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (8U == (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 7U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 7U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 7U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (7U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (7U == (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 6U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 6U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 6U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (6U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (6U == (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 5U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 5U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 5U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (5U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (5U == (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 4U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 4U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 4U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (4U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (4U == (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 3U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 3U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 3U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (3U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (3U == (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 2U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 2U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 2U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (2U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (2U == (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 1U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 1U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 1U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (1U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (1U == (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0U;
                if ((1U & VL_BITSEL_IIII(22, vlSelfRef.__PVT__share_vect_word, 0U))) {
                    vlSelfRef.__PVT__snp_tgtid_linear = 0U;
                    vlSelfRef.__PVT__xmt_snpORreq_flit 
                        = (((IData)(vlSelfRef.__PVT__invalidate_all_requester) 
                            | (0U != (IData)(vlSelfRef.__PVT__req_srcid_snp))) 
                           & (~ ((IData)(vlSelfRef.__PVT__req_alreadysent_toDirtyNode) 
                                 & (0U == (0x7fU & 
                                           VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))))));
                    vlSelfRef.__PVT__allocate_respbuf 
                        = vlSelfRef.__PVT__xmt_snpORreq_flit;
                    vlSelfRef.__PVT__flittype_snp = 1U;
                }
                vlSelfRef.__PVT__unnamedblk1__DOT__i = 0xffffffffU;
                vlSelfRef.__Vlvbound_h6854731d__0 = 0U;
                if (VL_LIKELY(((0x15U >= (0x1fU & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__snp_tgtid_linear), 0U, 5)))))) {
                    VL_ASSIGNBIT_II((0x1fU & VL_SEL_IIII(11, (IData)(vlSelfRef.__PVT__snp_tgtid_linear), 0U, 5)), vlSelfRef.__PVT__share_vect_word_nxt, vlSelfRef.__Vlvbound_h6854731d__0);
                }
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__anyp_valid)))) {
                vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 0U;
                vlSelfRef.__PVT__proc_state_nxt = (
                                                   (1U 
                                                    & (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU) 
                                                       | (IData)(vlSelfRef.__PVT__write_cmo)))
                                                    ? 0x800U
                                                    : 1U);
                vlSelfRef.__PVT__rden_snpreqfifo = 
                    (1U & (~ (VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU) 
                              | (IData)(vlSelfRef.__PVT__write_cmo))));
            }
        }
    } else if ((0x400U == (IData)(vlSelfRef.__PVT__proc_state))) {
        vlSelfRef.__PVT__req_resp = 1U;
        vlSelfRef.__PVT__resp_opcode = 8U;
        if (vlSelfRef.__PVT__gnt_rsp_snpreq) {
            vlSelfRef.__PVT__req_alreadysent_toDirtyNode_nxt = 0U;
            vlSelfRef.__PVT__proc_state_nxt = ((1U 
                                                & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                                                ? 0x800U
                                                : 1U);
            vlSelfRef.__PVT__rden_snpreqfifo = (1U 
                                                & (~ 
                                                   VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
        }
    } else if ((0x800U == (IData)(vlSelfRef.__PVT__proc_state))) {
        if (vlSelfRef.__PVT__respbuff_hasroom) {
            if (((IData)(vlSelfRef.__PVT__write_cmo) 
                 & (~ (IData)(vlSelfRef.__PVT__cmo_respbuf_allocated)))) {
                vlSelfRef.__PVT__allocate_respbuf = 1U;
                vlSelfRef.__PVT__cmo_respbuf_allocated_nxt 
                    = (1U & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU));
                vlSelfRef.__PVT__proc_state_nxt = (
                                                   (1U 
                                                    & VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU))
                                                    ? 0x800U
                                                    : 1U);
                vlSelfRef.__PVT__rden_snpreqfifo = 
                    (1U & (~ VL_BITSEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xadU)));
            } else {
                vlSelfRef.__PVT__proc_state_nxt = 1U;
                vlSelfRef.__PVT__allocate_respbuf = 1U;
                vlSelfRef.__PVT__rden_snpreqfifo = 1U;
            }
        }
    }
    vlSelfRef.__PVT__clr_outstand_cmd_pre = 0U;
    if (vlSelfRef.__PVT__clr_pendingq) {
        VL_ASSIGNBIT_IO((0x1fU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x1aU, 5)), vlSelfRef.__PVT__clr_outstand_cmd_pre);
    }
    VL_ASSIGNSEL_WI(73,9,0x2dU, vlSelfRef.__PVT__respbody_snpreq_s, 
                    VL_EXTEND_II(9,3, (7U & ((IData)(vlSelfRef.__PVT__respis_compresp)
                                              ? VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0xb0U, 3)
                                              : 0U))));
    vlSelfRef.__PVT__snp_tgtid_muxed = ((IData)(vlSelfRef.__PVT__is_xmt_snp_uniq)
                                         ? (IData)(vlSelfRef.__PVT__snp_tgtid_linear)
                                         : VL_EXTEND_II(11,7, 
                                                        (0x7fU 
                                                         & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x88U, 7))));
    VL_ASSIGNSEL_WI(73,17,0x1aU, vlSelfRef.__PVT__respbody_snpreq_s, 
                    VL_CONCAT_III(17,5,12, (IData)(vlSelfRef.__PVT__resp_opcode), 
                                  (0xfffU & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x32U, 12))));
    VL_ASSIGNSEL_WI(73,2,0x2bU, vlSelfRef.__PVT__respbody_snpreq_s, 
                    (3U & VL_SEL_IIII(32, (((4U == (IData)(vlSelfRef.__PVT__resp_opcode)) 
                                            | (5U == (IData)(vlSelfRef.__PVT__resp_opcode)))
                                            ? VL_EXTEND_II(32,2, 
                                                           (3U 
                                                            & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x86U, 2)))
                                            : 0U), 0U, 2)));
    vlSelfRef.__PVT__flittype_cmo = ((IData)(vlSelfRef.__PVT__flittype_cmo_mem) 
                                     | (IData)(vlSelfRef.__PVT__flittype_cmo_l3));
    vlSelfRef.__PVT__ic_TX_SNPFLITV = ((IData)(vlSelfRef.__PVT__xmt_snpORreq_flit) 
                                       & ((((IData)(vlSelfRef.__PVT__flittype_snp) 
                                            | (IData)(vlSelfRef.__PVT__flittype_rdnosnp_mem)) 
                                           | (IData)(vlSelfRef.__PVT__flittype_wrnosnp_mem)) 
                                          | (IData)(vlSelfRef.__PVT__flittype_cmo_mem)));
    vlSelfRef.__PVT__flittype_rdnosnp = ((IData)(vlSelfRef.__PVT__flittype_rdnosnp_mem) 
                                         | (IData)(vlSelfRef.__PVT__flittype_rdnosnp_l3));
    vlSelfRef.__PVT__cc_reqflit_valid = ((IData)(vlSelfRef.__PVT__xmt_snpORreq_flit) 
                                         & (((IData)(vlSelfRef.__PVT__flittype_rdnosnp_l3) 
                                             | (IData)(vlSelfRef.__PVT__flittype_wrnosnp_l3)) 
                                            | (IData)(vlSelfRef.__PVT__flittype_cmo_l3)));
    vlSelfRef.__PVT__flittype_wrnosnp = ((IData)(vlSelfRef.__PVT__flittype_wrnosnp_mem) 
                                         | (IData)(vlSelfRef.__PVT__flittype_wrnosnp_l3));
    vlSelfRef.__PVT__wren_compbuff_num_1st = vlSelfRef.__PVT__allocate_compbuf_1st;
    vlSelfRef.__PVT__wren_compbuff_num_2nd = vlSelfRef.__PVT__allocate_compbuf_2nd;
    vlSelfRef.__PVT__allocate_compbuf = ((IData)(vlSelfRef.__PVT__allocate_compbuf_1st) 
                                         | (IData)(vlSelfRef.__PVT__allocate_compbuf_2nd));
    vlSelfRef.__PVT__o_xmt_snpreq_linear_tgtid = vlSelfRef.__PVT__snp_tgtid_muxed;
    VL_ASSIGNSEL_WI(119,11,0x6cU, vlSelfRef.__PVT__ic_TX_FLIT_SNPREQ_s, vlSelfRef.__PVT__i_xmt_snpreq_full_tgtid);
    VL_CONCAT_WIW(74,1,73, vlSelfRef.__PVT__respbody_snpreq, 
                  (1U & (~ (IData)(vlSelfRef.__PVT__req_nonsnpable))), vlSelfRef.__PVT__respbody_snpreq_s);
    vlSelfRef.__PVT__consumed_crdt = ((IData)(vlSelfRef.__PVT__ic_TX_SNPFLITV) 
                                      | (IData)(vlSelfRef.__PVT__compdata_sending_memreq));
    VL_ASSIGNSEL_WI(151,4,0x93U, vlSelfRef.__PVT__ic_TX_FLIT_MEMREQ_s, 
                    VL_CONCAT_III(4,3,1, VL_EXTEND_II(3,2, 
                                                      (3U 
                                                       & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x7fU, 2))), 
                                  ((IData)(vlSelfRef.__PVT__flittype_rdnosnp) 
                                   & (IData)(vlSelfRef.__PVT__ExpCompAck_Rdnosnp))));
    vlSelfRef.__PVT__memreq_opcode = 0U;
    if (vlSelfRef.__PVT__flittype_wrnosnp) {
        vlSelfRef.__PVT__memreq_opcode = (0x7fU & (
                                                   (0x1cU 
                                                    == 
                                                    (0x7fU 
                                                     & VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7)))
                                                    ? 0x1cU
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__req_is_wr_zero)
                                                     ? 0x44U
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__writenosnp_cmo)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__flittype_wrnosnp_l3)
                                                       ? 0x1dU
                                                       : 
                                                      VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))
                                                      : 0x1dU))));
    } else if (vlSelfRef.__PVT__flittype_rdnosnp) {
        vlSelfRef.__PVT__memreq_opcode = 4U;
    } else if (vlSelfRef.__PVT__flittype_cmo) {
        vlSelfRef.__PVT__memreq_opcode = (0x7fU & (
                                                   (((IData)(vlSelfRef.__PVT__req_is_wr_nosnpfl_clean_i) 
                                                     | (IData)(vlSelfRef.__PVT__req_is_wr_nosnpfl_clean_s)) 
                                                    | (IData)(vlSelfRef.__PVT__req_is_wr_uniquefl_clean_s))
                                                    ? 0xaU
                                                    : 
                                                   (((((IData)(vlSelfRef.__PVT__writeptl_cmo) 
                                                       | (IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_i)) 
                                                      | (IData)(vlSelfRef.__PVT__req_is_wr_backfl_clean_s)) 
                                                     | (IData)(vlSelfRef.__PVT__req_is_wr_cleanfl_clean_s))
                                                     ? 9U
                                                     : 
                                                    VL_SEL_IWII(191, vlSelfRef.__PVT__snpreqcmd, 0x3eU, 7))));
    }
    vlSymsp->TOP__sig_topology_top__cl0_sig_clustertop__inst_cl0_clustercore__sig_chi_cc_top_0__sig_chi_xmt_snpreq_0__sig_chi_crdt_recv_0.__PVT__consumed_crdt 
        = vlSelfRef.__PVT__consumed_crdt;
}
